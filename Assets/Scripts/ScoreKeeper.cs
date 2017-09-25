using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreKeeper : MonoBehaviour {

	public static int score = 0;

	Text scoreUI;

	// Use this for initialization
	void Start () {
		Reset();
		scoreUI = gameObject.GetComponent<Text>(); 
		scoreUI.text= score.ToString();
	}

	public static void Reset(){
		score = 0;
	}

	public void Score (int points)
	{
		score += points;
		scoreUI.text= score.ToString();
	}
}
