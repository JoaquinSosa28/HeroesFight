using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForcefieldHealth : NetworkBehaviour
{
    [SerializeField] private float downScaleFactor;
    [SerializeField] private float forcefieldLifetime;

    bool isDead = false;

    Vector3 minScale = new Vector3(6f, 6f, 6f);

    private void Start() {
        if (NetworkServer.active) Invoke(nameof(DestroyForcefield), forcefieldLifetime);
    }

    [Server]
    public void Damage(float amount) {
        float downScale = amount * downScaleFactor; //Amount to down scale

        transform.localScale -= new Vector3(downScale, downScale, downScale);
        
        if(transform.localScale.magnitude < minScale.magnitude && !isDead) {
            isDead = true;
            //RpcPlayExplosionEffect();
            DestroyForcefield();
            //Invoke(nameof(DestroyForcefield), 1f);
        }
    }

    [Server]
    public void DestroyForcefield() {
        NetworkServer.Destroy(gameObject);
    }

    /*[ClientRpc]
    void RpcPlayExplosionEffect() {
        transform.GetChild(0).gameObject.SetActive(false);
        particleSystemExplosion.Play();
        audioSourceExplosion.Play();
    }*/
}
