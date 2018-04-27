using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class GameMenu : MonoBehaviour
{
    [HideInInspector]
    public bool InGame = false;

    private bool _isVisible = false;

    private Image _panelImage;
    
    private void Update()
    {
        if (/*Might have to make this class a network behaviour so I can use isLocalPlayer*/ InGame && Input.GetKeyDown(KeyCode.Escape))
        {
            ToggleVisibility();
        }
    }

    public void ToggleVisibility()
    {
        bool toggleTo = !_isVisible;

        SetVisibility(toggleTo);
    }
    
    public void SetVisibility(bool visibility)
    {
        _isVisible = visibility;
        
        foreach (Transform childTransform in transform)
        {
            childTransform.gameObject.SetActive(_isVisible);
        }

        _panelImage = _panelImage ?? GetComponent<Image>();
        
        if (_panelImage != null)
        {
            _panelImage.enabled = _isVisible;
        }

        CursorLockMode lockMode = _isVisible
            ? CursorLockMode.None
            : CursorLockMode.Locked;

        Cursor.lockState = lockMode; //This locks the players cursor in the middle of the screen and makes it invisible or unlocks it

        Cursor.visible = false;
    }
}