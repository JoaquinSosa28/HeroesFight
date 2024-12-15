using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetTransform : MonoBehaviour {
    private Transform moveToTransform;
    private Vector3 offset;

    public void SetMoveToTransform(Transform transform, Vector3 offset) {
        moveToTransform = transform;
        this.offset = offset;
    }

    void LateUpdate() {
        if (!moveToTransform) return;

        transform.position = moveToTransform.position + offset;
        transform.rotation = moveToTransform.rotation;
    }
}
