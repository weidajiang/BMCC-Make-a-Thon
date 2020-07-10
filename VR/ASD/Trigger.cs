using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trigger : MonoBehaviour
{
    //Global Variable, aka static variable, to be used as beginning of the game
    public static bool hasMask = false;
    public GameObject Mask;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        //Deactivate the mask
        if (hasMask) Mask.SetActive(false);

    }
    void OnTriggerEnter(Collider collision)
    {
        hasMask = true;
    }
}

