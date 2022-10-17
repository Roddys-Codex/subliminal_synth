using System;
using System.IO;
using ForieroEditor.Extensions;

namespace ForieroEditor.CommandLine
{
    public static class GitHub
	{

		/// <summary>
		/// Gets the repository files.
		/// </summary>
		/// <param name="gitPath">Git path. https://github.com/EsotericSoftware/spine-runtimes/trunk/spine-unity/Assets/spine-unity/</param>
		/// <param name="assetsPath">Assets path. Assets/Spine</param>
		public static void GetRepositoryFiles (string gitHubPath, string assetsPath, Action<string> onOutput = null, Action<string> onError = null)
		{
			string cmd = "/opt/local/bin/svn";

			string path = Path.Combine (Directory.GetCurrentDirectory (), assetsPath).FixOSPath ();

			string args = "export --trust-server-cert --non-interactive --force \"" + gitHubPath + "\" \"" + path + "\"";

			string directory = Path.GetDirectoryName (path);

			if (!Directory.Exists (directory)) {
				Directory.CreateDirectory (directory);
			}

			CMD.GenerateProcess(cmd, args, true, onOutput: onOutput, onError: onError);
		}		
	}
}
