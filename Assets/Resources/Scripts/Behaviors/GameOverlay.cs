using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.Networking;

public class GameOverlay : NetworkBehaviour
{
    [SyncVar(hook = "OnNameChange")]
    public string Name;

    [SyncVar(hook = "OnThrowPowerChange")]
    public float ThrowPowerPercentage;

    [SyncVar(hook = "OnCursorColorChange")]
    public Color CursorColor;

    [SerializeField]
    private Text _nameText;

    [SerializeField]
    private Text _throwPowerText;

    [SerializeField]
    private Image _cursor;

    private void Awake()
    {
        _nameText.text = "";

        _throwPowerText.text = "0% Power";

        _cursor.color = Color.red;
    }

    private void OnNameChange(string name)
    {
        _nameText.text = name;
    }

    private void OnThrowPowerChange(float throwPowerPercentage)
    {
        var rounded = throwPowerPercentage.ToString("p");

        _throwPowerText.text = string.Format("{0} Power", rounded);
    }

    private void OnCursorColorChange(Color color)
    {
        _cursor.color = color;
    }
}
