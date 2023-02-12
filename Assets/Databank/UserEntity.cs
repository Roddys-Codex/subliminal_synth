using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DataBank
{
	public class UserEntity {

		public string user_id;
        public String user_name;
        public String user_date_created; // Auto generated timestamp

        public UserEntity(string id, String user_name)
        {
            user_id = id;
            this.user_name = user_name;
			user_date_created = "";
        }

        public UserEntity(string id, String user_name, string dateCreated)
        {
            user_id = id;
            this.user_name = user_name;
			user_date_created = dateCreated;
        }

        public static UserEntity getFakeLocation()
        {
            return new UserEntity("0", "Test_User_Name");
        }
	}
}
