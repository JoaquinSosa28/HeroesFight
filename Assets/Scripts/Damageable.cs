using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public abstract class Damageable : NetworkBehaviour
{
    [SyncVar] public float health = 0f;

    [Server]
    public virtual void Damage(float amount, BodyParts bodypart)
    {
        if (!NetworkServer.active) return;

        amount *= GetDamageMultiplier(bodypart);

        Debug.Log($"Dealing {amount} damage to {this.transform.name}");

        //In case it goes below 0
        health = Mathf.Max(0, health - amount);

        //This prop is dead
        if (health == 0)
            Die();
    }

    public abstract void Die();

    private float GetDamageMultiplier(BodyParts bodyPart)
    {
        switch (bodyPart)
        {
            case BodyParts.Head:
                return 3f;
            case BodyParts.Neck:
                return 2.5f;
            case BodyParts.Chest:
                return 1f;
            case BodyParts.RightArm:
                return 0.5f;
            case BodyParts.RightForeArm:
                return 0.2f;
            case BodyParts.LeftArm:
                return 0.5f;
            case BodyParts.LeftForeArm:
                return 0.2f;
            case BodyParts.RightUpperLeg:
                return 0.8f;
            case BodyParts.RightLowerLeg:
                return 0.3f;
            case BodyParts.LeftUpperLeg:
                return 0.8f;
            case BodyParts.LeftLowerLeg:
                return 0.3f;
            default:
                return 1f;
        }
    }
}