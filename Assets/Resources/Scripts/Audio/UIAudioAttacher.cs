using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class UIAudioAttacher : NetworkBehaviour
{
    private AudioController _audioController;

    private void Start()
    {
        _audioController = GetComponent<AudioController>();

        GameObject.FindGameObjectWithTag("Lobby Manager")
            .GetComponentsInChildren<Button>()
            .ForEach(button => button.onClick.AddListener(() =>
            {
                Debug.Log(button.gameObject.name);

                _audioController.PlayAudio(AudioClips.ButtonClick);
            }));
    }
}
