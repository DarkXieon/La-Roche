using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jump : BaseBehavior {

    public Vector3 jump; // controls height of jump
    public float jumpForce = 2.0f;
    public float velocityTest = 0.5f;

    public bool isGrounded;
    Rigidbody rb;

    protected override void Awake()
    {
        base.Awake();
        rb = GetComponent<Rigidbody>();
        jump = new Vector3(0.0f, 2.0f, 0.0f); // set jump height value here
    }

	void OnCollisionStay()
    {
        if (!isGrounded && rb.velocity.y <= velocityTest) // without this you can double-jump, but may cause problems on a slope
            isGrounded = true;
    }
	
	void Update () {
		if (_inputState.IsPressed(Buttons.JUMP) && isGrounded) // checks if jump button is pressed
        {
            rb.AddForce(jump * jumpForce, ForceMode.VelocityChange);
            isGrounded = false;
        }
	}
}
