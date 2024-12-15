using System.ComponentModel.Design.Serialization;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

///<summary>
///Component that handles every melee weapon collisions only in the server
///</summary>
public class MeleeWeaponCollisions : NetworkBehaviour
{
    public GameObject hitTest;

    [SerializeField] private GameObject damagePopUpPrefab;

    private NetworkIdentity owner;
    private MeleeWeaponBehaviour meleeWeaponBehaviour;
    private Animator animator;

    private int combo;

    private List<Transform> hitTransform = new List<Transform>();

    private void Awake()
    {
        //Need a way to reference the current active weapon
        Transform root = transform.root;
        meleeWeaponBehaviour = root.Find("---Weapons---").GetComponentInChildren<MeleeWeaponBehaviour>();
        animator = root.GetComponent<Animator>();
    }

    ///<summary>
    ///When you hit something with a melee weapon this will be called
    ///</summary>
    [Server]
    private void OnTriggerEnter(Collider other)
    {
        //Needed checks
        NetworkIdentity networkIdentity = other.GetComponent<NetworkIdentity>();
        Damageable damageable = other.GetComponent<Damageable>();
        if (!NetworkServer.active || (networkIdentity && networkIdentity.netId == owner.netId)) return;

        //If this object has already been hit in this attack or it's not damageable
        if (hitTransform.Contains(other.transform) || !damageable) return;

        //If it hasn't register it
        hitTransform.Add(other.transform);

        float totalDamage = meleeWeaponBehaviour.CalculateDamage(combo);
        damageable.Damage(totalDamage, BodyParts.Chest);

        //TODO: Make some proper force addition on when hit, this is just for testing
        Rigidbody rb = other.GetComponent<Rigidbody>();
        if (rb)
        {
            rb.AddForce(transform.root.forward * 1500f, ForceMode.Force);
        }

        RpcSpawnDamagePopUp(totalDamage, other.ClosestPoint(transform.position) + Vector3.up * 0.1f);

        //TODO: Make this hit marker some sort of number or something, with a ParticleSystem possibly
        // GameObject hitMarker = Instantiate(hitTest, other.ClosestPoint(transform.position), Quaternion.identity);
        // hitMarker.transform.localScale *= totalDamage;
        // Destroy(hitMarker, 1.5f);
    }

    // [ClientRpc]
    private void RpcSpawnDamagePopUp(float damage, Vector3 position)
    {
        GameObject damagePopUpGO = Instantiate(damagePopUpPrefab, position, Quaternion.identity);
        DamagePopUp damagePopUp = damagePopUpGO.GetComponent<DamagePopUp>();
        damagePopUp.Setup(damage);
    }

    public void SetOwner(NetworkIdentity owner)
    {
        this.owner = owner;
    }

    public void SetCombo(int combo)
    {
        this.combo = combo;
    }

    //After every attack the hit enemy list should be emptied, using both methods just in case ;D
    private void OnDisable()
    {
        hitTransform.Clear();
    }

    private void OnEnable()
    {
        hitTransform.Clear();
    }
}