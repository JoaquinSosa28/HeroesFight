using System.Collections;
using Cinemachine;
using Mirror;
using UnityEngine;
using UnityEngine.Animations.Rigging;

public class CharacterAiming : NetworkBehaviour {

    [Header("Camera config")]
    [SerializeField] float turnSpeed = 15;

    //--- Camera pos
    [HideInInspector] public AxisState xAxis;
    [HideInInspector] public AxisState yAxis;
    //--- 

    #region Components
    [Header("Needed components")]
    [SerializeField] Transform cameraLookAt;
    [SerializeField] Rig bodyRig;
    [SerializeField] CinemachineVirtualCamera playerCamera;
    private Camera mainCamera;
    private CharacterStateManager csm;
    private InputManager inputManager;
    private Animator animator;
    #endregion

    private bool isCursorLocked = true;

    //Animator params
    int isAimingParam = Animator.StringToHash("isAiming");


    [ClientCallback]
    void Start() {
        if (!hasAuthority) return;
        mainCamera = Camera.main;

        playerCamera.gameObject.SetActive(true);
        playerCamera.m_LookAt = cameraLookAt.transform;
        playerCamera.m_Follow = cameraLookAt.transform;

        csm = GetComponent<CharacterStateManager>();
        inputManager = GetComponent<InputManager>();

        inputManager.onFreeCamKeyPressed += FreeLookCameraInputs;
        inputManager.onPauseKeyPressed += Pause;
        inputManager.onSingleClicksPressed += Aim;

        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;

        animator = GetComponent<Animator>();
    }

    //Handle camera movement
    void FixedUpdate() {
        if (!hasAuthority || !csm.isAlive) return;

        if (csm.hasCursorLocked && csm.canMoveCamera) {
            xAxis.Update(Time.fixedDeltaTime);
            yAxis.Update(Time.fixedDeltaTime);
        }

        cameraLookAt.eulerAngles = new Vector3(yAxis.Value, xAxis.Value, 0);

        float yawCamera = mainCamera.transform.rotation.eulerAngles.y;
        float xawCamera = 0f;
        if (csm.isFlying) {
            xawCamera = mainCamera.transform.rotation.eulerAngles.x;
        }

        if (!csm.isInFreeLook)
            transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(xawCamera, yawCamera, 0), turnSpeed * Time.fixedDeltaTime);
    }

    private void Pause() {
        //For now there's no menu :(
        //I'll have to add one later
        if (csm.isAnyMenuOpened)
            Inventory.instance.DisableInventory();
        SwitchLockCursor();
    }

    private void Aim(MouseEvent mouseEvent, KeyEvent keyEvent) {
        if (mouseEvent == MouseEvent.LEFT) return;
        //After this return "mouseEvent" will have to be RIGHT

        //If keyEvent is down is because you started aiming, otherwise is because you stopped aiming (UP)
        bool isAiming = keyEvent == KeyEvent.DOWN && CanAim();
        animator.SetBool(isAimingParam, isAiming);
        csm.isAiming = isAiming;
    }

    private void FreeLookCameraInputs(KeyEvent keyEvent) {
        if (keyEvent == KeyEvent.DOWN) {
            StopCoroutine(nameof(BodyRigWeight));
            StartCoroutine(nameof(BodyRigWeight), 0f);
            csm.isInFreeLook = true;
        } else if (keyEvent == KeyEvent.UP) {
            if (!(csm.isFlying && Input.GetKey(KeyCode.LeftShift))) {
                StopCoroutine(nameof(BodyRigWeight));
                StartCoroutine(nameof(BodyRigWeight), 1f);
            }
            if (csm.isFlying)
                yAxis.Value = transform.rotation.x;
            xAxis.Value = transform.rotation.eulerAngles.y;
            csm.isInFreeLook = false;
        }
    }

    [Client]
    private void SwitchLockCursor() {
        Cursor.lockState = isCursorLocked ? CursorLockMode.None : CursorLockMode.Locked;
        Cursor.visible = isCursorLocked;
        isCursorLocked = !isCursorLocked;

        csm.hasCursorLocked = isCursorLocked;
    }

    [Client]
    public void UnlockCursor() {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        isCursorLocked = false;

        csm.hasCursorLocked = false;
    }

    [Client]
    public void LockCursor() {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        isCursorLocked = true;

        csm.hasCursorLocked = true;
    }

    private bool CanAim() {
        return csm.isAlive && !csm.isAnimatingWeapon && csm.isHoldingWeapon;
    }

    public void AlignCameraRotationToPlayer() {
        yAxis.Value = transform.rotation.x;
        xAxis.Value = transform.rotation.eulerAngles.y;
    }

    IEnumerator BodyRigWeight(float end) {
        float velocity = 0.0f;
        float smoothTime = 0.2f;
        do {
            bodyRig.weight = Mathf.SmoothDamp(bodyRig.weight, end, ref velocity, smoothTime);
            yield return new WaitForEndOfFrame();
        } while (bodyRig.weight > 0.001f && bodyRig.weight < 0.999f);
        //Since I need to use 0.001 or 0.999, I'll set the correct amount at the end
        bodyRig.weight = end;
    }
}
