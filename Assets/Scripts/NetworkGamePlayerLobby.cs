using Mirror;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
public class NetworkGamePlayerLobby : NetworkBehaviour
{
    [SerializeField] private GameObject characterPrefab = null;

    [SyncVar]
    private string displayName = "NewPlayer";

    public string DisplayName
    {
        get;
        private set;
    }

    private NetworkManagerLobby room;
    private NetworkManagerLobby Room
    {
        get
        {
            if (room != null) return room;

            return room = NetworkManager.singleton as NetworkManagerLobby;
        }
    }

    public override void OnStartClient()
    {
        DontDestroyOnLoad(gameObject);

        Room.GamePlayers.Add(this);
    }
    public override void OnStopClient()
    {
        Room.GamePlayers.Remove(this);
    }

    [Server]
    public void SetDisplayName(string displayName)
    {
        this.displayName = displayName;
        this.DisplayName = displayName;
    }

}