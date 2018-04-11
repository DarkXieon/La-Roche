﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementController : MonoBehaviour
{
    public float movementTimeLimit = 5.0f;  // The time that players can move
    private float timeLeft = 0; // How long the user has left to move

    public float moveSpeed = 10.0f; // The player's movement speed

    public bool isUsersTurn = true; // Set to true if it's the player's turn (they have the ball)
    public bool isPlayerOut = false;    // Is set to true if the player gets out

    void Start()
    {
        timeLeft = movementTimeLimit;   // Set the time that the user has to move to the movementTimeLimit
    }

    // For each frame...
    private void Update()
    {
        // Get the input from the user
        float horizontalInput = Input.GetAxis("Horizontal");
        float verticalInput = Input.GetAxis("Vertical");

        // If it's the user's turn, they're not out, and they still have time
        if (isUsersTurn && !isPlayerOut && timeLeft > 0)
        {
            // Decrease the time
            timeLeft -= Time.deltaTime;
            Debug.Log("Movement Time Left: " + timeLeft);    // Done for testing purposes
            // Move the player
            transform.Translate(moveSpeed * horizontalInput * Time.deltaTime, 0f, moveSpeed * verticalInput * Time.deltaTime); // Time.deltaTime normalizes the speed (due to differences like fps)
        }   // If they run out of time...
        else if (timeLeft <= 0)
        {
            // Set isUsersTurn to false
            isUsersTurn = false;
            timeLeft = movementTimeLimit;   // Set the timeLeft back to movementTimeLimit, so when it's their turn again they have time to do something
        }
    }
}