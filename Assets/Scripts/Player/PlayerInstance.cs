using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInstance : NetworkBehaviour
{
    [SerializeField] private GameObject characterPrefab = null;

    public GameObject characterRef { get; private set; }


    public override void OnStartServer() {
        base.OnStartServer();

        GameObject playerCharacter = Instantiate(characterPrefab, transform.position, transform.rotation);
        NetworkServer.Spawn(playerCharacter, connectionToClient);

        characterRef = playerCharacter;
    }

}
