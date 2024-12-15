using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using UnityEngine;

public class HandlePlayerStats : MonoBehaviour
{
    [SerializeField] private PlayerStatsEntityDisplay statEntityDisplay = null;
    [SerializeField] private Transform statEntityHolderTransform = null;

    private readonly List<PlayerStatsEntityDisplay> statEntityDisplays = new List<PlayerStatsEntityDisplay>();

    private void Awake()
    {
        Player.OnPlayerSpawned += HandlePlayerSpawned;
        Player.OnPlayerDespawned += HandlePlayerDespawned;
    }

    private void OnDestroy()
    {
        Player.OnPlayerSpawned -= HandlePlayerSpawned;
        Player.OnPlayerDespawned -= HandlePlayerDespawned;
    }

    
    private void HandlePlayerSpawned(Player player)
    {
        PlayerStatsEntityDisplay displayInstance = Instantiate(statEntityDisplay, statEntityHolderTransform);

        displayInstance.setup(player);

        statEntityDisplays.Add(displayInstance);
    }

    private void HandlePlayerDespawned(Player player)
    {
        PlayerStatsEntityDisplay displayInstance = statEntityDisplays.FirstOrDefault(x => x.PlayerNetId == player.netId);

        if (displayInstance == null) return;

        statEntityDisplays.Remove(displayInstance);

        Destroy(displayInstance.gameObject);
    }

}
