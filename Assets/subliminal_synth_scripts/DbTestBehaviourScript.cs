using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DataBank;
using System;

public class DbTestBehaviourScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		SynthDb synthDb = new SynthDb();

		////Add Data
		//synthDb.addData(new UserEntity("0", "roddy1"));
        System.Data.IDataReader data = synthDb.getDataByString("roddy1");
		Debug.Log("DATA = " + data);
		//synthDb.addData(new UserEntity("1", "dan27"));
		//synthDb.addData(new UserEntity("2", "danboi"));
		//synthDb.addData(new UserEntity("3", "danny007"));
		//synthDb.addData(new UserEntity("4", "roddy23"));
		//synthDb.addData(new UserEntity("5", "roddy77"));
		//synthDb.addData(new UserEntity("6", "danbot"));
		synthDb.close();


		//Fetch All Data
		//SynthDb synthDb2 = new SynthDb();
		//System.Data.IDataReader reader = synthDb2.getAllData();

		//int fieldCount = reader.FieldCount;
		//List<UserEntity> myList = new List<UserEntity>();
		//while (reader.Read())
		//{
		//	UserEntity entity = new UserEntity(	reader[0].ToString(), 
		//												reader[1].ToString(), 
		//												reader[2].ToString());

		//	Debug.Log("id: " + entity.user_name);
		//	myList.Add(entity);
		//}

	}

}
