using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.PostProcessing;

[RequireComponent(typeof(PostProcessingBehaviour))]
public class QualityFixer : MonoBehaviour
{
    public PostProcessingProfile GoodGraphics;
    public PostProcessingProfile BadGraphics;

    private void Start()
    {
        //Application.targetFrameRate = 30;

        var postProcessingBehaviour = GetComponent<PostProcessingBehaviour>();

        Debug.Log(Graphics.activeTier);

        Debug.Log(QualitySettings.GetQualityLevel());

        if(QualitySettings.GetQualityLevel() == 0 || QualitySettings.GetQualityLevel() == 1)
        {
            postProcessingBehaviour.profile = BadGraphics;
        }
    }
}
