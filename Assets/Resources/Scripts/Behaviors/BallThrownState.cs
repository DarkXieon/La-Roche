using Prototype.NetworkLobby;

using UnityEngine;
using UnityEngine.Networking;

public class BallThrownState : NetworkBehaviour
{
    //public GameObject ThrownBy { get { return ThrownBy; } }

    [SyncVar]
    public bool WasThrown;
    
    //private bool _wasThrown = false;

    [SyncVar]
    public GameObject ThrownBy;

    [SyncVar]
    private bool _updateNextFrame = false;

    private void Update()
    {
        if(_updateNextFrame)
        {
            _updateNextFrame = false;

            WasThrown = false;

            ThrownBy = null;
        }
    }
    
    private void OnCollisionEnter(Collision collision)
    {
        var ballNetworkId = GetComponent<NetworkIdentity>().netId;

        var collidedWithNetworkIdentity = collision.gameObject.GetComponent<NetworkIdentity>();

        bool collidedWithLocalObject = collidedWithNetworkIdentity == null;

        var ballCollisionMessage = new BallCollisionMessage
        {
            BallId = ballNetworkId,
            CollidedWithLocalObject = collidedWithLocalObject,
            CollidedWithId = collidedWithLocalObject
                ? default(NetworkInstanceId)
                : collidedWithNetworkIdentity.netId
        };
        
        LobbyManager.singleton.client.Send(MyMessageTypes.BallCollisionMessage, ballCollisionMessage);

        /*
        var networkIdentity = GetComponent<NetworkIdentity>();
        
        if(networkIdentity != null && collision.gameObject.tag == "Player")
        {
            BallCollidedWith(collision.gameObject);
        }
        
        _updateNextFrame = true;
        */
    }

    private void BallCollidedWith(GameObject player)
    {
        if (WasThrown)
        {
            var conditionState = player.GetComponent<PlayerConditionState>();

            if (conditionState != null)// && _thrownBy != null)
            {
                Debug.Log("time to freeze");

                CmdBallHit(player, ThrownBy);
            }
            else
            {
                Debug.LogError("You forgot to add a PlayerConditionState script to the target player.");
            }
        }
    }

    [Command]
    private void CmdBallHit(GameObject hit, GameObject thrownBy)
    {
        var throwerCondition = thrownBy.GetComponent<PlayerConditionState>();
        var hitCondition = hit.GetComponent<PlayerConditionState>();
        var playersBackIn = hitCondition.PlayersEliminated;

        throwerCondition.GetPlayerOut(hit);

        foreach(GameObject player in playersBackIn)
        {
            var condition = player.GetComponent<PlayerConditionState>();

            condition.GetIn();
        }

        hitCondition.GetOut();
    }

    public void BallThrownBy(GameObject player)
    {
        ThrownBy = player;

        WasThrown = true;
    }

    public void BallCaughtBy(GameObject caughtBy)
    {
        if (ThrownBy != null)//WasThrown)
        {
            var throwerCondition = ThrownBy.GetComponent<PlayerConditionState>();
            var caughtByCondition = caughtBy.GetComponent<PlayerConditionState>();
            var playersBackIn = throwerCondition.PlayersEliminated;

            caughtByCondition.GetPlayerOut(ThrownBy);

            foreach (GameObject player in playersBackIn)
            {
                var condition = player.GetComponent<PlayerConditionState>();

                condition.GetIn();
            }

            throwerCondition.GetOut();

            _updateNextFrame = true;
        }
    }

    [Command]
    private void CmdBallCaught(GameObject caughtBy, GameObject thrownBy)
    {
        var throwerCondition = thrownBy.GetComponent<PlayerConditionState>();
        var caughtByCondition = caughtBy.GetComponent<PlayerConditionState>();
        var playersBackIn = throwerCondition.PlayersEliminated;

        caughtByCondition.GetPlayerOut(thrownBy);

        foreach (GameObject player in playersBackIn)
        {
            var condition = player.GetComponent<PlayerConditionState>();

            condition.GetIn();
        }

        throwerCondition.GetOut();
    }
}