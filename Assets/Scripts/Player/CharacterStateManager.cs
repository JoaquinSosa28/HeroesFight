using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterStateManager : NetworkBehaviour {

    [Header("Camera")]
    public bool hasCursorLocked = true;
    public bool isInFreeLook = false;
    public bool canMoveCamera = true;

    [Header("Menus")]
    public bool isAnyMenuOpened = false;
    
    [Header("Character")]
    [SyncVar] public bool isAlive = true;

    [Header("Weapon")]
    [SyncVar] public bool hasWeapon = false;
    [SyncVar] public bool isHoldingWeapon = false;
    [SyncVar] public bool isAnimatingWeapon = false;
    [SyncVar] public bool isShooting = false;
    [SyncVar] public bool isReloading = false;
    public bool isAiming = false;
    //--- 

    [Header("Movement")]
    [SyncVar] public bool isFlying = false;
    [SyncVar] public bool canFly = false;
    [SyncVar] public bool isRunning = false;
    [SyncVar] public bool isInForcefield = false; //Probably won't need a setter/getter since collisions are server sided
    [SyncVar] public bool canMove = true;
    //--- 

    [Header("Spells")]
    [SyncVar] public bool isCastingAbility = false;
    //--- 

    [Command]
    public void CmdSetIsAlive(bool isAlive) {
        this.isAlive = isAlive;
    }

    [Command]
    public void CmdSetIsHoldingWeapon(bool isHoldingWeapon) {
        this.isHoldingWeapon = isHoldingWeapon;
    }

    [Command]
    public void CmdSetIsAnimatingWeapon(bool isAnimatingWeapon) {
        this.isAnimatingWeapon = isAnimatingWeapon;
    }

    [Command]
    public void CmdSetHasWeapon(bool hasWeapon) {
        this.hasWeapon = hasWeapon;
    }

    [Command]
    public void CmdSetIsShooting(bool isShooting) {
        this.isShooting = isShooting;
    }

    [Command]
    public void CmdSetIsAiming(bool isAiming) {
        this.isAiming = isAiming;
    }

    [Command]
    public void CmdSetIsReloading(bool isReloading) {
        this.isReloading = isReloading;
    }

    [Command]
    public void CmdSetIsFlying(bool isFlying) {
        this.isFlying = isFlying;
    }

    [Command]
    public void CmdSetCanFly(bool canFly) {
        this.canFly = canFly;
    }

    [Command]
    public void CmdSetIsRunning(bool isRunning) {
        this.isRunning = isRunning;
    }

    [Command]
    public void CmdSetIsCastingAbility(bool isCastingSpell) {
        this.isCastingAbility = isCastingSpell;
    }

    [Command]
    public void CmdSetCanMove(bool canMove){
        this.canMove = canMove;
    }

    [Command]
    public void CmdSetCanMoveCamera(bool canMoveCamera){
        this.canMoveCamera = canMoveCamera;
    }

    [Server]
    public void ResetVars() { //All variables default values
        hasWeapon = false;
        isHoldingWeapon = false;
        isAnimatingWeapon = false;
        isShooting = false;
        isReloading = false;
        isFlying = false;
        canFly = false;
        isRunning = false;
        isInForcefield = false;
        isCastingAbility = false;
        canMove = true;
        canMoveCamera = true;
        isAnyMenuOpened = false;
    }
}
