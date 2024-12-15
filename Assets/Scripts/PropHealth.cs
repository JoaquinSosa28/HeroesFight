using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class PropHealth : Damageable
{
    [Server]
    public override void Die()
    {
        NetworkServer.Destroy(gameObject);
    }
}