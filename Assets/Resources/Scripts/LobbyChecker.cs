using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class LobbyChecker : MonoBehaviour
{
    public GameObject LobbyPrefab;

    public void Start()
    {
        DontDestroyOnLoad(gameObject);
    }

    public void Update ()
    {
		if(!FindObjectsOfType<GameObject>().Any(obj => obj.tag == "Lobby Manager"))
        {
            Instantiate(LobbyPrefab);
        }
	}
}
