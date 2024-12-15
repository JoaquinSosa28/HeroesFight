using Cinemachine;
using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovementController : NetworkBehaviour
{
    private const string CONDITION = "condition";
    private const string RUNNING = "isRunning";
    private const string TURN_WALKING = "turnWalking";

    private const int WALKING_FORWARD = 1;
    private const int WALKING_BACKWARDS = 2;
    private const int TURN_LEFT = 3;
    private const int TURN_RIGHT = 4;
    private const int TURN_WALKING_LEFT = 1;
    private const int TURN_WALKING_RIGHT = 2;

    //public float speed = 12f;
    public float gravity = -9.81f;
    public float jumpHeight = 2f;

    public Transform groundCheck;
    public float groundDistance = 0.4f;
    public LayerMask groundMask;

    Vector3 velocity;

    public Animator anim;

    [SerializeField]
    private Animator animator;
    [SerializeField]
    private float rotationDegreePerSecond = 120f;
    [SerializeField]
    private float directionSpeed = 1.5f;
    [SerializeField]
    private float directionDampTime = 0.25f;
    [SerializeField]
    private float speedDampTime = 0.05f;
    [SerializeField]
    private float fovDampTime = 3f;
    [SerializeField]
    private float jumpMultiplier = 1f;
    [SerializeField]
    private CapsuleCollider capCollider;
    [SerializeField]
    private float jumpDist = 1f;
    [SerializeField]
    private Camera cam;


    // Private global only
    private float leftX = 0f;
    private float leftY = 0f;
    private AnimatorStateInfo stateInfo;
    private AnimatorTransitionInfo transInfo;
    private float speed = 0f;
    private float direction = 0f;
    private float charAngle = 0f;
    private const float SPRINT_SPEED = 4.0f;
    private const float SPRINT_FOV = 75.0f;
    private const float NORMAL_FOV = 60.0f;
    private float capsuleHeight;


    // Hashes
    private int m_LocomotionId = 0;
    private int m_LocomotionPivotLId = 0;
    private int m_LocomotionPivotRId = 0;
    private int m_LocomotionPivotLTransId = 0;
    private int m_LocomotionPivotRTransId = 0;

    public Animator Animator
    {
        get
        {
            return this.animator;
        }
    }

    public float Speed
    {
        get
        {
            return this.speed;
        }
    }

    [SerializeField] private float movementSpeed = 5f;
    private bool isCursorLocked = false;
    //[SerializeField] private CharacterController controller = null;

    //private Vector2 previousInput;

    private Controls controls;

    private Controls Controls
    {
        get
        {
            if (controls != null) return controls;

            return controls = new Controls();
        }
    }

    public override void OnStartAuthority()
    {
        enabled = true;

        //Controls.Player.Move.performed += ctx => SetMovement(ctx.ReadValue<Vector2>());
        //Controls.Player.Move.canceled += ctx => ResetMovement();

        m_LocomotionId = Animator.StringToHash("Base Layer.Locomotion");
        m_LocomotionPivotLId = Animator.StringToHash("Base Layer.LocomotionPivotL");
        m_LocomotionPivotRId = Animator.StringToHash("Base Layer.LocomotionPivotR");
        m_LocomotionPivotLTransId = Animator.StringToHash("Base Layer.Locomotion -> Base Layer.LocomotionPivotL");
        m_LocomotionPivotRTransId = Animator.StringToHash("Base Layer.Locomotion -> Base Layer.LocomotionPivotR");

        CinemachineFreeLook camera = GameObject.Find("ThirdPersonCamera").GetComponent<CinemachineFreeLook>();
        camera.m_Follow = transform;
        camera.m_LookAt = transform;

        cam = Camera.main;

        SwitchLockCursor();
    }

    [ClientCallback]
    private void OnEnable() => Controls.Enable();

    [ClientCallback]
    private void OnDisable() => Controls.Disable();

    [ClientCallback]
    private void Update() 
    {
        if (!hasAuthority) return;

        NewInputMode();
        if (Input.GetKeyDown(KeyCode.Escape))
            SwitchLockCursor();
    }

    /*[Client]
    private void SetMovement(Vector2 movement)
        => previousInput = movement;*/

    /*[Client]
    private void ResetMovement()
        => previousInput = Vector2.zero;*/

    /*[Client]
    private void Move()
    {
        Vector3 right = controller.transform.right;
        Vector3 forward = controller.transform.forward;

        right.y = 0f;
        forward.y = 0;

        Vector3 movement = right.normalized * previousInput.x +
                            forward.normalized * previousInput.y;

        controller.Move(movement * movementSpeed * Time.deltaTime);
    }*/

    [Client]
    private void SwitchLockCursor()
    {
        Cursor.lockState = isCursorLocked ? CursorLockMode.None : CursorLockMode.Locked;
        Cursor.visible = isCursorLocked;
        isCursorLocked = !isCursorLocked;
    }

    [ClientCallback]
    void FixedUpdate()
    {
        if (!hasAuthority) return;

        // Rotate character model if stick is tilted right or left, but only if character is moving in that direction
        if (IsInLocomotion() && !IsInPivot() && ((direction >= 0 && leftX >= 0) || (direction < 0 && leftX < 0)))
        {
            Vector3 rotationAmount = Vector3.Lerp(Vector3.zero, new Vector3(0f, rotationDegreePerSecond * (leftX < 0f ? -1f : 1f), 0f), Mathf.Abs(leftX));
            Quaternion deltaRotation = Quaternion.Euler(rotationAmount * Time.deltaTime);
            this.transform.rotation = (this.transform.rotation * deltaRotation);
        }

        if (IsInJump())
        {
            float oldY = transform.position.y;
            transform.Translate(Vector3.up * jumpMultiplier * animator.GetFloat("JumpCurve"));
            if (IsInLocomotionJump())
            {
                transform.Translate(Vector3.forward * Time.deltaTime * jumpDist);
            }
            //capCollider.height = capsuleHeight + (animator.GetFloat("CapsuleCurve") * 0.5f);
            //cam.transform.Translate(Vector3.up * (transform.position.y - oldY));
        }
    }

    [Client]
    private void NewInputMode()
    {
        if (!hasAuthority) return;

        stateInfo = animator.GetCurrentAnimatorStateInfo(0);
        transInfo = animator.GetAnimatorTransitionInfo(0);

        // Press A to jump
        if (Input.GetButton("Jump"))
        {
            animator.SetBool("Jump", true);
        }
        else
        {
            animator.SetBool("Jump", false);
        }

        // Pull values from controller/keyboard
        leftX = Input.GetAxis("Horizontal");
        leftY = Input.GetAxis("Vertical");

        charAngle = 0f;
        direction = 0f;
        float charSpeed = 0f;

        // Translate controls stick coordinates into world/cam/character space
        if (cam != null)
            StickToWorldspace(this.transform, cam.transform, ref direction, ref charSpeed, ref charAngle, IsInPivot());

        // Press B to sprint
        if (Input.GetKey(KeyCode.LeftShift))
        {
            speed = Mathf.Lerp(speed, SPRINT_SPEED, Time.deltaTime);
            //gamecam.GetComponent<Camera>().fieldOfView = Mathf.Lerp(gamecam.GetComponent<Camera>().fieldOfView, SPRINT_FOV, fovDampTime * Time.deltaTime);
        }
        else
        {
            speed = charSpeed;
            //gamecam.GetComponent<Camera>().fieldOfView = Mathf.Lerp(gamecam.GetComponent<Camera>().fieldOfView, NORMAL_FOV, fovDampTime * Time.deltaTime);
        }

        animator.SetFloat("Speed", speed, speedDampTime, Time.deltaTime);
        animator.SetFloat("Direction", direction, directionDampTime, Time.deltaTime);

        if (speed > 0)    // Dead zone
        {
            if (!IsInPivot())
            {
                animator.SetFloat("Angle", charAngle);
            }
        }
        if (speed == 0 && Mathf.Abs(leftX) < 0.01f)    // Dead zone
        {
            animator.SetFloat("Direction", 0f);
            animator.SetFloat("Angle", 0f);
        }
    }

    [Client]
    public bool IsInJump()
    {
        return (IsInIdleJump() || IsInLocomotionJump());
    }

    [Client]
    public bool IsInIdleJump()
    {
        return animator.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.IdleJump");
    }

    [Client]
    public bool IsInLocomotionJump()
    {
        return animator.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.LocomotionJump");
    }

    [Client]
    public bool IsInPivot()
    {
        return stateInfo.nameHash == m_LocomotionPivotLId ||
            stateInfo.nameHash == m_LocomotionPivotRId ||
            transInfo.nameHash == m_LocomotionPivotLTransId ||
            transInfo.nameHash == m_LocomotionPivotRTransId;
    }

    [Client]
    public bool IsInLocomotion()
    {
        return stateInfo.nameHash == m_LocomotionId;
    }

    [Client]
    public void StickToWorldspace(Transform root, Transform camera, ref float directionOut, ref float speedOut, ref float angleOut, bool isPivoting)
    {
        Vector3 rootDirection = root.forward;

        Vector3 stickDirection = new Vector3(leftX, 0, leftY);

        speedOut = stickDirection.sqrMagnitude;

        // Get camera rotation
        Vector3 CameraDirection = camera.forward;
        CameraDirection.y = 0.0f; // kill Y
        Quaternion referentialShift = Quaternion.FromToRotation(Vector3.forward, Vector3.Normalize(CameraDirection));

        // Convert joystick input in Worldspace coordinates
        Vector3 moveDirection = referentialShift * stickDirection;
        Vector3 axisSign = Vector3.Cross(moveDirection, rootDirection);

        Debug.DrawRay(new Vector3(root.position.x, root.position.y + 2f, root.position.z), moveDirection, Color.green);
        Debug.DrawRay(new Vector3(root.position.x, root.position.y + 2f, root.position.z), rootDirection, Color.magenta);
        Debug.DrawRay(new Vector3(root.position.x, root.position.y + 2f, root.position.z), stickDirection, Color.blue);
        Debug.DrawRay(new Vector3(root.position.x, root.position.y + 2.5f, root.position.z), axisSign, Color.red);

        float angleRootToMove = Vector3.Angle(rootDirection, moveDirection) * (axisSign.y >= 0 ? -1f : 1f);
        if (!isPivoting)
        {
            angleOut = angleRootToMove;
        }
        angleRootToMove /= 180f;

        directionOut = angleRootToMove * directionSpeed;
    }


}
