using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trigger_Door : MonoBehaviour
{
    public static bool hasCompletedLevel1 = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void OnTriggerEnter(Collider other)
    {
        hasCompletedLevel1 = true;
    }
}
