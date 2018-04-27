using UnityEngine.Networking;

public class BallCollisionMessage : MessageBase
{
    public NetworkInstanceId BallId;
    public NetworkInstanceId CollidedWithId;
    public bool CollidedWithLocalObject;
}