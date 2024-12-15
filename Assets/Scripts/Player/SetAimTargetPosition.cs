using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class SetAimTargetPosition : NetworkBehaviour {
    public LayerMask layersToRaycastTarget;
    private Transform player;
    private Transform mainCamera;
    private Transform lookAtTransform;

    public override void OnStartAuthority() {
        mainCamera = Camera.main.transform;
        player = transform.root;
        lookAtTransform = GameObject.Find("LookAtTarget").transform;
    }

    private void Update() {
        if (!hasAuthority || !mainCamera || !player || !lookAtTransform) return;

        Ray ray = new Ray();
        Vector3 origin = mainCamera.transform.position + mainCamera.transform.forward * Vector3.Distance(mainCamera.transform.position, player.position);
        ray.origin = origin;
        ray.direction = mainCamera.transform.forward;
        // Debug.DrawRay(ray.origin, ray.direction * 100f);
        RaycastHit hitInfo;

        if (Physics.Raycast(ray, out hitInfo, 1000f, layersToRaycastTarget)) {
            transform.position = hitInfo.point;
        } else {
            transform.position = lookAtTransform.position;
        }

    }
}

/*
if (Physics.Raycast(ray, out hitInfo, 1000f, layersToRaycastTarget)) {
            transform.position = hitInfo.point;

            //Unused logic due to some bugs
            Vector3 toTarget = (hitInfo.transform.position - player.transform.position).normalized;

            if (hitted.hittedGo != null && hitInfo.transform.gameObject != hitted.hittedGo) {
                hitted.hittedGo.layer = hitted.layer;
            }

            hitted.hittedGo = hitInfo.transform.gameObject;
            hitted.layer = hitInfo.transform.gameObject.layer;

            if (Vector3.Dot(toTarget, player.transform.forward) > 0) {
                //Target is in front of this game object
                transform.position = hitInfo.point;
            } else {
                //Target is not in front of this game object
                //Change layer and then do it again

                hitInfo.transform.gameObject.layer = LayerMask.NameToLayer("BehindPlayer");
                transform.position = lookAtTransform.position;
            }
        } else {
            RaycastHit behindHit;
            if (hitted.hittedGo != null && Physics.Raycast(ray, out behindHit, 1000f)) {
                if (behindHit.transform.gameObject.layer != LayerMask.NameToLayer("BehindPlayer"))
                    hitted.hittedGo.layer = hitted.layer;
            } 
            Debug.DrawRay(ray.origin, ray.direction*100f, Color.red);
            transform.position = lookAtTransform.position;
        }
*/