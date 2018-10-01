using System.Collections.Generic;
using System.Linq;

using UnityEngine;
using UnityEngine.Networking;

public class AudioController : NetworkBehaviour
{
    [SerializeField]
    private GameObject _containerPrefab;

    [SerializeField]
    private AudioSourceIndex[] _gameAudio;
    
    private Dictionary<AudioClips, AudioSource> _gameAudioDictionary;

    private void Awake()
    {
        var equalityComparer = new AudioSourceEqualityComparer();

        var preparedCollection = _gameAudio
            .Distinct(equalityComparer)
            .Select(index => new AudioSourceIndex
            {
                AudioSource = Instantiate(index.AudioSource),
                ClipId = index.ClipId
            });

        var sourceContainer = Instantiate(_containerPrefab);
        sourceContainer.transform.parent = this.transform;

        preparedCollection.ForEach(index => index.AudioSource.transform.parent = sourceContainer.transform);

        if (preparedCollection.Count() < _gameAudio.Length)
        {
            Debug.LogWarning("Two or more audio sources have the same clip id, some clips had to be removed and will not play.");
        }

        _gameAudioDictionary = preparedCollection
            .ToDictionary(sourceIndex => sourceIndex.ClipId, sourceIndex => sourceIndex.AudioSource);
    }

    public void PlayAudio(AudioClips audioId, bool localAudio = false)
    {
        if(!localAudio)
        {
            if (isServer)
            {
                RpcPlayAudio(audioId);
            }
            else
            {
                CmdPlayAudio(audioId);
            }
        }
        else
        {
            PlayAudioInternal(audioId);
        }
    }

    [Command]
    private void CmdPlayAudio(AudioClips audioId)
    {
        RpcPlayAudio(audioId);
    }

    [ClientRpc]
    private void RpcPlayAudio(AudioClips audioId)
    {
        PlayAudioInternal(audioId);
    }

    private void PlayAudioInternal(AudioClips audioId)
    {
        AudioSource source;

        if (_gameAudioDictionary.TryGetValue(audioId, out source))
        {
            if (!source.isPlaying)
            {
                source.Play();
            }
            else
            {
                Debug.LogWarning("Tried to play audio that was already playing. Request denied.");
            }
        }
        else
        {
            Debug.LogWarning("Tried to play audio with an id that does not exist in the current audio controller dictionary. Did you forget to add it?");
        }
    }

    public void StopAudio(AudioClips audioId, bool localAudio = false)
    {
        if (!localAudio)
        {
            if (isServer)
            {
                RpcStopAudio(audioId);
            }
            else
            {
                CmdStopAudio(audioId);
            }
        }
        else
        {
            StopAudioInternal(audioId);
        }
    }

    [Command]
    private void CmdStopAudio(AudioClips audioId)
    {
        RpcStopAudio(audioId);
    }

    [ClientRpc]
    private void RpcStopAudio(AudioClips audioId)
    {
        StopAudioInternal(audioId);
    }
    
    private void StopAudioInternal(AudioClips audioId)
    {
        AudioSource source;

        if (_gameAudioDictionary.TryGetValue(audioId, out source))
        {
            if (source.isPlaying)
            {
                source.Stop();
            }
            else
            {
                Debug.LogWarning("Tried to stop audio that wasn't already playing. Request denied.");
            }
        }
        else
        {
            Debug.LogWarning("Tried to stop audio with an id that does not exist in the current audio controller dictionary. Did you forget to add it?");
        }
    }

    public bool IsPlaying(AudioClips audioId)
    {
        AudioSource source;

        if (_gameAudioDictionary.TryGetValue(audioId, out source))
        {
            return source.isPlaying;
        }
        else
        {
            Debug.LogWarning("Tried to stop audio with an id that does not exist in the current audio controller dictionary. Did you forget to add it?");

            return false;
        }
    }

    [System.Serializable]
    protected class AudioSourceIndex
    {
        public AudioSource AudioSource;
        public AudioClips ClipId;
    }

    protected class AudioSourceEqualityComparer : IEqualityComparer<AudioSourceIndex>
    {
        public bool Equals(AudioSourceIndex x, AudioSourceIndex y)
        {
            return x.ClipId == y.ClipId;
        }

        public int GetHashCode(AudioSourceIndex obj)
        {
            return obj.GetHashCode();
        }
    }
}
