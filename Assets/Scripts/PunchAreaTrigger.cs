using Mirror;
using UnityEngine;

public class PunchAreaTrigger : NetworkBehaviour {
    [SerializeField] float punchPower = 0;

    private void OnTriggerEnter(Collider other) {
        Rigidbody rb = other.GetComponent<Rigidbody>();
        if (rb == null) return;

        rb.AddForce(-transform.up * punchPower, ForceMode.Impulse);
    }
}
