using UnityEngine;
using UnityEngine.Networking;

public class ThrowBall : BaseBehavior
{
    [SerializeField] private float _maxThrowPower = 1000f;
    [SerializeField] private float _minThrowPower = 400f;
    [SerializeField] private float _maxPowerHoldTime = 1f;
    
    [SyncVar] private float _currentHoldTime;

    private PlayerHoldingState _holdingState;
    private AnimationSwitcher _animationSwitcher;
    private AudioController _audioController;
    private GameOverlay _playerOverlay;

    protected override void Start()
    {
        base.Start();

        _holdingState = this.GetComponent<PlayerHoldingState>();
        _animationSwitcher = GetComponent<AnimationSwitcher>();
        _audioController = GetComponent<AudioController>();
        _playerOverlay = this.GetComponent<GameOverlay>();
    }

    private void Update()
    {
        var time = Time.time;
        bool _isServer = isServer;
        bool _isClient = isClient;
        bool _isLocalPlayer = isLocalPlayer;

        if(isLocalPlayer)
        {
            if (_inputState.IsPressed(Buttons.THROW) && _holdingState.HoldingBall) //if the throw button is pressed and the player is holding the ball...
            {
                _currentHoldTime = _inputState.GetButtonHoldTime(Buttons.THROW);

                CmdSetPowerOverlay(Mathf.Min(_currentHoldTime / _maxPowerHoldTime, 1.00f));

                CmdStartAimAnimation();

                _audioController.PlayAudio(AudioClips.PlayerThrowV1);
            }
            else if (!_inputState.IsPressed(Buttons.THROW) && _holdingState.HoldingBall && _currentHoldTime > 0f) //if the throw button is not pressed, the player is holding the ball, and the player WAS holding the throw button
            {
                var ball = _holdingState.StopHoldingBall();

                CmdThrowBall(ball);
            }
        }
    }
    
    [Command]
    private void CmdThrowBall(GameObject ball)
    {
        var ballBody = ball.GetComponent<Rigidbody>();

        var forceAxis = _holdingState.HoldingWith.right/*forward*/ * -1; //the forward axis relative to the object's current rotation
        var forceMultiplier = Mathf.Min(_currentHoldTime / _maxPowerHoldTime, 1.00f);//Mathf.Min(_currentHoldTime, _maxPowerHoldTime) / _maxPowerHoldTime; //this changes power based on hold time
        var force = forceMultiplier * (_maxThrowPower - _minThrowPower) + _minThrowPower;//Mathf.Max(_maxThrowPower * forceMultiplier, _minThrowPower);
        var forceOnAxis = forceAxis * force;

        ballBody.AddForce(forceOnAxis, ForceMode.VelocityChange); //we don't want to have to worry about the weight of the ball... at least not yet

        SetThrown(ball);
        StartThrowAnimation();

        _currentHoldTime = 0f;
    }
    
    private void SetThrown(GameObject ball)
    {
        var ballState = ball.GetComponent<BallThrownState>();

        ballState.BallThrownBy(this.gameObject);
    }
    
    private void StartThrowAnimation()
    {
        _animationSwitcher.ThrowBall();
    }

    //[Command]
    //private void CmdSetThrown(GameObject ball)
    //{
    //    var ballState = ball.GetComponent<BallThrownState>();

    //    ballState.BallThrownBy(this.gameObject);
    //}

    [Command]
    private void CmdSetPowerOverlay(float percentage)
    {
        _playerOverlay.ThrowPowerPercentage = percentage;
    }

    [Command]
    private void CmdStartAimAnimation()
    {
        _animationSwitcher.AimBall();
    }

    //[Command]
    //private void CmdStartThrowAnimation()
    //{
    //    _animationSwitcher.ThrowBall();
    //}
}