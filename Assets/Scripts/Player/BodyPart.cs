using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BodyPart : MonoBehaviour
{
    public BodyParts bodyPart;
    public PlayerHealth playerHealth;
    public CharacterStateManager csm;

    public void HitBodyPart(float value)
    {
        playerHealth.Damage(value, bodyPart);
    }
}