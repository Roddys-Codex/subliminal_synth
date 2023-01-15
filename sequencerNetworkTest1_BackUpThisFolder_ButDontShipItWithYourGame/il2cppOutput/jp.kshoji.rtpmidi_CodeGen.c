#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiNoteOn(System.String,System.Int32,System.Int32,System.Int32)
// 0x00000002 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiNoteOff(System.String,System.Int32,System.Int32,System.Int32)
// 0x00000003 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiPolyphonicAftertouch(System.String,System.Int32,System.Int32,System.Int32)
// 0x00000004 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiControlChange(System.String,System.Int32,System.Int32,System.Int32)
// 0x00000005 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiProgramChange(System.String,System.Int32,System.Int32)
// 0x00000006 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiChannelAftertouch(System.String,System.Int32,System.Int32)
// 0x00000007 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiPitchWheel(System.String,System.Int32,System.Int32)
// 0x00000008 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiSystemExclusive(System.String,System.Byte[])
// 0x00000009 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiTimeCodeQuarterFrame(System.String,System.Int32)
// 0x0000000A System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiSongSelect(System.String,System.Int32)
// 0x0000000B System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiSongPositionPointer(System.String,System.Int32)
// 0x0000000C System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiTuneRequest(System.String)
// 0x0000000D System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiTimingClock(System.String)
// 0x0000000E System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiStart(System.String)
// 0x0000000F System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiContinue(System.String)
// 0x00000010 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiStop(System.String)
// 0x00000011 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiActiveSensing(System.String)
// 0x00000012 System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiReset(System.String)
// 0x00000013 System.Void jp.kshoji.rtpmidi.RtpMidiClock::Init(System.Int32)
extern void RtpMidiClock_Init_mF73EE129B3E7DA01C6D3F8CFA556C49DDCDA622F (void);
// 0x00000014 System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::Now()
extern void RtpMidiClock_Now_m11B034C9E2C4FB7F9C9EE7FC122495B3D773806E (void);
// 0x00000015 System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::CalculateCurrentTimeStamp()
extern void RtpMidiClock_CalculateCurrentTimeStamp_mEE49CFC07304972CE43B02DF9CA8B34CA85A8CFB (void);
// 0x00000016 System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::CalculateTimeSpent()
extern void RtpMidiClock_CalculateTimeSpent_mDA4BFA5DCF960E9DFB2460B4756ED259B678807A (void);
// 0x00000017 System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::Ticks()
extern void RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336 (void);
// 0x00000018 System.Void jp.kshoji.rtpmidi.RtpMidiClock::.ctor()
extern void RtpMidiClock__ctor_m3B03B531023885415D32314F8CF82A53089FCE91 (void);
// 0x00000019 System.Void jp.kshoji.rtpmidi.RtpMidiClock::.cctor()
extern void RtpMidiClock__cctor_m6CE84C5D914CBD0E09D80EF1FFDA5B13F820BE44 (void);
// 0x0000001A System.Void jp.kshoji.rtpmidi.RtpMidiParser::.ctor(jp.kshoji.rtpmidi.RtpMidiSession)
extern void RtpMidiParser__ctor_m41EE9465D0F91881879F210D6B49FDE1583A2CF5 (void);
// 0x0000001B jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.RtpMidiParser::Parse(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>)
extern void RtpMidiParser_Parse_m5248207E239A2F809A5773AEF55ADA983FCE20D8 (void);
// 0x0000001C jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.RtpMidiParser::DecodeMidiSection(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>)
extern void RtpMidiParser_DecodeMidiSection_m1A11A94EE0C6D6B4C2834A089E4DC1CE49AC1E31 (void);
// 0x0000001D System.Int32 jp.kshoji.rtpmidi.RtpMidiParser::DecodeTime(System.Byte[])
extern void RtpMidiParser_DecodeTime_m3ADC494C67FDD57189FCE05A829669772B955599 (void);
// 0x0000001E System.Byte jp.kshoji.rtpmidi.RtpMidiParser::DecodeMidi(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>,System.Byte&)
extern void RtpMidiParser_DecodeMidi_m3EE00672430A807D6471F0F9C9E72057FFF88C50 (void);
// 0x0000001F System.Byte jp.kshoji.rtpmidi.RtpMidiParser::DecodeMidiSysEx(System.Collections.Generic.LinkedList`1<System.Byte>)
extern void RtpMidiParser_DecodeMidiSysEx_m0C071D7F62BF2DDA34461F7B547BE6F32EF17DCA (void);
// 0x00000020 jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.RtpMidiParser::DecodeJournalSection(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>)
extern void RtpMidiParser_DecodeJournalSection_m3D7188F13F90C77C2E66F3BA18A8EF60529D6A32 (void);
// 0x00000021 System.Void jp.kshoji.rtpmidi.AppleMidiParser::.ctor(jp.kshoji.rtpmidi.RtpMidiSession)
extern void AppleMidiParser__ctor_m80DEA11B2D63BFD68BCC01036607BDEA7559F018 (void);
// 0x00000022 jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.AppleMidiParser::Parse(System.Collections.Generic.LinkedList`1<System.Byte>,jp.kshoji.rtpmidi.PortType)
extern void AppleMidiParser_Parse_mCBF399592EF78A9914D10558553CEC043070E5EF (void);
// 0x00000023 System.Void jp.kshoji.rtpmidi.RtpMidiConstants::.cctor()
extern void RtpMidiConstants__cctor_mAA81A3DEAE79DCB783A18AFB990BC30B9EEAC81F (void);
// 0x00000024 System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::.ctor(System.Int32,System.Int32,System.String)
extern void RtpMidiInvitation__ctor_m68479C50617FDAFD40000AFB502B685AF84B4537 (void);
// 0x00000025 System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitation::get_InitiatorToken()
extern void RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97 (void);
// 0x00000026 System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::set_InitiatorToken(System.Int32)
extern void RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441 (void);
// 0x00000027 System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitation::get_Ssrc()
extern void RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6 (void);
// 0x00000028 System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::set_Ssrc(System.Int32)
extern void RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2 (void);
// 0x00000029 System.String jp.kshoji.rtpmidi.RtpMidiInvitation::get_SessionName()
extern void RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46 (void);
// 0x0000002A System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::set_SessionName(System.String)
extern void RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A (void);
// 0x0000002B System.Void jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::.ctor(System.Int32,System.Int32,System.String)
extern void RtpMidiInvitationAccepted__ctor_mA4CB69FDD348EA904326DA286F7E43DD2EE41365 (void);
// 0x0000002C System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::get_InitiatorToken()
extern void RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28 (void);
// 0x0000002D System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::get_Ssrc()
extern void RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0 (void);
// 0x0000002E System.String jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::get_SessionName()
extern void RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53 (void);
// 0x0000002F System.Void jp.kshoji.rtpmidi.RtpMidiInvitationRejected::.ctor(System.Int32,System.Int32,System.String)
extern void RtpMidiInvitationRejected__ctor_m2B085695B68E6489A0D2D4658830081368DA3D32 (void);
// 0x00000030 System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationRejected::get_InitiatorToken()
extern void RtpMidiInvitationRejected_get_InitiatorToken_m4E2C63FA156F61A6115C1EBC85C5ABAB0B29698E (void);
// 0x00000031 System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationRejected::get_Ssrc()
extern void RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22 (void);
// 0x00000032 System.String jp.kshoji.rtpmidi.RtpMidiInvitationRejected::get_SessionName()
extern void RtpMidiInvitationRejected_get_SessionName_mA780CAAA4017F4A916FA7FBBEDFDE45BBBE6AF6D (void);
// 0x00000033 System.Void jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::.ctor(System.Int32,System.Int32)
extern void RtpMidiBitrateReceiveLimit__ctor_m899F4FB060850ED9C3E5E9B83783AF26BC7B621A (void);
// 0x00000034 System.Int32 jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::get_Ssrc()
extern void RtpMidiBitrateReceiveLimit_get_Ssrc_mFDA1650FF97499413CE686A094021ED22B5C03CC (void);
// 0x00000035 System.Int32 jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::get_BitrateLimit()
extern void RtpMidiBitrateReceiveLimit_get_BitrateLimit_m2500D86E7990624D97B4CCB49F1A287FEBED7974 (void);
// 0x00000036 System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::.ctor(System.Int32,System.Byte,System.Int64[])
extern void RtpMidiSynchronization__ctor_mA8B795137F855A1526935238789737C18A3FC848 (void);
// 0x00000037 System.Int32 jp.kshoji.rtpmidi.RtpMidiSynchronization::get_Ssrc()
extern void RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D (void);
// 0x00000038 System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::set_Ssrc(System.Int32)
extern void RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF (void);
// 0x00000039 System.Byte jp.kshoji.rtpmidi.RtpMidiSynchronization::get_Count()
extern void RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D (void);
// 0x0000003A System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::set_Count(System.Byte)
extern void RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537 (void);
// 0x0000003B System.Int64[] jp.kshoji.rtpmidi.RtpMidiSynchronization::get_Timestamps()
extern void RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396 (void);
// 0x0000003C System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::set_Timestamps(System.Int64[])
extern void RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4 (void);
// 0x0000003D System.Void jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::.ctor(System.Int32,System.Int16)
extern void RtpMidiReceiverFeedback__ctor_mEC938661E354EF7F2D0BCC617B6B4D5EAFC46DA1 (void);
// 0x0000003E System.Int32 jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::get_Ssrc()
extern void RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE (void);
// 0x0000003F System.Void jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::set_Ssrc(System.Int32)
extern void RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174 (void);
// 0x00000040 System.Int16 jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::get_SequenceNr()
extern void RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B (void);
// 0x00000041 System.Void jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::set_SequenceNr(System.Int16)
extern void RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED (void);
// 0x00000042 System.Void jp.kshoji.rtpmidi.RtpMidiEndSession::.ctor(System.Int32,System.Int32)
extern void RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D (void);
// 0x00000043 System.Int32 jp.kshoji.rtpmidi.RtpMidiEndSession::get_InitiatorToken()
extern void RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9 (void);
// 0x00000044 System.Int32 jp.kshoji.rtpmidi.RtpMidiEndSession::get_Ssrc()
extern void RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD (void);
// 0x00000045 System.Void jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener::OnRtpMidiDeviceAttached(System.String)
// 0x00000046 System.Void jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener::OnRtpMidiDeviceDetached(System.String)
// 0x00000047 System.String jp.kshoji.rtpmidi.RtpMidiServer::GetDeviceName(System.String)
extern void RtpMidiServer_GetDeviceName_m7C819D6166BA017C35111EE15348426D5EA38ABA (void);
// 0x00000048 System.Void jp.kshoji.rtpmidi.RtpMidiServer::.ctor(System.String,System.Int32,jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener,jp.kshoji.rtpmidi.IRtpMidiEventHandler)
extern void RtpMidiServer__ctor_m44412C2DC6313F2C44EA766CEE28107DDA97B3BF (void);
// 0x00000049 System.Void jp.kshoji.rtpmidi.RtpMidiServer::ConnectToListener(System.Net.IPEndPoint)
extern void RtpMidiServer_ConnectToListener_mDC894D425EC1B6A4F5CA26FE9442C711D604E612 (void);
// 0x0000004A System.Void jp.kshoji.rtpmidi.RtpMidiServer::Start()
extern void RtpMidiServer_Start_m196FC0F839E48D7533857FC452B468B184A8FED8 (void);
// 0x0000004B System.Boolean jp.kshoji.rtpmidi.RtpMidiServer::IsStarted()
extern void RtpMidiServer_IsStarted_m83684B19F34CA72DFA2E0EFBDD5BC0488800D6A6 (void);
// 0x0000004C System.Void jp.kshoji.rtpmidi.RtpMidiServer::Stop()
extern void RtpMidiServer_Stop_mA28C309584CD5E37742F3108152E8841AA712C24 (void);
// 0x0000004D System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiNoteOn(System.String,System.Int32,System.Int32,System.Int32)
extern void RtpMidiServer_SendMidiNoteOn_m0CEA2420A3C35764F97668CF22907756A43CDAF3 (void);
// 0x0000004E System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiNoteOff(System.String,System.Int32,System.Int32,System.Int32)
extern void RtpMidiServer_SendMidiNoteOff_mA5AAE3EEF329807C4D0FBEB9DEC95A6F5B04965A (void);
// 0x0000004F System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiPolyphonicAftertouch(System.String,System.Int32,System.Int32,System.Int32)
extern void RtpMidiServer_SendMidiPolyphonicAftertouch_mEE25FE1F979C90E87001EA5B59DF339E5A1BEFE7 (void);
// 0x00000050 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiControlChange(System.String,System.Int32,System.Int32,System.Int32)
extern void RtpMidiServer_SendMidiControlChange_m8FB9A04EB26D5881573F578D2DA03B1358B3EB95 (void);
// 0x00000051 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiProgramChange(System.String,System.Int32,System.Int32)
extern void RtpMidiServer_SendMidiProgramChange_m2C74E4DDCBC66C99AC74B65F276833B0AA335233 (void);
// 0x00000052 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiChannelAftertouch(System.String,System.Int32,System.Int32)
extern void RtpMidiServer_SendMidiChannelAftertouch_m673AC79E1E6DBB34F1EF2771EDB7CC496DFE0144 (void);
// 0x00000053 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiPitchWheel(System.String,System.Int32,System.Int32)
extern void RtpMidiServer_SendMidiPitchWheel_m2243684C6183FCD7899BA867670416F67D05ACC2 (void);
// 0x00000054 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiSystemExclusive(System.String,System.Byte[])
extern void RtpMidiServer_SendMidiSystemExclusive_m1CECDF757D45552231A0EA3F37AB531D890F7036 (void);
// 0x00000055 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiTimeCodeQuarterFrame(System.String,System.Int32)
extern void RtpMidiServer_SendMidiTimeCodeQuarterFrame_mE7CFE1328098F08D38BF77AC8C435876795ACBC8 (void);
// 0x00000056 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiSongSelect(System.String,System.Int32)
extern void RtpMidiServer_SendMidiSongSelect_m281353AEF9996D0E80447EE4860C3A26CCA39B06 (void);
// 0x00000057 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiSongPositionPointer(System.String,System.Int32)
extern void RtpMidiServer_SendMidiSongPositionPointer_m53D1A057F3EC1F19F4AD2865886F2DA481D0A2A1 (void);
// 0x00000058 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiTuneRequest(System.String)
extern void RtpMidiServer_SendMidiTuneRequest_mFE3881965DCADFF21F7A523C0C684CA9EC65B11F (void);
// 0x00000059 System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiTimingClock(System.String)
extern void RtpMidiServer_SendMidiTimingClock_m0FDBB88768A70E14D55DD5E76EE941B6EB8DEED7 (void);
// 0x0000005A System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiStart(System.String)
extern void RtpMidiServer_SendMidiStart_m3300141A171663078145A76D7A7978D7100419BA (void);
// 0x0000005B System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiContinue(System.String)
extern void RtpMidiServer_SendMidiContinue_m963FBDE26E882DEAFDC3FB4ACB3DD3E3415DDAC8 (void);
// 0x0000005C System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiStop(System.String)
extern void RtpMidiServer_SendMidiStop_mAC386DA498744AB27A61DFDD760B07F2DBEA102D (void);
// 0x0000005D System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiActiveSensing(System.String)
extern void RtpMidiServer_SendMidiActiveSensing_m7C679EBE0EF32BD0B19AA6B6571068B462BCE1D0 (void);
// 0x0000005E System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiReset(System.String)
extern void RtpMidiServer_SendMidiReset_m0FDCFCB1BB741BB1F8532F625E264526DD5EEC81 (void);
// 0x0000005F System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiRaw(System.String,System.Byte[])
extern void RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7 (void);
// 0x00000060 System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread::.ctor(jp.kshoji.rtpmidi.RtpMidiSession)
extern void RtpMidiThread__ctor_m0FA37BF59644E0FBE249D1F4128DCCFD07DAFD7B (void);
// 0x00000061 System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread::Stop()
extern void RtpMidiThread_Stop_m260B30396538D3A15ED98FC33870446C14A86C6C (void);
// 0x00000062 System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m03F0CCDB39111D331F97A97278F2F32CA2099F4F (void);
// 0x00000063 System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread/<>c__DisplayClass2_0::<.ctor>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m34717ACB3637517832915DE95CFE2C2C8ED5C0B8 (void);
// 0x00000064 System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind)
// 0x00000065 System.Boolean jp.kshoji.rtpmidi.RtpMidiParticipant::get_Synchronizing()
extern void RtpMidiParticipant_get_Synchronizing_mF60EF42DC53BEC43B3DD61D6100A6400B9A7472B (void);
// 0x00000066 System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::set_Synchronizing(System.Boolean)
extern void RtpMidiParticipant_set_Synchronizing_m85239D61ABFC5F3885A669381565911B47B58371 (void);
// 0x00000067 System.Int64 jp.kshoji.rtpmidi.RtpMidiParticipant::get_OffsetEstimate()
extern void RtpMidiParticipant_get_OffsetEstimate_m49C51370146D2B3AA104E0711B8C861461EABA67 (void);
// 0x00000068 System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::set_OffsetEstimate(System.Int64)
extern void RtpMidiParticipant_set_OffsetEstimate_m247AF18F141787C6EA72D9F1D70F96C01963B2F0 (void);
// 0x00000069 System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::.ctor(jp.kshoji.rtpmidi.RtpMidiSession,System.Net.IPEndPoint)
extern void RtpMidiParticipant__ctor_mF9057DE20163285A4D5484F4CB8D106D24054D2F (void);
// 0x0000006A System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::.cctor()
extern void RtpMidiParticipant__cctor_m8D77592CCB5BB86F31625F94BBA66C2D5E49DB68 (void);
// 0x0000006B System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::get_Port()
extern void RtpMidiSession_get_Port_m31BCC9B42C314665019BE60D5C8551879C2C8A86 (void);
// 0x0000006C System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::get_Ssrc()
extern void RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92 (void);
// 0x0000006D System.Void jp.kshoji.rtpmidi.RtpMidiSession::set_Ssrc(System.Int32)
extern void RtpMidiSession_set_Ssrc_m081E8D90233B36C201EB75EEE015BC983D629C42 (void);
// 0x0000006E System.Void jp.kshoji.rtpmidi.RtpMidiSession::.ctor(System.String,System.Int32,jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener)
extern void RtpMidiSession__ctor_m483B4F64860D904D186DB7526513F3737E56BEB9 (void);
// 0x0000006F System.Void jp.kshoji.rtpmidi.RtpMidiSession::SetMidiEventListener(jp.kshoji.rtpmidi.IRtpMidiEventHandler)
extern void RtpMidiSession_SetMidiEventListener_mE2AD07E2C7C6E2B629B3DF4A7A1D177813331C69 (void);
// 0x00000070 System.Void jp.kshoji.rtpmidi.RtpMidiSession::SetRtpMidiExceptionListener(jp.kshoji.rtpmidi.IRtpMidiExceptionListener)
extern void RtpMidiSession_SetRtpMidiExceptionListener_m561A141EDFF9050CACEB0218A1E06612BA12B630 (void);
// 0x00000071 System.Boolean jp.kshoji.rtpmidi.RtpMidiSession::SendInvite(System.Net.IPEndPoint)
extern void RtpMidiSession_SendInvite_mE9101385CC91905BF1A282B5B0FA9D9F7CADFEDC (void);
// 0x00000072 System.String jp.kshoji.rtpmidi.RtpMidiSession::GetDeviceId(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9 (void);
// 0x00000073 System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::GetPortFromDeviceId(System.String)
extern void RtpMidiSession_GetPortFromDeviceId_m38B0BC4DCB8CC70D6A8555FB664743F0D4BF7CD9 (void);
// 0x00000074 System.Nullable`1<System.Int32> jp.kshoji.rtpmidi.RtpMidiSession::GetSsrcFromDeviceId(System.String)
extern void RtpMidiSession_GetSsrcFromDeviceId_m2ED9503BC36486711826211EF2F0B3FE64904350 (void);
// 0x00000075 jp.kshoji.rtpmidi.RtpMidiParticipant jp.kshoji.rtpmidi.RtpMidiSession::GetParticipantFromDeviceId(System.String)
extern void RtpMidiSession_GetParticipantFromDeviceId_m5E9681536C0782ECA1A6F16CB340ABF0FA4B2991 (void);
// 0x00000076 System.Void jp.kshoji.rtpmidi.RtpMidiSession::SendEndSession()
extern void RtpMidiSession_SendEndSession_m834BBB4F3F21141A5CFFA865313A6E3F8B406385 (void);
// 0x00000077 System.Void jp.kshoji.rtpmidi.RtpMidiSession::SendEndSession(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_SendEndSession_m58DC5A45D223079AE151E5AEE9ACDD621025E9E5 (void);
// 0x00000078 System.Void jp.kshoji.rtpmidi.RtpMidiSession::SendSynchronization(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_SendSynchronization_m4487D4DE3A13E6E1BAA445C735182EF938675B40 (void);
// 0x00000079 System.Void jp.kshoji.rtpmidi.RtpMidiSession::Begin()
extern void RtpMidiSession_Begin_mC52BF739237C5187633D0C6E00C382EAA7C2D075 (void);
// 0x0000007A System.Void jp.kshoji.rtpmidi.RtpMidiSession::End()
extern void RtpMidiSession_End_m7863BA59945C973877C9AE0F959694CCC8F06FA6 (void);
// 0x0000007B System.Boolean jp.kshoji.rtpmidi.RtpMidiSession::BeginTransmission(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_BeginTransmission_m518370F239FDC0C6178C32FEA978C2C5BC6B2B66 (void);
// 0x0000007C System.Void jp.kshoji.rtpmidi.RtpMidiSession::EndTransmission(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_EndTransmission_mACD6BB6A2D23510484F6EB3153DD86FF4B82F0D2 (void);
// 0x0000007D System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::Available(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_Available_m87E775EAB23A0890ABEB7796FA20641EBC85D2C8 (void);
// 0x0000007E System.Byte jp.kshoji.rtpmidi.RtpMidiSession::Read(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_Read_mD146F0D6AB1A0AA91E0E3B32687B722CAA33FA32 (void);
// 0x0000007F System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReadDataPackets()
extern void RtpMidiSession_ReadDataPackets_m68C80889F7EFDFE3FE67673C8F182D64D6F1943D (void);
// 0x00000080 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ParseDataPackets(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_ParseDataPackets_mD145D1C78EB2B83C13D2ACFF1145D73569DD5D40 (void);
// 0x00000081 System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::ReadControlPackets()
extern void RtpMidiSession_ReadControlPackets_mA47E6A6C787ED032324BA8A38AE2D62FC4332A5D (void);
// 0x00000082 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ParseControlPackets()
extern void RtpMidiSession_ParseControlPackets_m8C9367D90111CFE0915D2767D4495F48A45BA00B (void);
// 0x00000083 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedInvitation(jp.kshoji.rtpmidi.RtpMidiInvitation,jp.kshoji.rtpmidi.PortType)
extern void RtpMidiSession_ReceivedInvitation_m6BBDF81180387EDE2B68A603D6B4F96C7E308FAB (void);
// 0x00000084 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedControlInvitation(jp.kshoji.rtpmidi.RtpMidiInvitation)
extern void RtpMidiSession_ReceivedControlInvitation_m27CF5525C6D42C2EF3C51DE8A6C59844EA6AF086 (void);
// 0x00000085 jp.kshoji.rtpmidi.RtpMidiParticipant jp.kshoji.rtpmidi.RtpMidiSession::GetParticipantBySsrc(System.Int32)
extern void RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5 (void);
// 0x00000086 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedDataInvitation(jp.kshoji.rtpmidi.RtpMidiInvitation)
extern void RtpMidiSession_ReceivedDataInvitation_m40FE0CC6A950AD05F82B16549AE319088C249E23 (void);
// 0x00000087 System.Void jp.kshoji.rtpmidi.RtpMidiSession::Write(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Byte)
extern void RtpMidiSession_Write_mCB83C01AEF62AFF70B4E233ACC888CD5D80BE116 (void);
// 0x00000088 System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteInvitation(System.Net.Sockets.UdpClient,System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiInvitation,System.Byte[])
extern void RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2 (void);
// 0x00000089 System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteReceiverFeedback(System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiReceiverFeedback)
extern void RtpMidiSession_WriteReceiverFeedback_m5503C97AB226E3DD17CEC685547B16944BD02E21 (void);
// 0x0000008A System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteSynchronization(System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiSynchronization)
extern void RtpMidiSession_WriteSynchronization_m27187F9AFDA0FC771DE29C843D3B3B1B5F5DBFA2 (void);
// 0x0000008B System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteEndSession(System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiEndSession)
extern void RtpMidiSession_WriteEndSession_m760F965A73F36677C475AE9ECC67655927C52FE0 (void);
// 0x0000008C System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteRtpMidi(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_WriteRtpMidi_m468A4CB83DE0470464BB79362C21CA8D18EB67D3 (void);
// 0x0000008D System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteRtpMidiBuffer(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_WriteRtpMidiBuffer_m9BDC07852AE1E47C62AD61A44CB70020988BDBD6 (void);
// 0x0000008E System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageSessionInvites()
extern void RtpMidiSession_ManageSessionInvites_m0D0C32AE1632AE3C51002EF4AD9EC317A98A1214 (void);
// 0x0000008F System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageReceiverFeedback()
extern void RtpMidiSession_ManageReceiverFeedback_m0E9CBA03489F02D1565D09F4BC025D8938B0B26A (void);
// 0x00000090 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageSynchronization()
extern void RtpMidiSession_ManageSynchronization_mDF103B072D62660CA1D13901F38E56F00D8B7030 (void);
// 0x00000091 System.Boolean jp.kshoji.rtpmidi.RtpMidiSession::ManageSynchronizationInitiatorInvites(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_ManageSynchronizationInitiatorInvites_m5E93887D867B6B87C76381AD83B357E6616E1D3D (void);
// 0x00000092 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageSynchronizationInitiatorHeartBeat(jp.kshoji.rtpmidi.RtpMidiParticipant)
extern void RtpMidiSession_ManageSynchronizationInitiatorHeartBeat_mC50CB3D5B06D77F49806495F668784CB6D0A3F3E (void);
// 0x00000093 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedEndSession(jp.kshoji.rtpmidi.RtpMidiEndSession)
extern void RtpMidiSession_ReceivedEndSession_m58B95EA276CC742F1405E9CBD0D73A9690C7B182 (void);
// 0x00000094 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedSynchronization(jp.kshoji.rtpmidi.RtpMidiSynchronization)
extern void RtpMidiSession_ReceivedSynchronization_m50146E909893CDE277963444F96314741629933D (void);
// 0x00000095 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedInvitationAccepted(jp.kshoji.rtpmidi.RtpMidiInvitationAccepted,jp.kshoji.rtpmidi.PortType)
extern void RtpMidiSession_ReceivedInvitationAccepted_mAF531DF62FED1792DAD477DDC48E7CB86465E839 (void);
// 0x00000096 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedControlInvitationAccepted(jp.kshoji.rtpmidi.RtpMidiInvitationAccepted)
extern void RtpMidiSession_ReceivedControlInvitationAccepted_m9D1659E908820FD4DD6AD5B15016957D727E4733 (void);
// 0x00000097 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedDataInvitationAccepted(jp.kshoji.rtpmidi.RtpMidiInvitationAccepted)
extern void RtpMidiSession_ReceivedDataInvitationAccepted_mE116065321485879046AFD3AE95FF9A7630F136C (void);
// 0x00000098 jp.kshoji.rtpmidi.RtpMidiParticipant jp.kshoji.rtpmidi.RtpMidiSession::GetParticipantByInitiatorToken(System.Int32)
extern void RtpMidiSession_GetParticipantByInitiatorToken_m6678E759B1841EB95B3445778489C06EFEEA4417 (void);
// 0x00000099 System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedInvitationRejected(jp.kshoji.rtpmidi.RtpMidiInvitationRejected)
extern void RtpMidiSession_ReceivedInvitationRejected_m30FDC4E5E3025E15BFEFCAA55C0E4799E52FA8D5 (void);
// 0x0000009A System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedReceiverFeedback(jp.kshoji.rtpmidi.RtpMidiReceiverFeedback)
extern void RtpMidiSession_ReceivedReceiverFeedback_m8E21FC7C788B160198541BD185DE2B06B1A287D7 (void);
// 0x0000009B System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedBitrateReceiveLimit(jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit)
extern void RtpMidiSession_ReceivedBitrateReceiveLimit_m967A2C31731C73888F18EFE670184F5EFAAE4C18 (void);
// 0x0000009C System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedMidi(System.Byte)
extern void RtpMidiSession_ReceivedMidi_mB73D360059B664A8681945D34F847DA40ADAD81B (void);
// 0x0000009D System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedMidi(jp.kshoji.rtpmidi.RtpMidiParticipant,jp.kshoji.rtpmidi.MidiType,System.Byte[])
extern void RtpMidiSession_ReceivedMidi_mC7443254C4EDFD7A6E10191BF365769B65926F44 (void);
// 0x0000009E System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedRtp(jp.kshoji.rtpmidi.Rtp)
extern void RtpMidiSession_ReceivedRtp_mC2621016A0CA097C6B302A38C4DE125D7D69645E (void);
static Il2CppMethodPointer s_methodPointers[158] = 
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
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RtpMidiClock_Init_mF73EE129B3E7DA01C6D3F8CFA556C49DDCDA622F,
	RtpMidiClock_Now_m11B034C9E2C4FB7F9C9EE7FC122495B3D773806E,
	RtpMidiClock_CalculateCurrentTimeStamp_mEE49CFC07304972CE43B02DF9CA8B34CA85A8CFB,
	RtpMidiClock_CalculateTimeSpent_mDA4BFA5DCF960E9DFB2460B4756ED259B678807A,
	RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336,
	RtpMidiClock__ctor_m3B03B531023885415D32314F8CF82A53089FCE91,
	RtpMidiClock__cctor_m6CE84C5D914CBD0E09D80EF1FFDA5B13F820BE44,
	RtpMidiParser__ctor_m41EE9465D0F91881879F210D6B49FDE1583A2CF5,
	RtpMidiParser_Parse_m5248207E239A2F809A5773AEF55ADA983FCE20D8,
	RtpMidiParser_DecodeMidiSection_m1A11A94EE0C6D6B4C2834A089E4DC1CE49AC1E31,
	RtpMidiParser_DecodeTime_m3ADC494C67FDD57189FCE05A829669772B955599,
	RtpMidiParser_DecodeMidi_m3EE00672430A807D6471F0F9C9E72057FFF88C50,
	RtpMidiParser_DecodeMidiSysEx_m0C071D7F62BF2DDA34461F7B547BE6F32EF17DCA,
	RtpMidiParser_DecodeJournalSection_m3D7188F13F90C77C2E66F3BA18A8EF60529D6A32,
	AppleMidiParser__ctor_m80DEA11B2D63BFD68BCC01036607BDEA7559F018,
	AppleMidiParser_Parse_mCBF399592EF78A9914D10558553CEC043070E5EF,
	RtpMidiConstants__cctor_mAA81A3DEAE79DCB783A18AFB990BC30B9EEAC81F,
	RtpMidiInvitation__ctor_m68479C50617FDAFD40000AFB502B685AF84B4537,
	RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97,
	RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441,
	RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6,
	RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2,
	RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46,
	RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A,
	RtpMidiInvitationAccepted__ctor_mA4CB69FDD348EA904326DA286F7E43DD2EE41365,
	RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28,
	RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0,
	RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53,
	RtpMidiInvitationRejected__ctor_m2B085695B68E6489A0D2D4658830081368DA3D32,
	RtpMidiInvitationRejected_get_InitiatorToken_m4E2C63FA156F61A6115C1EBC85C5ABAB0B29698E,
	RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22,
	RtpMidiInvitationRejected_get_SessionName_mA780CAAA4017F4A916FA7FBBEDFDE45BBBE6AF6D,
	RtpMidiBitrateReceiveLimit__ctor_m899F4FB060850ED9C3E5E9B83783AF26BC7B621A,
	RtpMidiBitrateReceiveLimit_get_Ssrc_mFDA1650FF97499413CE686A094021ED22B5C03CC,
	RtpMidiBitrateReceiveLimit_get_BitrateLimit_m2500D86E7990624D97B4CCB49F1A287FEBED7974,
	RtpMidiSynchronization__ctor_mA8B795137F855A1526935238789737C18A3FC848,
	RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D,
	RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF,
	RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D,
	RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537,
	RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396,
	RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4,
	RtpMidiReceiverFeedback__ctor_mEC938661E354EF7F2D0BCC617B6B4D5EAFC46DA1,
	RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE,
	RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174,
	RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B,
	RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED,
	RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D,
	RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9,
	RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD,
	NULL,
	NULL,
	RtpMidiServer_GetDeviceName_m7C819D6166BA017C35111EE15348426D5EA38ABA,
	RtpMidiServer__ctor_m44412C2DC6313F2C44EA766CEE28107DDA97B3BF,
	RtpMidiServer_ConnectToListener_mDC894D425EC1B6A4F5CA26FE9442C711D604E612,
	RtpMidiServer_Start_m196FC0F839E48D7533857FC452B468B184A8FED8,
	RtpMidiServer_IsStarted_m83684B19F34CA72DFA2E0EFBDD5BC0488800D6A6,
	RtpMidiServer_Stop_mA28C309584CD5E37742F3108152E8841AA712C24,
	RtpMidiServer_SendMidiNoteOn_m0CEA2420A3C35764F97668CF22907756A43CDAF3,
	RtpMidiServer_SendMidiNoteOff_mA5AAE3EEF329807C4D0FBEB9DEC95A6F5B04965A,
	RtpMidiServer_SendMidiPolyphonicAftertouch_mEE25FE1F979C90E87001EA5B59DF339E5A1BEFE7,
	RtpMidiServer_SendMidiControlChange_m8FB9A04EB26D5881573F578D2DA03B1358B3EB95,
	RtpMidiServer_SendMidiProgramChange_m2C74E4DDCBC66C99AC74B65F276833B0AA335233,
	RtpMidiServer_SendMidiChannelAftertouch_m673AC79E1E6DBB34F1EF2771EDB7CC496DFE0144,
	RtpMidiServer_SendMidiPitchWheel_m2243684C6183FCD7899BA867670416F67D05ACC2,
	RtpMidiServer_SendMidiSystemExclusive_m1CECDF757D45552231A0EA3F37AB531D890F7036,
	RtpMidiServer_SendMidiTimeCodeQuarterFrame_mE7CFE1328098F08D38BF77AC8C435876795ACBC8,
	RtpMidiServer_SendMidiSongSelect_m281353AEF9996D0E80447EE4860C3A26CCA39B06,
	RtpMidiServer_SendMidiSongPositionPointer_m53D1A057F3EC1F19F4AD2865886F2DA481D0A2A1,
	RtpMidiServer_SendMidiTuneRequest_mFE3881965DCADFF21F7A523C0C684CA9EC65B11F,
	RtpMidiServer_SendMidiTimingClock_m0FDBB88768A70E14D55DD5E76EE941B6EB8DEED7,
	RtpMidiServer_SendMidiStart_m3300141A171663078145A76D7A7978D7100419BA,
	RtpMidiServer_SendMidiContinue_m963FBDE26E882DEAFDC3FB4ACB3DD3E3415DDAC8,
	RtpMidiServer_SendMidiStop_mAC386DA498744AB27A61DFDD760B07F2DBEA102D,
	RtpMidiServer_SendMidiActiveSensing_m7C679EBE0EF32BD0B19AA6B6571068B462BCE1D0,
	RtpMidiServer_SendMidiReset_m0FDCFCB1BB741BB1F8532F625E264526DD5EEC81,
	RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7,
	RtpMidiThread__ctor_m0FA37BF59644E0FBE249D1F4128DCCFD07DAFD7B,
	RtpMidiThread_Stop_m260B30396538D3A15ED98FC33870446C14A86C6C,
	U3CU3Ec__DisplayClass2_0__ctor_m03F0CCDB39111D331F97A97278F2F32CA2099F4F,
	U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m34717ACB3637517832915DE95CFE2C2C8ED5C0B8,
	NULL,
	RtpMidiParticipant_get_Synchronizing_mF60EF42DC53BEC43B3DD61D6100A6400B9A7472B,
	RtpMidiParticipant_set_Synchronizing_m85239D61ABFC5F3885A669381565911B47B58371,
	RtpMidiParticipant_get_OffsetEstimate_m49C51370146D2B3AA104E0711B8C861461EABA67,
	RtpMidiParticipant_set_OffsetEstimate_m247AF18F141787C6EA72D9F1D70F96C01963B2F0,
	RtpMidiParticipant__ctor_mF9057DE20163285A4D5484F4CB8D106D24054D2F,
	RtpMidiParticipant__cctor_m8D77592CCB5BB86F31625F94BBA66C2D5E49DB68,
	RtpMidiSession_get_Port_m31BCC9B42C314665019BE60D5C8551879C2C8A86,
	RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92,
	RtpMidiSession_set_Ssrc_m081E8D90233B36C201EB75EEE015BC983D629C42,
	RtpMidiSession__ctor_m483B4F64860D904D186DB7526513F3737E56BEB9,
	RtpMidiSession_SetMidiEventListener_mE2AD07E2C7C6E2B629B3DF4A7A1D177813331C69,
	RtpMidiSession_SetRtpMidiExceptionListener_m561A141EDFF9050CACEB0218A1E06612BA12B630,
	RtpMidiSession_SendInvite_mE9101385CC91905BF1A282B5B0FA9D9F7CADFEDC,
	RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9,
	RtpMidiSession_GetPortFromDeviceId_m38B0BC4DCB8CC70D6A8555FB664743F0D4BF7CD9,
	RtpMidiSession_GetSsrcFromDeviceId_m2ED9503BC36486711826211EF2F0B3FE64904350,
	RtpMidiSession_GetParticipantFromDeviceId_m5E9681536C0782ECA1A6F16CB340ABF0FA4B2991,
	RtpMidiSession_SendEndSession_m834BBB4F3F21141A5CFFA865313A6E3F8B406385,
	RtpMidiSession_SendEndSession_m58DC5A45D223079AE151E5AEE9ACDD621025E9E5,
	RtpMidiSession_SendSynchronization_m4487D4DE3A13E6E1BAA445C735182EF938675B40,
	RtpMidiSession_Begin_mC52BF739237C5187633D0C6E00C382EAA7C2D075,
	RtpMidiSession_End_m7863BA59945C973877C9AE0F959694CCC8F06FA6,
	RtpMidiSession_BeginTransmission_m518370F239FDC0C6178C32FEA978C2C5BC6B2B66,
	RtpMidiSession_EndTransmission_mACD6BB6A2D23510484F6EB3153DD86FF4B82F0D2,
	RtpMidiSession_Available_m87E775EAB23A0890ABEB7796FA20641EBC85D2C8,
	RtpMidiSession_Read_mD146F0D6AB1A0AA91E0E3B32687B722CAA33FA32,
	RtpMidiSession_ReadDataPackets_m68C80889F7EFDFE3FE67673C8F182D64D6F1943D,
	RtpMidiSession_ParseDataPackets_mD145D1C78EB2B83C13D2ACFF1145D73569DD5D40,
	RtpMidiSession_ReadControlPackets_mA47E6A6C787ED032324BA8A38AE2D62FC4332A5D,
	RtpMidiSession_ParseControlPackets_m8C9367D90111CFE0915D2767D4495F48A45BA00B,
	RtpMidiSession_ReceivedInvitation_m6BBDF81180387EDE2B68A603D6B4F96C7E308FAB,
	RtpMidiSession_ReceivedControlInvitation_m27CF5525C6D42C2EF3C51DE8A6C59844EA6AF086,
	RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5,
	RtpMidiSession_ReceivedDataInvitation_m40FE0CC6A950AD05F82B16549AE319088C249E23,
	RtpMidiSession_Write_mCB83C01AEF62AFF70B4E233ACC888CD5D80BE116,
	RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2,
	RtpMidiSession_WriteReceiverFeedback_m5503C97AB226E3DD17CEC685547B16944BD02E21,
	RtpMidiSession_WriteSynchronization_m27187F9AFDA0FC771DE29C843D3B3B1B5F5DBFA2,
	RtpMidiSession_WriteEndSession_m760F965A73F36677C475AE9ECC67655927C52FE0,
	RtpMidiSession_WriteRtpMidi_m468A4CB83DE0470464BB79362C21CA8D18EB67D3,
	RtpMidiSession_WriteRtpMidiBuffer_m9BDC07852AE1E47C62AD61A44CB70020988BDBD6,
	RtpMidiSession_ManageSessionInvites_m0D0C32AE1632AE3C51002EF4AD9EC317A98A1214,
	RtpMidiSession_ManageReceiverFeedback_m0E9CBA03489F02D1565D09F4BC025D8938B0B26A,
	RtpMidiSession_ManageSynchronization_mDF103B072D62660CA1D13901F38E56F00D8B7030,
	RtpMidiSession_ManageSynchronizationInitiatorInvites_m5E93887D867B6B87C76381AD83B357E6616E1D3D,
	RtpMidiSession_ManageSynchronizationInitiatorHeartBeat_mC50CB3D5B06D77F49806495F668784CB6D0A3F3E,
	RtpMidiSession_ReceivedEndSession_m58B95EA276CC742F1405E9CBD0D73A9690C7B182,
	RtpMidiSession_ReceivedSynchronization_m50146E909893CDE277963444F96314741629933D,
	RtpMidiSession_ReceivedInvitationAccepted_mAF531DF62FED1792DAD477DDC48E7CB86465E839,
	RtpMidiSession_ReceivedControlInvitationAccepted_m9D1659E908820FD4DD6AD5B15016957D727E4733,
	RtpMidiSession_ReceivedDataInvitationAccepted_mE116065321485879046AFD3AE95FF9A7630F136C,
	RtpMidiSession_GetParticipantByInitiatorToken_m6678E759B1841EB95B3445778489C06EFEEA4417,
	RtpMidiSession_ReceivedInvitationRejected_m30FDC4E5E3025E15BFEFCAA55C0E4799E52FA8D5,
	RtpMidiSession_ReceivedReceiverFeedback_m8E21FC7C788B160198541BD185DE2B06B1A287D7,
	RtpMidiSession_ReceivedBitrateReceiveLimit_m967A2C31731C73888F18EFE670184F5EFAAE4C18,
	RtpMidiSession_ReceivedMidi_mB73D360059B664A8681945D34F847DA40ADAD81B,
	RtpMidiSession_ReceivedMidi_mC7443254C4EDFD7A6E10191BF365769B65926F44,
	RtpMidiSession_ReceivedRtp_mC2621016A0CA097C6B302A38C4DE125D7D69645E,
};
extern void RtpMidiInvitation__ctor_m68479C50617FDAFD40000AFB502B685AF84B4537_AdjustorThunk (void);
extern void RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_AdjustorThunk (void);
extern void RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_AdjustorThunk (void);
extern void RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_AdjustorThunk (void);
extern void RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2_AdjustorThunk (void);
extern void RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46_AdjustorThunk (void);
extern void RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_AdjustorThunk (void);
extern void RtpMidiInvitationAccepted__ctor_mA4CB69FDD348EA904326DA286F7E43DD2EE41365_AdjustorThunk (void);
extern void RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28_AdjustorThunk (void);
extern void RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0_AdjustorThunk (void);
extern void RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53_AdjustorThunk (void);
extern void RtpMidiInvitationRejected__ctor_m2B085695B68E6489A0D2D4658830081368DA3D32_AdjustorThunk (void);
extern void RtpMidiInvitationRejected_get_InitiatorToken_m4E2C63FA156F61A6115C1EBC85C5ABAB0B29698E_AdjustorThunk (void);
extern void RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22_AdjustorThunk (void);
extern void RtpMidiInvitationRejected_get_SessionName_mA780CAAA4017F4A916FA7FBBEDFDE45BBBE6AF6D_AdjustorThunk (void);
extern void RtpMidiBitrateReceiveLimit__ctor_m899F4FB060850ED9C3E5E9B83783AF26BC7B621A_AdjustorThunk (void);
extern void RtpMidiBitrateReceiveLimit_get_Ssrc_mFDA1650FF97499413CE686A094021ED22B5C03CC_AdjustorThunk (void);
extern void RtpMidiBitrateReceiveLimit_get_BitrateLimit_m2500D86E7990624D97B4CCB49F1A287FEBED7974_AdjustorThunk (void);
extern void RtpMidiSynchronization__ctor_mA8B795137F855A1526935238789737C18A3FC848_AdjustorThunk (void);
extern void RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_AdjustorThunk (void);
extern void RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF_AdjustorThunk (void);
extern void RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D_AdjustorThunk (void);
extern void RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_AdjustorThunk (void);
extern void RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_AdjustorThunk (void);
extern void RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4_AdjustorThunk (void);
extern void RtpMidiReceiverFeedback__ctor_mEC938661E354EF7F2D0BCC617B6B4D5EAFC46DA1_AdjustorThunk (void);
extern void RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_AdjustorThunk (void);
extern void RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174_AdjustorThunk (void);
extern void RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B_AdjustorThunk (void);
extern void RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED_AdjustorThunk (void);
extern void RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D_AdjustorThunk (void);
extern void RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_AdjustorThunk (void);
extern void RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[33] = 
{
	{ 0x06000024, RtpMidiInvitation__ctor_m68479C50617FDAFD40000AFB502B685AF84B4537_AdjustorThunk },
	{ 0x06000025, RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_AdjustorThunk },
	{ 0x06000026, RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_AdjustorThunk },
	{ 0x06000027, RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_AdjustorThunk },
	{ 0x06000028, RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2_AdjustorThunk },
	{ 0x06000029, RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46_AdjustorThunk },
	{ 0x0600002A, RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_AdjustorThunk },
	{ 0x0600002B, RtpMidiInvitationAccepted__ctor_mA4CB69FDD348EA904326DA286F7E43DD2EE41365_AdjustorThunk },
	{ 0x0600002C, RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28_AdjustorThunk },
	{ 0x0600002D, RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0_AdjustorThunk },
	{ 0x0600002E, RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53_AdjustorThunk },
	{ 0x0600002F, RtpMidiInvitationRejected__ctor_m2B085695B68E6489A0D2D4658830081368DA3D32_AdjustorThunk },
	{ 0x06000030, RtpMidiInvitationRejected_get_InitiatorToken_m4E2C63FA156F61A6115C1EBC85C5ABAB0B29698E_AdjustorThunk },
	{ 0x06000031, RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22_AdjustorThunk },
	{ 0x06000032, RtpMidiInvitationRejected_get_SessionName_mA780CAAA4017F4A916FA7FBBEDFDE45BBBE6AF6D_AdjustorThunk },
	{ 0x06000033, RtpMidiBitrateReceiveLimit__ctor_m899F4FB060850ED9C3E5E9B83783AF26BC7B621A_AdjustorThunk },
	{ 0x06000034, RtpMidiBitrateReceiveLimit_get_Ssrc_mFDA1650FF97499413CE686A094021ED22B5C03CC_AdjustorThunk },
	{ 0x06000035, RtpMidiBitrateReceiveLimit_get_BitrateLimit_m2500D86E7990624D97B4CCB49F1A287FEBED7974_AdjustorThunk },
	{ 0x06000036, RtpMidiSynchronization__ctor_mA8B795137F855A1526935238789737C18A3FC848_AdjustorThunk },
	{ 0x06000037, RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_AdjustorThunk },
	{ 0x06000038, RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF_AdjustorThunk },
	{ 0x06000039, RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D_AdjustorThunk },
	{ 0x0600003A, RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_AdjustorThunk },
	{ 0x0600003B, RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_AdjustorThunk },
	{ 0x0600003C, RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4_AdjustorThunk },
	{ 0x0600003D, RtpMidiReceiverFeedback__ctor_mEC938661E354EF7F2D0BCC617B6B4D5EAFC46DA1_AdjustorThunk },
	{ 0x0600003E, RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_AdjustorThunk },
	{ 0x0600003F, RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174_AdjustorThunk },
	{ 0x06000040, RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B_AdjustorThunk },
	{ 0x06000041, RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED_AdjustorThunk },
	{ 0x06000042, RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D_AdjustorThunk },
	{ 0x06000043, RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_AdjustorThunk },
	{ 0x06000044, RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_AdjustorThunk },
};
static const int32_t s_InvokerIndices[158] = 
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
	0,
	0,
	0,
	0,
	0,
	6263,
	7661,
	7661,
	7661,
	11914,
	7826,
	11969,
	6298,
	2470,
	2470,
	5235,
	1403,
	4525,
	2470,
	6298,
	2469,
	11969,
	1814,
	7660,
	6263,
	7660,
	6263,
	7696,
	6298,
	1814,
	7660,
	7660,
	7696,
	1814,
	7660,
	7660,
	7696,
	3230,
	7660,
	7660,
	1800,
	7660,
	6263,
	7586,
	6186,
	7696,
	6298,
	3229,
	7660,
	6263,
	7659,
	6262,
	3230,
	7660,
	7660,
	0,
	0,
	5586,
	1243,
	6298,
	7826,
	7586,
	7826,
	1238,
	1238,
	1238,
	1238,
	1876,
	1876,
	1876,
	3538,
	3533,
	3533,
	3533,
	6298,
	6298,
	6298,
	6298,
	6298,
	6298,
	6298,
	3538,
	6298,
	7826,
	7826,
	7826,
	0,
	7586,
	6186,
	7661,
	6264,
	3538,
	11969,
	7660,
	7660,
	6263,
	1879,
	6298,
	6298,
	4525,
	5586,
	11305,
	11013,
	5586,
	7826,
	6298,
	6298,
	7826,
	7826,
	4525,
	6298,
	5235,
	4525,
	7826,
	6298,
	7660,
	7826,
	3591,
	6334,
	5580,
	6334,
	3521,
	1276,
	3547,
	3548,
	3546,
	6298,
	6298,
	7826,
	7826,
	7826,
	4525,
	6298,
	6333,
	6338,
	3592,
	6335,
	6335,
	5580,
	6336,
	6337,
	6332,
	6186,
	1879,
	6331,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_jp_kshoji_rtpmidi_CodeGenModule;
const Il2CppCodeGenModule g_jp_kshoji_rtpmidi_CodeGenModule = 
{
	"jp.kshoji.rtpmidi.dll",
	158,
	s_methodPointers,
	33,
	s_adjustorThunks,
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
