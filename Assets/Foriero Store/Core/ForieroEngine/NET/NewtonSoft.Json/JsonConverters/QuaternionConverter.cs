﻿using UnityEngine;

namespace ForieroEngine.Newtonsoft.JsonConverters{
	
	/// <summary>
	/// Custom <c>Newtonsoft.Json.JsonConverter</c> for <c>UnityEngine.Quaternion</c>.
	/// </summary>
	public class QuaternionConverter : PartialConverter<Quaternion>{

		/// <summary>
		/// Get the property names include <c>x</c>, <c>y</c>, <c>z</c>, <c>w</c>.
		/// </summary>
		/// <returns>The property names.</returns>
		protected override string[] GetPropertyNames(){
			return new []{"x", "y", "z", "w"};
		}

	}

}
