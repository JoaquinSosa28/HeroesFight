using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhysicsDamage : NetworkBehaviour {
    public Rigidbody rb;

    private void OnCollisionEnter(Collision collision) {
        if (!NetworkServer.active) return;

        PlayerHealth playerHealth;
        float damage = rb.velocity.sqrMagnitude * 0.1f;
        if ((playerHealth = collision.collider.GetComponent<PlayerHealth>()) && damage > 3.0f) {
            playerHealth.Damage(damage, BodyParts.Chest);
        }
    }
}
