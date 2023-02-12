using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using UnityEngine;

namespace DataBank{
	public class SynthDb : SqliteHelper {
		private const String CodistanTag = "Codistan: LocationDb:\t";
        
        private const String USER_TABLE = "user";
        private const String USER_ID = "user_id";
        private const String USERNAME = "user_name";
		private const String CREATED_DATE = "date";
        private String[] COLUMNS = new String[] {USER_ID, USERNAME, CREATED_DATE};

        public SynthDb() : base()
        {
            //IDbCommand dbcmd = getDbCommand();
            Debug.Log("URI = " + db_connection_string);
            using (var dbcmd = getDbCommand())
            {
                dbcmd.CommandText = "CREATE TABLE IF NOT EXISTS " + USER_TABLE + " ( " +
                    USER_ID + " TEXT PRIMARY KEY, " +
                    USERNAME + " TEXT, " +
                    CREATED_DATE + " DATETIME DEFAULT CURRENT_TIMESTAMP )";
                dbcmd.ExecuteNonQuery();
            }
        }

        public void addData(UserEntity location)
        {
            using (var dbcmdData = getDbCommand())
            {
                dbcmdData.CommandText =
                "INSERT INTO " + USER_TABLE
                + " ( "
                + USER_ID + ", "
                + USERNAME + ") "

                + "VALUES ( '"
                + location.user_id + "', '"
                + location.user_name + "' )";
                dbcmdData.ExecuteNonQuery();
            }
        }

        public override IDataReader getDataById(int id)
        {
            return base.getDataById(id);
        }

        public override IDataReader getDataByString(string user_name)
        {
            using (var dbcmd = getDbCommand())
            {
                Debug.Log(CodistanTag + "Getting User: " + user_name);

                dbcmd.CommandText =
                    "SELECT * FROM " + USER_TABLE + " WHERE " + USERNAME + " = '" + user_name + "'";
                return dbcmd.ExecuteReader();
            }
        }

        public override void deleteDataByString(string user_name)
        {
            Debug.Log(CodistanTag + "Deleting User: " + user_name);

            IDbCommand dbcmd = getDbCommand();
            dbcmd.CommandText =
                "DELETE FROM " + USER_TABLE+ " WHERE " + USERNAME + " = '" + user_name + "'";
            dbcmd.ExecuteNonQuery();
        }

		public override void deleteDataById(int id)
        {
            base.deleteDataById(id);
        }

        public override void deleteAllData()
        {
            Debug.Log(CodistanTag + "Deleting Table");

            base.deleteAllData(USERNAME);
        }

        public override IDataReader getAllData()
        {
            return base.getAllData(USERNAME);
        }

        public IDataReader getLatestTimeStamp()
        {
            IDbCommand dbcmd = getDbCommand();
            dbcmd.CommandText =
                "SELECT * FROM " + USER_TABLE + " ORDER BY " + CREATED_DATE + " DESC LIMIT 1";
            return dbcmd.ExecuteReader();
        }
	}
}
