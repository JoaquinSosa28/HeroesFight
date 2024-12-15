using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RaycastWeapon : MonoBehaviour
{
    public WeaponManager.WeaponSlot weaponSlot;
    public WeaponManager.WeaponType weaponType;

    public bool isFiring = false;
    public int fireRate;
    public float bulletSpeed = 1000f;

    public Transform raycastOrigin;
    public string weaponName;

    public GameObject magazine;
    public int ammoCount;
    public int maxAmmo;

    [SerializeField] private ParticleSystem[] muzzleFlash;
    public AudioSource weaponBlast;
    public WeaponRecoil recoil;

    private bool canShoot = true;

    private WeaponManager activeWeapon;
    public byte bulletType = 0;

    void Awake()
    {
        recoil = GetComponent<WeaponRecoil>();
    }

    public void setupActiveWeapon(WeaponManager activeWeapon)
    {
        this.activeWeapon = activeWeapon;
    }

    public void StartFiring()
    {
        isFiring = true;
        FireBullet();
        recoil.ResetRecoil();
    }

    public void UpdateFiring()
    {
        if(canShoot)
        {
            canShoot = false;
            FireBullet();
            StopCoroutine(cooldownShoot());
            StartCoroutine(cooldownShoot());
        }
    }

    IEnumerator cooldownShoot()
    {
        //Fire Rate is 10 Rounds Per Second.
        yield return new WaitForSeconds((float)(1.0f/fireRate));
        canShoot = true;
        StopCoroutine(cooldownShoot());
    }

    //private void RaycastSegment(Vector3 start, Vector3 end, Bullet bullet)
    //{
    //    Vector3 direction = end - start;
    //    float distance = (end - start).magnitude;
    //    ray.origin = start;
    //    ray.direction = direction;
    //    if (Physics.Raycast(ray, out hitInfo, distance))
    //    {
    //        //Debug.DrawLine(ray.origin, hitInfo.point, Color.red, 1f);
    //        hitEffect.transform.position = hitInfo.point;
    //        hitEffect.transform.forward = hitInfo.normal;
    //        hitEffect.Emit(1);

    //        bullet.tracer.transform.position = hitInfo.point;
    //        bullet.time = maxLifetime;

    //        var rb2d = hitInfo.collider.GetComponent<Rigidbody>();
    //        if (rb2d)
    //        {
    //            rb2d.AddForceAtPosition(ray.direction * 25, hitInfo.point, ForceMode.Impulse);
    //        }
    //    } else
    //    {
    //        bullet.tracer.transform.position = end;
    //    }
    //}

    private void FireBullet()
    {
        if (ammoCount <= 0) return;

        ammoCount--;
        foreach (var particle in muzzleFlash)
        {
            particle.Emit(1);
        }
        activeWeapon.SpawnBullet(bulletType, raycastOrigin.position, bulletSpeed);
    }

    public void StopFiring()
    {
        isFiring = false;
    }
}
