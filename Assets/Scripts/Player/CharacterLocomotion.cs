using System.Net;
using Mirror;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations.Rigging;
using Cinemachine;
using System.Collections;

public class CharacterLocomotion : NetworkBehaviour {

    //--- Components
    [SerializeField] private Animator rigController;
    [SerializeField] private Rig bodyRig;
    private CapsuleCollider stillCollider;
    private Animator characterAnimator;
    private CharacterController characterController;
    private CharacterStateManager csm;
    private InputManager inputManager;
    //--- 

    #region Movement variables
    [Header("Ground")]
    public float groundSpeed;
    public float stepDown;
    public float jumpDamp;
    [Header("Jumping and Airbone")]
    public float jumpHeight;
    public float gravity;
    public float airControl;
    [Header("Physics")]
    public float pushPower;
    public float whenHitPower;
    public float mass;
    [Header("Flying")]
    public float verticalFlySpeed;
    public float horzontalFlySpeed;
    public float flySprintFactor;
    #endregion

    private Vector3 characterVelocity;
    private Vector3 rootMotion;

    private Vector2 input;
    private Vector2 rawInput;
    private Vector3 impact = Vector3.zero;

    private enum AerealState { Grounded = 0, Jumping = 1, Flying = 2 };
    private AerealState aerealState;

    #region Animation params
    private int isSprintingParam = Animator.StringToHash("isSprinting");
    private int isJumpingParam = Animator.StringToHash("isJumping");
    private int isFlyingParam = Animator.StringToHash("isFlying");
    private int isFlyingFastParam = Animator.StringToHash("isFlyingFast");
    private int xInputParam = Animator.StringToHash("InputX");
    private int yInputParam = Animator.StringToHash("InputY");
    private int xRawInputParam = Animator.StringToHash("RawInputX");
    private int yRawInputParam = Animator.StringToHash("RawInputY");
    private int stateTimeParam = Animator.StringToHash("stateTime");
    private int isAirboneParam = Animator.StringToHash("isAirbone");
    #endregion

    private void Start() {
        if (!hasAuthority) enabled = false;
        //Init variables
        stillCollider = GetComponent<CapsuleCollider>();
        characterAnimator = GetComponent<Animator>();
        characterController = GetComponent<CharacterController>();
        csm = GetComponent<CharacterStateManager>();
        inputManager = GetComponent<InputManager>();

        RegisterInputs();
    }

    private void RegisterInputs() {
        inputManager.onMovementKeyPressed += MovementInputs;
        inputManager.onJumpKeyPressed += Jump;
        inputManager.onJumpKeyContinuos += MoveFlyingVertical;
        inputManager.onSprintKeyPressed += Sprint;
    }

    [Client]
    private void FixedUpdate() {
        if (!hasAuthority || !csm.isAlive) return;

        //Do the CharacterController.Move() in FixedUpdate to avoid jittery movement
        MovePlayer();
        MovePlayerWithPhysics();
    }

    #region Movement
    [Client]
    private void MovementInputs(float inputX, float inputY, float rawInputX, float rawInputY, bool sprinting) {
        if (!csm.canMove) {
            FullStop();
            return;
        }

        characterAnimator.ResetTrigger("dodge");
        if (Input.GetKeyDown(KeyCode.C)) {
            characterAnimator.SetTrigger("dodge");
        }

        input.x = inputX;
        input.y = inputY;

        rawInput.x = rawInputX;
        rawInput.y = rawInputY;

        //This will update the animator, the player will move in FixedUpdate for a smoother movement
        SetAnimatorMovementParams(sprinting);
    }

    private void SetAnimatorMovementParams(bool sprinting) {
        //Strafe movement
        characterAnimator.SetFloat(xInputParam, input.x);
        characterAnimator.SetFloat(yInputParam, input.y);


        characterAnimator.SetFloat(xRawInputParam, rawInput.x);
        characterAnimator.SetFloat(yRawInputParam, rawInput.y);
    }

    private void Sprint(bool sprinting) {
        //Sprinting params
        csm.CmdSetIsRunning(sprinting);
        characterAnimator.SetBool(isSprintingParam, sprinting);
        rigController.SetBool(isSprintingParam, sprinting);

        if (csm.isFlying) {
            if (sprinting) {
                StopCoroutine(nameof(BodyRigWeight));
                StartCoroutine(nameof(BodyRigWeight), 0f);
            } else if (!csm.isInFreeLook) {
                //Only return to normal rig weight if you're not in free look
                //The rig will be set after
                StopCoroutine(nameof(BodyRigWeight));
                StartCoroutine(nameof(BodyRigWeight), 1f);
            }
        }
    }

    private void MovePlayer() {
        //Move depending on your actual state
        switch (aerealState) {
            case AerealState.Grounded:
                MoveOnGround();
                break;

            case AerealState.Jumping:
                MoveInAir();
                break;

            case AerealState.Flying:
                MoveFlyingHorizontal();
                break;
        }

        //After any movement if perfomed reseting the rootMotion is needed for it to no stack up
        rootMotion = Vector3.zero;
    }

    private void MoveOnGround() {
        //Calculate the forward amount based on the animator speed and the given factor
        Vector3 stepForwardAmount = rootMotion * groundSpeed;
        //Calculate the down factor so there's some gravity
        Vector3 stepDownAmount = Vector3.down * stepDown;

        //Add up vectors and move
        characterController.Move(stepForwardAmount + stepDownAmount);

        //If the player is no longer grounded we need to update the movement
        if (!characterController.isGrounded) {
            SetInAir(0);
        }
    }
    #endregion

    #region Jumping (Jumping/Flying)
    [Client]
    private void Jump() {
        //Depending on the current state do something
        if (aerealState == AerealState.Grounded) {
            //Velocity with which the player will go up
            float jumpVelocity = Mathf.Sqrt(gravity * jumpHeight);
            //Update the animator
            characterAnimator.SetBool(isJumpingParam, true);
            SetInAir(jumpVelocity);
        } else if (aerealState == AerealState.Jumping && csm.canFly) {
            StartFlying();
        }
    }

    private void SetInAir(float verticalVelocity) {
        aerealState = AerealState.Jumping;
        //Horizontal velocity, needed to keep momentum
        characterVelocity = characterAnimator.velocity * jumpDamp * groundSpeed;
        //Vertical velocity
        characterVelocity.y = verticalVelocity;
        //Tell the animator the player is airbone
        characterAnimator.SetBool(isAirboneParam, true);
    }

    private void MoveInAir() {
        //Make the player go down by gravity
        characterVelocity.y -= gravity * Time.deltaTime;
        //Displacement, I don't really know
        Vector3 displacement = characterVelocity * Time.deltaTime;

        //How much to move from the current position
        displacement += CalculateAirControl();
        characterController.Move(displacement);

        //Constantly check if in any moment the player becomes grounded
        aerealState = characterController.isGrounded ? AerealState.Grounded : AerealState.Jumping;

        //Only set isAirbone and isJumping to false when you hit ground
        //These two variables have already been set to true when in air or jumping
        if (characterController.isGrounded) {
            characterAnimator.SetBool(isJumpingParam, false);
            characterAnimator.SetBool(isAirboneParam, false);
        }
    }

    Vector3 CalculateAirControl() {
        //Just calculate how much can you move while airbone based in airControl
        return ((transform.forward * input.y) + (transform.right * input.x)) * (airControl / 100);
    }

    private void StartFlying() {
        //Change the local state, as well as the state machine and the animator params
        aerealState = AerealState.Flying;
        csm.CmdSetIsFlying(true);
        characterAnimator.SetBool(isFlyingParam, true);
    }

    public void StopFlying() {
        //Set the current vertical speed so you don't freeze in mid air
        SetInAir(characterController.velocity.y);
        //Update states
        csm.isFlying = false;
        //Reset both params since one is used when sprinting
        characterAnimator.SetBool("isFlying", false);
    }

    private void MoveFlyingHorizontal() {
        float sprintFactor = csm.isRunning ? flySprintFactor : 1f;
        float xMovement = input.y * horzontalFlySpeed;
        float zMovement = input.x * horzontalFlySpeed;

        Vector3 movement = (transform.forward * xMovement) + (transform.right * zMovement);

        characterController.Move(movement * sprintFactor);
    }

    private void MoveFlyingVertical() {
        characterController.Move(Vector3.up * verticalFlySpeed);
    }
    #endregion

    [Client]
    void Update() {
        if (!hasAuthority) return;

        //Set state time param depending on the current state time, use repeat mathf function to do it from 0-1
        characterAnimator.SetFloat(stateTimeParam, Mathf.Repeat(characterAnimator.GetCurrentAnimatorStateInfo(0).normalizedTime, 1f));
    }

    private void UpdateKeyPresses() {
        if (Input.GetKeyDown(KeyCode.C)) {
            if (aerealState == AerealState.Flying) {
                StopFlying();
            }
        }
    }

    IEnumerator BodyRigWeight(float end) {
        float velocity = 0.0f;
        float smoothTime = 0.3f;
        do {
            bodyRig.weight = Mathf.SmoothDamp(bodyRig.weight, end, ref velocity, smoothTime);
            yield return new WaitForEndOfFrame();
        } while (bodyRig.weight > 0.001f && bodyRig.weight < 0.999f);
        //After the end it will be either 0.001 or 0.999, and when it reaches that point just snap it to the end
        bodyRig.weight = end;
    }

    #region Animations events
    private void StartCrouch() {
        if (!hasAuthority) return;
        AdjustCollisionsToCrouch();
    }

    private void StopCrouch() {
        if (!hasAuthority) return;
        AdjustCollisionsToNormal();
    }
    #endregion

    #region Collisions and impacts
    private float momentumToMove = 0.5f;
    private float momentumToMovePlayerThreshold = 4f;

    private float crouchCollisionsCenter = 0.5f;
    private float crouchCollisionsHeight = 0.8f;

    private void AdjustCollisionsToCrouch() {
        characterController.height = crouchCollisionsHeight;
        characterController.center = new Vector3(characterController.center.x, crouchCollisionsCenter, characterController.center.z);

        stillCollider.height = crouchCollisionsHeight;
        stillCollider.center = new Vector3(stillCollider.center.x, crouchCollisionsCenter, stillCollider.center.z);

        CmdAdjustCollisionsToCrouch();
    }

    private void AdjustCollisionsToNormal() {
        characterController.center = new Vector3(characterController.center.x, 0.9f, characterController.center.z);
        characterController.height = 1.6f;

        stillCollider.center = new Vector3(stillCollider.center.x, 0.9f, stillCollider.center.z);
        stillCollider.height = 1.6f;

        // characterController.Move(Vector3.up * 0.7f);
        CmdAdjustCollisionsToNormal();
    }

    [Command]
    private void CmdAdjustCollisionsToCrouch() {
        characterController.center = new Vector3(characterController.center.x, crouchCollisionsCenter, characterController.center.z);
        characterController.height = crouchCollisionsHeight;

        stillCollider.center = new Vector3(stillCollider.center.x, crouchCollisionsCenter, stillCollider.center.z);
        stillCollider.height = crouchCollisionsHeight;
    }

    [Command]
    private void CmdAdjustCollisionsToNormal() {
        characterController.center = new Vector3(characterController.center.x, 0.9f, characterController.center.z);
        characterController.height = 1.6f;

        stillCollider.center = new Vector3(stillCollider.center.x, 0.9f, stillCollider.center.z);
        stillCollider.height = 1.6f;
    }

    private void MovePlayerWithPhysics() {
        //Every time the player is hit the impact var will increase
        if (impact.magnitude > momentumToMove) { //Only move if there's enough momentum to move
            characterController.Move(impact * Time.deltaTime);
        }

        //Decrease impact to 0 over time
        if (!Mathf.Approximately(impact.magnitude, 0))
            impact = Vector3.Lerp(impact, Vector3.zero, 5 * Time.deltaTime);

        //USE DELEGATES POGCHAMPERS
        // Disable collider if you're moving and it's enabled otherwise enable it
        if ((input.x != 0 || input.y != 0) && stillCollider.enabled)
            stillCollider.enabled = false;
        else if (input.x == 0 && input.y == 0 && !stillCollider.enabled)
            stillCollider.enabled = true;
    }

    void OnControllerColliderHit(ControllerColliderHit hit) {
        //This may be disabled in the server :/
        if (!NetworkServer.active) return;

        Rigidbody hitRigidbody = hit.collider.attachedRigidbody;
        NetworkIdentity networkIdentity = hit.collider.GetComponent<NetworkIdentity>();

        //Hit object has no rigidbody, no networkIdentity or no physics
        if (hitRigidbody == null || networkIdentity == null || hitRigidbody.isKinematic)
            return;

        OnRigidbodyHit(hitRigidbody);

        //We dont want to push objects below us
        if (hit.moveDirection.y < -0.3f)
            return;

        //Calculate push direction from move direction,
        //We only push objects to the sides never up and down
        Vector3 pushDir = new Vector3(hit.moveDirection.x, 0, hit.moveDirection.z);
        //Maybe multiply by velocity
        // Debug.Log("CharacterVel: " + characterAnimator.velocity);
        // Debug.Log("CharacterVelFactor: " + characterVelocity);
        // Debug.Log("RootMotion: " + rootMotion);

        // Apply the push
        PushObject(networkIdentity, pushDir);
    }

    //This will only be able to execute when the player isn't moving, because when moving the collider is disabled
    //This is due to have the character collider which doesn't really collide when idle
    private void OnCollisionEnter(Collision hit) {
        //This may be disabled in the server :/
        if (!NetworkServer.active) return;

        Rigidbody hitRigidbody = hit.collider.attachedRigidbody;
        NetworkIdentity networkIdentity = hit.collider.GetComponent<NetworkIdentity>();

        //Hit object has no rigidbody, no networkIdentity or no physics
        if (hitRigidbody == null || networkIdentity == null || hitRigidbody.isKinematic)
            return;

        OnRigidbodyHit(hitRigidbody);
    }

    private void OnRigidbodyHit(Rigidbody hitRigidbody) {
        if (hitRigidbody.velocity.magnitude > momentumToMovePlayerThreshold)
            AddImpact(hitRigidbody.velocity * whenHitPower * hitRigidbody.mass);
    }

    [Server]
    void PushObject(NetworkIdentity networkIdentity, Vector3 pushDir) {
        networkIdentity.GetComponent<Rigidbody>().velocity = pushDir * pushPower;
    }

    void AddImpact(Vector3 force) {
        var dir = force.normalized;
        dir.y = 0.5f; // add some velocity upwards - it's cooler this way
        impact += dir.normalized * force.magnitude / mass;
    }
    #endregion

    #region Deprecated
    private bool CanFlyFast() {
        return csm.isAlive && csm.hasCursorLocked
            && !csm.isShooting && !csm.isReloading && !csm.isAiming
            && !csm.isAnimatingWeapon && !csm.isCastingAbility && csm.isFlying;
    }
    #endregion

    public void FullStop() {
        rootMotion = Vector3.zero;
        characterVelocity = Vector3.zero;
        input = Vector2.zero;

        characterAnimator.SetFloat(xInputParam, 0f);
        characterAnimator.SetFloat(yInputParam, 0f);
    }

    [Client]
    private void OnAnimatorMove() {
        rootMotion += characterAnimator.deltaPosition;
    }
}