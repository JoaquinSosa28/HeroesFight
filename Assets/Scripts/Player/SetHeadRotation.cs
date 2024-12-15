using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetHeadRotation : MonoBehaviour {

    private Transform head;

    private void Start() {
        //Get the head from the globally set part
        head = transform.root.GetComponent<RootParts>().neededBodyParts[NeededBodyParts.HEAD];
    }

    void FixedUpdate() {
        transform.position = head.position;
        transform.rotation = head.rotation;
    }
}
