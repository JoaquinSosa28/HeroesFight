using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForcefieldCollisions : NetworkBehaviour {

    [SerializeField] private int oddNumberOfShakes;

    private int numOfShakes = 0;
    private float amountToMove = 0.001f;
    private float timeBetweenShakes = 0.1f;

    //Since the sphere isn't hallow collisions bug when resizing
    private void Start() {
        //Just in case you're dumb, if you put an even number make it odd
        oddNumberOfShakes += oddNumberOfShakes % 2 == 0 ? 1 : 0;

        StartCoroutine(ShakeShpere());
    }

    IEnumerator ShakeShpere() {
        do {
            yield return new WaitForSecondsRealtime(timeBetweenShakes);

            //True if up, false if down
            bool movement = numOfShakes % 2 == 0;

            transform.position += movement ? Vector3.up * amountToMove : Vector3.down * amountToMove;
        }
        while (numOfShakes < oddNumberOfShakes);
    }
}
