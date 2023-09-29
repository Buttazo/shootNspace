using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawnScript : MonoBehaviour
{

    public GameObject enemy;
    public float spawnRate = 2;
    private float timer = 0;
    public float heightOffset;
    public float widthOffset;
    


    // Start is called before the first frame update
    void Start()
    {
        spawnEnemy();
    }

    // Update is called once per frame
    void Update()
    {
        if (timer < spawnRate)
        {
            timer += Time.deltaTime;
        }
        else
        {
            spawnEnemy();
            timer = 0;
        }


    }

    void spawnEnemy()
    {
        float lowestPoint = transform.position.y - heightOffset;
        float highestPoint = transform.position.y + heightOffset;

        float leftestPoint = transform.position.x - widthOffset;
        float rightestPoint = transform.position.x + widthOffset;

        Instantiate(enemy, new Vector3(Random.Range(leftestPoint, rightestPoint), Random.Range(lowestPoint, highestPoint), transform.position.z), transform.rotation);
    }


}
