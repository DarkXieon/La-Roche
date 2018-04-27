﻿using System.Collections.Generic;
using System.Linq;

using UnityEngine;
using UnityEngine.Networking;

public class BallCollisionHandler : NetworkBehaviour
{
    private Dictionary<NetworkInstanceId, GameObject> _ballAndPlayers;
    
    private void Awake()
    {
        _ballAndPlayers = FindObjectsOfType<GameObject>()
            .Where(obj => obj.tag == "Player" || obj.tag == "Ball")
            .ToDictionary(obj => obj.GetComponent<NetworkIdentity>().netId);
        
        NetworkServer.RegisterHandler(MyMessageTypes.BallCollisionMessage, BallCollisionMessageHandler);
        NetworkServer.RegisterHandler(MyMessageTypes.BallCaughtMessage, BallCaughtMessageHandler);
    }

    private void BallCollisionMessageHandler(NetworkMessage networkMessage)
    {
        ForceStopHolding();

        /*
        if (!BallIsHeld()) //makes sure the ball isn't being held
        {
        */

        var message = networkMessage.ReadMessage<BallCollisionMessage>();

        var ball = _ballAndPlayers[message.BallId];
        var ballThrownState = ball.GetComponent<BallThrownState>();

        if (ballThrownState.WasThrown && !message.CollidedWithLocalObject) //checks if the ball was thrown by a player and hasn't had a collision yet
        {
            GameObject playerHit;

            if(_ballAndPlayers.TryGetValue(message.CollidedWithId, out playerHit)) //checks if it was a player that was hit
            {
                if(ballThrownState.ThrownBy != null) //checks to make sure the thrown by value isn't null, if it is there is an issue
                {
                    var thrownBy = ballThrownState.ThrownBy;

                    var throwerCondition = thrownBy.GetComponent<PlayerConditionState>();
                    var playerHitCondition = playerHit.GetComponent<PlayerConditionState>();
                    var playersBackIn = playerHitCondition.PlayersEliminated;

                    throwerCondition.GetPlayerOut(playerHit);

                    foreach (GameObject player in playersBackIn)
                    {
                        var condition = player.GetComponent<PlayerConditionState>();

                        condition.GetIn();
                    }

                    playerHitCondition.GetOut();
                }
                else
                {
                    Debug.Log("Ball was thrown but no ball thrower found.");
                }
            }
        }

        ballThrownState.WasThrown = false;
        ballThrownState.ThrownBy = null;
        /*
        }
    
        else
        {
            Debug.LogError("The Ball is currently being held.");
        }
        */
    }

    private void BallCaughtMessageHandler(NetworkMessage networkMessage)
    {
        ForceStopHolding();

        /*
        if (!BallIsHeld()) //makes sure the ball isn't being held
        {
        */

        var message = networkMessage.ReadMessage<BallCaughtMessage>();

        var ball = _ballAndPlayers[message.BallId];
        var ballThrownState = ball.GetComponent<BallThrownState>();

        var caughtBy = _ballAndPlayers[message.CaughtById];
        var caughtByHoldingState = caughtBy.GetComponent<PlayerHoldingState>();
            
        if (ballThrownState.WasThrown)
        {
            if (ballThrownState.ThrownBy != null)
            {
                var thrownBy = ballThrownState.ThrownBy;
                    
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
            else
            {
                Debug.Log("Ball was thrown but no ball thrower found.");
            }
        }

        //caughtByHoldingState.StartHoldingBall(ball);

        /*
        }
        else
        {
            Debug.LogError("The Ball is currently being held.");
        }
        */
    }

    private bool BallIsHeld()
    {
        return _ballAndPlayers.Values
            .Where(obj => obj.tag == "Player")
            .Select(player => player.GetComponent<PlayerHoldingState>())
            .Any(holdingState => holdingState.HoldingBall);
    }

    private void ForceStopHolding()
    {
        _ballAndPlayers.Values
            .Where(obj => obj.tag == "Player")
            .Select(player => player.GetComponent<PlayerHoldingState>())
            .Where(holdingState => holdingState.HoldingBall)
            .ToList()
            .ForEach(playerHoldingState => playerHoldingState.StopHoldingBall());
    }
}