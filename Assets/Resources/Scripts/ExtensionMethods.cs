﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

using UnityEngine;
using UnityEngine.Networking;

public static partial class ExtensionMethods
{
    public static void ForEach<T>(this IEnumerable<T> enumerable, Action<T> action)
    {
        enumerable.ToList().ForEach(action);
    }

    public static Coroutine WaitForCondition<T>(this T waiting, Predicate<T> waitUntilTrue, Action whenConditionTrue)
        where T : MonoBehaviour
    {
        return waiting.StartCoroutine(WaitForConditionEnumerator(waiting, waitUntilTrue, whenConditionTrue));
    }

    public static IEnumerator WaitForConditionEnumerator<T>(this T waiting, Predicate<T> waitUntilTrue, Action whenConditionTrue)
    {
        while (!waitUntilTrue.Invoke(waiting))
        {
            yield return null;
        }

        whenConditionTrue.Invoke();
    }

    public static List<Transform> GetChildren(this Transform parent)
    {
        var children = new List<Transform>();

        foreach (Transform child in parent)
        {
            children.Add(child);

            if (child.childCount > 0)
            {
                children.AddRange(child.GetChildren());
            }
        }

        return children;
    }
}