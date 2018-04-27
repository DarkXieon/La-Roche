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
    public bool _holdingBall; //Is the player holding the ball or not

    [SyncVar]
    private float _timeLeft;

    //[SerializeField] //[SyncVar]
    private Transform _holdingWith;
    
    [SerializeField]
    private float _maxHoldTime = 15f;

    [SerializeField]
    private float _verticalAutoTossVelocity = 10f;

    [SerializeField]
    private float _horisontalAutoTossVelocity = 3f;

    private GameOverlay _gameOverlay;

    private void Start()
    {
        _gameOverlay = GetComponent<GameOverlay>();

        _holdingWith = transform.Find("Chest");
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
            var ballCatchCollider = ball.GetComponents<SphereCollider>().First(collider => collider.isTrigger);

            //This is used to reset the velcity to zero. It's good to not get into the habit of directly modifying the velocity field
            var negativeForce = ballBody.velocity * -1;

            ballBody.AddForce(negativeForce, ForceMode.VelocityChange); //resets the velocity to zero

            ballBody.isKinematic = true; //We don't want gravity on the ball while we hold it

            ball.transform.position = HoldingWith.position + HoldingWith.forward * 2; ; //sets the ball position

            ball.transform.parent = HoldingWith.transform; //makes the ball a child to the ball container

            ballCatchCollider.enabled = false;

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
            var ballBody = ball.GetComponent<Rigidbody>();
            var ballCatchCollider = ball.GetComponents<SphereCollider>().First(collider => collider.isTrigger);

            //var negativeForce = ballBody.velocity * -1;

            //this makes sure that spinning, running, or jumping and letting go of the ball does not affect it's velocity
            //ballBody.AddForce(negativeForce, ForceMode.VelocityChange);

            ballBody.isKinematic = false; //make gravity affect it again

            ball.transform.parent = null;

            ballCatchCollider.enabled = true;

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
            ballIdentity.RemoveClientAuthority(ballIdentity.clientAuthorityOwner);
        }

        ballIdentity.AssignClientAuthority(GetComponent<NetworkIdentity>().connectionToClient);
    }

    [Command]
    private void CmdSetOverlayMessage(string message)
    {
        _gameOverlay.CurrentMessage = message;
    }
}