using UnityEngine;
using System.Collections;

public class bumblespawn : MonoBehaviour {

	public GameObject bumble;
	public Transform spawn;


	// Use this for initialization
	void Start () {
	

	}
	
	// Update is called once per frame
	void Update () {


		if (Input.GetKey(KeyCode.A)){
				
			Instantiate(bumble,spawn.position,spawn.rotation);	

		}
	}
}
