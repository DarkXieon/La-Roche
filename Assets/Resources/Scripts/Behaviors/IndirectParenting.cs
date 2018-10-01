using UnityEngine;
using UnityEngine.Networking;

public class IndirectParenting : NetworkBehaviour
{
    [SerializeField]
    private IndirectParent[] _indirectParents;

    private void Update()
    {
        foreach(var parent in _indirectParents)
        {
            parent.AdjustChild();
        }
    }
}

[System.Serializable]
public class IndirectParent
{
    public Transform Parent;
    public Transform Child;
    public bool PositionOnly;

    private Vector3 _initialChildPosition;
    private Vector3 _initialChildRotation;

    private bool _initilized = false;

    public void AdjustChild()
    {
        if(!_initilized)
        {
            _initialChildPosition = Child.position;
            _initialChildRotation = Child.eulerAngles;
        }

        Child.transform.position = Parent.position - _initialChildPosition;
        
        if(!PositionOnly)
        {
            Child.transform.rotation = Quaternion.Euler(Parent.eulerAngles - _initialChildRotation);
        }
    }
}