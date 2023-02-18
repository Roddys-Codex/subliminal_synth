#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>
struct Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.List`1<AudioClipBass24>
struct List_1_tB1E679AD4D38E75797FFAE915463BCE160D8F76E;
// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>
struct List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>
struct NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149;
// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1/NoteT<ForieroEngine.MIDIUnified.Plugins.MidiMessage>
struct NoteT_tB69BC07B2B627E9B358AF56BF6231045194919C0;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// Un4seen.Bass.AddOn.Midi.BASS_MIDI_FONT[]
struct BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioClipBass24
struct AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71;
// AudioSourceBass24
struct AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Un4seen.Bass.AddOn.Enc.ENCODEPROC
struct ENCODEPROC_t529AC7CECBB4A6C52A2BA99E73F40B65C1463423;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ForieroEngine.MIDIUnified.Plugins.IMidiDevice
struct IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1;
// ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice
struct IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19;
// ForieroEngine.MIDIUnified.Plugins.IMidiOUTDevice
struct IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// MIDISettings
struct MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID
struct MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607;
// ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE
struct MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196;
// ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID
struct MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352;
// ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE
struct MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Un4seen.Bass.SYNCPROC
struct SYNCPROC_t3FD6564C701F16D9C8D0E6FBFF31D453A73DFCAC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// MIDISettings/MidiInputSettings
struct MidiInputSettings_tAF471FCEC03F1C442F59D9938D9F8AD78238208F;
// MIDISettings/MidiInstrumentsSettings
struct MidiInstrumentsSettings_t1B8EF89FB3C43C3FD8BB03A8E62E0FD35949B7B6;
// MIDISettings/MidiKeyboardInputSettings
struct MidiKeyboardInputSettings_tF8F3F7288F6E1BFE3A39BD6A013E6A705DEB7499;
// MIDISettings/MidiOutputSettings
struct MidiOutputSettings_t4BF1952F93BAF55CF10F7227C417BFD6AD2D01C5;
// MIDISettings/MidiPlaymakerInputSettings
struct MidiPlaymakerInputSettings_t5304FA438D5B77A77617E1CAF8FE58EF75493C24;
// ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ForieroEngineExtensions_t2EAA6E289E0B71711C758A884AA6562A249F7863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral096337ABDF61BE0AFAB9B9D782471249FB163DEE;
IL2CPP_EXTERN_C String_t* _stringLiteral1092046D2432FA58A38E8CF511BF553D9973668A;
IL2CPP_EXTERN_C String_t* _stringLiteral12B871CDB68C91018FA0666FBFABF1FBC025A5E5;
IL2CPP_EXTERN_C String_t* _stringLiteral1586A6AA5864E5E6DE4F613A00FC4FA896BA8CEA;
IL2CPP_EXTERN_C String_t* _stringLiteral22F0D5E4C73FDB1CC93C433264B3EEB647FC8887;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24F5F813B5553DCE97BED2B38E7916EFCEAD1662;
IL2CPP_EXTERN_C String_t* _stringLiteral2D2AF143890DFF0B9CFDFD4807F8D79958DCD17F;
IL2CPP_EXTERN_C String_t* _stringLiteral3107BBA8540BCCB08501B1DE01852D9BE4CBCDC2;
IL2CPP_EXTERN_C String_t* _stringLiteral3C74EE53B1AF65557F9BDF1EAF0C416BADC79DB9;
IL2CPP_EXTERN_C String_t* _stringLiteral3CD345253F9878B88276F1C2C5A91911C419FF5B;
IL2CPP_EXTERN_C String_t* _stringLiteral4273EF9CB477BFB57085C60BD43CC55EEA609E59;
IL2CPP_EXTERN_C String_t* _stringLiteral43A371BA9EAD3F152A2D893D2C212EDBD64DB4D0;
IL2CPP_EXTERN_C String_t* _stringLiteral44ACD1FE59D6ECAE6C5C355170F9AD8F0A295AF4;
IL2CPP_EXTERN_C String_t* _stringLiteral51AC8AB7EDCBC23D8A39ACDE7B30FBAB6B719D36;
IL2CPP_EXTERN_C String_t* _stringLiteral549E092FA757B20353BE7B6B56A82D9BDC5BB2CC;
IL2CPP_EXTERN_C String_t* _stringLiteral5A7D5B62ECF2AEDF540C508125DBC431BBA3EE74;
IL2CPP_EXTERN_C String_t* _stringLiteral5C48882D3E7C40CECB2423A087ED1E46E60166B9;
IL2CPP_EXTERN_C String_t* _stringLiteral5EDCDAA07CE9C5D2FDE677FF61317300F043F7D5;
IL2CPP_EXTERN_C String_t* _stringLiteral6B11AA0B5D8E692323923F7AE908FEEC38913467;
IL2CPP_EXTERN_C String_t* _stringLiteral6C5FDF1937BC9A4D9C27A95437C19036532B2EB0;
IL2CPP_EXTERN_C String_t* _stringLiteral70ADCD6FBAC1B27833FD9427753B62F86319A827;
IL2CPP_EXTERN_C String_t* _stringLiteral70C3208D68534E10EDDDDF84F2406FE55CFBB08A;
IL2CPP_EXTERN_C String_t* _stringLiteral96E86163C1CCBE54182D19B366160B9DDA8B6B5A;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC08BED511D92683BA126F75A16D4E530CA6681;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0D012E15EC76778603E614B27D347BC092EAB0;
IL2CPP_EXTERN_C String_t* _stringLiteral9D21C5A7640248157EE9BF42D6074B11B3031C4C;
IL2CPP_EXTERN_C String_t* _stringLiteral9EA1779715C3B398E93C925B7FE0872BE6BC7385;
IL2CPP_EXTERN_C String_t* _stringLiteralA1E532619F54874E046D40D48FB4EFDC8B5ECD3E;
IL2CPP_EXTERN_C String_t* _stringLiteralB1D90842ECCB57CAF36F53172C3AC044CD8772B7;
IL2CPP_EXTERN_C String_t* _stringLiteralB511D0A10B2F4B8AC168C6AD2CA5FDEB2410F4DC;
IL2CPP_EXTERN_C String_t* _stringLiteralD0304E037333ADD63DA958D216D2258D971E7A2C;
IL2CPP_EXTERN_C String_t* _stringLiteralD483783AD1B0A3556D04C959A4DB869D3CE4A73E;
IL2CPP_EXTERN_C String_t* _stringLiteralD857983CB6F3E4D2C60DE8914CC9627DF44D1CCB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF60C4BD61933EFE4F42954BD1522D56C0E9D9BD4;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisSByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_mE3F66AC293CE329D2B3BC8B9F4866623AA3F6C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303_m27C527DC61006832BD8E32F50E1D3A5CA7ECB691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MidiThread_MidiOutThread_m27934A43F24AED93986600F6A29C882851C8A23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_mA6BDA8B1D9426DD847A2837B1FE97900DCDC7489_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin
struct BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475  : public RuntimeObject
{
};

struct BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields
{
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::recordingStream
	int32_t ___recordingStream_0;
	// AudioSourceBass24 ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::audioSourceBass24
	AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* ___audioSourceBass24_1;
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::soundFont
	int32_t ___soundFont_2;
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::midiStream
	int32_t ___midiStream_3;
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::mixerStream
	int32_t ___mixerStream_4;
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::sampleRate
	int32_t ___sampleRate_5;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID
struct MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607  : public RuntimeObject
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE
struct MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196  : public RuntimeObject
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID
struct MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352  : public RuntimeObject
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE
struct MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3  : public RuntimeObject
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin
struct MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739  : public RuntimeObject
{
};

struct MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields
{
	// ForieroEngine.MIDIUnified.Plugins.IMidiOUTDevice ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::iMidiOUTDevice
	RuntimeObject* ___iMidiOUTDevice_0;
	// ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::iMidiEditorDevice
	RuntimeObject* ___iMidiEditorDevice_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::initialized
	bool ___initialized_2;
	// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::connectedDevices
	List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* ___connectedDevices_3;
	// System.Collections.Generic.List`1<System.String> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::deviceNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___deviceNames_4;
	// ForieroEngine.MIDIUnified.Plugins.IMidiDevice ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::iMidiDevice
	RuntimeObject* ___iMidiDevice_5;
	// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::connectedEditorDevices
	List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* ___connectedEditorDevices_6;
	// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::OnDeviceConnected
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* ___OnDeviceConnected_7;
	// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::OnEditorDeviceConnected
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* ___OnEditorDeviceConnected_8;
	// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::OnDeviceDisconnected
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* ___OnDeviceDisconnected_9;
	// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::OnEditorDeviceDisconnected
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* ___OnEditorDeviceDisconnected_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::threaded
	bool ___threaded_11;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::sleep
	int32_t ___sleep_12;
	// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::Messages
	NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* ___Messages_13;
};

// ForieroEngine.MIDIUnified.Plugins.MidiPlugin
struct MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4  : public RuntimeObject
{
};

struct MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields
{
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiPlugin::_initCalled
	bool ____initCalled_1;
	// UnityEngine.AndroidJavaObject ForieroEngine.MIDIUnified.Plugins.MidiPlugin::_midiPlugin
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____midiPlugin_2;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiPlugin::_isInitialized
	bool ____isInitialized_3;
	// System.SByte[] ForieroEngine.MIDIUnified.Plugins.MidiPlugin::_midiMessage
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ____midiMessage_11;
	// System.Byte[] ForieroEngine.MIDIUnified.Plugins.MidiPlugin::_midiMessageByte
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____midiMessageByte_12;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7  : public RuntimeObject
{
	// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0::name
	String_t* ___name_0;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0::editor
	bool ___editor_1;
};

// ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/MidiThread
struct MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD  : public RuntimeObject
{
};

struct MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields
{
	// System.Threading.Thread ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/MidiThread::_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____thread_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/MidiThread::_terminating
	bool ____terminating_1;
};

// ForieroEngine.MIDIUnified.Recording.Recorders/Synth
struct Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F  : public RuntimeObject
{
};

struct Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_StaticFields
{
	// System.String ForieroEngine.MIDIUnified.Recording.Recorders/Synth::fileName
	String_t* ___fileName_0;
};

// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1/PointerT<ForieroEngine.MIDIUnified.Plugins.MidiMessage>
struct PointerT_t83E6D113A382A31C119569B5966198BDD9A6A865 
{
	// System.Int64 ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1/PointerT::count
	int64_t ___count_0;
	// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1/NoteT<T> ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1/PointerT::ptr
	NoteT_tB69BC07B2B627E9B358AF56BF6231045194919C0* ___ptr_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
};

struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_39;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// Un4seen.Bass.AddOn.Midi.BASS_MIDI_FONT
struct BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 
{
	// System.Int32 Un4seen.Bass.AddOn.Midi.BASS_MIDI_FONT::font
	int32_t ___font_0;
	// System.Int32 Un4seen.Bass.AddOn.Midi.BASS_MIDI_FONT::preset
	int32_t ___preset_1;
	// System.Int32 Un4seen.Bass.AddOn.Midi.BASS_MIDI_FONT::bank
	int32_t ___bank_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// ForieroEngine.MIDIUnified.Plugins.MidiMessage
struct MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 
{
	// System.Byte ForieroEngine.MIDIUnified.Plugins.MidiMessage::CommandAndChannel
	uint8_t ___CommandAndChannel_0;
	// System.Byte ForieroEngine.MIDIUnified.Plugins.MidiMessage::Data1
	uint8_t ___Data1_1;
	// System.Byte ForieroEngine.MIDIUnified.Plugins.MidiMessage::Data2
	uint8_t ___Data2_2;
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiMessage::DataSize
	int32_t ___DataSize_3;
	// System.Byte[] ForieroEngine.MIDIUnified.Plugins.MidiMessage::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_4;
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiMessage::DeviceId
	int32_t ___DeviceId_5;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiMessage::Editor
	bool ___Editor_6;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiMessage::Through
	bool ___Through_7;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiMessage::Synth
	bool ___Synth_8;
	// System.Double ForieroEngine.MIDIUnified.Plugins.MidiMessage::Time
	double ___Time_9;
};
// Native definition for P/Invoke marshalling of ForieroEngine.MIDIUnified.Plugins.MidiMessage
struct MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke
{
	uint8_t ___CommandAndChannel_0;
	uint8_t ___Data1_1;
	uint8_t ___Data2_2;
	int32_t ___DataSize_3;
	Il2CppSafeArray/*NONE*/* ___Data_4;
	int32_t ___DeviceId_5;
	int32_t ___Editor_6;
	int32_t ___Through_7;
	int32_t ___Synth_8;
	double ___Time_9;
};
// Native definition for COM marshalling of ForieroEngine.MIDIUnified.Plugins.MidiMessage
struct MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com
{
	uint8_t ___CommandAndChannel_0;
	uint8_t ___Data1_1;
	uint8_t ___Data2_2;
	int32_t ___DataSize_3;
	Il2CppSafeArray/*NONE*/* ___Data_4;
	int32_t ___DeviceId_5;
	int32_t ___Editor_6;
	int32_t ___Through_7;
	int32_t ___Synth_8;
	double ___Time_9;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_tF40B3DF9441CAC485BF5B4FF9E3629F1900090EF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tF40B3DF9441CAC485BF5B4FF9E3629F1900090EF__padding[6];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t4B8C3E0F3FC757FB42277D9BB42B3D517530393C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t4B8C3E0F3FC757FB42277D9BB42B3D517530393C__padding[64];
	};
};
#pragma pack(pop, tp)

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_defaultResultTask_0;
};

// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>
struct NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149  : public RuntimeObject
{
	// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1/PointerT<T> ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1::Head
	PointerT_t83E6D113A382A31C119569B5966198BDD9A6A865 ___Head_0;
	// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1/PointerT<T> ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1::Tail
	PointerT_t83E6D113A382A31C119569B5966198BDD9A6A865 ___Tail_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tC6D78AD124EF780350CBCFB3A8EFBA0E2533BF81  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tC6D78AD124EF780350CBCFB3A8EFBA0E2533BF81_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::41F1564F7396603F9563E595C53F699098E16F02392763F88912E28A8E3D58FD
	__StaticArrayInitTypeSizeU3D6_tF40B3DF9441CAC485BF5B4FF9E3629F1900090EF ___41F1564F7396603F9563E595C53F699098E16F02392763F88912E28A8E3D58FD_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::9628E545ED3AC074E5A6CBF542A642B62482FBFCA9B4CB3EA4743A1874256E37
	__StaticArrayInitTypeSizeU3D64_t4B8C3E0F3FC757FB42277D9BB42B3D517530393C ___9628E545ED3AC074E5A6CBF542A642B62482FBFCA9B4CB3EA4743A1874256E37_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::A989E4C2B19D0E52B608057D003B99B998F789A6D456146BC4691053BD6471D6
	__StaticArrayInitTypeSizeU3D64_t4B8C3E0F3FC757FB42277D9BB42B3D517530393C ___A989E4C2B19D0E52B608057D003B99B998F789A6D456146BC4691053BD6471D6_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// AudioClipBass24
struct AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71  : public RuntimeObject
{
	// System.Int32 AudioClipBass24::<stream>k__BackingField
	int32_t ___U3CstreamU3Ek__BackingField_1;
	// System.Int32 AudioClipBass24::<streamFX>k__BackingField
	int32_t ___U3CstreamFXU3Ek__BackingField_2;
	// System.Boolean AudioClipBass24::<decoding>k__BackingField
	bool ___U3CdecodingU3Ek__BackingField_3;
	// System.Runtime.InteropServices.GCHandle AudioClipBass24::memhandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___memhandle_4;
	// System.Int32 AudioClipBass24::syncHandle
	int32_t ___syncHandle_5;
	// System.Boolean AudioClipBass24::<loaded>k__BackingField
	bool ___U3CloadedU3Ek__BackingField_6;
	// System.Single[] AudioClipBass24::_samples
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____samples_7;
};

struct AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71_StaticFields
{
	// System.Collections.Generic.List`1<AudioClipBass24> AudioClipBass24::clips
	List_1_tB1E679AD4D38E75797FFAE915463BCE160D8F76E* ___clips_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25
struct U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710 
{
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::<>t__builder
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ___U3CU3Et__builder_1;
	// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::name
	String_t* ___name_2;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::editor
	bool ___editor_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::<>u__1
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E ___U3CU3Eu__1_4;
};

// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD  : public MulticastDelegate_t
{
};

// ForieroEngine.Settings.Settings`1<MIDISettings>
struct Settings_1_tF643B54E415824FAE4B439FD4527A1857E93A2DB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

struct Settings_1_tF643B54E415824FAE4B439FD4527A1857E93A2DB_StaticFields
{
	// T ForieroEngine.Settings.Settings`1::_instance
	MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* ____instance_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Un4seen.Bass.AddOn.Enc.ENCODEPROC
struct ENCODEPROC_t529AC7CECBB4A6C52A2BA99E73F40B65C1463423  : public MulticastDelegate_t
{
};

// Un4seen.Bass.SYNCPROC
struct SYNCPROC_t3FD6564C701F16D9C8D0E6FBFF31D453A73DFCAC  : public MulticastDelegate_t
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// MIDISettings
struct MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E  : public Settings_1_tF643B54E415824FAE4B439FD4527A1857E93A2DB
{
	// System.Boolean MIDISettings::debug
	bool ___debug_5;
	// System.Boolean MIDISettings::initialize
	bool ___initialize_7;
	// System.String MIDISettings::appId
	String_t* ___appId_8;
	// System.Boolean MIDISettings::forceDefaultMidiIn
	bool ___forceDefaultMidiIn_9;
	// System.Int32 MIDISettings::defaultMidiIn
	int32_t ___defaultMidiIn_10;
	// System.String[] MIDISettings::virtualIns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___virtualIns_11;
	// System.Boolean MIDISettings::forceDefaultMidiOut
	bool ___forceDefaultMidiOut_12;
	// System.Int32 MIDISettings::defaultMidiOut
	int32_t ___defaultMidiOut_13;
	// System.String[] MIDISettings::virtualOuts
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___virtualOuts_14;
	// System.Boolean MIDISettings::midiInOutExclusive
	bool ___midiInOutExclusive_15;
	// System.Boolean MIDISettings::watchInfiniteLoop
	bool ___watchInfiniteLoop_16;
	// System.Int32 MIDISettings::infiniteLoopThreshold
	int32_t ___infiniteLoopThreshold_17;
	// System.Int32 MIDISettings::synthChannelMask
	int32_t ___synthChannelMask_18;
	// System.Int32 MIDISettings::channelMask
	int32_t ___channelMask_19;
	// System.Boolean MIDISettings::ignoreProgramMessages
	bool ___ignoreProgramMessages_20;
	// MIDISettings/MidiInstrumentsSettings MIDISettings::instrumentsSettings
	MidiInstrumentsSettings_t1B8EF89FB3C43C3FD8BB03A8E62E0FD35949B7B6* ___instrumentsSettings_21;
	// MIDISettings/MidiInputSettings MIDISettings::inputSettings
	MidiInputSettings_tAF471FCEC03F1C442F59D9938D9F8AD78238208F* ___inputSettings_22;
	// MIDISettings/MidiOutputSettings MIDISettings::outputSettings
	MidiOutputSettings_t4BF1952F93BAF55CF10F7227C417BFD6AD2D01C5* ___outputSettings_23;
	// MIDISettings/MidiKeyboardInputSettings MIDISettings::keyboardSettings
	MidiKeyboardInputSettings_tF8F3F7288F6E1BFE3A39BD6A013E6A705DEB7499* ___keyboardSettings_24;
	// MIDISettings/MidiPlaymakerInputSettings MIDISettings::playmakerSettings
	MidiPlaymakerInputSettings_t5304FA438D5B77A77617E1CAF8FE58EF75493C24* ___playmakerSettings_25;
};

struct MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_StaticFields
{
	// System.String MIDISettings::soundFontPersistentPath
	String_t* ___soundFontPersistentPath_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioSourceBass24
struct AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AudioClipBass24 AudioSourceBass24::_clipBass24
	AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* ____clipBass24_4;
	// UnityEngine.AudioClip AudioSourceBass24::_clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____clip_5;
	// UnityEngine.AudioClip AudioSourceBass24::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_6;
	// System.Boolean AudioSourceBass24::loop
	bool ___loop_7;
	// System.Boolean AudioSourceBass24::playOnAwake
	bool ___playOnAwake_8;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) AudioSourceBass24::speed
	float ___speed_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) AudioSourceBass24::semitone
	int32_t ___semitone_10;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) AudioSourceBass24::panStereo
	float ___panStereo_11;
	// System.Single AudioSourceBass24::volume
	float ___volume_12;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) AudioSourceBass24::_time
	float ____time_13;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) AudioSourceBass24::_terminate
	bool ____terminate_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) AudioSourceBass24::_running
	bool ____running_15;
	// System.Threading.Tasks.Task AudioSourceBass24::_timeTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____timeTask_16;
	// ForieroEngine.MIDIUnified.Interfaces.AudioSourceState modreq(System.Runtime.CompilerServices.IsVolatile) AudioSourceBass24::state
	int32_t ___state_17;
	// System.Boolean AudioSourceBass24::mute
	bool ___mute_18;
	// System.Int32 AudioSourceBass24::_lastSemiton
	int32_t ____lastSemiton_19;
	// System.Single AudioSourceBass24::_lastSpeedVal
	float ____lastSpeedVal_20;
	// System.Single AudioSourceBass24::_lastPanStereo
	float ____lastPanStereo_21;
	// System.Single AudioSourceBass24::_lastVolume
	float ____lastVolume_22;
	// System.Boolean AudioSourceBass24::<PlayOnAwake>k__BackingField
	bool ___U3CPlayOnAwakeU3Ek__BackingField_23;
	// System.Boolean AudioSourceBass24::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_24;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Un4seen.Bass.AddOn.Midi.BASS_MIDI_FONT[]
struct BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB  : public RuntimeArray
{
	ALIGN_FIELD (8) BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 m_Items[1];

	inline BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 value)
	{
		m_Items[index] = value;
	}
};


// T ForieroEngine.Settings.Settings`1<System.Object>::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Settings_1_get_instance_m6B0E81FCF5E4BFECAA24B2B5D0D7C99D03B9E281_gshared (const RuntimeMethod* method) ;
// System.Boolean ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>::Dequeue(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_gshared (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* ___t0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Int32>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___function0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___awaiter0, U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, int32_t ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<System.Byte>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC_gshared (uint8_t ___structure0, const RuntimeMethod* method) ;

// T ForieroEngine.Settings.Settings`1<MIDISettings>::get_instance()
inline MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D (const RuntimeMethod* method)
{
	return ((  MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* (*) (const RuntimeMethod*))Settings_1_get_instance_m6B0E81FCF5E4BFECAA24B2B5D0D7C99D03B9E281_gshared)(method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4 (const RuntimeMethod* method) ;
// System.Boolean ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>::Dequeue(T&)
inline bool NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* ___t0, const RuntimeMethod* method)
{
	return ((  bool (*) (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149*, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*, const RuntimeMethod*))NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_gshared)(__this, ___t0, method);
}
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::DetachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_DetachCurrentThread_mC0F3D8974C0681528B801EF0AC2A54E5C7A2E933 (const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mCD9D158A4F6EA6F04B3E9297A5C4EA598580C151 (U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1 (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Int32>(System.Func`1<TResult>)
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134 (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, const RuntimeMethod*))Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_gshared)(___function0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
inline TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643 (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___awaiter0, U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80 (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, int32_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, int32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_gshared)(__this, ___result0, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25_MoveNext_m8AD70563E412764CC1C5BB23708476BAD3425AD6 (U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_gshared)(__this, ___stateMachine0, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25_SetStateMachine_m804EAB9FB2805B81E6FF31748EDD5FC38C0A8F75 (U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiPlugin::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiPlugin_Init_m49918B953F45588947A896EF343537769524EA29 (const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_ConnectDevice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIIN_ConnectDevice_m5B88FA70DE3B70BE0B803CC096652173D1AFB28E (int32_t ___deviceIndex0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_DisconnectDevice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPlugin_MIDIIN_DisconnectDevice_m10A38265F8FBC0FAE76C2CA752E2DE7635B205FA (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_DisconnectDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPlugin_MIDIIN_DisconnectDevices_m8284F46C96CBA318213679B54E1875B67FE88533 (const RuntimeMethod* method) ;
// System.String ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_DeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiPlugin_MIDIIN_DeviceName_mA37727D0B1C318A8FBEA4F503E778B6F65BF3112 (int32_t ___deviceIndex0, const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_DeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIIN_DeviceCount_m982168668469CA61ED0CE8499C55A92C48D9C9DB (const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_PopMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIIN_PopMessage_m68185DA31D0199E6D6105B0BFDF7A7C11799A5F9 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* ___aMidiMessage0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::.ctor(ForieroEngine.MIDIUnified.Plugins.MidiMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage__ctor_m284DA3500B17BE6E96E7C522CE5C1272434F9106 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___m0, const RuntimeMethod* method) ;
// System.Double UnityEngine.AudioSettings::get_dspTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA (const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_ConnectDevice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIOUT_ConnectDevice_mBCA19DE849A907B9CB7C7108DE783679109DE4ED (int32_t ___deviceIndex0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_DisconnectDevice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPlugin_MIDIOUT_DisconnectDevice_m2119D85339D78C6F3D81E5ABE61447671AFDB53B (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_DisconnectDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPlugin_MIDIOUT_DisconnectDevices_mE057FE3BE4FF59B9B00D5D0F7D7440CB9BD6802C (const RuntimeMethod* method) ;
// System.String ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_DeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiPlugin_MIDIOUT_DeviceName_mE69832A6A62DBE96949A4B50AA9C647AC6647BAF (int32_t ___deviceIndex0, const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_DeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIOUT_DeviceCount_mC19679C786D0E18A26444DD864A111999602657D (const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIOUT_SendData_m3C2FA1D2E9551FF5283B80FACFFC0BC0E5E16743 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___deviceId1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___methodName0, ___args1, method);
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.SByte[]>(System.String)
inline SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJavaObject_GetStatic_TisSByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_mE3F66AC293CE329D2B3BC8B9F4866623AA3F6C29 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.Byte[] ForieroEngine.Extensions.ForieroEngineExtensions::ToByte(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ForieroEngineExtensions_ToByte_mC9906595B0300BDFC30AF21A3F62BF4AF2B87F7B (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___array0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<AudioSourceBass24>()
inline AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* GameObject_AddComponent_TisAudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303_m27C527DC61006832BD8E32F50E1D3A5CA7ECB691 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void AudioSourceBass24::Init(UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourceBass24_Init_mBB0FD86FD8981134ADB08052E1E7809C239B12EB (AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___c0, bool ___decoding1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String ForieroEngine.Extensions.ForieroEngineExtensions::PrependPersistentPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ForieroEngineExtensions_PrependPersistentPath_m1B0612959C76A78735CD9F644D195DDB43E2E5F7 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::CreateAudioSourceBass24()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin_CreateAudioSourceBass24_mE2BEF92287E68114E77EA1CF744295C27A06D5FB (const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::InitRecordingClip(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin_InitRecordingClip_m22A7B48ACD9CC796C8A8329F9845D7CAE9E8E1D0 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) ;
// System.Void AudioSourceBass24::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourceBass24_Play_m3043DE22922D440A60CA4CA81B36CD62931EA92A (AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* __this, const RuntimeMethod* method) ;
// AudioClipBass24 AudioSourceBass24::get_clipBass24()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline (AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* __this, const RuntimeMethod* method) ;
// System.Int32 AudioClipBass24::get_streamFX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AudioClipBass24_get_streamFX_mF06BADA66EC1B910602C081525E1B3F6B88D82B4_inline (AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* __this, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.AddOn.Mix.BassMix::BASS_Mixer_StreamAddChannel(System.Int32,System.Int32,Un4seen.Bass.BASSFlag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BassMix_BASS_Mixer_StreamAddChannel_m4FEFD351DAAED588204EB86FE20A00C9BB3DB878 (int32_t ___handle0, int32_t ___channel1, int32_t ___flags2, const RuntimeMethod* method) ;
// Un4seen.Bass.BASSError Un4seen.Bass.Bass::BASS_ErrorGetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.AddOn.Mix.BassMix::BASS_Mixer_ChannelSetPosition(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BassMix_BASS_Mixer_ChannelSetPosition_m1EBC698B2D523C9153521D1B92E026BA186AB296 (int32_t ___handle0, int64_t ___pos1, const RuntimeMethod* method) ;
// System.Int32 Un4seen.Bass.AddOn.Enc.BassEnc::BASS_Encode_Start(System.Int32,System.String,Un4seen.Bass.AddOn.Enc.BASSEncode,Un4seen.Bass.AddOn.Enc.ENCODEPROC,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BassEnc_BASS_Encode_Start_m54D13AA23812CD37CD37CFE7855C31F55CCF54E2 (int32_t ___handle0, String_t* ___cmdline1, int32_t ___flags2, ENCODEPROC_t529AC7CECBB4A6C52A2BA99E73F40B65C1463423* ___proc3, intptr_t ___user4, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.AddOn.Enc.BassEnc::BASS_Encode_Stop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BassEnc_BASS_Encode_Stop_m1253D2F1574202CD2B3222E5A0614512EC064793 (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.AddOn.Mix.BassMix::BASS_Mixer_ChannelRemove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BassMix_BASS_Mixer_ChannelRemove_m10060426656E788BC557910731217BDBF5AF4B03 (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Void AudioSourceBass24::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourceBass24_Stop_mA6EC7A0B8960B7585C46C4881FEA3BEB35AB10A1 (AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* __this, const RuntimeMethod* method) ;
// System.Boolean MIDISettings::get_IsDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MIDISettings_get_IsDebug_m40FF4D03A775F32E7B19A859459131597B5D0D26 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void MIDISoundSettings::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MIDISoundSettings_Init_m06E70FA98A19AE50645DA9D4C4730667BEBD9D9F (int32_t ___sampleRate0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Un4seen.Bass.AddOn.Midi.BassMidi::BASS_MIDI_StreamCreate(System.Int32,Un4seen.Bass.BASSFlag,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BassMidi_BASS_MIDI_StreamCreate_m8F1B006FFE5773C06006F5FFBCB6FE663760C685 (int32_t ___channels0, int32_t ___flags1, int32_t ___freq2, const RuntimeMethod* method) ;
// System.Int32 Un4seen.Bass.AddOn.Mix.BassMix::BASS_Mixer_StreamCreate(System.Int32,System.Int32,Un4seen.Bass.BASSFlag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BassMix_BASS_Mixer_StreamCreate_mD222A1F472C854BF44135ABFE3087F8330856A3D (int32_t ___freq0, int32_t ___chans1, int32_t ___flags2, const RuntimeMethod* method) ;
// System.Int32 Un4seen.Bass.Bass::BASS_ChannelSetSync(System.Int32,Un4seen.Bass.BASSSync,System.Int64,Un4seen.Bass.SYNCPROC,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bass_BASS_ChannelSetSync_m53A003EA5B2C64BDFB8EDAA38EE0699917605987 (int32_t ___handle0, int32_t ___type1, int64_t ___param2, SYNCPROC_t3FD6564C701F16D9C8D0E6FBFF31D453A73DFCAC* ___proc3, intptr_t ___user4, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.Bass::BASS_ChannelSetAttribute(System.Int32,Un4seen.Bass.BASSAttribute,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bass_BASS_ChannelSetAttribute_m723556DB77F9C70AEFD8D9259BC72945D69F97BE (int32_t ___handle0, int32_t ___attrib1, float ___value2, const RuntimeMethod* method) ;
// System.Int32 Un4seen.Bass.AddOn.Midi.BassMidi::BASS_MIDI_FontInit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BassMidi_BASS_MIDI_FontInit_mA1FB533F47501867175E039FD7A7FB1E78F7BCA2 (String_t* ___file0, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.AddOn.Midi.BassMidi::BASS_MIDI_FontSetVolume(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BassMidi_BASS_MIDI_FontSetVolume_mDBF437DCE84B001B8BF04244875FB778CB2A18A2 (int32_t ___handle0, float ___volume1, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.AddOn.Midi.BassMidi::BASS_MIDI_StreamSetFonts(System.Int32,Un4seen.Bass.AddOn.Midi.BASS_MIDI_FONT[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BassMidi_BASS_MIDI_StreamSetFonts_m8FDC0DF697634635FA92B9C2FE828E15833BBA84 (int32_t ___handle0, BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB* ___fonts1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.AddOn.Midi.BassMidi::BASS_MIDI_FontFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BassMidi_BASS_MIDI_FontFree_mEFEBEBC5C26356C5CB8CC19AF1599EE17545B717 (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.Bass::BASS_ChannelPlay(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bass_BASS_ChannelPlay_mC64237181A39FD1AD4271B103DDD94D6530449B4 (int32_t ___handle0, bool ___restart1, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin_StopRecording_m9722A47CC1A57237F2BC0D6FCC9C080C4A6F8C12 (const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.Bass::BASS_StreamFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bass_BASS_StreamFree_m84D2A17D0E4530A6867124FDB385C6E8E42CBDDE (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Boolean Un4seen.Bass.Bass::BASS_ChannelStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bass_BASS_ChannelStop_mF9A9313E884972806824672B36A409E4678BBAB3 (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::DestroyAudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin_DestroyAudioSource_m3A5E670D3BFA5FC6A6AA585494EC54567E6EB185 (const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<System.Byte>(T)
inline int32_t Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC (uint8_t ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t, const RuntimeMethod*))Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC_gshared)(___structure0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Int32 Un4seen.Bass.AddOn.Midi.BassMidi::BASS_MIDI_StreamEvents(System.Int32,Un4seen.Bass.AddOn.Midi.BASSMIDIEventMode,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BassMidi_BASS_MIDI_StreamEvents_m6E4D15E18F89B724C10BFFE766E8BBEA308A5A43 (int32_t ___handle0, int32_t ___flags1, int32_t ___chan2, intptr_t ___events3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/MidiThread::Initialise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_Initialise_m600C30E059BA17D9FC86C3B1DA9F0120E6A322D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiThread_MidiOutThread_m27934A43F24AED93986600F6A29C882851C8A23D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral096337ABDF61BE0AFAB9B9D782471249FB163DEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_thread != null) return;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (_thread != null) return;
		return;
	}

IL_0008:
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Start");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_1;
		L_1 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = L_1->___debug_5;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral096337ABDF61BE0AFAB9B9D782471249FB163DEE, NULL);
	}

IL_001e:
	{
		// _thread = new Thread(MidiOutThread);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_3 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_3, NULL, (intptr_t)((void*)MidiThread_MidiOutThread_m27934A43F24AED93986600F6A29C882851C8A23D_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_4, L_3, NULL);
		((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0), (void*)L_4);
		// _thread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_5 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0;
		NullCheck(L_5);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_5, NULL);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/MidiThread::MidiOutThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_MidiOutThread_m27934A43F24AED93986600F6A29C882851C8A23D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4(NULL);
		// var m = new MidiMessage();
		il2cpp_codegen_initobj((&V_0), sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
	}

IL_000e:
	{
		// if (threaded)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		bool L_1 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___threaded_11;
		il2cpp_codegen_memory_barrier();
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_006e;
	}

IL_0019:
	{
		// if (m.CommandAndChannel == 0xF0) iMidiOUTDevice.SendData(m.Data, m.DeviceId, m.Editor);
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_2 = V_0;
		uint8_t L_3 = L_2.___CommandAndChannel_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)240)))))
		{
			goto IL_0045;
		}
	}
	{
		// if (m.CommandAndChannel == 0xF0) iMidiOUTDevice.SendData(m.Data, m.DeviceId, m.Editor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5.___Data_4;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_7 = V_0;
		int32_t L_8 = L_7.___DeviceId_5;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_9 = V_0;
		bool L_10 = L_9.___Editor_6;
		NullCheck(L_4);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, bool >::Invoke(1 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiOUTDevice::SendData(System.Byte[],System.Int32,System.Boolean) */, IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var, L_4, L_6, L_8, L_10);
		goto IL_006e;
	}

IL_0045:
	{
		// else iMidiOUTDevice.SendMessage(m.CommandAndChannel, m.Data1, m.Data2, m.DeviceId, m.Editor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_13 = V_0;
		uint8_t L_14 = L_13.___CommandAndChannel_0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_15 = V_0;
		uint8_t L_16 = L_15.___Data1_1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_17 = V_0;
		uint8_t L_18 = L_17.___Data2_2;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_19 = V_0;
		int32_t L_20 = L_19.___DeviceId_5;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_21 = V_0;
		bool L_22 = L_21.___Editor_6;
		NullCheck(L_12);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker5< int32_t, uint8_t, uint8_t, uint8_t, int32_t, bool >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiOUTDevice::SendMessage(System.Byte,System.Byte,System.Byte,System.Int32,System.Boolean) */, IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var, L_12, L_14, L_16, L_18, L_20, L_22);
	}

IL_006e:
	{
		// while (Messages.Dequeue(ref m))
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_24 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___Messages_13;
		NullCheck(L_24);
		bool L_25;
		L_25 = NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B(L_24, (&V_0), NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_0019;
		}
	}

IL_007c:
	{
		// Thread.Sleep(sleep);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		int32_t L_26 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___sleep_12;
		il2cpp_codegen_memory_barrier();
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(L_26, NULL);
		// } while (!_terminating);
		bool L_27 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____terminating_1;
		il2cpp_codegen_memory_barrier();
		if (!L_27)
		{
			goto IL_000e;
		}
	}
	{
		// AndroidJNI.DetachCurrentThread();
		int32_t L_28;
		L_28 = AndroidJNI_DetachCurrentThread_mC0F3D8974C0681528B801EF0AC2A54E5C7A2E933(NULL);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/MidiThread::TerminateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_TerminateInternal_m89380D2CB0350949485E486B28D58E410DD90D63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1586A6AA5864E5E6DE4F613A00FC4FA896BA8CEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F5F813B5553DCE97BED2B38E7916EFCEAD1662);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD857983CB6F3E4D2C60DE8914CC9627DF44D1CCB);
		s_Il2CppMethodInitialized = true;
	}
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B8_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B7_0 = NULL;
	{
		// if (_terminating) return;
		bool L_0 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____terminating_1;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (_terminating) return;
		return;
	}

IL_000a:
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Aborting");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_1;
		L_1 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = L_1->___debug_5;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Aborting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral24F5F813B5553DCE97BED2B38E7916EFCEAD1662, NULL);
	}

IL_0020:
	{
		// _terminating = true;
		il2cpp_codegen_memory_barrier();
		((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____terminating_1 = (bool)1;
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Joining");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_3;
		L_3 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4 = L_3->___debug_5;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Joining");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD857983CB6F3E4D2C60DE8914CC9627DF44D1CCB, NULL);
	}

IL_003e:
	{
		// _thread?.Join();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_5 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6 = L_5;
		G_B7_0 = L_6;
		if (L_6)
		{
			G_B8_0 = L_6;
			goto IL_0049;
		}
	}
	{
		goto IL_004e;
	}

IL_0049:
	{
		NullCheck(G_B8_0);
		Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F(G_B8_0, NULL);
	}

IL_004e:
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDi OUT Thread : Aborted");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_7;
		L_7 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_8 = L_7->___debug_5;
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDi OUT Thread : Aborted");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1586A6AA5864E5E6DE4F613A00FC4FA896BA8CEA, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mCD9D158A4F6EA6F04B3E9297A5C4EA598580C151 (U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0::<OpenVirtualPortAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_mA6BDA8B1D9426DD847A2837B1FE97900DCDC7489 (U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static async Task<int> OpenVirtualPortAsync(string name, bool editor = false) => await Task.Run(() => iMidiDevice.OpenVirtualPort(name, editor));
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		String_t* L_1 = __this->___name_0;
		bool L_2 = __this->___editor_1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, String_t*, bool >::Invoke(6 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::OpenVirtualPort(System.String,System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25_MoveNext_m8AD70563E412764CC1C5BB23708476BAD3425AD6 (U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_mA6BDA8B1D9426DD847A2837B1FE97900DCDC7489_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0066_1;
			}
		}
		{
			U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* L_2 = (U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass25_0__ctor_mCD9D158A4F6EA6F04B3E9297A5C4EA598580C151(L_2, NULL);
			U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* L_3 = L_2;
			String_t* L_4 = __this->___name_2;
			NullCheck(L_3);
			L_3->___name_0 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___name_0), (void*)L_4);
			U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* L_5 = L_3;
			bool L_6 = __this->___editor_3;
			NullCheck(L_5);
			L_5->___editor_1 = L_6;
			// public static async Task<int> OpenVirtualPortAsync(string name, bool editor = false) => await Task.Run(() => iMidiDevice.OpenVirtualPort(name, editor));
			Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_7 = (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*)il2cpp_codegen_object_new(Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1(L_7, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_mA6BDA8B1D9426DD847A2837B1FE97900DCDC7489_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_8;
			L_8 = Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134(L_7, Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_RuntimeMethod_var);
			NullCheck(L_8);
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_9;
			L_9 = Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843(L_8, Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var);
			V_2 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643((&V_2), TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0082_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_12 = V_2;
			__this->___U3CU3Eu__1_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951(L_13, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951_RuntimeMethod_var);
			goto IL_00b7;
		}

IL_0066_1:
		{
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_14 = __this->___U3CU3Eu__1_4;
			V_2 = L_14;
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* L_15 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0082_1:
		{
			int32_t L_17;
			L_17 = TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80((&V_2), TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var);
			V_1 = L_17;
			goto IL_00a3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008c;
		}
		throw e;
	}

CATCH_008c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b7;
	}// end catch (depth: 1)

IL_00a3:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_20 = (&__this->___U3CU3Et__builder_1);
		int32_t L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var);
	}

IL_00b7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenVirtualPortAsyncU3Ed__25_MoveNext_m8AD70563E412764CC1C5BB23708476BAD3425AD6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710*>(__this + _offset);
	U3COpenVirtualPortAsyncU3Ed__25_MoveNext_m8AD70563E412764CC1C5BB23708476BAD3425AD6(_thisAdjusted, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25_SetStateMachine_m804EAB9FB2805B81E6FF31748EDD5FC38C0A8F75 (U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenVirtualPortAsyncU3Ed__25_SetStateMachine_m804EAB9FB2805B81E6FF31748EDD5FC38C0A8F75_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710*>(__this + _offset);
	U3COpenVirtualPortAsyncU3Ed__25_SetStateMachine_m804EAB9FB2805B81E6FF31748EDD5FC38C0A8F75(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiINDeviceANDROID_Init_mE1E0CA69D93ED08B294C1123FD308AEB84FAB467 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, const RuntimeMethod* method) 
{
	{
		// public bool Init() { MidiPlugin.Init(); return true; }
		bool L_0;
		L_0 = MidiPlugin_Init_m49918B953F45588947A896EF343537769524EA29(NULL);
		// public bool Init() { MidiPlugin.Init(); return true; }
		return (bool)1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::ConnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceANDROID_ConnectDevice_m14EF8D7B657770C01FA58DF02147F3A519511996 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, int32_t ___deviceIndex0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public int ConnectDevice(int deviceIndex, bool editor = false) => MidiPlugin.MIDIIN_ConnectDevice(deviceIndex);
		int32_t L_0 = ___deviceIndex0;
		int32_t L_1;
		L_1 = MidiPlugin_MIDIIN_ConnectDevice_m5B88FA70DE3B70BE0B803CC096652173D1AFB28E(L_0, NULL);
		return L_1;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::DisconnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceANDROID_DisconnectDevice_m993347701F791AF4ED428582E7605A381A4578BA (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, int32_t ___id0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public void DisconnectDevice(int id, bool editor = false) => MidiPlugin.MIDIIN_DisconnectDevice(id);
		int32_t L_0 = ___id0;
		MidiPlugin_MIDIIN_DisconnectDevice_m10A38265F8FBC0FAE76C2CA752E2DE7635B205FA(L_0, NULL);
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::DisconnectDevices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceANDROID_DisconnectDevices_mE6A4CA6B1FCB77504A0865A1E0443767CB73678D (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, bool ___editor0, const RuntimeMethod* method) 
{
	{
		// public void DisconnectDevices(bool editor = false) => MidiPlugin.MIDIIN_DisconnectDevices();
		MidiPlugin_MIDIIN_DisconnectDevices_m8284F46C96CBA318213679B54E1875B67FE88533(NULL);
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::GetDeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiINDeviceANDROID_GetDeviceName_m420EE4F4C6271829F4A8A1104E245D1FD6D8ED42 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	{
		// public string GetDeviceName(int deviceIndex) => MidiPlugin.MIDIIN_DeviceName(deviceIndex);
		int32_t L_0 = ___deviceIndex0;
		String_t* L_1;
		L_1 = MidiPlugin_MIDIIN_DeviceName_mA37727D0B1C318A8FBEA4F503E778B6F65BF3112(L_0, NULL);
		return L_1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::GetDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceANDROID_GetDeviceCount_m3ED4B6445056B6293679CA06DEF2F7C926D6E981 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, const RuntimeMethod* method) 
{
	{
		// public int GetDeviceCount() => MidiPlugin.MIDIIN_DeviceCount();
		int32_t L_0;
		L_0 = MidiPlugin_MIDIIN_DeviceCount_m982168668469CA61ED0CE8499C55A92C48D9C9DB(NULL);
		return L_0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::OpenVirtualPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceANDROID_OpenVirtualPort_mF197BAFEC136E49F432DE2E5EBD0B71B8B7F3DCD (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, String_t* ___name0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public int OpenVirtualPort(string name, bool editor = false) => 0;
		return 0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::CloseVirtualPort(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceANDROID_CloseVirtualPort_m82B53F33FDAFF744349E7DE79E71E36A3192B1B9 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, int32_t ___deviceId0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public void CloseVirtualPort(int deviceId, bool editor = false) { }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::CloseVirtualPorts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceANDROID_CloseVirtualPorts_mDDB898CE1870CE8CD2B566196A05DEA55E193E7A (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, bool ___editor0, const RuntimeMethod* method) 
{
	{
		// public void CloseVirtualPorts(bool editor = false) { }
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::GetVirtualPortCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceANDROID_GetVirtualPortCount_mD9528F110439050B7C24F3A36EDAB6C2F506DE73 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, const RuntimeMethod* method) 
{
	{
		// public int GetVirtualPortCount() => 0;
		return 0;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::GetVirtualPortName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiINDeviceANDROID_GetVirtualPortName_m318742B721F5EFF729277B09AADECF9A74E445E4 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, int32_t ___portIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string GetVirtualPortName(int portIndex) => "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::PopMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceANDROID_PopMessage_mCF7567ECBE784E7CFBEB1AA28C682591F6F9CBBC (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* ___midiMessage0, bool ___editor1, const RuntimeMethod* method) 
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var result = MidiPlugin.MIDIIN_PopMessage(out var m);
		int32_t L_0;
		L_0 = MidiPlugin_MIDIIN_PopMessage_m68185DA31D0199E6D6105B0BFDF7A7C11799A5F9((&V_0), NULL);
		// midiMessage = new MidiMessage(m);
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_1 = ___midiMessage0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_2 = V_0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		MidiMessage__ctor_m284DA3500B17BE6E96E7C522CE5C1272434F9106((&L_3), L_2, /*hidden argument*/NULL);
		*(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*)L_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*)L_1)->___Data_4), (void*)NULL);
		// midiMessage.Time = AudioSettings.dspTime;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_4 = ___midiMessage0;
		double L_5;
		L_5 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		L_4->___Time_9 = L_5;
		// return result;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceANDROID__ctor_m3443305605F24F61032B408C896F98ED11F36983 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiOUTDeviceANDROID_Init_m609B91A09A5C10BBEBDBD69FE63798596504B5A5 (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, const RuntimeMethod* method) 
{
	{
		// public bool Init() { MidiPlugin.Init(); return true; }
		bool L_0;
		L_0 = MidiPlugin_Init_m49918B953F45588947A896EF343537769524EA29(NULL);
		// public bool Init() { MidiPlugin.Init(); return true; }
		return (bool)1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::ConnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceANDROID_ConnectDevice_mA376F14CE88431F531E838D59E45DF8F3F676227 (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, int32_t ___deviceIndex0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public int ConnectDevice(int deviceIndex, bool editor = false) => MidiPlugin.MIDIOUT_ConnectDevice(deviceIndex);
		int32_t L_0 = ___deviceIndex0;
		int32_t L_1;
		L_1 = MidiPlugin_MIDIOUT_ConnectDevice_mBCA19DE849A907B9CB7C7108DE783679109DE4ED(L_0, NULL);
		return L_1;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::DisconnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceANDROID_DisconnectDevice_mCBBAE3C499914ECD26A2702309FFA0EE15C58DFF (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, int32_t ___id0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public void DisconnectDevice(int id, bool editor = false) => MidiPlugin.MIDIOUT_DisconnectDevice(id);
		int32_t L_0 = ___id0;
		MidiPlugin_MIDIOUT_DisconnectDevice_m2119D85339D78C6F3D81E5ABE61447671AFDB53B(L_0, NULL);
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::DisconnectDevices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceANDROID_DisconnectDevices_m848EA1BBB635B1A37C5823193167520DC630F7FF (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, bool ___editor0, const RuntimeMethod* method) 
{
	{
		// public void DisconnectDevices(bool editor = false) => MidiPlugin.MIDIOUT_DisconnectDevices();
		MidiPlugin_MIDIOUT_DisconnectDevices_mE057FE3BE4FF59B9B00D5D0F7D7440CB9BD6802C(NULL);
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::GetDeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiOUTDeviceANDROID_GetDeviceName_m6BBB3C0173DBD833D16602F70DE7785889CD5FB4 (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	{
		// public string GetDeviceName(int deviceIndex) => MidiPlugin.MIDIOUT_DeviceName(deviceIndex);
		int32_t L_0 = ___deviceIndex0;
		String_t* L_1;
		L_1 = MidiPlugin_MIDIOUT_DeviceName_mE69832A6A62DBE96949A4B50AA9C647AC6647BAF(L_0, NULL);
		return L_1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::GetDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceANDROID_GetDeviceCount_mD556EAF6057EC9BC1E9B89CDBD4AE54DF532BEAF (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, const RuntimeMethod* method) 
{
	{
		// public int GetDeviceCount() => MidiPlugin.MIDIOUT_DeviceCount();
		int32_t L_0;
		L_0 = MidiPlugin_MIDIOUT_DeviceCount_mC19679C786D0E18A26444DD864A111999602657D(NULL);
		return L_0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::OpenVirtualPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceANDROID_OpenVirtualPort_m90CD96755B79A4B782E88502DDBDEC8F2A7FEF95 (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, String_t* ___name0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public int OpenVirtualPort(string name, bool editor = false) => 0;
		return 0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::CloseVirtualPort(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceANDROID_CloseVirtualPort_mA487C24A6792C983E57B7F383B5FE9F2AA03AD98 (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, int32_t ___deviceId0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public void CloseVirtualPort(int deviceId, bool editor = false) { }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::CloseVirtualPorts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceANDROID_CloseVirtualPorts_m4D06689C2164998FC467C0C47F28BB1A606A1829 (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, bool ___editor0, const RuntimeMethod* method) 
{
	{
		// public void CloseVirtualPorts(bool editor = false) { }
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::GetVirtualPortCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceANDROID_GetVirtualPortCount_m7702B70322A9649FB9C6EB0958CD89EB20D82DBE (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, const RuntimeMethod* method) 
{
	{
		// public int GetVirtualPortCount() => 0;
		return 0;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::GetVirtualPortName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiOUTDeviceANDROID_GetVirtualPortName_mAD96C2D8BA64FBDE14F242D0AB4D3D9E3781B36B (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, int32_t ___portIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string GetVirtualPortName(int portIndex) => "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::SendMessage(System.Byte,System.Byte,System.Byte,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceANDROID_SendMessage_m76BC4AA570947CEBBFEF8D67CB5E6DEFDC8147FD (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, uint8_t ___command0, uint8_t ___data11, uint8_t ___data22, int32_t ___deviceId3, bool ___editor4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int SendMessage(byte command, byte data1, byte data2, int deviceId = -1, bool editor = false) => MidiPlugin.MIDIOUT_SendData(new byte[] { command, data1, data2 }, deviceId);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___command0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_1;
		uint8_t L_4 = ___data11;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_3;
		uint8_t L_6 = ___data22;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_6);
		int32_t L_7 = ___deviceId3;
		int32_t L_8;
		L_8 = MidiPlugin_MIDIOUT_SendData_m3C2FA1D2E9551FF5283B80FACFFC0BC0E5E16743(L_5, L_7, NULL);
		return L_8;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::SendData(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceANDROID_SendData_mCEECCE4B5C3747AA43D8BFE90B38CD5223DB91E1 (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___deviceId1, bool ___editor2, const RuntimeMethod* method) 
{
	{
		// if (data == null || data.Length == 0){ return -1; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		// if (data == null || data.Length == 0){ return -1; }
		return (-1);
	}

IL_0009:
	{
		// else{ return MidiPlugin.MIDIOUT_SendData(data, deviceId); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		int32_t L_3 = ___deviceId1;
		int32_t L_4;
		L_4 = MidiPlugin_MIDIOUT_SendData_m3C2FA1D2E9551FF5283B80FACFFC0BC0E5E16743(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceANDROID__ctor_m47746EE8A3297778FAB964325F3AD5ABB3A73BF4 (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiPlugin::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiPlugin_Init_m49918B953F45588947A896EF343537769524EA29 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C74EE53B1AF65557F9BDF1EAF0C416BADC79DB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1E532619F54874E046D40D48FB4EFDC8B5ECD3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_initCalled) { return _isInitialized; }
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____initCalled_1;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (_initCalled) { return _isInitialized; }
		bool L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		return L_1;
	}

IL_000d:
	{
		// _initCalled = true;
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____initCalled_1 = (bool)1;
		// var jc = new AndroidJavaClass(MIDIUnifiedFragmentClass);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteralA1E532619F54874E046D40D48FB4EFDC8B5ECD3E, NULL);
		// _midiPlugin = jc.CallStatic<AndroidJavaObject>("Init");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_2, _stringLiteral3C74EE53B1AF65557F9BDF1EAF0C416BADC79DB9, L_3, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2), (void*)L_4);
		// _isInitialized = _midiPlugin != null;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		// return _isInitialized;
		bool L_6 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		return L_6;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_ConnectDevice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIIN_ConnectDevice_m5B88FA70DE3B70BE0B803CC096652173D1AFB28E (int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C48882D3E7C40CECB2423A087ED1E46E60166B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return -1;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_isInitialized) return -1;
		return (-1);
	}

IL_0009:
	{
		// return _midiPlugin.Call<int>(CMIDIIN_ConnectDevice, new object[] { deviceIndex });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___deviceIndex0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		int32_t L_7;
		L_7 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteral5C48882D3E7C40CECB2423A087ED1E46E60166B9, L_3, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_DisconnectDevice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPlugin_MIDIIN_DisconnectDevice_m10A38265F8FBC0FAE76C2CA752E2DE7635B205FA (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70ADCD6FBAC1B27833FD9427753B62F86319A827);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!_isInitialized) return;
		return;
	}

IL_0008:
	{
		// _midiPlugin.Call(CMIDIIN_DisconnectDevice, new object[] { id });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___id0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral70ADCD6FBAC1B27833FD9427753B62F86319A827, L_3, NULL);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_DisconnectDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPlugin_MIDIIN_DisconnectDevices_m8284F46C96CBA318213679B54E1875B67FE88533 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB511D0A10B2F4B8AC168C6AD2CA5FDEB2410F4DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!_isInitialized) return;
		return;
	}

IL_0008:
	{
		// _midiPlugin.Call(CMIDIIN_DisconnectDevices);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralB511D0A10B2F4B8AC168C6AD2CA5FDEB2410F4DC, L_2, NULL);
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_DeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiPlugin_MIDIIN_DeviceName_mA37727D0B1C318A8FBEA4F503E778B6F65BF3112 (int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4273EF9CB477BFB57085C60BD43CC55EEA609E59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return "";
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (!_isInitialized) return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000d:
	{
		// return _midiPlugin.Call<String>(CMIDIIN_DeviceName, new object[] { deviceIndex });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___deviceIndex0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		String_t* L_7;
		L_7 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_1, _stringLiteral4273EF9CB477BFB57085C60BD43CC55EEA609E59, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_7;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_DeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIIN_DeviceCount_m982168668469CA61ED0CE8499C55A92C48D9C9DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60C4BD61933EFE4F42954BD1522D56C0E9D9BD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return 0;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_isInitialized) return 0;
		return 0;
	}

IL_0009:
	{
		// return _midiPlugin.Call<int>(CMIDIIN_DeviceCount);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteralF60C4BD61933EFE4F42954BD1522D56C0E9D9BD4, L_2, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_3;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIIN_PopMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIIN_PopMessage_m68185DA31D0199E6D6105B0BFDF7A7C11799A5F9 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* ___aMidiMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisSByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_mE3F66AC293CE329D2B3BC8B9F4866623AA3F6C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ForieroEngineExtensions_t2EAA6E289E0B71711C758A884AA6562A249F7863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A371BA9EAD3F152A2D893D2C212EDBD64DB4D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51AC8AB7EDCBC23D8A39ACDE7B30FBAB6B719D36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// aMidiMessage = new MidiMessage();
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_0 = ___aMidiMessage0;
		il2cpp_codegen_initobj(L_0, sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
		// if (!_isInitialized) return 0;
		bool L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!_isInitialized) return 0;
		return 0;
	}

IL_0010:
	{
		// if (_midiPlugin.CallStatic<int>(CMIDIIN_PopMidiMessage) == 0) return 0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_2, _stringLiteral51AC8AB7EDCBC23D8A39ACDE7B30FBAB6B719D36, L_3, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// if (_midiPlugin.CallStatic<int>(CMIDIIN_PopMidiMessage) == 0) return 0;
		return 0;
	}

IL_0028:
	{
		// _midiMessage = _midiPlugin.GetStatic<sbyte[]>(CMIDIIN_MidiMessage);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		NullCheck(L_5);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6;
		L_6 = AndroidJavaObject_GetStatic_TisSByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_mE3F66AC293CE329D2B3BC8B9F4866623AA3F6C29(L_5, _stringLiteral43A371BA9EAD3F152A2D893D2C212EDBD64DB4D0, AndroidJavaObject_GetStatic_TisSByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_mE3F66AC293CE329D2B3BC8B9F4866623AA3F6C29_RuntimeMethod_var);
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessage_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessage_11), (void*)L_6);
		// if (_midiMessage == null) return 0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessage_11;
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		// if (_midiMessage == null) return 0;
		return 0;
	}

IL_0045:
	{
		// _midiMessageByte = _midiMessage.ToByte();
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_8 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessage_11;
		il2cpp_codegen_runtime_class_init_inline(ForieroEngineExtensions_t2EAA6E289E0B71711C758A884AA6562A249F7863_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ForieroEngineExtensions_ToByte_mC9906595B0300BDFC30AF21A3F62BF4AF2B87F7B(L_8, NULL);
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12), (void*)L_9);
		// if (_midiMessageByte.Length <= 1) return 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_10);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) > ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		// if (_midiMessageByte.Length <= 1) return 0;
		return 0;
	}

IL_0060:
	{
		// aMidiMessage.DeviceId = _midiMessageByte[0];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_11 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		L_11->___DeviceId_5 = L_14;
		// if(_midiMessageByte.Length == 4)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_15);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) == ((uint32_t)4))))
		{
			goto IL_009e;
		}
	}
	{
		// aMidiMessage.CommandAndChannel = _midiMessageByte[1];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_16 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		L_16->___CommandAndChannel_0 = L_19;
		// aMidiMessage.Data1 = _midiMessageByte[2];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_20 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		L_20->___Data1_1 = L_23;
		// aMidiMessage.Data2 = _midiMessageByte[3];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_24 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_25);
		int32_t L_26 = 3;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		L_24->___Data2_2 = L_27;
	}

IL_009e:
	{
		// aMidiMessage.DataSize = _midiMessageByte.Length - 1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_28 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_29);
		L_28->___DataSize_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_29)->max_length)), 1));
		// aMidiMessage.Data = new byte[aMidiMessage.DataSize];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_30 = ___aMidiMessage0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_31 = ___aMidiMessage0;
		int32_t L_32 = L_31->___DataSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_32);
		L_30->___Data_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___Data_4), (void*)L_33);
		// for (var i = 1; i < _midiMessageByte.Length; i++) { aMidiMessage.Data[i - 1] = _midiMessageByte[i]; }
		V_0 = 1;
		goto IL_00d7;
	}

IL_00c2:
	{
		// for (var i = 1; i < _midiMessageByte.Length; i++) { aMidiMessage.Data[i - 1] = _midiMessageByte[i]; }
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_34 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = L_34->___Data_4;
		int32_t L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_36, 1))), (uint8_t)L_40);
		// for (var i = 1; i < _midiMessageByte.Length; i++) { aMidiMessage.Data[i - 1] = _midiMessageByte[i]; }
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d7:
	{
		// for (var i = 1; i < _midiMessageByte.Length; i++) { aMidiMessage.Data[i - 1] = _midiMessageByte[i]; }
		int32_t L_42 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_00c2;
		}
	}
	{
		// return 1;
		return 1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_ConnectDevice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIOUT_ConnectDevice_mBCA19DE849A907B9CB7C7108DE783679109DE4ED (int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C5FDF1937BC9A4D9C27A95437C19036532B2EB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return -1;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_isInitialized) return -1;
		return (-1);
	}

IL_0009:
	{
		// return _midiPlugin.Call<int>(CMIDIOUT_ConnectDevice, new object[] { deviceIndex });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___deviceIndex0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		int32_t L_7;
		L_7 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteral6C5FDF1937BC9A4D9C27A95437C19036532B2EB0, L_3, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_DisconnectDevice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPlugin_MIDIOUT_DisconnectDevice_m2119D85339D78C6F3D81E5ABE61447671AFDB53B (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44ACD1FE59D6ECAE6C5C355170F9AD8F0A295AF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!_isInitialized) return;
		return;
	}

IL_0008:
	{
		// _midiPlugin.Call(CMIDIOUT_DisconnectDevice, new object[] { id });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___id0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral44ACD1FE59D6ECAE6C5C355170F9AD8F0A295AF4, L_3, NULL);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_DisconnectDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPlugin_MIDIOUT_DisconnectDevices_mE057FE3BE4FF59B9B00D5D0F7D7440CB9BD6802C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD483783AD1B0A3556D04C959A4DB869D3CE4A73E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!_isInitialized) return;
		return;
	}

IL_0008:
	{
		// _midiPlugin.Call(CMIDIOUT_DisconnectDevices);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralD483783AD1B0A3556D04C959A4DB869D3CE4A73E, L_2, NULL);
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_DeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiPlugin_MIDIOUT_DeviceName_mE69832A6A62DBE96949A4B50AA9C647AC6647BAF (int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549E092FA757B20353BE7B6B56A82D9BDC5BB2CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return "";
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (!_isInitialized) return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000d:
	{
		// return _midiPlugin.Call<String>(CMIDIOUT_DeviceName, new object[] { deviceIndex });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___deviceIndex0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		String_t* L_7;
		L_7 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_1, _stringLiteral549E092FA757B20353BE7B6B56A82D9BDC5BB2CC, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_7;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_DeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIOUT_DeviceCount_mC19679C786D0E18A26444DD864A111999602657D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D21C5A7640248157EE9BF42D6074B11B3031C4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isInitialized) return 0;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_isInitialized) return 0;
		return 0;
	}

IL_0009:
	{
		// return _midiPlugin.Call<int>(CMIDIOUT_DeviceCount);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteral9D21C5A7640248157EE9BF42D6074B11B3031C4C, L_2, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_3;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiPlugin::MIDIOUT_SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiPlugin_MIDIOUT_SendData_m3C2FA1D2E9551FF5283B80FACFFC0BC0E5E16743 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___deviceId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22F0D5E4C73FDB1CC93C433264B3EEB647FC8887);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!_isInitialized) return -1;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_isInitialized) return -1;
		return (-1);
	}

IL_0009:
	{
		// int[] dst = new int[data.Length];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		V_0 = L_2;
		// for (var i = 0; i < data.Length;i++){ dst[i] = (int)data[i]; }
		V_1 = 0;
		goto IL_0020;
	}

IL_0016:
	{
		// for (var i = 0; i < data.Length;i++){ dst[i] = (int)data[i]; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		int32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_8);
		// for (var i = 0; i < data.Length;i++){ dst[i] = (int)data[i]; }
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0020:
	{
		// for (var i = 0; i < data.Length;i++){ dst[i] = (int)data[i]; }
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___data0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// _midiPlugin.Call(CMIDIOUT_SendData, new object[] { dst, deviceId });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		int32_t L_17 = ___deviceId1;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		NullCheck(L_12);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteral22F0D5E4C73FDB1CC93C433264B3EEB647FC8887, L_16, NULL);
		// return 1;
		return 1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiINDeviceNONE_Init_mB256E79DD4A0C289E27F2E0EB63E8B2ED9EC2B7E (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, const RuntimeMethod* method) 
{
	{
		// public bool Init() => true;
		return (bool)1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::ConnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceNONE_ConnectDevice_mB478E07DEE68E92D7647E8815637C667F223CCA1 (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, int32_t ___deviceIndex0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public int ConnectDevice(int deviceIndex, bool editor = false) => -1;
		return (-1);
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::DisconnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceNONE_DisconnectDevice_mF97A8050CECB7B98A635A7FCC6D96790532A178B (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, int32_t ___deviceId0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public void DisconnectDevice(int deviceId, bool editor = false) { }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::DisconnectDevices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceNONE_DisconnectDevices_m0E7CA70F8EBCD223DE521A36486D413401644D17 (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, bool ___editor0, const RuntimeMethod* method) 
{
	{
		// public void DisconnectDevices(bool editor = false) { }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::GetDeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiINDeviceNONE_GetDeviceName_mE14021626AE85324C0584F0FA9862A07D194F990 (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string GetDeviceName(int deviceIndex) => "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::GetDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceNONE_GetDeviceCount_m5B5575789B9E168F77C0ABB1438DE0C36082727C (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, const RuntimeMethod* method) 
{
	{
		// public int GetDeviceCount() => 0;
		return 0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::OpenVirtualPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceNONE_OpenVirtualPort_m493F44C35155BDF4DC0F8055BBFFCA66B65ED44D (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, String_t* ___name0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public int OpenVirtualPort(string name, bool editor = false) => 0;
		return 0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::CloseVirtualPort(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceNONE_CloseVirtualPort_mACC79716D3D98FEC2B8428B35148C48E3AD23922 (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, int32_t ___deviceId0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public void CloseVirtualPort(int deviceId, bool editor = false) { }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::CloseVirtualPorts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceNONE_CloseVirtualPorts_m67EEFD55D85CCCED3985A31D89F18B02C1E9BDF1 (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, bool ___editor0, const RuntimeMethod* method) 
{
	{
		// public void CloseVirtualPorts(bool editor = false) { }
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::GetVirtualPortCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceNONE_GetVirtualPortCount_m1E1AF5A1C474DE18E711E9C4A0C94C750BD2BA15 (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, const RuntimeMethod* method) 
{
	{
		// public int GetVirtualPortCount() => 0;
		return 0;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::GetVirtualPortName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiINDeviceNONE_GetVirtualPortName_m4D50AEAA270A241A00F9591EEE1A20B32D367AB8 (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, int32_t ___portIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string GetVirtualPortName(int portIndex) => "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::PopMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINDeviceNONE_PopMessage_mD2A7FCD2B076A8B8472D3E9CB7F95BA4D88AC1CC (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* ___midiMessage0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public int PopMessage(out MidiMessage midiMessage, bool editor = false) { midiMessage = new MidiMessage(); return 0; }
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_0 = ___midiMessage0;
		il2cpp_codegen_initobj(L_0, sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
		// public int PopMessage(out MidiMessage midiMessage, bool editor = false) { midiMessage = new MidiMessage(); return 0; }
		return 0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceNONE__ctor_mE0202C1B78514C94BFAC830E96EBA02E4240BF4A (MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiOUTDeviceNONE_Init_m61C96C76C9B94DA30E5B88C433C41A94BCF60280 (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, const RuntimeMethod* method) 
{
	{
		// public bool Init() => true;
		return (bool)1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::ConnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceNONE_ConnectDevice_m2726B464B7A36907A02B5F56628367379042E752 (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, int32_t ___deviceIndex0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public int ConnectDevice(int deviceIndex, bool editor = false) => -1;
		return (-1);
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::DisconnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceNONE_DisconnectDevice_m696E1CDF52C0667062122A08A0AA808ECE3DF7EA (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, int32_t ___deviceId0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public void DisconnectDevice(int deviceId, bool editor = false) { }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::DisconnectDevices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceNONE_DisconnectDevices_m657ED7A45BF8F6A4825A30A16A142DF3E33AEE25 (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, bool ___editor0, const RuntimeMethod* method) 
{
	{
		// public void DisconnectDevices(bool editor = false) { }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::GetDeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiOUTDeviceNONE_GetDeviceName_mF68A227AE2AB31456C348548F71784AC9708ECEC (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string GetDeviceName(int deviceIndex) => "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::GetDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceNONE_GetDeviceCount_m3C90623BEE102DB1600DD65C6CE3EC66BA0A2E71 (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, const RuntimeMethod* method) 
{
	{
		// public int GetDeviceCount() => 0;
		return 0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::OpenVirtualPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceNONE_OpenVirtualPort_mE8E7EF5735C9E913E9650DDC4950850CA5323907 (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, String_t* ___name0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public int OpenVirtualPort(string name, bool editor = false) => 0;
		return 0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::CloseVirtualPort(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceNONE_CloseVirtualPort_m3E034162E942DC982CE95B6149249C5BB748987A (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, int32_t ___deviceId0, bool ___editor1, const RuntimeMethod* method) 
{
	{
		// public void CloseVirtualPort(int deviceId, bool editor = false) { }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::CloseVirtualPorts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceNONE_CloseVirtualPorts_mD516894D390DBE24B018406CEA7EC842F7F65A88 (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, bool ___editor0, const RuntimeMethod* method) 
{
	{
		// public void CloseVirtualPorts(bool editor = false) { }
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::GetVirtualPortCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceNONE_GetVirtualPortCount_m686391733C94FD3A7D7978B2EF3E88F9C91B594B (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, const RuntimeMethod* method) 
{
	{
		// public int GetVirtualPortCount() => 0;
		return 0;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::GetVirtualPortName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiOUTDeviceNONE_GetVirtualPortName_m70B5B04A57BE090B388E018948FCDD3BA9B6F34A (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, int32_t ___portIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string GetVirtualPortName(int portIndex) => "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::SendMessage(System.Byte,System.Byte,System.Byte,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceNONE_SendMessage_m4C6F612D16FFE112A871875C8552F3043FA232D1 (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, uint8_t ___command0, uint8_t ___data11, uint8_t ___data22, int32_t ___deviceId3, bool ___editor4, const RuntimeMethod* method) 
{
	{
		// public int SendMessage(byte command, byte data1, byte data2, int deviceId = -1, bool editor = false) => 0;
		return 0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::SendData(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTDeviceNONE_SendData_m419E07AC1A69369E91063A605A2F6F30C170EB87 (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___deviceId1, bool ___editor2, const RuntimeMethod* method) 
{
	{
		// public int SendData(byte[] data, int deviceId = -1, bool editor = false) => 0;
		return 0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceNONE__ctor_m3E8D3A7CE9C2B1F55FB6E60F0DB65DC2221F0B12 (MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::CreateAudioSourceBass24()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin_CreateAudioSourceBass24_mE2BEF92287E68114E77EA1CF744295C27A06D5FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303_m27C527DC61006832BD8E32F50E1D3A5CA7ECB691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0D012E15EC76778603E614B27D347BC092EAB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!audioSourceBass24)
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		// audioSourceBass24 = new GameObject("Bass24AudioSource").AddComponent<AudioSourceBass24>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral9D0D012E15EC76778603E614B27D347BC092EAB0, NULL);
		NullCheck(L_2);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_3;
		L_3 = GameObject_AddComponent_TisAudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303_m27C527DC61006832BD8E32F50E1D3A5CA7ECB691(L_2, GameObject_AddComponent_TisAudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303_m27C527DC61006832BD8E32F50E1D3A5CA7ECB691_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1), (void*)L_3);
		// UnityEngine.Object.DontDestroyOnLoad(audioSourceBass24.gameObject);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_4 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_5, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::DestroyAudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin_DestroyAudioSource_m3A5E670D3BFA5FC6A6AA585494EC54567E6EB185 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!audioSourceBass24) return;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (!audioSourceBass24) return;
		return;
	}

IL_000d:
	{
		// UnityEngine.Object.Destroy(audioSourceBass24.gameObject);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_2 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// audioSourceBass24 = null;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1 = (AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1), (void*)(AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303*)NULL);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::InitRecordingClip(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin_InitRecordingClip_m22A7B48ACD9CC796C8A8329F9845D7CAE9E8E1D0 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!audioSourceBass24) return;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (!audioSourceBass24) return;
		return;
	}

IL_000d:
	{
		// audioSourceBass24.Init(clip, true);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_2 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___clip0;
		NullCheck(L_2);
		AudioSourceBass24_Init_mBB0FD86FD8981134ADB08052E1E7809C239B12EB(L_2, L_3, (bool)1, NULL);
		// audioSourceBass24.volume = volume;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_4 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		float L_5 = ___volume1;
		NullCheck(L_4);
		L_4->___volume_12 = L_5;
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::StartRecording(UnityEngine.AudioClip,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin_StartRecording_m2BBD38F47110125EA5BFCA84D17D0E08650A7D24 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, float ___speed2, int32_t ___semitone3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ForieroEngineExtensions_t2EAA6E289E0B71711C758A884AA6562A249F7863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1092046D2432FA58A38E8CF511BF553D9973668A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D2AF143890DFF0B9CFDFD4807F8D79958DCD17F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70C3208D68534E10EDDDDF84F2406FE55CFBB08A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC08BED511D92683BA126F75A16D4E530CA6681);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (midiStream == 0) return;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (midiStream == 0) return;
		return;
	}

IL_0008:
	{
		// if (recordingStream != 0)
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogError("FileStream alread open. Seems like recording session is in the proccess!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1092046D2432FA58A38E8CF511BF553D9973668A, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// var path = Recorders.Synth.fileName.PrependPersistentPath();
		il2cpp_codegen_runtime_class_init_inline(Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_StaticFields*)il2cpp_codegen_static_fields_for(Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_il2cpp_TypeInfo_var))->___fileName_0;
		il2cpp_codegen_runtime_class_init_inline(ForieroEngineExtensions_t2EAA6E289E0B71711C758A884AA6562A249F7863_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = ForieroEngineExtensions_PrependPersistentPath_m1B0612959C76A78735CD9F644D195DDB43E2E5F7(L_2, NULL);
		V_0 = L_3;
		// Debug.Log("Saving : " + path);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9BC08BED511D92683BA126F75A16D4E530CA6681, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// if (clip)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_00df;
		}
	}
	{
		// CreateAudioSourceBass24();
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		BASS24SynthPlugin_CreateAudioSourceBass24_mE2BEF92287E68114E77EA1CF744295C27A06D5FB(NULL);
		// InitRecordingClip(clip, volume);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = ___clip0;
		float L_9 = ___volume1;
		BASS24SynthPlugin_InitRecordingClip_m22A7B48ACD9CC796C8A8329F9845D7CAE9E8E1D0(L_8, L_9, NULL);
		// audioSourceBass24.speed = speed;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_10 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		float L_11 = ___speed2;
		NullCheck(L_10);
		il2cpp_codegen_memory_barrier();
		L_10->___speed_9 = L_11;
		// audioSourceBass24.semitone = semitone;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_12 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		int32_t L_13 = ___semitone3;
		NullCheck(L_12);
		il2cpp_codegen_memory_barrier();
		L_12->___semitone_10 = L_13;
		// audioSourceBass24.Play();
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_14 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_14);
		AudioSourceBass24_Play_m3043DE22922D440A60CA4CA81B36CD62931EA92A(L_14, NULL);
		// if (!BassMix.BASS_Mixer_StreamAddChannel(mixerStream, audioSourceBass24.clipBass24.streamFX, BASSFlag.BASS_DEFAULT))
		int32_t L_15 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_16 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_16);
		AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* L_17;
		L_17 = AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline(L_16, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = AudioClipBass24_get_streamFX_mF06BADA66EC1B910602C081525E1B3F6B88D82B4_inline(L_17, NULL);
		bool L_19;
		L_19 = BassMix_BASS_Mixer_StreamAddChannel_m4FEFD351DAAED588204EB86FE20A00C9BB3DB878(L_15, L_18, 0, NULL);
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		// Debug.LogError("BassMix.BASS_Mixer_StreamAddChannel(mixerStream, audioSourceBass24.clipBass24.streamFX, BASSFlag.BASS_DEFAULT " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_1 = L_20;
		Il2CppFakeBox<int32_t> L_21(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_22;
		L_22 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_21), NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2D2AF143890DFF0B9CFDFD4807F8D79958DCD17F, L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_23, NULL);
	}

IL_00ae:
	{
		// BassMix.BASS_Mixer_ChannelSetPosition(audioSourceBass24.clipBass24.streamFX, 0);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_24 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_24);
		AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* L_25;
		L_25 = AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline(L_24, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AudioClipBass24_get_streamFX_mF06BADA66EC1B910602C081525E1B3F6B88D82B4_inline(L_25, NULL);
		bool L_27;
		L_27 = BassMix_BASS_Mixer_ChannelSetPosition_m1EBC698B2D523C9153521D1B92E026BA186AB296(L_26, ((int64_t)0), NULL);
		// recordingStream = BassEnc.BASS_Encode_Start(mixerStream, path, BASSEncode.BASS_ENCODE_PCM, null, System.IntPtr.Zero);
		int32_t L_28 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		String_t* L_29 = V_0;
		intptr_t L_30 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var);
		int32_t L_31;
		L_31 = BassEnc_BASS_Encode_Start_m54D13AA23812CD37CD37CFE7855C31F55CCF54E2(L_28, L_29, ((int32_t)64), (ENCODEPROC_t529AC7CECBB4A6C52A2BA99E73F40B65C1463423*)NULL, L_30, NULL);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0 = L_31;
		goto IL_00f7;
	}

IL_00df:
	{
		// recordingStream = BassEnc.BASS_Encode_Start(midiStream, path, BASSEncode.BASS_ENCODE_PCM, null, System.IntPtr.Zero);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_32 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		String_t* L_33 = V_0;
		intptr_t L_34 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = BassEnc_BASS_Encode_Start_m54D13AA23812CD37CD37CFE7855C31F55CCF54E2(L_32, L_33, ((int32_t)64), (ENCODEPROC_t529AC7CECBB4A6C52A2BA99E73F40B65C1463423*)NULL, L_34, NULL);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0 = L_35;
	}

IL_00f7:
	{
		// if (recordingStream == 0) Debug.LogError("BASS24 : BASS_Encode_Start " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_36 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0;
		if (L_36)
		{
			goto IL_0120;
		}
	}
	{
		// if (recordingStream == 0) Debug.LogError("BASS24 : BASS_Encode_Start " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_1 = L_37;
		Il2CppFakeBox<int32_t> L_38(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_39;
		L_39 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_38), NULL);
		String_t* L_40;
		L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral70C3208D68534E10EDDDDF84F2406FE55CFBB08A, L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_40, NULL);
	}

IL_0120:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin_StopRecording_m9722A47CC1A57237F2BC0D6FCC9C080C4A6F8C12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* G_B7_0 = NULL;
	AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* G_B6_0 = NULL;
	{
		// if (recordingStream == 0) return;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (recordingStream == 0) return;
		return;
	}

IL_0008:
	{
		// BassEnc.BASS_Encode_Stop(recordingStream);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0;
		il2cpp_codegen_runtime_class_init_inline(BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BassEnc_BASS_Encode_Stop_m1253D2F1574202CD2B3222E5A0614512EC064793(L_1, NULL);
		// recordingStream = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0 = 0;
		// if (audioSourceBass24 && audioSourceBass24.clipBass24 != null)
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_3 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_5 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_5);
		AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* L_6;
		L_6 = AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// BassMix.BASS_Mixer_ChannelRemove(audioSourceBass24.clipBass24.streamFX);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_7 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_7);
		AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* L_8;
		L_8 = AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = AudioClipBass24_get_streamFX_mF06BADA66EC1B910602C081525E1B3F6B88D82B4_inline(L_8, NULL);
		bool L_10;
		L_10 = BassMix_BASS_Mixer_ChannelRemove_m10060426656E788BC557910731217BDBF5AF4B03(L_9, NULL);
	}

IL_0046:
	{
		// audioSourceBass24?.Stop();
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_11 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		NullCheck(G_B7_0);
		AudioSourceBass24_Stop_mA6EC7A0B8960B7585C46C4881FEA3BEB35AB10A1(G_B7_0, NULL);
		// }
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::Start(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BASS24SynthPlugin_Start_m1DBC88D3BAA7476988D326AF117C78DC9C74138E (int32_t ___freq0, int32_t ___channels1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B871CDB68C91018FA0666FBFABF1FBC025A5E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3107BBA8540BCCB08501B1DE01852D9BE4CBCDC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CD345253F9878B88276F1C2C5A91911C419FF5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A7D5B62ECF2AEDF540C508125DBC431BBA3EE74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDCDAA07CE9C5D2FDE677FF61317300F043F7D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B11AA0B5D8E692323923F7AE908FEEC38913467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96E86163C1CCBE54182D19B366160B9DDA8B6B5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA1779715C3B398E93C925B7FE0872BE6BC7385);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1D90842ECCB57CAF36F53172C3AC044CD8772B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0304E037333ADD63DA958D216D2258D971E7A2C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	{
		// if (midiStream != 0)
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0009:
	{
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | BASS24NETSynth - Start : " + freq.ToString() + " " + channels.ToString());
		il2cpp_codegen_runtime_class_init_inline(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = MIDISettings_get_IsDebug_m40FF4D03A775F32E7B19A859459131597B5D0D26(NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | BASS24NETSynth - Start : " + freq.ToString() + " " + channels.ToString());
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___freq0), NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___channels1), NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral3CD345253F9878B88276F1C2C5A91911C419FF5B, L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
	}

IL_0032:
	{
		// sampleRate = freq;
		int32_t L_5 = ___freq0;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___sampleRate_5 = L_5;
		// MIDISoundSettings.Init();
		MIDISoundSettings_Init_m06E70FA98A19AE50645DA9D4C4730667BEBD9D9F((-1), NULL);
		// if (string.IsNullOrEmpty(MIDISettings.soundFontPersistentPath))
		il2cpp_codegen_runtime_class_init_inline(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var);
		String_t* L_6 = ((MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_StaticFields*)il2cpp_codegen_static_fields_for(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var))->___soundFontPersistentPath_6;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_004c:
	{
		// bool sampleFloat = true;
		V_0 = (bool)1;
		// midiStream = BassMidi.BASS_MIDI_StreamCreate(channels, BASSFlag.BASS_STREAM_DECODE | BASSFlag.BASS_SAMPLE_FLOAT, freq);
		int32_t L_8 = ___channels1;
		int32_t L_9 = ___freq0;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = BassMidi_BASS_MIDI_StreamCreate_m8F1B006FFE5773C06006F5FFBCB6FE663760C685(L_8, ((int32_t)2097408), L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3 = L_10;
		// if (midiStream == 0 && Bass.BASS_ErrorGetCode() == BASSError.BASS_ERROR_FORMAT)
		int32_t L_11 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		if (L_11)
		{
			goto IL_00bd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)6))))
		{
			goto IL_00bd;
		}
	}
	{
		// midiStream = BassMidi.BASS_MIDI_StreamCreate(channels, BASSFlag.BASS_STREAM_DECODE, freq);
		int32_t L_13 = ___channels1;
		int32_t L_14 = ___freq0;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = BassMidi_BASS_MIDI_StreamCreate_m8F1B006FFE5773C06006F5FFBCB6FE663760C685(L_13, ((int32_t)2097152), L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3 = L_15;
		// if (midiStream == 0)
		int32_t L_16 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		if (L_16)
		{
			goto IL_00aa;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BassMidi.BASS_MIDI_StreamCreate " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_3 = L_17;
		Il2CppFakeBox<int32_t> L_18(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_19;
		L_19 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_18), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral96E86163C1CCBE54182D19B366160B9DDA8B6B5A, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
		// return 0;
		return 0;
	}

IL_00aa:
	{
		// sampleFloat = false;
		V_0 = (bool)0;
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | Bass channels are 16bit non-floatable.");
		il2cpp_codegen_runtime_class_init_inline(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = MIDISettings_get_IsDebug_m40FF4D03A775F32E7B19A859459131597B5D0D26(NULL);
		if (!L_21)
		{
			goto IL_00bd;
		}
	}
	{
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | Bass channels are 16bit non-floatable.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD0304E037333ADD63DA958D216D2258D971E7A2C, NULL);
	}

IL_00bd:
	{
		// mixerStream = BassMix.BASS_Mixer_StreamCreate(sampleRate, 2, sampleFloat ? BASSFlag.BASS_SAMPLE_FLOAT : 0);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_22 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___sampleRate_5;
		bool L_23 = V_0;
		G_B13_0 = 2;
		G_B13_1 = L_22;
		if (L_23)
		{
			G_B14_0 = 2;
			G_B14_1 = L_22;
			goto IL_00c9;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_00ce;
	}

IL_00c9:
	{
		G_B15_0 = ((int32_t)256);
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_00ce:
	{
		int32_t L_24;
		L_24 = BassMix_BASS_Mixer_StreamCreate_mD222A1F472C854BF44135ABFE3087F8330856A3D(G_B15_2, G_B15_1, G_B15_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4 = L_24;
		// if (mixerStream == 0)
		int32_t L_25 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		if (L_25)
		{
			goto IL_0103;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BassMix.BASS_Mixer_StreamCreate " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_3 = L_26;
		Il2CppFakeBox<int32_t> L_27(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_28;
		L_28 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_27), NULL);
		String_t* L_29;
		L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3107BBA8540BCCB08501B1DE01852D9BE4CBCDC2, L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_29, NULL);
		// return 0;
		return 0;
	}

IL_0103:
	{
		// if (midiStream == 0)
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_30 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		if (L_30)
		{
			goto IL_012e;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_MIDI_StreamCreate " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_31;
		L_31 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_3 = L_31;
		Il2CppFakeBox<int32_t> L_32(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_33;
		L_33 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_32), NULL);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5A7D5B62ECF2AEDF540C508125DBC431BBA3EE74, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_34, NULL);
		// return 0;
		return 0;
	}

IL_012e:
	{
		// Bass.BASS_ChannelSetSync(midiStream, BASSSync.BASS_SYNC_MIDI_EVENT | BASSSync.BASS_SYNC_MIXTIME, (long)BASSMIDIEvent.MIDI_EVENT_PROGRAM, null, System.IntPtr.Zero);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_35 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		intptr_t L_36 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = Bass_BASS_ChannelSetSync_m53A003EA5B2C64BDFB8EDAA38EE0699917605987(L_35, ((int32_t)1073807364), ((int64_t)2), (SYNCPROC_t3FD6564C701F16D9C8D0E6FBFF31D453A73DFCAC*)NULL, L_36, NULL);
		// Bass.BASS_ChannelSetAttribute(midiStream, BASSAttribute.BASS_ATTRIB_NOBUFFER, 1);
		int32_t L_38 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		bool L_39;
		L_39 = Bass_BASS_ChannelSetAttribute_m723556DB77F9C70AEFD8D9259BC72945D69F97BE(L_38, 5, (1.0f), NULL);
		// int newSoundFont = BassMidi.BASS_MIDI_FontInit(MIDISettings.soundFontPersistentPath);
		il2cpp_codegen_runtime_class_init_inline(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var);
		String_t* L_40 = ((MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_StaticFields*)il2cpp_codegen_static_fields_for(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var))->___soundFontPersistentPath_6;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = BassMidi_BASS_MIDI_FontInit_mA1FB533F47501867175E039FD7A7FB1E78F7BCA2(L_40, NULL);
		V_1 = L_41;
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | BASS_MIDI_FontInit : " + newSoundFont.ToString());
		bool L_42;
		L_42 = MIDISettings_get_IsDebug_m40FF4D03A775F32E7B19A859459131597B5D0D26(NULL);
		if (!L_42)
		{
			goto IL_017f;
		}
	}
	{
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | BASS_MIDI_FontInit : " + newSoundFont.ToString());
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_44;
		L_44 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9EA1779715C3B398E93C925B7FE0872BE6BC7385, L_43, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_44, NULL);
	}

IL_017f:
	{
		// if (!BassMidi.BASS_MIDI_FontSetVolume(newSoundFont, 2f))
		int32_t L_45 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = BassMidi_BASS_MIDI_FontSetVolume_mDBF437DCE84B001B8BF04244875FB778CB2A18A2(L_45, (2.0f), NULL);
		if (L_46)
		{
			goto IL_01b0;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_MIDI_FontSetVolume " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_47;
		L_47 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_3 = L_47;
		Il2CppFakeBox<int32_t> L_48(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_49;
		L_49 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_48), NULL);
		String_t* L_50;
		L_50 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5EDCDAA07CE9C5D2FDE677FF61317300F043F7D5, L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_50, NULL);
		// return 0;
		return 0;
	}

IL_01b0:
	{
		// BASS_MIDI_FONT bassMidiFont = new BASS_MIDI_FONT();
		il2cpp_codegen_initobj((&V_2), sizeof(BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7));
		// bassMidiFont.font = newSoundFont;
		int32_t L_51 = V_1;
		(&V_2)->___font_0 = L_51;
		// bassMidiFont.preset = -1;
		(&V_2)->___preset_1 = (-1);
		// bassMidiFont.bank = 0;
		(&V_2)->___bank_2 = 0;
		// if (!BassMidi.BASS_MIDI_StreamSetFonts(0, new BASS_MIDI_FONT[] { bassMidiFont }, 1))
		BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB* L_52 = (BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB*)(BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB*)SZArrayNew(BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB_il2cpp_TypeInfo_var, (uint32_t)1);
		BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB* L_53 = L_52;
		BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 L_54 = V_2;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7)L_54);
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = BassMidi_BASS_MIDI_StreamSetFonts_m8FDC0DF697634635FA92B9C2FE828E15833BBA84(0, L_53, 1, NULL);
		if (L_55)
		{
			goto IL_020b;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_MIDI_StreamSetFonts " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_56;
		L_56 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_3 = L_56;
		Il2CppFakeBox<int32_t> L_57(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_58;
		L_58 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_57), NULL);
		String_t* L_59;
		L_59 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6B11AA0B5D8E692323923F7AE908FEEC38913467, L_58, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_59, NULL);
		// return 0;
		return 0;
	}

IL_020b:
	{
		// if (!BassMidi.BASS_MIDI_StreamSetFonts(midiStream, new BASS_MIDI_FONT[] { bassMidiFont }, 1))
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_60 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB* L_61 = (BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB*)(BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB*)SZArrayNew(BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB_il2cpp_TypeInfo_var, (uint32_t)1);
		BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB* L_62 = L_61;
		BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 L_63 = V_2;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7)L_63);
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = BassMidi_BASS_MIDI_StreamSetFonts_m8FDC0DF697634635FA92B9C2FE828E15833BBA84(L_60, L_62, 1, NULL);
		if (L_64)
		{
			goto IL_024a;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_MIDI_StreamSetFonts " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_3 = L_65;
		Il2CppFakeBox<int32_t> L_66(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_67;
		L_67 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_66), NULL);
		String_t* L_68;
		L_68 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6B11AA0B5D8E692323923F7AE908FEEC38913467, L_67, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_68, NULL);
		// return 0;
		return 0;
	}

IL_024a:
	{
		// if (!BassMidi.BASS_MIDI_FontFree(soundFont))
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_69 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___soundFont_2;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = BassMidi_BASS_MIDI_FontFree_mEFEBEBC5C26356C5CB8CC19AF1599EE17545B717(L_69, NULL);
		// soundFont = newSoundFont;
		int32_t L_71 = V_1;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___soundFont_2 = L_71;
		// if (!BassMix.BASS_Mixer_StreamAddChannel(mixerStream, midiStream, BASSFlag.BASS_DEFAULT))
		int32_t L_72 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		int32_t L_73 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		bool L_74;
		L_74 = BassMix_BASS_Mixer_StreamAddChannel_m4FEFD351DAAED588204EB86FE20A00C9BB3DB878(L_72, L_73, 0, NULL);
		if (L_74)
		{
			goto IL_028f;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BassMix.BASS_Mixer_StreamAddChannel(mixerStream, midiStream, BASSFlag.BASS_DEFAULT " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_75;
		L_75 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_3 = L_75;
		Il2CppFakeBox<int32_t> L_76(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_77;
		L_77 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_76), NULL);
		String_t* L_78;
		L_78 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral12B871CDB68C91018FA0666FBFABF1FBC025A5E5, L_77, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_78, NULL);
	}

IL_028f:
	{
		// if (!Bass.BASS_ChannelPlay(mixerStream, false))
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_79 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Bass_BASS_ChannelPlay_mC64237181A39FD1AD4271B103DDD94D6530449B4(L_79, (bool)0, NULL);
		if (L_80)
		{
			goto IL_02c0;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_ChannelPlay " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_81;
		L_81 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_3 = L_81;
		Il2CppFakeBox<int32_t> L_82(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_83;
		L_83 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_82), NULL);
		String_t* L_84;
		L_84 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB1D90842ECCB57CAF36F53172C3AC044CD8772B7, L_83, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_84, NULL);
		// return 0;
		return 0;
	}

IL_02c0:
	{
		// return 1;
		return 1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BASS24SynthPlugin_Stop_m007E47E1E439712C67BCCD038220588D2A6051D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mixerStream == 0) return 0;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (mixerStream == 0) return 0;
		return 0;
	}

IL_0009:
	{
		// StopRecording();
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		BASS24SynthPlugin_StopRecording_m9722A47CC1A57237F2BC0D6FCC9C080C4A6F8C12(NULL);
		// if (midiStream != 0)
		int32_t L_1 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// BassMix.BASS_Mixer_ChannelRemove(midiStream);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_2 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		bool L_3;
		L_3 = BassMix_BASS_Mixer_ChannelRemove_m10060426656E788BC557910731217BDBF5AF4B03(L_2, NULL);
		// Bass.BASS_StreamFree(midiStream);
		int32_t L_4 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Bass_BASS_StreamFree_m84D2A17D0E4530A6867124FDB385C6E8E42CBDDE(L_4, NULL);
		// midiStream = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3 = 0;
	}

IL_0031:
	{
		// Bass.BASS_ChannelStop(mixerStream);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_6 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Bass_BASS_ChannelStop_mF9A9313E884972806824672B36A409E4678BBAB3(L_6, NULL);
		// Bass.BASS_StreamFree(mixerStream);
		int32_t L_8 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		bool L_9;
		L_9 = Bass_BASS_StreamFree_m84D2A17D0E4530A6867124FDB385C6E8E42CBDDE(L_8, NULL);
		// mixerStream = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4 = 0;
		// DestroyAudioSource();
		BASS24SynthPlugin_DestroyAudioSource_m3A5E670D3BFA5FC6A6AA585494EC54567E6EB185(NULL);
		// return 1;
		return 1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::SendMidiMessage(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BASS24SynthPlugin_SendMidiMessage_mBB1124DA380FF285FB55720AD3B06F12834A27C8 (int32_t ___Command0, int32_t ___Data11, int32_t ___Data22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (midiStream == 0) return 0;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (midiStream == 0) return 0;
		return 0;
	}

IL_0009:
	{
		// byte[] events = { (byte)Command, (byte)Data1, (byte)Data2 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int32_t L_3 = ___Command0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		int32_t L_5 = ___Data11;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_4;
		int32_t L_7 = ___Data22;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)L_7));
		V_0 = L_6;
		// int size = Marshal.SizeOf(events[0]) * events.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC(L_10, Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		// IntPtr p = Marshal.AllocHGlobal(size);
		intptr_t L_13;
		L_13 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)(((RuntimeArray*)L_12)->max_length)))), NULL);
		V_1 = L_13;
		// Marshal.Copy(events, 0, p, events.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		intptr_t L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_14, 0, L_15, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		// BassMidi.BASS_MIDI_StreamEvents(midiStream, BASSMIDIEventMode.BASS_MIDI_EVENTS_RAW | BASSMIDIEventMode.BASS_MIDI_EVENTS_NORSTATUS, 0, p, 3);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_17 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		intptr_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = BassMidi_BASS_MIDI_StreamEvents_m6E4D15E18F89B724C10BFFE766E8BBEA308A5A43(L_17, ((int32_t)33619968), 0, L_18, 3, NULL);
		// Marshal.FreeHGlobal(p);
		intptr_t L_20 = V_1;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_20, NULL);
		// return 1;
		return 1;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.BASS24SynthPlugin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BASS24SynthPlugin__cctor_m55EED3A691BB007CE4989DE479AB026988756E6E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int recordingStream = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0 = 0;
		// static int soundFont = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___soundFont_2 = 0;
		// static int midiStream = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3 = 0;
		// static int mixerStream = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4 = 0;
		// static int sampleRate = 44100;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___sampleRate_5 = ((int32_t)44100);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9A97919BBA3C49B2B7ABD0D49485C149D50AFA6F (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline (AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* __this, const RuntimeMethod* method) 
{
	{
		// public AudioClipBass24 clipBass24 => _clipBass24;
		AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* L_0 = __this->____clipBass24_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AudioClipBass24_get_streamFX_mF06BADA66EC1B910602C081525E1B3F6B88D82B4_inline (AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* __this, const RuntimeMethod* method) 
{
	{
		// public int streamFX { get; private set; }
		int32_t L_0 = __this->___U3CstreamFXU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
