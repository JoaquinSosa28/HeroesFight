using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHealth : Damageable
{
    private CharacterStateManager csm;
    private WeaponManager weaponManager;
    private PowersManager powersManager;
    private CharacterLocomotion characterLocomotion;
    private PlayerSpawnSystem playerSpawnSystem;

    public float maxHealth = 100.0f;

    [SyncVar] public bool canBeDamaged = true;

    private void Start()
    {
        csm = GetComponent<CharacterStateManager>();
        weaponManager = GetComponent<WeaponManager>();
        powersManager = GetComponent<PowersManager>();
        characterLocomotion = GetComponent<CharacterLocomotion>();
        playerSpawnSystem = GameObject.FindGameObjectWithTag("SpawnSystem").GetComponent<PlayerSpawnSystem>();

        health = maxHealth;
    }

    [Server]
    public override void Damage(float amount, BodyParts bodyPart)
    {
        if (canBeDamaged)
            base.Damage(amount, bodyPart);
    }

    [Server]
    public override void Die()
    {
        weaponManager.RpcThrowGun(WeaponManager.ThrowType.All);
        powersManager.DisableActivePower();
        csm.ResetVars();
        characterLocomotion.FullStop();
        csm.isAlive = false;

        canBeDamaged = false;
        playerSpawnSystem.RespawnPlayer(this);
    }

    [TargetRpc]
    public void TargetRespawnPlayer(Transform respawnPoint)
    {
        csm.canMoveCamera = false; // So the CharacterAiming script doesn't override the rot

        //Set pos and rot according to the spawn point
        transform.position = respawnPoint.position;
        transform.rotation = respawnPoint.rotation;

        //After setting the rot align the camera to that rotation
        CharacterAiming characterAiming = GetComponent<CharacterAiming>();
        characterAiming.AlignCameraRotationToPlayer();

        csm.canMoveCamera = true; // Now it can override

        //This done so you have a more responsive respawn, other players will see you appear delayed
        transform.Find("Root").gameObject.SetActive(true);
        transform.Find("---Model---").gameObject.SetActive(true);

        //Done here since it has to be done after setting position
        Invoke(nameof(CmdSetRespawnVars), 0.1f);
    }

    [Command]
    private void CmdSetRespawnVars()
    {
        canBeDamaged = true;
        health = maxHealth;
        csm.isAlive = true;
    }
}

public enum BodyParts
{
    Head = 0,
    Neck = 1,
    Chest = 2,
    RightArm = 3,
    RightForeArm = 4,
    LeftArm = 5,
    LeftForeArm = 6,
    RightUpperLeg = 7,
    RightLowerLeg = 8,
    LeftUpperLeg = 9,
    LeftLowerLeg = 10,
}