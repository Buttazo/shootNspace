using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main : MonoBehaviour
{

    public ammoBar _ammobar;
    public GameObject startScreen;
    public GameObject endScreen;
    public PlayerController playerController;
    public ScoreCounter scoreCounter;

    // Start is called before the first frame update
    void Start()
    {
        endScreen.SetActive(false);
        
    }

    // Update is called once per frame
    void Update()
    {
        if (_ammobar.targetProgress < 0)
            EndGame();

        if (endScreen.activeSelf)
                restartGame();
    }

    public void restartGame()
    {

        

        endScreen.SetActive(false);

        _ammobar.slider.value = 1;
        ScoreCounter.scoreValue = 0;


        playerController.follow = true;
        playerController.fixRotation = true;
        playerController.rb.useGravity = false;

    }

    public void EndGame()
    {
        endScreen.SetActive(true);

        playerController.follow = false;
        playerController.fixRotation = false;
        playerController.rb.useGravity = true;
    }
}
