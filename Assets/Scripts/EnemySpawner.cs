using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

	public GameObject enemyPrefab;
	public float width = 10f;
	public float height = 5f;
	public float formationSpeed = 0.5f;

	public float spawnDelay = 1f;

	private Vector3 formationMovement;
	//private float padding = 0.5f;

	float xmin;
	float xmax;

	bool movingRight;
	bool movingLeft;

	// Use this for initialization
	void Start ()
	{
		formationMovement = Vector3.right;
		float distance = transform.position.z - Camera.main.transform.position.z;
		Vector3 leftmost = Camera.main.ViewportToWorldPoint(new Vector3(0,0,distance));
		Vector3 rightmost = Camera.main.ViewportToWorldPoint(new Vector3(1,0,distance));
		xmin = leftmost.x;
		xmax = rightmost.x;

		SpawnUntilFull();
	}

	void SpawnUntilFull ()
	{
		Transform freePosition = NextFreePosition ();
		if (freePosition) {
			GameObject enemy = Instantiate (enemyPrefab, freePosition.position, Quaternion.identity) as GameObject;
			enemy.transform.parent = freePosition;
			Invoke("SpawnUntilFull",spawnDelay);
		}

	}

	public void OnDrawGizmos() {
		Gizmos.DrawWireCube(transform.position, new Vector3(width, height, 0));
	}

	// Update is called once per frame
	void Update ()
	{
		this.transform.position += formationMovement * formationSpeed * Time.deltaTime;

		if ((this.transform.position.x - width / 2) <= xmin) {
			formationMovement = Vector3.right;
		} else if ((this.transform.position.x + width / 2) >= xmax) {
			formationMovement = Vector3.left;
		}

		if (isFormationEmpty ()) {
			SpawnUntilFull();
		}
	}

	Transform NextFreePosition ()
	{
		foreach (Transform childInFormation in transform) {
			if (childInFormation.childCount == 0) {
				return childInFormation;
			}
		}
		return null;
	}

	bool isFormationEmpty ()
	{
		foreach (Transform childInFormation in transform) {
			if (childInFormation.childCount > 0) {
				return false;
			}
		}
		return true;
	}
}
