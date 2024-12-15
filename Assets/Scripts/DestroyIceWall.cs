using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyIceWall : NetworkBehaviour
{

    [SerializeField] private ParticleSystem particleSystemExplosion;
    [SerializeField] private AudioSource audioSourceExplosion;

    [SerializeField] private float maxHealth = 100f;
    [SyncVar]
    [SerializeField] private float health;

    bool isDead = false;

    private void Start() {
        health = maxHealth;
    }

    [Server]
    public void DamageIceWall(float amount) {
        health -= amount;
        health = Mathf.Min(health, maxHealth);

        if (health <= 0 && !isDead) {
            isDead = true;
            RpcPlayExplosionEffect();
            Invoke(nameof(DestroyWall), 1f);
        }
    }

    [Server]
    public void DestroyWall() {
        NetworkServer.Destroy(gameObject);
    }

    [ClientRpc]
    void RpcPlayExplosionEffect() {
        transform.GetChild(0).gameObject.SetActive(false);
        particleSystemExplosion.Play();
        audioSourceExplosion.Play();
    }
}
