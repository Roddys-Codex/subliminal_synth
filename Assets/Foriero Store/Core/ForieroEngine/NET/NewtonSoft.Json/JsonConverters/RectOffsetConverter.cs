﻿using UnityEngine;

namespace ForieroEngine.Newtonsoft.JsonConverters{
	
	/// <summary>
	/// Custom <c>Newtonsoft.Json.JsonConverter</c> for <c>UnityEngine.RectOffset</c>.
	/// </summary>
	public class RectOffsetConverter : PartialConverter<RectOffset>{

		/// <summary>
		/// Get the property names include <c>left</c>, <c>right</c>, <c>top</c>, <c>bottom</c>.
		/// </summary>
		/// <returns>The property names.</returns>
		protected override string[] GetPropertyNames(){
			return new []{"left", "right", "top", "bottom"};
		}

	}

}
