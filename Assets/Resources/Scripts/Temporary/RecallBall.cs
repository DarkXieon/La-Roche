using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//This is for the test builds I give to the design team
public class RecallBall : MonoBehaviour
{
    public Transform RecallTo;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.R))
        {
            var player = RecallTo;
            var ball = GameObject.FindGameObjectWithTag("Ball");

            ball.GetComponent<Rigidbody>().velocity = Vector3.zero;

            ball.transform.position = new Vector3(player.position.x + .5f, player.position.y + 2, player.position.z);
        }
    }
}