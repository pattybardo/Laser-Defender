using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour {

	public float damage = 100f;
	public AudioClip laserSound;

	void Start() {
		AudioSource.PlayClipAtPoint(laserSound, transform.position);
	}

	public float GetDamage (){
		return damage;
	}

	public void Hit(){
		Destroy(gameObject);
	}
}
