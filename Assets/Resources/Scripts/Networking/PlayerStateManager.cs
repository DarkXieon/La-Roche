using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class PlayerStateManager : NetworkBehaviour
{
    private void Awake()
    {
        NetworkServer.RegisterHandler(MyMessageTypes.PlayerConditionChanged, PlayerConditionChangedMessageHandler);
    }

    private void PlayerConditionChangedMessageHandler(NetworkMessage networkMessage)
    {
        var conditionChangedMessage = networkMessage.ReadMessage<PlayerConditionChangedMessage>();

        var player = NetworkServer.objects[conditionChangedMessage.PlayerId].gameObject;

        if(conditionChangedMessage.IsOut)
        {
            player.GetComponent<PlayerConditionState>().GetOut();
        }
        else
        {
            player.GetComponent<PlayerConditionState>().GetIn();
        }
    }
}