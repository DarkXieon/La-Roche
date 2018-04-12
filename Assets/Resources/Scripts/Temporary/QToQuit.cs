using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//This is for the test builds I give to the design team
public class QToQuit : MonoBehaviour
{
	private void Update ()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            Application.Quit();
        }
	}
}
