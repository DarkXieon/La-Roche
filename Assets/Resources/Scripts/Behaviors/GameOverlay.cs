using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

using System.Linq;

public class GameOverlay : NetworkBehaviour
{
    [SyncVar(hook = "OnNameChange")]
    public string Name;

    [SyncVar(hook = "OnMatchTimeLeftChange")]
    public string MatchTimeLeft;

    [SyncVar(hook = "OnCurrentMessageChange")]
    public string CurrentMessage;

    [SyncVar(hook = "OnThrowPowerChange")]
    public float ThrowPowerPercentage;

    [SyncVar(hook = "OnCursorColorChange")]
    public Color CursorColor;

    [SerializeField]
    private Text _nameText;

    [SerializeField]
    private Text _matchTimeLeft;

    [SerializeField]
    private Text _mainMessageText;

    [SerializeField]
    private Text _throwPowerText;

    [SerializeField]
    private Image _cursor;

    private void Awake()
    {
        if(isServer)
        {
            Debug.Log(isServer);
            //if(isLocalPlayer)
            //{
            _nameText.text = "";
            _throwPowerText.text = "0% Power";
            _cursor.color = Color.red;
            //}

            _matchTimeLeft = FindObjectsOfType<GameObject>()
                .Single(obj => obj.tag == "WinConditionsManager")
                .GetComponent<Text>();
        }
    }

    private void Start()
    {
        if(isLocalPlayer)
        {
            var screenSize = (_throwPowerText.rectTransform.parent as RectTransform).sizeDelta;
            var textBoxSize = _throwPowerText.rectTransform.sizeDelta;

            _throwPowerText.rectTransform.anchoredPosition = new Vector3(screenSize.x - textBoxSize.x / 2 - 50, screenSize.y - textBoxSize.y / 2 - 25);
            _throwPowerText.alignment = TextAnchor.UpperRight;
            _throwPowerText.rectTransform.ForceUpdateRectTransforms();

            textBoxSize = _matchTimeLeft.rectTransform.sizeDelta;

            _matchTimeLeft.rectTransform.anchoredPosition = new Vector3(textBoxSize.x / 2 + 50, screenSize.y - textBoxSize.y / 2 - 25);
            _matchTimeLeft.alignment = TextAnchor.UpperLeft;

            textBoxSize = _mainMessageText.rectTransform.sizeDelta;

            _mainMessageText.rectTransform.anchoredPosition = new Vector3(screenSize.x / 2, screenSize.y - textBoxSize.y / 2 - 25);
            _mainMessageText.alignment = TextAnchor.UpperCenter;
        }
        else
        {
            _matchTimeLeft.enabled = false;
            _mainMessageText.enabled = false;
            _throwPowerText.enabled = false;
            _cursor.enabled = false;
        }
    }

    private void OnNameChange(string name)
    {
        _nameText.text = name;
    }

    private void OnMatchTimeLeftChange(string matchTime)
    {
        if(isLocalPlayer)
        {
            _matchTimeLeft.text = matchTime;
        }
    }

    private void OnCurrentMessageChange(string message)
    {
        _mainMessageText.text = message;
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