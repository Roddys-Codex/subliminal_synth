#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void jp.kshoji.midisystem.IControllerEventListener::ControlChange(jp.kshoji.midisystem.ShortMessage)
// 0x00000002 System.Void jp.kshoji.midisystem.IMetaEventListener::Meta(jp.kshoji.midisystem.MetaMessage)
// 0x00000003 jp.kshoji.midisystem.Info jp.kshoji.midisystem.IMidiDevice::GetDeviceInfo()
// 0x00000004 System.Void jp.kshoji.midisystem.IMidiDevice::Open()
// 0x00000005 System.Void jp.kshoji.midisystem.IMidiDevice::Close()
// 0x00000006 System.Boolean jp.kshoji.midisystem.IMidiDevice::GetIsOpen()
// 0x00000007 System.Int64 jp.kshoji.midisystem.IMidiDevice::GetMicrosecondPosition()
// 0x00000008 System.Int32 jp.kshoji.midisystem.IMidiDevice::GetMaxReceivers()
// 0x00000009 System.Int32 jp.kshoji.midisystem.IMidiDevice::GetMaxTransmitters()
// 0x0000000A jp.kshoji.midisystem.IReceiver jp.kshoji.midisystem.IMidiDevice::GetReceiver()
// 0x0000000B System.Collections.Generic.List`1<jp.kshoji.midisystem.IReceiver> jp.kshoji.midisystem.IMidiDevice::GetReceivers()
// 0x0000000C jp.kshoji.midisystem.ITransmitter jp.kshoji.midisystem.IMidiDevice::GetTransmitter()
// 0x0000000D System.Collections.Generic.List`1<jp.kshoji.midisystem.ITransmitter> jp.kshoji.midisystem.IMidiDevice::GetTransmitters()
// 0x0000000E System.Void jp.kshoji.midisystem.Info::.ctor(System.String,System.String,System.String,System.String)
extern void Info__ctor_mAAFF5C882A3E64845496029DD8181D6D016847A4 (void);
// 0x0000000F System.String jp.kshoji.midisystem.Info::GetName()
extern void Info_GetName_m33193B6FCC0184B9CFA65F77C6626C5EF4010758 (void);
// 0x00000010 System.String jp.kshoji.midisystem.Info::GetVendor()
extern void Info_GetVendor_m6F6A85C8AC7B0CAB2B2D65D83CB31B9CC368264A (void);
// 0x00000011 System.String jp.kshoji.midisystem.Info::GetDescription()
extern void Info_GetDescription_mA7279ADC240E78D1F4FCD97DE92C668B1B197EFF (void);
// 0x00000012 System.String jp.kshoji.midisystem.Info::GetVersion()
extern void Info_GetVersion_mEE54468BD774DA80E8F2559A448E589493DDD3EB (void);
// 0x00000013 System.String jp.kshoji.midisystem.Info::ToString()
extern void Info_ToString_m2FD21C51A849F753D5533AC728C37775286D584C (void);
// 0x00000014 System.Int32 jp.kshoji.midisystem.Info::GetHashCode()
extern void Info_GetHashCode_m6BABE7CCD85A78EF6C9157670C43FC1F7FFF53A0 (void);
// 0x00000015 System.Boolean jp.kshoji.midisystem.Info::Equals(System.Object)
extern void Info_Equals_m4E89ED38EAE17A6EA4911D1D5ACECAB6BEC890BE (void);
// 0x00000016 System.Void jp.kshoji.midisystem.InvalidMidiDataException::.ctor(System.String)
extern void InvalidMidiDataException__ctor_m4A6197442A359364CC27DD89400D2C68F7618179 (void);
// 0x00000017 System.Void jp.kshoji.midisystem.IReceiver::Send(jp.kshoji.midisystem.MidiMessage,System.Int64)
// 0x00000018 System.Void jp.kshoji.midisystem.IReceiver::Close()
// 0x00000019 jp.kshoji.midisystem.SyncMode[] jp.kshoji.midisystem.ISequencer::GetMasterSyncModes()
// 0x0000001A jp.kshoji.midisystem.SyncMode jp.kshoji.midisystem.ISequencer::GetMasterSyncMode()
// 0x0000001B System.Void jp.kshoji.midisystem.ISequencer::SetMasterSyncMode(jp.kshoji.midisystem.SyncMode)
// 0x0000001C jp.kshoji.midisystem.SyncMode[] jp.kshoji.midisystem.ISequencer::GetSlaveSyncModes()
// 0x0000001D jp.kshoji.midisystem.SyncMode jp.kshoji.midisystem.ISequencer::GetSlaveSyncMode()
// 0x0000001E System.Void jp.kshoji.midisystem.ISequencer::SetSlaveSyncMode(jp.kshoji.midisystem.SyncMode)
// 0x0000001F jp.kshoji.midisystem.Sequence jp.kshoji.midisystem.ISequencer::GetSequence()
// 0x00000020 System.Void jp.kshoji.midisystem.ISequencer::SetSequence(System.IO.Stream)
// 0x00000021 System.Void jp.kshoji.midisystem.ISequencer::SetSequence(jp.kshoji.midisystem.Sequence)
// 0x00000022 System.Int32[] jp.kshoji.midisystem.ISequencer::AddControllerEventListener(jp.kshoji.midisystem.IControllerEventListener,System.Int32[])
// 0x00000023 System.Int32[] jp.kshoji.midisystem.ISequencer::RemoveControllerEventListener(jp.kshoji.midisystem.IControllerEventListener,System.Int32[])
// 0x00000024 System.Boolean jp.kshoji.midisystem.ISequencer::AddMetaEventListener(jp.kshoji.midisystem.IMetaEventListener)
// 0x00000025 System.Void jp.kshoji.midisystem.ISequencer::RemoveMetaEventListener(jp.kshoji.midisystem.IMetaEventListener)
// 0x00000026 System.Boolean jp.kshoji.midisystem.ISequencer::GetIsRecording()
// 0x00000027 System.Boolean jp.kshoji.midisystem.ISequencer::GetIsRunning()
// 0x00000028 System.Void jp.kshoji.midisystem.ISequencer::RecordDisable(jp.kshoji.midisystem.Track)
// 0x00000029 System.Void jp.kshoji.midisystem.ISequencer::SetRecordEnable(jp.kshoji.midisystem.Track,System.Int32)
// 0x0000002A System.Int32 jp.kshoji.midisystem.ISequencer::GetLoopCount()
// 0x0000002B System.Void jp.kshoji.midisystem.ISequencer::SetLoopCount(System.Int32)
// 0x0000002C System.Int64 jp.kshoji.midisystem.ISequencer::GetLoopStartPoint()
// 0x0000002D System.Void jp.kshoji.midisystem.ISequencer::SetLoopStartPoint(System.Int64)
// 0x0000002E System.Int64 jp.kshoji.midisystem.ISequencer::GetLoopEndPoint()
// 0x0000002F System.Void jp.kshoji.midisystem.ISequencer::SetLoopEndPoint(System.Int64)
// 0x00000030 System.Single jp.kshoji.midisystem.ISequencer::GetTempoFactor()
// 0x00000031 System.Void jp.kshoji.midisystem.ISequencer::SetTempoFactor(System.Single)
// 0x00000032 System.Single jp.kshoji.midisystem.ISequencer::GetTempoInBpm()
// 0x00000033 System.Void jp.kshoji.midisystem.ISequencer::SetTempoInBpm(System.Single)
// 0x00000034 System.Single jp.kshoji.midisystem.ISequencer::GetTempoInMpq()
// 0x00000035 System.Void jp.kshoji.midisystem.ISequencer::SetTempoInMpq(System.Single)
// 0x00000036 System.Int64 jp.kshoji.midisystem.ISequencer::GetTickLength()
// 0x00000037 System.Int64 jp.kshoji.midisystem.ISequencer::GetMicrosecondLength()
// 0x00000038 System.Int64 jp.kshoji.midisystem.ISequencer::GetTickPosition()
// 0x00000039 System.Void jp.kshoji.midisystem.ISequencer::SetTickPosition(System.Int64)
// 0x0000003A System.Void jp.kshoji.midisystem.ISequencer::SetMicrosecondPosition(System.Int64)
// 0x0000003B System.Boolean jp.kshoji.midisystem.ISequencer::GetTrackMute(System.Int32)
// 0x0000003C System.Void jp.kshoji.midisystem.ISequencer::SetTrackMute(System.Int32,System.Boolean)
// 0x0000003D System.Boolean jp.kshoji.midisystem.ISequencer::GetTrackSolo(System.Int32)
// 0x0000003E System.Void jp.kshoji.midisystem.ISequencer::SetTrackSolo(System.Int32,System.Boolean)
// 0x0000003F System.Void jp.kshoji.midisystem.ISequencer::Start()
// 0x00000040 System.Void jp.kshoji.midisystem.ISequencer::StartRecording()
// 0x00000041 System.Void jp.kshoji.midisystem.ISequencer::Stop()
// 0x00000042 System.Void jp.kshoji.midisystem.ISequencer::StopRecording()
// 0x00000043 System.Void jp.kshoji.midisystem.SyncMode::.ctor(System.String)
extern void SyncMode__ctor_m679F99E58D82B447D2AD231F01EB0FD39100AAED (void);
// 0x00000044 System.Boolean jp.kshoji.midisystem.SyncMode::Equals(System.Object)
extern void SyncMode_Equals_m5B95CD228DBA2E211D70D634C354530196BA4594 (void);
// 0x00000045 System.Int32 jp.kshoji.midisystem.SyncMode::GetHashCode()
extern void SyncMode_GetHashCode_mBEF1392B97E032E6D3D0A2F3675A7C7743096FAB (void);
// 0x00000046 System.String jp.kshoji.midisystem.SyncMode::ToString()
extern void SyncMode_ToString_m67E138ACD0A8A198583B60A00AD400CC7D37522B (void);
// 0x00000047 System.Void jp.kshoji.midisystem.SyncMode::.cctor()
extern void SyncMode__cctor_m6343D8392F77B88DCBB274B9D2C0453B26CD41AD (void);
// 0x00000048 System.Void jp.kshoji.midisystem.ITransmitter::SetReceiver(jp.kshoji.midisystem.IReceiver)
// 0x00000049 jp.kshoji.midisystem.IReceiver jp.kshoji.midisystem.ITransmitter::GetReceiver()
// 0x0000004A System.Void jp.kshoji.midisystem.ITransmitter::Close()
// 0x0000004B System.Void jp.kshoji.midisystem.MetaMessage::.ctor()
extern void MetaMessage__ctor_mAA4CB0C37B5FA6E94B5F8C3A9F211768B96995E3 (void);
// 0x0000004C System.Void jp.kshoji.midisystem.MetaMessage::.ctor(System.Byte[])
extern void MetaMessage__ctor_m962A9C26B2BF9A088A0356FB201E0C89B164CC34 (void);
// 0x0000004D System.Void jp.kshoji.midisystem.MetaMessage::.ctor(System.Int32,System.Byte[])
extern void MetaMessage__ctor_m6718EC576E63C542A7ABC4435074B1991942BA31 (void);
// 0x0000004E System.Void jp.kshoji.midisystem.MetaMessage::SetMessage(System.Int32,System.Byte[])
extern void MetaMessage_SetMessage_m925D9F8D5A5333FF6F58F050BCBA90BEDCCC84B1 (void);
// 0x0000004F System.Int32 jp.kshoji.midisystem.MetaMessage::GetMessageType()
extern void MetaMessage_GetMessageType_m33CD76092EDC31D7D8251B4278761EE9A560934F (void);
// 0x00000050 System.Byte[] jp.kshoji.midisystem.MetaMessage::GetData()
extern void MetaMessage_GetData_m1664514C77E9E22789C5261AD11E588DE26ECE70 (void);
// 0x00000051 System.Object jp.kshoji.midisystem.MetaMessage::Clone()
extern void MetaMessage_Clone_m0189EBBF5AC92B50A23592B087F83075A797A283 (void);
// 0x00000052 System.Int32 jp.kshoji.midisystem.MetaMessage::GetMidiValuesLength(System.Int64)
extern void MetaMessage_GetMidiValuesLength_mBEDE91E35B315CC55B63724FBB089ECB497540D0 (void);
// 0x00000053 System.Void jp.kshoji.midisystem.MetaMessage::WriteMidiValues(System.Byte[],System.Int32,System.Int64)
extern void MetaMessage_WriteMidiValues_m22F5B4347BF9C1C058E4FA028C0E81293EEFC9C2 (void);
// 0x00000054 System.Void jp.kshoji.midisystem.MetaMessage::.cctor()
extern void MetaMessage__cctor_m1F7406872BAFEB838CA8EF5C98A1B14690D495EB (void);
// 0x00000055 System.Void jp.kshoji.midisystem.MidiEvent::.ctor(jp.kshoji.midisystem.MidiMessage,System.Int64)
extern void MidiEvent__ctor_mE41EBD0041347679E9251BCF4B33119CB4AF4A21 (void);
// 0x00000056 jp.kshoji.midisystem.MidiMessage jp.kshoji.midisystem.MidiEvent::GetMessage()
extern void MidiEvent_GetMessage_m1D5AC7A0813211B96CEECE7702415958012C61E4 (void);
// 0x00000057 System.Int64 jp.kshoji.midisystem.MidiEvent::GetTick()
extern void MidiEvent_GetTick_m55EB805BE78AA9AB001AF536ED8EB6EA4924E2E3 (void);
// 0x00000058 System.Void jp.kshoji.midisystem.MidiEvent::SetTick(System.Int64)
extern void MidiEvent_SetTick_mE477C1867466E34F5B93A622F6E1723087EA7B96 (void);
// 0x00000059 System.Int32 jp.kshoji.midisystem.MidiEventComparer::Compare(jp.kshoji.midisystem.MidiEvent,jp.kshoji.midisystem.MidiEvent)
extern void MidiEventComparer_Compare_mE810C3B2358A04C175A34CA8935EEDB596EC6056 (void);
// 0x0000005A System.Void jp.kshoji.midisystem.MidiEventComparer::.ctor()
extern void MidiEventComparer__ctor_m3064AF2CB3B00D6921EABBEF9ED228C62AFE657C (void);
// 0x0000005B System.Void jp.kshoji.midisystem.MidiFileFormat::.ctor(System.Int32,System.Single,System.Int32,System.Int32,System.Int64)
extern void MidiFileFormat__ctor_mD08FA4B374EF89785EE140277A0091B4323F317A (void);
// 0x0000005C System.Void jp.kshoji.midisystem.MidiFileFormat::.ctor(System.Int32,System.Single,System.Int32,System.Int32,System.Int64,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void MidiFileFormat__ctor_mA22528105F3520C6533B7F4D7CA0C8BD480927F1 (void);
// 0x0000005D System.Int32 jp.kshoji.midisystem.MidiFileFormat::GetByteLength()
extern void MidiFileFormat_GetByteLength_m61FA64D27EFB4A36B792112918DD98C6EC33343A (void);
// 0x0000005E System.Single jp.kshoji.midisystem.MidiFileFormat::GetDivisionType()
extern void MidiFileFormat_GetDivisionType_mBCAF68AE4A01F0F9414E3358FEAEB909D259CF57 (void);
// 0x0000005F System.Int64 jp.kshoji.midisystem.MidiFileFormat::GetMicrosecondLength()
extern void MidiFileFormat_GetMicrosecondLength_m29EE80C82439B7E86176BF2B76476720558CC96A (void);
// 0x00000060 System.Object jp.kshoji.midisystem.MidiFileFormat::GetProperty(System.String)
extern void MidiFileFormat_GetProperty_m3F0973185A381DE3A9C224A9D29E159210CEC18D (void);
// 0x00000061 System.Int32 jp.kshoji.midisystem.MidiFileFormat::GetResolution()
extern void MidiFileFormat_GetResolution_mB849796F6A6C5DFD9D0651D0D47D318316D042D6 (void);
// 0x00000062 System.Int32 jp.kshoji.midisystem.MidiFileFormat::GetMessageType()
extern void MidiFileFormat_GetMessageType_m5D35A7E23E64EF60CC52BA826986837B64E80EAC (void);
// 0x00000063 System.Collections.Generic.Dictionary`2<System.String,System.Object> jp.kshoji.midisystem.MidiFileFormat::GetProperties()
extern void MidiFileFormat_GetProperties_mA4412D73FE03CBA06A47975D4946733C7A72983B (void);
// 0x00000064 System.Void jp.kshoji.midisystem.MidiMessage::.ctor(System.Byte[])
extern void MidiMessage__ctor_mD45BB03D75356DE29B878BF08975358A50A1542F (void);
// 0x00000065 System.Object jp.kshoji.midisystem.MidiMessage::Clone()
// 0x00000066 System.Void jp.kshoji.midisystem.MidiMessage::SetMessage(System.Byte[])
extern void MidiMessage_SetMessage_mB49CF1BDF9D2C0128BF256F1CD411CE8551A0F66 (void);
// 0x00000067 System.Byte[] jp.kshoji.midisystem.MidiMessage::GetMessage()
extern void MidiMessage_GetMessage_mBDD776859914987533B7526CEE8A7452FCFC0FF8 (void);
// 0x00000068 System.Int32 jp.kshoji.midisystem.MidiMessage::GetStatus()
extern void MidiMessage_GetStatus_m89D622CC1378DE95CBE690A9CA08D872B2B0C068 (void);
// 0x00000069 System.Int32 jp.kshoji.midisystem.MidiMessage::GetLength()
extern void MidiMessage_GetLength_mA1CCEE11B36630F1BADC67B4EC6A770DB9E8C6AB (void);
// 0x0000006A System.String jp.kshoji.midisystem.MidiMessage::ToHexString(System.Byte[])
extern void MidiMessage_ToHexString_m4B99E9827BBE24FFF0F594883FC175E83A9745C5 (void);
// 0x0000006B System.String jp.kshoji.midisystem.MidiMessage::ToString()
extern void MidiMessage_ToString_mD2CC7465912486A24FE21939BCC6F16A6A7865EB (void);
// 0x0000006C System.Void jp.kshoji.midisystem.MidiSystem::AddReceiver(System.String,jp.kshoji.midisystem.IReceiver)
extern void MidiSystem_AddReceiver_m6803C262BCC4030AC6164D1CA78FF4188515965C (void);
// 0x0000006D System.Void jp.kshoji.midisystem.MidiSystem::RemoveReceiver(System.String)
extern void MidiSystem_RemoveReceiver_m704CE5144DB07548BF4158CD958F0E08DD4689E9 (void);
// 0x0000006E jp.kshoji.midisystem.IReceiver jp.kshoji.midisystem.MidiSystem::GetReceiver(System.String)
extern void MidiSystem_GetReceiver_m32679C3D73EABF05C6D9C71F3D6006EBA6813C6E (void);
// 0x0000006F System.Collections.Generic.IEnumerable`1<jp.kshoji.midisystem.IReceiver> jp.kshoji.midisystem.MidiSystem::GetReceivers()
extern void MidiSystem_GetReceivers_m3BDC278E194AFE1FAFC315F1BB8A6BA5892452CC (void);
// 0x00000070 System.Void jp.kshoji.midisystem.MidiSystem::AddTransmitter(System.String,jp.kshoji.midisystem.ITransmitter)
extern void MidiSystem_AddTransmitter_mCADD6049137B22E2548B13476686AF4E0FCE6673 (void);
// 0x00000071 System.Void jp.kshoji.midisystem.MidiSystem::RemoveTransmitter(System.String)
extern void MidiSystem_RemoveTransmitter_mD6DA3C85660E38F9A31EE1A40EB1A0643BBFA826 (void);
// 0x00000072 jp.kshoji.midisystem.ITransmitter jp.kshoji.midisystem.MidiSystem::GetTransmitter(System.String)
extern void MidiSystem_GetTransmitter_m5621E37B08D3A456194C9F50FBA6C3894A5B91FF (void);
// 0x00000073 System.Collections.Generic.IEnumerable`1<jp.kshoji.midisystem.ITransmitter> jp.kshoji.midisystem.MidiSystem::GetTransmitters()
extern void MidiSystem_GetTransmitters_m54648BAAA7995BD7092797E70B49E1E0704A0869 (void);
// 0x00000074 jp.kshoji.midisystem.Sequence jp.kshoji.midisystem.MidiSystem::ReadSequence(System.IO.Stream)
extern void MidiSystem_ReadSequence_mBC72E485ADEEEE4609CEA2FB3D255D702A46D1E7 (void);
// 0x00000075 System.Void jp.kshoji.midisystem.MidiSystem::WriteSequence(jp.kshoji.midisystem.Sequence,System.IO.Stream)
extern void MidiSystem_WriteSequence_m2CF2FE6FA206A476FF9A338A8FD86C4187EC401D (void);
// 0x00000076 System.Void jp.kshoji.midisystem.MidiSystem::.cctor()
extern void MidiSystem__cctor_mDDC6E9EA74349D445DB74903090578996AD336BB (void);
// 0x00000077 System.Void jp.kshoji.midisystem.MidiUnavailableException::.ctor(System.String)
extern void MidiUnavailableException__ctor_m935137729A13D48A20EEACFA1654D6666A1A7183 (void);
// 0x00000078 System.Boolean jp.kshoji.midisystem.Sequence::DivisionTypeEquals(System.Single,System.Single)
extern void Sequence_DivisionTypeEquals_m14054AF1FBEC37FA43562036ED1316721AA0987C (void);
// 0x00000079 System.Void jp.kshoji.midisystem.Sequence::.ctor(System.Single,System.Int32)
extern void Sequence__ctor_m504ABFBF31F380B7BEA7C0B2C80E76C5A34BA882 (void);
// 0x0000007A System.Void jp.kshoji.midisystem.Sequence::.ctor(System.Single,System.Int32,System.Int32)
extern void Sequence__ctor_m1C097CA925E6A91F3C692E1F1849FC796A828844 (void);
// 0x0000007B System.Boolean jp.kshoji.midisystem.Sequence::IsSupportingDivisionType(System.Single)
extern void Sequence_IsSupportingDivisionType_mAB14BDE7A0DAEE3C921D3A96805D9F0BA9973C45 (void);
// 0x0000007C jp.kshoji.midisystem.Track jp.kshoji.midisystem.Sequence::CreateTrack()
extern void Sequence_CreateTrack_m07BF01445D768E78CB3FD6393D3EA0A359CF695B (void);
// 0x0000007D System.Boolean jp.kshoji.midisystem.Sequence::DeleteTrack(jp.kshoji.midisystem.Track)
extern void Sequence_DeleteTrack_m9358CE74ACD614FE14A90A0535DC3E5A3D1A676D (void);
// 0x0000007E System.Single jp.kshoji.midisystem.Sequence::GetDivisionType()
extern void Sequence_GetDivisionType_mA6D52604B915CCF13F2A04E84756EA0BE09E7ACB (void);
// 0x0000007F System.Int64 jp.kshoji.midisystem.Sequence::GetMicrosecondLength()
extern void Sequence_GetMicrosecondLength_m5ED7EC266A78C8E6E1EE265AB7CFCA003DA824D4 (void);
// 0x00000080 System.Int32 jp.kshoji.midisystem.Sequence::GetResolution()
extern void Sequence_GetResolution_m82DAF39F8A54298E4DED5ACFF4EAA95763358FE4 (void);
// 0x00000081 System.Int64 jp.kshoji.midisystem.Sequence::GetTickLength()
extern void Sequence_GetTickLength_m05A063D29CD8D88182E2607149FB0BD22BB7A5B9 (void);
// 0x00000082 jp.kshoji.midisystem.Track[] jp.kshoji.midisystem.Sequence::GetTracks()
extern void Sequence_GetTracks_m8A68B43DF1913861D9DB02D3035B5F9448C84585 (void);
// 0x00000083 System.Void jp.kshoji.midisystem.Sequence::.cctor()
extern void Sequence__cctor_mBDC55AD0E040C0CB3C4293847B9211A6DA65E4B7 (void);
// 0x00000084 System.Void jp.kshoji.midisystem.Sequence/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mA9E623CD61DE095B6656587948A20A7EB75BB6EC (void);
// 0x00000085 System.Boolean jp.kshoji.midisystem.Sequence/<>c__DisplayClass13_0::<IsSupportingDivisionType>b__0(System.Single)
extern void U3CU3Ec__DisplayClass13_0_U3CIsSupportingDivisionTypeU3Eb__0_mEC747E8C6E256F50AE98819CAA50CDE8FA4A6B88 (void);
// 0x00000086 System.Void jp.kshoji.midisystem.Sequence/<>c::.cctor()
extern void U3CU3Ec__cctor_mAD7E4CEFE4EB9BF78CE2C5D8390E32E31B67C383 (void);
// 0x00000087 System.Void jp.kshoji.midisystem.Sequence/<>c::.ctor()
extern void U3CU3Ec__ctor_m0BA27084D95CC6988A214B8A4AE6125B31B75EC3 (void);
// 0x00000088 System.Int64 jp.kshoji.midisystem.Sequence/<>c::<GetTickLength>b__19_0(jp.kshoji.midisystem.Track)
extern void U3CU3Ec_U3CGetTickLengthU3Eb__19_0_m78DC9732A983FEBC6E33B1732F0893997A4B3737 (void);
// 0x00000089 System.Void jp.kshoji.midisystem.SequencerImpl::.ctor(System.Action)
extern void SequencerImpl__ctor_m1E4466D5C3DDA618864900067A7F1B2F531F961E (void);
// 0x0000008A jp.kshoji.midisystem.Info jp.kshoji.midisystem.SequencerImpl::GetDeviceInfo()
extern void SequencerImpl_GetDeviceInfo_m4A3AB2B1E5152D212E152AC965A48D63E6E846DF (void);
// 0x0000008B System.Void jp.kshoji.midisystem.SequencerImpl::UpdateDeviceConnections()
extern void SequencerImpl_UpdateDeviceConnections_mEA540D60340AD30DE501328F205413B85B7B93BC (void);
// 0x0000008C System.Collections.IEnumerator jp.kshoji.midisystem.SequencerImpl::OpenCoroutine()
extern void SequencerImpl_OpenCoroutine_m7EA7F98EE8C090ACEFC81CF4B2608921185A38F8 (void);
// 0x0000008D System.Void jp.kshoji.midisystem.SequencerImpl::Open()
extern void SequencerImpl_Open_m71C02A99779E246972B829152BAAEE8FB52136DD (void);
// 0x0000008E System.Void jp.kshoji.midisystem.SequencerImpl::CloseAllSequencers()
extern void SequencerImpl_CloseAllSequencers_m1A1028E77C5A74B948C9BF405BE58DD5369ADFB6 (void);
// 0x0000008F System.Void jp.kshoji.midisystem.SequencerImpl::Close()
extern void SequencerImpl_Close_m515931FE86FCA6B333C714E76A0D0897F9E4C1D9 (void);
// 0x00000090 System.Boolean jp.kshoji.midisystem.SequencerImpl::GetIsOpen()
extern void SequencerImpl_GetIsOpen_mC4A8112F5833261C594D04D6CCDC01A27D4EB148 (void);
// 0x00000091 System.Int32 jp.kshoji.midisystem.SequencerImpl::GetMaxReceivers()
extern void SequencerImpl_GetMaxReceivers_mAADD07124EF22A596645BAF9E66FF0A17A3AD8F2 (void);
// 0x00000092 System.Int32 jp.kshoji.midisystem.SequencerImpl::GetMaxTransmitters()
extern void SequencerImpl_GetMaxTransmitters_mEA3EE0326DE16AE69B4C6F2DB0237DA70C6D9593 (void);
// 0x00000093 jp.kshoji.midisystem.IReceiver jp.kshoji.midisystem.SequencerImpl::GetReceiver()
extern void SequencerImpl_GetReceiver_m4C11E7D95BE7DC2F6B4359E7F7102DC158EF9941 (void);
// 0x00000094 System.Collections.Generic.List`1<jp.kshoji.midisystem.IReceiver> jp.kshoji.midisystem.SequencerImpl::GetReceivers()
extern void SequencerImpl_GetReceivers_m2A578DA47357154A4C5943E1060D0FB7C3D02858 (void);
// 0x00000095 jp.kshoji.midisystem.ITransmitter jp.kshoji.midisystem.SequencerImpl::GetTransmitter()
extern void SequencerImpl_GetTransmitter_mF05ABB1AD38F9A4C2EC0A0B9599B6EE3D5D7F7A7 (void);
// 0x00000096 System.Collections.Generic.List`1<jp.kshoji.midisystem.ITransmitter> jp.kshoji.midisystem.SequencerImpl::GetTransmitters()
extern void SequencerImpl_GetTransmitters_mB196EF473E8EB9B2F164CE779DC5F6EF7508B448 (void);
// 0x00000097 System.Int32[] jp.kshoji.midisystem.SequencerImpl::AddControllerEventListener(jp.kshoji.midisystem.IControllerEventListener,System.Int32[])
extern void SequencerImpl_AddControllerEventListener_mEB6E7A7156A4E10DB7769C806CB64A2BD36DCA8C (void);
// 0x00000098 System.Int32[] jp.kshoji.midisystem.SequencerImpl::RemoveControllerEventListener(jp.kshoji.midisystem.IControllerEventListener,System.Int32[])
extern void SequencerImpl_RemoveControllerEventListener_m0216B8D9F27C6F1EC02B33D1BB248421B2430DDF (void);
// 0x00000099 System.Boolean jp.kshoji.midisystem.SequencerImpl::AddMetaEventListener(jp.kshoji.midisystem.IMetaEventListener)
extern void SequencerImpl_AddMetaEventListener_mB7F8428C4ADBCD943883A35609F846EBA0F2F1DF (void);
// 0x0000009A System.Void jp.kshoji.midisystem.SequencerImpl::RemoveMetaEventListener(jp.kshoji.midisystem.IMetaEventListener)
extern void SequencerImpl_RemoveMetaEventListener_mCCC55509FD11A66102E5053F2737CDE5044CD7B7 (void);
// 0x0000009B System.Int32 jp.kshoji.midisystem.SequencerImpl::GetLoopCount()
extern void SequencerImpl_GetLoopCount_m8BF75A39945D626F9E557654E5429E6CBDA4E798 (void);
// 0x0000009C System.Void jp.kshoji.midisystem.SequencerImpl::SetLoopCount(System.Int32)
extern void SequencerImpl_SetLoopCount_mA5963AA9739BF4BC08BC2101FA1F6A6E438DB38D (void);
// 0x0000009D System.Int64 jp.kshoji.midisystem.SequencerImpl::GetLoopStartPoint()
extern void SequencerImpl_GetLoopStartPoint_mA2DD0BC669EE4FE9B540AEAE8F3E5C72A9B9001D (void);
// 0x0000009E System.Void jp.kshoji.midisystem.SequencerImpl::SetLoopStartPoint(System.Int64)
extern void SequencerImpl_SetLoopStartPoint_m8CFB34169C19CE72E5BAE98AEF32E8A3384E9619 (void);
// 0x0000009F System.Int64 jp.kshoji.midisystem.SequencerImpl::GetLoopEndPoint()
extern void SequencerImpl_GetLoopEndPoint_m54486FA9E9551C94D030EA638EED87C2FCF152ED (void);
// 0x000000A0 System.Void jp.kshoji.midisystem.SequencerImpl::SetLoopEndPoint(System.Int64)
extern void SequencerImpl_SetLoopEndPoint_m2F9FEE70E011ADDF6EE76242351170807D725B8F (void);
// 0x000000A1 jp.kshoji.midisystem.SyncMode jp.kshoji.midisystem.SequencerImpl::GetMasterSyncMode()
extern void SequencerImpl_GetMasterSyncMode_mB5BAC7B57C223B43039907A4D3727E5BCE39B615 (void);
// 0x000000A2 System.Void jp.kshoji.midisystem.SequencerImpl::SetMasterSyncMode(jp.kshoji.midisystem.SyncMode)
extern void SequencerImpl_SetMasterSyncMode_m3FBDF1FBF7EBAE14EF0A10EA221FA45C62BB3278 (void);
// 0x000000A3 jp.kshoji.midisystem.SyncMode[] jp.kshoji.midisystem.SequencerImpl::GetMasterSyncModes()
extern void SequencerImpl_GetMasterSyncModes_mEA7821C5C08E9E55EFC20CAE337BA432E3694BC4 (void);
// 0x000000A4 System.Int64 jp.kshoji.midisystem.SequencerImpl::GetMicrosecondPosition()
extern void SequencerImpl_GetMicrosecondPosition_m105B85912F9342ECB582E261856BE69FD8810F72 (void);
// 0x000000A5 System.Void jp.kshoji.midisystem.SequencerImpl::SetMicrosecondPosition(System.Int64)
extern void SequencerImpl_SetMicrosecondPosition_m74C54E199D22CBE8797C25021310E8F5C7B80C88 (void);
// 0x000000A6 System.Int64 jp.kshoji.midisystem.SequencerImpl::GetMicrosecondLength()
extern void SequencerImpl_GetMicrosecondLength_mAEE2C7A8A3EC5E3F08106805E58C8BDE6BB6ABF8 (void);
// 0x000000A7 jp.kshoji.midisystem.Sequence jp.kshoji.midisystem.SequencerImpl::GetSequence()
extern void SequencerImpl_GetSequence_m2486FE55F1E65D5097AEB2352EDF51E19EC815CA (void);
// 0x000000A8 System.Void jp.kshoji.midisystem.SequencerImpl::SetSequence(System.IO.Stream)
extern void SequencerImpl_SetSequence_m9BBA3F8D2015448389B8F897167D4E0096D717EE (void);
// 0x000000A9 System.Void jp.kshoji.midisystem.SequencerImpl::SetSequence(jp.kshoji.midisystem.Sequence)
extern void SequencerImpl_SetSequence_m6F30539E354E8A787BCB14B062F6CCCEC0CCE778 (void);
// 0x000000AA jp.kshoji.midisystem.SyncMode jp.kshoji.midisystem.SequencerImpl::GetSlaveSyncMode()
extern void SequencerImpl_GetSlaveSyncMode_m0119973E6FB97B5BF463B0A89596E46D71C38DA2 (void);
// 0x000000AB System.Void jp.kshoji.midisystem.SequencerImpl::SetSlaveSyncMode(jp.kshoji.midisystem.SyncMode)
extern void SequencerImpl_SetSlaveSyncMode_mB51657FE5645AF41A34EFF2FD510FD484B498E2F (void);
// 0x000000AC jp.kshoji.midisystem.SyncMode[] jp.kshoji.midisystem.SequencerImpl::GetSlaveSyncModes()
extern void SequencerImpl_GetSlaveSyncModes_m1025924F9CBD91AAE36FE93B57A23DFE8A1898A9 (void);
// 0x000000AD System.Single jp.kshoji.midisystem.SequencerImpl::GetTempoFactor()
extern void SequencerImpl_GetTempoFactor_m3FAE90F87D03D47354AA8277EC5EF86605B44E94 (void);
// 0x000000AE System.Void jp.kshoji.midisystem.SequencerImpl::SetTempoFactor(System.Single)
extern void SequencerImpl_SetTempoFactor_m9D97D09297DBAD7860009BFF30C77AA5456E5AD5 (void);
// 0x000000AF System.Single jp.kshoji.midisystem.SequencerImpl::GetTempoInBpm()
extern void SequencerImpl_GetTempoInBpm_m1EC5910F4E6BFFACAB7817021579BBF60ABFF790 (void);
// 0x000000B0 System.Void jp.kshoji.midisystem.SequencerImpl::SetTempoInBpm(System.Single)
extern void SequencerImpl_SetTempoInBpm_m8284EB08E0C8F1DA57854A461DB0824A6C2C0CD3 (void);
// 0x000000B1 System.Single jp.kshoji.midisystem.SequencerImpl::GetTempoInMpq()
extern void SequencerImpl_GetTempoInMpq_m8EC73CCC5B4156862F54E230B8BE475BFAD8A857 (void);
// 0x000000B2 System.Void jp.kshoji.midisystem.SequencerImpl::SetTempoInMpq(System.Single)
extern void SequencerImpl_SetTempoInMpq_mDABB651FD21A91D3AAE91B4D36CED7693B310623 (void);
// 0x000000B3 System.Int64 jp.kshoji.midisystem.SequencerImpl::GetTickLength()
extern void SequencerImpl_GetTickLength_m5F69F62A816B31DD66CDDCA95D10307FB15098AD (void);
// 0x000000B4 System.Int64 jp.kshoji.midisystem.SequencerImpl::GetTickPosition()
extern void SequencerImpl_GetTickPosition_m9F5E5143E0C36AE573C917CF50F63D4DA4B837FB (void);
// 0x000000B5 System.Void jp.kshoji.midisystem.SequencerImpl::SetTickPosition(System.Int64)
extern void SequencerImpl_SetTickPosition_m64FFE590E146D51D604DB741D346335EB5C48384 (void);
// 0x000000B6 System.Boolean jp.kshoji.midisystem.SequencerImpl::GetTrackMute(System.Int32)
extern void SequencerImpl_GetTrackMute_mFFA04F5E25FEA60B383D55FCF7C0D34091D1A92B (void);
// 0x000000B7 System.Void jp.kshoji.midisystem.SequencerImpl::SetTrackMute(System.Int32,System.Boolean)
extern void SequencerImpl_SetTrackMute_mC28014EE5E618CA0EB274B098B54B177A5776DFF (void);
// 0x000000B8 System.Boolean jp.kshoji.midisystem.SequencerImpl::GetTrackSolo(System.Int32)
extern void SequencerImpl_GetTrackSolo_m913225F203AFC510F5D5E9B1E541316F3BBA5002 (void);
// 0x000000B9 System.Void jp.kshoji.midisystem.SequencerImpl::SetTrackSolo(System.Int32,System.Boolean)
extern void SequencerImpl_SetTrackSolo_mCF47936FA9635AB71175BE87A5F2FEE7F883B8C6 (void);
// 0x000000BA System.Void jp.kshoji.midisystem.SequencerImpl::RecordDisable(jp.kshoji.midisystem.Track)
extern void SequencerImpl_RecordDisable_m589CC56D83F070F16DC8B4554D376302628529BE (void);
// 0x000000BB System.Void jp.kshoji.midisystem.SequencerImpl::SetRecordEnable(jp.kshoji.midisystem.Track,System.Int32)
extern void SequencerImpl_SetRecordEnable_m0DBC8C4CE7B89F0C87AF006697B8BA039EAA5CAA (void);
// 0x000000BC System.Void jp.kshoji.midisystem.SequencerImpl::StartRecording()
extern void SequencerImpl_StartRecording_m716164A4F34EE11CA2B2295901E2EA7F8FE3BB00 (void);
// 0x000000BD System.Boolean jp.kshoji.midisystem.SequencerImpl::GetIsRecording()
extern void SequencerImpl_GetIsRecording_m7AE3FB01CDDA86BEE2F19B284DCCE62C3D7619B4 (void);
// 0x000000BE System.Void jp.kshoji.midisystem.SequencerImpl::StopRecording()
extern void SequencerImpl_StopRecording_mFCFF0D47389A056F5B2BE1CF4C9258732317A4D4 (void);
// 0x000000BF System.Void jp.kshoji.midisystem.SequencerImpl::Start()
extern void SequencerImpl_Start_m6C9BBD6CF8FABCDF2B6656190E83DE546756AA32 (void);
// 0x000000C0 System.Boolean jp.kshoji.midisystem.SequencerImpl::GetIsRunning()
extern void SequencerImpl_GetIsRunning_m7E6432FE024E1D6FEFD75DF89156D0D305C5A2EE (void);
// 0x000000C1 System.Void jp.kshoji.midisystem.SequencerImpl::Stop()
extern void SequencerImpl_Stop_mF2B39FBB337BA23495C43881F950B9708BE41E18 (void);
// 0x000000C2 System.Int64 jp.kshoji.midisystem.SequencerImpl::CurrentTimeMillis()
extern void SequencerImpl_CurrentTimeMillis_m856AF5D561A89403E6331B447C3DAD1BEE51351D (void);
// 0x000000C3 System.Single jp.kshoji.midisystem.SequencerImpl::GetTicksPerMicrosecond()
extern void SequencerImpl_GetTicksPerMicrosecond_m3B1F2F9B7A9B1A3E94DD75E55BB38754D23D53DF (void);
// 0x000000C4 System.Void jp.kshoji.midisystem.SequencerImpl::.cctor()
extern void SequencerImpl__cctor_m2D41F02BF7BC0B4D60308D492FFEDDE3D0022EC4 (void);
// 0x000000C5 System.Void jp.kshoji.midisystem.SequencerImpl::<OpenCoroutine>b__34_0()
extern void SequencerImpl_U3COpenCoroutineU3Eb__34_0_m2834769F4D6431C5B80AC49AFD1D6C646C7C2E0C (void);
// 0x000000C6 System.Void jp.kshoji.midisystem.SequencerImpl/MidiEventRecordingReceiver::.ctor(jp.kshoji.midisystem.SequencerImpl)
extern void MidiEventRecordingReceiver__ctor_mA888A13FF53F697DD674E4F4F708A22B3A30E23E (void);
// 0x000000C7 System.Void jp.kshoji.midisystem.SequencerImpl/MidiEventRecordingReceiver::Send(jp.kshoji.midisystem.MidiMessage,System.Int64)
extern void MidiEventRecordingReceiver_Send_mAFFB285EB4FC0A175A2F3C389A300A110B9791D0 (void);
// 0x000000C8 System.Void jp.kshoji.midisystem.SequencerImpl/MidiEventRecordingReceiver::Close()
extern void MidiEventRecordingReceiver_Close_m0CFDF4088435E67F0A989DC9A88A9D02FF90079E (void);
// 0x000000C9 System.Collections.IEnumerator jp.kshoji.midisystem.SequencerImpl/SequencerThread::StartSequencerThread(jp.kshoji.midisystem.SequencerImpl,System.Action)
extern void SequencerThread_StartSequencerThread_m4A9D97F799C384AD9DA829505F8793FFCCF2C0FF (void);
// 0x000000CA System.Int64 jp.kshoji.midisystem.SequencerImpl/SequencerThread::GetTickPosition()
extern void SequencerThread_GetTickPosition_mB1215D2CB89E44066120BBB0F750ADD47ACD61A6 (void);
// 0x000000CB System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread::SetTickPosition(System.Int64)
extern void SequencerThread_SetTickPosition_mF7DBBBDA9F1BCB7881E85770B9308F48D85C2A14 (void);
// 0x000000CC System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread::StartRecording()
extern void SequencerThread_StartRecording_mCFDD853ADA75323B4126D586DF0080182602321B (void);
// 0x000000CD System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread::StopRecording()
extern void SequencerThread_StopRecording_m55D89BCA6E77866C283706169F8F0793184A2C12 (void);
// 0x000000CE System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread::StartPlaying()
extern void SequencerThread_StartPlaying_m20FC3B98DE4C05EC19FE9A64E26FF2B94CF7BA46 (void);
// 0x000000CF System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread::StopPlaying()
extern void SequencerThread_StopPlaying_mEFFD2B0B5A466FAFC8369D16B5A755C7207C9B37 (void);
// 0x000000D0 System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread::FireEventListeners(jp.kshoji.midisystem.MidiMessage)
extern void SequencerThread_FireEventListeners_m5B552B954C74D64F9650CC4C989B541B8819644E (void);
// 0x000000D1 System.Boolean jp.kshoji.midisystem.SequencerImpl/SequencerThread::ProcessTempoChange(jp.kshoji.midisystem.MetaMessage)
extern void SequencerThread_ProcessTempoChange_m170C7ECCD4519552C8A18FFDE0F16B4C76BF93E9 (void);
// 0x000000D2 System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread::RefreshPlayingTrack()
extern void SequencerThread_RefreshPlayingTrack_mED8CB3E7D059752D1F469F7EB5EA4F1110BF94A0 (void);
// 0x000000D3 System.Boolean jp.kshoji.midisystem.SequencerImpl/SequencerThread::isRecordable(System.Collections.Generic.HashSet`1<System.Int32>,jp.kshoji.midisystem.MidiEvent)
extern void SequencerThread_isRecordable_m74F75BEACB593AEE28D2569E2BE92CD2FCAB7FA6 (void);
// 0x000000D4 System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread::.ctor()
extern void SequencerThread__ctor_mBCF327A1BB868BB5A41F0BA8F2B700C5190EDDC3 (void);
// 0x000000D5 System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread/<StartSequencerThread>d__4::.ctor(System.Int32)
extern void U3CStartSequencerThreadU3Ed__4__ctor_mBBDC36E42E622F75D92C5AE82060BE8306FC2DD7 (void);
// 0x000000D6 System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread/<StartSequencerThread>d__4::System.IDisposable.Dispose()
extern void U3CStartSequencerThreadU3Ed__4_System_IDisposable_Dispose_m7A3D98C8288F0D0F8FCE1AC510D7FF0ECAE04ECB (void);
// 0x000000D7 System.Boolean jp.kshoji.midisystem.SequencerImpl/SequencerThread/<StartSequencerThread>d__4::MoveNext()
extern void U3CStartSequencerThreadU3Ed__4_MoveNext_m519E0D0EB9CC25E7AECF54521116FAAD650E2B1D (void);
// 0x000000D8 System.Object jp.kshoji.midisystem.SequencerImpl/SequencerThread/<StartSequencerThread>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartSequencerThreadU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m137DA8231639A285535EF0864DD4C4F4B19816A6 (void);
// 0x000000D9 System.Void jp.kshoji.midisystem.SequencerImpl/SequencerThread/<StartSequencerThread>d__4::System.Collections.IEnumerator.Reset()
extern void U3CStartSequencerThreadU3Ed__4_System_Collections_IEnumerator_Reset_m7B004A37337D14F69D1C6F964AD7B7A35C5BA7EB (void);
// 0x000000DA System.Object jp.kshoji.midisystem.SequencerImpl/SequencerThread/<StartSequencerThread>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CStartSequencerThreadU3Ed__4_System_Collections_IEnumerator_get_Current_m14236677E28BD63B4CF6CC686CA1D9D6FD2AD2EB (void);
// 0x000000DB System.Void jp.kshoji.midisystem.ShortMessage::.ctor()
extern void ShortMessage__ctor_mC81C3FD394BE10D8B321701BC6A89DF1B74CA14F (void);
// 0x000000DC System.Void jp.kshoji.midisystem.ShortMessage::.ctor(System.Byte[])
extern void ShortMessage__ctor_m8EB2FCFE9A4D69BE2BB7C77F5B94422894BFCA97 (void);
// 0x000000DD System.Void jp.kshoji.midisystem.ShortMessage::.ctor(System.Int32)
extern void ShortMessage__ctor_m48A3CA20AB759E81533F5AA243455071B8CBE08D (void);
// 0x000000DE System.Void jp.kshoji.midisystem.ShortMessage::.ctor(System.Int32,System.Int32,System.Int32)
extern void ShortMessage__ctor_m39FB8A385084394465B6978FB6D4CB5BA7D8FF11 (void);
// 0x000000DF System.Void jp.kshoji.midisystem.ShortMessage::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern void ShortMessage__ctor_m53B441544BE567229F16CDBD4199178FCAB20802 (void);
// 0x000000E0 System.Void jp.kshoji.midisystem.ShortMessage::SetMessage(System.Int32)
extern void ShortMessage_SetMessage_m52A9EE8D969A162F2E48C5C044489FB5F8E599B7 (void);
// 0x000000E1 System.Void jp.kshoji.midisystem.ShortMessage::SetMessage(System.Int32,System.Int32,System.Int32)
extern void ShortMessage_SetMessage_m77CD398FF43D6525DE8F127582A808B008BFCEA1 (void);
// 0x000000E2 System.Void jp.kshoji.midisystem.ShortMessage::SetMessage(System.Int32,System.Int32,System.Int32,System.Int32)
extern void ShortMessage_SetMessage_m12C461A17C5ABF56F1C5A8AECD9A3E609110900A (void);
// 0x000000E3 System.Int32 jp.kshoji.midisystem.ShortMessage::GetChannel()
extern void ShortMessage_GetChannel_mCF243C8B5718BF31D7F80EC643856E2B36D8D896 (void);
// 0x000000E4 System.Int32 jp.kshoji.midisystem.ShortMessage::GetCommand()
extern void ShortMessage_GetCommand_mD7091F7CB72A1CE3829A7C450DDC878B55BDAF00 (void);
// 0x000000E5 System.Int32 jp.kshoji.midisystem.ShortMessage::GetData1()
extern void ShortMessage_GetData1_m87FE4C8C4F1403BEFF20FF60F5CDD5215AFDEF0F (void);
// 0x000000E6 System.Int32 jp.kshoji.midisystem.ShortMessage::GetData2()
extern void ShortMessage_GetData2_m90DF4105A833BE348D3529EBD54A69BA7EBE190F (void);
// 0x000000E7 System.Object jp.kshoji.midisystem.ShortMessage::Clone()
extern void ShortMessage_Clone_m121BCCE2482C2169A69AB5AF3237DEB7A53C4052 (void);
// 0x000000E8 System.Int32 jp.kshoji.midisystem.ShortMessage::GetDataLength(System.Int32)
extern void ShortMessage_GetDataLength_m58B79426D3B72FCADEC7627A69153E06BCBC805A (void);
// 0x000000E9 System.Int32 jp.kshoji.midisystem.StandardMidiFileReader::ReadInt(System.IO.Stream)
extern void StandardMidiFileReader_ReadInt_m4200CAE842DBB69ED22AE4B502A80BE8F77545AE (void);
// 0x000000EA System.Int32 jp.kshoji.midisystem.StandardMidiFileReader::ReadShort(System.IO.Stream)
extern void StandardMidiFileReader_ReadShort_m88E4079C1145FDA59D6C95DBD95FC2714DB69F21 (void);
// 0x000000EB jp.kshoji.midisystem.MidiFileFormat jp.kshoji.midisystem.StandardMidiFileReader::GetMidiFileFormat(System.IO.Stream)
extern void StandardMidiFileReader_GetMidiFileFormat_m35A88674A89E20D8BD242DAC03BF9B21ED76C366 (void);
// 0x000000EC jp.kshoji.midisystem.MidiFileFormat jp.kshoji.midisystem.StandardMidiFileReader::GetMidiFileFormat(System.Uri)
extern void StandardMidiFileReader_GetMidiFileFormat_mF487A33EC6678F0598611B41550377D34CE35D98 (void);
// 0x000000ED jp.kshoji.midisystem.MidiFileFormat jp.kshoji.midisystem.StandardMidiFileReader::GetMidiFileFormat(System.String)
extern void StandardMidiFileReader_GetMidiFileFormat_m82CE6DC9D66532FE32D725E588093904E9A14A32 (void);
// 0x000000EE jp.kshoji.midisystem.Sequence jp.kshoji.midisystem.StandardMidiFileReader::GetSequence(System.IO.Stream)
extern void StandardMidiFileReader_GetSequence_m446AD2A30EA9427EF55BC1997C5A354042EA2632 (void);
// 0x000000EF jp.kshoji.midisystem.ShortMessage jp.kshoji.midisystem.StandardMidiFileReader::ProcessSystemMessage(System.Int32,System.Nullable`1<System.Int32>,System.IO.Stream)
extern void StandardMidiFileReader_ProcessSystemMessage_mA41EC15D0782C1214936777E88D653EC30496ED3 (void);
// 0x000000F0 jp.kshoji.midisystem.ShortMessage jp.kshoji.midisystem.StandardMidiFileReader::ProcessRunningMessage(System.Int32,System.Int32,System.IO.Stream)
extern void StandardMidiFileReader_ProcessRunningMessage_m369B33C4AC4CD8158EF0D7AC4B4E030BDDA419A8 (void);
// 0x000000F1 System.IO.MemoryStream jp.kshoji.midisystem.StandardMidiFileReader::ConvertToMemoryStream(System.IO.Stream)
extern void StandardMidiFileReader_ConvertToMemoryStream_mE120D20F4B9858B68DD64D703DADAEDE0D9E4B3F (void);
// 0x000000F2 jp.kshoji.midisystem.Sequence jp.kshoji.midisystem.StandardMidiFileReader::GetSequence(System.Uri)
extern void StandardMidiFileReader_GetSequence_mE70012475F086FF79AE687EE7FFDAFC25E36ACA0 (void);
// 0x000000F3 jp.kshoji.midisystem.Sequence jp.kshoji.midisystem.StandardMidiFileReader::GetSequence(System.String)
extern void StandardMidiFileReader_GetSequence_mE483BEE716D406DD3A2E7B32EE665F9C80554EE1 (void);
// 0x000000F4 System.Void jp.kshoji.midisystem.StandardMidiFileReader::.ctor()
extern void StandardMidiFileReader__ctor_mD26B168B20D4789D859C41A3F6155F55DF331C7F (void);
// 0x000000F5 System.Void jp.kshoji.midisystem.StandardMidiFileReader/ExtendedMidiFileFormat::.ctor(System.Int32,System.Single,System.Int32,System.Int32,System.Int64,System.Int32)
extern void ExtendedMidiFileFormat__ctor_m7AE509CA6EC829BF6D54A7CE17CC965AF3C906B1 (void);
// 0x000000F6 System.Int32 jp.kshoji.midisystem.StandardMidiFileReader/ExtendedMidiFileFormat::GetNumberTracks()
extern void ExtendedMidiFileFormat_GetNumberTracks_m9A8403562BEB6AA9B2FF91C00AD4A49BA5C238F7 (void);
// 0x000000F7 System.Void jp.kshoji.midisystem.StandardMidiFileReader/MidiDataInputStream::.ctor(System.IO.Stream)
extern void MidiDataInputStream__ctor_m1AFD53EC4B2198E64C012B40829FE1F5EB57F261 (void);
// 0x000000F8 System.Int64 jp.kshoji.midisystem.StandardMidiFileReader/MidiDataInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void MidiDataInputStream_Seek_m2696FD70D3BB4202661142B02FD13D590CD3633C (void);
// 0x000000F9 System.Int32 jp.kshoji.midisystem.StandardMidiFileReader/MidiDataInputStream::ReadVariableLengthInt()
extern void MidiDataInputStream_ReadVariableLengthInt_mC7D7044CDFC6060D907A039418DC8B0660C75BEA (void);
// 0x000000FA System.Void jp.kshoji.midisystem.StandardMidiFileReader/MidiDataInputStream::ReadFully(System.Byte[])
extern void MidiDataInputStream_ReadFully_m9C32ECC92ABDB8000B10BB5D28D8AF1D7F071622 (void);
// 0x000000FB System.Int32[] jp.kshoji.midisystem.StandardMidiFileWriter::GetMidiFileTypes()
extern void StandardMidiFileWriter_GetMidiFileTypes_m8807031174D6CC1FFE88F040A2735CC5544A84A2 (void);
// 0x000000FC System.Int32[] jp.kshoji.midisystem.StandardMidiFileWriter::GetMidiFileTypes(jp.kshoji.midisystem.Sequence)
extern void StandardMidiFileWriter_GetMidiFileTypes_mDCA1A52A5D66404CBC0418C81D64F4C584AF7496 (void);
// 0x000000FD System.Int32 jp.kshoji.midisystem.StandardMidiFileWriter::Write(jp.kshoji.midisystem.Sequence,System.Int32,System.IO.MemoryStream)
extern void StandardMidiFileWriter_Write_mC04F54C97B9565D0CDF87D0CA2872D5310F2A4AF (void);
// 0x000000FE System.Int32 jp.kshoji.midisystem.StandardMidiFileWriter::WriteTrack(jp.kshoji.midisystem.Track,jp.kshoji.midisystem.StandardMidiFileWriter/MidiDataOutputStream)
extern void StandardMidiFileWriter_WriteTrack_m7796B5F46B584CF07ED606D7F6E07ED22C692B30 (void);
// 0x000000FF System.Void jp.kshoji.midisystem.StandardMidiFileWriter::.ctor()
extern void StandardMidiFileWriter__ctor_mE878D9E8231670E5E75C0422ED3BD6EA1EA0616B (void);
// 0x00000100 System.Void jp.kshoji.midisystem.StandardMidiFileWriter/MidiDataOutputStream::.ctor()
extern void MidiDataOutputStream__ctor_m13747C0623FFEE5FC028ECF4503566463E06CBC3 (void);
// 0x00000101 System.Int64 jp.kshoji.midisystem.StandardMidiFileWriter/MidiDataOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void MidiDataOutputStream_Seek_mE51872318014086A04E05474B20D09A8E601F3AA (void);
// 0x00000102 System.Int32 jp.kshoji.midisystem.StandardMidiFileWriter/MidiDataOutputStream::GetValueToWrite(System.Int32)
extern void MidiDataOutputStream_GetValueToWrite_m05A5342011314C4C9373324B32150FC4CDC9EED3 (void);
// 0x00000103 System.Int32 jp.kshoji.midisystem.StandardMidiFileWriter/MidiDataOutputStream::VariableLengthIntLength(System.Int32)
extern void MidiDataOutputStream_VariableLengthIntLength_m428BF1B4FEE714F4466C990B60DEBB9ACFA3FBFC (void);
// 0x00000104 System.Void jp.kshoji.midisystem.StandardMidiFileWriter/MidiDataOutputStream::WriteVariableLengthInt(System.Int32)
extern void MidiDataOutputStream_WriteVariableLengthInt_m60FDE3381BE6C25E2C418B50A127024C6E535899 (void);
// 0x00000105 System.Void jp.kshoji.midisystem.StandardMidiFileWriter/MidiDataOutputStream::WriteInt(System.Int32)
extern void MidiDataOutputStream_WriteInt_m6FD7D39D30F238C3C9292AF67B5224FB07D08CE7 (void);
// 0x00000106 System.Void jp.kshoji.midisystem.StandardMidiFileWriter/MidiDataOutputStream::WriteShort(System.Int32)
extern void MidiDataOutputStream_WriteShort_mD620A4EBDF375BBD12BAF5677ACD1334A7B97BD5 (void);
// 0x00000107 System.Void jp.kshoji.midisystem.SysexMessage::.ctor()
extern void SysexMessage__ctor_m8A24A5C7AD9933EDEB715DE96AD3B32FCB98FF62 (void);
// 0x00000108 System.Void jp.kshoji.midisystem.SysexMessage::.ctor(System.Byte[])
extern void SysexMessage__ctor_mB7897B087D52A19F8B516241364AF5C8BE6A4FD0 (void);
// 0x00000109 System.Void jp.kshoji.midisystem.SysexMessage::.ctor(System.Int32,System.Byte[])
extern void SysexMessage__ctor_mA6620F78B58F1FD913286B738248B80A19261A46 (void);
// 0x0000010A System.Void jp.kshoji.midisystem.SysexMessage::SetMessage(System.Byte[])
extern void SysexMessage_SetMessage_m64E3725E81737C12FD8526787B8017FB67F8CBDF (void);
// 0x0000010B System.Void jp.kshoji.midisystem.SysexMessage::SetMessage(System.Int32,System.Byte[])
extern void SysexMessage_SetMessage_mC7BD811F8FF2B029290631CFD3A6A0BC73809FC8 (void);
// 0x0000010C System.Byte[] jp.kshoji.midisystem.SysexMessage::GetData()
extern void SysexMessage_GetData_mC96A44D50A402E7E5C4E04838573E78F44875247 (void);
// 0x0000010D System.Object jp.kshoji.midisystem.SysexMessage::Clone()
extern void SysexMessage_Clone_mB2EA500218C3D8E63DA4E64384D999591EF48C88 (void);
// 0x0000010E System.Boolean jp.kshoji.midisystem.Track::Add(jp.kshoji.midisystem.MidiEvent)
extern void Track_Add_m80F708E8AE61B5DAF6DCFDDFDEF48DDD02830BD9 (void);
// 0x0000010F jp.kshoji.midisystem.MidiEvent jp.kshoji.midisystem.Track::Get(System.Int32)
extern void Track_Get_m3AC372A6312653F9CC13733E49D3F50FD94CB5C0 (void);
// 0x00000110 System.Boolean jp.kshoji.midisystem.Track::Remove(jp.kshoji.midisystem.MidiEvent)
extern void Track_Remove_mC348B6F598363B94EF4C922DD68C288CA080E8D8 (void);
// 0x00000111 System.Int32 jp.kshoji.midisystem.Track::Size()
extern void Track_Size_mD5F0224E3295E5218DB851ABECA0B2751832057B (void);
// 0x00000112 System.Int64 jp.kshoji.midisystem.Track::Ticks()
extern void Track_Ticks_mF486ACAFDB692062CFA63C16C3CB77359BDF298A (void);
// 0x00000113 System.Void jp.kshoji.midisystem.Track::.ctor()
extern void Track__ctor_m812AA7347AB0F3A544A502D184B27985CFC35447 (void);
// 0x00000114 System.Void jp.kshoji.midisystem.Track::.cctor()
extern void Track__cctor_m7D4D53E4D979C48AF5D0A3D44F2B2AE03022CA50 (void);
// 0x00000115 jp.kshoji.midisystem.Track jp.kshoji.midisystem.Track/TrackUtils::MergeSequenceToTrack(jp.kshoji.midisystem.ISequencer,System.Collections.Generic.Dictionary`2<jp.kshoji.midisystem.Track,System.Collections.Generic.HashSet`1<System.Int32>>)
extern void TrackUtils_MergeSequenceToTrack_m5F5CA5E8A5F2F947E2DBD84B5AEB7A05264DA02A (void);
// 0x00000116 System.Void jp.kshoji.midisystem.Track/TrackUtils::SortEvents(jp.kshoji.midisystem.Track)
extern void TrackUtils_SortEvents_m26E1A3613DC0B305BF8367C0D84E71C3E0426D35 (void);
static Il2CppMethodPointer s_methodPointers[278] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Info__ctor_mAAFF5C882A3E64845496029DD8181D6D016847A4,
	Info_GetName_m33193B6FCC0184B9CFA65F77C6626C5EF4010758,
	Info_GetVendor_m6F6A85C8AC7B0CAB2B2D65D83CB31B9CC368264A,
	Info_GetDescription_mA7279ADC240E78D1F4FCD97DE92C668B1B197EFF,
	Info_GetVersion_mEE54468BD774DA80E8F2559A448E589493DDD3EB,
	Info_ToString_m2FD21C51A849F753D5533AC728C37775286D584C,
	Info_GetHashCode_m6BABE7CCD85A78EF6C9157670C43FC1F7FFF53A0,
	Info_Equals_m4E89ED38EAE17A6EA4911D1D5ACECAB6BEC890BE,
	InvalidMidiDataException__ctor_m4A6197442A359364CC27DD89400D2C68F7618179,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	SyncMode__ctor_m679F99E58D82B447D2AD231F01EB0FD39100AAED,
	SyncMode_Equals_m5B95CD228DBA2E211D70D634C354530196BA4594,
	SyncMode_GetHashCode_mBEF1392B97E032E6D3D0A2F3675A7C7743096FAB,
	SyncMode_ToString_m67E138ACD0A8A198583B60A00AD400CC7D37522B,
	SyncMode__cctor_m6343D8392F77B88DCBB274B9D2C0453B26CD41AD,
	NULL,
	NULL,
	NULL,
	MetaMessage__ctor_mAA4CB0C37B5FA6E94B5F8C3A9F211768B96995E3,
	MetaMessage__ctor_m962A9C26B2BF9A088A0356FB201E0C89B164CC34,
	MetaMessage__ctor_m6718EC576E63C542A7ABC4435074B1991942BA31,
	MetaMessage_SetMessage_m925D9F8D5A5333FF6F58F050BCBA90BEDCCC84B1,
	MetaMessage_GetMessageType_m33CD76092EDC31D7D8251B4278761EE9A560934F,
	MetaMessage_GetData_m1664514C77E9E22789C5261AD11E588DE26ECE70,
	MetaMessage_Clone_m0189EBBF5AC92B50A23592B087F83075A797A283,
	MetaMessage_GetMidiValuesLength_mBEDE91E35B315CC55B63724FBB089ECB497540D0,
	MetaMessage_WriteMidiValues_m22F5B4347BF9C1C058E4FA028C0E81293EEFC9C2,
	MetaMessage__cctor_m1F7406872BAFEB838CA8EF5C98A1B14690D495EB,
	MidiEvent__ctor_mE41EBD0041347679E9251BCF4B33119CB4AF4A21,
	MidiEvent_GetMessage_m1D5AC7A0813211B96CEECE7702415958012C61E4,
	MidiEvent_GetTick_m55EB805BE78AA9AB001AF536ED8EB6EA4924E2E3,
	MidiEvent_SetTick_mE477C1867466E34F5B93A622F6E1723087EA7B96,
	MidiEventComparer_Compare_mE810C3B2358A04C175A34CA8935EEDB596EC6056,
	MidiEventComparer__ctor_m3064AF2CB3B00D6921EABBEF9ED228C62AFE657C,
	MidiFileFormat__ctor_mD08FA4B374EF89785EE140277A0091B4323F317A,
	MidiFileFormat__ctor_mA22528105F3520C6533B7F4D7CA0C8BD480927F1,
	MidiFileFormat_GetByteLength_m61FA64D27EFB4A36B792112918DD98C6EC33343A,
	MidiFileFormat_GetDivisionType_mBCAF68AE4A01F0F9414E3358FEAEB909D259CF57,
	MidiFileFormat_GetMicrosecondLength_m29EE80C82439B7E86176BF2B76476720558CC96A,
	MidiFileFormat_GetProperty_m3F0973185A381DE3A9C224A9D29E159210CEC18D,
	MidiFileFormat_GetResolution_mB849796F6A6C5DFD9D0651D0D47D318316D042D6,
	MidiFileFormat_GetMessageType_m5D35A7E23E64EF60CC52BA826986837B64E80EAC,
	MidiFileFormat_GetProperties_mA4412D73FE03CBA06A47975D4946733C7A72983B,
	MidiMessage__ctor_mD45BB03D75356DE29B878BF08975358A50A1542F,
	NULL,
	MidiMessage_SetMessage_mB49CF1BDF9D2C0128BF256F1CD411CE8551A0F66,
	MidiMessage_GetMessage_mBDD776859914987533B7526CEE8A7452FCFC0FF8,
	MidiMessage_GetStatus_m89D622CC1378DE95CBE690A9CA08D872B2B0C068,
	MidiMessage_GetLength_mA1CCEE11B36630F1BADC67B4EC6A770DB9E8C6AB,
	MidiMessage_ToHexString_m4B99E9827BBE24FFF0F594883FC175E83A9745C5,
	MidiMessage_ToString_mD2CC7465912486A24FE21939BCC6F16A6A7865EB,
	MidiSystem_AddReceiver_m6803C262BCC4030AC6164D1CA78FF4188515965C,
	MidiSystem_RemoveReceiver_m704CE5144DB07548BF4158CD958F0E08DD4689E9,
	MidiSystem_GetReceiver_m32679C3D73EABF05C6D9C71F3D6006EBA6813C6E,
	MidiSystem_GetReceivers_m3BDC278E194AFE1FAFC315F1BB8A6BA5892452CC,
	MidiSystem_AddTransmitter_mCADD6049137B22E2548B13476686AF4E0FCE6673,
	MidiSystem_RemoveTransmitter_mD6DA3C85660E38F9A31EE1A40EB1A0643BBFA826,
	MidiSystem_GetTransmitter_m5621E37B08D3A456194C9F50FBA6C3894A5B91FF,
	MidiSystem_GetTransmitters_m54648BAAA7995BD7092797E70B49E1E0704A0869,
	MidiSystem_ReadSequence_mBC72E485ADEEEE4609CEA2FB3D255D702A46D1E7,
	MidiSystem_WriteSequence_m2CF2FE6FA206A476FF9A338A8FD86C4187EC401D,
	MidiSystem__cctor_mDDC6E9EA74349D445DB74903090578996AD336BB,
	MidiUnavailableException__ctor_m935137729A13D48A20EEACFA1654D6666A1A7183,
	Sequence_DivisionTypeEquals_m14054AF1FBEC37FA43562036ED1316721AA0987C,
	Sequence__ctor_m504ABFBF31F380B7BEA7C0B2C80E76C5A34BA882,
	Sequence__ctor_m1C097CA925E6A91F3C692E1F1849FC796A828844,
	Sequence_IsSupportingDivisionType_mAB14BDE7A0DAEE3C921D3A96805D9F0BA9973C45,
	Sequence_CreateTrack_m07BF01445D768E78CB3FD6393D3EA0A359CF695B,
	Sequence_DeleteTrack_m9358CE74ACD614FE14A90A0535DC3E5A3D1A676D,
	Sequence_GetDivisionType_mA6D52604B915CCF13F2A04E84756EA0BE09E7ACB,
	Sequence_GetMicrosecondLength_m5ED7EC266A78C8E6E1EE265AB7CFCA003DA824D4,
	Sequence_GetResolution_m82DAF39F8A54298E4DED5ACFF4EAA95763358FE4,
	Sequence_GetTickLength_m05A063D29CD8D88182E2607149FB0BD22BB7A5B9,
	Sequence_GetTracks_m8A68B43DF1913861D9DB02D3035B5F9448C84585,
	Sequence__cctor_mBDC55AD0E040C0CB3C4293847B9211A6DA65E4B7,
	U3CU3Ec__DisplayClass13_0__ctor_mA9E623CD61DE095B6656587948A20A7EB75BB6EC,
	U3CU3Ec__DisplayClass13_0_U3CIsSupportingDivisionTypeU3Eb__0_mEC747E8C6E256F50AE98819CAA50CDE8FA4A6B88,
	U3CU3Ec__cctor_mAD7E4CEFE4EB9BF78CE2C5D8390E32E31B67C383,
	U3CU3Ec__ctor_m0BA27084D95CC6988A214B8A4AE6125B31B75EC3,
	U3CU3Ec_U3CGetTickLengthU3Eb__19_0_m78DC9732A983FEBC6E33B1732F0893997A4B3737,
	SequencerImpl__ctor_m1E4466D5C3DDA618864900067A7F1B2F531F961E,
	SequencerImpl_GetDeviceInfo_m4A3AB2B1E5152D212E152AC965A48D63E6E846DF,
	SequencerImpl_UpdateDeviceConnections_mEA540D60340AD30DE501328F205413B85B7B93BC,
	SequencerImpl_OpenCoroutine_m7EA7F98EE8C090ACEFC81CF4B2608921185A38F8,
	SequencerImpl_Open_m71C02A99779E246972B829152BAAEE8FB52136DD,
	SequencerImpl_CloseAllSequencers_m1A1028E77C5A74B948C9BF405BE58DD5369ADFB6,
	SequencerImpl_Close_m515931FE86FCA6B333C714E76A0D0897F9E4C1D9,
	SequencerImpl_GetIsOpen_mC4A8112F5833261C594D04D6CCDC01A27D4EB148,
	SequencerImpl_GetMaxReceivers_mAADD07124EF22A596645BAF9E66FF0A17A3AD8F2,
	SequencerImpl_GetMaxTransmitters_mEA3EE0326DE16AE69B4C6F2DB0237DA70C6D9593,
	SequencerImpl_GetReceiver_m4C11E7D95BE7DC2F6B4359E7F7102DC158EF9941,
	SequencerImpl_GetReceivers_m2A578DA47357154A4C5943E1060D0FB7C3D02858,
	SequencerImpl_GetTransmitter_mF05ABB1AD38F9A4C2EC0A0B9599B6EE3D5D7F7A7,
	SequencerImpl_GetTransmitters_mB196EF473E8EB9B2F164CE779DC5F6EF7508B448,
	SequencerImpl_AddControllerEventListener_mEB6E7A7156A4E10DB7769C806CB64A2BD36DCA8C,
	SequencerImpl_RemoveControllerEventListener_m0216B8D9F27C6F1EC02B33D1BB248421B2430DDF,
	SequencerImpl_AddMetaEventListener_mB7F8428C4ADBCD943883A35609F846EBA0F2F1DF,
	SequencerImpl_RemoveMetaEventListener_mCCC55509FD11A66102E5053F2737CDE5044CD7B7,
	SequencerImpl_GetLoopCount_m8BF75A39945D626F9E557654E5429E6CBDA4E798,
	SequencerImpl_SetLoopCount_mA5963AA9739BF4BC08BC2101FA1F6A6E438DB38D,
	SequencerImpl_GetLoopStartPoint_mA2DD0BC669EE4FE9B540AEAE8F3E5C72A9B9001D,
	SequencerImpl_SetLoopStartPoint_m8CFB34169C19CE72E5BAE98AEF32E8A3384E9619,
	SequencerImpl_GetLoopEndPoint_m54486FA9E9551C94D030EA638EED87C2FCF152ED,
	SequencerImpl_SetLoopEndPoint_m2F9FEE70E011ADDF6EE76242351170807D725B8F,
	SequencerImpl_GetMasterSyncMode_mB5BAC7B57C223B43039907A4D3727E5BCE39B615,
	SequencerImpl_SetMasterSyncMode_m3FBDF1FBF7EBAE14EF0A10EA221FA45C62BB3278,
	SequencerImpl_GetMasterSyncModes_mEA7821C5C08E9E55EFC20CAE337BA432E3694BC4,
	SequencerImpl_GetMicrosecondPosition_m105B85912F9342ECB582E261856BE69FD8810F72,
	SequencerImpl_SetMicrosecondPosition_m74C54E199D22CBE8797C25021310E8F5C7B80C88,
	SequencerImpl_GetMicrosecondLength_mAEE2C7A8A3EC5E3F08106805E58C8BDE6BB6ABF8,
	SequencerImpl_GetSequence_m2486FE55F1E65D5097AEB2352EDF51E19EC815CA,
	SequencerImpl_SetSequence_m9BBA3F8D2015448389B8F897167D4E0096D717EE,
	SequencerImpl_SetSequence_m6F30539E354E8A787BCB14B062F6CCCEC0CCE778,
	SequencerImpl_GetSlaveSyncMode_m0119973E6FB97B5BF463B0A89596E46D71C38DA2,
	SequencerImpl_SetSlaveSyncMode_mB51657FE5645AF41A34EFF2FD510FD484B498E2F,
	SequencerImpl_GetSlaveSyncModes_m1025924F9CBD91AAE36FE93B57A23DFE8A1898A9,
	SequencerImpl_GetTempoFactor_m3FAE90F87D03D47354AA8277EC5EF86605B44E94,
	SequencerImpl_SetTempoFactor_m9D97D09297DBAD7860009BFF30C77AA5456E5AD5,
	SequencerImpl_GetTempoInBpm_m1EC5910F4E6BFFACAB7817021579BBF60ABFF790,
	SequencerImpl_SetTempoInBpm_m8284EB08E0C8F1DA57854A461DB0824A6C2C0CD3,
	SequencerImpl_GetTempoInMpq_m8EC73CCC5B4156862F54E230B8BE475BFAD8A857,
	SequencerImpl_SetTempoInMpq_mDABB651FD21A91D3AAE91B4D36CED7693B310623,
	SequencerImpl_GetTickLength_m5F69F62A816B31DD66CDDCA95D10307FB15098AD,
	SequencerImpl_GetTickPosition_m9F5E5143E0C36AE573C917CF50F63D4DA4B837FB,
	SequencerImpl_SetTickPosition_m64FFE590E146D51D604DB741D346335EB5C48384,
	SequencerImpl_GetTrackMute_mFFA04F5E25FEA60B383D55FCF7C0D34091D1A92B,
	SequencerImpl_SetTrackMute_mC28014EE5E618CA0EB274B098B54B177A5776DFF,
	SequencerImpl_GetTrackSolo_m913225F203AFC510F5D5E9B1E541316F3BBA5002,
	SequencerImpl_SetTrackSolo_mCF47936FA9635AB71175BE87A5F2FEE7F883B8C6,
	SequencerImpl_RecordDisable_m589CC56D83F070F16DC8B4554D376302628529BE,
	SequencerImpl_SetRecordEnable_m0DBC8C4CE7B89F0C87AF006697B8BA039EAA5CAA,
	SequencerImpl_StartRecording_m716164A4F34EE11CA2B2295901E2EA7F8FE3BB00,
	SequencerImpl_GetIsRecording_m7AE3FB01CDDA86BEE2F19B284DCCE62C3D7619B4,
	SequencerImpl_StopRecording_mFCFF0D47389A056F5B2BE1CF4C9258732317A4D4,
	SequencerImpl_Start_m6C9BBD6CF8FABCDF2B6656190E83DE546756AA32,
	SequencerImpl_GetIsRunning_m7E6432FE024E1D6FEFD75DF89156D0D305C5A2EE,
	SequencerImpl_Stop_mF2B39FBB337BA23495C43881F950B9708BE41E18,
	SequencerImpl_CurrentTimeMillis_m856AF5D561A89403E6331B447C3DAD1BEE51351D,
	SequencerImpl_GetTicksPerMicrosecond_m3B1F2F9B7A9B1A3E94DD75E55BB38754D23D53DF,
	SequencerImpl__cctor_m2D41F02BF7BC0B4D60308D492FFEDDE3D0022EC4,
	SequencerImpl_U3COpenCoroutineU3Eb__34_0_m2834769F4D6431C5B80AC49AFD1D6C646C7C2E0C,
	MidiEventRecordingReceiver__ctor_mA888A13FF53F697DD674E4F4F708A22B3A30E23E,
	MidiEventRecordingReceiver_Send_mAFFB285EB4FC0A175A2F3C389A300A110B9791D0,
	MidiEventRecordingReceiver_Close_m0CFDF4088435E67F0A989DC9A88A9D02FF90079E,
	SequencerThread_StartSequencerThread_m4A9D97F799C384AD9DA829505F8793FFCCF2C0FF,
	SequencerThread_GetTickPosition_mB1215D2CB89E44066120BBB0F750ADD47ACD61A6,
	SequencerThread_SetTickPosition_mF7DBBBDA9F1BCB7881E85770B9308F48D85C2A14,
	SequencerThread_StartRecording_mCFDD853ADA75323B4126D586DF0080182602321B,
	SequencerThread_StopRecording_m55D89BCA6E77866C283706169F8F0793184A2C12,
	SequencerThread_StartPlaying_m20FC3B98DE4C05EC19FE9A64E26FF2B94CF7BA46,
	SequencerThread_StopPlaying_mEFFD2B0B5A466FAFC8369D16B5A755C7207C9B37,
	SequencerThread_FireEventListeners_m5B552B954C74D64F9650CC4C989B541B8819644E,
	SequencerThread_ProcessTempoChange_m170C7ECCD4519552C8A18FFDE0F16B4C76BF93E9,
	SequencerThread_RefreshPlayingTrack_mED8CB3E7D059752D1F469F7EB5EA4F1110BF94A0,
	SequencerThread_isRecordable_m74F75BEACB593AEE28D2569E2BE92CD2FCAB7FA6,
	SequencerThread__ctor_mBCF327A1BB868BB5A41F0BA8F2B700C5190EDDC3,
	U3CStartSequencerThreadU3Ed__4__ctor_mBBDC36E42E622F75D92C5AE82060BE8306FC2DD7,
	U3CStartSequencerThreadU3Ed__4_System_IDisposable_Dispose_m7A3D98C8288F0D0F8FCE1AC510D7FF0ECAE04ECB,
	U3CStartSequencerThreadU3Ed__4_MoveNext_m519E0D0EB9CC25E7AECF54521116FAAD650E2B1D,
	U3CStartSequencerThreadU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m137DA8231639A285535EF0864DD4C4F4B19816A6,
	U3CStartSequencerThreadU3Ed__4_System_Collections_IEnumerator_Reset_m7B004A37337D14F69D1C6F964AD7B7A35C5BA7EB,
	U3CStartSequencerThreadU3Ed__4_System_Collections_IEnumerator_get_Current_m14236677E28BD63B4CF6CC686CA1D9D6FD2AD2EB,
	ShortMessage__ctor_mC81C3FD394BE10D8B321701BC6A89DF1B74CA14F,
	ShortMessage__ctor_m8EB2FCFE9A4D69BE2BB7C77F5B94422894BFCA97,
	ShortMessage__ctor_m48A3CA20AB759E81533F5AA243455071B8CBE08D,
	ShortMessage__ctor_m39FB8A385084394465B6978FB6D4CB5BA7D8FF11,
	ShortMessage__ctor_m53B441544BE567229F16CDBD4199178FCAB20802,
	ShortMessage_SetMessage_m52A9EE8D969A162F2E48C5C044489FB5F8E599B7,
	ShortMessage_SetMessage_m77CD398FF43D6525DE8F127582A808B008BFCEA1,
	ShortMessage_SetMessage_m12C461A17C5ABF56F1C5A8AECD9A3E609110900A,
	ShortMessage_GetChannel_mCF243C8B5718BF31D7F80EC643856E2B36D8D896,
	ShortMessage_GetCommand_mD7091F7CB72A1CE3829A7C450DDC878B55BDAF00,
	ShortMessage_GetData1_m87FE4C8C4F1403BEFF20FF60F5CDD5215AFDEF0F,
	ShortMessage_GetData2_m90DF4105A833BE348D3529EBD54A69BA7EBE190F,
	ShortMessage_Clone_m121BCCE2482C2169A69AB5AF3237DEB7A53C4052,
	ShortMessage_GetDataLength_m58B79426D3B72FCADEC7627A69153E06BCBC805A,
	StandardMidiFileReader_ReadInt_m4200CAE842DBB69ED22AE4B502A80BE8F77545AE,
	StandardMidiFileReader_ReadShort_m88E4079C1145FDA59D6C95DBD95FC2714DB69F21,
	StandardMidiFileReader_GetMidiFileFormat_m35A88674A89E20D8BD242DAC03BF9B21ED76C366,
	StandardMidiFileReader_GetMidiFileFormat_mF487A33EC6678F0598611B41550377D34CE35D98,
	StandardMidiFileReader_GetMidiFileFormat_m82CE6DC9D66532FE32D725E588093904E9A14A32,
	StandardMidiFileReader_GetSequence_m446AD2A30EA9427EF55BC1997C5A354042EA2632,
	StandardMidiFileReader_ProcessSystemMessage_mA41EC15D0782C1214936777E88D653EC30496ED3,
	StandardMidiFileReader_ProcessRunningMessage_m369B33C4AC4CD8158EF0D7AC4B4E030BDDA419A8,
	StandardMidiFileReader_ConvertToMemoryStream_mE120D20F4B9858B68DD64D703DADAEDE0D9E4B3F,
	StandardMidiFileReader_GetSequence_mE70012475F086FF79AE687EE7FFDAFC25E36ACA0,
	StandardMidiFileReader_GetSequence_mE483BEE716D406DD3A2E7B32EE665F9C80554EE1,
	StandardMidiFileReader__ctor_mD26B168B20D4789D859C41A3F6155F55DF331C7F,
	ExtendedMidiFileFormat__ctor_m7AE509CA6EC829BF6D54A7CE17CC965AF3C906B1,
	ExtendedMidiFileFormat_GetNumberTracks_m9A8403562BEB6AA9B2FF91C00AD4A49BA5C238F7,
	MidiDataInputStream__ctor_m1AFD53EC4B2198E64C012B40829FE1F5EB57F261,
	MidiDataInputStream_Seek_m2696FD70D3BB4202661142B02FD13D590CD3633C,
	MidiDataInputStream_ReadVariableLengthInt_mC7D7044CDFC6060D907A039418DC8B0660C75BEA,
	MidiDataInputStream_ReadFully_m9C32ECC92ABDB8000B10BB5D28D8AF1D7F071622,
	StandardMidiFileWriter_GetMidiFileTypes_m8807031174D6CC1FFE88F040A2735CC5544A84A2,
	StandardMidiFileWriter_GetMidiFileTypes_mDCA1A52A5D66404CBC0418C81D64F4C584AF7496,
	StandardMidiFileWriter_Write_mC04F54C97B9565D0CDF87D0CA2872D5310F2A4AF,
	StandardMidiFileWriter_WriteTrack_m7796B5F46B584CF07ED606D7F6E07ED22C692B30,
	StandardMidiFileWriter__ctor_mE878D9E8231670E5E75C0422ED3BD6EA1EA0616B,
	MidiDataOutputStream__ctor_m13747C0623FFEE5FC028ECF4503566463E06CBC3,
	MidiDataOutputStream_Seek_mE51872318014086A04E05474B20D09A8E601F3AA,
	MidiDataOutputStream_GetValueToWrite_m05A5342011314C4C9373324B32150FC4CDC9EED3,
	MidiDataOutputStream_VariableLengthIntLength_m428BF1B4FEE714F4466C990B60DEBB9ACFA3FBFC,
	MidiDataOutputStream_WriteVariableLengthInt_m60FDE3381BE6C25E2C418B50A127024C6E535899,
	MidiDataOutputStream_WriteInt_m6FD7D39D30F238C3C9292AF67B5224FB07D08CE7,
	MidiDataOutputStream_WriteShort_mD620A4EBDF375BBD12BAF5677ACD1334A7B97BD5,
	SysexMessage__ctor_m8A24A5C7AD9933EDEB715DE96AD3B32FCB98FF62,
	SysexMessage__ctor_mB7897B087D52A19F8B516241364AF5C8BE6A4FD0,
	SysexMessage__ctor_mA6620F78B58F1FD913286B738248B80A19261A46,
	SysexMessage_SetMessage_m64E3725E81737C12FD8526787B8017FB67F8CBDF,
	SysexMessage_SetMessage_mC7BD811F8FF2B029290631CFD3A6A0BC73809FC8,
	SysexMessage_GetData_mC96A44D50A402E7E5C4E04838573E78F44875247,
	SysexMessage_Clone_mB2EA500218C3D8E63DA4E64384D999591EF48C88,
	Track_Add_m80F708E8AE61B5DAF6DCFDDFDEF48DDD02830BD9,
	Track_Get_m3AC372A6312653F9CC13733E49D3F50FD94CB5C0,
	Track_Remove_mC348B6F598363B94EF4C922DD68C288CA080E8D8,
	Track_Size_mD5F0224E3295E5218DB851ABECA0B2751832057B,
	Track_Ticks_mF486ACAFDB692062CFA63C16C3CB77359BDF298A,
	Track__ctor_m812AA7347AB0F3A544A502D184B27985CFC35447,
	Track__cctor_m7D4D53E4D979C48AF5D0A3D44F2B2AE03022CA50,
	TrackUtils_MergeSequenceToTrack_m5F5CA5E8A5F2F947E2DBD84B5AEB7A05264DA02A,
	TrackUtils_SortEvents_m26E1A3613DC0B305BF8367C0D84E71C3E0426D35,
};
static const int32_t s_InvokerIndices[278] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1543,
	9657,
	9657,
	9657,
	9657,
	9657,
	9617,
	5668,
	7868,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7868,
	5668,
	9617,
	9657,
	16827,
	0,
	0,
	0,
	9810,
	7868,
	4088,
	4088,
	9617,
	9657,
	9657,
	15317,
	12815,
	16827,
	4438,
	9657,
	9618,
	7827,
	3110,
	9810,
	751,
	373,
	9617,
	9721,
	9618,
	7010,
	9617,
	9617,
	9657,
	7868,
	0,
	7868,
	9657,
	9617,
	9617,
	15499,
	9657,
	14208,
	15895,
	15499,
	16776,
	14208,
	15895,
	15499,
	16776,
	15499,
	14208,
	16827,
	7868,
	13287,
	4521,
	2363,
	15165,
	9657,
	5668,
	9721,
	9618,
	9617,
	9618,
	9657,
	16827,
	9810,
	5728,
	16827,
	9810,
	6887,
	7868,
	9657,
	9810,
	9657,
	9810,
	16827,
	9810,
	9532,
	9617,
	9617,
	9657,
	9657,
	9657,
	9657,
	3499,
	3499,
	5668,
	7868,
	9617,
	7826,
	9618,
	7827,
	9618,
	7827,
	9657,
	7868,
	9657,
	9618,
	7827,
	9618,
	9657,
	7868,
	7868,
	9657,
	7868,
	9657,
	9721,
	7938,
	9721,
	7938,
	9721,
	7938,
	9618,
	9618,
	7827,
	5626,
	4002,
	5626,
	4002,
	7868,
	4437,
	9810,
	9532,
	9810,
	9810,
	9532,
	9810,
	16764,
	9721,
	16827,
	9810,
	7868,
	4438,
	9810,
	3499,
	9618,
	7827,
	9810,
	9810,
	9810,
	9810,
	7868,
	5668,
	9810,
	2712,
	9810,
	7826,
	9810,
	9532,
	9657,
	9810,
	9657,
	9810,
	7868,
	7826,
	2205,
	1423,
	7826,
	2205,
	1423,
	9617,
	9617,
	9617,
	9617,
	9657,
	15316,
	15320,
	15320,
	7010,
	7010,
	7010,
	7010,
	12343,
	12349,
	15499,
	7010,
	7010,
	9810,
	372,
	9617,
	7868,
	3410,
	9617,
	7868,
	9657,
	7010,
	1868,
	13526,
	9810,
	9810,
	3410,
	15316,
	15316,
	7826,
	7826,
	7826,
	9810,
	7868,
	4088,
	7868,
	4088,
	9657,
	9657,
	5668,
	7003,
	5668,
	9617,
	9618,
	9810,
	16827,
	13674,
	15895,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_jp_kshoji_midisystem_CodeGenModule;
const Il2CppCodeGenModule g_jp_kshoji_midisystem_CodeGenModule = 
{
	"jp.kshoji.midisystem.dll",
	278,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
