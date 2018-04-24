using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
public class MeshCombiner : MonoBehaviour
{
    private void Start()
    {
        MeshFilter[] meshFilters = GetComponentsInChildren<MeshFilter>();
            //.Where(mesh => mesh.name == "node_id7")
            //.ToArray();//GetAllMeshes(transform);
        CombineInstance[] combine = new CombineInstance[meshFilters.Length];
        int i = 0;
        while (i < meshFilters.Length)
        {
            Debug.Log(meshFilters.Length);
            combine[i].mesh = meshFilters[i].sharedMesh;
            combine[i].transform = meshFilters[i].transform.localToWorldMatrix;
            meshFilters[i].gameObject.active = false;
            i++;
        }
        transform.GetComponent<MeshFilter>().mesh = new Mesh();
        transform.GetComponent<MeshFilter>().mesh.CombineMeshes(combine, false, true, false);
        transform.gameObject.active = true;
    }

    private MeshFilter[] GetAllMeshes(Transform transform)
    {
        List<MeshFilter> meshFilters = new List<MeshFilter>();

        if (transform.childCount > 0)
        {
            meshFilters.AddRange(GetComponentsInChildren<MeshFilter>());

            foreach(Transform child in transform)
            {
                meshFilters.AddRange(GetAllMeshes(child));
            }
        }

        return meshFilters
            .Distinct()
            .Where(mesh => mesh != null)
            .ToArray();
    }
}