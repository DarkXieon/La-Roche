using UnityEngine;
using System.Collections;
using System.Text;
using System.Diagnostics;

public static partial class ExtensionMethods
{
    public static string GetErrorMessage(this object obj, string errorMessage, params string[] formatParams)
    {
        var builder = new StringBuilder();
        var stackTrace = new StackTrace();

        builder.AppendFormat(errorMessage, formatParams);
        builder.AppendLine();

        builder.AppendFormat("Error Occurred In: {0}", obj.GetType().ToString());
        builder.AppendLine();
        
        for(int i = 0; i < stackTrace.FrameCount; i++)
        {
            UnityEngine.Debug.Log("Ran");

            var frame = stackTrace.GetFrame(i);

            builder.AppendFormat("{0}: {1} at line {2}", frame.GetFileName().ToString(), frame.GetMethod().Name, frame.GetFileLineNumber().ToString());
            builder.AppendLine();
        }

        return builder.ToString();
    }
}
