using System.ComponentModel.Design.Serialization;
using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

///<summary>
///Component that every melee weapon needs to have.
///This basically stores the weapon stats and calculates
///it's damage depending on those stats, it also can
///spawn the model of the weapon or the collisions
///depending on whether you're calling it from the server or client
///</summary>
public class MeleeWeaponBehaviour : MonoBehaviour
{
    //The client will have no control over the stats what so every, it will be all in the server

    #region Melee weapons stats

    public MeleeWeapon meleeWeapon;

    private float weaponDamage;
    private float critDamage;
    private float comboMultiplier;
    private float weight;
    public GameObject weaponCollisions;

    //This should be part of the player stats
    [Range(0, 100)] public int critChance;

    #endregion

    ///<summary>
    ///Asign the MeleeWeapon and it's stats
    ///</summary>
    public void SetMeleeWeapon(MeleeWeapon meleeWeapon)
    {
        this.meleeWeapon = meleeWeapon;
        weaponDamage = meleeWeapon.weaponDamage;
        critDamage = meleeWeapon.critDamage;
        comboMultiplier = meleeWeapon.comboMultiplier;
        weight = meleeWeapon.weight;
    }

    [Client]
    public void SpawnWeaponModel(GameObject itemModel)
    {
        Instantiate(itemModel, transform);
    }

    [Server]
    public void SpawnWeaponCollider(NetworkIdentity owner, GameObject itemCollider, Transform itemSpawnPoint,
        Vector3 offset)
    {
        weaponCollisions = Instantiate(itemCollider, transform.root);
        weaponCollisions.GetComponent<SetTransform>().SetMoveToTransform(itemSpawnPoint, offset);
        weaponCollisions.GetComponent<MeleeWeaponCollisions>().SetOwner(owner);
    }

    public float CalculateDamage(int combo)
    {
        float damage = weaponDamage;
        //For each combo multiply the attack for 0.2, EXAMPLE -> combo = 2 => damage *= 1 + 1 * 0.2 => damage *= 1.2 ;; combo = 3 => damage *= 1.4
        damage *= 1 + (combo - 1) * comboMultiplier;

        damage *= Random.Range(0, 100) <= critChance ? critDamage : 1f;

        return damage;
    }

    public void SwitchWeaponDamage(bool enabled, int combo)
    {
        weaponCollisions.SetActive(enabled);
        weaponCollisions.GetComponent<MeleeWeaponCollisions>().SetCombo(combo);
    }
}