using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class ReloadWeapon : NetworkBehaviour {

    private const int MAGAZINE_LAYER = 10;

    //--- Animator
    public Animator rigController;
    public NetworkAnimator networkRigController;
    public WeaponAnimationEvents animationEvents;
    //--- 

    //--- Objects
    public WeaponManager activeWeapon;
    public Transform leftHand;
    public Transform magazineSpawnPoint;
    private AmmoWidget ammoWidget;
    private GameObject magazineHand;
    //---

    private CharacterStateManager csm;

    public override void OnStartAuthority() {
        animationEvents.WeaponAnimationEvent.AddListener(OnAnimationEvent);
        ammoWidget = GameObject.Find("Ammo").GetComponent<AmmoWidget>();
    }

    private void Start() {
        csm = GetComponent<CharacterStateManager>();
    }


    void Update() {
        if (!hasAuthority || !csm.isAlive) return;
        RaycastWeapon weapon = activeWeapon.GetActiveWeapon();

        if (!weapon) return;

        if (((Input.GetKeyDown(KeyCode.R) && weapon.ammoCount < weapon.maxAmmo) || weapon.ammoCount <= 0) 
            && csm.isHoldingWeapon && !csm.isAnimatingWeapon && !csm.isReloading) {
            Reload(weapon);
            ammoWidget.Refresh(weapon.ammoCount, weapon.maxAmmo); //This won't refresh below since you stop shooting before reloading
        }

        if (weapon.isFiring) {
            ammoWidget.Refresh(weapon.ammoCount, weapon.maxAmmo);
        }
    }

    public void Reload(RaycastWeapon weapon) {
        csm.CmdSetIsReloading(true);
        weapon.StopFiring();
        csm.CmdSetIsShooting(false);
        networkRigController.SetTrigger("reload_weapon");
    }

    [ClientCallback]
    void OnAnimationEvent(string eventName) {
        switch (eventName) {
            case "detach_magazine":
                CmdDetachMagazine();
                break;
            case "drop_magazine":
                CmdDropMagazineHand();
                break;
            case "detach_drop_magazine_gun":
                CmdDetachDropMagazineGun();
                break;
            case "refill_magazine":
                CmdRefillMagazine();
                break;
            case "attach_magazine":
                CmdAttachMagazine();
                break;
        }
    }

    [Command]
    void CmdDetachMagazine() {
        RpcDetachMagazine();
    }

    [ClientRpc]
    void RpcDetachMagazine() {
        if (!csm.isAlive) return;
        RaycastWeapon weapon = activeWeapon.GetActiveWeapon();
        magazineHand = Instantiate(weapon.magazine, leftHand, true);
        weapon.magazine.SetActive(false);
    }

    [Command]
    void CmdDropMagazineHand() {
        RpcDropMagazineHand();
    }

    [ClientRpc]
    void RpcDropMagazineHand() {
        if (!csm.isAlive) return;
        RaycastWeapon weapon = activeWeapon.GetActiveWeapon();
        InstantiateDroppedMag(weapon);
        magazineHand.SetActive(false);
    }

    [Command]
    void CmdDetachDropMagazineGun() {
        RpcDetachDropMagazineGun();
    }

    [ClientRpc]
    void RpcDetachDropMagazineGun() {
        if (!csm.isAlive) return;
        RaycastWeapon weapon = activeWeapon.GetActiveWeapon();

        magazineHand = Instantiate(weapon.magazine, magazineSpawnPoint.position, magazineSpawnPoint.rotation, magazineSpawnPoint);
        magazineHand.SetActive(false); //Spawn magazine in hand and hide it for when you refill it

        weapon.magazine.SetActive(false); //Hide magazine in the gun
        InstantiateDroppedMag(weapon); //Spawn dropped mag
    }

    [Command]
    void CmdRefillMagazine() {
        RpcRefillMagazine();
    }

    [ClientRpc]
    void RpcRefillMagazine() {
        magazineHand.SetActive(true);
    }

    [Command]
    void CmdAttachMagazine() {
        RpcAttachMagazine();
    }

    [ClientRpc]
    void RpcAttachMagazine() {
        if (!csm.isAlive) return;
        RaycastWeapon weapon = activeWeapon.GetActiveWeapon();
        weapon.magazine.SetActive(true); //Show weapon magazine
        Destroy(magazineHand); //Magazine in hand no longer needed
        

        if (!hasAuthority) return; //Only change when you reload, it's your UI
        weapon.ammoCount = weapon.maxAmmo;
        networkRigController.ResetTrigger("reload_weapon");
        ammoWidget.Refresh(weapon.ammoCount, weapon.maxAmmo);
        csm.CmdSetIsReloading(false);
        if (Input.GetMouseButton(0)) {
            Debug.Log(weapon.ammoCount);
            weapon.StartFiring();
            csm.CmdSetIsShooting(true);
        }
    }

    void InstantiateDroppedMag(RaycastWeapon weapon) {
        if (!csm.isAlive) return;
        GameObject droppedMagazine = Instantiate(weapon.magazine, magazineHand.transform.position, magazineHand.transform.rotation);
        droppedMagazine.AddComponent<Rigidbody>();

        BoxCollider boxCollider = droppedMagazine.AddComponent<BoxCollider>();
        boxCollider.center = new Vector3(0, -0.035f, -0.02f);
        boxCollider.size = new Vector3(0.05f, 0.08f, 0.08f);

        droppedMagazine.layer = MAGAZINE_LAYER;
        droppedMagazine.SetActive(true);
        Destroy(droppedMagazine, 5f);
    }
}
