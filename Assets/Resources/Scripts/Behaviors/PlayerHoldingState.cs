using UnityEngine;
using System.Collections;

public class PlayerHoldingState : MonoBehaviour
{
    public Transform HoldingIn { get { return _holdInParent; } }

    public bool HoldingBall { get; private set; }

    [SerializeField]
    private Transform _holdInParent;

    private GameObject _ball;

    private Vector3 _ballChildTransform
    {
        get
        {
            var childPosition = _holdInParent.position + _holdInParent.forward * 2;

            return childPosition;
        }
    }

    public void StartHoldingBall(GameObject ball)
    {
        if(ball.tag == "Ball")
        {
            var ballBody = ball.GetComponent<Rigidbody>();

            var negativeForce = ballBody.velocity * -1;

            ballBody.AddForce(negativeForce, ForceMode.VelocityChange);

            ballBody.isKinematic = true;

            ball.transform.position = _ballChildTransform;

            ball.transform.parent = _holdInParent.transform;

            HoldingBall = true;

            _ball = ball;
        }
        else
        {
            Debug.LogError("Object not tagged as the Ball please tag the object correctly");
        }
    }

    public GameObject StopHoldingBall()
    {
        var ball = _ball;

        if (ball != null)
        {
            var ballBody = ball.GetComponent<Rigidbody>();

            var negativeForce = ballBody.velocity * -1;

            ballBody.AddForce(negativeForce, ForceMode.VelocityChange);

            ballBody.isKinematic = false;

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
