﻿using UnityEngine;

namespace ForieroEngine.Newtonsoft.JsonConverters{

	/// <summary>
	/// Custom <c>Newtonsoft.Json.JsonConverter</c> for <c>UnityEngine.Vector4</c>.
	/// </summary>
	public class Vector4Converter : PartialConverter<Vector4>{

		/// <summary>
		/// Get the property names include <c>x</c>, <c>y</c>, <c>z</c>, <c>w</c>.
		/// </summary>
		/// <returns>The property names.</returns>
		protected override string[] GetPropertyNames(){
			return new []{"x", "y", "z", "w"};
		}

	}

}
