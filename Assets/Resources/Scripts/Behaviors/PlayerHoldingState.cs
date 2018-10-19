using System.Linq;
using Prototype.NetworkLobby;
using UnityEngine;
using UnityEngine.Networking;

public class PlayerHoldingState : NetworkBehaviour
{
    public bool HoldingBall { get { return _holdingBall; } }

    public Transform HoldingWith { get { return _holdingWith; } }

    public float MaxRunWithBallTime;

    private GameObject _ball;

    [SyncVar]
    private bool _holdingBall; //Is the player holding the ball or not

    [SyncVar]
    private float _timeLeft;
    
    private Transform _holdingWith;

    [SerializeField]
    public Transform _holdingAt;

    [SerializeField]
    private float _maxHoldTime = 15f;

    [SerializeField]
    private float _verticalAutoTossVelocity = 10f;

    [SerializeField]
    private float _horisontalAutoTossVelocity = 3f;

    public Material DefaultBallMaterial;

    public Material HeldBallMaterial;

    /*
    [SyncVar]
    [SerializeField]
    private Material _defaultMaterial;

    [SyncVar]
    [SerializeField]
    private Material _heldMaterial;
    */

    private GameOverlay _gameOverlay;

    private void Start()
    {
        _gameOverlay = GetComponent<GameOverlay>();

        _holdingWith = transform
            .GetComponentsInChildren<Transform>()
            .First(trans => trans.name == "CameraHolder");
    }
    
    private void Update()
    {
        if(isLocalPlayer && HoldingBall)
        {
            if (_timeLeft > 0)
            {
                _timeLeft -= Time.deltaTime;
                _ball.transform.localPosition = Vector3.zero;
                
                if (_timeLeft <= _maxHoldTime - MaxRunWithBallTime)
                {
                    CmdSetOverlayMessage(string.Format("You have {0} more seconds to throw the ball.", Mathf.RoundToInt(_timeLeft)));
                }
            }
            else
            {
                var ball = StopHoldingBall();
                var body = ball.GetComponent<Rigidbody>();
                var freeze = GetComponent<PlayerFrozenState>();

                var xVel = Random.Range(-1, 1) * _horisontalAutoTossVelocity;
                var zVel = Random.Range(-1, 1) * _horisontalAutoTossVelocity;
                var force = new Vector3(xVel, _verticalAutoTossVelocity, zVel);

                body.AddForce(force, ForceMode.VelocityChange);
                freeze.FreezeOnTimer(5f);
            }
        }
    }

    public void StartHoldingBall(GameObject ball)
    {
        _timeLeft = _maxHoldTime;

        GetComponent<GameOverlay>().ThrowPowerPercentage = 0f;

        if (ball.tag == "Ball") //The game ball should be the ONLY gameobject with that tag
        {
            if (isServer)
            {
                StartHoldingBall(ball.GetComponent<NetworkIdentity>(), GetComponent<NetworkIdentity>());
            }
            else
            {
                CmdStartHoldingBall(ball.GetComponent<NetworkIdentity>(), GetComponent<NetworkIdentity>());
            }

            var networkPlayer = GetComponent<NetworkPlayer>();
            networkPlayer.isLerpingPositionBall = false;
            networkPlayer.isLerpingRotationBall = false;

            Debug.Log("Now it should DEFINATLY be sending updates");

            this.WaitForCondition(holding => ball.GetComponent<NetworkIdentity>().hasAuthority, () =>
            {
                Debug.Log("Now it should DEFINATLY be sending updates");
                
                var ballBody = ball.GetComponent<Rigidbody>();
                var ballRenderer = ball.GetComponentInChildren<Renderer>();

                //networked.canSendNetworkMovement = false;
                //networked.StartSendingUpdatesTest();
                ballBody.isKinematic = true; //We don't want gravity on the ball while we hold it
                ball.transform.position = _holdingAt.position; //sets the ball position
                ball.transform.parent = _holdingAt.transform; //makes the ball a child to the ball container
                ball.GetComponentsInChildren<SphereCollider>().ForEach(collider => collider.enabled = false);
                ballRenderer.materials = new Material[] { HeldBallMaterial };
                //networked.isLerpingPosition = false;
                //networked.isLerpingRotation = false;
                //networked.realPosition = _holdingAt.position;
                //networked.realRotation = ball.transform.rotation;

                //_holdingBall = true; //make sure we know for later we are holding it
                //_ball = ball; //set it so it's no longer null
            });

            //this.WaitForCondition(holding => holding.GetComponent<NetworkPlayer>().hasAuthority, () => CmdStartAuthority(netId));

            //CmdStartAuthority(netId);

            _holdingBall = true; //make sure we know for later we are holding it
            _ball = ball; //set it so it's no longer null
        }
        else
        {
            Debug.LogError("Object not tagged as the Ball please tag the object correctly");
        }
    }

    //public void StartAuthority(NetworkInstanceId playerId)
    //{
    //    var player = FindObjectsOfType<NetworkIdentity>().Single(id => id.netId == playerId); //NetworkServer.FindLocalObject(playerId);
    //    var ball = FindObjectsOfType<NetworkIdentity>().Single(id => id.tag == "Ball");
    //    var holdingState = player.GetComponent<PlayerHoldingState>();
    //    var ballBody = ball.GetComponent<Rigidbody>();
    //    var ballRenderer = ball.GetComponentInChildren<Renderer>();
    //    var networkedBall = ball.GetComponent<NetworkPlayer>();

    //    ballBody.isKinematic = true; //We don't want gravity on the ball while we hold it
    //    ball.transform.position = holdingState._holdingAt.position; //sets the ball position
    //    ball.transform.parent = holdingState._holdingAt.transform; //makes the ball a child to the ball container
    //    ball.GetComponentsInChildren<SphereCollider>().ForEach(collider => collider.enabled = false);
    //    ballRenderer.materials = new Material[] { holdingState.HeldBallMaterial };
    //}

    //[Command]
    //public void CmdStartAuthority(NetworkInstanceId playerId)
    //{
    //    StartAuthority(playerId);

    //    RpcStartAuthority(playerId);
    //}

    //[ClientRpc]
    //public void RpcStartAuthority(NetworkInstanceId playerId)
    //{
    //    StartAuthority(playerId);
    //}

    //When you call this method, keep in mind that it ASSUMES you are doing something else with the ball, if nothing else is done
    //The ball will simply just drop to the ground
    public GameObject StopHoldingBall()
    {
        var ball = _ball; //make a reference so we can return it after we set the field to null

        if (ball != null)
        {
            var ballBody = ball.GetComponent<Rigidbody>();
            var ballCatchCollider = ball.GetComponentsInChildren<SphereCollider>().First(collider => collider.isTrigger);
            var ballRenderer = ball.GetComponentInChildren<Renderer>();

            ballBody.isKinematic = false; //make gravity affect it again
            ball.transform.parent = null;
            ballCatchCollider.enabled = true;
            ballRenderer.materials = new Material[] { DefaultBallMaterial };
            ball.GetComponentsInChildren<SphereCollider>().ForEach(collider => collider.enabled = true);

            _holdingBall = false;
            _ball = null;

            CmdSetOverlayMessage("");

            //CmdStopAuthority();
        }
        else
        {
            Debug.LogError("Player is not holding the ball");
        }

        return ball;
    }

    //public void StopAuthority()
    //{
    //    var ball = FindObjectsOfType<NetworkIdentity>().Single(id => id.tag == "Ball");
    //    var ballBody = ball.GetComponent<Rigidbody>();
    //    var ballCatchCollider = ball.GetComponentsInChildren<SphereCollider>().First(collider => collider.isTrigger);
    //    var ballRenderer = ball.GetComponentInChildren<Renderer>();

    //    ballBody.isKinematic = false; //make gravity affect it again
    //    ball.transform.parent = null;
    //    ballCatchCollider.enabled = true;
    //    ballRenderer.materials = new Material[] { DefaultBallMaterial };
    //    ball.GetComponentsInChildren<SphereCollider>().ForEach(collider => collider.enabled = true);

    //    _holdingBall = false;
    //    _ball = null;

    //    //CmdSetOverlayMessage("");
    //}

    //[Command]
    //public void CmdStopAuthority()
    //{
    //    CmdSetOverlayMessage("");

    //    StopAuthority();

    //    RpcStopAuthority();
    //}

    //[ClientRpc]
    //public void RpcStopAuthority()
    //{
    //    StopAuthority();
    //}

    private void StartHoldingBall(NetworkIdentity ballIdentity, NetworkIdentity clientIdentity)
    {
        if (ballIdentity.clientAuthorityOwner != null)
        {
            StopHoldingBall(ballIdentity);
        }

        if (!ballIdentity.AssignClientAuthority(clientIdentity.connectionToClient))
        {
            Debug.LogError("Failed to add client authority.");
        }
    }

    [Command]
    private void CmdStartHoldingBall(NetworkIdentity ballIdentity, NetworkIdentity clientIdentity)
    {
        StartHoldingBall(ballIdentity, clientIdentity);
    }

    [Server]
    private void StopHoldingBall(NetworkIdentity ballIdentity)
    {
        if (ballIdentity.clientAuthorityOwner == null)
        {
            Debug.LogError("Nobody is holding the ball but it was let go of aparently");
        }

        if (!ballIdentity.RemoveClientAuthority(ballIdentity.clientAuthorityOwner))
        {
            Debug.LogError("Failed to remove client authority.");
        }

        //RpcStopHoldingBall();
    }

    //[ClientRpc]
    //private void RpcStopHoldingBall()
    //{
    //    FindObjectsOfType<NetworkPlayer>().First(player => player.tag == "Ball").canSendNetworkMovement = false;
    //}

    [Command]
    private void CmdSetOverlayMessage(string message)
    {
        _gameOverlay.CurrentMessage = message;
    }
}