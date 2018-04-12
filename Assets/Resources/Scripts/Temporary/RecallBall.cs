using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//This is for the test builds I give to the design team
public class RecallBall : MonoBehaviour
{
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.R))
        {
            var player = GameObject.FindGameObjectWithTag("Player");
            var ball = GameObject.FindGameObjectWithTag("Ball");

            ball.GetComponent<Rigidbody>().velocity = Vector3.zero;

            ball.transform.position = new Vector3(player.transform.position.x, player.transform.position.y + 2, player.transform.position.z);
        }
    }
}