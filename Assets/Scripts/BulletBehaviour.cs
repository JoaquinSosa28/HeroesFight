using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletBehaviour : NetworkBehaviour {

    [SerializeField] private int bulletDamage = 10;
    [SerializeField] private TrailRenderer trailRenderer;
    [SerializeField] private Rigidbody rb;

    [SerializeField] private ParticleSystem hitEffectPrefab;
    bool isDead = false;

    private void OnCollisionEnter(Collision collision) {
        if (isDead) return;

        ParticleSystem hitEffect = Instantiate(hitEffectPrefab, collision.transform);

        hitEffect.transform.position = collision.GetContact(0).point;
        hitEffect.transform.rotation = Quaternion.LookRotation(collision.GetContact(0).normal);
        hitEffect.Emit(1);
        Destroy(hitEffect.gameObject, 2f);

        rb.velocity = Vector3.zero;
        trailRenderer.enabled = false;

        isDead = true;

        if (!NetworkServer.active) return;


        BodyPart bodypartScript;
        DestroyIceWall destroyIceWall; //PLEASE MAKE BETTER, implement damageable class
        ForcefieldHealth forcefieldHealth;
        if ((bodypartScript = collision.gameObject.GetComponent<BodyPart>())
            && bodypartScript.csm.isAlive) {
            bodypartScript.HitBodyPart(bulletDamage);
        } else if (collision.transform.parent && (destroyIceWall = collision.transform.parent.GetComponent<DestroyIceWall>())) {
            destroyIceWall.DamageIceWall(bulletDamage);
        } else if (forcefieldHealth = collision.gameObject.GetComponent<ForcefieldHealth>()) {
            forcefieldHealth.Damage(bulletDamage);
                
                //.ApplyImpact(collision.GetContact(0).point, collision.GetContact(0).normal);
        }


    }
}
