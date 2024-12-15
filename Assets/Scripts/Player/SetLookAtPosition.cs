using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetLookAtPosition : NetworkBehaviour {
    private Transform aimTarget;

    private void Start() {
        if (!hasAuthority) { enabled = false; return; }
        aimTarget = GameObject.Find("LookAtTarget").transform;
    }

    private void FixedUpdate() {
        transform.position = aimTarget.position;
        transform.rotation = aimTarget.rotation;
    }
}
