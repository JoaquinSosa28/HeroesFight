using Mirror;
using UnityEngine;

public enum KeyEvent
{
    UP = 0,
    DOWN = 1
}

public enum MouseEvent
{
    LEFT = 0,
    RIGHT = 1
}

///<summary>
///This class will handle what to do when ever a key is pressed
///Any other class that wants to use an input will have to override this class methods
///</summary>
[RequireComponent(typeof(CharacterStateManager))]
public class InputManager : NetworkBehaviour
{
    //TODO: DECIDE WHETHER TO USE UNITY INPUT SYSTEM OR JUST ADD ALL INPUTS AS VARS

    #region Delegates

    public delegate void OnMovementKeyPressed(float inputX, float inputY, float rawInputX, float rawInputY,
        bool sprint);

    public OnMovementKeyPressed onMovementKeyPressed;

    public delegate void OnSprintKeyPressed(bool sprinting);

    public OnSprintKeyPressed onSprintKeyPressed;

    public delegate void OnJumpKeyPressed();

    public OnJumpKeyPressed onJumpKeyPressed;

    public delegate void OnJumpKeyContinuos();

    public OnJumpKeyContinuos onJumpKeyContinuos;

    public delegate void OnSingleClicksPressed(MouseEvent mouseEvent, KeyEvent keyEvent);

    public OnSingleClicksPressed onSingleClicksPressed;

    public delegate void OnContinuosClicksPressed(MouseEvent mouseEvent);

    public OnContinuosClicksPressed onContinuosClicksPressed;

    public delegate void OnInteractKeyPressed();

    public OnInteractKeyPressed onInteractKeyPressed;

    public delegate void OnFreeCamKeyPressed(KeyEvent keyEvent);

    public OnFreeCamKeyPressed onFreeCamKeyPressed;

    public delegate void OnInventoryKeyPressed();

    public OnInventoryKeyPressed onInventoryKeyPressed;

    public delegate void OnPauseKeyPressed();

    public OnPauseKeyPressed onPauseKeyPressed;

    #endregion

    private CharacterStateManager csm;

    private void Start()
    {
        if (!hasAuthority) enabled = false;
        csm = GetComponent<CharacterStateManager>();
    }

    //In this update all the updates will be called and added to a delegate
    //Every class that needs the input can subscribe to the delegate
    //Before invoking each delegate certain conditions need to be passed
    //If the state of the player doesn't allow an input to produce any output the delegate won't be invoked
    private void LateUpdate()
    {
        MoveInput();
        SprintInput();
        JumpInput();
        ContinuousJumpInput();
        SingleClicksInput();
        ContinuousClicksInput();
        InteractKeyInput();
        FreeCamInput();
        InventoryInput();
        PauseInput();
    }

    #region Input definitions

    private void MoveInput()
    {
        //Input info
        float inputX = Input.GetAxis("Horizontal");
        float inputY = Input.GetAxis("Vertical");
        float rawInputX = Input.GetAxisRaw("Horizontal");
        float rawInputY = Input.GetAxisRaw("Vertical");
        bool sprinting = Input.GetKey(KeyCode.LeftShift) && CanSprint();

        onMovementKeyPressed?.Invoke(inputX, inputY, rawInputX, rawInputY, sprinting);
    }

    private void SprintInput()
    {
        bool pressSprint = Input.GetKeyDown(KeyCode.LeftShift) && CanSprint();
        bool releaseSprint = Input.GetKeyUp(KeyCode.LeftShift);

        //Only invoke delegate when there's a key press or release
        //And then pass which one was it
        if (pressSprint) onSprintKeyPressed?.Invoke(true);
        else if (releaseSprint) onSprintKeyPressed?.Invoke(false);
    }

    private void JumpInput()
    {
        if (Input.GetKeyDown(KeyCode.Space) && csm.canMove)
            onJumpKeyPressed?.Invoke();
    }

    private void ContinuousJumpInput()
    {
        if (Input.GetKey(KeyCode.Space) && csm.canMove && csm.canFly)
            onJumpKeyContinuos?.Invoke();
    }

    private void SingleClicksInput()
    {
        if (Input.GetMouseButtonDown(0))
            onSingleClicksPressed?.Invoke(MouseEvent.LEFT, KeyEvent.DOWN);
        if (Input.GetMouseButtonDown(1))
            onSingleClicksPressed?.Invoke(MouseEvent.RIGHT, KeyEvent.DOWN);
        if (Input.GetMouseButtonUp(0))
            onSingleClicksPressed?.Invoke(MouseEvent.LEFT, KeyEvent.UP);
        if (Input.GetMouseButtonUp(1))
            onSingleClicksPressed?.Invoke(MouseEvent.RIGHT, KeyEvent.UP);
    }

    private void ContinuousClicksInput()
    {
        if (Input.GetMouseButton(0))
            onContinuosClicksPressed?.Invoke(MouseEvent.LEFT);
        if (Input.GetMouseButton(1))
            onContinuosClicksPressed?.Invoke(MouseEvent.RIGHT);
    }

    private void InteractKeyInput()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            onInteractKeyPressed?.Invoke();
        }
    }

    private void FreeCamInput()
    {
        if (Input.GetKeyDown(KeyCode.V))
            onFreeCamKeyPressed?.Invoke(KeyEvent.DOWN);
        if (Input.GetKeyUp(KeyCode.V))
            onFreeCamKeyPressed?.Invoke(KeyEvent.UP);
    }

    private void InventoryInput()
    {
        if (Input.GetKeyDown(KeyCode.I) && CanOpenInventory())
            onInventoryKeyPressed?.Invoke();
    }

    private void PauseInput()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
            onPauseKeyPressed?.Invoke();
    }

    #endregion

    #region Input conditionals

    private bool CanSprint()
    {
        return csm.isAlive && csm.canMove && !csm.isShooting
               && !csm.isReloading && !csm.isAiming && !csm.isAnimatingWeapon
               && !csm.isCastingAbility;
    }

    private bool CanOpenInventory()
    {
        return true;
    }

    #endregion
}