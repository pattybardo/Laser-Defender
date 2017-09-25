using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public float adjustSpeed;
	public float padding = 0.5f;
	public float laserSpeed = 10f;
	public float fireRate = 0.4f;

	public float health = 250f;

	public Rigidbody2D laser;
	public AudioClip loseSound;

	float xmin;
	float xmax;


	// Use this for initialization
	void Start () {
		float distance = transform.position.z - Camera.main.transform.position.z;
		Vector3 leftmost = Camera.main.ViewportToWorldPoint(new Vector3(0,0,distance));
		Vector3 rightmost = Camera.main.ViewportToWorldPoint(new Vector3(1,0,distance));
		xmin = leftmost.x + padding;
		xmax = rightmost.x - padding;
	}

	// Update is called once per frame
	void Update ()
	{
		MoveWithKeys ();
		if (Input.GetKeyDown (KeyCode.Space)) {
			InvokeRepeating ("ShootLaser", 0.0000001f, fireRate);
		}
		if (Input.GetKeyUp (KeyCode.Space)) {
			CancelInvoke("ShootLaser");
		}
	}

	void MoveWithKeys ()
	{
		if (Input.GetKey (KeyCode.LeftArrow)) {
			this.transform.position += Vector3.left * adjustSpeed * Time.deltaTime;

		} else if (Input.GetKey (KeyCode.RightArrow)) {
			this.transform.position += Vector3.right * adjustSpeed * Time.deltaTime;
		}

		transform.position = new Vector3 (Mathf.Clamp(transform.position.x, xmin, xmax), transform.position.y,transform.position.z);
	}	

	void ShootLaser ()
	{
		Vector3 offset = transform.position + new Vector3 (0,0.5f,0);
		Rigidbody2D projectile;
		projectile = Instantiate(laser, offset, Quaternion.identity) as Rigidbody2D;
		projectile.velocity = transform.TransformDirection(Vector3.up * laserSpeed);
	}

	void OnTriggerEnter2D (Collider2D col)
	{
		Projectile missile = col.gameObject.GetComponent<Projectile> ();
		if (missile) {
			health -= missile.GetDamage ();
			missile.Hit();
			if (health <= 0) {
				Die();
			}
			Debug.Log("Hit by a projectile");
		}
	}

	void Die ()
	{
		LevelManager manager = GameObject.Find("LevelManager").GetComponent<LevelManager>();
		manager.LoadLevel("Win Screen");
		AudioSource.PlayClipAtPoint(loseSound, transform.position);
		Destroy(gameObject);
	}
}
