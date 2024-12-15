using Mirror;
using UnityEngine;
using UnityEngine.VFX;

public class PowersManager : NetworkBehaviour {

    public PowersUtils.Power activePower = PowersUtils.Power.None;

    #region Components
    [SerializeField] Transform powersManagerObj;

    private CharacterStateManager csm;
    private WeaponManager weaponManager;
    private PowersAbilities powersAbilities;
    #endregion

    private void Start() {
        csm = GetComponent<CharacterStateManager>();
        //weaponManager = GetComponent<WeaponManager>();
        powersAbilities = transform.Find("---PowersAbilities---").GetComponent<PowersAbilities>();
    }

    [Server]
    public void SetPower(PowersUtils.Power power) {
        TargetSetPower(power);
    }

    [TargetRpc]
    void TargetSetPower(PowersUtils.Power power) {
        DisableActivePower();
        activePower = power;
        
        powersAbilities.CmdChangeAbility(power);

        switch (power) {
            case PowersUtils.Power.Ice:
                powersManagerObj.GetComponent<Power_Ice>().enabled = true;
                break;
            case PowersUtils.Power.Telekinesis:
                powersManagerObj.GetComponent<Power_Telekinesis>().enabled = true;
                break;
            case PowersUtils.Power.Fire:
                /*powersManager.GetComponent<Power_Ice>().enabled = true;*/
                break;
        }

        // if (weaponManager.GetLastWeapon())
        //     weaponManager.CmdThrowGun(WeaponManager.ThrowType.All);
    }

    public void DisableActivePower() {
        Debug.Log(activePower);
        switch (activePower) {
            case PowersUtils.Power.Ice:
                powersManagerObj.GetComponent<Power_Ice>().enabled = false;
                break;
            case PowersUtils.Power.Telekinesis:
                powersManagerObj.GetComponent<Power_Telekinesis>().enabled = false;
                break;
            case PowersUtils.Power.Fire:
                //powersManagerObj.GetComponent<Power_Ice>().enabled = false;
                break;
        }

        activePower = PowersUtils.Power.None;
    }

    public bool HasAnyPower() {
        return activePower != PowersUtils.Power.None;
    }
}
