using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinAnimator : NetworkBehaviour {
    public float _verticalSpeed = 1f;
    public float angularSpeed = 1f;
    public float verticalUnits = 0.5f;

    private float verticalSpeed = 1f;
    private bool goUp = true;

    private void Start() {
        if (!NetworkServer.active) return;
        verticalSpeed = _verticalSpeed;
        StartCoroutine(SwitchMovement());
    }

    private void LateUpdate() {
        if (!NetworkServer.active) return;

        if (goUp)
            transform.Translate(Vector3.up * verticalSpeed * Time.deltaTime);
        else
            transform.Translate(-Vector3.up * verticalSpeed * Time.deltaTime);

        transform.Rotate(new Vector3(0f, angularSpeed, 0f) * Time.deltaTime);
    }

    IEnumerator SwitchMovement() {
        yield return new WaitForSeconds(0.2f);
        verticalSpeed = _verticalSpeed;
        yield return new WaitForSeconds(0.6f);
        verticalSpeed *= 0.5f;
        yield return new WaitForSeconds(0.2f);
        goUp = !goUp;
        StopCoroutine(SwitchMovement());
        StartCoroutine(SwitchMovement());
    }
}
