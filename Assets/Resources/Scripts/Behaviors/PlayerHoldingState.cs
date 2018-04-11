using UnityEngine;
using System.Collections;

public class PlayerHoldingState : MonoBehaviour
{
    public Transform HoldingIn { get { return _holdInParent; } } //The transform of the object used as a fulcrum

    public bool HoldingBall { get; private set; } //Is the player holding the ball or not
    
    [SerializeField]
    private Transform _holdInParent; //The transform of the object used as a fulcrum

    private GameObject _ball; //Is the ball IF the player is holding it. Otherwise it's null

    [SerializeField]
    private float _maxHoldTime = 15f;
    
    private float _timeLeft;

    [SerializeField]
    private float _verticalAutoTossVelocity = 10f;

    [SerializeField]
    private float _horisontalAutoTossVelocity = 3f;

    private Vector3 _ballChildTransform //Where to set the ball when the player holds it
    {
        get
        {
            var childPosition = _holdInParent.position + _holdInParent.forward * 2;

            return childPosition;
        }
    }

    private void Update()
    {
        
        if(HoldingBall && _timeLeft > 0)
        {
            _timeLeft -= Time.deltaTime;
        }
        else if(HoldingBall && _timeLeft <= 0)
        {
            var ball = StopHoldingBall();

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

        if(ball.tag == "Ball") //The game ball should be the ONLY gameobject with that tag
        {
            var ballBody = ball.GetComponent<Rigidbody>();

            //This is used to reset the velcity to zero. It's good to not get into the habit of directly modifying the velocity field
            var negativeForce = ballBody.velocity * -1; 

            ballBody.AddForce(negativeForce, ForceMode.VelocityChange); //resets the velocity to zero

            ballBody.isKinematic = true; //We don't want gravity on the ball while we hold it

            ball.transform.position = this._ballChildTransform; //sets the ball position

            ball.transform.parent = _holdInParent.transform; //makes the ball a child to the ball container

            HoldingBall = true; //make sure we know for later we are holding it

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

            var negativeForce = ballBody.velocity * -1;

            //this makes sure that spinning, running, or jumping and letting go of the ball does not affect it's velocity
            ballBody.AddForce(negativeForce, ForceMode.VelocityChange); 

            ballBody.isKinematic = false; //make gravity affect it again

            ball.transform.parent = null;

            HoldingBall = false;

            _ball = null;
        }
        else
        {
            Debug.LogError("Player is not holding the ball");
        }

        return ball;
    }
}
