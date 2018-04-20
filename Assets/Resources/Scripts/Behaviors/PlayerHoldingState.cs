using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using Prototype.NetworkLobby;

public class PlayerHoldingState : NetworkBehaviour
{
    public GameObject Ball;

    public bool HoldingBall; //Is the player holding the ball or not
    
    public Transform RotateXParent;
    
    public Transform RotateYParent;
    
    public NetworkConnection ClientConnection;
    
    [SerializeField]
    private float _maxHoldTime = 15f;

    [SyncVar]
    private float _timeLeft;

    [SerializeField]
    private float _verticalAutoTossVelocity = 10f;

    [SerializeField]
    private float _horisontalAutoTossVelocity = 3f;


    
    private void Start()
    {
        if (isServer)
        {
            //LobbyManager.singleton.client.RegisterHandler()

            ClientConnection = LobbyManager.singleton.client.connection;

            Debug.Log("Server Handler Created");
        }
    }

    private void Update()
    {
        if (isLocalPlayer && HoldingBall && _timeLeft > 0)
        {
            _timeLeft -= Time.deltaTime;
        }
        else if (isLocalPlayer && HoldingBall && _timeLeft <= 0)
        {
            var ball = Ball;

            var body = ball.GetComponent<Rigidbody>();

            var randomGenerator = new System.Random();

            var xVel = randomGenerator.Next(-1, 1) * _horisontalAutoTossVelocity;

            var zVel = randomGenerator.Next(-1, 1) * _horisontalAutoTossVelocity;

            var force = new Vector3(xVel, _verticalAutoTossVelocity, zVel);

            body.AddForce(force, ForceMode.VelocityChange);

            var freeze = GetComponent<PlayerFrozenState>();

            freeze.FreezeOnTimer(5f);
        }
    }

    public void StartHoldingBall(GameObject ball)
    {
        _timeLeft = _maxHoldTime;

        if (ball.tag == "Ball") //The game ball should be the ONLY gameobject with that tag
        {
            CmdStartHoldingBall(ball);

            var ballBody = ball.GetComponent<Rigidbody>();

            //This is used to reset the velcity to zero. It's good to not get into the habit of directly modifying the velocity field
            var negativeForce = ballBody.velocity * -1;

            ballBody.AddForce(negativeForce, ForceMode.VelocityChange); //resets the velocity to zero

            ballBody.isKinematic = true; //We don't want gravity on the ball while we hold it

            ball.transform.position = RotateXParent.position + RotateXParent.forward * 2; ; //sets the ball position

            ball.transform.parent = RotateXParent.transform; //makes the ball a child to the ball container

            HoldingBall = true; //make sure we know for later we are holding it
            
            Ball = ball; //set it so it's no longer null
        }
        else
        {
            Debug.LogError("Object not tagged as the Ball please tag the object correctly");
        }
    }

    //When you call this method, keep in mind that it ASSUMES you are doing something else with the ball, if nothing else is done
    //The ball will simply just drop to the ground
    public GameObject StopHoldingBall()
    {
        var ball = Ball; //make a reference so we can return it after we set the field to null

        if (ball != null)
        {
            //CmdStopHoldingBall(ball);

            var ballBody = ball.GetComponent<Rigidbody>();

            //var negativeForce = ballBody.velocity * -1;

            //this makes sure that spinning, running, or jumping and letting go of the ball does not affect it's velocity
            //ballBody.AddForce(negativeForce, ForceMode.VelocityChange);

            ballBody.isKinematic = false; //make gravity affect it again

            ball.transform.parent = null;

            HoldingBall = false;

            Ball = null;

            //CmdStopHoldingBall(ball);
        }
        else
        {
            Debug.LogError("Player is not holding the ball");
        }

        return ball;
    }

    [Command]
    public void CmdStartHoldingBall(GameObject ball)
    {
        
        var ballIdentity = ball.GetComponent<NetworkIdentity>();

        if(ballIdentity.clientAuthorityOwner != null)
        {
            ballIdentity.RemoveClientAuthority(ballIdentity.clientAuthorityOwner);
        }

        ballIdentity.AssignClientAuthority(GetComponent<NetworkIdentity>().connectionToClient);
    }

    [Command]
    public void CmdStopHoldingBall(GameObject ball)
    {
        ball.GetComponent<NetworkIdentity>().RemoveClientAuthority(GetComponent<NetworkIdentity>().connectionToClient);
    }
}