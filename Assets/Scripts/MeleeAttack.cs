using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Combos;

[CreateAssetMenu(fileName = "MeleeAttack", menuName = "HeroesFight/MeleeAttack", order = 0)]
public class MeleeAttack : ScriptableObject
{
    public uint attackId;

    public float radius;
    public int hitBoxes;

    public float pos0HeightFactor;
    public float pos0ForwardFactor;
    public float pos0SideFactor;

    public float pos1HeightFactor;
    public float pos1ForwardFactor;
    public float pos1SideFactor;

    public float pos2HeightFactor;
    public float pos2ForwardFactor;
    public float pos2SideFactor;

    public float pos3HeightFactor;
    public float pos3ForwardFactor;
    public float pos3SideFactor;
}
