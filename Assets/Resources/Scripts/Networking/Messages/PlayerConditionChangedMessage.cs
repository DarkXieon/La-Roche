using UnityEngine.Networking;

public class PlayerConditionChangedMessage : MessageBase
{
    public NetworkInstanceId PlayerId;

    public bool IsOut;
}
