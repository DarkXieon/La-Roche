using Prototype.NetworkLobby;

using UnityEngine;
using UnityEngine.Networking;

public class Catching : BaseBehavior
{
    // What to know about this script: public variable chestNumber must be set to the child number that the gameobject chest is, and public camera variable should be set to 
    // the camera through a drag and drop. Also, the ball object must have a sphere collider on it to work. catchDistance public variable should be set to the size of the
    // ball sphere collider.

    // Max distance a player can be from the ball to catch it
    public float catchDistance;

    // Set to true if the ball is within the ball sphere collider
    private bool catchable = false;
    
    // Will be used for raycasting
    public Camera Camera;
    
    private PlayerHoldingState _holdingState;
    private AnimationSwitcher _animationSwitcher;
    private GameOverlay _gameOverlay;

    protected override void Start()
    {
        base.Start();
        
        _holdingState = GetComponent<PlayerHoldingState>();
        _animationSwitcher = GetComponent<AnimationSwitcher>();
        _gameOverlay = GetComponent<GameOverlay>();
    }

    // Update is called once per frame
    private void Update()
    {
        if(isLocalPlayer)
        {
            var camera = Camera;

            // This will cast rays only against colliders in layer 9 (the ball's layer)
            int layerMask = 1 << 9;

            bool canHit = Physics.Raycast(camera.transform.position, camera.transform.forward, catchDistance, layerMask);

            var cursorColor = canHit
                ? Color.green
                : Color.red;

            CmdSetCursorColor(cursorColor);

            RaycastHit hit;

            // And if the "Fire2" input is pressed down
            if (canHit && _inputState.IsPressed(Buttons.CATCH) && _inputState.GetButtonHoldTime(Buttons.CATCH) == 0f)
            {
                // Need to find a way to use camera instead of this.transform.position, maybe a drag-in-drop or public variable to be set
                // Does the ray intersect any object in the ball layer
                bool caught = Physics.Raycast(camera.transform.position, camera.transform.forward, out hit, catchDistance, layerMask);

                if (caught)
                {
                    CmdStartCatchAnimation();

                    var ballCaughtMessage = new BallCaughtMessage
                    {
                        BallId = hit.transform.gameObject.GetComponent<NetworkIdentity>().netId,
                        CaughtById = GetComponent<NetworkIdentity>().netId
                    };

                    LobbyManager.singleton.client.Send(MyMessageTypes.BallCaughtMessage, ballCaughtMessage);

                    _holdingState.StartHoldingBall(hit.transform.gameObject);
                }
            }
        }
    }
    
    //private void OnTriggerEnter(Collider other)
    //{
    //    // If the player enters the ball collider, set catchable as true
    //    if (other.attachedRigidbody.tag == "Ball")
    //    {
    //        catchable = true;
    //    }
    //}

    //private void OnTriggerExit(Collider other)
    //{
    //    // If the player leaves the ball collider, set catchable as false
    //    if (other.attachedRigidbody.tag == "Ball")
    //    {
    //        catchable = false;
    //    }
    //}

    [Command]
    private void CmdSetCursorColor(Color color)
    {
        _gameOverlay.CursorColor = color;
    }

    [Command]
    private void CmdStartCatchAnimation()
    {
        _animationSwitcher.CatchBall();
    }
}