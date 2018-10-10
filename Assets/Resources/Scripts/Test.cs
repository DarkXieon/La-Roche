using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.Resources.Scripts
{
    public class Test : MonoBehaviour
    {
        public void Update()
        {
            if(Input.GetKeyDown(KeyCode.P))
            {
                Cursor.visible = false;
                Cursor.lockState = CursorLockMode.Locked;
            }
            else if(Input.GetKeyDown(KeyCode.L))
            {
                Cursor.visible = true;
                Cursor.lockState = CursorLockMode.None;
            }
        }
    }
}
