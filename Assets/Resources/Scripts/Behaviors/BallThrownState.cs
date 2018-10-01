using Prototype.NetworkLobby;

using UnityEngine;
using UnityEngine.Networking;

public class BallThrownState : NetworkBehaviour
{
    [SyncVar]
    public bool WasThrown;
    
    [SyncVar]
    public GameObject ThrownBy;
    
    private void OnCollisionEnter(Collision collision)
    {
        var ballNetworkId = GetComponent<NetworkIdentity>().netId;
        var collidedWithNetworkIdentity = collision.gameObject.GetComponent<NetworkIdentity>();
        var collidedWithLocalObject = collidedWithNetworkIdentity == null;
        
        var ballCollisionMessage = new BallCollisionMessage
        {
            BallId = ballNetworkId,
            CollidedWithLocalObject = collidedWithLocalObject,
            CollidedWithId = collidedWithLocalObject
                ? default(NetworkInstanceId)
                : collidedWithNetworkIdentity.netId
        };

        if (NetworkServer.active && NetworkServer.handlers.ContainsKey(MyMessageTypes.BallCollisionMessage))
        {
            LobbyManager.singleton.client.Send(MyMessageTypes.BallCollisionMessage, ballCollisionMessage);
        }
        else
        {
            Debug.Log("Network Server does not yet contain a handler for ball collisions. Message has been discarded.");
        }
    }
    
    public void BallThrownBy(GameObject player)
    {
        ThrownBy = player;

        WasThrown = true;
    }
}