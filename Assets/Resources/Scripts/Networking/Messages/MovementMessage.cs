using UnityEngine;
using UnityEngine.Networking;

public class MovementMessage : MessageBase
{
    public NetworkInstanceId ToMove;

    public Vector3 Position;
}

