using System;
using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageArea : NetworkBehaviour
{
    [SerializeField] private float damage;
    [SerializeField] private float damageCooldown;
    private bool canDamage = true;

    private void OnTriggerEnter(Collider other)
    {
        canDamage = false;
        StartCoroutine(DamageCooldown());
    }

    private void OnTriggerStay(Collider other)
    {
        if (!NetworkServer.active || !other.tag.Equals("Player") || !canDamage) return;

        Damageable damageable = other.GetComponent<Damageable>();
        CharacterStateManager csm = other.GetComponent<CharacterStateManager>();
        if (csm && damageable && csm.isAlive)
        {
            damageable.Damage(damage, BodyParts.Chest);
        }
    }

    [Server]
    IEnumerator DamageCooldown()
    {
        yield return new WaitForSecondsRealtime(damageCooldown);
        canDamage = true;
    }
}