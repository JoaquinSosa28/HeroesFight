using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class PowersAbilities : NetworkBehaviour {

    #region Abilities prefabs
    [SerializeField] GameObject throwAbilityPrefab;
    #endregion

    #region Private vars
    private PowersManager powersManager;
    #endregion

    [HideInInspector]
    public GameObject activeAbilityGO;

    public override void OnStartAuthority() {
        powersManager = transform.parent.GetComponentInChildren<PowersManager>();
    }

    ///<summary>
    ///Send a command to change the ability and spawn the corresponding
    ///GameObject in order to handle the ability correctly.
    ///Each power can have a different ability or the same
    ///one with different attributes, but it will all go to
    ///the same variable since it's a generic GameObject
    ///The GameObject will be initialized when the power is
    ///set, and it will be accessible every time it is needed
    ///</summary>
    [Command]
    public void CmdChangeAbility(PowersUtils.Power power) {
        //Always disable the previous ability if there's one
        if (activeAbilityGO) Destroy(activeAbilityGO);

        switch (power) {
            //Both cases use the same logic, the Ability_Throw GO handles everything else
            case PowersUtils.Power.Ice:
            case PowersUtils.Power.Fire:
                activeAbilityGO = Instantiate(throwAbilityPrefab, transform.position, transform.rotation, transform);
                break;
            case PowersUtils.Power.Telekinesis:
                Debug.Log("Telekinesis ability");
                break;
        }
    }
}
