using UnityEngine;

[CreateAssetMenu(fileName = "New Power", menuName = "HeroesFight/Power", order = 0)]
public class Power : ScriptableObject {

    public new string name;
    public PowersUtils.Power powerType;
    public bool usesAreaAttacks;
    public bool canFly;
}
