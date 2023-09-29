using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileSpawner : MonoBehaviour
{
    public float deadZone;
    public GameObject projectile;
    public Transform projectileSpawnPoint;
    public float projectileSpeed = 10;

    public ammoBar _ammobar;

    // Start is called before the first frame update

    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if(_ammobar.targetProgress > 0)
            spawnProjectile();
            _ammobar.IncrementProgress(0.01f);

        }

        void spawnProjectile()
        {
            var bullet = Instantiate(projectile, transform.position, transform.rotation);
            bullet.GetComponent<Rigidbody>().velocity = projectileSpawnPoint.forward * projectileSpeed;

          
            Debug.Log("Projectile Spawned");

        }

  

    }
}