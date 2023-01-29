#if UNITY_IOS
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
#endif
#if UNITY_ANDROID
using System.IO;
using System.Text;
using System.Xml;
using UnityEditor.Android;
#endif

namespace jp.kshoji.unity.midi.Editor
{
#if UNITY_IOS
    public class PostProcessBuild
    {
        [PostProcessBuild(99)]
        private static void OnPostProcess(BuildTarget target, string pathToBuildProject)
        {
            if (target == BuildTarget.iOS)
            {
                var project = new PBXProject();
                var pbxProjectPath = PBXProject.GetPBXProjectPath(pathToBuildProject);
                project.ReadFromFile(pbxProjectPath);
#if UNITY_2019_4_OR_NEWER
                project.AddFrameworkToProject(project.GetUnityFrameworkTargetGuid(), "CoreMIDI.framework", true);
                project.AddFrameworkToProject(project.GetUnityFrameworkTargetGuid(), "CoreAudioKit.framework", true);
#else
                project.AddFrameworkToProject(project.TargetGuidByName("Unity-iPhone"), "CoreMIDI.framework", true);
                project.AddFrameworkToProject(project.TargetGuidByName("Unity-iPhone"), "CoreAudioKit.framework", true);
#endif
                project.WriteToFile(pbxProjectPath);

                var infoPlist = new PlistDocument();
                var infoPlistPath = pathToBuildProject + "/Info.plist";
                infoPlist.ReadFromFile(infoPlistPath);
                if (infoPlist.root["NSBluetoothAlwaysUsageDescription"] == null)
                {
                    infoPlist.root.SetString("NSBluetoothAlwaysUsageDescription", "Uses for connecting BLE MIDI devices");
                    infoPlist.WriteToFile(infoPlistPath);
                }
            }
        }
    }
#endif

#if UNITY_ANDROID
    public class ModifyAndroidManifest : IPostGenerateGradleAndroidProject
    {
        private string _manifestFilePath;

        public void OnPostGenerateGradleAndroidProject(string basePath)
        {
            var androidManifest = new AndroidManifest(GetManifestPath(basePath));

            androidManifest.SetPermission("android.permission.BLUETOOTH");
            androidManifest.SetPermission("android.permission.BLUETOOTH_ADMIN");
            androidManifest.SetPermission("android.permission.ACCESS_FINE_LOCATION");
            androidManifest.SetFeature("android.hardware.bluetooth_le");

            androidManifest.SetPermission("android.permission.BLUETOOTH_SCAN");
            androidManifest.SetPermission("android.permission.BLUETOOTH_CONNECT");
            androidManifest.SetPermission("android.permission.BLUETOOTH_ADVERTISE");

            androidManifest.Save();
        }

        public int callbackOrder => 99;

        private string GetManifestPath(string basePath)
        {
            if (string.IsNullOrEmpty(_manifestFilePath))
            {
                var pathBuilder = new StringBuilder(basePath);
                pathBuilder.Append(Path.DirectorySeparatorChar).Append("src");
                pathBuilder.Append(Path.DirectorySeparatorChar).Append("main");
                pathBuilder.Append(Path.DirectorySeparatorChar).Append("AndroidManifest.xml");
                _manifestFilePath = pathBuilder.ToString();
            }

            return _manifestFilePath;
        }
    }

    internal class AndroidManifest : XmlDocument
    {
        private readonly string _androidXmlNamespace = "http://schemas.android.com/apk/res/android";
        private readonly string _path;

        protected internal AndroidManifest(string path)
        {
            _path = path;
            using (var reader = new XmlTextReader(_path))
            {
                Load(reader);
            }

            var namespaceManager = new XmlNamespaceManager(NameTable);
            namespaceManager.AddNamespace("android", _androidXmlNamespace);
        }

        public void Save()
        {
            using (var writer = new XmlTextWriter(_path, new UTF8Encoding(false)))
            {
                writer.Formatting = Formatting.Indented;
                Save(writer);
            }
        }

        private XmlAttribute CreateAndroidAttribute(string key, string value)
        {
            var attr = CreateAttribute("android", key, _androidXmlNamespace);
            attr.Value = value;
            return attr;
        }

        internal void SetPermission(string permission)
        {
            var child = CreateElement("uses-permission");
            child.Attributes.Append(CreateAndroidAttribute("name", permission));

            var manifest = SelectSingleNode("/manifest");
            manifest.AppendChild(child);
        }

        internal void SetFeature(string feature)
        {
            var child = CreateElement("uses-feature");
            child.Attributes.Append(CreateAndroidAttribute("name", feature));
            child.Attributes.Append(CreateAndroidAttribute("required", "true"));

            var manifest = SelectSingleNode("/manifest");
            manifest.AppendChild(child);
        }
    }
#endif
}