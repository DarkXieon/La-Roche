using UnityEngine;
using System.Collections;

[System.Serializable] //Allows this class to be viewed (and edited) in the inspector when it's a field on another class
public class InputAxisState
{
    public Buttons Button { get { return _button; } }

    [SerializeField]
    private string _axisName; //The name of the Input.GetAxis axis

    [SerializeField]
    private float _offValue; //The value from Input.GetAxis where the button is no longer being pressed

    [SerializeField]
    private Buttons _button; //The button that this InputAxisState corresponds to

    [SerializeField]
    private Condition _condition; //The logical condition used to determine where the Input.GetAxis value needs to be, relative to the OffValue

    public float Value //The magnitude of the axis
    {
        get
        {
            var axisValue = Input.GetAxis(this._axisName); //Gets the Input.GetAxis value

            var actualValue = Mathf.Abs(axisValue - this._offValue); //Gets the value relitive to an offValue of zero and takes the absolute value

            return actualValue;
        }
    }

    public bool IsPressed
    {
        get
        {
            var axisValue = Input.GetAxis(this._axisName); //Gets the Input.GetAxis value

            switch (this._condition) //Determines if the button is pressed based on the condition
            {
                case Condition.GREATER_THAN:
                    return axisValue > this._offValue;
                case Condition.LESS_THAN:
                    return axisValue < this._offValue;
            }

            return false;
        }
    }
}