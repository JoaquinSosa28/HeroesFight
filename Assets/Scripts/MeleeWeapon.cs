using UnityEngine;

[CreateAssetMenu(fileName = "MeleeWeapon", menuName = "Item Info/MeleeWeapon", order = 0)]
public class MeleeWeapon : ScriptableObject {
    public float weaponDamage;
    public float critDamage;
    public float comboMultiplier;
    public float weight;
}
