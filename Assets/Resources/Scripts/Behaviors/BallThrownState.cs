using System.Collections;
using System.Collections.Generic;
using Prototype.NetworkLobby;
using UnityEngine;
using UnityEngine.Networking;

public class BallThrownState : NetworkBehaviour
{
    public bool WasThrown { get { return _wasThrown; } }

    [SyncVar]
    private bool _wasThrown = false;

    [SyncVar]
    private GameObject _thrownBy;

    [SyncVar]
    private bool _updateNextFrame = false;

    private void Update()
    {
        if(/*isServer && */_updateNextFrame)
        {
            _updateNextFrame = false;

            _wasThrown = false;

            _thrownBy = null;
        }
    }
    
    private void OnCollisionEnter(Collision collision)
    {
        var networkIdentity = GetComponent<NetworkIdentity>();

        if(/*isServer && */networkIdentity != null && collision.gameObject.tag == "Player")
        {
            BallCollidedWith(collision.gameObject);
        }
        
        _updateNextFrame = true;
    }

    private void BallCollidedWith(GameObject player)
    {
        if (WasThrown)
        {
            var conditionState = player.GetComponent<PlayerConditionState>();

            if (conditionState != null)// && _thrownBy != null)
            {
                Debug.Log("time to freeze");

                CmdBallHit(player, _thrownBy);
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
        _thrownBy = player;

        _wasThrown = true;
    }

    /*
    public void BallCaughtBy(GameObject player)
    {
        if(WasThrown)
        {
            CmdBallCaught(player, _thrownBy);

            _updateNextFrame = true;
        }
    }
    */

    public void BallCaughtBy(GameObject caughtBy)
    {
        if (_thrownBy != null)//WasThrown)
        {
            var throwerCondition = _thrownBy.GetComponent<PlayerConditionState>();
            var caughtByCondition = caughtBy.GetComponent<PlayerConditionState>();
            var playersBackIn = throwerCondition.PlayersEliminated;

            caughtByCondition.GetPlayerOut(_thrownBy);

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