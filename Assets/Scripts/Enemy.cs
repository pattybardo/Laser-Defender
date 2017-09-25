using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour {
	public float health = 150f;
	public int pointValue = 120;

	public float laserSpeed = 10f;
	public float shotsPerSecond = 0.5f;
	public AudioClip loseSound;

	public Rigidbody2D laser;
	private ScoreKeeper scoreKeeper;

	void OnTriggerEnter2D (Collider2D col)
	{
		Projectile missile = col.gameObject.GetComponent<Projectile> ();
		if (missile) {
			health -= missile.GetDamage ();
			missile.Hit();
			if (health <= 0) {
				AudioSource.PlayClipAtPoint(loseSound, transform.position);
				scoreKeeper.Score(pointValue);
				Destroy(gameObject);
			}
			Debug.Log("Hit by a projectile");
		}
	}

	void Start() {
		scoreKeeper = GameObject.Find("Score").GetComponent<ScoreKeeper>();
	}

	void Update ()
	{
		float probability = Time.deltaTime * shotsPerSecond;
		if (Random.value < probability) {
			ShootLaser();
		}
	}

	void ShootLaser ()
	{
		Rigidbody2D projectile;
		Vector3 startPosition = transform.position + new Vector3(0,-0.8f,0);
		projectile = Instantiate(laser, startPosition, Quaternion.identity) as Rigidbody2D;
		projectile.velocity = transform.TransformDirection(Vector3.down * laserSpeed);
	}
}
