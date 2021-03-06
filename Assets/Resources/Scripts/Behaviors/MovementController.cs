﻿using UnityEngine;
using UnityEngine.Networking;

public class MovementController : BaseBehavior
{
    public float movementTimeLimit = 5.0f;  // The time that players can move
    private float timeLeft = 0; // How long the user has left to move

    public float moveSpeed = 10.0f; // The player's movement speed

    public bool isUsersTurn = true; // Set to true if it's the player's turn (they have the ball)
    public bool isPlayerOut = false; // Is set to true if the player gets out

    private PlayerHoldingState _holdingState;
    private PlayerFrozenState _frozenState;
    private AnimationSwitcher _animationSwitcher;
    private AudioController _audioController;
    private GameOverlay _gameOverlay;

    protected override void Start()
    {
        base.Start();

        timeLeft = movementTimeLimit;   // Set the time that the user has to move to the movementTimeLimit

        _holdingState = GetComponent<PlayerHoldingState>();
        _frozenState = GetComponent<PlayerFrozenState>();
        _animationSwitcher = GetComponent<AnimationSwitcher>();
        _audioController = GetComponent<AudioController>();
        _gameOverlay = GetComponent<GameOverlay>();

        _holdingState.MaxRunWithBallTime = movementTimeLimit;
    }

    // For each frame...
    private void Update()
    {
        if(isLocalPlayer)
        {
            float horizontalInput = 0f;
            float verticalInput = 0f;
            
            bool hasHorizontalInput = _inputState.IsPressed(Buttons.LEFT) || _inputState.IsPressed(Buttons.RIGHT);
            bool hasVerticalInput = _inputState.IsPressed(Buttons.FORWARD) || _inputState.IsPressed(Buttons.BACK);

            // Get the input from the user
            if (hasHorizontalInput)
            {
                horizontalInput = _inputState.IsPressed(Buttons.LEFT)
                    ? _inputState.GetButtonValue(Buttons.LEFT) * -1
                    : _inputState.GetButtonValue(Buttons.RIGHT);
            }
            if (hasVerticalInput)
            {
                verticalInput = _inputState.IsPressed(Buttons.FORWARD)
                    ? _inputState.GetButtonValue(Buttons.FORWARD) * -1
                    : _inputState.GetButtonValue(Buttons.BACK);
            }

            bool canMove = isUsersTurn && !isPlayerOut && timeLeft > 0 && !_frozenState.IsFrozen;
            bool hasMovementInput = hasHorizontalInput || hasVerticalInput;

            //TODO: CHANGE THIS, I DON'T THINK THE COMMAND IS NEEDED ANYMORE
            CmdSetAnimationStatus(hasVerticalInput && canMove);
            
            // If it's the user's turn, they're not out, and they still have time
            if (canMove)
            {
                if (_holdingState.HoldingBall)
                {
                    // Decrease the time
                    timeLeft -= Time.deltaTime;

                    CmdSetOverlayMessage(string.Format("You have {0} more seconds to move with the ball.", Mathf.RoundToInt(timeLeft)));
                }
                if(hasMovementInput)
                {
                    // Move the player
                    // Time.deltaTime normalizes the speed (due to differences like fps)
                    transform.Translate(moveSpeed * verticalInput * Time.deltaTime, 0f, moveSpeed * horizontalInput * Time.deltaTime);

                    if(!_audioController.IsPlaying(AudioClips.PlayerRunLoop))
                    {
                        _audioController.PlayAudio(AudioClips.PlayerRunLoop, true);
                    }
                }
            }   // If they run out of time...
            else
            {
                if (timeLeft <= 0)
                {
                    // Set isUsersTurn to false
                    isUsersTurn = false;
                }
            }

            if ((!canMove || !hasMovementInput) && _audioController.IsPlaying(AudioClips.PlayerRunLoop))
            {
                _audioController.StopAudio(AudioClips.PlayerRunLoop, true);
            }

            if (!_holdingState.HoldingBall)
            {
                isUsersTurn = true;

                timeLeft = movementTimeLimit;   // Set the timeLeft back to movementTimeLimit, so when it's their turn again they have time to do something
            }
        }
    }

    [Command]
    private void CmdSetOverlayMessage(string message)
    {
        _gameOverlay.CurrentMessage = message;
    }

    [Command]
    private void CmdSetAnimationStatus(bool walking)
    {
        if(walking)
        {
            _animationSwitcher.StartWalking();
        }
        else
        {
            _animationSwitcher.StopWalking();
        }
    }
}