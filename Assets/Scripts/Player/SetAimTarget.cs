using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations.Rigging;

public class SetAimTarget : NetworkBehaviour
{
    [SerializeField] private MultiAimConstraint multiAimSpine1;
    [SerializeField] private MultiAimConstraint multiAimSpine2;
    [SerializeField] private MultiAimConstraint multiAimHead;

    [SerializeField] private Transform aimTarget;

    public override void OnStartAuthority()
    {
        WeightedTransform weightedTransform = new WeightedTransform(aimTarget, 1);
        multiAimSpine1.data.sourceObjects.Add(weightedTransform);
        multiAimSpine2.data.sourceObjects.Add(weightedTransform);
        multiAimHead.data.sourceObjects.Add(weightedTransform); 
    }


}
