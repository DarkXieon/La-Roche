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
        if(isLocalPlayer)
        {
            if (_inputState.IsPressed(Buttons.THROW) && _holdingState.HoldingBall) //if the throw button is pressed and the player is holding the ball...
            {
                if(_currentHoldTime == 0f)
                {
                    CmdStartAimAnimation();

                    _audioController.PlayAudio(AudioClips.PlayerThrowV1);
                }

                _currentHoldTime = _inputState.GetButtonHoldTime(Buttons.THROW);

                CmdSetPowerOverlay(Mathf.Min(_currentHoldTime / _maxPowerHoldTime, 1.00f));
            }
            else if (!_inputState.IsPressed(Buttons.THROW) && _holdingState.HoldingBall && _currentHoldTime > 0f) //if the throw button is not pressed, the player is holding the ball, and the player WAS holding the throw button
            {
                var ball = _holdingState.StopHoldingBall();
                var ballBody = ball.GetComponent<Rigidbody>();
                var ballState = ball.GetComponent<BallThrownState>();

                var forceAxis = transform.GetComponentInChildren<Camera>().transform.forward;
                var holdTimeMultiplier = Mathf.Min(_currentHoldTime / _maxPowerHoldTime, 1.00f); //this changes power based on hold time
                var force = holdTimeMultiplier * (_maxThrowPower - _minThrowPower) + _minThrowPower;
                var forceOnAxis = forceAxis * force;

                ballBody.AddForce(forceOnAxis, ForceMode.VelocityChange); //we don't want to have to worry about the weight of the ball... at least not yet
                ballState.BallThrownBy(gameObject);

                CmdStartThrowAnimation();
                CmdSetPowerOverlay(0f);

                _currentHoldTime = 0f;
            }
        }
    }
    
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

    [Command]
    private void CmdStartThrowAnimation()
    {
        _animationSwitcher.ThrowBall();
    }
}