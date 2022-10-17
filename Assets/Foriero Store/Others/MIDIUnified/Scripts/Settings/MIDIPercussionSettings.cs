using System.Collections.Generic;
using UnityEngine;
using ForieroEngine.MIDIUnified;
using ForieroEngine.Settings;

#if UNITY_EDITOR
using UnityEditor;
#endif

[SettingsManager]
public partial class MIDIPercussionSettings : Settings<MIDIPercussionSettings>, ISettingsProvider
{
#if UNITY_EDITOR
    [MenuItem("Foriero/Settings/Midi/Percussion")] public static void MIDIPercussionSettingsMenu() => Select();   
#endif
        
    public bool initialize = true;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    private static void InitBeforeSceneLoad()
    {
        foreach (var p in System.Enum.GetValues(typeof(PercussionEnum)))
        {
            var c = instance.GetAudioClipInternal((PercussionEnum)p);
            instance._percussionClips.Add((PercussionEnum)p, c);
        }
    }
    
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void InitAfterSceneLoad()
    {
        if (!instance.initialize) return;
        InitPercussion();
    }

    public static void InitPercussion()
    {
        if (MIDIPercussion.instance != null) return;
        System.Diagnostics.Stopwatch stopWatch = ForieroDebug.CodePerformance ? System.Diagnostics.Stopwatch.StartNew() : null;
        new GameObject("MIDIPercussion").AddComponent<MIDIPercussion>();
        if (Debug.isDebugBuild) Debug.Log("METHOD STOPWATCH (MidiPercussionSettings - AfterSceneLoad): " + stopWatch?.Elapsed.ToString());
    }

    [Tooltip("")]
    public int maxScheduledUnits = 20;

    [Tooltip("")]
    public PercussionEnum metronomeHeavy = PercussionEnum.HighWoodBlock;
    [Tooltip("")]
    [Range(0f, 1f)]
    public float metronomeHeavyVolume = 1f;

    [Tooltip("")]
    public PercussionEnum metronomeLight = PercussionEnum.LowWoodBlock;
    [Tooltip("")]
    [Range(0f, 1f)]
    public float metronomeLightVolume = 1f;

    [Tooltip("")]
    public PercussionEnum metronomeSubdivision = PercussionEnum.BassDrum1;
    [Tooltip("")]
    [Range(0f, 1f)]
    public float metronomeSubdivisionVolume = 1f;
    public bool metronomeSubdivisionsEnabled = false;

    [Tooltip("")]
    public PercussionEnum rhythm = PercussionEnum.HandClap;
    [Tooltip("")]
    [Range(0f, 1f)]
    public float rhythmVolume = 1f;


    [Tooltip("")]
    public AudioClip[] percussionClips;
    private readonly SortedDictionary<PercussionEnum, AudioClip> _percussionClips = new SortedDictionary<PercussionEnum, AudioClip>();

    private AudioClip GetAudioClipInternal(PercussionEnum percussionEnum)
    {
        var index = (int)percussionEnum - (int)PercussionEnum.AcousticBassDrum;
        if (index >= 0 && index < percussionClips.Length) { return percussionClips[index]; }
        return null;
    }

    public AudioClip GetAudioClip(PercussionEnum percussionEnum) => _percussionClips[percussionEnum];
    
    public static PercussionEnum GetPercussionEnum(BeatType beatType)
    {
        return beatType switch
        {
            BeatType.Heavy => instance.metronomeHeavy,
            BeatType.Light => instance.metronomeLight,
            BeatType.Subdivision => instance.metronomeSubdivision,
            _ => PercussionEnum.HighWoodBlock
        };
    }
    
    public static float GetPercussionVolume(BeatType beatType)
    {
        return beatType switch
        {
            BeatType.Heavy => instance.metronomeHeavyVolume,
            BeatType.Light => instance.metronomeLightVolume,
            BeatType.Subdivision => instance.metronomeSubdivisionVolume,
            _ => 100
        };
    }
    
    public static int GetPercussionAttack(BeatType beatType)
    {
        return beatType switch
        {
            BeatType.Heavy => instance.metronomeHeavyVolume.ToByteVolume(),
            BeatType.Light => instance.metronomeLightVolume.ToByteVolume(),
            BeatType.Subdivision => instance.metronomeSubdivisionVolume.ToByteVolume(),
            _ => 100
        };
    }
}
