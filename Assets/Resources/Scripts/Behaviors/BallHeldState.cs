using UnityEngine;
using UnityEngine.Networking;

public class BallHeldState : NetworkBehaviour
{
    [HideInInspector]// [SyncVar]
    public Transform RotateXParent;

    [HideInInspector]// [SyncVar]
    public Transform RotateYParent;

    [HideInInspector] [SyncVar]
    public bool Held = false;

    //private GameObject _playerHolding;

    private BallThrownState _thrownState;
    
    private void Start()
    {
        _thrownState = GetComponent<BallThrownState>();

        if(isServer)
        {
            NetworkServer.RegisterHandler(MyMessageTypes.BallThrown, BallThrownMessageHandler);
            //NetworkServer.RegisterHandler(MyMessageTypes.RotateBallOnYAxis, BallRotateOnYMessageHandler);
        }
    }
    /*
    public void OnCollisionEnter(Collision collision)
    {
        if (!isServer)
        {
            return;
        }

        if (collision.gameObject.tag == "Player")
        {
            var player = collision.gameObject;
            var playerNetworkIdentity = player.GetComponent<NetworkIdentity>();
            var playerConnection = playerNetworkIdentity.connectionToClient;
            var ballNetworkIdentity = GetComponent<NetworkIdentity>();
            
            ballNetworkIdentity.AssignClientAuthority(playerConnection);

            RpcPlayerPickUp(player);
        }
    }
    */
    /*
    [ClientRpc]
    private void RpcPlayerPickUp(GameObject player)
    {
        var playerHoldingState = player.GetComponent<PlayerHoldingState>();
        var ballBody = GetComponent<Rigidbody>();
        
        var negativeForce = ballBody.velocity * -1;
        var newPosition = playerHoldingState.RotateXParent.position + playerHoldingState.RotateXParent.forward * 2;

        RotateXParent = playerHoldingState.RotateXParent;
        RotateYParent = playerHoldingState.RotateYParent;
        Held = true;

        ballBody.AddForce(negativeForce, ForceMode.VelocityChange); //resets the velocity to zero
        ballBody.isKinematic = true; //We don't want gravity on the ball while we hold it
        transform.position = newPosition; //sets the ball position
        playerHoldingState.Ball = this.gameObject;
        transform.parent = RotateXParent; //makes the ball a child to the ball container
    }
    */
    /*
    private void Update()
    {
        
        Debug.Log("Has rotation Y axis parent = " + (RotateYParent != null).ToString());

        if(RotateYParent != null)
        {
            transform.position = RotateYParent.position + RotateYParent.forward * 2;
        }
    }
    */
    /*
    public void StopBeingHeld(Vector3 force)
    {
        if(!isServer)
        {
            CmdPlayerDrop(force);
        }
        else
        {
            PlayerDrop(force);
        }
    }
    */
    /*
    private void PlayerDrop(Vector3 force)
    {
        var ballBody = GetComponent<Rigidbody>();

        ballBody.isKinematic = false; //make gravity affect it again
        transform.parent = null;
        ballBody.AddForce(force, ForceMode.VelocityChange);
        
        //playerHoldingState.StopHoldingBall();

        //_playerHolding = null;
        //_thrownState.WasThrown = true;
    }
    
    private void RotateAroundPlayerOnYAxis(float angle)
    {
        var point = RotateYParent.transform.position;
        var axis = Vector3.up;

        transform.RotateAround(point, axis, angle);
    }
    */
    private void BallThrownMessageHandler(NetworkMessage networkMessage)
    {
        var throwMessage = networkMessage.ReadMessage<ThrowBallMessage>();
        var ballBody = GetComponent<Rigidbody>();
        
        ballBody.AddForce(throwMessage.Force, ForceMode.VelocityChange);
    }
    /*
    private void BallRotateOnYMessageHandler(NetworkMessage networkMessage)
    {
        var rotateOnYMessage = networkMessage.ReadMessage<RotateAngleMessage>();

        RotateAroundPlayerOnYAxis(rotateOnYMessage.Angle);
    }
    */
}