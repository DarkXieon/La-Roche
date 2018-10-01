using System.Linq;

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

    //[SerializeField] [SyncVar]
    private Transform _holdingWith;
    
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
        
        _holdingWith = transform.GetComponentsInChildren<Transform>()
            .First(trans => trans.name == "CameraHolder");
            //.First(trans => trans.name == "BallHolder");
    }

    private void Update()
    {
        if(isLocalPlayer && HoldingBall)
        {
            if (_timeLeft > 0)
            {
                _timeLeft -= Time.deltaTime;

                if (_timeLeft <= _maxHoldTime - MaxRunWithBallTime)
                {
                    CmdSetOverlayMessage(string.Format("You have {0} more seconds to throw the ball.", Mathf.RoundToInt(_timeLeft)));
                }
            }
            else
            {
                var ball = StopHoldingBall();

                var body = ball.GetComponent<Rigidbody>();

                var randomGenerator = new System.Random();

                var xVel = randomGenerator.Next(-1, 1) * _horisontalAutoTossVelocity;

                var zVel = randomGenerator.Next(-1, 1) * _horisontalAutoTossVelocity;

                var force = new Vector3(xVel, _verticalAutoTossVelocity, zVel);

                var freeze = GetComponent<PlayerFrozenState>();

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
            CmdStartHoldingBall(ball);

            var ballBody = ball.GetComponent<Rigidbody>();

            var ballRenderer = ball.GetComponentInChildren<Renderer>();
            
            ballBody.isKinematic = true; //We don't want gravity on the ball while we hold it

            ball.transform.position = HoldingWith.position + /*HoldingWith.forward*/ HoldingWith.right * -2; //sets the ball position

            ball.transform.parent = HoldingWith.transform; //makes the ball a child to the ball container

            ballRenderer.materials = new Material[] { HeldBallMaterial };

            ball.GetComponentsInChildren<SphereCollider>().ForEach(collider => collider.enabled = false);
            
            _holdingBall = true; //make sure we know for later we are holding it
            
            _ball = ball; //set it so it's no longer null
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
        var ball = _ball; //make a reference so we can return it after we set the field to null

        if (ball != null)
        {
            CmdStopHoldingBall(ball);

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
        }
        else
        {
            Debug.LogError("Player is not holding the ball");
        }

        return ball;
    }

    [Command]
    private void CmdStartHoldingBall(GameObject ball)
    {
        var ballIdentity = ball.GetComponent<NetworkIdentity>();

        if(ballIdentity.clientAuthorityOwner != null)
        {
            Debug.LogError("Started holding ball when someone else already is.");
        }

        ballIdentity.AssignClientAuthority(GetComponent<NetworkIdentity>().connectionToClient);
    }

    [Command]
    private void CmdStopHoldingBall(GameObject ball)
    {
        var ballIdentity = ball.GetComponent<NetworkIdentity>();

        if (ballIdentity.clientAuthorityOwner == null)
        {
            Debug.LogError("Nobody is holding the ball but it was let go of aparently");
        }

        ballIdentity.RemoveClientAuthority(ballIdentity.clientAuthorityOwner);
    }

    [Command]
    private void CmdSetOverlayMessage(string message)
    {
        _gameOverlay.CurrentMessage = message;
    }
}