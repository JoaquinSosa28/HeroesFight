using Mirror;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PlayerStatsEntityDisplay : MonoBehaviour
{
    [SerializeField] private Image characterIconImage = null;
    [SerializeField] private TMP_Text playerNameText = null;
    [SerializeField] private Image healthBarImage = null;

    public uint PlayerNetId { get; private set; }

    public void setup(Player player)
    {
        PlayerNetId = player.netId;

        var gamePlayer = NetworkIdentity.spawned[player.OwnerId].GetComponent<NetworkGamePlayerLobby>();

        playerNameText.text = gamePlayer.DisplayName;

        if (!player.TryGetComponent<Health>(out var health))
        {
            return;
        }

        health.OnHealthChanged += HandleHealthChanged;
    }

    private void HandleHealthChanged(object sender, HealthChangedEventArgs e)
    {
        healthBarImage.fillAmount = e.Health / e.MaxHealth;
    }
}
