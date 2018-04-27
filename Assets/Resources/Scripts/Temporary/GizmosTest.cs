using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GizmosTest : MonoBehaviour
{
    public LayerMask CollisionLayer;
    public Vector3 test;
    public float radius;

	private void Update ()
    {
        /*bool found = */Physics.CheckSphere(this.transform.position + test, radius, CollisionLayer);

        //Debug.Log(found);
	}

    private void OnDrawGizmos()
    {
        Gizmos.DrawSphere(this.transform.position + test, radius);
    }
}
