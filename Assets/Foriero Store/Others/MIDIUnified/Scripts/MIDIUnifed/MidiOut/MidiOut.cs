/* Copyright © Marek Ledvina, Foriero s.r.o. */
using System;
using System.Linq;
using ForieroEngine.MIDIUnified.Plugins;
using ForieroEngine.MIDIUnified.Synthesizer;
using UnityEngine;

namespace ForieroEngine.MIDIUnified
{
    public static partial class MidiOut
    {
        //0 = everything//
        //1 = nothing//
        //2,4,8//
        public static int channelMask = -1;
        public static int synthChannelMask = -1;
        public static bool fireMidiOutEvents = true;
        
        public static int lastMidiChannelCommand = 0;
        public static int lastMidiChannelData1 = 0;
        public static int lastMidiChannelData2 = 0;
        public static int lastMidiChannelInfinityCounter = 0;

        public static bool applyChannelVolumes = false;

        public static float[] volumes = new float[16]
        {
            1f, 1f, 1f, 1f,
            1f, 1f, 1f, 1f,
            1f, 1f, 1f, 1f,
            1f, 1f, 1f, 1f
        };
        public struct NoteCache { public int Index; public bool On; }
        public class ChannelCache { public NoteCache[] notes = new NoteCache[128]; }

        public static ChannelCache[] channelCache = new ChannelCache[16] 
        {
            new ChannelCache(), new ChannelCache(), new ChannelCache(), new ChannelCache(),
            new ChannelCache(), new ChannelCache(), new ChannelCache(), new ChannelCache(),
            new ChannelCache(), new ChannelCache(), new ChannelCache(), new ChannelCache(),
            new ChannelCache(), new ChannelCache(), new ChannelCache(), new ChannelCache(),
        };

        public static bool muteMessages = false;

        public static bool ignoreProgramMessages = false;
        public static ProgramEnum[] programEnums = new ProgramEnum[16] {
            ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano,
            ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano,
            ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano,
            ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano, ProgramEnum.AcousticGrandPiano
        };

        public static event ShortMessageEventHandler ShortMessageEvent;
        
        public static int SetInstrument(ProgramEnum anInstrument, ChannelEnum aChannel = ChannelEnum.C0)
        {
            if (aChannel == ChannelEnum.None) return 0;
            return SetInstrument((int)anInstrument, (int)aChannel);
        }

        public static int SetInstrument(int anInstrument, int aChannel = 0, int deviceId = -1)
        {
            return SendShortMessage(aChannel + (int)CommandEnum.MIDI_PROGRAM_CHANGE, anInstrument, 0, deviceId);
        }

        public static void InitPercussion(bool all = false)
        {
            if (all)
            {
                foreach (var p in Enum.GetValues(typeof(PercussionEnum)))
                {
                    SchedulePercussion((PercussionEnum)p, 1, 0.1f, false);
                }
            }
            else
            {
                SchedulePercussion(MIDIPercussionSettings.instance.metronomeHeavy, 1, 0.1f, false);
                SchedulePercussion(MIDIPercussionSettings.instance.metronomeLight, 1, 0.1f, false);
                SchedulePercussion(MIDIPercussionSettings.instance.metronomeSubdivision, 1, 0.1f, false);
            }
        }

        public static double SchedulePercussion(PercussionEnum aPercussion, int aVolume = 80, double scheduleTime = 0, bool absoluteDspTime = false)
        {
            return MIDIPercussion.SchedulePercussion(aPercussion, aVolume, scheduleTime, absoluteDspTime);
        }

        public static int Percussion(PercussionEnum aPercussion, int aVolume = 80)
        {
            return NoteOn((int)aPercussion, aVolume, 9);
        }

        public static void NoteDispatch(int aNoteIndex, float aDuration = 0f, float aDelay = 0f, int aVolume = 80, int aChannel = 0, int deviceId = -1, Action started = null, Action finished = null)
        {
            MidiDispatcher.DispatchNote(aNoteIndex, aVolume, aChannel, deviceId, aDuration, aDelay, started, finished);
        }

        public static void NoteDispatch(NoteEnum aNote, AccidentalEnum anAccidental, OctaveEnum anOctave, float aDuration = 0f, float aDelay = 0f, int aVolume = 80, ChannelEnum aChannel = ChannelEnum.C0, int deviceId = -1)
        {
            if (aChannel == ChannelEnum.None) return;

            int noteIndex = MidiConversion.MidiIndex(aNote, anAccidental, anOctave);
            NoteDispatch(noteIndex, aDuration, aDelay, aVolume, (int)aChannel);
        }

        public static int NoteOn(int aNoteIndex, int aVolume = 80, int aChannel = 0, int deviceId = -1, bool editor = false)
        {
            return SendShortMessage(aChannel, (int)CommandEnum.MIDI_NOTE_ON, aNoteIndex, aVolume, deviceId, editor);
        }

        public static int NoteOn(NoteEnum aNote, AccidentalEnum anAccidental, OctaveEnum anOctave, int aVolume = 80, ChannelEnum aChannel = ChannelEnum.C0, int deviceId = -1, bool editor = false)
        {
            if (aChannel == ChannelEnum.None) return 0;

            var noteIndex = MidiConversion.MidiIndex(aNote, anAccidental, anOctave);
            return NoteOn(noteIndex, aVolume, (int)aChannel, deviceId, editor);
        }
        
        public static int NoteOff(int aNoteIndex, int aChannel = 0, int deviceId = -1, bool editor = false)
        {
            return SendShortMessage((int)CommandEnum.MIDI_NOTE_OFF, aChannel, aNoteIndex, 0, deviceId, editor);
        }

        public static int NoteOff(NoteEnum aNote, AccidentalEnum anAccidental, OctaveEnum anOctave, ChannelEnum aChannel = ChannelEnum.C0, int deviceId = -1, bool editor = false)
        {
            if (aChannel == ChannelEnum.None) return 0;

            var noteIndex = MidiConversion.MidiIndex(aNote, anAccidental, anOctave);
            return NoteOff(noteIndex, (int)aChannel, deviceId, editor);
        }

        public static int Pedal(int aPedal, int aValue, int aChannel = 0, int deviceId = -1)
        {
            return SendShortMessage((int)CommandEnum.MIDI_CONTROL_CHANGE, aChannel, aPedal, aValue, deviceId);
        }

        public static int Pedal(PedalEnum aPedal, int aValue, ChannelEnum aChannel = ChannelEnum.C0, int deviceId = -1)
        {
            if (aChannel == ChannelEnum.None) return 0;

            return Pedal((int)aPedal, aValue, (int)aChannel, deviceId);
        }

        public static int SendControl(ControllerEnum aControl, int aValue, ChannelEnum aChannel = ChannelEnum.C0, int deviceId = -1)
        {
            if (aChannel == ChannelEnum.None && aControl != ControllerEnum.None) return 0;

            return SendControl((int)aControl, aValue, (int)aChannel, deviceId);
        }

        public static int SendControl(int aControl, int aValue, int aChannel = 0, int deviceId = -1)
        {
            return SendShortMessage((int)CommandEnum.MIDI_CONTROL_CHANGE, aChannel, aControl, aValue, deviceId);
        }

        public static void ChannelSoundsOff(int aChannel, int deviceId = -1)
        {
            var index = 0;
            foreach (NoteCache n in channelCache[aChannel].notes)
            {
                if (n.On) NoteOff(index, aChannel);
                index++;
            }
            SendShortMessage((int)CommandEnum.MIDI_CONTROL_CHANGE, aChannel, (int)ControllerEnum.AllSoundOff, 0, deviceId);
        }

        public static void ChannelPedalsOff(int aChannel, int deviceId = -1)
        {
            Pedal((int)PedalEnum.DamperPedal, 0, aChannel, deviceId);
            Pedal((int)PedalEnum.Sostenuto, 0, aChannel, deviceId);
            Pedal((int)PedalEnum.SoftPedal, 0, aChannel, deviceId);
        }

        public static int AllPedalsOff(int deviceId = -1)
        {
            for (int i = 0; i < 16; i++)
            {
                Pedal((int)PedalEnum.DamperPedal, 0, i, deviceId);
                Pedal((int)PedalEnum.Sostenuto, 0, i, deviceId);
                Pedal((int)PedalEnum.SoftPedal, 0, i, deviceId);
            }

            return 0;
        }

        public static int AllSoundOff(int deviceId = -1)
        {
            int result = 0;

            if (MIDISynthSettings.instance.active)
            {
                int channel = 0;
                foreach (ChannelCache ch in channelCache)
                {
                    int index = 0;
                    foreach (NoteCache n in ch.notes)
                    {
                        if (n.On) NoteOff(index, channel, deviceId);
                        index++;
                    }
                    channel++;
                }
            }
            else
            {
                for (int i = 0; i < 16; i++)
                {
                    result = SendShortMessage((int)CommandEnum.MIDI_CONTROL_CHANGE, i, (int)ControllerEnum.AllSoundOff, 0, deviceId);
                }
            }

            return result;
        }

        public static int ResetAllControllers(int deviceId = -1)
        {
            int result = 0;
            for (int i = 0; i < 16; i++)
            {
                result = SendShortMessage((int)CommandEnum.MIDI_CONTROL_CHANGE, 0, (int)ControllerEnum.ResetControllers, 0, deviceId);
            }
            return result;
        }

        public static int SendShortMessage(int aCommand, int aChannel, int aData1, int aData2, int deviceId, bool editor = false)
        {
            return SendShortMessage(aChannel + aCommand, aData1, aData2, deviceId, editor);
        }

        public static void IsInfiniteLoop(int aChannelCommand, int aData1, int aData2)
        {
            if (MIDISettings.instance.watchInfiniteLoop)
            {
                if (lastMidiChannelCommand == aChannelCommand
                   && lastMidiChannelData1 == aData1
                   && lastMidiChannelData2 == aData2) lastMidiChannelInfinityCounter++;
                else lastMidiChannelInfinityCounter = 0;

                if (lastMidiChannelInfinityCounter > MIDISettings.instance.infiniteLoopThreshold)
                {
                    MidiINPlugin.DisconnectDevices();
                    MidiOUTPlugin.DisconnectDevices();
                    lastMidiChannelInfinityCounter = 0;
                    Debug.LogError(
                        "Detected infinite midi loop. Disconnecting all MidiIn and MidiOut devices \n" +
                         lastMidiChannelCommand.ToString("X2") + " " +
                         lastMidiChannelData1.ToString("X2") + " " +
                         lastMidiChannelData2.ToString("X2") + " "
                         );
                }
            }
        }
        
        public static int SendShortMessage(int aChannelCommand, int aData1, int aData2, int deviceId, bool editor = false)
        {
            if (!MIDISettings.instance.outputSettings.active) return 0;

            IsInfiniteLoop(aChannelCommand, aData1, aData2);

            lastMidiChannelCommand = aChannelCommand;
            lastMidiChannelData1 = aData1;
            lastMidiChannelData2 = aData2;

            int channel = (aChannelCommand & 0x0F);
            int command = (aChannelCommand & 0xF0);
          
            if (command == (int)CommandEnum.MIDI_PROGRAM_CHANGE)
            {
                programEnums[channel] = (ProgramEnum)aData1;
                if (ignoreProgramMessages) return 0;
            }

            if (command.IsToneON())
            {
                channelCache[channel].notes[aData1].On = true;
                if (applyChannelVolumes) { aData2 = (int)(volumes[channel] * aData2); }
            }
            else if (command.IsToneOFF()) { channelCache[channel].notes[aData1].On = false; }

            if (fireMidiOutEvents) ShortMessageEvent?.Invoke(aChannelCommand, aData1, aData2, deviceId);

            if (muteMessages)  return 0;

            if (MIDISettings.instance.outputSettings.synth && ((1 << channel) & synthChannelMask) != 0) Synth.SendShortMessage(aChannelCommand, aData1, aData2);                 
            
            return ((1 << channel) & channelMask) != 0 ? MidiOUTPlugin.SendShortMessage((byte)aChannelCommand, (byte)aData1, (byte)aData2, deviceId, editor) : 0;
        }

        public static int SendData(byte[] aData, int deviceId = -1) => MIDISettings.instance.outputSettings.active ? MidiOUTPlugin.SendData(aData, deviceId) : 0;
    }
}