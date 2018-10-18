using UnityEngine.Networking;

public class NetworkServerRelay : NetworkMessageHandler
{
    //private void Awake()
    //{
    //    if (isServer)
    //    {
    //        RegisterNetworkMessages();
    //    }
    //}

    //public void Initialize()
    //{
    //    RegisterNetworkMessages();
    //}

    //private void RegisterNetworkMessages()
    //{
    //    NetworkServer.RegisterHandler(movement_msg, OnReceivePlayerMovementMessage);
    //}

    //public static void RegisterNetworkMessages()
    //{
    //    NetworkServer.RegisterHandler(movement_msg, OnReceivePlayerMovementMessage);
    //}

    //private static void OnReceivePlayerMovementMessage(NetworkMessage _message)
    //{
    //    PlayerMovementMessage _msg = _message.ReadMessage<PlayerMovementMessage>();
    //    NetworkServer.SendToAll(movement_msg, _msg);
    //}
}
