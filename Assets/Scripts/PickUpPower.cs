using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static CharacterStateManager;

public class PickUpPower : NetworkBehaviour {
    public PowersUtils.Power power;

    private void OnTriggerEnter(Collider other) {
        if (!NetworkServer.active || !other.transform.tag.Equals("Player")) return; //Only server-sided collisions

        CharacterStateManager csm = other.GetComponent<CharacterStateManager>();
        PowersManager powersManager = other.GetComponent<PowersManager>();

        if (csm && csm.isAlive && powersManager) {
            powersManager.SetPower(power);
        }

        NetworkServer.Destroy(gameObject);
    }
}
