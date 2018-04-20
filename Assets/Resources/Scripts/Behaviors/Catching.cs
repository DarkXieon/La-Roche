using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Catching : MonoBehaviour {

    // What to know about this script: public variable chestNumber must be set to the child number that the gameobject chest is, and public camera variable should be set to 
    // the camera through a drag and drop. Also, the ball object must have a sphere collider on it to work. catchDistance public variable should be set to the size of the
    // ball sphere collider.

    // Max distance a player can be from the ball to catch it
    public float catchDistance;
    // Set to true if the ball is within the ball sphere collider
    private bool catchable = false;
    GameObject ball;
    // Will be used to set ball to be child of the player's chest
    private Transform chest;
    // Will be used for raycasting
    public Camera camera;
    // Should be set to the child number chest is
    public int chestNumber;

    void Awake()
    {
        // Get the ball gameobject (Will be set to Find(Ball) eventually)
        ball = GameObject.Find("Test Ball");

        // Needed to make ball a child of the player's chest object. If
        chest = this.gameObject.transform.GetChild(chestNumber);
    }

    // Update is called once per frame
    void Update()
    {
        // This will cast rays only against colliders in layer 9 (the ball's layer)
        int layerMask = 1 << 9;

        RaycastHit hit;

        // If the ball is catchable...
        if (catchable == true)
        {
            // And if the "Fire2" input is pressed down
            if (Input.GetButtonDown("Fire3"))
            {
                // Need to find a way to use camera instead of this.transform.position, maybe a drag-in-drop or public variable to be set
                // Does the ray intersect any object in the ball layer
                bool caught = Physics.Raycast(camera.transform.position, this.transform.forward, out hit, catchDistance, layerMask);
                if (caught)
                {
                    // Display that the ball was caught
                    Debug.Log("Caught");
                    Debug.Log(caught);
                    // Set the ball to be a child of the player
                    ball.transform.parent = chest.transform;
                    // Set the ball to uncatchable 
                    catchable = false;
                }
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        // If the player enters the ball collider, set catchable as true
        if (other.tag == "Ball")
        {
            catchable = true;
        }
    }

    void OnTriggerExit(Collider other)
    {
        // If the player leaves the ball collider, set catchable as false
        if (other.tag == "Ball")
        {
            catchable = false;
        }
    }
}
