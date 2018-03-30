using UnityEngine;
using System.Collections;

[System.Serializable]
public class InputAxisState
{
    public string AxisName;
    public float OffValue;
    public Buttons Button;
    public Condition Condition;

    public float Value
    {
        get
        {
            var axisValue = Input.GetAxis(this.AxisName);

            var actualValue = Mathf.Abs(axisValue - OffValue);

            return actualValue;
        }
    }

    public bool IsPressed
    {
        get
        {
            var axisValue = Input.GetAxis(this.AxisName);

            switch (this.Condition)
            {
                case Condition.GREATER_THAN:
                    return axisValue > this.OffValue;
                case Condition.LESS_THAN:
                    return axisValue < this.OffValue;
            }

            return false;
        }
    }
}