using UnityEngine;
using Mirror;
using System;

public class Health : NetworkBehaviour
{
    [SerializeField] private float maxHealth = 100f;

    [SyncVar(hook = nameof(HandleHealthUpdated))]
    private float health = 0f;

    public static event EventHandler<DeathEventArgs> OnDeath;
    public event EventHandler<HealthChangedEventArgs> OnHealthChanged;

    public bool IsDead => health == 0f;

    public override void OnStartServer()
    {
        health = maxHealth;
    }

    [ServerCallback]

    private void OnDestroy()
    {
        OnDeath?.Invoke(this, new DeathEventArgs { ConnectionToClient = connectionToClient });
    }



    [Server]
    public void Add(float value)
    {
        value = Mathf.Max(value, 0);
        health = Mathf.Min(health + value, maxHealth);
    }

    [Server]
    public void Remove(float value)
    {
        value = Mathf.Max(value, 0);
        health = Mathf.Min(health - value, 0);

        if (health == 0)
        {
            OnDeath?.Invoke(this, new DeathEventArgs { ConnectionToClient = connectionToClient });

            RpcHandleDeath();
        }
    }

    [Server]
    private void HandleHealthUpdated(float oldValue, float newValue)
    {
        OnHealthChanged?.Invoke(this, new HealthChangedEventArgs
        {
            Health = health,
            MaxHealth = maxHealth
        });
    }

    [ClientRpc]
    private void RpcHandleDeath()
    {
        gameObject.SetActive(false);
    }
}

public class HealthChangedEventArgs
{
    public float Health, MaxHealth;
}

public class DeathEventArgs
{
    public NetworkConnection ConnectionToClient;
}