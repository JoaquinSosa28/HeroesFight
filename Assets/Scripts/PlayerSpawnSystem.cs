using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Mirror;

public class PlayerSpawnSystem : NetworkBehaviour {
    [SerializeField] private GameObject playerInstancePrefab = null;
    [SerializeField] private float secondsToRespawn;


    private static List<Transform> spawnPoints = new List<Transform>();

    private int nextIndex = 0;

    public static void AddSpawnPoint(Transform transform) {
        spawnPoints.Add(transform);

        spawnPoints = spawnPoints.OrderBy(x => x.GetSiblingIndex()).ToList();
    }

    public static void RemoveSpawnPoint(Transform transform)
        => spawnPoints.Remove(transform);

    public override void OnStartServer()
        => NetworkManagerLobby.OnServerReadied += SpawnPlayer;

    [ServerCallback]
    private void OnDestroy()
        => NetworkManagerLobby.OnServerReadied -= SpawnPlayer;

    [Server]
    private void SpawnPlayer(NetworkConnection conn) {
        Transform spawnPoint = spawnPoints.ElementAtOrDefault(nextIndex);

        if (spawnPoint == null) {
            Debug.Log($"Missing spawn point for player {nextIndex}");
            return;
        }

        GameObject playerInstance = Instantiate(playerInstancePrefab, spawnPoints[nextIndex].position,
            spawnPoints[nextIndex].rotation);
        //TODO, maybe add the name to the instance ?

        NetworkServer.Spawn(playerInstance, conn);

        NextIndex();
    }

    [Server]
    public void RespawnPlayer(PlayerHealth playerHealth) {
        Transform respawnPoint = spawnPoints.ElementAtOrDefault(nextIndex);

        if (respawnPoint == null) {
            Debug.Log($"Missing spawn point for spawn nº {nextIndex}");
            return;
        }

        StartCoroutine(RespawnPlayerC(playerHealth.transform, respawnPoint, playerHealth));

        NextIndex();
    }

    [Server]
    IEnumerator RespawnPlayerC(Transform player, Transform respawnPoint, PlayerHealth playerHealth) {

        RpcTogglePlayer(player, false);
        yield return new WaitForSecondsRealtime(secondsToRespawn);
        RpcTogglePlayer(player, true);

        playerHealth.TargetRespawnPlayer(respawnPoint);
    }

    [ClientRpc]
    private void RpcTogglePlayer(Transform player, bool isActive) {
        player.Find("Root").gameObject.SetActive(isActive);
        player.Find("---Model---").gameObject.SetActive(isActive);
    }

    private void NextIndex() {
        nextIndex++;
        if (nextIndex > spawnPoints.Count - 1) {
            nextIndex = 0;
        }
    }
}
