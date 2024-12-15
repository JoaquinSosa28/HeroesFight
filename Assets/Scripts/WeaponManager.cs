using Mirror;
using System.Collections;
using UnityEngine;

public class WeaponManager : NetworkBehaviour { //TODO MAKE THROW GUN IN ANOTHER SCRIPT
    public enum WeaponSlot {
        Primary = 0,
        Secondary = 1
    }

    public enum WeaponType {
        Rifle = 0,
        Pistol = 1
    }

    public enum ThrowType {
        Primary = 0,
        Secondary = 1,
        Active = 2,
        All = 3
    }

    //--- Gun
    public GameObject[] weaponsPrefabs;
    public Transform[] weaponsSlots = new Transform[2];
    public GameObject[] weaponPropsPrefabs;
    RaycastWeapon[] weaponsInventory = new RaycastWeapon[2];

    public float strenghtToThrowGun;

    int activeWeaponIndex = -1;
    int lastActiveWeaponIndex = -1;
    [HideInInspector] public bool isHolstered = false;

    [SerializeField] private Transform dropsSpawnPoint;
    [SerializeField] private Transform weaponLeftGrip;
    [SerializeField] private Transform weaponRightGrip;
    //---

    //--- Bullet
    public Transform aimTarget;
    public GameObject[] bulletTypes;
    public float bulletLifeTime = 3.0f;

    private AmmoWidget ammoWidget;
    //---

    //--- General
    [SerializeField] private CharacterController cc;
    [SerializeField] private Animator rigController;
    [SerializeField] private CharacterAiming characterAiming;
    [SerializeField] private CharacterStateManager csm;

    [SerializeField] private LayerMask layerCantShootIn;
    //---

    public override void OnStartAuthority() {
        rigController.updateMode = AnimatorUpdateMode.AnimatePhysics;
        rigController.cullingMode = AnimatorCullingMode.CullUpdateTransforms;
        rigController.cullingMode = AnimatorCullingMode.AlwaysAnimate;
        rigController.updateMode = AnimatorUpdateMode.Normal;

        ammoWidget = GameObject.Find("Ammo").GetComponent<AmmoWidget>();
    }

    private void LateUpdate() {
        if (!hasAuthority || !csm.isAlive) return;

        if (CanShoot()) {
            UpdateWeapon(GetActiveWeapon());
        }

        HandleWeaponSwaps();

        if (Input.GetKeyDown(KeyCode.G)) { //Throw active
            if (GetActiveWeapon())
                CmdThrowGun(ThrowType.Active);
        }
    }

    private void HandleWeaponSwaps() {
        if (Input.GetKeyDown(KeyCode.X)) { //Only toggle weapon if you're not animating nor reloading
            if (GetWeaponByIndex(lastActiveWeaponIndex) && !csm.isReloading && !csm.isAnimatingWeapon) {
                GetWeaponByIndex(lastActiveWeaponIndex).StopFiring();
                CmdToggleActiveWeapon();
            }
        }

        if (Input.GetKeyDown(KeyCode.Alpha1)) {
            if (GetWeaponByIndex(0) && activeWeaponIndex != 0) //Only call CMD to change to first gun if you have one
                CmdSetActiveWeapon(WeaponSlot.Primary);
        }

        if (Input.GetKeyDown(KeyCode.Alpha2)) {
            if (GetWeaponByIndex(1) && activeWeaponIndex != 1) //Only call CMD to change to second gun if you have one
                CmdSetActiveWeapon(WeaponSlot.Secondary);
        }
    }

    #region Weapon Shooting

    [Client]
    private void UpdateWeapon(RaycastWeapon weapon) {
        if (Input.GetButtonDown("Fire1") && !weapon.isFiring) {
            weapon.StartFiring();
            csm.CmdSetIsShooting(true);
        } else if (weapon.isFiring) {
            if (weapon.fireRate == 1) {
                weapon.StopFiring();
                csm.CmdSetIsShooting(false);
            } else
                weapon.UpdateFiring();
        }

        if (Input.GetButtonUp("Fire1")) {
            weapon.StopFiring();
            csm.CmdSetIsShooting(false);
        }
    }

    private bool CanShoot() {
        //Check player status
        bool canShoot = GetActiveWeapon() && !isHolstered && !csm.isReloading 
            && !csm.isRunning && !csm.isAnimatingWeapon && !csm.isInForcefield;

        return canShoot;
    }
    #endregion

    #region Spawn bullet
    //Called from a client
    public void SpawnBullet(byte bulletType, Vector3 spawnPoint, float speed) {
        GetActiveWeapon().recoil.GenerateRecoil(GetActiveWeapon().weaponName);
        CmdCreateBullet(bulletType, spawnPoint, speed);
    }

    //Instantiate the bullet on the server and call the RPC for visuals
    [Command]
    void CmdCreateBullet(byte bulletType, Vector3 spawnPoint, float speed) {
        GameObject bulletPrefab = bulletTypes[bulletType];
        GameObject bullet = Instantiate(bulletPrefab, spawnPoint, Quaternion.identity);
        bullet.transform.LookAt(aimTarget);
        bullet.GetComponent<Rigidbody>().AddForce(bullet.transform.forward * speed, ForceMode.Impulse);
        Destroy(bullet, bulletLifeTime);
        RpcSpawnBulletInClients(bulletType, spawnPoint, speed);
    }

    //Spawn the bullets in all the clients except from the host
    //since the host is also the server the bullet is already spawned for him
    [ClientRpc]
    void RpcSpawnBulletInClients(byte bulletType, Vector3 spawnPoint, float speed) {
        GetActiveWeapon().weaponBlast.Play();
        if (isServer) return;
        GameObject bulletPrefab = bulletTypes[bulletType];
        GameObject bullet = Instantiate(bulletPrefab, spawnPoint, Quaternion.identity);
        bullet.transform.LookAt(aimTarget);
        bullet.GetComponent<Rigidbody>().AddForce(bullet.transform.forward * speed, ForceMode.Impulse);
        Destroy(bullet, bulletLifeTime);
    }
    #endregion

    [Client]
    public void Equip(WeaponType weaponType) {
        GameObject spawnedWeapon = Instantiate(GetWeaponPrefab(weaponType));

        RaycastWeapon newWeapon = spawnedWeapon.GetComponent<RaycastWeapon>();
        newWeapon.setupActiveWeapon(this);

        var weapon = GetWeapon(newWeapon.weaponSlot);
        if (weapon) {
            Destroy(weapon.gameObject);
        }

        weapon = newWeapon;
        weapon.recoil.setupRecoil(this, csm, characterAiming, rigController);

        byte weaponSlotIndex = (byte)weapon.weaponSlot;
        weapon.transform.SetParent(weaponsSlots[weaponSlotIndex], false);
        weaponsInventory[weaponSlotIndex] = weapon;

        SetActiveWeapon(weapon.weaponSlot);

        if (!hasAuthority) return;

        ammoWidget.ToggleUI(true);
        ammoWidget.Refresh(weapon.ammoCount, weapon.maxAmmo);
    }

    #region Throw gun
    [Command]
    public void CmdThrowGun(ThrowType throwType) {
        RpcThrowGun(throwType);
    }

    [ClientRpc]
    public void RpcThrowGun(ThrowType throwType) {
        switch (throwType) {
            case ThrowType.Primary:
                RaycastWeapon weaponPrimary;
                if (weaponPrimary = GetWeapon(WeaponSlot.Primary)) { // Check if there's a primary weapon
                    weaponsInventory[(int)WeaponSlot.Primary] = null; // Set primary weapon to null
                    Destroy(weaponPrimary.gameObject); // Destroy it's instance

                    if (!isClientOnly) {
                        SpawnThrownGun(GetActiveWeapon().weaponType); // Spawn the thrown gun only if you're the host
                    }
                    if (GetWeapon(WeaponSlot.Secondary)) { // Check if you have a secondary weapon to equip
                        activeWeaponIndex = (int)WeaponSlot.Secondary;
                        SetActiveWeapon(WeaponSlot.Secondary);
                    } else { // Otherwise set to unarmed
                        SetHasNoWeapon();
                        activeWeaponIndex = -1;
                        lastActiveWeaponIndex = -1;
                        rigController.Play("weapon_anim_unarmed", 0);
                    }
                }
                break;
            case ThrowType.Secondary: // Same documentation as above
                RaycastWeapon weaponSecondary;
                if (weaponSecondary = GetWeapon(WeaponSlot.Secondary)) {
                    weaponsInventory[(int)WeaponSlot.Secondary] = null;
                    Destroy(weaponSecondary.gameObject);

                    if (!isClientOnly) {
                        SpawnThrownGun(GetActiveWeapon().weaponType);
                    }
                    if (GetWeapon(WeaponSlot.Primary)) {
                        activeWeaponIndex = (int)WeaponSlot.Primary;
                        SetActiveWeapon(WeaponSlot.Primary);
                    } else {
                        SetHasNoWeapon();
                        activeWeaponIndex = -1;
                        lastActiveWeaponIndex = -1;
                        rigController.Play("weapon_anim_unarmed", 0);
                    }
                }
                break;
            case ThrowType.Active:
                RaycastWeapon activeWeapon;
                if (activeWeapon = GetActiveWeapon()) { // Check if you have any weapon in your hands
                    weaponsInventory[activeWeaponIndex] = null; // If you do, set it to null
                    Destroy(activeWeapon.gameObject); // Destroy the equipped weapon instance
                    if (!isClientOnly) {
                        SpawnThrownGun(activeWeapon.weaponType); //Throw that gun only if you are the host
                    }
                    if (GetWeapon(WeaponSlot.Primary)) { // Check if you still have a primary weapon, if so equip it
                        activeWeaponIndex = (int)WeaponSlot.Primary;
                        SetActiveWeapon(WeaponSlot.Primary);
                    } else if (GetWeapon(WeaponSlot.Secondary)) { //Same as above but for secondary weapon
                        activeWeaponIndex = (int)WeaponSlot.Secondary;
                        SetActiveWeapon(WeaponSlot.Secondary);
                    } else { // Else set to unarmed
                        SetHasNoWeapon();
                        activeWeaponIndex = -1;
                        rigController.Play("weapon_anim_unarmed", 0);
                    }
                }
                break;
            case ThrowType.All:
                RaycastWeapon weapon1 = GetWeapon(WeaponSlot.Primary);
                RaycastWeapon weapon2 = GetWeapon(WeaponSlot.Secondary);
                if (weapon1 || weapon2) {
                    //If true it's because you either have a primary weapon or a secondary weapon
                    //now lets check which one you have

                    if (weapon1) { //It means you have a primary weapon, then drop it
                        if (!isClientOnly) {
                            SpawnThrownGun(weapon1.weaponType);
                        }
                        weaponsInventory[(int)WeaponSlot.Primary] = null;
                        Destroy(weapon1.gameObject);
                    }

                    if (weapon2) {
                        if (!isClientOnly) {
                            SpawnThrownGun(weapon2.weaponType);
                        }
                        weaponsInventory[(int)WeaponSlot.Secondary] = null;
                        Destroy(weapon2.gameObject);
                    }

                    SetHasNoWeapon();
                    activeWeaponIndex = -1;
                    lastActiveWeaponIndex = -1;
                    rigController.Play("weapon_anim_unarmed", 0);
                }
                break;
        }
    }

    [Server]
    void SpawnThrownGun(WeaponType weaponType) {
        switch (weaponType) {
            case WeaponType.Rifle:
                GameObject thrownRifle = Instantiate(weaponPropsPrefabs[(byte)WeaponType.Rifle], dropsSpawnPoint.position, dropsSpawnPoint.rotation);

                //Vector3 absVelocity0 = new Vector3(Mathf.Abs(cc.velocity.x), Mathf.Abs(cc.velocity.y), Mathf.Abs(cc.velocity.z));
                Vector3 rifleForce = (thrownRifle.transform.forward * strenghtToThrowGun) + (thrownRifle.transform.forward * cc.velocity.magnitude * 10f);
                thrownRifle.GetComponent<Rigidbody>().AddForce(rifleForce, ForceMode.Impulse);

                NetworkServer.Spawn(thrownRifle);
                break;
            case WeaponType.Pistol:
                GameObject thrownPistol = Instantiate(weaponPropsPrefabs[(byte)WeaponType.Pistol], dropsSpawnPoint.position, dropsSpawnPoint.rotation);

                //Vector3 absVelocity1 = new Vector3(Mathf.Abs(cc.velocity.x), Mathf.Abs(cc.velocity.y), Mathf.Abs(cc.velocity.z));
                Vector3 pistolForce = (thrownPistol.transform.forward * strenghtToThrowGun) + (thrownPistol.transform.forward * cc.velocity.magnitude * 10f);
                thrownPistol.GetComponent<Rigidbody>().AddForce(pistolForce, ForceMode.Impulse);

                NetworkServer.Spawn(thrownPistol);
                break;
        }
    }
    #endregion

    #region Set active weapon methods
    [Command]
    void CmdSetActiveWeapon(WeaponSlot weaponSlot) {
        RpcSetActiveWeapon(weaponSlot);
    }

    [ClientRpc]
    void RpcSetActiveWeapon(WeaponSlot weaponSlot) {
        SetActiveWeapon(weaponSlot);
    }

    void SetActiveWeapon(WeaponSlot weaponSlot) {
        int holsterIndex = activeWeaponIndex;
        int activateIndex = (int)weaponSlot;
        lastActiveWeaponIndex = activateIndex;

        if (holsterIndex == activateIndex) {
            holsterIndex = -1;
        }

        if (hasAuthority) {
            csm.CmdSetIsHoldingWeapon(true);
            csm.CmdSetHasWeapon(true);
            csm.CmdSetIsReloading(false);

            ammoWidget.ToggleUI(true);
            ammoWidget.Refresh(GetWeapon(weaponSlot).ammoCount, GetWeapon(weaponSlot).maxAmmo);
        }

        StartCoroutine(SwitchWeapon(holsterIndex, activateIndex));
    }

    IEnumerator SwitchWeapon(int holsterIndex, int activateIndex) {
        rigController.SetInteger("weapon_index", activateIndex);
        yield return StartCoroutine(HolsterWeapon(holsterIndex));
        yield return StartCoroutine(ActivateWeapon(activateIndex));
        activeWeaponIndex = activateIndex;
    }
    #endregion

    #region Toggle active weapon
    [Command]
    void CmdToggleActiveWeapon() {
        RpcToggleActiveWeapon();
    }

    [ClientRpc]
    void RpcToggleActiveWeapon() {
        StartCoroutine(ToggleActiveWeapon());
    }

    IEnumerator ToggleActiveWeapon() {
        bool isHolstered = rigController.GetBool("holster_weapon");
        if (isHolstered) {
            StartCoroutine(ActivateWeapon(lastActiveWeaponIndex));
        } else {
            yield return StartCoroutine(HolsterWeapon(activeWeaponIndex));
            activeWeaponIndex = -1;
        }
        if (hasAuthority) {
            csm.CmdSetIsHoldingWeapon(isHolstered);
            csm.CmdSetIsReloading(false);

            ammoWidget.ToggleUI(isHolstered);
            ammoWidget.Refresh(GetLastWeapon().ammoCount, GetLastWeapon().maxAmmo);
        }
    }
    #endregion

    IEnumerator HolsterWeapon(int index) {
        if(hasAuthority) csm.CmdSetIsAnimatingWeapon(true);
        isHolstered = true;
        var weapon = GetWeaponByIndex(index);
        if (weapon) {
            rigController.SetBool("holster_weapon", true);
            float time;
            do {
                time = rigController.GetCurrentAnimatorStateInfo(0).normalizedTime - Mathf.Floor(rigController.GetCurrentAnimatorStateInfo(0).normalizedTime);
                yield return new WaitForEndOfFrame();
            }
            while (time < .989f);
            if (hasAuthority) csm.CmdSetIsAnimatingWeapon(false);
        }
    }

    IEnumerator ActivateWeapon(int index) {
        if (hasAuthority) csm.CmdSetIsAnimatingWeapon(true);
        var weapon = GetWeaponByIndex(index);
        if (weapon) {
            rigController.SetBool("holster_weapon", false);
            rigController.Play("equip_" + weapon.weaponName);
            float time;
            do {
                time = rigController.GetCurrentAnimatorStateInfo(0).normalizedTime - Mathf.Floor(rigController.GetCurrentAnimatorStateInfo(0).normalizedTime);
                yield return new WaitForEndOfFrame();
            }
            while (time < .989f);
            isHolstered = false;
            if (hasAuthority) csm.CmdSetIsAnimatingWeapon(false);
            activeWeaponIndex = index;
        }
    }

    #region GetterAndSetters
    public RaycastWeapon GetActiveWeapon() {
        return GetWeaponByIndex(activeWeaponIndex);
    }

    public RaycastWeapon GetLastWeapon() {
        return GetWeaponByIndex(lastActiveWeaponIndex);
    }

    RaycastWeapon GetWeaponByIndex(int index) {
        if (index < 0 || index >= weaponsInventory.Length) return null;
        return weaponsInventory[index];
    }

    RaycastWeapon GetWeapon(WeaponSlot weaponSlot) {
        int index = (int) weaponSlot;
        if (index < 0 || index >= weaponsInventory.Length) return null;
        return weaponsInventory[index];
    }

    GameObject GetWeaponPrefab(WeaponType weaponType) {
        switch (weaponType) {
            case WeaponType.Rifle:
                return weaponsPrefabs[(byte)WeaponType.Rifle];
            case WeaponType.Pistol:
                return weaponsPrefabs[(byte)WeaponType.Pistol];
            default:
                return weaponsPrefabs[(byte)WeaponType.Rifle]; //In case the ID is wrong just return the rifle, for now
        }
    }

    private void SetHasNoWeapon() {
        if (!hasAuthority) return;
        csm.CmdSetIsHoldingWeapon(false);
        csm.CmdSetHasWeapon(false);
        csm.CmdSetIsReloading(false);
        csm.CmdSetIsAnimatingWeapon(false);

        ammoWidget.ToggleUI(false);
    }
    #endregion
}
