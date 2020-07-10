using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Open_Trigger_Door : MonoBehaviour
{
    Animator anim;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {   
        Debug.print(Trigger_Door.hasCompletedLevel1);
        if(Trigger_Door.hasCompletedLevel1) anim.SetTrigger("level1");
    }
}
