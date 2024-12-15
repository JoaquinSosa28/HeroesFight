using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckPlayerCollisionStatus : NetworkBehaviour {
    [SerializeField] private CharacterStateManager csm;
    private void OnTriggerEnter(Collider other) {
        if (!NetworkServer.active) return;

        //Upgrade to switch when more options
        if (other.gameObject.layer == LayerMask.NameToLayer("Forcefield")) {
            csm.isInForcefield = true;
        }
    }

    private void OnTriggerExit(Collider other) {
        if (!NetworkServer.active) return;

        //Upgrade to switch when more options
        if (other.gameObject.layer == LayerMask.NameToLayer("Forcefield")) {
            csm.isInForcefield = false;
        }
    }
}
