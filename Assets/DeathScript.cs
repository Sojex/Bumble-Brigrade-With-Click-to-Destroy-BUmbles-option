using UnityEngine;
using System.Collections;

public class DeathScript : MonoBehaviour {

	public GameObject spike;
	public Vector3 destination;
	public GameObject bumble;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		destination = spike.transform.position;
			
		Vector3 direction = Vector3.Normalize (destination - bumble.transform.position);

		Debug.Log ("direction=" + direction);

		//Movement
		GetComponent<Rigidbody> ().AddForce (direction * 12);
	
	
	
	
	}
			//collision detection / Bumble Kill
		void OnCollisionEnter(Collision col){

		Debug.Log ("DIIIEEEE" + col.collider);


		//if (col) {
		//	Debug.Log ("Splat!!!!" + col.collider);
		//}




		//Destroy (this.gameObject);


				//Wasn't able to get the if statement running properly wouldnt detect collisions
		if (col.gameObject.tag == "FuckYouEmanual") {
			
			Destroy(this.gameObject);
			Debug.Log ("Splat!!!!" + col.collider);
		}



	}

	void OnMouseDown(){

		Destroy (gameObject);
	}

}
