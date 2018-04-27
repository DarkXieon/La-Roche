using UnityEngine.Networking;

public class BallCaughtMessage : MessageBase
{
    public NetworkInstanceId BallId;
    public NetworkInstanceId CaughtById;
}

