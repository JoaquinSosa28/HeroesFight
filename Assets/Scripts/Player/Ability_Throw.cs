using Mirror;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static CharacterStateManager;

public class Ability_Throw : NetworkBehaviour {

    #region Componenets
    private PowersManager powersManager;
    private Transform abilityPosAndRot;
    private CapsuleCollider abilityCollider;
    #endregion

    #region Ability vars
    private bool isInCooldown = false;
    private float timeBetweenAttacks = 0.2f;
    private PowersUtils.Power damageType;
    private float distanceToPlayer = 4f;
    [SerializeField]
    float throwForce = 0;
    #endregion

    private void Start() {
        //Ability attack area, might change to SphereCast
        abilityCollider = GetComponent<CapsuleCollider>();

        //Since this object is initialized as a child of "---PowersAbilities---"
        Transform characterRoot = transform.root;

        powersManager = characterRoot.GetComponent<PowersManager>();
        abilityPosAndRot = characterRoot.Find("HeadRotation");

        //Since this class is created every time you pick up a new ability
        //every time you change the power it will asign the damageType in Start()
        damageType = powersManager.activePower;
    }

    private void FixedUpdate() {
        //If the collider isn't active it means it is not doing anything
        //therefore don't do anything in Update to improve performance
        if(!abilityCollider.enabled) return;


        transform.position = new Vector3(abilityPosAndRot.position.x, abilityPosAndRot.position.y,
                                abilityPosAndRot.position.z) + transform.up * distanceToPlayer;

        transform.rotation = Quaternion.Euler(new Vector3(abilityPosAndRot.eulerAngles.x, abilityPosAndRot.eulerAngles.y, 0));

        transform.eulerAngles += new Vector3(90, 0, 0);
    }

    public void SetActiveCollider(bool active) {
        abilityCollider.enabled = active;
    }

    //Assuming it will be a collider and not a SphereCast
    [Server]
    private void OnTriggerStay(Collider other) {
        Debug.Log(other.name);

        NetworkIdentity identity = other.GetComponent<NetworkIdentity>();

        //Only continue if you're in the server, you haven't hit your self and it is not in cooldown
        if (!NetworkServer.active || (identity != null ? identity.isLocalPlayer : false) || isInCooldown) return;

        Rigidbody rb;

        //If there's a rigidbody, then add a force
        if (rb = other.GetComponent<Rigidbody>()) {
            rb.AddForce(transform.up * throwForce, ForceMode.Force);
        }

        //If what you hit is a player, then damage it
        if (other.tag.Equals("Player")) {
            DealDamage(identity);
            StartCoroutine(nameof(SetCooldown));
        }
    }

    [Server]
    private void DealDamage(NetworkIdentity networkIdentity) {
        PlayerHealth playerHealth = networkIdentity.GetComponent<PlayerHealth>();
        if(!playerHealth) return; //Just in case and to do some testing ;D

        Debug.Log("Damaging");

        //Damage per second is => (timeBetweenAttacks * damagePerSecond)
        float damagePerSecond = 0f;
        switch (damageType) {
            case PowersUtils.Power.Ice:
                damagePerSecond = 15f;
                playerHealth.Damage(timeBetweenAttacks * damagePerSecond, BodyParts.Chest);
                break;
            case PowersUtils.Power.Fire:
                damagePerSecond = 25f;
                playerHealth.Damage(timeBetweenAttacks * damagePerSecond, BodyParts.Chest);
                break;
        }
    }

    IEnumerator SetCooldown() {
        Debug.Log("Coroutine started");
        isInCooldown = true;
        yield return new WaitForSecondsRealtime(0.2f);
        Debug.Log("Coroutine finished");
        isInCooldown = false;
    }
}
