using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStats : MonoBehaviour
{
    public int Eliminations{ get; private set; }
    public int Outs { get; private set; }
    public int PlayerNumber { get; private set; } // This is to identify each player seperately
}
