using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jump : BaseBehavior {

    public Vector3 jump; // controls height of jump
    public float jumpForce = 2.0f;
    public float velocityTest = 0.5f;

    protected override void Awake()
    {
        base.Awake();
        jump = new Vector3(0.0f, 2.0f, 0.0f); // set jump height value here
    }

    public LayerMask CollisionLayer;
    public Vector3 gizmoPosition;
    public float radius;

    void Update ()
    {
        bool isTouchingGround = Physics.CheckSphere(this.transform.position + gizmoPosition, radius, CollisionLayer); // sees if the gizmo is colliding with terrain
        //Debug.Log(isTouchingGround);
        if (_inputState.IsPressed(Buttons.JUMP) && isTouchingGround) // checks if jump button is pressed and gizmo is colliding with terrain
        {
            //var quickfix = this.transform.up;
            _body.AddForce(jump * jumpForce, ForceMode.VelocityChange);
            isTouchingGround = false;
        }
        Debug.Log(isTouchingGround);
	}

    private void OnDrawGizmos() // creates a gizmo
    {
        Gizmos.DrawSphere(this.transform.position + gizmoPosition, radius); // sets gizmo origin and causes gizmo to follow player
    }
}
