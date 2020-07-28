using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SC_Play : MonoBehaviour
{

    public GameObject obj1;
    public GameObject obj2;

    // Start is called before the first frame update
    void Start()
    {
        obj1.SetActive(true);
        obj2.SetActive(false);
    }

    public void Next()
    {
        //Start showing ouput
        obj1.SetActive(false);
        obj2.SetActive(true);
    }

    public void StartNowButton()
    {
        // Play Now Button has been pressed, here you can initialize your game (For example Load a Scene called GameLevel etc.)
        UnityEngine.SceneManagement.SceneManager.LoadScene("Game");
    }



}
