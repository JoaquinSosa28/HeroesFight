using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterBehaviour : MonoBehaviour
{
    public float waterPush = 1f;

    private void OnTriggerStay(Collider other) {
        Rigidbody rb;
        if ((rb = other.transform.GetComponent<Rigidbody>())) {
            rb.AddForce(Vector3.up * waterPush, ForceMode.Force);
        }
    }

    private void OnTriggerExit(Collider other) {
        Rigidbody rb;
        if ((rb = other.transform.GetComponent<Rigidbody>())) {
            rb.AddForce(Vector3.down * waterPush / 10, ForceMode.Force);
        }
    }
}
