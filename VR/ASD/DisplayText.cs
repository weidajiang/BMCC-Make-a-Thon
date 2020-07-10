using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayText : MonoBehaviour
{
    // Start is called before the first frame update
    public string[] text;
    private int currentTextIndex = -1;
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
       
    }

    private bool FetchNextText()
    {
        currentTextIndex++;
        if (currentTextIndex >= text.Length) return false;
        return true;
    }
}
