using UnityEngine;
using UnityEngine.Networking;

public class PlayerStats : NetworkBehaviour
{
    [SyncVar(hook = "OnPlayerColorChanged")]
    public Color PlayerColor;

    [SyncVar(hook = "OnPlayerNameChanged")]
    public string PlayerName;

    public int Eliminations { get { return _eliminations; } }
    
    public int Outs { get { return _outs; } }
    
    //[SyncVar]
    private int _eliminations;

    //[SyncVar]
    private int _outs;
    
    private void Awake()
    {
        if(isServer)
        {
            _eliminations = 0;
            _outs = 0;
        }
    }

    public void AddElimination()
    {
        _eliminations++;
    }

    public void AddOut()
    {
        _outs++;
    }
    
    private void OnPlayerColorChanged(Color color)
    {
        GetComponent<Renderer>().material.color = color;
    }

    private void OnPlayerNameChanged(string name)
    {
        gameObject.name = name;
    }
}