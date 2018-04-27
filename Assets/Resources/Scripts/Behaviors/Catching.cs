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

    private GameOverlay _gameOverlay;

    protected override void Start()
    {
        base.Start();
        
        _holdingState = GetComponent<PlayerHoldingState>();

        _gameOverlay = GetComponent<GameOverlay>();
    }

    // Update is called once per frame
    private void Update()
    {
        var camera = Camera;

        // This will cast rays only against colliders in layer 9 (the ball's layer)
        int layerMask = 1 << 9;

        if (isLocalPlayer)
        {
            //var ray = camera.ScreenPointToRay(new Vector3(Screen.width / 2, Screen.height / 2, 0));
            //bool canHit = Physics.Raycast(ray, catchDistance, layerMask);
            bool canHit = Physics.Raycast(camera.transform.position, camera.transform.forward, catchDistance, layerMask);
            
            var cursorColor = canHit
                ? Color.green
                : Color.red;

            CmdSetCursorColor(/*gameObject, */cursorColor);
        }
        //var camera = Camera;

        // This will cast rays only against colliders in layer 9 (the ball's layer)
        //int layerMask = 1 << 9;
        
        RaycastHit hit;

        // If the ball is catchable...
        if (catchable == true)
        {
            // And if the "Fire2" input is pressed down
            if (_inputState.IsPressed(Buttons.CATCH) && _inputState.GetButtonHoldTime(Buttons.CATCH) == 0f)
            {
                // Need to find a way to use camera instead of this.transform.position, maybe a drag-in-drop or public variable to be set
                // Does the ray intersect any object in the ball layer
                bool caught = Physics.Raycast(camera.transform.position, camera.transform.forward, out hit, catchDistance, layerMask);

                if (caught)
                {
                    var ballCaughtMessage = new BallCaughtMessage
                    {
                        BallId = hit.transform.gameObject.GetComponent<NetworkIdentity>().netId,
                        CaughtById = GetComponent<NetworkIdentity>().netId
                    };

                    LobbyManager.singleton.client.Send(MyMessageTypes.BallCaughtMessage, ballCaughtMessage);

                    _holdingState.StartHoldingBall(hit.transform.gameObject);
                    /*
                    // Display that the ball was caught
                    Debug.Log("Caught");
                    Debug.Log(caught);
                    
                    CmdCatchBall(this.gameObject, hit.transform.gameObject);

                    // Set the ball to be a child of the player
                    _holdingState.StartHoldingBall(hit.transform.gameObject);
                    
                    // Set the ball to uncatchable 
                    catchable = false;
                    */
                }
            }
        }
    }

    [Command]
    private void CmdSetCursorColor(/*GameObject player, */Color color)
    {
        _gameOverlay.CursorColor = color;
        //player.GetComponent<GameOverlay>().CursorColor = color;
    }

    [Command]
    private void CmdCatchBall(GameObject caughtBy, GameObject ball)
    {
        ball.GetComponent<BallThrownState>().BallCaughtBy(caughtBy);
    }

    private void OnTriggerEnter(Collider other)
    {
        // If the player enters the ball collider, set catchable as true
        if (other.tag == "Ball")
        {
            catchable = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        // If the player leaves the ball collider, set catchable as false
        if (other.tag == "Ball")
        {
            catchable = false;
        }
    }
}