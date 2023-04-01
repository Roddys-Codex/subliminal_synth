#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<ForieroEngine.MIDIUnified.Interfaces.IMidiController,System.Boolean>
struct Func_2_t87D31797397702DBD4465265F64927E42ED6A361;
// System.Func`2<ForieroEngine.MIDIUnified.Plugins.ITimeProvider,System.Boolean>
struct Func_2_t550699288713F584B977BA55FDB459DE3973C95B;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<ForieroEngine.MIDIUnified.Interfaces.IMidiController>
struct IEnumerable_1_t411CF19FD036BCC90F34BD5E9A82517B57A69E04;
// System.Collections.Generic.IEnumerable`1<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>
struct IEnumerable_1_t4C6C76A238DBF664FEE75B04E339F7F87305468C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiButton>
struct KeyCollection_tA4D938A8ECC3D24BA046E64F99C6AD4D78C056F5;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiFader>
struct KeyCollection_t33E655F9EF7AA2FBCBF00A974A9EB06116939663;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>
struct KeyCollection_tDBEDCF83966F2DDCB9444DBDC0B573ADB0D1F04E;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKnob>
struct KeyCollection_t84DC4728361CACDA9507DF5C072AC9393FF08311;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiPercussion>
struct KeyCollection_t94BC1B0C24187221295FEA32AB254EEF442F7B1D;
// System.Collections.Generic.List`1<AudioClipBass24>
struct List_1_tB1E679AD4D38E75797FFAE915463BCE160D8F76E;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Interfaces.IMidiController>
struct List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0;
// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>
struct List_1_t695DADED0C4A2D6A177333579E8B900B079408F9;
// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>
struct List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>>
struct Node_t7A54DF583F31DDB8F2557C2C6F1D1B120DD13902;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Node_t9428B1AE1DCFBDF646991CC0C0390F53939E1987;
// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>
struct NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149;
// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1/NoteT<ForieroEngine.MIDIUnified.Plugins.MidiMessage>
struct NoteT_tB69BC07B2B627E9B358AF56BF6231045194919C0;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiButton>
struct SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40;
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiFader>
struct SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3;
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>
struct SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05;
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKnob>
struct SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7;
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiPercussion>
struct SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9;
// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>
struct SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>>
struct SortedSet_1_t3A80C4D5A24EF906586B683C7BA949F90C63BA41;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct SortedSet_1_t8407F81306592F16ACD473979739094A09F684E7;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>>>
struct Stack_1_tE94F6DFB8277399D3C84AEE0C94EBD9ACB43FC90;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>>
struct Stack_1_t311266B2ECD5409479F7BC6F9BA2617342EBBF82;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiButton>>
struct TreeSet_1_t4E1C4F96D9689C89B80D2A28AAF518CB8BEE8C57;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiFader>>
struct TreeSet_1_t266D09DF552963283A70CE5D4CCA2EEEBA832E70;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>>
struct TreeSet_1_tB7F4EE19A6E5BF0BCEB946156D66DBE7EA04D5DB;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKnob>>
struct TreeSet_1_tB08D226CB1CF847756478B395EB5046485DD3E59;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiPercussion>>
struct TreeSet_1_t39C83E92D2954228524DB7BA375D38211EC1FC40;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiButton>
struct ValueCollection_tE880EA35ECAD653D87FA2D7EA96D7D7C06802C96;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiFader>
struct ValueCollection_t95940C29C091512F4330440E7CCBF3652ABA1139;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>
struct ValueCollection_tBCA7AC15191FC03EFB803667138BB0508498E09C;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKnob>
struct ValueCollection_t222F656B006F7EE2F81CEE83F53C45400B16E295;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiPercussion>
struct ValueCollection_tE3D445163AF1D883733351C50E32DC87A76121E0;
// Un4seen.Bass.AddOn.Midi.BASS_MIDI_FONT[]
struct BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ForieroEngine.MIDIUnified.Interfaces.IMidiController[]
struct IMidiControllerU5BU5D_tAF0BDD2C2628B9CF871FF23538533FAA4C5CCE72;
// ForieroEngine.MIDIUnified.Plugins.ITimeProvider[]
struct ITimeProviderU5BU5D_t34D641CDE147DEA5AECD93D406FC15214CBCF9D7;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// ForieroEngine.MIDIUnified.Plugins.MidiDevice[]
struct MidiDeviceU5BU5D_t2821EDC450EC8D80CA25F1E243919C0445ACE3F4;
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
// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data[]
struct DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioClipBass24
struct AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71;
// AudioSourceBass24
struct AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Un4seen.Bass.AddOn.Enc.ENCODEPROC
struct ENCODEPROC_t529AC7CECBB4A6C52A2BA99E73F40B65C1463423;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
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
// ForieroEngine.MIDIUnified.Interfaces.IMidiController
struct IMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB;
// ForieroEngine.MIDIUnified.Plugins.IMidiDevice
struct IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1;
// ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice
struct IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19;
// ForieroEngine.MIDIUnified.Plugins.IMidiINDevice
struct IMidiINDevice_tEA2A001463E39070F9080E4E57AEEBDAEE90AB4A;
// ForieroEngine.MIDIUnified.Interfaces.IMidiKey
struct IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D;
// ForieroEngine.MIDIUnified.Interfaces.IMidiKeys
struct IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2;
// ForieroEngine.MIDIUnified.Plugins.IMidiOUTDevice
struct IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// ForieroEngine.MIDIUnified.Plugins.ITimeProvider
struct ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// MIDISettings
struct MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E;
// ForieroEngine.MIDIUnified.Midi.MetaEvent
struct MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ForieroEngine.MIDIUnified.Interfaces.MidiButtons
struct MidiButtons_t830F7B74B213FDC7EA9802905DA8C25A3BD72ED3;
// ForieroEngine.MIDIUnified.Plugins.MidiDevice
struct MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7;
// ForieroEngine.MIDIUnified.Midi.MidiEvent
struct MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573;
// ForieroEngine.MIDIUnified.Interfaces.MidiFaders
struct MidiFaders_tE2AB00C5D4F260EB29A5C454B2F8C897B03EAFBE;
// ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID
struct MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607;
// ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE
struct MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196;
// ForieroEngine.MIDIUnified.Interfaces.MidiKeys
struct MidiKeys_t7F0A91DBB8D80E88714337D50D3BB36A4078DC77;
// ForieroEngine.MIDIUnified.Interfaces.MidiKnobs
struct MidiKnobs_t6937011DFC0F68FBF5C476761B9EFB96D9871449;
// ForieroEngine.MIDIUnified.Plugins.MidiMessage
struct MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7;
// ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID
struct MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352;
// ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceNONE
struct MidiOUTDeviceNONE_tB3827D2AFC797A8040EF94EAFDE0308F592FEDE3;
// ForieroEngine.MIDIUnified.Interfaces.MidiPercussions
struct MidiPercussions_t51CF16D66292228134A6E7D03403ADC621494627;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent
struct PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8;
// Un4seen.Bass.SYNCPROC
struct SYNCPROC_t3FD6564C701F16D9C8D0E6FBFF31D453A73DFCAC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ForieroEngine.MIDIUnified.Midi.SequencerSpecificEvent
struct SequencerSpecificEvent_tA07E87BA1D002437644F3B19780A2D2DD93FC54F;
// ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent
struct SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ForieroEngine.MIDIUnified.Midi.SysexEvent
struct SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// ForieroEngine.MIDIUnified.Midi.TempoEvent
struct TempoEvent_tC07B0EF7CBFA1A4FF380CD1744D0B3C7F88B574B;
// ForieroEngine.MIDIUnified.Midi.TextEvent
struct TextEvent_tD4AC75EA435FA961BF0823159A5C889EED6D954F;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent
struct TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B;
// ForieroEngine.MIDIUnified.Midi.TrackSequenceNumberEvent
struct TrackSequenceNumberEvent_t04AEB51078DBBAE62CBCE8CE565E9F70187DCD13;
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
// ForieroEngine.MIDIUnified.Interfaces.MidiControllers/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31;
// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB;
// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25
struct U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9;
// ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7;
// ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25
struct U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// ForieroEngine.MIDIUnified.Plugins.TimeProviders/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D;
// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data
struct Data_t49EB86D9FF644DFF33E94E234552A1755960F283;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Data_t49EB86D9FF644DFF33E94E234552A1755960F283_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ForieroEngineExtensions_t2EAA6E289E0B71711C758A884AA6562A249F7863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t550699288713F584B977BA55FDB459DE3973C95B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t87D31797397702DBD4465265F64927E42ED6A361_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMidiINDevice_tEA2A001463E39070F9080E4E57AEEBDAEE90AB4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t695DADED0C4A2D6A177333579E8B900B079408F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Synth_t3369EA5E60CACC2A4689A9F2F8EED7E74FEB80B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01F561DB717C4F1F85E741F829AD28D29B28E51A;
IL2CPP_EXTERN_C String_t* _stringLiteral096337ABDF61BE0AFAB9B9D782471249FB163DEE;
IL2CPP_EXTERN_C String_t* _stringLiteral1092046D2432FA58A38E8CF511BF553D9973668A;
IL2CPP_EXTERN_C String_t* _stringLiteral12B871CDB68C91018FA0666FBFABF1FBC025A5E5;
IL2CPP_EXTERN_C String_t* _stringLiteral132F7E7E8321FA0F727AF7721168AA509660E6D7;
IL2CPP_EXTERN_C String_t* _stringLiteral151A799B37703887590AAE6998B348867178B75D;
IL2CPP_EXTERN_C String_t* _stringLiteral1586A6AA5864E5E6DE4F613A00FC4FA896BA8CEA;
IL2CPP_EXTERN_C String_t* _stringLiteral18AE65A0A70B10AEBBE4BA2B5110A2070B6BB412;
IL2CPP_EXTERN_C String_t* _stringLiteral20194D6ACF3F338C6C9B7FFA006DA8C7CBE78464;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral22F0D5E4C73FDB1CC93C433264B3EEB647FC8887;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24F5F813B5553DCE97BED2B38E7916EFCEAD1662;
IL2CPP_EXTERN_C String_t* _stringLiteral2688A3B464EB50622F2DC9BD7A70A1BBBAC02D41;
IL2CPP_EXTERN_C String_t* _stringLiteral2D2AF143890DFF0B9CFDFD4807F8D79958DCD17F;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB0BC263E22FD48D52C4A7968A0BCCBB0425D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral2F45EBBFDE312BA7874EA2012D36E8930E504E0A;
IL2CPP_EXTERN_C String_t* _stringLiteral30E0B0A31702A072D1299A95B81FB5B741211A79;
IL2CPP_EXTERN_C String_t* _stringLiteral3107BBA8540BCCB08501B1DE01852D9BE4CBCDC2;
IL2CPP_EXTERN_C String_t* _stringLiteral36927E29337C770B3A29FAC284C8515C7BE5B388;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB53AE6773AE7325FFA588A639E27D2492A0E18;
IL2CPP_EXTERN_C String_t* _stringLiteral3C74EE53B1AF65557F9BDF1EAF0C416BADC79DB9;
IL2CPP_EXTERN_C String_t* _stringLiteral3CD345253F9878B88276F1C2C5A91911C419FF5B;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9F86060BC2A4344AEAED0524E0B4DFAE2CEE1B;
IL2CPP_EXTERN_C String_t* _stringLiteral404648D5009520207A387D415FE14F5B6620F9D9;
IL2CPP_EXTERN_C String_t* _stringLiteral421FA1E9E3784713B246ADD13F9E8C5240220139;
IL2CPP_EXTERN_C String_t* _stringLiteral4273EF9CB477BFB57085C60BD43CC55EEA609E59;
IL2CPP_EXTERN_C String_t* _stringLiteral43A371BA9EAD3F152A2D893D2C212EDBD64DB4D0;
IL2CPP_EXTERN_C String_t* _stringLiteral44ACD1FE59D6ECAE6C5C355170F9AD8F0A295AF4;
IL2CPP_EXTERN_C String_t* _stringLiteral45E4755B7A3A0C32E148B8024B606FD6A61EC424;
IL2CPP_EXTERN_C String_t* _stringLiteral45EC825FE29761063B7F86AAF7F0FFC6BD1BC1D9;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4A8BDE31034DCB18BE184AF0A9EAE6BD4D9EF08A;
IL2CPP_EXTERN_C String_t* _stringLiteral51AC8AB7EDCBC23D8A39ACDE7B30FBAB6B719D36;
IL2CPP_EXTERN_C String_t* _stringLiteral549E092FA757B20353BE7B6B56A82D9BDC5BB2CC;
IL2CPP_EXTERN_C String_t* _stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7;
IL2CPP_EXTERN_C String_t* _stringLiteral56E66415CA843BDCA3BC259204F8CA220FA782B5;
IL2CPP_EXTERN_C String_t* _stringLiteral57D629148CFC77A66F6CC188642C4B0D25780B0E;
IL2CPP_EXTERN_C String_t* _stringLiteral5A7D5B62ECF2AEDF540C508125DBC431BBA3EE74;
IL2CPP_EXTERN_C String_t* _stringLiteral5AB7726D0527457D52A9361A4010822DAA133FB2;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB7AA71E69D129C9176305CAB6A76427C527E84;
IL2CPP_EXTERN_C String_t* _stringLiteral5C48882D3E7C40CECB2423A087ED1E46E60166B9;
IL2CPP_EXTERN_C String_t* _stringLiteral5DDE661A14F5B474F87A159AA73F9995D4A0C400;
IL2CPP_EXTERN_C String_t* _stringLiteral5EDCDAA07CE9C5D2FDE677FF61317300F043F7D5;
IL2CPP_EXTERN_C String_t* _stringLiteral6B11AA0B5D8E692323923F7AE908FEEC38913467;
IL2CPP_EXTERN_C String_t* _stringLiteral6C5FDF1937BC9A4D9C27A95437C19036532B2EB0;
IL2CPP_EXTERN_C String_t* _stringLiteral70ADCD6FBAC1B27833FD9427753B62F86319A827;
IL2CPP_EXTERN_C String_t* _stringLiteral70C3208D68534E10EDDDDF84F2406FE55CFBB08A;
IL2CPP_EXTERN_C String_t* _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7C1B0457751F997932313D669C10785926261EDF;
IL2CPP_EXTERN_C String_t* _stringLiteral7C31CDBEF783C2B2AA1902C4007F58F2B10A8B06;
IL2CPP_EXTERN_C String_t* _stringLiteral80D8ACE888A58EAF1B222E263FBF06E5563B815B;
IL2CPP_EXTERN_C String_t* _stringLiteral8B6215BD7E9D7E899E199125709A68D9146D40D6;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral91840E7E1D2983503B7CC45A40C62FE39E6D3C13;
IL2CPP_EXTERN_C String_t* _stringLiteral94DA9EA1C901157BD9E357D5B89B90C3748E47FB;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral96E86163C1CCBE54182D19B366160B9DDA8B6B5A;
IL2CPP_EXTERN_C String_t* _stringLiteral9BB05EA67B18016BF764400B597714AB7AD08CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC08BED511D92683BA126F75A16D4E530CA6681;
IL2CPP_EXTERN_C String_t* _stringLiteral9CCD25C6B8FE128F4D1AD0BFB6C83BEC454529FD;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0D012E15EC76778603E614B27D347BC092EAB0;
IL2CPP_EXTERN_C String_t* _stringLiteral9D21C5A7640248157EE9BF42D6074B11B3031C4C;
IL2CPP_EXTERN_C String_t* _stringLiteral9EA1779715C3B398E93C925B7FE0872BE6BC7385;
IL2CPP_EXTERN_C String_t* _stringLiteralA1BE15AC1B56C08DD32895F485AA8DAC582400F4;
IL2CPP_EXTERN_C String_t* _stringLiteralA1E532619F54874E046D40D48FB4EFDC8B5ECD3E;
IL2CPP_EXTERN_C String_t* _stringLiteralA72660D73E937C1E6F81615C2E599B53A081EA94;
IL2CPP_EXTERN_C String_t* _stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralB1D90842ECCB57CAF36F53172C3AC044CD8772B7;
IL2CPP_EXTERN_C String_t* _stringLiteralB511D0A10B2F4B8AC168C6AD2CA5FDEB2410F4DC;
IL2CPP_EXTERN_C String_t* _stringLiteralB916716242AD4024082455767A31A9AE0E680091;
IL2CPP_EXTERN_C String_t* _stringLiteralC5DF33D23247684B52500B8C8F161D5D91D50E71;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D5EF7C6E977B7BDA76844DE5A303DB46553EBD;
IL2CPP_EXTERN_C String_t* _stringLiteralC9FFCF63A044A635A45ED78EAD2E081EBCD12841;
IL2CPP_EXTERN_C String_t* _stringLiteralD0304E037333ADD63DA958D216D2258D971E7A2C;
IL2CPP_EXTERN_C String_t* _stringLiteralD483783AD1B0A3556D04C959A4DB869D3CE4A73E;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD857983CB6F3E4D2C60DE8914CC9627DF44D1CCB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCBDC68DBE3325F249B984552C2AB1E4D64292B7;
IL2CPP_EXTERN_C String_t* _stringLiteralF60C4BD61933EFE4F42954BD1522D56C0E9D9BD4;
IL2CPP_EXTERN_C String_t* _stringLiteralF9363BBA7CC0947AE1727E29A3FA75A9928B784F;
IL2CPP_EXTERN_C String_t* _stringLiteralFF01C47ABD568A459C8EA38273E930831E0F8561;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisSByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_mE3F66AC293CE329D2B3BC8B9F4866623AA3F6C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_mEF555A8D005571E24B687E2654B5C6B417F6234F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_m87723FE4F053386B84316BA22811D2420335B1AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_m25BE14DE5087ACC3865C6A41DF8A8E29FBA62E49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_m675F2EE42EEB01BF5471F2A9D6891710D519F1DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_mF483978A6590B237CA1581B4742E9A9DF63C86E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4A6AFC2BBB8CC84111DB782B037CAF7962529F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB35D0907CBD06E9FAB567B4266B2DBD0BA404F66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD8BD27FC228849B672892E12B4FA0ACBB002437F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303_m27C527DC61006832BD8E32F50E1D3A5CA7ECB691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m37DE5B75902D6DBD70BB51A86C2644A53035E362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m841DCFB409F52845366CE1F9222655402F7FF7A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m190998538EA719215017571382F68DCC7D76A96F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m470427C14592D2C61C4C9819C446D6EF96ED5E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6E99FCD9262AB77AAD32DBF16BE3401ECFB0D5C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD1857478C016603CCB5F0E1633904589E695E280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mE815E9B73712D4CF2C417C56A945B97096EB45A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m609BE04404E3AE382E4CBA6C254803438C4B27B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE2922815C857F58699608BCC184BD944912AB48F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MidiThread_MidiInThread_m5E1D98A8BDB388214A9D7E4994359DAE374B5E48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MidiThread_MidiOutThread_m27934A43F24AED93986600F6A29C882851C8A23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PitchWheelChangeEvent__ctor_mA6C8FB694397AFABABACD6C794CB02DBB027F25D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PitchWheelChangeEvent_set_Pitch_m0B1DA7CF68AA8127AD1DB9CD6E858AFD0B43C6A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmpteOffsetEvent__ctor_m20C1E94C98990243B4E12280D1405C814A435BB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m81FAE9CC8688645B3511CE21A848B77A33B8072C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m9DE65FB191A791F619EECC453F72FAE48C1EC36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_mA6AE97E9D76B374DBA9D05BEB164F8AEE4E70425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_mD38A239C1D3E747209209F15046360F31F871CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_mF697384CF443145661EE78BD1AE987798B77CCC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TempoEvent__ctor_m9B477170A212F8DA8A27B5C5B692207F23CF1982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeSignatureEvent__ctor_m7FE815166973D61A52B5EA767531AA37CB0CDFBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackSequenceNumberEvent__ctor_m49DC768886BE41F68159FF3A3FABD27211C829BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_m13223E8C6B414E1D5281BCF5B0DC3860D66BE405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_mA6BDA8B1D9426DD847A2837B1FE97900DCDC7489_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CGetByIdU3Eb__0_mD0BD3E1F0EFB121D168669FEAFA1894E9F69F68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetByIdU3Eb__0_mA00682CA54951F62E2849FB4F0BF710D68686D60_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7;;
struct MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com;
struct MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com;;
struct MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke;
struct MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke;;

struct BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};

struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value_0;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Interfaces.IMidiController>
struct List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMidiControllerU5BU5D_tAF0BDD2C2628B9CF871FF23538533FAA4C5CCE72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMidiControllerU5BU5D_tAF0BDD2C2628B9CF871FF23538533FAA4C5CCE72* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>
struct List_1_t695DADED0C4A2D6A177333579E8B900B079408F9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ITimeProviderU5BU5D_t34D641CDE147DEA5AECD93D406FC15214CBCF9D7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t695DADED0C4A2D6A177333579E8B900B079408F9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ITimeProviderU5BU5D_t34D641CDE147DEA5AECD93D406FC15214CBCF9D7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>
struct List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MidiDeviceU5BU5D_t2821EDC450EC8D80CA25F1E243919C0445ACE3F4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MidiDeviceU5BU5D_t2821EDC450EC8D80CA25F1E243919C0445ACE3F4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiButton>
struct SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_tA4D938A8ECC3D24BA046E64F99C6AD4D78C056F5* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_tE880EA35ECAD653D87FA2D7EA96D7D7C06802C96* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t4E1C4F96D9689C89B80D2A28AAF518CB8BEE8C57* ____set_2;
};

// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiFader>
struct SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t33E655F9EF7AA2FBCBF00A974A9EB06116939663* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t95940C29C091512F4330440E7CCBF3652ABA1139* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t266D09DF552963283A70CE5D4CCA2EEEBA832E70* ____set_2;
};

// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>
struct SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_tDBEDCF83966F2DDCB9444DBDC0B573ADB0D1F04E* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_tBCA7AC15191FC03EFB803667138BB0508498E09C* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_tB7F4EE19A6E5BF0BCEB946156D66DBE7EA04D5DB* ____set_2;
};

// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKnob>
struct SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t84DC4728361CACDA9507DF5C072AC9393FF08311* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t222F656B006F7EE2F81CEE83F53C45400B16E295* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_tB08D226CB1CF847756478B395EB5046485DD3E59* ____set_2;
};

// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiPercussion>
struct SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t94BC1B0C24187221295FEA32AB254EEF442F7B1D* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_tE3D445163AF1D883733351C50E32DC87A76121E0* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t39C83E92D2954228524DB7BA375D38211EC1FC40* ____set_2;
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

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// ForieroEngine.MIDIUnified.Interfaces.MidiButtons
struct MidiButtons_t830F7B74B213FDC7EA9802905DA8C25A3BD72ED3  : public RuntimeObject
{
	// System.String ForieroEngine.MIDIUnified.Interfaces.MidiButtons::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiButton> ForieroEngine.MIDIUnified.Interfaces.MidiButtons::<Buttons>k__BackingField
	SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40* ___U3CButtonsU3Ek__BackingField_1;
};

// ForieroEngine.MIDIUnified.Interfaces.MidiControllers
struct MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56  : public RuntimeObject
{
};

struct MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields
{
	// ForieroEngine.MIDIUnified.Interfaces.IMidiController ForieroEngine.MIDIUnified.Interfaces.MidiControllers::Selected
	RuntimeObject* ___Selected_0;
	// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Interfaces.IMidiController> ForieroEngine.MIDIUnified.Interfaces.MidiControllers::Controllers
	List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* ___Controllers_1;
};

// ForieroEngine.MIDIUnified.Plugins.MidiDevice
struct MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7  : public RuntimeObject
{
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiDevice::deviceId
	int32_t ___deviceId_0;
	// System.String ForieroEngine.MIDIUnified.Plugins.MidiDevice::name
	String_t* ___name_1;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiDevice::isEditor
	bool ___isEditor_2;
};

// ForieroEngine.MIDIUnified.Midi.MidiEvent
struct MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573  : public RuntimeObject
{
	// ForieroEngine.MIDIUnified.Midi.MidiCommandCode ForieroEngine.MIDIUnified.Midi.MidiEvent::commandCode
	uint8_t ___commandCode_0;
	// System.Int32 ForieroEngine.MIDIUnified.Midi.MidiEvent::channel
	int32_t ___channel_1;
	// System.Int32 ForieroEngine.MIDIUnified.Midi.MidiEvent::deltaTime
	int32_t ___deltaTime_2;
	// System.Int64 ForieroEngine.MIDIUnified.Midi.MidiEvent::absoluteTime
	int64_t ___absoluteTime_3;
};

// ForieroEngine.MIDIUnified.Interfaces.MidiFaders
struct MidiFaders_tE2AB00C5D4F260EB29A5C454B2F8C897B03EAFBE  : public RuntimeObject
{
	// System.String ForieroEngine.MIDIUnified.Interfaces.MidiFaders::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiFader> ForieroEngine.MIDIUnified.Interfaces.MidiFaders::<Faders>k__BackingField
	SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3* ___U3CFadersU3Ek__BackingField_1;
};

// ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID
struct MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607  : public RuntimeObject
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiINDeviceNONE
struct MidiINDeviceNONE_t58C51AF049189086CEB9182FB31A333B64F56196  : public RuntimeObject
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin
struct MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388  : public RuntimeObject
{
};

struct MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields
{
	// ForieroEngine.MIDIUnified.Plugins.IMidiINDevice ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::iMidiInDevice
	RuntimeObject* ___iMidiInDevice_0;
	// ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::iMidiEditorDevice
	RuntimeObject* ___iMidiEditorDevice_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::initialized
	bool ___initialized_2;
	// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::connectedDevices
	List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* ___connectedDevices_3;
	// System.Collections.Generic.List`1<System.String> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::deviceNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___deviceNames_4;
	// ForieroEngine.MIDIUnified.Plugins.IMidiDevice ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::iMidiDevice
	RuntimeObject* ___iMidiDevice_5;
	// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::connectedEditorDevices
	List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* ___connectedEditorDevices_6;
	// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::OnDeviceConnected
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* ___OnDeviceConnected_7;
	// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::OnEditorDeviceConnected
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* ___OnEditorDeviceConnected_8;
	// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::OnDeviceDisconnected
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* ___OnDeviceDisconnected_9;
	// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::OnEditorDeviceDisconnected
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* ___OnEditorDeviceDisconnected_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::threaded
	bool ___threaded_11;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::sleep
	int32_t ___sleep_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::through
	bool ___through_13;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::synth
	bool ___synth_14;
	// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::Messages
	NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* ___Messages_15;
	// ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::MessagesEditor
	NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* ___MessagesEditor_16;
};

// ForieroEngine.MIDIUnified.Interfaces.MidiKeys
struct MidiKeys_t7F0A91DBB8D80E88714337D50D3BB36A4078DC77  : public RuntimeObject
{
	// System.String ForieroEngine.MIDIUnified.Interfaces.MidiKeys::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.MidiKeys::<Keys>k__BackingField
	SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* ___U3CKeysU3Ek__BackingField_1;
};

// ForieroEngine.MIDIUnified.Interfaces.MidiKnobs
struct MidiKnobs_t6937011DFC0F68FBF5C476761B9EFB96D9871449  : public RuntimeObject
{
	// System.String ForieroEngine.MIDIUnified.Interfaces.MidiKnobs::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKnob> ForieroEngine.MIDIUnified.Interfaces.MidiKnobs::<Knobs>k__BackingField
	SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7* ___U3CKnobsU3Ek__BackingField_1;
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

// ForieroEngine.MIDIUnified.Interfaces.MidiPercussions
struct MidiPercussions_t51CF16D66292228134A6E7D03403ADC621494627  : public RuntimeObject
{
	// System.String ForieroEngine.MIDIUnified.Interfaces.MidiPercussions::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiPercussion> ForieroEngine.MIDIUnified.Interfaces.MidiPercussions::<Perscussions>k__BackingField
	SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9* ___U3CPerscussionsU3Ek__BackingField_1;
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

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// ForieroEngine.MIDIUnified.Plugins.TimeProviders
struct TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0  : public RuntimeObject
{
};

struct TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields
{
	// ForieroEngine.MIDIUnified.Plugins.ITimeProvider ForieroEngine.MIDIUnified.Plugins.TimeProviders::<iTimeProvider>k__BackingField
	RuntimeObject* ___U3CiTimeProviderU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.ITimeProvider> ForieroEngine.MIDIUnified.Plugins.TimeProviders::_providers
	List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* ____providers_1;
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

// MIDISettings/MidiOutputSettings
struct MidiOutputSettings_t4BF1952F93BAF55CF10F7227C417BFD6AD2D01C5  : public RuntimeObject
{
	// System.Boolean MIDISettings/MidiOutputSettings::active
	bool ___active_0;
	// System.Boolean MIDISettings/MidiOutputSettings::threaded
	bool ___threaded_1;
	// System.Int32 MIDISettings/MidiOutputSettings::sleep
	int32_t ___sleep_2;
	// System.Boolean MIDISettings/MidiOutputSettings::synth
	bool ___synth_3;
	// System.Boolean MIDISettings/MidiOutputSettings::logAll
	bool ___logAll_4;
	// System.Boolean MIDISettings/MidiOutputSettings::logShortMessages
	bool ___logShortMessages_5;
	// System.Boolean MIDISettings/MidiOutputSettings::logSystemMessages
	bool ___logSystemMessages_6;
};

// ForieroEngine.MIDIUnified.Interfaces.MidiControllers/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31  : public RuntimeObject
{
	// System.String ForieroEngine.MIDIUnified.Interfaces.MidiControllers/<>c__DisplayClass3_0::id
	String_t* ___id_0;
};

// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB  : public RuntimeObject
{
	// System.String ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<>c__DisplayClass25_0::name
	String_t* ___name_0;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<>c__DisplayClass25_0::editor
	bool ___editor_1;
};

// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP
struct DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D  : public RuntimeObject
{
};

struct DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields
{
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP::_initialized
	bool ____initialized_0;
	// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data[] ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP::Tone
	DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* ___Tone_1;
	// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data[] ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP::ControlChange
	DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* ___ControlChange_2;
};

// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/MidiThread
struct MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF  : public RuntimeObject
{
};

struct MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/MidiThread::_terminating
	bool ____terminating_0;
	// System.Threading.Thread ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/MidiThread::_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____thread_1;
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

// ForieroEngine.MIDIUnified.Plugins.TimeProviders/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D  : public RuntimeObject
{
	// System.String ForieroEngine.MIDIUnified.Plugins.TimeProviders/<>c__DisplayClass6_0::id
	String_t* ___id_0;
};

// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data
struct Data_t49EB86D9FF644DFF33E94E234552A1755960F283  : public RuntimeObject
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data::On
	bool ___On_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data::PressedTime
	float ___PressedTime_1;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data::ReleasedTime
	float ___ReleasedTime_2;
};

// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>>
struct Enumerator_t8C971AEDCFDCF4087032D5EF50D79EB5B2F7361C 
{
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_t3A80C4D5A24EF906586B683C7BA949F90C63BA41* ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_tE94F6DFB8277399D3C84AEE0C94EBD9ACB43FC90* ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_t7A54DF583F31DDB8F2557C2C6F1D1B120DD13902* ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;
};

struct Enumerator_t8C971AEDCFDCF4087032D5EF50D79EB5B2F7361C_StaticFields
{
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_t7A54DF583F31DDB8F2557C2C6F1D1B120DD13902* ___s_dummyNode_0;
};

// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Enumerator_t4C822747FB71DA16CE8594D2B3D99238D90A2767 
{
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_t8407F81306592F16ACD473979739094A09F684E7* ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_t311266B2ECD5409479F7BC6F9BA2617342EBBF82* ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_t9428B1AE1DCFBDF646991CC0C0390F53939E1987* ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;
};

struct Enumerator_t4C822747FB71DA16CE8594D2B3D99238D90A2767_StaticFields
{
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_t9428B1AE1DCFBDF646991CC0C0390F53939E1987* ___s_dummyNode_0;
};

// System.Collections.Generic.List`1/Enumerator<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>
struct Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<ForieroEngine.MIDIUnified.Plugins.MidiDevice>
struct Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>
struct KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// ForieroEngine.MIDIUnified.Midi.MetaEvent
struct MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64  : public MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573
{
	// ForieroEngine.MIDIUnified.Midi.MetaEventType ForieroEngine.MIDIUnified.Midi.MetaEvent::metaEvent
	uint8_t ___metaEvent_4;
	// System.Int32 ForieroEngine.MIDIUnified.Midi.MetaEvent::metaDataLength
	int32_t ___metaDataLength_5;
	// System.Byte[] ForieroEngine.MIDIUnified.Midi.MetaEvent::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_6;
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

// ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent
struct PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8  : public MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573
{
	// System.Int32 ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent::pitch
	int32_t ___pitch_4;
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

// ForieroEngine.MIDIUnified.Midi.SysexEvent
struct SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747  : public MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573
{
	// System.Byte[] ForieroEngine.MIDIUnified.Midi.SysexEvent::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_4;
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

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>
struct Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335 
{
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t8C971AEDCFDCF4087032D5EF50D79EB5B2F7361C ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;
};

// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657 
{
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t4C822747FB71DA16CE8594D2B3D99238D90A2767 ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;
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

// ForieroEngine.MIDIUnified.NativeMidiMessage
struct NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 
{
	// System.Byte ForieroEngine.MIDIUnified.NativeMidiMessage::command
	uint8_t ___command_0;
	// System.Byte ForieroEngine.MIDIUnified.NativeMidiMessage::data1
	uint8_t ___data1_1;
	// System.Byte ForieroEngine.MIDIUnified.NativeMidiMessage::data2
	uint8_t ___data2_2;
	// System.Int32 ForieroEngine.MIDIUnified.NativeMidiMessage::dataSize
	int32_t ___dataSize_3;
	// System.IntPtr ForieroEngine.MIDIUnified.NativeMidiMessage::data
	intptr_t ___data_4;
	// System.Int32 ForieroEngine.MIDIUnified.NativeMidiMessage::deviceId
	int32_t ___deviceId_5;
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

// ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage
struct ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E 
{
	// ForieroEngine.MIDIUnified.Plugins.MidiMessage ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage::midiMessage
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___midiMessage_0;
	// ForieroEngine.MIDIUnified.Plugins.ITimeProvider ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage::timeProvider
	RuntimeObject* ___timeProvider_1;
	// System.Double ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage::time
	double ___time_2;
};
// Native definition for P/Invoke marshalling of ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage
struct ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshaled_pinvoke
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke ___midiMessage_0;
	RuntimeObject* ___timeProvider_1;
	double ___time_2;
};
// Native definition for COM marshalling of ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage
struct ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshaled_com
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com ___midiMessage_0;
	RuntimeObject* ___timeProvider_1;
	double ___time_2;
};

// ForieroEngine.MIDIUnified.Midi.SequencerSpecificEvent
struct SequencerSpecificEvent_tA07E87BA1D002437644F3B19780A2D2DD93FC54F  : public MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64
{
	// System.Byte[] ForieroEngine.MIDIUnified.Midi.SequencerSpecificEvent::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_7;
};

// ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent
struct SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F  : public MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64
{
	// System.Byte ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::hours
	uint8_t ___hours_7;
	// System.Byte ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::minutes
	uint8_t ___minutes_8;
	// System.Byte ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::seconds
	uint8_t ___seconds_9;
	// System.Byte ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::frames
	uint8_t ___frames_10;
	// System.Byte ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::subFrames
	uint8_t ___subFrames_11;
};

// ForieroEngine.MIDIUnified.Midi.TempoEvent
struct TempoEvent_tC07B0EF7CBFA1A4FF380CD1744D0B3C7F88B574B  : public MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64
{
	// System.Int32 ForieroEngine.MIDIUnified.Midi.TempoEvent::microsecondsPerQuarterNote
	int32_t ___microsecondsPerQuarterNote_7;
};

// ForieroEngine.MIDIUnified.Midi.TextEvent
struct TextEvent_tD4AC75EA435FA961BF0823159A5C889EED6D954F  : public MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64
{
	// System.String ForieroEngine.MIDIUnified.Midi.TextEvent::text
	String_t* ___text_7;
};

// ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent
struct TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B  : public MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64
{
	// System.Byte ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::numerator
	uint8_t ___numerator_7;
	// System.Byte ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::denominator
	uint8_t ___denominator_8;
	// System.Byte ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::ticksInMetronomeClick
	uint8_t ___ticksInMetronomeClick_9;
	// System.Byte ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::no32ndNotesInQuarterNote
	uint8_t ___no32ndNotesInQuarterNote_10;
};

// ForieroEngine.MIDIUnified.Midi.TrackSequenceNumberEvent
struct TrackSequenceNumberEvent_t04AEB51078DBBAE62CBCE8CE565E9F70187DCD13  : public MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64
{
	// System.UInt16 ForieroEngine.MIDIUnified.Midi.TrackSequenceNumberEvent::sequenceNumber
	uint16_t ___sequenceNumber_7;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25
struct U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9  : public RuntimeObject
{
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::<>t__builder
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ___U3CU3Et__builder_1;
	// System.String ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::name
	String_t* ___name_2;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::editor
	bool ___editor_3;
	// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<>c__DisplayClass25_0 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::<>8__1
	U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB* ___U3CU3E8__1_4;
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::<>s__2
	int32_t ___U3CU3Es__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::<>u__1
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E ___U3CU3Eu__1_6;
};

// ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25
struct U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710  : public RuntimeObject
{
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::<>t__builder
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ___U3CU3Et__builder_1;
	// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::name
	String_t* ___name_2;
	// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::editor
	bool ___editor_3;
	// ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::<>8__1
	U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* ___U3CU3E8__1_4;
	// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::<>s__2
	int32_t ___U3CU3Es__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::<>u__1
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E ___U3CU3Eu__1_6;
};

// System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>
struct Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD  : public MulticastDelegate_t
{
};

// System.Func`2<ForieroEngine.MIDIUnified.Interfaces.IMidiController,System.Boolean>
struct Func_2_t87D31797397702DBD4465265F64927E42ED6A361  : public MulticastDelegate_t
{
};

// System.Func`2<ForieroEngine.MIDIUnified.Plugins.ITimeProvider,System.Boolean>
struct Func_2_t550699288713F584B977BA55FDB459DE3973C95B  : public MulticastDelegate_t
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Un4seen.Bass.AddOn.Enc.ENCODEPROC
struct ENCODEPROC_t529AC7CECBB4A6C52A2BA99E73F40B65C1463423  : public MulticastDelegate_t
{
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data[]
struct DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7  : public RuntimeArray
{
	ALIGN_FIELD (8) Data_t49EB86D9FF644DFF33E94E234552A1755960F283* m_Items[1];

	inline Data_t49EB86D9FF644DFF33E94E234552A1755960F283* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Data_t49EB86D9FF644DFF33E94E234552A1755960F283** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Data_t49EB86D9FF644DFF33E94E234552A1755960F283* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Data_t49EB86D9FF644DFF33E94E234552A1755960F283* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Data_t49EB86D9FF644DFF33E94E234552A1755960F283** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Data_t49EB86D9FF644DFF33E94E234552A1755960F283* value)
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

IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_pinvoke(const MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7& unmarshaled, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_pinvoke_back(const MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke& marshaled, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7& unmarshaled);
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_pinvoke_cleanup(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_com(const MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7& unmarshaled, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com& marshaled);
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_com_back(const MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com& marshaled, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7& unmarshaled);
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_com_cleanup(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_mBF581F7779C3421B4650532D703CE4DC483CDED3_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_m6122FE27DF48CEE6255894462DD3ACC18E577F77_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_get_Item_m4E411DD8E7D7FDFF450A8693BE6436B1B67CED9C_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657 SortedDictionary_2_GetEnumerator_mC6A6DA4C249F5DC2A9CDA29E10140E10BFE4251A_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8FEB9A09D7BAD7243929F23B457BAA6A1E0BDC32_gshared (Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m69D6C20125D63CBD384CAF8602D08FDE8B992F7E_gshared (Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6C8AC4EA02FC896C11AE0DD2AC5EC35CAAFA8704_gshared (Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Byte>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T ForieroEngine.Settings.Settings`1<System.Object>::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Settings_1_get_instance_m6B0E81FCF5E4BFECAA24B2B5D0D7C99D03B9E281_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_mDE44CC599AF0B70E4D6E31A944AF08CB23A26BA1_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, const RuntimeMethod* method) ;
// System.Boolean ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>::Dequeue(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_gshared (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* ___t0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6_gshared (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_gshared (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___t0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Int32>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___function0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisRuntimeObject_m9266DAFFCC2EF9FE96BC71EA236BB309142AD5E6_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, int32_t ___result0, const RuntimeMethod* method) ;
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

// System.Void ForieroEngine.MIDIUnified.Midi.MidiEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiEvent__ctor_mC47B46AEE82789F03D2CBB91158693A913F9795F (MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573* __this, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Midi.MidiEvent::.ctor(System.Int64,System.Int32,ForieroEngine.MIDIUnified.Midi.MidiCommandCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiEvent__ctor_mB7702A8BFFF1D7EC0E33430E5CF6A27519389C9B (MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573* __this, int64_t ___absoluteTime0, int32_t ___channel1, uint8_t ___commandCode2, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent::set_Pitch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PitchWheelChangeEvent_set_Pitch_m0B1DA7CF68AA8127AD1DB9CD6E858AFD0B43C6A9 (PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String ForieroEngine.MIDIUnified.Midi.MidiEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiEvent_ToString_m7B5AD92D1865A137DBC8D28C15CD3F49A9B6FC07 (MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Midi.MidiEvent::GetAsShortMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiEvent_GetAsShortMessage_mF25C12800CB7541933EC9CE022799CD6DA74827E (MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Midi.MidiEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiEvent_Export_m4221E3C12129F0E1EA105C3897D9ABFB1AE8135B (MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Midi.MetaEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaEvent__ctor_m7577D839ABAD6A9399A2A90FE07452395AF21C53 (MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Midi.MetaEvent::.ctor(ForieroEngine.MIDIUnified.Midi.MetaEventType,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaEvent__ctor_mABD79991F32029AF6B905FB29292E9EE44F6E497 (MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64* __this, uint8_t ___metaEventType0, int32_t ___metaDataLength1, int64_t ___absoluteTime2, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String ForieroEngine.MIDIUnified.Midi.MetaEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaEvent_ToString_m09D8AA68A00FE648E79347D44A8D4FF7049EF454 (MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Midi.MetaEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaEvent_Export_m569ACC39F1E2AD58B0A10B547BE8A4854570BCD1 (MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Midi.SysexEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SysexEvent__ctor_m7095FD4053ED98CB3A6383C19FFB19F7FC27D267 (SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// System.Int64 ForieroEngine.MIDIUnified.Midi.MidiEvent::get_AbsoluteTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MidiEvent_get_AbsoluteTime_mEDE11B7153EB2E333A45E2C4D8A6EBB030912AEA (MidiEvent_tB97CF271A4F7EE7A047EF4A77469F76CC32AF573* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::get_TimeSignature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSignatureEvent_get_TimeSignature_m496949AE10A5615127BA7D7EF04AEC0DE87DE661 (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiButtons::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiButtons_set_Id_mA2DADCECEC0AB1B86913F4886D31F82BCBD4E548_inline (MidiButtons_t830F7B74B213FDC7EA9802905DA8C25A3BD72ED3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiButton>::.ctor()
inline void SortedDictionary_2__ctor_mF697384CF443145661EE78BD1AE987798B77CCC0 (SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40*, const RuntimeMethod*))SortedDictionary_2__ctor_mBF581F7779C3421B4650532D703CE4DC483CDED3_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Interfaces.IMidiController>::Contains(T)
inline bool List_1_Contains_m470427C14592D2C61C4C9819C446D6EF96ED5E3E (List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0*, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Interfaces.IMidiController>::Add(T)
inline void List_1_Add_m841DCFB409F52845366CE1F9222655402F7FF7A7_inline (List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiControllers/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4B94A9812DAE076768F6014F803B180FBD95F777 (U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<ForieroEngine.MIDIUnified.Interfaces.IMidiController,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8DBD2E5257BBB23386F31B77523AAAAEA247707C (Func_2_t87D31797397702DBD4465265F64927E42ED6A361* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t87D31797397702DBD4465265F64927E42ED6A361*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<ForieroEngine.MIDIUnified.Interfaces.IMidiController>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisIMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_m675F2EE42EEB01BF5471F2A9D6891710D519F1DD (RuntimeObject* ___source0, Func_2_t87D31797397702DBD4465265F64927E42ED6A361* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t87D31797397702DBD4465265F64927E42ED6A361*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Interfaces.IMidiController>::Remove(T)
inline bool List_1_Remove_mD1857478C016603CCB5F0E1633904589E695E280 (List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Interfaces.IMidiController>::.ctor()
inline void List_1__ctor_m609BE04404E3AE382E4CBA6C254803438C4B27B5 (List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiFaders::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiFaders_set_Id_mEE5BA581C67BEAA4D9999A4DFD90D333E20D67E7_inline (MidiFaders_tE2AB00C5D4F260EB29A5C454B2F8C897B03EAFBE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiFader>::.ctor()
inline void SortedDictionary_2__ctor_m81FAE9CC8688645B3511CE21A848B77A33B8072C (SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3*, const RuntimeMethod*))SortedDictionary_2__ctor_mBF581F7779C3421B4650532D703CE4DC483CDED3_gshared)(__this, method);
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiKeys::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiKeys_set_Id_m3B5D909EDAD5546BA48BE958CC61E2EC9FC0C286_inline (MidiKeys_t7F0A91DBB8D80E88714337D50D3BB36A4078DC77* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>::.ctor()
inline void SortedDictionary_2__ctor_m9DE65FB191A791F619EECC453F72FAE48C1EC36F (SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05*, const RuntimeMethod*))SortedDictionary_2__ctor_mBF581F7779C3421B4650532D703CE4DC483CDED3_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>::ContainsKey(TKey)
inline bool SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A (SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05*, int32_t, const RuntimeMethod*))SortedDictionary_2_ContainsKey_m6122FE27DF48CEE6255894462DD3ACC18E577F77_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>::get_Item(TKey)
inline RuntimeObject* SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140 (SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05*, int32_t, const RuntimeMethod*))SortedDictionary_2_get_Item_m4E411DD8E7D7FDFF450A8693BE6436B1B67CED9C_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>::GetEnumerator()
inline Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335 SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A (SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335 (*) (SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05*, const RuntimeMethod*))SortedDictionary_2_GetEnumerator_mC6A6DA4C249F5DC2A9CDA29E10140E10BFE4251A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>::Dispose()
inline void Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6 (Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335*, const RuntimeMethod*))Enumerator_Dispose_m8FEB9A09D7BAD7243929F23B457BAA6A1E0BDC32_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>::get_Current()
inline KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908 Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533 (Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908 (*) (Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335*, const RuntimeMethod*))Enumerator_get_Current_m69D6C20125D63CBD384CAF8602D08FDE8B992F7E_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_inline (KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey>::MoveNext()
inline bool Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791 (Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335*, const RuntimeMethod*))Enumerator_MoveNext_m6C8AC4EA02FC896C11AE0DD2AC5EC35CAAFA8704_gshared)(__this, method);
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiKnobs::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiKnobs_set_Id_mDCC9B8445FB1A756866E92DC7EA2FE4C23B16D1F_inline (MidiKnobs_t6937011DFC0F68FBF5C476761B9EFB96D9871449* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKnob>::.ctor()
inline void SortedDictionary_2__ctor_mA6AE97E9D76B374DBA9D05BEB164F8AEE4E70425 (SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7*, const RuntimeMethod*))SortedDictionary_2__ctor_mBF581F7779C3421B4650532D703CE4DC483CDED3_gshared)(__this, method);
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiPercussions::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiPercussions_set_Id_m55F9C61F2F785AAAC0EC58E8F232FBA8DFA9E69F_inline (MidiPercussions_t51CF16D66292228134A6E7D03403ADC621494627* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiPercussion>::.ctor()
inline void SortedDictionary_2__ctor_mD38A239C1D3E747209209F15046360F31F871CF0 (SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9*, const RuntimeMethod*))SortedDictionary_2__ctor_mBF581F7779C3421B4650532D703CE4DC483CDED3_gshared)(__this, method);
}
// System.Byte MidiExtensions::ToMidiCommand(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MidiExtensions_ToMidiCommand_m8A3CAD5A59743E8767FA0710CA5487869135FD4E (uint8_t ___i0, const RuntimeMethod* method) ;
// System.Byte ForieroEngine.MIDIUnified.Plugins.MidiMessage::get_Command()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MidiMessage_get_Command_m1A9DD99A9BA29F52A59D075A4E4FC9DD36272087 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, const RuntimeMethod* method) ;
// System.Byte MidiExtensions::ToMidiChannel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MidiExtensions_ToMidiChannel_m281CA98F9EB11B31E7F8F5F4D109D0AAB108EDB5 (uint8_t ___i0, const RuntimeMethod* method) ;
// System.Byte ForieroEngine.MIDIUnified.Plugins.MidiMessage::get_Channel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MidiMessage_get_Channel_m881A63C4081CA0F413538DCE7C1A5753BB933AC4 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::.ctor(ForieroEngine.MIDIUnified.Plugins.MidiMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage__ctor_m284DA3500B17BE6E96E7C522CE5C1272434F9106 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___m0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage__ctor_mFBEE6512C8B3B799920B492E49FD7D68F0847E60 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, int32_t ___aCommand0, int32_t ___aChannel1, int32_t ___aData12, int32_t ___aData23, int32_t ___aDeviceId4, bool ___anEditor5, bool ___through6, bool ___synth7, double ___time8, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage__ctor_m3B26639C2E97CDD05F05BCB7DAC7C51B9997375E (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, int32_t ___aCommand0, int32_t ___aData11, int32_t ___aData22, int32_t ___aDeviceId3, bool ___anEditor4, bool ___through5, bool ___synth6, double ___time7, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::CopyData(ForieroEngine.MIDIUnified.NativeMidiMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage_CopyData_mBB1B424C98B5D90FF098B399A257CE319A31DA90 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 ___m0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::SetShortMessageBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage_SetShortMessageBytes_mFED7490DE859B15FAA31484F31AA15BB532E4BFF (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::SetSystemMessageBytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage_SetSystemMessageBytes_mE07809BB8392638ACF495B9E0682E42F933FE44B (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___size1, const RuntimeMethod* method) ;
// System.Byte[] ForieroEngine.MIDIUnified.Plugins.MidiMessage::GetShortMessageBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MidiMessage_GetShortMessageBytes_mFC3ADA3C58D2AE8B15E34E1B4A95F72145399754 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, const RuntimeMethod* method) ;
// System.String ForieroEngine.MIDIUnified.Plugins.MidiMessage::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiMessage_ToString_m3434FF066CD15B6A6443D4A2DE6A9001E4BFE9B7 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m25B1EA658EE07ADFED51FED61D630E5625336AB5 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::Log(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage_Log_m56199A67422AEA56D8F46A8A841C2B4A1A40B47E (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, String_t* ___prefix0, String_t* ___format1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>::Contains(T)
inline bool List_1_Contains_m190998538EA719215017571382F68DCC7D76A96F (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9*, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>::Add(T)
inline void List_1_Add_m37DE5B75902D6DBD70BB51A86C2644A53035E362_inline (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.TimeProviders/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m1E6D54244B126107685DF7B5AB83DBD0845C746C (U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<ForieroEngine.MIDIUnified.Plugins.ITimeProvider,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5F67ACBF2357442576F3AE329FF406382F73B5FF (Func_2_t550699288713F584B977BA55FDB459DE3973C95B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t550699288713F584B977BA55FDB459DE3973C95B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_mF483978A6590B237CA1581B4742E9A9DF63C86E9 (RuntimeObject* ___source0, Func_2_t550699288713F584B977BA55FDB459DE3973C95B* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t550699288713F584B977BA55FDB459DE3973C95B*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// ForieroEngine.MIDIUnified.Plugins.ITimeProvider ForieroEngine.MIDIUnified.Plugins.TimeProviders::get_iTimeProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TimeProviders_get_iTimeProvider_m8ADF77CDB7A11C6DD0E90CD0FAEF9D6A19A10335_inline (const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.TimeProviders::set_iTimeProvider(ForieroEngine.MIDIUnified.Plugins.ITimeProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeProviders_set_iTimeProvider_m59DD0F700685D83C7CAAB9D241667E5D37C8D717_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>::Remove(T)
inline bool List_1_Remove_mE815E9B73712D4CF2C417C56A945B97096EB45A4 (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// ForieroEngine.MIDIUnified.Plugins.ITimeProvider ForieroEngine.MIDIUnified.Plugins.TimeProviders::GetById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeProviders_GetById_m5BBD3FA1D36DCE94B0A0E556A4680204D2DAB2AD (String_t* ___id0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>::GetEnumerator()
inline Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E List_1_GetEnumerator_m6E99FCD9262AB77AAD32DBF16BE3401ECFB0D5C3 (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E (*) (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>::Dispose()
inline void Enumerator_Dispose_m4A6AFC2BBB8CC84111DB782B037CAF7962529F20 (Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mD8BD27FC228849B672892E12B4FA0ACBB002437F_inline (Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>::MoveNext()
inline bool Enumerator_MoveNext_mB35D0907CBD06E9FAB567B4266B2DBD0BA404F66 (Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.ITimeProvider>::.ctor()
inline void List_1__ctor_mE2922815C857F58699608BCC184BD944912AB48F (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean ForieroDebug::get_CodePerformance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ForieroDebug_get_CodePerformance_m272E47EEF1666F814153B7F8C39612CDE8C21F57 (const RuntimeMethod* method) ;
// System.Diagnostics.Stopwatch System.Diagnostics.Stopwatch::StartNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* Stopwatch_StartNew_mF813F15E68604C7734FECC301B7042A521041259 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_Init_m764AB92707DCFAFF03C04DDAEB85D9665FD7A007 (const RuntimeMethod* method) ;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.String System.TimeSpan::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSP_Init_m17192698516229C80BD779F2BC710E5965D9737C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4 (const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINDeviceANDROID__ctor_m3443305605F24F61032B408C896F98ED11F36983 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/MidiThread::Initialise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_Initialise_m6E23812AF6C3A08164DC2028639AFA813AD801A3 (const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_Refresh_mEFB655C778C485524C9E197A829020CB0E25D70D (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::GetEnumerator()
inline Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B (*) (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::Dispose()
inline void Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331 (Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::get_Current()
inline MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline (Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B* __this, const RuntimeMethod* method)
{
	return ((  MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* (*) (Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::MoveNext()
inline bool Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0 (Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// ForieroEngine.MIDIUnified.Plugins.MidiDevice ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::ConnectDeviceByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* MidiINPlugin_ConnectDeviceByName_mBD78859810263D4E9DBDB2B4F85D265F931AD434 (String_t* ___deviceName0, bool ___editor1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::.ctor()
inline void List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890 (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiDevice__ctor_m4FDBB89113043277282E0942DCA5173CE5803961 (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::Add(T)
inline void List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_inline (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* __this, MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*, MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T ForieroEngine.Settings.Settings`1<MIDISettings>::get_instance()
inline MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D (const RuntimeMethod* method)
{
	return ((  MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* (*) (const RuntimeMethod*))Settings_1_get_instance_m6B0E81FCF5E4BFECAA24B2B5D0D7C99D03B9E281_gshared)(method);
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::GetDeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiINPlugin_GetDeviceName_m7FDAA240EEC062A06549CC1E46B7232D477A8194 (int32_t ___deviceIndex0, const RuntimeMethod* method) ;
// System.Void System.Action`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::Invoke(T)
inline void Action_1_Invoke_m2C2BF1198D9E682AD8362C5AB32A539BB337D911_inline (Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* __this, MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703*, MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// ForieroEngine.MIDIUnified.Plugins.MidiDevice ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::ConnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* MidiINPlugin_ConnectDevice_m02275034E4E593C153BA3FE303FB01365BEE6B9F (int32_t ___deviceIndex0, bool ___editor1, const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::GetDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINPlugin_GetDeviceCount_mE7B0027DFCBC5294B8B0AFA0143B579EECC377ED (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::get_Count()
inline int32_t List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_inline (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::get_Item(System.Int32)
inline MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* (*) (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<ForieroEngine.MIDIUnified.Plugins.MidiDevice>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8 (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::DisconnectDevice(ForieroEngine.MIDIUnified.Plugins.MidiDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_DisconnectDevice_m31644E0669AACEA94BC146851D9ADABDF6C800BC (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* ___connectedDevice0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25__ctor_m393B9C25E274B1D96C9647A022AE4E1D4057C296 (U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
inline AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_m87723FE4F053386B84316BA22811D2420335B1AF (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_mDE44CC599AF0B70E4D6E31A944AF08CB23A26BA1_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_gshared)(__this, method);
}
// System.Boolean ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>::Dequeue(T&)
inline bool NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* ___t0, const RuntimeMethod* method)
{
	return ((  bool (*) (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149*, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*, const RuntimeMethod*))NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_gshared)(__this, ___t0, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/MidiThread::TerminateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_TerminateInternal_m20235D2F402D31BE4766E1530E3E6972599F8257 (const RuntimeMethod* method) ;
// System.Void ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>::.ctor()
inline void NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6 (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* __this, const RuntimeMethod* method)
{
	((  void (*) (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149*, const RuntimeMethod*))NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6_gshared)(__this, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_m808E4EAF1B1381440263C8CB37350DC02B125F18 (Data_t49EB86D9FF644DFF33E94E234552A1755960F283* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.Collections.NonBlocking.NonBlockingQueue`1<ForieroEngine.MIDIUnified.Plugins.MidiMessage>::Enqueue(T)
inline void NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58 (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___t0, const RuntimeMethod* method)
{
	((  void (*) (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149*, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7, const RuntimeMethod*))NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_gshared)(__this, ___t0, method);
}
// System.Boolean MidiExtensions::IsToneON(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiExtensions_IsToneON_m65DD634DE5C44FB8D527589B65EF70F8EE1D6DCA (uint8_t ___i0, const RuntimeMethod* method) ;
// System.Double UnityEngine.AudioSettings::get_dspTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA (const RuntimeMethod* method) ;
// System.Boolean MidiExtensions::IsToneOFF(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiExtensions_IsToneOFF_m70317BB2563F19CB3FCF2B66D9EF086A5E26071F (uint8_t ___i0, const RuntimeMethod* method) ;
// System.Boolean MidiExtensions::IsControlChange(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiExtensions_IsControlChange_m25BE11EE752B780893B94C0ECD9E478394C1A067 (uint8_t ___i0, const RuntimeMethod* method) ;
// ForieroEngine.MIDIUnified.ControllerEnum MidiExtensions::ToControllerEnum(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiExtensions_ToControllerEnum_m1105C219D1EB2D7DC4BAD6BBA1DBAFE0A5E61C14 (uint8_t ___i0, const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::SendMidiMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_SendMidiMessage_m55E42BFE3F880FA6987AF45FFBBFF31D2F8238A9 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___m0, int32_t ___deviceId1, bool ___editor2, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Synthesizer.Synth::SendMidiMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Synth_SendMidiMessage_m509AEC99E77FCA5DCF292B91DF36C8026C7BAB04 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___m0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::DetachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_DetachCurrentThread_mC0F3D8974C0681528B801EF0AC2A54E5C7A2E933 (const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m8CAF468D190BD46EB6728CF1C559F8882EA88EDC (U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB* __this, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_mEF555A8D005571E24B687E2654B5C6B417F6234F (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___awaiter0, U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisRuntimeObject_m9266DAFFCC2EF9FE96BC71EA236BB309142AD5E6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
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
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_Init_mFE101AC616F139A1582D6DACE780E41999397214 (const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTDeviceANDROID::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTDeviceANDROID__ctor_m47746EE8A3297778FAB964325F3AD5ABB3A73BF4 (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* __this, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/MidiThread::Initialise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_Initialise_m600C30E059BA17D9FC86C3B1DA9F0120E6A322D7 (const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_Refresh_m374DA9ECEF71D61FF5576CEFBE0432DC321F104B (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ForieroEngine.MIDIUnified.Plugins.MidiDevice ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::ConnectDeviceByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* MidiOUTPlugin_ConnectDeviceByName_mF3EBF6D8F53C89C7DB4E3C4256D8EC60CB12AEC9 (String_t* ___deviceName0, bool ___editor1, const RuntimeMethod* method) ;
// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::GetDeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiOUTPlugin_GetDeviceName_m98DB385075A36E362017F1E32DD71B91D60EE2FA (int32_t ___deviceIndex0, const RuntimeMethod* method) ;
// ForieroEngine.MIDIUnified.Plugins.MidiDevice ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::ConnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* MidiOUTPlugin_ConnectDevice_m759742868F65B35FCB87F75A57F1A8E48D4CE678 (int32_t ___deviceIndex0, bool ___editor1, const RuntimeMethod* method) ;
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::GetDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_GetDeviceCount_mB506BD38C147AAE2FEB94ADAF8AD3BE79D855548 (const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::DisconnectDevice(ForieroEngine.MIDIUnified.Plugins.MidiDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_DisconnectDevice_m1A1F31FAB6485304E1CF8C0FEFB4FD01811690EE (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* ___connectedDevice0, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25__ctor_m8B5491C32036B549F566E72D553E14E216987D73 (U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_m25BE14DE5087ACC3865C6A41DF8A8E29FBA62E49 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_mDE44CC599AF0B70E4D6E31A944AF08CB23A26BA1_gshared)(__this, ___stateMachine0, method);
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::SendData(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_SendData_mD03FDA0900C0A3CC72472EF216134CE0086BA169 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___deviceId1, bool ___editor2, const RuntimeMethod* method) ;
// System.Void MidiExtensions::Log(System.Byte[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiExtensions_Log_mCBB57339F3A81DD30F864940C376C5E0162C4029 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___deviceId1, String_t* ___prefix2, String_t* ___format3, const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/MidiThread::TerminateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_TerminateInternal_m89380D2CB0350949485E486B28D58E410DD90D63 (const RuntimeMethod* method) ;
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mCD9D158A4F6EA6F04B3E9297A5C4EA598580C151 (U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___awaiter0, U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisRuntimeObject_m9266DAFFCC2EF9FE96BC71EA236BB309142AD5E6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
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
// System.String ForieroEngine.Extensions.ForieroEngineExtensions::PrependPersistentPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ForieroEngineExtensions_PrependPersistentPath_m1B0612959C76A78735CD9F644D195DDB43E2E5F7 (String_t* ___s0, const RuntimeMethod* method) ;
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
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void MIDISoundSettings::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MIDISoundSettings_Init_m06E70FA98A19AE50645DA9D4C4730667BEBD9D9F (int32_t ___sampleRate0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent::.ctor(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PitchWheelChangeEvent__ctor_mA6C8FB694397AFABABACD6C794CB02DBB027F25D (PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// public PitchWheelChangeEvent(BinaryReader br)
		MidiEvent__ctor_mC47B46AEE82789F03D2CBB91158693A913F9795F(__this, NULL);
		// byte b1 = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___br0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		// byte b2 = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___br0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_2);
		V_1 = L_3;
		// if((b1 & 0x80) != 0)
		uint8_t L_4 = V_0;
		V_2 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_4&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// throw new FormatException("Invalid pitchwheelchange byte 1");
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_6 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9363BBA7CC0947AE1727E29A3FA75A9928B784F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PitchWheelChangeEvent__ctor_mA6C8FB694397AFABABACD6C794CB02DBB027F25D_RuntimeMethod_var)));
	}

IL_0030:
	{
		// if((b2 & 0x80) != 0)
		uint8_t L_7 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// throw new FormatException("Invalid pitchwheelchange byte 2");
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_9 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45EC825FE29761063B7F86AAF7F0FFC6BD1BC1D9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PitchWheelChangeEvent__ctor_mA6C8FB694397AFABABACD6C794CB02DBB027F25D_RuntimeMethod_var)));
	}

IL_004a:
	{
		// pitch = b1 + (b2 << 7); // 0x2000 is normal
		uint8_t L_10 = V_0;
		uint8_t L_11 = V_1;
		__this->___pitch_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, ((int32_t)((int32_t)L_11<<7))));
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent::.ctor(System.Int64,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PitchWheelChangeEvent__ctor_mE3D32BF73BC7425FE23A7AE9F8D1FF46F507625B (PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8* __this, int64_t ___absoluteTime0, int32_t ___channel1, int32_t ___pitchWheel2, const RuntimeMethod* method) 
{
	{
		// : base(absoluteTime, channel, MidiCommandCode.PitchWheelChange)
		int64_t L_0 = ___absoluteTime0;
		int32_t L_1 = ___channel1;
		MidiEvent__ctor_mB7702A8BFFF1D7EC0E33430E5CF6A27519389C9B(__this, L_0, L_1, ((int32_t)224), NULL);
		// Pitch = pitchWheel;
		int32_t L_2 = ___pitchWheel2;
		PitchWheelChangeEvent_set_Pitch_m0B1DA7CF68AA8127AD1DB9CD6E858AFD0B43C6A9(__this, L_2, NULL);
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PitchWheelChangeEvent_ToString_m992515A01F96D1F983C38B831ABA6B809C6947C7 (PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB53AE6773AE7325FFA588A639E27D2492A0E18);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("{0} Pitch {1} ({2})",
		//     base.ToString(),
		//     this.pitch,
		//     this.pitch - 0x2000);
		String_t* L_0;
		L_0 = MidiEvent_ToString_m7B5AD92D1865A137DBC8D28C15CD3F49A9B6FC07(__this, NULL);
		int32_t L_1 = __this->___pitch_4;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = __this->___pitch_4;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)8192)));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3AB53AE6773AE7325FFA588A639E27D2492A0E18, L_0, L_3, L_6, NULL);
		V_0 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent::get_Pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PitchWheelChangeEvent_get_Pitch_m8428B260A4B6B3ADDDECBC5C7E83E66E58BBAA91 (PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return pitch;
		int32_t L_0 = __this->___pitch_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent::set_Pitch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PitchWheelChangeEvent_set_Pitch_m0B1DA7CF68AA8127AD1DB9CD6E858AFD0B43C6A9 (PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (value < 0 || value > 0x4000)
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___value0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)((int32_t)16384)))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("value", "Pitch value must be in the range 0 - 0x4000");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56E66415CA843BDCA3BC259204F8CA220FA782B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PitchWheelChangeEvent_set_Pitch_m0B1DA7CF68AA8127AD1DB9CD6E858AFD0B43C6A9_RuntimeMethod_var)));
	}

IL_0025:
	{
		// pitch = value;
		int32_t L_4 = ___value0;
		__this->___pitch_4 = L_4;
		// }
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent::GetAsShortMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PitchWheelChangeEvent_GetAsShortMessage_m6B27EF934AA3F7B20FD7D8A91E586B3B96DC31E8 (PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return base.GetAsShortMessage() + ((pitch & 0x7f) << 8) + (((pitch >> 7) & 0x7f) << 16);
		int32_t L_0;
		L_0 = MidiEvent_GetAsShortMessage_mF25C12800CB7541933EC9CE022799CD6DA74827E(__this, NULL);
		int32_t L_1 = __this->___pitch_4;
		int32_t L_2 = __this->___pitch_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)(L_1&((int32_t)127)))<<8)))), ((int32_t)(((int32_t)(((int32_t)(L_2>>7))&((int32_t)127)))<<((int32_t)16)))));
		goto IL_0025;
	}

IL_0025:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.PitchWheelChangeEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PitchWheelChangeEvent_Export_mB6F5CB53F1E8ECEEFA6CD260C9FB0951D84D4C00 (PitchWheelChangeEvent_tC1FE07325C75743F76C485C86B8BCC4DE5105DE8* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) 
{
	{
		// base.Export(ref absoluteTime, writer);
		int64_t* L_0 = ___absoluteTime0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer1;
		MidiEvent_Export_m4221E3C12129F0E1EA105C3897D9ABFB1AE8135B(__this, L_0, L_1, NULL);
		// writer.Write((byte)(pitch & 0x7f));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer1;
		int32_t L_3 = __this->___pitch_4;
		NullCheck(L_2);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_2, (uint8_t)((int32_t)(uint8_t)((int32_t)(L_3&((int32_t)127)))));
		// writer.Write((byte)((pitch >> 7) & 0x7f));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer1;
		int32_t L_5 = __this->___pitch_4;
		NullCheck(L_4);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_4, (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_5>>7))&((int32_t)127)))));
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
// System.Void ForieroEngine.MIDIUnified.Midi.SequencerSpecificEvent::.ctor(System.IO.BinaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencerSpecificEvent__ctor_mC8E534B6FD4D9AE6C90A72944716251E3D9C5B44 (SequencerSpecificEvent_tA07E87BA1D002437644F3B19780A2D2DD93FC54F* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		// public SequencerSpecificEvent(BinaryReader br, int length)
		MetaEvent__ctor_m7577D839ABAD6A9399A2A90FE07452395AF21C53(__this, NULL);
		// this.data = br.ReadBytes(length);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___br0;
		int32_t L_1 = ___length1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_0, L_1);
		__this->___data_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.SequencerSpecificEvent::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencerSpecificEvent__ctor_mC931883CF30557D43BB36F27A1AAA40070D6F25C (SequencerSpecificEvent_tA07E87BA1D002437644F3B19780A2D2DD93FC54F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int64_t ___absoluteTime1, const RuntimeMethod* method) 
{
	{
		// : base(MetaEventType.SequencerSpecific, data.Length, absoluteTime)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		NullCheck(L_0);
		int64_t L_1 = ___absoluteTime1;
		MetaEvent__ctor_mABD79991F32029AF6B905FB29292E9EE44F6E497(__this, ((int32_t)127), ((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1, NULL);
		// this.data = data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		__this->___data_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_7), (void*)L_2);
		// }
		return;
	}
}
// System.Byte[] ForieroEngine.MIDIUnified.Midi.SequencerSpecificEvent::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SequencerSpecificEvent_get_Data_m5F7D780BA1ED3C6451105AE53EC33E4E682BE243 (SequencerSpecificEvent_tA07E87BA1D002437644F3B19780A2D2DD93FC54F* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// return this.data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___data_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.SequencerSpecificEvent::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencerSpecificEvent_set_Data_m4C1CCB8D9E068E5919DB1AB57CE9C756367CB4ED (SequencerSpecificEvent_tA07E87BA1D002437644F3B19780A2D2DD93FC54F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// this.data = value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___data_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_7), (void*)L_0);
		// this.metaDataLength = this.data.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_7;
		NullCheck(L_1);
		((MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64*)__this)->___metaDataLength_5 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.SequencerSpecificEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SequencerSpecificEvent_ToString_m5EFE4D1FEFE97632DFC15B0CEE8D7D97534A79F9 (SequencerSpecificEvent_tA07E87BA1D002437644F3B19780A2D2DD93FC54F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1BE15AC1B56C08DD32895F485AA8DAC582400F4);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// sb.Append(base.ToString());
		StringBuilder_t* L_1 = V_0;
		String_t* L_2;
		L_2 = MetaEvent_ToString_m09D8AA68A00FE648E79347D44A8D4FF7049EF454(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_2, NULL);
		// sb.Append(" ");
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// foreach (var b in data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___data_7;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0048;
	}

IL_002c:
	{
		// foreach (var b in data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// sb.AppendFormat("{0:X2} ", b);
		StringBuilder_t* L_11 = V_0;
		uint8_t L_12 = V_3;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_11, _stringLiteralA1BE15AC1B56C08DD32895F485AA8DAC582400F4, L_14, NULL);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		// foreach (var b in data)
		int32_t L_17 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		// sb.Length--;
		StringBuilder_t* L_19 = V_0;
		StringBuilder_t* L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_20, NULL);
		V_4 = L_21;
		int32_t L_22 = V_4;
		NullCheck(L_20);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_20, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), NULL);
		// return sb.ToString();
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		V_5 = L_24;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		String_t* L_25 = V_5;
		return L_25;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.SequencerSpecificEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencerSpecificEvent_Export_mEF2E8119EFEF1CB714015121830815D6BC42BB30 (SequencerSpecificEvent_tA07E87BA1D002437644F3B19780A2D2DD93FC54F* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) 
{
	{
		// base.Export(ref absoluteTime, writer);
		int64_t* L_0 = ___absoluteTime0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer1;
		MetaEvent_Export_m569ACC39F1E2AD58B0A10B547BE8A4854570BCD1(__this, L_0, L_1, NULL);
		// writer.Write(data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___data_7;
		NullCheck(L_2);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_2, L_3);
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
// System.Void ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::.ctor(System.IO.BinaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmpteOffsetEvent__ctor_m20C1E94C98990243B4E12280D1405C814A435BB8 (SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br0, int32_t ___length1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public SmpteOffsetEvent(BinaryReader br,int length)
		MetaEvent__ctor_m7577D839ABAD6A9399A2A90FE07452395AF21C53(__this, NULL);
		// if(length != 5)
		int32_t L_0 = ___length1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// throw new FormatException(String.Format("Invalid SMPTE Offset length: Got {0}, expected 5",length));
		int32_t L_2 = ___length1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80D8ACE888A58EAF1B222E263FBF06E5563B815B)), L_4, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_6 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SmpteOffsetEvent__ctor_m20C1E94C98990243B4E12280D1405C814A435BB8_RuntimeMethod_var)));
	}

IL_002a:
	{
		// hours = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___br0;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_7);
		__this->___hours_7 = L_8;
		// minutes = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = ___br0;
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_9);
		__this->___minutes_8 = L_10;
		// seconds = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___br0;
		NullCheck(L_11);
		uint8_t L_12;
		L_12 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_11);
		__this->___seconds_9 = L_12;
		// frames = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___br0;
		NullCheck(L_13);
		uint8_t L_14;
		L_14 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_13);
		__this->___frames_10 = L_14;
		// subFrames = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = ___br0;
		NullCheck(L_15);
		uint8_t L_16;
		L_16 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_15);
		__this->___subFrames_11 = L_16;
		// }
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::get_Hours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmpteOffsetEvent_get_Hours_m323E6729D48CC80DA8F41A96C8F2B25D490960E9 (SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return hours; }
		uint8_t L_0 = __this->___hours_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return hours; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmpteOffsetEvent_get_Minutes_mF9704E6915304EF3B0F4534A5D06AABA08A60207 (SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return minutes; }
		uint8_t L_0 = __this->___minutes_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return minutes; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmpteOffsetEvent_get_Seconds_mF0B8A8A8B2DFFFC215587930369D33F311E58353 (SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return seconds; }
		uint8_t L_0 = __this->___seconds_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return seconds; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::get_Frames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmpteOffsetEvent_get_Frames_m0443F8DC8CDB4FBA1CDDD53369CC68766C4DBECF (SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return frames; }
		uint8_t L_0 = __this->___frames_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return frames; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::get_SubFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmpteOffsetEvent_get_SubFrames_mA1654D7359E5FB7313D631431F598812F90B0CDF (SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return subFrames; }
		uint8_t L_0 = __this->___subFrames_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return subFrames; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SmpteOffsetEvent_ToString_m379370548974AF8BC5106DC904BB2098F6DC1E21 (SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB7AA71E69D129C9176305CAB6A76427C527E84);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("{0} {1}:{2}:{3}:{4}:{5}",
		//     base.ToString(),hours,minutes,seconds,frames,subFrames);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = MetaEvent_ToString_m09D8AA68A00FE648E79347D44A8D4FF7049EF454(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		uint8_t L_4 = __this->___hours_7;
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		uint8_t L_8 = __this->___minutes_8;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		uint8_t L_12 = __this->___seconds_9;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		uint8_t L_16 = __this->___frames_10;
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_15;
		uint8_t L_20 = __this->___subFrames_11;
		uint8_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral5BB7AA71E69D129C9176305CAB6A76427C527E84, L_19, NULL);
		V_0 = L_23;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		String_t* L_24 = V_0;
		return L_24;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.SmpteOffsetEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmpteOffsetEvent_Export_m7283F343B42C33D78D65DD9D246E9C5563655A6B (SmpteOffsetEvent_t558F815DE39D7A9C6869B955E6DDB7AB283E5A0F* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) 
{
	{
		// base.Export(ref absoluteTime, writer);
		int64_t* L_0 = ___absoluteTime0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer1;
		MetaEvent_Export_m569ACC39F1E2AD58B0A10B547BE8A4854570BCD1(__this, L_0, L_1, NULL);
		// writer.Write(hours);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer1;
		uint8_t L_3 = __this->___hours_7;
		NullCheck(L_2);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_2, L_3);
		// writer.Write(minutes);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer1;
		uint8_t L_5 = __this->___minutes_8;
		NullCheck(L_4);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_4, L_5);
		// writer.Write(seconds);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___writer1;
		uint8_t L_7 = __this->___seconds_9;
		NullCheck(L_6);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_6, L_7);
		// writer.Write(frames);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___writer1;
		uint8_t L_9 = __this->___frames_10;
		NullCheck(L_8);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_8, L_9);
		// writer.Write(subFrames);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_10 = ___writer1;
		uint8_t L_11 = __this->___subFrames_11;
		NullCheck(L_10);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_10, L_11);
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
// ForieroEngine.MIDIUnified.Midi.SysexEvent ForieroEngine.MIDIUnified.Midi.SysexEvent::ReadSysexEvent(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* SysexEvent_ReadSysexEvent_m0AB754D2931CD75FF3DF1E4BDA37D6CEB497E9F6 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* V_0 = NULL;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_1 = NULL;
	bool V_2 = false;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* V_6 = NULL;
	{
		// SysexEvent se = new SysexEvent();
		SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* L_0 = (SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747*)il2cpp_codegen_object_new(SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SysexEvent__ctor_m7095FD4053ED98CB3A6383C19FFB19F7FC27D267(L_0, NULL);
		V_0 = L_0;
		// List<byte> sysexData = new List<byte>();
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_1, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_1 = L_1;
		// bool loop = true;
		V_2 = (bool)1;
		goto IL_0038;
	}

IL_0011:
	{
		// byte b = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___br0;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_2);
		V_3 = L_3;
		// if(b == 0xF7)
		uint8_t L_4 = V_3;
		V_4 = (bool)((((int32_t)L_4) == ((int32_t)((int32_t)247)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// loop = false;
		V_2 = (bool)0;
		goto IL_0037;
	}

IL_002d:
	{
		// sysexData.Add(b);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_6 = V_1;
		uint8_t L_7 = V_3;
		NullCheck(L_6);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_6, L_7, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
	}

IL_0037:
	{
	}

IL_0038:
	{
		// while(loop)
		bool L_8 = V_2;
		V_5 = L_8;
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_0011;
		}
	}
	{
		// se.data = sysexData.ToArray();
		SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* L_10 = V_0;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = V_1;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->___data_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___data_4), (void*)L_12);
		// return se;
		SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* L_13 = V_0;
		V_6 = L_13;
		goto IL_0050;
	}

IL_0050:
	{
		// }
		SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* L_14 = V_6;
		return L_14;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.SysexEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SysexEvent_ToString_m040028957F6A7114581AE71FB6BBFBEA51343C4E (SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1BE15AC1B56C08DD32895F485AA8DAC582400F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9FFCF63A044A635A45ED78EAD2E081EBCD12841);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	String_t* V_4 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// foreach (byte b in data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___data_4;
		V_1 = L_1;
		V_2 = 0;
		goto IL_002f;
	}

IL_0013:
	{
		// foreach (byte b in data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// sb.AppendFormat("{0:X2} ", b);
		StringBuilder_t* L_6 = V_0;
		uint8_t L_7 = V_3;
		uint8_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_6, _stringLiteralA1BE15AC1B56C08DD32895F485AA8DAC582400F4, L_9, NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002f:
	{
		// foreach (byte b in data)
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// return String.Format("{0} Sysex: {1} bytes\r\n{2}",this.AbsoluteTime,data.Length,sb.ToString());
		int64_t L_14;
		L_14 = MidiEvent_get_AbsoluteTime_mEDE11B7153EB2E333A45E2C4D8A6EBB030912AEA(__this, NULL);
		int64_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___data_4;
		NullCheck(L_17);
		int32_t L_18 = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		String_t* L_22;
		L_22 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralC9FFCF63A044A635A45ED78EAD2E081EBCD12841, L_16, L_19, L_21, NULL);
		V_4 = L_22;
		goto IL_0061;
	}

IL_0061:
	{
		// }
		String_t* L_23 = V_4;
		return L_23;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.SysexEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SysexEvent_Export_m67C5D4903B7D3FAD10A82841864465F8180CFA95 (SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) 
{
	{
		// base.Export(ref absoluteTime, writer);
		int64_t* L_0 = ___absoluteTime0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer1;
		MidiEvent_Export_m4221E3C12129F0E1EA105C3897D9ABFB1AE8135B(__this, L_0, L_1, NULL);
		// writer.Write(data, 0, data.Length);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___data_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___data_4;
		NullCheck(L_4);
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		// writer.Write((byte)0xF7);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = ___writer1;
		NullCheck(L_5);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_5, (uint8_t)((int32_t)247));
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.SysexEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SysexEvent__ctor_m7095FD4053ED98CB3A6383C19FFB19F7FC27D267 (SysexEvent_tD244B7B48F214169BCDBD6A1A6415EAF52D35747* __this, const RuntimeMethod* method) 
{
	{
		MidiEvent__ctor_mC47B46AEE82789F03D2CBB91158693A913F9795F(__this, NULL);
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
// System.Void ForieroEngine.MIDIUnified.Midi.TempoEvent::.ctor(System.IO.BinaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempoEvent__ctor_m9B477170A212F8DA8A27B5C5B692207F23CF1982 (TempoEvent_tC07B0EF7CBFA1A4FF380CD1744D0B3C7F88B574B* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br0, int32_t ___length1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public TempoEvent(BinaryReader br,int length)
		MetaEvent__ctor_m7577D839ABAD6A9399A2A90FE07452395AF21C53(__this, NULL);
		// if(length != 3)
		int32_t L_0 = ___length1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// throw new FormatException("Invalid tempo length");
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_2 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94DA9EA1C901157BD9E357D5B89B90C3748E47FB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TempoEvent__ctor_m9B477170A212F8DA8A27B5C5B692207F23CF1982_RuntimeMethod_var)));
	}

IL_001f:
	{
		// microsecondsPerQuarterNote = (br.ReadByte() << 16) + (br.ReadByte() << 8) + br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___br0;
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_3);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___br0;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_5);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___br0;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_7);
		__this->___microsecondsPerQuarterNote_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_4<<((int32_t)16))), ((int32_t)((int32_t)L_6<<8)))), (int32_t)L_8));
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.TempoEvent::.ctor(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempoEvent__ctor_mE7E0A32A41193DB1BE76852B97378ED82EC6CB34 (TempoEvent_tC07B0EF7CBFA1A4FF380CD1744D0B3C7F88B574B* __this, int32_t ___microsecondsPerQuarterNote0, int64_t ___absoluteTime1, const RuntimeMethod* method) 
{
	{
		// : base(MetaEventType.SetTempo,3,absoluteTime)
		int64_t L_0 = ___absoluteTime1;
		MetaEvent__ctor_mABD79991F32029AF6B905FB29292E9EE44F6E497(__this, ((int32_t)81), 3, L_0, NULL);
		// this.microsecondsPerQuarterNote = microsecondsPerQuarterNote;
		int32_t L_1 = ___microsecondsPerQuarterNote0;
		__this->___microsecondsPerQuarterNote_7 = L_1;
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.TempoEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TempoEvent_ToString_mEC9550E7CE7E378233453E04CAB63255649CD236 (TempoEvent_tC07B0EF7CBFA1A4FF380CD1744D0B3C7F88B574B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C31CDBEF783C2B2AA1902C4007F58F2B10A8B06);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("{0} {2}bpm ({1})",
		//     base.ToString(),
		//     microsecondsPerQuarterNote,
		//     (60000000 / microsecondsPerQuarterNote));
		String_t* L_0;
		L_0 = MetaEvent_ToString_m09D8AA68A00FE648E79347D44A8D4FF7049EF454(__this, NULL);
		int32_t L_1 = __this->___microsecondsPerQuarterNote_7;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = __this->___microsecondsPerQuarterNote_7;
		int32_t L_5 = ((int32_t)(((int32_t)60000000)/L_4));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral7C31CDBEF783C2B2AA1902C4007F58F2B10A8B06, L_0, L_3, L_6, NULL);
		V_0 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.TempoEvent::get_MicrosecondsPerQuarterNote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TempoEvent_get_MicrosecondsPerQuarterNote_mF8E18DF140BFE5F4D1785F7123C03C1B938BCE2A (TempoEvent_tC07B0EF7CBFA1A4FF380CD1744D0B3C7F88B574B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return microsecondsPerQuarterNote;
		int32_t L_0 = __this->___microsecondsPerQuarterNote_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Double ForieroEngine.MIDIUnified.Midi.TempoEvent::get_Tempo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TempoEvent_get_Tempo_mB2881B87C21328857B68F02442C9479B67AFF19C (TempoEvent_tC07B0EF7CBFA1A4FF380CD1744D0B3C7F88B574B* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// return (60000000.0 / microsecondsPerQuarterNote);
		int32_t L_0 = __this->___microsecondsPerQuarterNote_7;
		V_0 = ((double)((60000000.0)/((double)L_0)));
		goto IL_0015;
	}

IL_0015:
	{
		// }
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.TempoEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempoEvent_Export_m7052DC65D109C52DA69FC538A0E410BA5E6C9B81 (TempoEvent_tC07B0EF7CBFA1A4FF380CD1744D0B3C7F88B574B* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) 
{
	{
		// base.Export(ref absoluteTime, writer);
		int64_t* L_0 = ___absoluteTime0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer1;
		MetaEvent_Export_m569ACC39F1E2AD58B0A10B547BE8A4854570BCD1(__this, L_0, L_1, NULL);
		// writer.Write((byte) ((microsecondsPerQuarterNote >> 16) & 0xFF));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer1;
		int32_t L_3 = __this->___microsecondsPerQuarterNote_7;
		NullCheck(L_2);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_2, (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_3>>((int32_t)16)))&((int32_t)255)))));
		// writer.Write((byte) ((microsecondsPerQuarterNote >> 8) & 0xFF));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer1;
		int32_t L_5 = __this->___microsecondsPerQuarterNote_7;
		NullCheck(L_4);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_4, (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_5>>8))&((int32_t)255)))));
		// writer.Write((byte) (microsecondsPerQuarterNote & 0xFF));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___writer1;
		int32_t L_7 = __this->___microsecondsPerQuarterNote_7;
		NullCheck(L_6);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_6, (uint8_t)((int32_t)(uint8_t)((int32_t)(L_7&((int32_t)255)))));
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
// System.Void ForieroEngine.MIDIUnified.Midi.TextEvent::.ctor(System.IO.BinaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEvent__ctor_m495DC751D6F638B43C1E47E2F0FD78AEDADB7B40 (TextEvent_tD4AC75EA435FA961BF0823159A5C889EED6D954F* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		// public TextEvent(BinaryReader br,int length)
		MetaEvent__ctor_m7577D839ABAD6A9399A2A90FE07452395AF21C53(__this, NULL);
		// text = Encoding.UTF8.GetString(br.ReadBytes(length), 0, length);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___br0;
		int32_t L_2 = ___length1;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_1, L_2);
		int32_t L_4 = ___length1;
		NullCheck(L_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_3, 0, L_4);
		__this->___text_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_7), (void*)L_5);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.TextEvent::.ctor(System.String,ForieroEngine.MIDIUnified.Midi.MetaEventType,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEvent__ctor_m28F46F2F798BCE9385E6756FCC723C0030DEB4A4 (TextEvent_tD4AC75EA435FA961BF0823159A5C889EED6D954F* __this, String_t* ___text0, uint8_t ___metaEventType1, int64_t ___absoluteTime2, const RuntimeMethod* method) 
{
	{
		// : base(metaEventType, text.Length, absoluteTime)
		uint8_t L_0 = ___metaEventType1;
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		int64_t L_3 = ___absoluteTime2;
		MetaEvent__ctor_mABD79991F32029AF6B905FB29292E9EE44F6E497(__this, L_0, L_2, L_3, NULL);
		// this.text = text;
		String_t* L_4 = ___text0;
		__this->___text_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_7), (void*)L_4);
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.TextEvent::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEvent_get_Text_m5F93C7DC6BFF0A0A9C1D5BB3FE3B037BEF41EB49 (TextEvent_tD4AC75EA435FA961BF0823159A5C889EED6D954F* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return text;
		String_t* L_0 = __this->___text_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.TextEvent::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEvent_set_Text_mDCCCF1F435B9C7840A972258D40845C5F89E08E8 (TextEvent_tD4AC75EA435FA961BF0823159A5C889EED6D954F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// text = value;
		String_t* L_0 = ___value0;
		__this->___text_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_7), (void*)L_0);
		// metaDataLength = text.Length;
		String_t* L_1 = __this->___text_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		((MetaEvent_t9DA8108A00DC6FFBBD7A9B4A133F5B9082038D64*)__this)->___metaDataLength_5 = L_2;
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.TextEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEvent_ToString_m8F6B9C318A2B4F4F9B70F7DA7999824D975F0483 (TextEvent_tD4AC75EA435FA961BF0823159A5C889EED6D954F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("{0} {1}",base.ToString(),text);
		String_t* L_0;
		L_0 = MetaEvent_ToString_m09D8AA68A00FE648E79347D44A8D4FF7049EF454(__this, NULL);
		String_t* L_1 = __this->___text_7;
		String_t* L_2;
		L_2 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.TextEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEvent_Export_mCF3C62C552E147FF5DB6451953C4CA9999B06651 (TextEvent_tD4AC75EA435FA961BF0823159A5C889EED6D954F* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// base.Export(ref absoluteTime, writer);
		int64_t* L_0 = ___absoluteTime0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer1;
		MetaEvent_Export_m569ACC39F1E2AD58B0A10B547BE8A4854570BCD1(__this, L_0, L_1, NULL);
		// byte[] encoded = Encoding.UTF8.GetBytes(text);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = __this->___text_7;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		// writer.Write(encoded);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = ___writer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_5, L_6);
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
// System.Void ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::.ctor(System.IO.BinaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSignatureEvent__ctor_m7FE815166973D61A52B5EA767531AA37CB0CDFBE (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br0, int32_t ___length1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public TimeSignatureEvent(BinaryReader br,int length)
		MetaEvent__ctor_m7577D839ABAD6A9399A2A90FE07452395AF21C53(__this, NULL);
		// if(length != 4)
		int32_t L_0 = ___length1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// throw new FormatException(String.Format("Invalid time signature length: Got {0}, expected 4", length));
		int32_t L_2 = ___length1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCBDC68DBE3325F249B984552C2AB1E4D64292B7)), L_4, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_6 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSignatureEvent__ctor_m7FE815166973D61A52B5EA767531AA37CB0CDFBE_RuntimeMethod_var)));
	}

IL_002a:
	{
		// numerator = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___br0;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_7);
		__this->___numerator_7 = L_8;
		// denominator = br.ReadByte(); //2=quarter, 3=eigth etc
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = ___br0;
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_9);
		__this->___denominator_8 = L_10;
		// ticksInMetronomeClick = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___br0;
		NullCheck(L_11);
		uint8_t L_12;
		L_12 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_11);
		__this->___ticksInMetronomeClick_9 = L_12;
		// no32ndNotesInQuarterNote = br.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___br0;
		NullCheck(L_13);
		uint8_t L_14;
		L_14 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_13);
		__this->___no32ndNotesInQuarterNote_10 = L_14;
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::.ctor(System.Int64,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSignatureEvent__ctor_m772D9C6B06D43C2B67D7BBB34397DBEEAD97D7A1 (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, int64_t ___absoluteTime0, int32_t ___numerator1, int32_t ___denominator2, int32_t ___ticksInMetronomeClick3, int32_t ___no32ndNotesInQuarterNote4, const RuntimeMethod* method) 
{
	{
		// base(MetaEventType.TimeSignature, 4, absoluteTime)
		int64_t L_0 = ___absoluteTime0;
		MetaEvent__ctor_mABD79991F32029AF6B905FB29292E9EE44F6E497(__this, ((int32_t)88), 4, L_0, NULL);
		// this.numerator = (byte)numerator;
		int32_t L_1 = ___numerator1;
		__this->___numerator_7 = (uint8_t)((int32_t)(uint8_t)L_1);
		// this.denominator = (byte)denominator;
		int32_t L_2 = ___denominator2;
		__this->___denominator_8 = (uint8_t)((int32_t)(uint8_t)L_2);
		// this.ticksInMetronomeClick = (byte)ticksInMetronomeClick;
		int32_t L_3 = ___ticksInMetronomeClick3;
		__this->___ticksInMetronomeClick_9 = (uint8_t)((int32_t)(uint8_t)L_3);
		// this.no32ndNotesInQuarterNote = (byte)no32ndNotesInQuarterNote;
		int32_t L_4 = ___no32ndNotesInQuarterNote4;
		__this->___no32ndNotesInQuarterNote_10 = (uint8_t)((int32_t)(uint8_t)L_4);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSignatureEvent__ctor_mF57944BDC4E8C14FE1F46E850AD3AE97CBE567CD (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, int32_t ___numerator0, int32_t ___denominator1, int32_t ___ticksInMetronomeClick2, int32_t ___no32ndNotesInQuarterNote3, int64_t ___absoluteTime4, const RuntimeMethod* method) 
{
	{
		// : base(MetaEventType.TimeSignature, 4, absoluteTime)
		int64_t L_0 = ___absoluteTime4;
		MetaEvent__ctor_mABD79991F32029AF6B905FB29292E9EE44F6E497(__this, ((int32_t)88), 4, L_0, NULL);
		// this.numerator = (byte) numerator;
		int32_t L_1 = ___numerator0;
		__this->___numerator_7 = (uint8_t)((int32_t)(uint8_t)L_1);
		// this.denominator = (byte) denominator;
		int32_t L_2 = ___denominator1;
		__this->___denominator_8 = (uint8_t)((int32_t)(uint8_t)L_2);
		// this.ticksInMetronomeClick = (byte) ticksInMetronomeClick;
		int32_t L_3 = ___ticksInMetronomeClick2;
		__this->___ticksInMetronomeClick_9 = (uint8_t)((int32_t)(uint8_t)L_3);
		// this.no32ndNotesInQuarterNote = (byte) no32ndNotesInQuarterNote;
		int32_t L_4 = ___no32ndNotesInQuarterNote3;
		__this->___no32ndNotesInQuarterNote_10 = (uint8_t)((int32_t)(uint8_t)L_4);
		// }
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::get_Numerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSignatureEvent_get_Numerator_mFBC669E55D883D43F6C08FDA2745CBF0BF8BB619 (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return numerator; }
		uint8_t L_0 = __this->___numerator_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return numerator; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::get_Denominator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSignatureEvent_get_Denominator_m37CA94EA7FB342781770F83E8F57862D2FF1E1D2 (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return denominator; }
		uint8_t L_0 = __this->___denominator_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return denominator; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::get_TicksInMetronomeClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSignatureEvent_get_TicksInMetronomeClick_m3DF1CF31E6F4D06434F85DA5E0FD529B46FDD473 (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return ticksInMetronomeClick; }
		uint8_t L_0 = __this->___ticksInMetronomeClick_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return ticksInMetronomeClick; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::get_No32ndNotesInQuarterNote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSignatureEvent_get_No32ndNotesInQuarterNote_m1882B6B84C800FCFF61F15C3F9658ADD194F109C (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return no32ndNotesInQuarterNote; }
		uint8_t L_0 = __this->___no32ndNotesInQuarterNote_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return no32ndNotesInQuarterNote; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::get_TimeSignature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSignatureEvent_get_TimeSignature_m496949AE10A5615127BA7D7EF04AEC0DE87DE661 (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57D629148CFC77A66F6CC188642C4B0D25780B0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF01C47ABD568A459C8EA38273E930831E0F8561);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	String_t* V_3 = NULL;
	{
		// string den = String.Format("Unknown ({0})",denominator);
		uint8_t L_0 = __this->___denominator_8;
		uint8_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral57D629148CFC77A66F6CC188642C4B0D25780B0E, L_2, NULL);
		V_0 = L_3;
		// switch(denominator)
		uint8_t L_4 = __this->___denominator_8;
		V_2 = L_4;
		uint8_t L_5 = V_2;
		V_1 = L_5;
		uint8_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1)))
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_003e:
	{
		// den = "2";
		V_0 = _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
		// break;
		goto IL_0066;
	}

IL_0046:
	{
		// den = "4";
		V_0 = _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
		// break;
		goto IL_0066;
	}

IL_004e:
	{
		// den = "8";
		V_0 = _stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE;
		// break;
		goto IL_0066;
	}

IL_0056:
	{
		// den = "16";
		V_0 = _stringLiteralFF01C47ABD568A459C8EA38273E930831E0F8561;
		// break;
		goto IL_0066;
	}

IL_005e:
	{
		// den = "32";
		V_0 = _stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7;
		// break;
		goto IL_0066;
	}

IL_0066:
	{
		// return String.Format("{0}/{1}",numerator,den);
		uint8_t L_7 = __this->___numerator_7;
		uint8_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_9, L_10, NULL);
		V_3 = L_11;
		goto IL_007f;
	}

IL_007f:
	{
		// }
		String_t* L_12 = V_3;
		return L_12;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSignatureEvent_ToString_m744F27F209413F5C74A2ACDAA7777B59BF277540 (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2688A3B464EB50622F2DC9BD7A70A1BBBAC02D41);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("{0} {1} TicksInClick:{2} 32ndsInQuarterNote:{3}",
		//     base.ToString(),TimeSignature,ticksInMetronomeClick,no32ndNotesInQuarterNote);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = MetaEvent_ToString_m09D8AA68A00FE648E79347D44A8D4FF7049EF454(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4;
		L_4 = TimeSignatureEvent_get_TimeSignature_m496949AE10A5615127BA7D7EF04AEC0DE87DE661(__this, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		uint8_t L_6 = __this->___ticksInMetronomeClick_9;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = __this->___no32ndNotesInQuarterNote_10;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral2688A3B464EB50622F2DC9BD7A70A1BBBAC02D41, L_9, NULL);
		V_0 = L_13;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.TimeSignatureEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSignatureEvent_Export_m2DE0C3304565517A127A502230A231012B8C06DB (TimeSignatureEvent_t57D8BDCA2E1D8E2682C1A60580EFC18C9BD0643B* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) 
{
	{
		// base.Export(ref absoluteTime, writer);
		int64_t* L_0 = ___absoluteTime0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer1;
		MetaEvent_Export_m569ACC39F1E2AD58B0A10B547BE8A4854570BCD1(__this, L_0, L_1, NULL);
		// writer.Write(numerator);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer1;
		uint8_t L_3 = __this->___numerator_7;
		NullCheck(L_2);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_2, L_3);
		// writer.Write(denominator);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer1;
		uint8_t L_5 = __this->___denominator_8;
		NullCheck(L_4);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_4, L_5);
		// writer.Write(ticksInMetronomeClick);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___writer1;
		uint8_t L_7 = __this->___ticksInMetronomeClick_9;
		NullCheck(L_6);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_6, L_7);
		// writer.Write(no32ndNotesInQuarterNote);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___writer1;
		uint8_t L_9 = __this->___no32ndNotesInQuarterNote_10;
		NullCheck(L_8);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_8, L_9);
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
// System.Void ForieroEngine.MIDIUnified.Midi.TrackSequenceNumberEvent::.ctor(System.IO.BinaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSequenceNumberEvent__ctor_m49DC768886BE41F68159FF3A3FABD27211C829BF (TrackSequenceNumberEvent_t04AEB51078DBBAE62CBCE8CE565E9F70187DCD13* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___br0, int32_t ___length1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public TrackSequenceNumberEvent(BinaryReader br, int length)
		MetaEvent__ctor_m7577D839ABAD6A9399A2A90FE07452395AF21C53(__this, NULL);
		// if(length != 2)
		int32_t L_0 = ___length1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// throw new FormatException("Invalid sequence number length");
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_2 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A8BDE31034DCB18BE184AF0A9EAE6BD4D9EF08A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackSequenceNumberEvent__ctor_m49DC768886BE41F68159FF3A3FABD27211C829BF_RuntimeMethod_var)));
	}

IL_001f:
	{
		// sequenceNumber = (ushort) ((br.ReadByte() << 8) + br.ReadByte());
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___br0;
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_3);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___br0;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_5);
		__this->___sequenceNumber_7 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_4<<8)), (int32_t)L_6)));
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Midi.TrackSequenceNumberEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackSequenceNumberEvent_ToString_m0AB342EDEBF38A7F02F47B7007AFF393EF073C58 (TrackSequenceNumberEvent_t04AEB51078DBBAE62CBCE8CE565E9F70187DCD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("{0} {1}", base.ToString(), sequenceNumber);
		String_t* L_0;
		L_0 = MetaEvent_ToString_m09D8AA68A00FE648E79347D44A8D4FF7049EF454(__this, NULL);
		uint16_t L_1 = __this->___sequenceNumber_7;
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_0, L_3, NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void ForieroEngine.MIDIUnified.Midi.TrackSequenceNumberEvent::Export(System.Int64&,System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSequenceNumberEvent_Export_mBA850E8EADAC59C8464766A19BA1E69E4EE22B72 (TrackSequenceNumberEvent_t04AEB51078DBBAE62CBCE8CE565E9F70187DCD13* __this, int64_t* ___absoluteTime0, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer1, const RuntimeMethod* method) 
{
	{
		// base.Export(ref absoluteTime, writer);
		int64_t* L_0 = ___absoluteTime0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer1;
		MetaEvent_Export_m569ACC39F1E2AD58B0A10B547BE8A4854570BCD1(__this, L_0, L_1, NULL);
		// writer.Write((byte)((sequenceNumber >> 8) & 0xFF));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer1;
		uint16_t L_3 = __this->___sequenceNumber_7;
		NullCheck(L_2);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_2, (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3>>8))&((int32_t)255)))));
		// writer.Write((byte)(sequenceNumber & 0xFF));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer1;
		uint16_t L_5 = __this->___sequenceNumber_7;
		NullCheck(L_4);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_4, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5&((int32_t)255)))));
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
// System.String ForieroEngine.MIDIUnified.Interfaces.MidiButtons::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiButtons_get_Id_m929297086B4F04A890D429AC7A6C94C8FE11CF65 (MidiButtons_t830F7B74B213FDC7EA9802905DA8C25A3BD72ED3* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiButtons::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiButtons_set_Id_mA2DADCECEC0AB1B86913F4886D31F82BCBD4E548 (MidiButtons_t830F7B74B213FDC7EA9802905DA8C25A3BD72ED3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiButtons::SetId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiButtons_SetId_mDD4AA8C6FD0D7CCB21AE2D1925B6D6682C1001D0 (MidiButtons_t830F7B74B213FDC7EA9802905DA8C25A3BD72ED3* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// public void SetId(string id) { Id = id; }
		String_t* L_0 = ___id0;
		MidiButtons_set_Id_mA2DADCECEC0AB1B86913F4886D31F82BCBD4E548_inline(__this, L_0, NULL);
		// public void SetId(string id) { Id = id; }
		return;
	}
}
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiButton> ForieroEngine.MIDIUnified.Interfaces.MidiButtons::get_Buttons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40* MidiButtons_get_Buttons_m604DB928EE22B717C85EA11F30CAC80C9A40C684 (MidiButtons_t830F7B74B213FDC7EA9802905DA8C25A3BD72ED3* __this, const RuntimeMethod* method) 
{
	{
		// public SortedDictionary<int, IMidiButton> Buttons { get; } = new();
		SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40* L_0 = __this->___U3CButtonsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiButtons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiButtons__ctor_m93389C58F3BCF7B68CA8720DE38B2D7ACAC1E90B (MidiButtons_t830F7B74B213FDC7EA9802905DA8C25A3BD72ED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_mF697384CF443145661EE78BD1AE987798B77CCC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Id { get; private set; } = "";
		__this->___U3CIdU3Ek__BackingField_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public SortedDictionary<int, IMidiButton> Buttons { get; } = new();
		SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40* L_0 = (SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40*)il2cpp_codegen_object_new(SortedDictionary_2_t03743BF5A18074DB83345EE446031AA54D5DDD40_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SortedDictionary_2__ctor_mF697384CF443145661EE78BD1AE987798B77CCC0(L_0, SortedDictionary_2__ctor_mF697384CF443145661EE78BD1AE987798B77CCC0_RuntimeMethod_var);
		__this->___U3CButtonsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CButtonsU3Ek__BackingField_1), (void*)L_0);
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
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiControllers::Register(ForieroEngine.MIDIUnified.Interfaces.IMidiController,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiControllers_Register_m18BA622560BAF11166F8EC4547EF8A0CC2473AB7 (RuntimeObject* ___i0, bool ___ignoreNullOrEmptyId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m841DCFB409F52845366CE1F9222655402F7FF7A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m470427C14592D2C61C4C9819C446D6EF96ED5E3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BB05EA67B18016BF764400B597714AB7AD08CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D5EF7C6E977B7BDA76844DE5A303DB46553EBD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (i == null || (string.IsNullOrEmpty(i.Id) && ignoreNullOrEmptyId)) return;
		RuntimeObject* L_0 = ___i0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___i0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ForieroEngine.MIDIUnified.Interfaces.IMidiController::get_Id() */, IMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_il2cpp_TypeInfo_var, L_1);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		bool L_4 = ___ignoreNullOrEmptyId1;
		G_B3_0 = ((int32_t)((int32_t)L_3&(int32_t)L_4));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// if (i == null || (string.IsNullOrEmpty(i.Id) && ignoreNullOrEmptyId)) return;
		goto IL_0064;
	}

IL_001a:
	{
		// if (Controllers.Contains(i)) Debug.LogError($"IMidiController instance with id {i.Id} already exists!!!");
		il2cpp_codegen_runtime_class_init_inline(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var);
		List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* L_6 = ((MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields*)il2cpp_codegen_static_fields_for(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var))->___Controllers_1;
		RuntimeObject* L_7 = ___i0;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Contains_m470427C14592D2C61C4C9819C446D6EF96ED5E3E(L_6, L_7, List_1_Contains_m470427C14592D2C61C4C9819C446D6EF96ED5E3E_RuntimeMethod_var);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		// if (Controllers.Contains(i)) Debug.LogError($"IMidiController instance with id {i.Id} already exists!!!");
		RuntimeObject* L_10 = ___i0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ForieroEngine.MIDIUnified.Interfaces.IMidiController::get_Id() */, IMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_il2cpp_TypeInfo_var, L_10);
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC8D5EF7C6E977B7BDA76844DE5A303DB46553EBD, L_11, _stringLiteral9BB05EA67B18016BF764400B597714AB7AD08CC4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_12, NULL);
		goto IL_0064;
	}

IL_0046:
	{
		// else if(!string.IsNullOrEmpty(i.Id)) Controllers.Add(i);
		RuntimeObject* L_13 = ___i0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ForieroEngine.MIDIUnified.Interfaces.IMidiController::get_Id() */, IMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_il2cpp_TypeInfo_var, L_13);
		bool L_15;
		L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
		V_2 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0064;
		}
	}
	{
		// else if(!string.IsNullOrEmpty(i.Id)) Controllers.Add(i);
		il2cpp_codegen_runtime_class_init_inline(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var);
		List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* L_17 = ((MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields*)il2cpp_codegen_static_fields_for(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var))->___Controllers_1;
		RuntimeObject* L_18 = ___i0;
		NullCheck(L_17);
		List_1_Add_m841DCFB409F52845366CE1F9222655402F7FF7A7_inline(L_17, L_18, List_1_Add_m841DCFB409F52845366CE1F9222655402F7FF7A7_RuntimeMethod_var);
	}

IL_0064:
	{
		// }
		return;
	}
}
// ForieroEngine.MIDIUnified.Interfaces.IMidiController ForieroEngine.MIDIUnified.Interfaces.MidiControllers::GetById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MidiControllers_GetById_mB93E188E0D2A721DAD8BE03E1238CE68579B480F (String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_m675F2EE42EEB01BF5471F2A9D6891710D519F1DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t87D31797397702DBD4465265F64927E42ED6A361_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CGetByIdU3Eb__0_mD0BD3E1F0EFB121D168669FEAFA1894E9F69F68F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31* L_0 = (U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m4B94A9812DAE076768F6014F803B180FBD95F777(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31* L_1 = V_0;
		String_t* L_2 = ___id0;
		NullCheck(L_1);
		L_1->___id_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___id_0), (void*)L_2);
		// public static IMidiController GetById(string id) => Controllers.FirstOrDefault(i => i != null && i.Id == id);
		il2cpp_codegen_runtime_class_init_inline(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var);
		List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* L_3 = ((MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields*)il2cpp_codegen_static_fields_for(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var))->___Controllers_1;
		U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31* L_4 = V_0;
		Func_2_t87D31797397702DBD4465265F64927E42ED6A361* L_5 = (Func_2_t87D31797397702DBD4465265F64927E42ED6A361*)il2cpp_codegen_object_new(Func_2_t87D31797397702DBD4465265F64927E42ED6A361_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m8DBD2E5257BBB23386F31B77523AAAAEA247707C(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CGetByIdU3Eb__0_mD0BD3E1F0EFB121D168669FEAFA1894E9F69F68F_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_FirstOrDefault_TisIMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_m675F2EE42EEB01BF5471F2A9D6891710D519F1DD(L_3, L_5, Enumerable_FirstOrDefault_TisIMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_m675F2EE42EEB01BF5471F2A9D6891710D519F1DD_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiControllers::Unregister(ForieroEngine.MIDIUnified.Interfaces.IMidiController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiControllers_Unregister_mFCEADCB6823A650EE314579737961181A8E49E24 (RuntimeObject* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m470427C14592D2C61C4C9819C446D6EF96ED5E3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD1857478C016603CCB5F0E1633904589E695E280_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(Controllers.Contains(i)) Controllers.Remove(i);
		il2cpp_codegen_runtime_class_init_inline(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var);
		List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* L_0 = ((MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields*)il2cpp_codegen_static_fields_for(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var))->___Controllers_1;
		RuntimeObject* L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m470427C14592D2C61C4C9819C446D6EF96ED5E3E(L_0, L_1, List_1_Contains_m470427C14592D2C61C4C9819C446D6EF96ED5E3E_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// if(Controllers.Contains(i)) Controllers.Remove(i);
		il2cpp_codegen_runtime_class_init_inline(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var);
		List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* L_4 = ((MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields*)il2cpp_codegen_static_fields_for(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var))->___Controllers_1;
		RuntimeObject* L_5 = ___i0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_mD1857478C016603CCB5F0E1633904589E695E280(L_4, L_5, List_1_Remove_mD1857478C016603CCB5F0E1633904589E695E280_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiControllers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiControllers__cctor_m7836D52ACF1B991A2345746D3CC4F3E991A7C516 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m609BE04404E3AE382E4CBA6C254803438C4B27B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IMidiController Selected = null;
		((MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields*)il2cpp_codegen_static_fields_for(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var))->___Selected_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields*)il2cpp_codegen_static_fields_for(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var))->___Selected_0), (void*)(RuntimeObject*)NULL);
		// private static readonly List<IMidiController> Controllers = new List<IMidiController>();
		List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0* L_0 = (List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0*)il2cpp_codegen_object_new(List_1_t71786F3614FED52CE3C3B0C23B9F0AD50741DEA0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m609BE04404E3AE382E4CBA6C254803438C4B27B5(L_0, List_1__ctor_m609BE04404E3AE382E4CBA6C254803438C4B27B5_RuntimeMethod_var);
		((MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields*)il2cpp_codegen_static_fields_for(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var))->___Controllers_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_StaticFields*)il2cpp_codegen_static_fields_for(MidiControllers_tD558E15DB5B77D7539EC66F6FFF894163EEB7E56_il2cpp_TypeInfo_var))->___Controllers_1), (void*)L_0);
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
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiControllers/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4B94A9812DAE076768F6014F803B180FBD95F777 (U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ForieroEngine.MIDIUnified.Interfaces.MidiControllers/<>c__DisplayClass3_0::<GetById>b__0(ForieroEngine.MIDIUnified.Interfaces.IMidiController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CGetByIdU3Eb__0_mD0BD3E1F0EFB121D168669FEAFA1894E9F69F68F (U3CU3Ec__DisplayClass3_0_t70586B2B39617A65D22F865F86D0D599DD70EB31* __this, RuntimeObject* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public static IMidiController GetById(string id) => Controllers.FirstOrDefault(i => i != null && i.Id == id);
		RuntimeObject* L_0 = ___i0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___i0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ForieroEngine.MIDIUnified.Interfaces.IMidiController::get_Id() */, IMidiController_t95FF5AE9476DF816FE075D1489C9441B8CA32EFB_il2cpp_TypeInfo_var, L_1);
		String_t* L_3 = __this->___id_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return (bool)G_B3_0;
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
// System.String ForieroEngine.MIDIUnified.Interfaces.MidiFaders::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiFaders_get_Id_m245D030AC119E0968E253457C77069201B899177 (MidiFaders_tE2AB00C5D4F260EB29A5C454B2F8C897B03EAFBE* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiFaders::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiFaders_set_Id_mEE5BA581C67BEAA4D9999A4DFD90D333E20D67E7 (MidiFaders_tE2AB00C5D4F260EB29A5C454B2F8C897B03EAFBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiFaders::SetId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiFaders_SetId_m31D2E4CBFB8051E11C9F006FC609AB1A6176A593 (MidiFaders_tE2AB00C5D4F260EB29A5C454B2F8C897B03EAFBE* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// public void SetId(string id) { Id = id; }
		String_t* L_0 = ___id0;
		MidiFaders_set_Id_mEE5BA581C67BEAA4D9999A4DFD90D333E20D67E7_inline(__this, L_0, NULL);
		// public void SetId(string id) { Id = id; }
		return;
	}
}
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiFader> ForieroEngine.MIDIUnified.Interfaces.MidiFaders::get_Faders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3* MidiFaders_get_Faders_mAA5FC838C60FB6B65D69D20D0D48E6CC35BCE926 (MidiFaders_tE2AB00C5D4F260EB29A5C454B2F8C897B03EAFBE* __this, const RuntimeMethod* method) 
{
	{
		// public SortedDictionary<int, IMidiFader> Faders { get; } = new();
		SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3* L_0 = __this->___U3CFadersU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiFaders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiFaders__ctor_m3950852FD5388C72C7EAB5EA391B46BE01A214CB (MidiFaders_tE2AB00C5D4F260EB29A5C454B2F8C897B03EAFBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m81FAE9CC8688645B3511CE21A848B77A33B8072C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Id { get; private set; } = "";
		__this->___U3CIdU3Ek__BackingField_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public SortedDictionary<int, IMidiFader> Faders { get; } = new();
		SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3* L_0 = (SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3*)il2cpp_codegen_object_new(SortedDictionary_2_t0A35D1ABD2FB270297E31481C75B96F63DF4EFA3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SortedDictionary_2__ctor_m81FAE9CC8688645B3511CE21A848B77A33B8072C(L_0, SortedDictionary_2__ctor_m81FAE9CC8688645B3511CE21A848B77A33B8072C_RuntimeMethod_var);
		__this->___U3CFadersU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFadersU3Ek__BackingField_1), (void*)L_0);
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
// System.String ForieroEngine.MIDIUnified.Interfaces.MidiKeys::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiKeys_get_Id_m3F1EE7CBBEEA051246802E5E0AE3F92AFB5C4946 (MidiKeys_t7F0A91DBB8D80E88714337D50D3BB36A4078DC77* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiKeys::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiKeys_set_Id_m3B5D909EDAD5546BA48BE958CC61E2EC9FC0C286 (MidiKeys_t7F0A91DBB8D80E88714337D50D3BB36A4078DC77* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiKeys::SetId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiKeys_SetId_m8ED9D20CA635B7C9C2566400A565BF7B6CC4AFA2 (MidiKeys_t7F0A91DBB8D80E88714337D50D3BB36A4078DC77* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// public void SetId(string id) { Id = id; }
		String_t* L_0 = ___id0;
		MidiKeys_set_Id_m3B5D909EDAD5546BA48BE958CC61E2EC9FC0C286_inline(__this, L_0, NULL);
		// public void SetId(string id) { Id = id; }
		return;
	}
}
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.MidiKeys::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* MidiKeys_get_Keys_m7E158ED388339207BC11CAF66306B56BD7066095 (MidiKeys_t7F0A91DBB8D80E88714337D50D3BB36A4078DC77* __this, const RuntimeMethod* method) 
{
	{
		// public SortedDictionary<int, IMidiKey> Keys { get; } = new();
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0 = __this->___U3CKeysU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiKeys::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiKeys__ctor_mA2DF4415F93C25C536E46AECA32DF042D089D991 (MidiKeys_t7F0A91DBB8D80E88714337D50D3BB36A4078DC77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m9DE65FB191A791F619EECC453F72FAE48C1EC36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Id { get; private set; } = "";
		__this->___U3CIdU3Ek__BackingField_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public SortedDictionary<int, IMidiKey> Keys { get; } = new();
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0 = (SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05*)il2cpp_codegen_object_new(SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SortedDictionary_2__ctor_m9DE65FB191A791F619EECC453F72FAE48C1EC36F(L_0, SortedDictionary_2__ctor_m9DE65FB191A791F619EECC453F72FAE48C1EC36F_RuntimeMethod_var);
		__this->___U3CKeysU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeysU3Ek__BackingField_1), (void*)L_0);
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
// System.Boolean ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::KeyExists(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMidiKeys_KeyExists_m53A353D786CA15E04B0F42CD78682D4D9C6CD09D (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool KeyExists(int i) =>  Keys.ContainsKey(i);
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::KeyDown(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_KeyDown_m27FB4D89FD9C013ACB31E2711F1B6EF9A949CD27 (RuntimeObject* __this, int32_t ___i0, int32_t ___aVolume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public void KeyDown(int i, int aVolume) { if (Keys.ContainsKey(i)) Keys[i].SetKeyDown(); }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// public void KeyDown(int i, int aVolume) { if (Keys.ContainsKey(i)) Keys[i].SetKeyDown(); }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(14 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::SetKeyDown() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
	}

IL_0023:
	{
		// public void KeyDown(int i, int aVolume) { if (Keys.ContainsKey(i)) Keys[i].SetKeyDown(); }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::KeyUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_KeyUp_m7735DB3DED9172BA510FC3897F6EA2222DECFB90 (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public void KeyUp(int i) { if (Keys.ContainsKey(i)) Keys[i].SetKeyUp(); }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// public void KeyUp(int i) { if (Keys.ContainsKey(i)) Keys[i].SetKeyUp(); }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(13 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::SetKeyUp() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
	}

IL_0023:
	{
		// public void KeyUp(int i) { if (Keys.ContainsKey(i)) Keys[i].SetKeyUp(); }
		return;
	}
}
// UnityEngine.Vector3 ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IMidiKeys_GetKeyPosition_m63F7BA096F44C8869114C1C35FA3422F6980D925 (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public Vector3 GetKeyPosition(int i) { return Keys.ContainsKey(i) ? Keys[i].GetPosition() : Vector3.zero; }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B3_0 = L_3;
		goto IL_0027;
	}

IL_0016:
	{
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(18 /* UnityEngine.Vector3 ForieroEngine.MIDIUnified.Interfaces.IMidiKey::GetPosition() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
		G_B3_0 = L_7;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// public Vector3 GetKeyPosition(int i) { return Keys.ContainsKey(i) ? Keys[i].GetPosition() : Vector3.zero; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Vector3 ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyLocalPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IMidiKeys_GetKeyLocalPosition_m2D70D57BD1E19999440C1350C061B98036CB9F6E (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public Vector3 GetKeyLocalPosition(int i) { return Keys.ContainsKey(i) ? Keys[i].GetLocalPosition() : Vector3.zero; }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B3_0 = L_3;
		goto IL_0027;
	}

IL_0016:
	{
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(19 /* UnityEngine.Vector3 ForieroEngine.MIDIUnified.Interfaces.IMidiKey::GetLocalPosition() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
		G_B3_0 = L_7;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// public Vector3 GetKeyLocalPosition(int i) { return Keys.ContainsKey(i) ? Keys[i].GetLocalPosition() : Vector3.zero; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		return L_8;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::ColorKey(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_ColorKey_mCA399BE016ADFBA59B83DB44C7B52E1FA8D482F2 (RuntimeObject* __this, int32_t ___i0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___aColor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public void ColorKey(int i, Color aColor) { if (Keys.ContainsKey(i)) Keys[i].ColorKey(aColor); }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// public void ColorKey(int i, Color aColor) { if (Keys.ContainsKey(i)) Keys[i].ColorKey(aColor); }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___aColor1;
		NullCheck(L_6);
		InterfaceActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(10 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::ColorKey(UnityEngine.Color) */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0024:
	{
		// public void ColorKey(int i, Color aColor) { if (Keys.ContainsKey(i)) Keys[i].ColorKey(aColor); }
		return;
	}
}
// UnityEngine.Color ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyDownColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F IMidiKeys_GetKeyDownColor_m230A7A2F0CAB0758CAE84ADAB1FF4DAED538C9E7 (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public Color GetKeyDownColor(int i) { return Keys.ContainsKey(i) ? Keys[i].GetDownColor() : Color.white; }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_3;
		goto IL_0027;
	}

IL_0016:
	{
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = InterfaceFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(20 /* UnityEngine.Color ForieroEngine.MIDIUnified.Interfaces.IMidiKey::GetDownColor() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
		G_B3_0 = L_7;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// public Color GetKeyDownColor(int i) { return Keys.ContainsKey(i) ? Keys[i].GetDownColor() : Color.white; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Color ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyUpColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F IMidiKeys_GetKeyUpColor_m1D078ABF7123DF966246A4A51F343188161F5F81 (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public Color GetKeyUpColor(int i) { return Keys.ContainsKey(i) ? Keys[i].GetUpColor() : Color.white; }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_3;
		goto IL_0027;
	}

IL_0016:
	{
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = InterfaceFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(21 /* UnityEngine.Color ForieroEngine.MIDIUnified.Interfaces.IMidiKey::GetUpColor() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
		G_B3_0 = L_7;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// public Color GetKeyUpColor(int i) { return Keys.ContainsKey(i) ? Keys[i].GetUpColor() : Color.white; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Color ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyDownColorDefault(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F IMidiKeys_GetKeyDownColorDefault_m92FEE224F62A785032C0A5BDFF050BEF1909B6AF (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public Color GetKeyDownColorDefault(int i) { return Keys.ContainsKey(i) ? Keys[i].GetDownColorDefault() : Color.white; }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_3;
		goto IL_0027;
	}

IL_0016:
	{
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = InterfaceFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color ForieroEngine.MIDIUnified.Interfaces.IMidiKey::GetDownColorDefault() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
		G_B3_0 = L_7;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// public Color GetKeyDownColorDefault(int i) { return Keys.ContainsKey(i) ? Keys[i].GetDownColorDefault() : Color.white; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Color ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyUpColorDefault(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F IMidiKeys_GetKeyUpColorDefault_m73A22D8E11137E63898ABB1B8825C41A77915387 (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public Color GetKeyUpColorDefault(int i) { return Keys.ContainsKey(i) ? Keys[i].GetUpColorDefault() : Color.white; }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_3;
		goto IL_0027;
	}

IL_0016:
	{
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = InterfaceFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* UnityEngine.Color ForieroEngine.MIDIUnified.Interfaces.IMidiKey::GetUpColorDefault() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
		G_B3_0 = L_7;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// public Color GetKeyUpColorDefault(int i) { return Keys.ContainsKey(i) ? Keys[i].GetUpColorDefault() : Color.white; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::SetKeyDownColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_SetKeyDownColor_mAC28BA00D16CC8CDDFA0885CC1E5B40E8FC5120F (RuntimeObject* __this, int32_t ___i0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___aColor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public void SetKeyDownColor(int i, Color aColor) { if (Keys.ContainsKey(i)) Keys[i].SetDownColor(aColor);}
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// public void SetKeyDownColor(int i, Color aColor) { if (Keys.ContainsKey(i)) Keys[i].SetDownColor(aColor);}
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___aColor1;
		NullCheck(L_6);
		InterfaceActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(24 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::SetDownColor(UnityEngine.Color) */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0024:
	{
		// public void SetKeyDownColor(int i, Color aColor) { if (Keys.ContainsKey(i)) Keys[i].SetDownColor(aColor);}
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::SetKeyUpColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_SetKeyUpColor_m0C93580DDFF923D8867BC357046EB7134D3329A7 (RuntimeObject* __this, int32_t ___i0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___aColor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public void SetKeyUpColor(int i, Color aColor)  { if (Keys.ContainsKey(i)) Keys[i].SetUpColor(aColor);}
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// public void SetKeyUpColor(int i, Color aColor)  { if (Keys.ContainsKey(i)) Keys[i].SetUpColor(aColor);}
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___aColor1;
		NullCheck(L_6);
		InterfaceActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(25 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::SetUpColor(UnityEngine.Color) */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0024:
	{
		// public void SetKeyUpColor(int i, Color aColor)  { if (Keys.ContainsKey(i)) Keys[i].SetUpColor(aColor);}
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::ColorKeyDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_ColorKeyDown_m8EFB7B647F400FCAAF998F5421CD4855B71ECD59 (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public void ColorKeyDown(int i) { if (Keys.ContainsKey(i)) Keys[i].ColorOn();}
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// public void ColorKeyDown(int i) { if (Keys.ContainsKey(i)) Keys[i].ColorOn();}
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(11 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::ColorOn() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
	}

IL_0023:
	{
		// public void ColorKeyDown(int i) { if (Keys.ContainsKey(i)) Keys[i].ColorOn();}
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::ColorKeyUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_ColorKeyUp_m0F9BA09D54571D6CCC71AC4411D30A6147C37884 (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public void ColorKeyUp(int i) { if (Keys.ContainsKey(i)) Keys[i].ColorOff();}
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// public void ColorKeyUp(int i) { if (Keys.ContainsKey(i)) Keys[i].ColorOff();}
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_4;
		L_4 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_4, L_5, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(12 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::ColorOff() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_6);
	}

IL_0023:
	{
		// public void ColorKeyUp(int i) { if (Keys.ContainsKey(i)) Keys[i].ColorOff();}
		return;
	}
}
// System.Boolean ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::IsKeyDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMidiKeys_IsKeyDown_mFE5CB3515D420ECC114D4000C5CE664305A3A787 (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// public bool IsKeyDown(int i) { return Keys.ContainsKey(i) && Keys[i].GetIsDown(); }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_3;
		L_3 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_3, L_4, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(28 /* System.Boolean ForieroEngine.MIDIUnified.Interfaces.IMidiKey::GetIsDown() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		// public bool IsKeyDown(int i) { return Keys.ContainsKey(i) && Keys[i].GetIsDown(); }
		bool L_7 = V_0;
		return L_7;
	}
}
// ForieroEngine.MIDIUnified.Interfaces.KeyType ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMidiKeys_GetKeyType_m48609CEE935081EFD1A59635FDBA4DFC69AA78E9 (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// public KeyType GetKeyType(int i) { return Keys.ContainsKey(i) ? Keys[i].GetKeyType() : KeyType.None; }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A(L_0, L_1, SortedDictionary_2_ContainsKey_m4D9DA20187EA9D08EBE0FA629544AD2DA4AA177A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0023;
	}

IL_0012:
	{
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_3;
		L_3 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140(L_3, L_4, SortedDictionary_2_get_Item_m8CF276BCD9F39536BFCAE59B4A13533EC0DE1140_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* ForieroEngine.MIDIUnified.Interfaces.KeyType ForieroEngine.MIDIUnified.Interfaces.IMidiKey::GetKeyType() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, L_5);
		G_B3_0 = ((int32_t)(L_6));
	}

IL_0023:
	{
		V_0 = G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		// public KeyType GetKeyType(int i) { return Keys.ContainsKey(i) ? Keys[i].GetKeyType() : KeyType.None; }
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::SetTheorySystem(ForieroEngine.MIDIUnified.TheorySystemEnum,ForieroEngine.MIDIUnified.KeySignatureEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_SetTheorySystem_mBAE6718BC8C37605C46BBABD3E87092B8E2789C2 (RuntimeObject* __this, int32_t ___theorySystem0, int32_t ___keySignature1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// foreach (var key in Keys) { key.Value?.SetTheorySystem(theorySystem, keySignature); }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		NullCheck(L_0);
		Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335 L_1;
		L_1 = SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A(L_0, SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6((&V_0), Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_0010_1:
			{
				// foreach (var key in Keys) { key.Value?.SetTheorySystem(theorySystem, keySignature); }
				KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908 L_2;
				L_2 = Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533((&V_0), Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533_RuntimeMethod_var);
				V_1 = L_2;
				// foreach (var key in Keys) { key.Value?.SetTheorySystem(theorySystem, keySignature); }
				RuntimeObject* L_3;
				L_3 = KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_inline((&V_1), KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_RuntimeMethod_var);
				RuntimeObject* L_4 = L_3;
				G_B3_0 = L_4;
				if (L_4)
				{
					G_B4_0 = L_4;
					goto IL_0026_1;
				}
			}
			{
				goto IL_002e_1;
			}

IL_0026_1:
			{
				int32_t L_5 = ___theorySystem0;
				int32_t L_6 = ___keySignature1;
				NullCheck(G_B4_0);
				InterfaceActionInvoker2< int32_t, int32_t >::Invoke(30 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::SetTheorySystem(ForieroEngine.MIDIUnified.TheorySystemEnum,ForieroEngine.MIDIUnified.KeySignatureEnum) */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, G_B4_0, L_5, L_6);
			}

IL_002e_1:
			{
			}

IL_002f_1:
			{
				// foreach (var key in Keys) { key.Value?.SetTheorySystem(theorySystem, keySignature); }
				bool L_7;
				L_7 = Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791((&V_0), Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::OctaveSetWhiteKeysUpColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_OctaveSetWhiteKeysUpColor_mF5DA2693EF7E24DFCFB87B9E58F3BD3353A6A8BE (RuntimeObject* __this, int32_t ___anOctave0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___aColor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (var i = anOctave * 12; i < anOctave * 12 + 13; i++)
		int32_t L_0 = ___anOctave0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)12)));
		goto IL_0040;
	}

IL_0008:
	{
		// if (GetKeyType(i) != KeyType.White) continue;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(16 /* ForieroEngine.MIDIUnified.Interfaces.KeyType ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyType(System.Int32) */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this, L_1);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// if (GetKeyType(i) != KeyType.White) continue;
		goto IL_003c;
	}

IL_001c:
	{
		// SetKeyUpColor(i, aColor);
		int32_t L_4 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___aColor1;
		InterfaceActionInvoker2< int32_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(12 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::SetKeyUpColor(System.Int32,UnityEngine.Color) */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this, L_4, L_5);
		// if (!IsKeyDown(i)) ColorKeyUp(i);
		int32_t L_6 = V_0;
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(15 /* System.Boolean ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::IsKeyDown(System.Int32) */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this, L_6);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		// if (!IsKeyDown(i)) ColorKeyUp(i);
		int32_t L_9 = V_0;
		InterfaceActionInvoker1< int32_t >::Invoke(14 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::ColorKeyUp(System.Int32) */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this, L_9);
	}

IL_003b:
	{
	}

IL_003c:
	{
		// for (var i = anOctave * 12; i < anOctave * 12 + 13; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		// for (var i = anOctave * 12; i < anOctave * 12 + 13; i++)
		int32_t L_11 = V_0;
		int32_t L_12 = ___anOctave0;
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)12))), ((int32_t)13)))))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::OctaveSetWhiteKeysUpColorDefault(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_OctaveSetWhiteKeysUpColorDefault_m0DAD1732494FD0302CD65630373D4EF1549638F5 (RuntimeObject* __this, int32_t ___anOctave0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (var i = anOctave * 12; i < anOctave * 12 + 13; i++)
		int32_t L_0 = ___anOctave0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)12)));
		goto IL_0046;
	}

IL_0008:
	{
		// if (GetKeyType(i) != KeyType.White) continue;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(16 /* ForieroEngine.MIDIUnified.Interfaces.KeyType ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyType(System.Int32) */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this, L_1);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// if (GetKeyType(i) != KeyType.White) continue;
		goto IL_0042;
	}

IL_001c:
	{
		// SetKeyUpColor(i, GetKeyUpColorDefault(i));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = InterfaceFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, int32_t >::Invoke(10 /* UnityEngine.Color ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::GetKeyUpColorDefault(System.Int32) */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this, L_5);
		InterfaceActionInvoker2< int32_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(12 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::SetKeyUpColor(System.Int32,UnityEngine.Color) */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this, L_4, L_6);
		// if (!IsKeyDown(i)) ColorKeyUp(i);
		int32_t L_7 = V_0;
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(15 /* System.Boolean ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::IsKeyDown(System.Int32) */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this, L_7);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		// if (!IsKeyDown(i)) ColorKeyUp(i);
		int32_t L_10 = V_0;
		InterfaceActionInvoker1< int32_t >::Invoke(14 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::ColorKeyUp(System.Int32) */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this, L_10);
	}

IL_0041:
	{
	}

IL_0042:
	{
		// for (var i = anOctave * 12; i < anOctave * 12 + 13; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0046:
	{
		// for (var i = anOctave * 12; i < anOctave * 12 + 13; i++)
		int32_t L_12 = V_0;
		int32_t L_13 = ___anOctave0;
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)12))), ((int32_t)13)))))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::AllKeysUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_AllKeysUp_mA109004B31D4CCD9B4D82938EFD4399DB078F14A (RuntimeObject* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// public void AllKeysUp() { foreach (var key in Keys) { key.Value?.SetKeyUp(); } }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		NullCheck(L_0);
		Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335 L_1;
		L_1 = SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A(L_0, SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6((&V_0), Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0010_1:
			{
				// public void AllKeysUp() { foreach (var key in Keys) { key.Value?.SetKeyUp(); } }
				KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908 L_2;
				L_2 = Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533((&V_0), Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533_RuntimeMethod_var);
				V_1 = L_2;
				// public void AllKeysUp() { foreach (var key in Keys) { key.Value?.SetKeyUp(); } }
				RuntimeObject* L_3;
				L_3 = KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_inline((&V_1), KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_RuntimeMethod_var);
				RuntimeObject* L_4 = L_3;
				G_B3_0 = L_4;
				if (L_4)
				{
					G_B4_0 = L_4;
					goto IL_0026_1;
				}
			}
			{
				goto IL_002c_1;
			}

IL_0026_1:
			{
				NullCheck(G_B4_0);
				InterfaceActionInvoker0::Invoke(13 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::SetKeyUp() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, G_B4_0);
			}

IL_002c_1:
			{
			}

IL_002d_1:
			{
				// public void AllKeysUp() { foreach (var key in Keys) { key.Value?.SetKeyUp(); } }
				bool L_5;
				L_5 = Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791((&V_0), Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// public void AllKeysUp() { foreach (var key in Keys) { key.Value?.SetKeyUp(); } }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::AllKeysDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMidiKeys_AllKeysDown_m5B116622B8F725712D4FBFBE8F952AD14FB60F06 (RuntimeObject* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// public void AllKeysDown() { foreach (var key in Keys) { key.Value?.SetKeyDown(); } }
		SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* L_0;
		L_0 = InterfaceFuncInvoker0< SortedDictionary_2_tB101F8AC7945C376523D17694D80FB4D81DEFD05* >::Invoke(0 /* System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKey> ForieroEngine.MIDIUnified.Interfaces.IMidiKeys::get_Keys() */, IMidiKeys_t77B16419D3B10587A63CAE8D384C788A7CC0C7E2_il2cpp_TypeInfo_var, __this);
		NullCheck(L_0);
		Enumerator_tA16D79C7249AA0797054FCD920A7AA3E05355335 L_1;
		L_1 = SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A(L_0, SortedDictionary_2_GetEnumerator_mB038B641F2A7F4D106F5F975AF9895053FD5296A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6((&V_0), Enumerator_Dispose_mF6087A42CA2E0A22F83BEB9ACD2DEE3A489B9AC6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0010_1:
			{
				// public void AllKeysDown() { foreach (var key in Keys) { key.Value?.SetKeyDown(); } }
				KeyValuePair_2_tC1255433EE6D0412FA6C2D7ECE7638BBF6222908 L_2;
				L_2 = Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533((&V_0), Enumerator_get_Current_m2C64BF9D525B54FEC38B2D5A00357CCC74EB3533_RuntimeMethod_var);
				V_1 = L_2;
				// public void AllKeysDown() { foreach (var key in Keys) { key.Value?.SetKeyDown(); } }
				RuntimeObject* L_3;
				L_3 = KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_inline((&V_1), KeyValuePair_2_get_Value_mBCCBB4A3642512077F107007E563BA573FFE0DB9_RuntimeMethod_var);
				RuntimeObject* L_4 = L_3;
				G_B3_0 = L_4;
				if (L_4)
				{
					G_B4_0 = L_4;
					goto IL_0026_1;
				}
			}
			{
				goto IL_002c_1;
			}

IL_0026_1:
			{
				NullCheck(G_B4_0);
				InterfaceActionInvoker0::Invoke(14 /* System.Void ForieroEngine.MIDIUnified.Interfaces.IMidiKey::SetKeyDown() */, IMidiKey_t4A7F42B36406C67AF872074B8C9C9AB57875CF9D_il2cpp_TypeInfo_var, G_B4_0);
			}

IL_002c_1:
			{
			}

IL_002d_1:
			{
				// public void AllKeysDown() { foreach (var key in Keys) { key.Value?.SetKeyDown(); } }
				bool L_5;
				L_5 = Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791((&V_0), Enumerator_MoveNext_m9862231A2DC9B41CA47969CEEDFB910554AE1791_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// public void AllKeysDown() { foreach (var key in Keys) { key.Value?.SetKeyDown(); } }
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
// System.String ForieroEngine.MIDIUnified.Interfaces.MidiKnobs::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiKnobs_get_Id_m2B8388BA8E5C487B98F087C9710BA9465A9E7464 (MidiKnobs_t6937011DFC0F68FBF5C476761B9EFB96D9871449* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiKnobs::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiKnobs_set_Id_mDCC9B8445FB1A756866E92DC7EA2FE4C23B16D1F (MidiKnobs_t6937011DFC0F68FBF5C476761B9EFB96D9871449* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiKnobs::SetId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiKnobs_SetId_mCC7B2BD1E7B5E4E0460A8B30714BAA289D173283 (MidiKnobs_t6937011DFC0F68FBF5C476761B9EFB96D9871449* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// public void SetId(string id) { Id = id; }
		String_t* L_0 = ___id0;
		MidiKnobs_set_Id_mDCC9B8445FB1A756866E92DC7EA2FE4C23B16D1F_inline(__this, L_0, NULL);
		// public void SetId(string id) { Id = id; }
		return;
	}
}
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiKnob> ForieroEngine.MIDIUnified.Interfaces.MidiKnobs::get_Knobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7* MidiKnobs_get_Knobs_mF3CF7FE914E52EF97730C92190FBC5C220A1262F (MidiKnobs_t6937011DFC0F68FBF5C476761B9EFB96D9871449* __this, const RuntimeMethod* method) 
{
	{
		// public SortedDictionary<int, IMidiKnob> Knobs { get; } = new();
		SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7* L_0 = __this->___U3CKnobsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiKnobs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiKnobs__ctor_m28ABC59AC62BEFC09C7C7D056339FC25F9125002 (MidiKnobs_t6937011DFC0F68FBF5C476761B9EFB96D9871449* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_mA6AE97E9D76B374DBA9D05BEB164F8AEE4E70425_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Id { get; private set; } = "";
		__this->___U3CIdU3Ek__BackingField_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public SortedDictionary<int, IMidiKnob> Knobs { get; } = new();
		SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7* L_0 = (SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7*)il2cpp_codegen_object_new(SortedDictionary_2_t775CF637E307D3EED66B8DCD8C74EEB177DFE8F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SortedDictionary_2__ctor_mA6AE97E9D76B374DBA9D05BEB164F8AEE4E70425(L_0, SortedDictionary_2__ctor_mA6AE97E9D76B374DBA9D05BEB164F8AEE4E70425_RuntimeMethod_var);
		__this->___U3CKnobsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKnobsU3Ek__BackingField_1), (void*)L_0);
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
// System.String ForieroEngine.MIDIUnified.Interfaces.MidiPercussions::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiPercussions_get_Id_m0C656C0DA3BC1954F2963B89BEEB1F4C6D95F554 (MidiPercussions_t51CF16D66292228134A6E7D03403ADC621494627* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiPercussions::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPercussions_set_Id_m55F9C61F2F785AAAC0EC58E8F232FBA8DFA9E69F (MidiPercussions_t51CF16D66292228134A6E7D03403ADC621494627* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiPercussions::SetId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPercussions_SetId_m88A59E7206D95A35262D7321E310B51245710A42 (MidiPercussions_t51CF16D66292228134A6E7D03403ADC621494627* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// public void SetId(string id) { Id = id; }
		String_t* L_0 = ___id0;
		MidiPercussions_set_Id_m55F9C61F2F785AAAC0EC58E8F232FBA8DFA9E69F_inline(__this, L_0, NULL);
		// public void SetId(string id) { Id = id; }
		return;
	}
}
// System.Collections.Generic.SortedDictionary`2<System.Int32,ForieroEngine.MIDIUnified.Interfaces.IMidiPercussion> ForieroEngine.MIDIUnified.Interfaces.MidiPercussions::get_Perscussions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9* MidiPercussions_get_Perscussions_mFFB61BCFB2CD5619CF873DC4A4BA4893C0725FD4 (MidiPercussions_t51CF16D66292228134A6E7D03403ADC621494627* __this, const RuntimeMethod* method) 
{
	{
		// public SortedDictionary<int, IMidiPercussion> Perscussions { get; } = new();
		SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9* L_0 = __this->___U3CPerscussionsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Interfaces.MidiPercussions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiPercussions__ctor_m38CD0026D4D744AD52109628ED33CE6F3CEE0A2E (MidiPercussions_t51CF16D66292228134A6E7D03403ADC621494627* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_mD38A239C1D3E747209209F15046360F31F871CF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Id { get; private set; } = "";
		__this->___U3CIdU3Ek__BackingField_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public SortedDictionary<int, IMidiPercussion> Perscussions { get; } = new();
		SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9* L_0 = (SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9*)il2cpp_codegen_object_new(SortedDictionary_2_t9196FE4DA4574936C20656B45A968A265B4151F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SortedDictionary_2__ctor_mD38A239C1D3E747209209F15046360F31F871CF0(L_0, SortedDictionary_2__ctor_mD38A239C1D3E747209209F15046360F31F871CF0_RuntimeMethod_var);
		__this->___U3CPerscussionsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPerscussionsU3Ek__BackingField_1), (void*)L_0);
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


// Conversion methods for marshalling of: ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage
IL2CPP_EXTERN_C void ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshal_pinvoke(const ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E& unmarshaled, ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___timeProvider_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeProvider' of type 'ScheduledMidiMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeProvider_1Exception, NULL);
}
IL2CPP_EXTERN_C void ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshal_pinvoke_back(const ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshaled_pinvoke& marshaled, ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E& unmarshaled)
{
	Exception_t* ___timeProvider_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeProvider' of type 'ScheduledMidiMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeProvider_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage
IL2CPP_EXTERN_C void ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshal_pinvoke_cleanup(ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage
IL2CPP_EXTERN_C void ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshal_com(const ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E& unmarshaled, ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshaled_com& marshaled)
{
	Exception_t* ___timeProvider_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeProvider' of type 'ScheduledMidiMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeProvider_1Exception, NULL);
}
IL2CPP_EXTERN_C void ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshal_com_back(const ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshaled_com& marshaled, ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E& unmarshaled)
{
	Exception_t* ___timeProvider_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeProvider' of type 'ScheduledMidiMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeProvider_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: ForieroEngine.MIDIUnified.Plugins.ScheduledMidiMessage
IL2CPP_EXTERN_C void ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshal_com_cleanup(ScheduledMidiMessage_t3F5FC90CA55ECF457965FBDCE9153C3F8F21809E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ForieroEngine.MIDIUnified.Plugins.MidiMessage
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_pinvoke(const MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7& unmarshaled, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke& marshaled)
{
	marshaled.___CommandAndChannel_0 = unmarshaled.___CommandAndChannel_0;
	marshaled.___Data1_1 = unmarshaled.___Data1_1;
	marshaled.___Data2_2 = unmarshaled.___Data2_2;
	marshaled.___DataSize_3 = unmarshaled.___DataSize_3;
	marshaled.___Data_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Data_4);
	marshaled.___DeviceId_5 = unmarshaled.___DeviceId_5;
	marshaled.___Editor_6 = static_cast<int32_t>(unmarshaled.___Editor_6);
	marshaled.___Through_7 = static_cast<int32_t>(unmarshaled.___Through_7);
	marshaled.___Synth_8 = static_cast<int32_t>(unmarshaled.___Synth_8);
	marshaled.___Time_9 = unmarshaled.___Time_9;
}
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_pinvoke_back(const MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke& marshaled, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t unmarshaledCommandAndChannel_temp_0 = 0x0;
	unmarshaledCommandAndChannel_temp_0 = marshaled.___CommandAndChannel_0;
	unmarshaled.___CommandAndChannel_0 = unmarshaledCommandAndChannel_temp_0;
	uint8_t unmarshaledData1_temp_1 = 0x0;
	unmarshaledData1_temp_1 = marshaled.___Data1_1;
	unmarshaled.___Data1_1 = unmarshaledData1_temp_1;
	uint8_t unmarshaledData2_temp_2 = 0x0;
	unmarshaledData2_temp_2 = marshaled.___Data2_2;
	unmarshaled.___Data2_2 = unmarshaledData2_temp_2;
	int32_t unmarshaledDataSize_temp_3 = 0;
	unmarshaledDataSize_temp_3 = marshaled.___DataSize_3;
	unmarshaled.___DataSize_3 = unmarshaledDataSize_temp_3;
	unmarshaled.___Data_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_4));
	int32_t unmarshaledDeviceId_temp_5 = 0;
	unmarshaledDeviceId_temp_5 = marshaled.___DeviceId_5;
	unmarshaled.___DeviceId_5 = unmarshaledDeviceId_temp_5;
	bool unmarshaledEditor_temp_6 = false;
	unmarshaledEditor_temp_6 = static_cast<bool>(marshaled.___Editor_6);
	unmarshaled.___Editor_6 = unmarshaledEditor_temp_6;
	bool unmarshaledThrough_temp_7 = false;
	unmarshaledThrough_temp_7 = static_cast<bool>(marshaled.___Through_7);
	unmarshaled.___Through_7 = unmarshaledThrough_temp_7;
	bool unmarshaledSynth_temp_8 = false;
	unmarshaledSynth_temp_8 = static_cast<bool>(marshaled.___Synth_8);
	unmarshaled.___Synth_8 = unmarshaledSynth_temp_8;
	double unmarshaledTime_temp_9 = 0.0;
	unmarshaledTime_temp_9 = marshaled.___Time_9;
	unmarshaled.___Time_9 = unmarshaledTime_temp_9;
}
// Conversion method for clean up from marshalling of: ForieroEngine.MIDIUnified.Plugins.MidiMessage
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_pinvoke_cleanup(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Data_4);
	marshaled.___Data_4 = NULL;
}
// Conversion methods for marshalling of: ForieroEngine.MIDIUnified.Plugins.MidiMessage
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_com(const MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7& unmarshaled, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com& marshaled)
{
	marshaled.___CommandAndChannel_0 = unmarshaled.___CommandAndChannel_0;
	marshaled.___Data1_1 = unmarshaled.___Data1_1;
	marshaled.___Data2_2 = unmarshaled.___Data2_2;
	marshaled.___DataSize_3 = unmarshaled.___DataSize_3;
	marshaled.___Data_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Data_4);
	marshaled.___DeviceId_5 = unmarshaled.___DeviceId_5;
	marshaled.___Editor_6 = static_cast<int32_t>(unmarshaled.___Editor_6);
	marshaled.___Through_7 = static_cast<int32_t>(unmarshaled.___Through_7);
	marshaled.___Synth_8 = static_cast<int32_t>(unmarshaled.___Synth_8);
	marshaled.___Time_9 = unmarshaled.___Time_9;
}
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_com_back(const MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com& marshaled, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t unmarshaledCommandAndChannel_temp_0 = 0x0;
	unmarshaledCommandAndChannel_temp_0 = marshaled.___CommandAndChannel_0;
	unmarshaled.___CommandAndChannel_0 = unmarshaledCommandAndChannel_temp_0;
	uint8_t unmarshaledData1_temp_1 = 0x0;
	unmarshaledData1_temp_1 = marshaled.___Data1_1;
	unmarshaled.___Data1_1 = unmarshaledData1_temp_1;
	uint8_t unmarshaledData2_temp_2 = 0x0;
	unmarshaledData2_temp_2 = marshaled.___Data2_2;
	unmarshaled.___Data2_2 = unmarshaledData2_temp_2;
	int32_t unmarshaledDataSize_temp_3 = 0;
	unmarshaledDataSize_temp_3 = marshaled.___DataSize_3;
	unmarshaled.___DataSize_3 = unmarshaledDataSize_temp_3;
	unmarshaled.___Data_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_4));
	int32_t unmarshaledDeviceId_temp_5 = 0;
	unmarshaledDeviceId_temp_5 = marshaled.___DeviceId_5;
	unmarshaled.___DeviceId_5 = unmarshaledDeviceId_temp_5;
	bool unmarshaledEditor_temp_6 = false;
	unmarshaledEditor_temp_6 = static_cast<bool>(marshaled.___Editor_6);
	unmarshaled.___Editor_6 = unmarshaledEditor_temp_6;
	bool unmarshaledThrough_temp_7 = false;
	unmarshaledThrough_temp_7 = static_cast<bool>(marshaled.___Through_7);
	unmarshaled.___Through_7 = unmarshaledThrough_temp_7;
	bool unmarshaledSynth_temp_8 = false;
	unmarshaledSynth_temp_8 = static_cast<bool>(marshaled.___Synth_8);
	unmarshaled.___Synth_8 = unmarshaledSynth_temp_8;
	double unmarshaledTime_temp_9 = 0.0;
	unmarshaledTime_temp_9 = marshaled.___Time_9;
	unmarshaled.___Time_9 = unmarshaledTime_temp_9;
}
// Conversion method for clean up from marshalling of: ForieroEngine.MIDIUnified.Plugins.MidiMessage
IL2CPP_EXTERN_C void MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshal_com_cleanup(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Data_4);
	marshaled.___Data_4 = NULL;
}
// System.Byte ForieroEngine.MIDIUnified.Plugins.MidiMessage::get_Command()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MidiMessage_get_Command_m1A9DD99A9BA29F52A59D075A4E4FC9DD36272087 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, const RuntimeMethod* method) 
{
	{
		// public byte Command => CommandAndChannel.ToMidiCommand();
		uint8_t L_0 = __this->___CommandAndChannel_0;
		uint8_t L_1;
		L_1 = MidiExtensions_ToMidiCommand_m8A3CAD5A59743E8767FA0710CA5487869135FD4E(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t MidiMessage_get_Command_m1A9DD99A9BA29F52A59D075A4E4FC9DD36272087_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = MidiMessage_get_Command_m1A9DD99A9BA29F52A59D075A4E4FC9DD36272087(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte ForieroEngine.MIDIUnified.Plugins.MidiMessage::get_Channel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MidiMessage_get_Channel_m881A63C4081CA0F413538DCE7C1A5753BB933AC4 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, const RuntimeMethod* method) 
{
	{
		// public byte Channel => CommandAndChannel.ToMidiChannel();
		uint8_t L_0 = __this->___CommandAndChannel_0;
		uint8_t L_1;
		L_1 = MidiExtensions_ToMidiChannel_m281CA98F9EB11B31E7F8F5F4D109D0AAB108EDB5(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t MidiMessage_get_Channel_m881A63C4081CA0F413538DCE7C1A5753BB933AC4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = MidiMessage_get_Channel_m881A63C4081CA0F413538DCE7C1A5753BB933AC4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::.ctor(ForieroEngine.MIDIUnified.Plugins.MidiMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage__ctor_m284DA3500B17BE6E96E7C522CE5C1272434F9106 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___m0, const RuntimeMethod* method) 
{
	{
		// this.CommandAndChannel = m.CommandAndChannel;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_0 = ___m0;
		uint8_t L_1 = L_0.___CommandAndChannel_0;
		__this->___CommandAndChannel_0 = L_1;
		// this.Data1 = m.Data1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_2 = ___m0;
		uint8_t L_3 = L_2.___Data1_1;
		__this->___Data1_1 = L_3;
		// this.Data2 = m.Data2;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_4 = ___m0;
		uint8_t L_5 = L_4.___Data2_2;
		__this->___Data2_2 = L_5;
		// this.DataSize = m.DataSize;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_6 = ___m0;
		int32_t L_7 = L_6.___DataSize_3;
		__this->___DataSize_3 = L_7;
		// this.Data = m.Data;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_8 = ___m0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8.___Data_4;
		__this->___Data_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_4), (void*)L_9);
		// this.DeviceId = m.DeviceId;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_10 = ___m0;
		int32_t L_11 = L_10.___DeviceId_5;
		__this->___DeviceId_5 = L_11;
		// this.Editor = m.Editor;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_12 = ___m0;
		bool L_13 = L_12.___Editor_6;
		__this->___Editor_6 = L_13;
		// this.Through = m.Through;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_14 = ___m0;
		bool L_15 = L_14.___Through_7;
		__this->___Through_7 = L_15;
		// this.Synth = m.Synth;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_16 = ___m0;
		bool L_17 = L_16.___Synth_8;
		__this->___Synth_8 = L_17;
		// this.Time = m.Time;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_18 = ___m0;
		double L_19 = L_18.___Time_9;
		__this->___Time_9 = L_19;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MidiMessage__ctor_m284DA3500B17BE6E96E7C522CE5C1272434F9106_AdjustorThunk (RuntimeObject* __this, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___m0, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	MidiMessage__ctor_m284DA3500B17BE6E96E7C522CE5C1272434F9106(_thisAdjusted, ___m0, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage__ctor_mFBEE6512C8B3B799920B492E49FD7D68F0847E60 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, int32_t ___aCommand0, int32_t ___aChannel1, int32_t ___aData12, int32_t ___aData23, int32_t ___aDeviceId4, bool ___anEditor5, bool ___through6, bool ___synth7, double ___time8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CommandAndChannel = (byte)(aCommand + aChannel);
		int32_t L_0 = ___aCommand0;
		int32_t L_1 = ___aChannel1;
		__this->___CommandAndChannel_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_0, L_1)));
		// this.Data1 = (byte)aData1;
		int32_t L_2 = ___aData12;
		__this->___Data1_1 = (uint8_t)((int32_t)(uint8_t)L_2);
		// this.Data2 = (byte)aData2;
		int32_t L_3 = ___aData23;
		__this->___Data2_2 = (uint8_t)((int32_t)(uint8_t)L_3);
		// this.DataSize = 3;
		__this->___DataSize_3 = 3;
		// this.Data = new byte[3] { CommandAndChannel, Data1, Data2 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		uint8_t L_6 = __this->___CommandAndChannel_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_5;
		uint8_t L_8 = __this->___Data1_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_7;
		uint8_t L_10 = __this->___Data2_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_10);
		__this->___Data_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_4), (void*)L_9);
		// this.DeviceId = aDeviceId;
		int32_t L_11 = ___aDeviceId4;
		__this->___DeviceId_5 = L_11;
		// this.Editor = anEditor;
		bool L_12 = ___anEditor5;
		__this->___Editor_6 = L_12;
		// this.Through = through;
		bool L_13 = ___through6;
		__this->___Through_7 = L_13;
		// this.Synth = synth;
		bool L_14 = ___synth7;
		__this->___Synth_8 = L_14;
		// this.Time = time;
		double L_15 = ___time8;
		__this->___Time_9 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MidiMessage__ctor_mFBEE6512C8B3B799920B492E49FD7D68F0847E60_AdjustorThunk (RuntimeObject* __this, int32_t ___aCommand0, int32_t ___aChannel1, int32_t ___aData12, int32_t ___aData23, int32_t ___aDeviceId4, bool ___anEditor5, bool ___through6, bool ___synth7, double ___time8, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	MidiMessage__ctor_mFBEE6512C8B3B799920B492E49FD7D68F0847E60(_thisAdjusted, ___aCommand0, ___aChannel1, ___aData12, ___aData23, ___aDeviceId4, ___anEditor5, ___through6, ___synth7, ___time8, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage__ctor_m3B26639C2E97CDD05F05BCB7DAC7C51B9997375E (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, int32_t ___aCommand0, int32_t ___aData11, int32_t ___aData22, int32_t ___aDeviceId3, bool ___anEditor4, bool ___through5, bool ___synth6, double ___time7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CommandAndChannel = (byte)aCommand;
		int32_t L_0 = ___aCommand0;
		__this->___CommandAndChannel_0 = (uint8_t)((int32_t)(uint8_t)L_0);
		// this.Data1 = (byte)aData1;
		int32_t L_1 = ___aData11;
		__this->___Data1_1 = (uint8_t)((int32_t)(uint8_t)L_1);
		// this.Data2 = (byte)aData2;
		int32_t L_2 = ___aData22;
		__this->___Data2_2 = (uint8_t)((int32_t)(uint8_t)L_2);
		// this.DataSize = 3;
		__this->___DataSize_3 = 3;
		// this.Data = new byte[3] { CommandAndChannel, Data1, Data2 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		uint8_t L_5 = __this->___CommandAndChannel_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_4;
		uint8_t L_7 = __this->___Data1_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_6;
		uint8_t L_9 = __this->___Data2_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_9);
		__this->___Data_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_4), (void*)L_8);
		// this.DeviceId = aDeviceId;
		int32_t L_10 = ___aDeviceId3;
		__this->___DeviceId_5 = L_10;
		// this.Editor = anEditor;
		bool L_11 = ___anEditor4;
		__this->___Editor_6 = L_11;
		// this.Through = through;
		bool L_12 = ___through5;
		__this->___Through_7 = L_12;
		// this.Synth = synth;
		bool L_13 = ___synth6;
		__this->___Synth_8 = L_13;
		// this.Time = time;
		double L_14 = ___time7;
		__this->___Time_9 = L_14;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MidiMessage__ctor_m3B26639C2E97CDD05F05BCB7DAC7C51B9997375E_AdjustorThunk (RuntimeObject* __this, int32_t ___aCommand0, int32_t ___aData11, int32_t ___aData22, int32_t ___aDeviceId3, bool ___anEditor4, bool ___through5, bool ___synth6, double ___time7, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	MidiMessage__ctor_m3B26639C2E97CDD05F05BCB7DAC7C51B9997375E(_thisAdjusted, ___aCommand0, ___aData11, ___aData22, ___aDeviceId3, ___anEditor4, ___through5, ___synth6, ___time7, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::CopyData(ForieroEngine.MIDIUnified.NativeMidiMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage_CopyData_mBB1B424C98B5D90FF098B399A257CE319A31DA90 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// this.CommandAndChannel = m.command;
		NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 L_0 = ___m0;
		uint8_t L_1 = L_0.___command_0;
		__this->___CommandAndChannel_0 = L_1;
		// this.Data1 = m.data1;
		NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 L_2 = ___m0;
		uint8_t L_3 = L_2.___data1_1;
		__this->___Data1_1 = L_3;
		// this.Data2 = m.data2;
		NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 L_4 = ___m0;
		uint8_t L_5 = L_4.___data2_2;
		__this->___Data2_2 = L_5;
		// this.DataSize = m.dataSize;
		NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 L_6 = ___m0;
		int32_t L_7 = L_6.___dataSize_3;
		__this->___DataSize_3 = L_7;
		// if (m.data == IntPtr.Zero) Data = Array.Empty<byte>();
		NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 L_8 = ___m0;
		intptr_t L_9 = L_8.___data_4;
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		V_0 = L_11;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// if (m.data == IntPtr.Zero) Data = Array.Empty<byte>();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		__this->___Data_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_4), (void*)L_13);
		goto IL_007e;
	}

IL_0052:
	{
		// Data = new byte[m.dataSize];
		NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 L_14 = ___m0;
		int32_t L_15 = L_14.___dataSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->___Data_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_4), (void*)L_16);
		// Marshal.Copy(m.data, Data, 0, m.dataSize);
		NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 L_17 = ___m0;
		intptr_t L_18 = L_17.___data_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___Data_4;
		NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 L_20 = ___m0;
		int32_t L_21 = L_20.___dataSize_3;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_18, L_19, 0, L_21, NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MidiMessage_CopyData_mBB1B424C98B5D90FF098B399A257CE319A31DA90_AdjustorThunk (RuntimeObject* __this, NativeMidiMessage_t2AA75458EFC32C2AD3757DB60329308BF5CBB550 ___m0, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	MidiMessage_CopyData_mBB1B424C98B5D90FF098B399A257CE319A31DA90(_thisAdjusted, ___m0, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::SetShortMessageBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage_SetShortMessageBytes_mFED7490DE859B15FAA31484F31AA15BB532E4BFF (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F45EBBFDE312BA7874EA2012D36E8930E504E0A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (bytes.Length < 3) { Debug.LogWarning("MidiMessage: Bytes don't have size greater or equal 3 bytes!!!"); return; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (bytes.Length < 3) { Debug.LogWarning("MidiMessage: Bytes don't have size greater or equal 3 bytes!!!"); return; }
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral2F45EBBFDE312BA7874EA2012D36E8930E504E0A, NULL);
		// if (bytes.Length < 3) { Debug.LogWarning("MidiMessage: Bytes don't have size greater or equal 3 bytes!!!"); return; }
		goto IL_0057;
	}

IL_0019:
	{
		// this.CommandAndChannel = bytes[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->___CommandAndChannel_0 = L_4;
		// this.Data1 = bytes[1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___Data1_1 = L_7;
		// this.Data2 = bytes[2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bytes0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___Data2_2 = L_10;
		// this.DataSize = 3;
		__this->___DataSize_3 = 3;
		// this.Data = new byte[3];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___Data_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_4), (void*)L_11);
		// Buffer.BlockCopy(bytes, 0, Data, 0, 3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___Data_4;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, 0, 3, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MidiMessage_SetShortMessageBytes_mFED7490DE859B15FAA31484F31AA15BB532E4BFF_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	MidiMessage_SetShortMessageBytes_mFED7490DE859B15FAA31484F31AA15BB532E4BFF(_thisAdjusted, ___bytes0, method);
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::SetSystemMessageBytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage_SetSystemMessageBytes_mE07809BB8392638ACF495B9E0682E42F933FE44B (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___size1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Data = new byte[size];
		int32_t L_0 = ___size1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___Data_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_4), (void*)L_1);
		// this.DataSize = size;
		int32_t L_2 = ___size1;
		__this->___DataSize_3 = L_2;
		// Buffer.BlockCopy(bytes, 0, Data, 0, size);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___Data_4;
		int32_t L_5 = ___size1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MidiMessage_SetSystemMessageBytes_mE07809BB8392638ACF495B9E0682E42F933FE44B_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___size1, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	MidiMessage_SetSystemMessageBytes_mE07809BB8392638ACF495B9E0682E42F933FE44B(_thisAdjusted, ___bytes0, ___size1, method);
}
// System.Byte[] ForieroEngine.MIDIUnified.Plugins.MidiMessage::GetShortMessageBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MidiMessage_GetShortMessageBytes_mFC3ADA3C58D2AE8B15E34E1B4A95F72145399754 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public byte[] GetShortMessageBytes() => new byte[3] { CommandAndChannel, Data1, Data2 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = __this->___CommandAndChannel_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_1;
		uint8_t L_4 = __this->___Data1_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_3;
		uint8_t L_6 = __this->___Data2_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_6);
		return L_5;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MidiMessage_GetShortMessageBytes_mFC3ADA3C58D2AE8B15E34E1B4A95F72145399754_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = MidiMessage_GetShortMessageBytes_mFC3ADA3C58D2AE8B15E34E1B4A95F72145399754(_thisAdjusted, method);
	return _returnValue;
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiMessage::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiMessage_ToString_m3434FF066CD15B6A6443D4A2DE6A9001E4BFE9B7 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EB0BC263E22FD48D52C4A7968A0BCCBB0425D4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{CommandAndChannel};{Data1};{Data2}";
		uint8_t L_0 = __this->___CommandAndChannel_0;
		uint8_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_1);
		uint8_t L_3 = __this->___Data1_1;
		uint8_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_4);
		uint8_t L_6 = __this->___Data2_2;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral2EB0BC263E22FD48D52C4A7968A0BCCBB0425D4C, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* MidiMessage_ToString_m3434FF066CD15B6A6443D4A2DE6A9001E4BFE9B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MidiMessage_ToString_m3434FF066CD15B6A6443D4A2DE6A9001E4BFE9B7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiMessage::Log(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiMessage_Log_m56199A67422AEA56D8F46A8A841C2B4A1A40B47E (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* __this, String_t* ___prefix0, String_t* ___format1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DDE661A14F5B474F87A159AA73F9995D4A0C400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C1B0457751F997932313D669C10785926261EDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	String_t* G_B8_0 = NULL;
	{
		// if (Data == null) return;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___Data_4;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (Data == null) return;
		goto IL_00b9;
	}

IL_0013:
	{
		// var s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (var b in Data) { s += b.ToString(format) + " "; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___Data_4;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0044;
	}

IL_0025:
	{
		// foreach (var b in Data) { s += b.ToString(format) + " "; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// foreach (var b in Data) { s += b.ToString(format) + " "; }
		String_t* L_7 = V_0;
		String_t* L_8 = ___format1;
		String_t* L_9;
		L_9 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&V_4), L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_10;
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0044:
	{
		// foreach (var b in Data) { s += b.ToString(format) + " "; }
		int32_t L_12 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// s = (string.IsNullOrEmpty(prefix) ? "" : prefix + " ") + s.TrimEnd();
		String_t* L_14 = ___prefix0;
		bool L_15;
		L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
		if (L_15)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_16 = ___prefix0;
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		G_B8_0 = L_17;
		goto IL_0064;
	}

IL_005f:
	{
		G_B8_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0064:
	{
		String_t* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_TrimEnd_m25B1EA658EE07ADFED51FED61D630E5625336AB5(L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B8_0, L_19, NULL);
		V_0 = L_20;
		// s += " | LENGTH : " + Data.Length + " | DEVICEID : " + DeviceId;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		String_t* L_23 = V_0;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_22;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral5DDE661A14F5B474F87A159AA73F9995D4A0C400);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral5DDE661A14F5B474F87A159AA73F9995D4A0C400);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___Data_4;
		NullCheck(L_26);
		V_5 = ((int32_t)(((RuntimeArray*)L_26)->max_length));
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_25;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral7C1B0457751F997932313D669C10785926261EDF);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral7C1B0457751F997932313D669C10785926261EDF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		int32_t* L_30 = (&__this->___DeviceId_5);
		String_t* L_31;
		L_31 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_30, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_31);
		String_t* L_32;
		L_32 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_29, NULL);
		V_0 = L_32;
		// Debug.Log(s);
		String_t* L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_33, NULL);
	}

IL_00b9:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MidiMessage_Log_m56199A67422AEA56D8F46A8A841C2B4A1A40B47E_AdjustorThunk (RuntimeObject* __this, String_t* ___prefix0, String_t* ___format1, const RuntimeMethod* method)
{
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*>(__this + _offset);
	MidiMessage_Log_m56199A67422AEA56D8F46A8A841C2B4A1A40B47E(_thisAdjusted, ___prefix0, ___format1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ForieroEngine.MIDIUnified.Plugins.ITimeProvider ForieroEngine.MIDIUnified.Plugins.TimeProviders::get_iTimeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeProviders_get_iTimeProvider_m8ADF77CDB7A11C6DD0E90CD0FAEF9D6A19A10335 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ITimeProvider iTimeProvider { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->___U3CiTimeProviderU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.TimeProviders::set_iTimeProvider(ForieroEngine.MIDIUnified.Plugins.ITimeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeProviders_set_iTimeProvider_m59DD0F700685D83C7CAAB9D241667E5D37C8D717 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ITimeProvider iTimeProvider { get; private set; }
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->___U3CiTimeProviderU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->___U3CiTimeProviderU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.TimeProviders::Register(ForieroEngine.MIDIUnified.Plugins.ITimeProvider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeProviders_Register_m1EE019C089241005BC118463F59247EB13D1A355 (RuntimeObject* ___i0, bool ___ignoreNullOrEmptyId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m37DE5B75902D6DBD70BB51A86C2644A53035E362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m190998538EA719215017571382F68DCC7D76A96F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral151A799B37703887590AAE6998B348867178B75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E4755B7A3A0C32E148B8024B606FD6A61EC424);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BB05EA67B18016BF764400B597714AB7AD08CC4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// Debug.Log($"Registering Time Provider:{i.Id}");
		RuntimeObject* L_0 = ___i0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ForieroEngine.MIDIUnified.Plugins.ITimeProvider::get_Id() */, ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral45E4755B7A3A0C32E148B8024B606FD6A61EC424, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// if (string.IsNullOrEmpty(i.Id) && ignoreNullOrEmptyId) return;
		RuntimeObject* L_3 = ___i0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ForieroEngine.MIDIUnified.Plugins.ITimeProvider::get_Id() */, ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var, L_3);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		bool L_6 = ___ignoreNullOrEmptyId1;
		V_0 = (bool)((int32_t)((int32_t)L_5&(int32_t)L_6));
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// if (string.IsNullOrEmpty(i.Id) && ignoreNullOrEmptyId) return;
		goto IL_0074;
	}

IL_002a:
	{
		// if (_providers.Contains(i)) Debug.LogError($"IMidiGenerator instance with id {i.Id} already exists!!!");
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* L_8 = ((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->____providers_1;
		RuntimeObject* L_9 = ___i0;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Contains_m190998538EA719215017571382F68DCC7D76A96F(L_8, L_9, List_1_Contains_m190998538EA719215017571382F68DCC7D76A96F_RuntimeMethod_var);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// if (_providers.Contains(i)) Debug.LogError($"IMidiGenerator instance with id {i.Id} already exists!!!");
		RuntimeObject* L_12 = ___i0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ForieroEngine.MIDIUnified.Plugins.ITimeProvider::get_Id() */, ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var, L_12);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral151A799B37703887590AAE6998B348867178B75D, L_13, _stringLiteral9BB05EA67B18016BF764400B597714AB7AD08CC4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_14, NULL);
		goto IL_0074;
	}

IL_0056:
	{
		// else if (!string.IsNullOrEmpty(i.Id)) _providers.Add(i);
		RuntimeObject* L_15 = ___i0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ForieroEngine.MIDIUnified.Plugins.ITimeProvider::get_Id() */, ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var, L_15);
		bool L_17;
		L_17 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_16, NULL);
		V_2 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0074;
		}
	}
	{
		// else if (!string.IsNullOrEmpty(i.Id)) _providers.Add(i);
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* L_19 = ((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->____providers_1;
		RuntimeObject* L_20 = ___i0;
		NullCheck(L_19);
		List_1_Add_m37DE5B75902D6DBD70BB51A86C2644A53035E362_inline(L_19, L_20, List_1_Add_m37DE5B75902D6DBD70BB51A86C2644A53035E362_RuntimeMethod_var);
	}

IL_0074:
	{
		// }
		return;
	}
}
// ForieroEngine.MIDIUnified.Plugins.ITimeProvider ForieroEngine.MIDIUnified.Plugins.TimeProviders::GetById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeProviders_GetById_m5BBD3FA1D36DCE94B0A0E556A4680204D2DAB2AD (String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_mF483978A6590B237CA1581B4742E9A9DF63C86E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t550699288713F584B977BA55FDB459DE3973C95B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetByIdU3Eb__0_mA00682CA54951F62E2849FB4F0BF710D68686D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D* L_0 = (U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m1E6D54244B126107685DF7B5AB83DBD0845C746C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D* L_1 = V_0;
		String_t* L_2 = ___id0;
		NullCheck(L_1);
		L_1->___id_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___id_0), (void*)L_2);
		// public static ITimeProvider GetById(string id) => _providers.FirstOrDefault(i => i != null && i.Id == id);
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* L_3 = ((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->____providers_1;
		U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D* L_4 = V_0;
		Func_2_t550699288713F584B977BA55FDB459DE3973C95B* L_5 = (Func_2_t550699288713F584B977BA55FDB459DE3973C95B*)il2cpp_codegen_object_new(Func_2_t550699288713F584B977BA55FDB459DE3973C95B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m5F67ACBF2357442576F3AE329FF406382F73B5FF(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetByIdU3Eb__0_mA00682CA54951F62E2849FB4F0BF710D68686D60_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_FirstOrDefault_TisITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_mF483978A6590B237CA1581B4742E9A9DF63C86E9(L_3, L_5, Enumerable_FirstOrDefault_TisITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_mF483978A6590B237CA1581B4742E9A9DF63C86E9_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.TimeProviders::Unregister(ForieroEngine.MIDIUnified.Plugins.ITimeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeProviders_Unregister_mFB6B1612B03590A3F7AFA2E1BEF170B45CF4AF54 (RuntimeObject* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m190998538EA719215017571382F68DCC7D76A96F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mE815E9B73712D4CF2C417C56A945B97096EB45A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!_providers.Contains(i)) return;
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* L_0 = ((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->____providers_1;
		RuntimeObject* L_1 = ___i0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m190998538EA719215017571382F68DCC7D76A96F(L_0, L_1, List_1_Contains_m190998538EA719215017571382F68DCC7D76A96F_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// if (!_providers.Contains(i)) return;
		goto IL_0034;
	}

IL_0015:
	{
		// if (i == iTimeProvider) iTimeProvider = null;
		RuntimeObject* L_4 = ___i0;
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = TimeProviders_get_iTimeProvider_m8ADF77CDB7A11C6DD0E90CD0FAEF9D6A19A10335_inline(NULL);
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// if (i == iTimeProvider) iTimeProvider = null;
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		TimeProviders_set_iTimeProvider_m59DD0F700685D83C7CAAB9D241667E5D37C8D717_inline((RuntimeObject*)NULL, NULL);
	}

IL_0028:
	{
		// _providers.Remove(i);
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* L_7 = ((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->____providers_1;
		RuntimeObject* L_8 = ___i0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_mE815E9B73712D4CF2C417C56A945B97096EB45A4(L_7, L_8, List_1_Remove_mE815E9B73712D4CF2C417C56A945B97096EB45A4_RuntimeMethod_var);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.TimeProviders::Init(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeProviders_Init_m5A5B8236658E9CA161A0B4990BC4F67DD1FEA477 (String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4A6AFC2BBB8CC84111DB782B037CAF7962529F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB35D0907CBD06E9FAB567B4266B2DBD0BA404F66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD8BD27FC228849B672892E12B4FA0ACBB002437F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6E99FCD9262AB77AAD32DBF16BE3401ECFB0D5C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		// iTimeProvider = GetById(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TimeProviders_GetById_m5BBD3FA1D36DCE94B0A0E556A4680204D2DAB2AD(L_0, NULL);
		TimeProviders_set_iTimeProvider_m59DD0F700685D83C7CAAB9D241667E5D37C8D717_inline(L_1, NULL);
		// foreach (var p in _providers)
		List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* L_2 = ((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->____providers_1;
		NullCheck(L_2);
		Enumerator_t6AE13E893344C3BE71DD9A7C64B0E430E6C94B3E L_3;
		L_3 = List_1_GetEnumerator_m6E99FCD9262AB77AAD32DBF16BE3401ECFB0D5C3(L_2, List_1_GetEnumerator_m6E99FCD9262AB77AAD32DBF16BE3401ECFB0D5C3_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4A6AFC2BBB8CC84111DB782B037CAF7962529F20((&V_0), Enumerator_Dispose_m4A6AFC2BBB8CC84111DB782B037CAF7962529F20_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0041_1;
			}

IL_001b_1:
			{
				// foreach (var p in _providers)
				RuntimeObject* L_4;
				L_4 = Enumerator_get_Current_mD8BD27FC228849B672892E12B4FA0ACBB002437F_inline((&V_0), Enumerator_get_Current_mD8BD27FC228849B672892E12B4FA0ACBB002437F_RuntimeMethod_var);
				V_1 = L_4;
				// if (p == iTimeProvider) p.EnableTimeProvider();
				RuntimeObject* L_5 = V_1;
				il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
				RuntimeObject* L_6;
				L_6 = TimeProviders_get_iTimeProvider_m8ADF77CDB7A11C6DD0E90CD0FAEF9D6A19A10335_inline(NULL);
				V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)L_6))? 1 : 0);
				bool L_7 = V_2;
				if (!L_7)
				{
					goto IL_0039_1;
				}
			}
			{
				// if (p == iTimeProvider) p.EnableTimeProvider();
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				InterfaceActionInvoker0::Invoke(3 /* System.Void ForieroEngine.MIDIUnified.Plugins.ITimeProvider::EnableTimeProvider() */, ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var, L_8);
				goto IL_0040_1;
			}

IL_0039_1:
			{
				// else p.DisableTimeProvider();
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				InterfaceActionInvoker0::Invoke(4 /* System.Void ForieroEngine.MIDIUnified.Plugins.ITimeProvider::DisableTimeProvider() */, ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var, L_9);
			}

IL_0040_1:
			{
			}

IL_0041_1:
			{
				// foreach (var p in _providers)
				bool L_10;
				L_10 = Enumerator_MoveNext_mB35D0907CBD06E9FAB567B4266B2DBD0BA404F66((&V_0), Enumerator_MoveNext_mB35D0907CBD06E9FAB567B4266B2DBD0BA404F66_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.TimeProviders::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeProviders__cctor_m167E33307D9FF7BE32061ACD662767C2211E13B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2922815C857F58699608BCC184BD944912AB48F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t695DADED0C4A2D6A177333579E8B900B079408F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<ITimeProvider> _providers = new List<ITimeProvider>();
		List_1_t695DADED0C4A2D6A177333579E8B900B079408F9* L_0 = (List_1_t695DADED0C4A2D6A177333579E8B900B079408F9*)il2cpp_codegen_object_new(List_1_t695DADED0C4A2D6A177333579E8B900B079408F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2922815C857F58699608BCC184BD944912AB48F(L_0, List_1__ctor_mE2922815C857F58699608BCC184BD944912AB48F_RuntimeMethod_var);
		((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->____providers_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->____providers_1), (void*)L_0);
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
// System.Void ForieroEngine.MIDIUnified.Plugins.TimeProviders/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m1E6D54244B126107685DF7B5AB83DBD0845C746C (U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ForieroEngine.MIDIUnified.Plugins.TimeProviders/<>c__DisplayClass6_0::<GetById>b__0(ForieroEngine.MIDIUnified.Plugins.ITimeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CGetByIdU3Eb__0_mA00682CA54951F62E2849FB4F0BF710D68686D60 (U3CU3Ec__DisplayClass6_0_t83C2DAD0CC1D1F13ED2546770B195B5A6FB8568D* __this, RuntimeObject* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public static ITimeProvider GetById(string id) => _providers.FirstOrDefault(i => i != null && i.Id == id);
		RuntimeObject* L_0 = ___i0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___i0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ForieroEngine.MIDIUnified.Plugins.ITimeProvider::get_Id() */, ITimeProvider_t8B3EB3B6F2A537EAE09D4178B175D5406C22AC9E_il2cpp_TypeInfo_var, L_1);
		String_t* L_3 = __this->___id_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return (bool)G_B3_0;
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
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiDevice__ctor_m4FDBB89113043277282E0942DCA5173CE5803961 (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int deviceId = -1;
		__this->___deviceId_0 = (-1);
		// public string name = "";
		__this->___name_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool isEditor = false;
		__this->___isEditor_2 = (bool)0;
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
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::InitPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_InitPlayer_mD0FF5E7F5E19D083E531BB7D5BD903ED76C13DF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA72660D73E937C1E6F81615C2E599B53A081EA94);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* G_B3_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
		// var stopWatch = ForieroDebug.CodePerformance ? System.Diagnostics.Stopwatch.StartNew() : null;
		bool L_0;
		L_0 = ForieroDebug_get_CodePerformance_m272E47EEF1666F814153B7F8C39612CDE8C21F57(NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)(NULL));
		goto IL_0010;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1;
		L_1 = Stopwatch_StartNew_mF813F15E68604C7734FECC301B7042A521041259(NULL);
		G_B3_0 = L_1;
	}

IL_0010:
	{
		V_0 = G_B3_0;
		// if (Application.isPlaying) { Init(); }
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (Application.isPlaying) { Init(); }
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		MidiINPlugin_Init_m764AB92707DCFAFF03C04DDAEB85D9665FD7A007(NULL);
	}

IL_0022:
	{
		// if (ForieroDebug.CodePerformance) Debug.Log("METHOD STOPWATCH (MidiPlugin.IN - BeforeSceneLoad): " + stopWatch?.Elapsed.ToString());
		bool L_4;
		L_4 = ForieroDebug_get_CodePerformance_m272E47EEF1666F814153B7F8C39612CDE8C21F57(NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		// if (ForieroDebug.CodePerformance) Debug.Log("METHOD STOPWATCH (MidiPlugin.IN - BeforeSceneLoad): " + stopWatch?.Elapsed.ToString());
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_6 = V_0;
		G_B7_0 = _stringLiteralA72660D73E937C1E6F81615C2E599B53A081EA94;
		if (L_6)
		{
			G_B8_0 = _stringLiteralA72660D73E937C1E6F81615C2E599B53A081EA94;
			goto IL_0036;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_0;
		goto IL_004a;
	}

IL_0036:
	{
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_7 = V_0;
		NullCheck(L_7);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_7, NULL);
		V_3 = L_8;
		String_t* L_9;
		L_9 = TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92((&V_3), NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
	}

IL_004a:
	{
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_Init_m764AB92707DCFAFF03C04DDAEB85D9665FD7A007 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB916716242AD4024082455767A31A9AE0E680091);
		s_Il2CppMethodInitialized = true;
	}
	MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* V_0 = NULL;
	bool V_1 = false;
	{
		// DSP.Init();
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DSP_Init_m17192698516229C80BD779F2BC710E5965D9737C(NULL);
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4(NULL);
		// var device = new MidiINDeviceANDROID();
		MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* L_1 = (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607*)il2cpp_codegen_object_new(MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MidiINDeviceANDROID__ctor_m3443305605F24F61032B408C896F98ED11F36983(L_1, NULL);
		V_0 = L_1;
		// iMidiDevice = device as IMidiDevice;
		MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5), (void*)L_2);
		// iMidiInDevice = device as IMidiINDevice;
		MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* L_3 = V_0;
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiInDevice_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiInDevice_0), (void*)L_3);
		// iMidiEditorDevice = device as IMidiEditorDevice;
		MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* L_4 = V_0;
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var)));
		// initialized = iMidiDevice.Init();
		RuntimeObject* L_5 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean ForieroEngine.MIDIUnified.Plugins.IMidiDevice::Init() */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_5);
		il2cpp_codegen_memory_barrier();
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___initialized_2 = L_6;
		// if (!initialized) { Debug.LogError("MidiINDevice not initialized"); return; }
		bool L_7 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___initialized_2;
		il2cpp_codegen_memory_barrier();
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// if (!initialized) { Debug.LogError("MidiINDevice not initialized"); return; }
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB916716242AD4024082455767A31A9AE0E680091, NULL);
		// if (!initialized) { Debug.LogError("MidiINDevice not initialized"); return; }
		goto IL_0065;
	}

IL_0057:
	{
		// { MidiThread.Initialise(); }
		MidiThread_Initialise_m6E23812AF6C3A08164DC2028639AFA813AD801A3(NULL);
		// Refresh();
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		MidiINPlugin_Refresh_mEFB655C778C485524C9E197A829020CB0E25D70D(NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::StoreConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_StoreConnections_m73E50C326B72E73C529200EBF26C45DD25EB65DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9F86060BC2A4344AEAED0524E0B4DFAE2CEE1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_2;
	memset((&V_2), 0, sizeof(V_2));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_3 = NULL;
	{
		// var connectionNames = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var device in connectedDevices) { connectionNames.Add(device.name); }
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_1 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_1);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_2;
		L_2 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_1, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_2), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_0015_1:
			{
				// foreach (var device in connectedDevices) { connectionNames.Add(device.name); }
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_3;
				L_3 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_2), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_3 = L_3;
				// foreach (var device in connectedDevices) { connectionNames.Add(device.name); }
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = V_0;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_5 = V_3;
				NullCheck(L_5);
				String_t* L_6 = L_5->___name_1;
				NullCheck(L_4);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_002c_1:
			{
				// foreach (var device in connectedDevices) { connectionNames.Add(device.name); }
				bool L_7;
				L_7 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_2), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// var s = string.Join(";", connectionNames.ToArray());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_8, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_10;
		L_10 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, L_9, NULL);
		V_1 = L_10;
		// PlayerPrefs.SetString("MIDI_IN_NAMES", s);
		String_t* L_11 = V_1;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral3D9F86060BC2A4344AEAED0524E0B4DFAE2CEE1B, L_11, NULL);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::RestoreConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_RestoreConnections_mB9D171851F3153482EDC30D6A86A36132932C08F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9F86060BC2A4344AEAED0524E0B4DFAE2CEE1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AB7726D0527457D52A9361A4010822DAA133FB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	{
		// var names = PlayerPrefs.GetString("MIDI_IN_NAMES", "").Trim();
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteral3D9F86060BC2A4344AEAED0524E0B4DFAE2CEE1B, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_0, NULL);
		V_0 = L_1;
		// var midiInNames = string.IsNullOrEmpty(names) ? new string[0] : names.Split(';');
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_4, ((int32_t)59), 0, NULL);
		G_B3_0 = L_5;
		goto IL_002f;
	}

IL_0029:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		G_B3_0 = L_6;
	}

IL_002f:
	{
		V_1 = G_B3_0;
		// foreach (var midiInName in midiInNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		V_2 = L_7;
		V_3 = 0;
		goto IL_0074;
	}

IL_0037:
	{
		// foreach (var midiInName in midiInNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// if (ConnectDeviceByName(midiInName) != null) continue;
		String_t* L_12 = V_4;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_13;
		L_13 = MidiINPlugin_ConnectDeviceByName_mBD78859810263D4E9DBDB2B4F85D265F931AD434(L_12, (bool)0, NULL);
		V_5 = (bool)((!(((RuntimeObject*)(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0050;
		}
	}
	{
		// if (ConnectDeviceByName(midiInName) != null) continue;
		goto IL_0070;
	}

IL_0050:
	{
		// if (Debug.isDebugBuild) { Debug.LogError("Could not connect midi in device : " + midiInName); }
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		// if (Debug.isDebugBuild) { Debug.LogError("Could not connect midi in device : " + midiInName); }
		String_t* L_17 = V_4;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5AB7726D0527457D52A9361A4010822DAA133FB2, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_18, NULL);
	}

IL_006f:
	{
	}

IL_0070:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0074:
	{
		// foreach (var midiInName in midiInNames)
		int32_t L_20 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_Refresh_mEFB655C778C485524C9E197A829020CB0E25D70D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (iMidiDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (iMidiDevice == null) return;
		goto IL_00df;
	}

IL_0012:
	{
		// deviceNames = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___deviceNames_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___deviceNames_4), (void*)L_2);
		// for (var i = 0; i < iMidiDevice.GetDeviceCount(); i++) { deviceNames.Add(iMidiDevice.GetDeviceName(i)); }
		V_1 = 0;
		goto IL_003c;
	}

IL_0020:
	{
		// for (var i = 0; i < iMidiDevice.GetDeviceCount(); i++) { deviceNames.Add(iMidiDevice.GetDeviceName(i)); }
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___deviceNames_4;
		RuntimeObject* L_4 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceName(System.Int32) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_4, L_5);
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (var i = 0; i < iMidiDevice.GetDeviceCount(); i++) { deviceNames.Add(iMidiDevice.GetDeviceName(i)); }
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003c:
	{
		// for (var i = 0; i < iMidiDevice.GetDeviceCount(); i++) { deviceNames.Add(iMidiDevice.GetDeviceName(i)); }
		int32_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceCount() */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_9);
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0020;
		}
	}
	{
		// if (iMidiEditorDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// if (iMidiEditorDevice == null) return;
		goto IL_00df;
	}

IL_005e:
	{
		// connectedEditorDevices = new List<MidiDevice>();
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_14 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_14, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6), (void*)L_14);
		// for (var i = 0; i < iMidiEditorDevice.GetConnectedDeviceCount(); i++)
		V_4 = 0;
		goto IL_00cb;
	}

IL_006d:
	{
		// if (!iMidiEditorDevice.GetConnectedDeviceIsEditor(i)) continue;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		bool L_17;
		L_17 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(3 /* System.Boolean ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceIsEditor(System.Int32) */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, L_15, L_16);
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		// if (!iMidiEditorDevice.GetConnectedDeviceIsEditor(i)) continue;
		goto IL_00c5;
	}

IL_0085:
	{
		// var md = new MidiDevice
		// {
		//     name = iMidiEditorDevice.GetConnectedDeviceName(i),
		//     deviceId = iMidiEditorDevice.GetConnectedDeviceId(i),
		//     isEditor = true
		// };
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_19 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)il2cpp_codegen_object_new(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		MidiDevice__ctor_m4FDBB89113043277282E0942DCA5173CE5803961(L_19, NULL);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_20 = L_19;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_21 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceName(System.Int32) */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, L_21, L_22);
		NullCheck(L_20);
		L_20->___name_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___name_1), (void*)L_23);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_24 = L_20;
		RuntimeObject* L_25 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceId(System.Int32) */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, L_25, L_26);
		NullCheck(L_24);
		L_24->___deviceId_0 = L_27;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_28 = L_24;
		NullCheck(L_28);
		L_28->___isEditor_2 = (bool)1;
		V_5 = L_28;
		// connectedEditorDevices.Add(md);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_29 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_30 = V_5;
		NullCheck(L_29);
		List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_inline(L_29, L_30, List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
	}

IL_00c5:
	{
		// for (var i = 0; i < iMidiEditorDevice.GetConnectedDeviceCount(); i++)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00cb:
	{
		// for (var i = 0; i < iMidiEditorDevice.GetConnectedDeviceCount(); i++)
		int32_t L_32 = V_4;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_33 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceCount() */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, L_33);
		V_7 = (bool)((((int32_t)L_32) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_7;
		if (L_35)
		{
			goto IL_006d;
		}
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiINPlugin_Initialized_mB59FB87F2EEC4AAEE188F28F5FBF8DB03DC57191 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public static bool Initialized() => iMidiDevice != null && initialized;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		bool L_1 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___initialized_2;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		return (bool)G_B3_0;
	}
}
// ForieroEngine.MIDIUnified.Plugins.MidiDevice ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::ConnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* MidiINPlugin_ConnectDevice_m02275034E4E593C153BA3FE303FB01365BEE6B9F (int32_t ___deviceIndex0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36927E29337C770B3A29FAC284C8515C7BE5B388);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral421FA1E9E3784713B246ADD13F9E8C5240220139);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5DF33D23247684B52500B8C8F161D5D91D50E71);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_1 = NULL;
	bool V_2 = false;
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_3 = NULL;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_4;
	memset((&V_4), 0, sizeof(V_4));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_8;
	memset((&V_8), 0, sizeof(V_8));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_9 = NULL;
	bool V_10 = false;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_11;
	memset((&V_11), 0, sizeof(V_11));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B7_0 = 0;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B35_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B34_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B39_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B38_0 = NULL;
	{
		// if (iMidiDevice == null) return null;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (iMidiDevice == null) return null;
		V_3 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
		goto IL_01c4;
	}

IL_0014:
	{
		// foreach (var md in MidiOUTPlugin.connectedDevices)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_2 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_2);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_3;
		L_3 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_2, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_4 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_4), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006d_1;
			}

IL_0023_1:
			{
				// foreach (var md in MidiOUTPlugin.connectedDevices)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_4;
				L_4 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_4), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_5 = L_4;
				// if (md.name == iMidiDevice.GetDeviceName(deviceIndex) && MIDISettings.instance.midiInOutExclusive)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_5 = V_5;
				NullCheck(L_5);
				String_t* L_6 = L_5->___name_1;
				il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
				RuntimeObject* L_7 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
				int32_t L_8 = ___deviceIndex0;
				NullCheck(L_7);
				String_t* L_9;
				L_9 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceName(System.Int32) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_7, L_8);
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_9, NULL);
				if (!L_10)
				{
					goto IL_0052_1;
				}
			}
			{
				MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_11;
				L_11 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
				NullCheck(L_11);
				bool L_12 = L_11->___midiInOutExclusive_15;
				G_B7_0 = ((int32_t)(L_12));
				goto IL_0053_1;
			}

IL_0052_1:
			{
				G_B7_0 = 0;
			}

IL_0053_1:
			{
				V_6 = (bool)G_B7_0;
				bool L_13 = V_6;
				if (!L_13)
				{
					goto IL_006c_1;
				}
			}
			{
				// Debug.LogError("Preventing infinite loop. To have same device connected as IN and OUT is not allowed.");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral36927E29337C770B3A29FAC284C8515C7BE5B388, NULL);
				// return null;
				V_3 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
				goto IL_01c4;
			}

IL_006c_1:
			{
			}

IL_006d_1:
			{
				// foreach (var md in MidiOUTPlugin.connectedDevices)
				bool L_14;
				L_14 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_4), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// var deviceId = iMidiDevice.ConnectDevice(deviceIndex, editor);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		int32_t L_16 = ___deviceIndex0;
		bool L_17 = ___editor1;
		NullCheck(L_15);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(1 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::ConnectDevice(System.Int32,System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		V_0 = L_18;
		// if (editor)
		bool L_19 = ___editor1;
		V_7 = L_19;
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_00fa;
		}
	}
	{
		// foreach (var cd in connectedEditorDevices)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_21 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		NullCheck(L_21);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_22;
		L_22 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_21, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_8 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_8), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00dd_1;
			}

IL_00ab_1:
			{
				// foreach (var cd in connectedEditorDevices)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_23;
				L_23 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_8), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_9 = L_23;
				// if (deviceId != cd.deviceId) continue;
				int32_t L_24 = V_0;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_25 = V_9;
				NullCheck(L_25);
				int32_t L_26 = L_25->___deviceId_0;
				V_10 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)L_26))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00ca_1;
				}
			}
			{
				// if (deviceId != cd.deviceId) continue;
				goto IL_00dd_1;
			}

IL_00ca_1:
			{
				// Debug.LogError("Editor device already connected");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC5DF33D23247684B52500B8C8F161D5D91D50E71, NULL);
				// return cd;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_28 = V_9;
				V_3 = L_28;
				goto IL_01c4;
			}

IL_00dd_1:
			{
				// foreach (var cd in connectedEditorDevices)
				bool L_29;
				L_29 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_8), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00ab_1;
				}
			}
			{
				goto IL_00f7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f7:
	{
		goto IL_0157;
	}

IL_00fa:
	{
		// foreach (var cd in connectedDevices)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_30 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_30);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_31;
		L_31 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_30, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_11 = L_31;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0147:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_11), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_013c_1;
			}

IL_010a_1:
			{
				// foreach (var cd in connectedDevices)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_32;
				L_32 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_11), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_12 = L_32;
				// if (deviceId != cd.deviceId) continue;
				int32_t L_33 = V_0;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_34 = V_12;
				NullCheck(L_34);
				int32_t L_35 = L_34->___deviceId_0;
				V_13 = (bool)((((int32_t)((((int32_t)L_33) == ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_36 = V_13;
				if (!L_36)
				{
					goto IL_0129_1;
				}
			}
			{
				// if (deviceId != cd.deviceId) continue;
				goto IL_013c_1;
			}

IL_0129_1:
			{
				// Debug.LogError("Device already connected");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral421FA1E9E3784713B246ADD13F9E8C5240220139, NULL);
				// return cd;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_37 = V_12;
				V_3 = L_37;
				goto IL_01c4;
			}

IL_013c_1:
			{
				// foreach (var cd in connectedDevices)
				bool L_38;
				L_38 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_11), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_010a_1;
				}
			}
			{
				goto IL_0156;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0156:
	{
	}

IL_0157:
	{
		// var connectedDevice = new MidiDevice
		// {
		//     deviceId = deviceId,
		//     name = GetDeviceName(deviceIndex),
		//     isEditor = editor
		// };
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_39 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)il2cpp_codegen_object_new(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		MidiDevice__ctor_m4FDBB89113043277282E0942DCA5173CE5803961(L_39, NULL);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_40 = L_39;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		L_40->___deviceId_0 = L_41;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_42 = L_40;
		int32_t L_43 = ___deviceIndex0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		String_t* L_44;
		L_44 = MidiINPlugin_GetDeviceName_m7FDAA240EEC062A06549CC1E46B7232D477A8194(L_43, NULL);
		NullCheck(L_42);
		L_42->___name_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___name_1), (void*)L_44);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_45 = L_42;
		bool L_46 = ___editor1;
		NullCheck(L_45);
		L_45->___isEditor_2 = L_46;
		V_1 = L_45;
		// if (editor)
		bool L_47 = ___editor1;
		V_14 = L_47;
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_01a0;
		}
	}
	{
		// connectedEditorDevices.Add(connectedDevice);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_49 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_50 = V_1;
		NullCheck(L_49);
		List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_inline(L_49, L_50, List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
		// OnEditorDeviceConnected?.Invoke(connectedDevice);
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_51 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___OnEditorDeviceConnected_8;
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_52 = L_51;
		G_B34_0 = L_52;
		if (L_52)
		{
			G_B35_0 = L_52;
			goto IL_0196;
		}
	}
	{
		goto IL_019d;
	}

IL_0196:
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_53 = V_1;
		NullCheck(G_B35_0);
		Action_1_Invoke_m2C2BF1198D9E682AD8362C5AB32A539BB337D911_inline(G_B35_0, L_53, NULL);
	}

IL_019d:
	{
		goto IL_01c0;
	}

IL_01a0:
	{
		// connectedDevices.Add(connectedDevice);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_54 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_55 = V_1;
		NullCheck(L_54);
		List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_inline(L_54, L_55, List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
		// OnDeviceConnected?.Invoke(connectedDevice);
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_56 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___OnDeviceConnected_7;
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_57 = L_56;
		G_B38_0 = L_57;
		if (L_57)
		{
			G_B39_0 = L_57;
			goto IL_01b8;
		}
	}
	{
		goto IL_01bf;
	}

IL_01b8:
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_58 = V_1;
		NullCheck(G_B39_0);
		Action_1_Invoke_m2C2BF1198D9E682AD8362C5AB32A539BB337D911_inline(G_B39_0, L_58, NULL);
	}

IL_01bf:
	{
	}

IL_01c0:
	{
		// return connectedDevice;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_59 = V_1;
		V_3 = L_59;
		goto IL_01c4;
	}

IL_01c4:
	{
		// }
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_60 = V_3;
		return L_60;
	}
}
// ForieroEngine.MIDIUnified.Plugins.MidiDevice ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::ConnectDeviceByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* MidiINPlugin_ConnectDeviceByName_mBD78859810263D4E9DBDB2B4F85D265F931AD434 (String_t* ___deviceName0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36927E29337C770B3A29FAC284C8515C7BE5B388);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_1 = NULL;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_2;
	memset((&V_2), 0, sizeof(V_2));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		// if (iMidiDevice == null) return null;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (iMidiDevice == null) return null;
		V_1 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
		goto IL_00b6;
	}

IL_0014:
	{
		// foreach (var md in MidiOUTPlugin.connectedDevices)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_2 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_2);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_3;
		L_3 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_2, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_2), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005d_1;
			}

IL_0022_1:
			{
				// foreach (var md in MidiOUTPlugin.connectedDevices)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_4;
				L_4 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_2), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_3 = L_4;
				// if (md.name == deviceName && MIDISettings.instance.midiInOutExclusive)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_5 = V_3;
				NullCheck(L_5);
				String_t* L_6 = L_5->___name_1;
				String_t* L_7 = ___deviceName0;
				bool L_8;
				L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
				if (!L_8)
				{
					goto IL_0045_1;
				}
			}
			{
				MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_9;
				L_9 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
				NullCheck(L_9);
				bool L_10 = L_9->___midiInOutExclusive_15;
				G_B7_0 = ((int32_t)(L_10));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 0;
			}

IL_0046_1:
			{
				V_4 = (bool)G_B7_0;
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_005c_1;
				}
			}
			{
				// Debug.LogError("Preventing infinite loop. To have same device connected as IN and OUT is not allowed.");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral36927E29337C770B3A29FAC284C8515C7BE5B388, NULL);
				// return null;
				V_1 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
				goto IL_00b6;
			}

IL_005c_1:
			{
			}

IL_005d_1:
			{
				// foreach (var md in MidiOUTPlugin.connectedDevices)
				bool L_12;
				L_12 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_2), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		// for (int i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		V_5 = 0;
		goto IL_00a3;
	}

IL_007c:
	{
		// for (int i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		String_t* L_13 = ___deviceName0;
		int32_t L_14 = V_5;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = MidiINPlugin_GetDeviceName_m7FDAA240EEC062A06549CC1E46B7232D477A8194(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, L_15, NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		// for (int i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		int32_t L_18 = V_5;
		bool L_19 = ___editor1;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_20;
		L_20 = MidiINPlugin_ConnectDevice_m02275034E4E593C153BA3FE303FB01365BEE6B9F(L_18, L_19, NULL);
		V_1 = L_20;
		goto IL_00b6;
	}

IL_009c:
	{
		// for (int i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00a3:
	{
		// for (int i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		int32_t L_22 = V_5;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = MidiINPlugin_GetDeviceCount_mE7B0027DFCBC5294B8B0AFA0143B579EECC377ED(NULL);
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_007c;
		}
	}
	{
		// return null;
		V_1 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
		goto IL_00b6;
	}

IL_00b6:
	{
		// }
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_25 = V_1;
		return L_25;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::DisconnectDevice(ForieroEngine.MIDIUnified.Plugins.MidiDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_DisconnectDevice_m31644E0669AACEA94BC146851D9ADABDF6C800BC (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* ___connectedDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B10_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B9_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B19_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B18_0 = NULL;
	{
		// if (iMidiDevice == null || connectedDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_1 = ___connectedDevice0;
		G_B3_0 = ((((RuntimeObject*)(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (iMidiDevice == null || connectedDevice == null) return;
		goto IL_0105;
	}

IL_0018:
	{
		// if (connectedDevice.isEditor)
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_3 = ___connectedDevice0;
		NullCheck(L_3);
		bool L_4 = L_3->___isEditor_2;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0085;
		}
	}
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_6 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_inline(L_6, List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0075;
	}

IL_0032:
	{
		// if (connectedDevice.deviceId == connectedEditorDevices[i].deviceId)
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_8 = ___connectedDevice0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___deviceId_0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_10 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_12;
		L_12 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_10, L_11, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_13 = L_12->___deviceId_0;
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		// connectedEditorDevices.RemoveAt(i);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_15 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8(L_15, L_16, List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8_RuntimeMethod_var);
		// OnEditorDeviceDisconnected?.Invoke(connectedDevice);
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_17 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___OnEditorDeviceDisconnected_10;
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_18 = L_17;
		G_B9_0 = L_18;
		if (L_18)
		{
			G_B10_0 = L_18;
			goto IL_0067;
		}
	}
	{
		goto IL_006e;
	}

IL_0067:
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_19 = ___connectedDevice0;
		NullCheck(G_B10_0);
		Action_1_Invoke_m2C2BF1198D9E682AD8362C5AB32A539BB337D911_inline(G_B10_0, L_19, NULL);
	}

IL_006e:
	{
		// break;
		goto IL_0082;
	}

IL_0070:
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_0075:
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		int32_t L_21 = V_2;
		V_4 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_0032;
		}
	}

IL_0082:
	{
		goto IL_00ee;
	}

IL_0085:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_23 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_inline(L_23, List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_00df;
	}

IL_0096:
	{
		// if (connectedDevice.deviceId == connectedDevices[i].deviceId)
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_25 = ___connectedDevice0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___deviceId_0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_27 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_29;
		L_29 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_27, L_28, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30 = L_29->___deviceId_0;
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00d8;
		}
	}
	{
		// connectedDevices.RemoveAt(i);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_32 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8(L_32, L_33, List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8_RuntimeMethod_var);
		// OnDeviceDisconnected?.Invoke(connectedDevice);
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_34 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___OnDeviceDisconnected_9;
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_35 = L_34;
		G_B18_0 = L_35;
		if (L_35)
		{
			G_B19_0 = L_35;
			goto IL_00cf;
		}
	}
	{
		goto IL_00d6;
	}

IL_00cf:
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_36 = ___connectedDevice0;
		NullCheck(G_B19_0);
		Action_1_Invoke_m2C2BF1198D9E682AD8362C5AB32A539BB337D911_inline(G_B19_0, L_36, NULL);
	}

IL_00d6:
	{
		// break;
		goto IL_00ed;
	}

IL_00d8:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_00df:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		int32_t L_38 = V_5;
		V_7 = (bool)((((int32_t)((((int32_t)L_38) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_7;
		if (L_39)
		{
			goto IL_0096;
		}
	}

IL_00ed:
	{
	}

IL_00ee:
	{
		// iMidiDevice.DisconnectDevice(connectedDevice.deviceId, connectedDevice.isEditor);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_40 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_41 = ___connectedDevice0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___deviceId_0;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_43 = ___connectedDevice0;
		NullCheck(L_43);
		bool L_44 = L_43->___isEditor_2;
		NullCheck(L_40);
		InterfaceActionInvoker2< int32_t, bool >::Invoke(2 /* System.Void ForieroEngine.MIDIUnified.Plugins.IMidiDevice::DisconnectDevice(System.Int32,System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_40, L_42, L_44);
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::DisconnectDevices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_DisconnectDevices_m7CB272E252F0C2A1246F21E83B185083F4D016A8 (bool ___editor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (iMidiDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (iMidiDevice == null) return;
		goto IL_003a;
	}

IL_000f:
	{
		// if (editor) { connectedEditorDevices = new List<MidiDevice>(); }
		bool L_2 = ___editor0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (editor) { connectedEditorDevices = new List<MidiDevice>(); }
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_4 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_4, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6), (void*)L_4);
		goto IL_002e;
	}

IL_0022:
	{
		// else { connectedDevices = new List<MidiDevice>(); }
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_5 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_5, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3), (void*)L_5);
	}

IL_002e:
	{
		// iMidiDevice.DisconnectDevices(editor);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		bool L_7 = ___editor0;
		NullCheck(L_6);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void ForieroEngine.MIDIUnified.Plugins.IMidiDevice::DisconnectDevices(System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::DisconnectDeviceByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_DisconnectDeviceByName_mEF057D61F30B95798F0A3179502B333ABBF02872 (String_t* ___deviceName0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		// if (iMidiDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (iMidiDevice == null) return;
		goto IL_00d2;
	}

IL_0012:
	{
		// MidiDevice disconnectDevice = null;
		V_0 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
		// if (editor)
		bool L_2 = ___editor1;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_4 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_inline(L_4, List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_005a;
	}

IL_0029:
	{
		// if (deviceName != connectedEditorDevices[i].name) continue;
		String_t* L_6 = ___deviceName0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_7 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_9;
		L_9 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_7, L_8, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10 = L_9->___name_1;
		bool L_11;
		L_11 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, L_10, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		// if (deviceName != connectedEditorDevices[i].name) continue;
		goto IL_0056;
	}

IL_0048:
	{
		// disconnectDevice = connectedEditorDevices[i];
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_13 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_15;
		L_15 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_13, L_14, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		V_0 = L_15;
		// break;
		goto IL_0067;
	}

IL_0056:
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_005a:
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		int32_t L_17 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0029;
		}
	}

IL_0067:
	{
		goto IL_00bf;
	}

IL_006a:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_19 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_inline(L_19, List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		goto IL_00b0;
	}

IL_007b:
	{
		// if (deviceName != connectedDevices[i].name) continue;
		String_t* L_21 = ___deviceName0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_22 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_24;
		L_24 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_22, L_23, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		NullCheck(L_24);
		String_t* L_25 = L_24->___name_1;
		bool L_26;
		L_26 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_21, L_25, NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_009b;
		}
	}
	{
		// if (deviceName != connectedDevices[i].name) continue;
		goto IL_00aa;
	}

IL_009b:
	{
		// disconnectDevice = connectedDevices[i];
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_28 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_30;
		L_30 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_28, L_29, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		V_0 = L_30;
		// break;
		goto IL_00be;
	}

IL_00aa:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_00b0:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		int32_t L_32 = V_6;
		V_8 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_8;
		if (L_33)
		{
			goto IL_007b;
		}
	}

IL_00be:
	{
	}

IL_00bf:
	{
		// if (disconnectDevice != null) { DisconnectDevice(disconnectDevice); }
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_34 = V_0;
		V_9 = (bool)((!(((RuntimeObject*)(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_00d2;
		}
	}
	{
		// if (disconnectDevice != null) { DisconnectDevice(disconnectDevice); }
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_36 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		MidiINPlugin_DisconnectDevice_m31644E0669AACEA94BC146851D9ADABDF6C800BC(L_36, NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::GetDeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiINPlugin_GetDeviceName_m7FDAA240EEC062A06549CC1E46B7232D477A8194 (int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// public static string GetDeviceName(int deviceIndex) => iMidiDevice?.GetDeviceName(deviceIndex) ?? "";
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000c:
	{
		int32_t L_2 = ___deviceIndex0;
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceName(System.Int32) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, G_B2_0, L_2);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		String_t* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::GetDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINPlugin_GetDeviceCount_mE7B0027DFCBC5294B8B0AFA0143B579EECC377ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// public static int GetDeviceCount() =>  iMidiDevice?.GetDeviceCount() ?? 0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceCount() */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		return G_B3_0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::OpenVirtualPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINPlugin_OpenVirtualPort_m4D36D073B53EC46E42CB31E8C606A47E38F8CD06 (String_t* ___name0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// public static int OpenVirtualPort(string name, bool editor = false) => iMidiDevice?.OpenVirtualPort(name, editor) ?? -1;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___name0;
		bool L_3 = ___editor1;
		NullCheck(G_B2_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker2< int32_t, String_t*, bool >::Invoke(6 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::OpenVirtualPort(System.String,System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
		G_B3_0 = L_4;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::OpenVirtualPortAsync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* MidiINPlugin_OpenVirtualPortAsync_mEEBEDD1CEA0B8AC245BC9FD41A8C7E7180947E5C (String_t* ___name0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_m87723FE4F053386B84316BA22811D2420335B1AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* V_0 = NULL;
	{
		U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* L_0 = (U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9*)il2cpp_codegen_object_new(U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenVirtualPortAsyncU3Ed__25__ctor_m393B9C25E274B1D96C9647A022AE4E1D4057C296(L_0, NULL);
		V_0 = L_0;
		U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE(AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* L_3 = V_0;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		L_3->___name_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___name_2), (void*)L_4);
		U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* L_5 = V_0;
		bool L_6 = ___editor1;
		NullCheck(L_5);
		L_5->___editor_3 = L_6;
		U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* L_7 = V_0;
		NullCheck(L_7);
		L_7->___U3CU3E1__state_0 = (-1);
		U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* L_8 = V_0;
		NullCheck(L_8);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_9 = (&L_8->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_m87723FE4F053386B84316BA22811D2420335B1AF(L_9, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_m87723FE4F053386B84316BA22811D2420335B1AF_RuntimeMethod_var);
		U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* L_10 = V_0;
		NullCheck(L_10);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_11 = (&L_10->___U3CU3Et__builder_1);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_12;
		L_12 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(L_11, AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var);
		return L_12;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::CloseVirtualPort(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_CloseVirtualPort_m7D4FB5B4FE5CDBA2EF9459A786B157D9C6BF2C2B (int32_t ___deviceId0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public static void CloseVirtualPort(int deviceId, bool editor = false) => iMidiDevice?.CloseVirtualPort(deviceId, editor);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0013;
	}

IL_000b:
	{
		int32_t L_2 = ___deviceId0;
		bool L_3 = ___editor1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, bool >::Invoke(7 /* System.Void ForieroEngine.MIDIUnified.Plugins.IMidiDevice::CloseVirtualPort(System.Int32,System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
	}

IL_0013:
	{
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::CloseVirtualPorts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_CloseVirtualPorts_mC435AA5B1FF9E5D96528D94DD33DD27F860B1455 (bool ___editor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public static void CloseVirtualPorts(bool editor = false) => iMidiDevice?.CloseVirtualPorts(editor);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0012;
	}

IL_000b:
	{
		bool L_2 = ___editor0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void ForieroEngine.MIDIUnified.Plugins.IMidiDevice::CloseVirtualPorts(System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::GetVirtualPortCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINPlugin_GetVirtualPortCount_mD45868178C432BBBD551649D4B51A69387D8F6AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// public static int GetVirtualPortCount() => iMidiDevice?.GetVirtualPortCount() ?? 0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetVirtualPortCount() */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		return G_B3_0;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::GetVirtualPortName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiINPlugin_GetVirtualPortName_m83CA8F4E57802100429A8FDDC5D52B41626BA2F0 (int32_t ___portIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// public static string GetVirtualPortName(int portIndex) => iMidiDevice?.GetVirtualPortName(portIndex) ?? "";
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000c:
	{
		int32_t L_2 = ___portIndex0;
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(10 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetVirtualPortName(System.Int32) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, G_B2_0, L_2);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		String_t* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::PopMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINPlugin_PopMessage_m338F46F88438896C5B33F99D8F97A1DD4C9D9F4A (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* ___midiMessage0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiINDevice_tEA2A001463E39070F9080E4E57AEEBDAEE90AB4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (iMidiInDevice == null) { midiMessage = new MidiMessage(); return 0; }
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiInDevice_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (iMidiInDevice == null) { midiMessage = new MidiMessage(); return 0; }
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_2 = ___midiMessage0;
		il2cpp_codegen_initobj(L_2, sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
		// if (iMidiInDevice == null) { midiMessage = new MidiMessage(); return 0; }
		V_1 = 0;
		goto IL_0068;
	}

IL_0019:
	{
		// if (threaded)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		bool L_3 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___threaded_11;
		il2cpp_codegen_memory_barrier();
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// midiMessage = new MidiMessage();
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_5 = ___midiMessage0;
		il2cpp_codegen_initobj(L_5, sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
		// if (editor) return MessagesEditor.Dequeue(ref midiMessage) ? 1 : 0;
		bool L_6 = ___editor1;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// if (editor) return MessagesEditor.Dequeue(ref midiMessage) ? 1 : 0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_8 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___MessagesEditor_16;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_9 = ___midiMessage0;
		NullCheck(L_8);
		bool L_10;
		L_10 = NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B(L_8, L_9, NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0041;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		V_1 = G_B7_0;
		goto IL_0068;
	}

IL_0045:
	{
		// else return Messages.Dequeue(ref midiMessage) ? 1 : 0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_11 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___Messages_15;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_12 = ___midiMessage0;
		NullCheck(L_11);
		bool L_13;
		L_13 = NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B(L_11, L_12, NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_0055;
		}
	}
	{
		G_B11_0 = 0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B11_0 = 1;
	}

IL_0056:
	{
		V_1 = G_B11_0;
		goto IL_0068;
	}

IL_0059:
	{
		// } else return iMidiInDevice.PopMessage(out midiMessage, editor);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiInDevice_0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_15 = ___midiMessage0;
		bool L_16 = ___editor1;
		NullCheck(L_14);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker2< int32_t, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*, bool >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiINDevice::PopMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage&,System.Boolean) */, IMidiINDevice_tEA2A001463E39070F9080E4E57AEEBDAEE90AB4A_il2cpp_TypeInfo_var, L_14, L_15, L_16);
		V_1 = L_17;
		goto IL_0068;
	}

IL_0068:
	{
		// }
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::GetConnectedDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiINPlugin_GetConnectedDeviceCount_m5F4A31337381CE04AC41F5EFF902964BC4F832D4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// public static int GetConnectedDeviceCount() => iMidiEditorDevice?.GetConnectedDeviceCount() ?? 0;
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceCount() */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		return G_B3_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin_Terminate_m4ACA801986AC02E09B6A585A687588C40068E606 (const RuntimeMethod* method) 
{
	{
		// MidiThread.TerminateInternal();
		MidiThread_TerminateInternal_m20235D2F402D31BE4766E1530E3E6972599F8257(NULL);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiINPlugin__cctor_m3207B2CA75499AFB14C1EC64C45B5AECBDB4E0D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static volatile bool initialized = false;
		il2cpp_codegen_memory_barrier();
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___initialized_2 = (bool)0;
		// public static List<MidiDevice> connectedDevices = new List<MidiDevice>();
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_0 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_0, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3), (void*)L_0);
		// public static List<string> deviceNames = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___deviceNames_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___deviceNames_4), (void*)L_1);
		// public static List<MidiDevice> connectedEditorDevices = new List<MidiDevice>();
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_2 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_2, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedEditorDevices_6), (void*)L_2);
		// public static volatile bool threaded = true;
		il2cpp_codegen_memory_barrier();
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___threaded_11 = (bool)1;
		// public static volatile int sleep = 1;
		il2cpp_codegen_memory_barrier();
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___sleep_12 = 1;
		// public static volatile bool through = false;
		il2cpp_codegen_memory_barrier();
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___through_13 = (bool)0;
		// public static volatile bool synth = false;
		il2cpp_codegen_memory_barrier();
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___synth_14 = (bool)0;
		// private static readonly NonBlockingQueue<MidiMessage> Messages = new NonBlockingQueue<MidiMessage>();
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_3 = (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149*)il2cpp_codegen_object_new(NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6(L_3, NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6_RuntimeMethod_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___Messages_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___Messages_15), (void*)L_3);
		// private static readonly NonBlockingQueue<MidiMessage> MessagesEditor = new NonBlockingQueue<MidiMessage>();
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_4 = (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149*)il2cpp_codegen_object_new(NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6(L_4, NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6_RuntimeMethod_var);
		((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___MessagesEditor_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___MessagesEditor_16), (void*)L_4);
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
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSP_Init_m17192698516229C80BD779F2BC710E5965D9737C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_t49EB86D9FF644DFF33E94E234552A1755960F283_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (_initialized) return;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		bool L_0 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->____initialized_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (_initialized) return;
		goto IL_0040;
	}

IL_000c:
	{
		// for (var i = 0; i < 128; i++)
		V_1 = 0;
		goto IL_002e;
	}

IL_0010:
	{
		// Tone[i] = new();
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_2 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___Tone_1;
		int32_t L_3 = V_1;
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_4 = (Data_t49EB86D9FF644DFF33E94E234552A1755960F283*)il2cpp_codegen_object_new(Data_t49EB86D9FF644DFF33E94E234552A1755960F283_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Data__ctor_m808E4EAF1B1381440263C8CB37350DC02B125F18(L_4, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Data_t49EB86D9FF644DFF33E94E234552A1755960F283*)L_4);
		// ControlChange[i] = new Data();
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_5 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		int32_t L_6 = V_1;
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_7 = (Data_t49EB86D9FF644DFF33E94E234552A1755960F283*)il2cpp_codegen_object_new(Data_t49EB86D9FF644DFF33E94E234552A1755960F283_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Data__ctor_m808E4EAF1B1381440263C8CB37350DC02B125F18(L_7, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Data_t49EB86D9FF644DFF33E94E234552A1755960F283*)L_7);
		// for (var i = 0; i < 128; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002e:
	{
		// for (var i = 0; i < 128; i++)
		int32_t L_9 = V_1;
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0010;
		}
	}
	{
		// _initialized = true;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->____initialized_0 = (bool)1;
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSP__cctor_mCB5993BCC05603DAD365122F0771B5194E7311E6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _initialized = false;
		((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->____initialized_0 = (bool)0;
		// public static readonly Data[] Tone = new Data[128];
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_0 = (DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7*)(DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7*)SZArrayNew(DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___Tone_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___Tone_1), (void*)L_0);
		// public static readonly Data[] ControlChange = new Data[128];
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_1 = (DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7*)(DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7*)SZArrayNew(DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2), (void*)L_1);
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
// System.Single ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data::get_HoldOnTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Data_get_HoldOnTime_m31C3F1F79B40C57778DD464F235B4344256C0A3B (Data_t49EB86D9FF644DFF33E94E234552A1755960F283* __this, const RuntimeMethod* method) 
{
	{
		// public float HoldOnTime => ReleasedTime - PressedTime;
		float L_0 = __this->___ReleasedTime_2;
		il2cpp_codegen_memory_barrier();
		float L_1 = __this->___PressedTime_1;
		il2cpp_codegen_memory_barrier();
		return ((float)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/DSP/Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_m808E4EAF1B1381440263C8CB37350DC02B125F18 (Data_t49EB86D9FF644DFF33E94E234552A1755960F283* __this, const RuntimeMethod* method) 
{
	{
		// public volatile bool On = false;
		il2cpp_codegen_memory_barrier();
		__this->___On_0 = (bool)0;
		// public volatile float PressedTime = 0f;
		il2cpp_codegen_memory_barrier();
		__this->___PressedTime_1 = (0.0f);
		// public volatile float ReleasedTime = 0f;
		il2cpp_codegen_memory_barrier();
		__this->___ReleasedTime_2 = (0.0f);
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
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/MidiThread::Initialise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_Initialise_m6E23812AF6C3A08164DC2028639AFA813AD801A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiThread_MidiInThread_m5E1D98A8BDB388214A9D7E4994359DAE374B5E48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91840E7E1D2983503B7CC45A40C62FE39E6D3C13);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_thread != null) return;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = ((MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var))->____thread_1;
		V_0 = (bool)((!(((RuntimeObject*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (_thread != null) return;
		goto IL_0049;
	}

IL_000f:
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI IN Thread : Start");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_2;
		L_2 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->___debug_5;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI IN Thread : Start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral91840E7E1D2983503B7CC45A40C62FE39E6D3C13, NULL);
	}

IL_0028:
	{
		// _thread = new Thread(MidiInThread);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_5 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_5, NULL, (intptr_t)((void*)MidiThread_MidiInThread_m5E1D98A8BDB388214A9D7E4994359DAE374B5E48_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_6, L_5, NULL);
		((MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var))->____thread_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var))->____thread_1), (void*)L_6);
		// _thread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = ((MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var))->____thread_1;
		NullCheck(L_7);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_7, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/MidiThread::MidiInThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_MidiInThread_m5E1D98A8BDB388214A9D7E4994359DAE374B5E48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiINDevice_tEA2A001463E39070F9080E4E57AEEBDAEE90AB4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synth_t3369EA5E60CACC2A4689A9F2F8EED7E74FEB80B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	{
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4(NULL);
	}

IL_0007:
	{
		// if (threaded)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		bool L_1 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___threaded_11;
		il2cpp_codegen_memory_barrier();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0375;
		}
	}
	{
	}

IL_0017:
	{
		// while (iMidiInDevice.PopMessage(out var m) == 1)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiInDevice_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker2< int32_t, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*, bool >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiINDevice::PopMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage&,System.Boolean) */, IMidiINDevice_tEA2A001463E39070F9080E4E57AEEBDAEE90AB4A_il2cpp_TypeInfo_var, L_3, (&V_1), (bool)0);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_02e1;
		}
	}
	{
		// Messages.Enqueue(m);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_6 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___Messages_15;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_7 = V_1;
		NullCheck(L_6);
		NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58(L_6, L_7, NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_RuntimeMethod_var);
		// if (m.Command.IsToneON())
		uint8_t L_8;
		L_8 = MidiMessage_get_Command_m1A9DD99A9BA29F52A59D075A4E4FC9DD36272087((&V_1), NULL);
		bool L_9;
		L_9 = MidiExtensions_IsToneON_m65DD634DE5C44FB8D527589B65EF70F8EE1D6DCA(L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		// DSP.Tone[m.Data1].PressedTime = (float)AudioSettings.dspTime; DSP.Tone[m.Data1].On = true;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_11 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___Tone_1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_12 = V_1;
		uint8_t L_13 = L_12.___Data1_1;
		NullCheck(L_11);
		uint8_t L_14 = L_13;
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		double L_16;
		L_16 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_15);
		il2cpp_codegen_memory_barrier();
		L_15->___PressedTime_1 = ((float)L_16);
		// DSP.Tone[m.Data1].PressedTime = (float)AudioSettings.dspTime; DSP.Tone[m.Data1].On = true;
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_17 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___Tone_1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_18 = V_1;
		uint8_t L_19 = L_18.___Data1_1;
		NullCheck(L_17);
		uint8_t L_20 = L_19;
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		il2cpp_codegen_memory_barrier();
		L_21->___On_0 = (bool)1;
	}

IL_007a:
	{
		// if (m.Command.IsToneOFF())
		uint8_t L_22;
		L_22 = MidiMessage_get_Command_m1A9DD99A9BA29F52A59D075A4E4FC9DD36272087((&V_1), NULL);
		bool L_23;
		L_23 = MidiExtensions_IsToneOFF_m70317BB2563F19CB3FCF2B66D9EF086A5E26071F(L_22, NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00bb;
		}
	}
	{
		// DSP.Tone[m.Data1].ReleasedTime = (float)AudioSettings.dspTime; DSP.Tone[m.Data1].On = false;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_25 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___Tone_1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_26 = V_1;
		uint8_t L_27 = L_26.___Data1_1;
		NullCheck(L_25);
		uint8_t L_28 = L_27;
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		double L_30;
		L_30 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_29);
		il2cpp_codegen_memory_barrier();
		L_29->___ReleasedTime_2 = ((float)L_30);
		// DSP.Tone[m.Data1].ReleasedTime = (float)AudioSettings.dspTime; DSP.Tone[m.Data1].On = false;
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_31 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___Tone_1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_32 = V_1;
		uint8_t L_33 = L_32.___Data1_1;
		NullCheck(L_31);
		uint8_t L_34 = L_33;
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		il2cpp_codegen_memory_barrier();
		L_35->___On_0 = (bool)0;
	}

IL_00bb:
	{
		// if (m.Command.IsControlChange())
		uint8_t L_36;
		L_36 = MidiMessage_get_Command_m1A9DD99A9BA29F52A59D075A4E4FC9DD36272087((&V_1), NULL);
		bool L_37;
		L_37 = MidiExtensions_IsControlChange_m25BE11EE752B780893B94C0ECD9E478394C1A067(L_36, NULL);
		V_5 = L_37;
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_0274;
		}
	}
	{
		// switch (m.Data1.ToControllerEnum())
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_39 = V_1;
		uint8_t L_40 = L_39.___Data1_1;
		int32_t L_41;
		L_41 = MidiExtensions_ToControllerEnum_m1105C219D1EB2D7DC4BAD6BBA1DBAFE0A5E61C14(L_40, NULL);
		V_7 = L_41;
		int32_t L_42 = V_7;
		V_6 = L_42;
		int32_t L_43 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_43, ((int32_t)64))))
		{
			case 0:
			{
				goto IL_015f;
			}
			case 1:
			{
				goto IL_0218;
			}
			case 2:
			{
				goto IL_0101;
			}
			case 3:
			{
				goto IL_01bd;
			}
		}
	}
	{
		goto IL_0273;
	}

IL_0101:
	{
		// DSP.ControlChange[(int)PedalEnum.Sostenuto].On = m.Data2 > 0;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_44 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)66);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_47 = V_1;
		uint8_t L_48 = L_47.___Data2_2;
		NullCheck(L_46);
		il2cpp_codegen_memory_barrier();
		L_46->___On_0 = (bool)((((int32_t)L_48) > ((int32_t)0))? 1 : 0);
		// if (DSP.ControlChange[(int)PedalEnum.Sostenuto].On) DSP.ControlChange[(int)PedalEnum.Sostenuto].PressedTime = (float)AudioSettings.dspTime;
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_49 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_49);
		int32_t L_50 = ((int32_t)66);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		bool L_52 = L_51->___On_0;
		il2cpp_codegen_memory_barrier();
		V_8 = L_52;
		bool L_53 = V_8;
		if (!L_53)
		{
			goto IL_0145;
		}
	}
	{
		// if (DSP.ControlChange[(int)PedalEnum.Sostenuto].On) DSP.ControlChange[(int)PedalEnum.Sostenuto].PressedTime = (float)AudioSettings.dspTime;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_54 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_54);
		int32_t L_55 = ((int32_t)66);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		double L_57;
		L_57 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_56);
		il2cpp_codegen_memory_barrier();
		L_56->___PressedTime_1 = ((float)L_57);
		goto IL_015a;
	}

IL_0145:
	{
		// else  DSP.ControlChange[(int)PedalEnum.Sostenuto].ReleasedTime = (float)AudioSettings.dspTime;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_58 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_58);
		int32_t L_59 = ((int32_t)66);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		double L_61;
		L_61 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_60);
		il2cpp_codegen_memory_barrier();
		L_60->___ReleasedTime_2 = ((float)L_61);
	}

IL_015a:
	{
		// break;
		goto IL_0273;
	}

IL_015f:
	{
		// DSP.ControlChange[(int)PedalEnum.DamperPedal].On = m.Data2 > 0;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_62 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_62);
		int32_t L_63 = ((int32_t)64);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_65 = V_1;
		uint8_t L_66 = L_65.___Data2_2;
		NullCheck(L_64);
		il2cpp_codegen_memory_barrier();
		L_64->___On_0 = (bool)((((int32_t)L_66) > ((int32_t)0))? 1 : 0);
		// if (DSP.ControlChange[(int)PedalEnum.DamperPedal].On) DSP.ControlChange[(int)PedalEnum.DamperPedal].PressedTime = (float)AudioSettings.dspTime;
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_67 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_67);
		int32_t L_68 = ((int32_t)64);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		bool L_70 = L_69->___On_0;
		il2cpp_codegen_memory_barrier();
		V_9 = L_70;
		bool L_71 = V_9;
		if (!L_71)
		{
			goto IL_01a3;
		}
	}
	{
		// if (DSP.ControlChange[(int)PedalEnum.DamperPedal].On) DSP.ControlChange[(int)PedalEnum.DamperPedal].PressedTime = (float)AudioSettings.dspTime;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_72 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_72);
		int32_t L_73 = ((int32_t)64);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		double L_75;
		L_75 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_74);
		il2cpp_codegen_memory_barrier();
		L_74->___PressedTime_1 = ((float)L_75);
		goto IL_01b8;
	}

IL_01a3:
	{
		// else  DSP.ControlChange[(int)PedalEnum.DamperPedal].ReleasedTime = (float)AudioSettings.dspTime;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_76 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_76);
		int32_t L_77 = ((int32_t)64);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		double L_79;
		L_79 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_78);
		il2cpp_codegen_memory_barrier();
		L_78->___ReleasedTime_2 = ((float)L_79);
	}

IL_01b8:
	{
		// break;
		goto IL_0273;
	}

IL_01bd:
	{
		// DSP.ControlChange[(int)PedalEnum.SoftPedal].On = m.Data2 > 0;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_80 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_80);
		int32_t L_81 = ((int32_t)67);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_83 = V_1;
		uint8_t L_84 = L_83.___Data2_2;
		NullCheck(L_82);
		il2cpp_codegen_memory_barrier();
		L_82->___On_0 = (bool)((((int32_t)L_84) > ((int32_t)0))? 1 : 0);
		// if (DSP.ControlChange[(int)PedalEnum.SoftPedal].On) DSP.ControlChange[(int)PedalEnum.SoftPedal].PressedTime = (float)AudioSettings.dspTime;
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_85 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_85);
		int32_t L_86 = ((int32_t)67);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		bool L_88 = L_87->___On_0;
		il2cpp_codegen_memory_barrier();
		V_10 = L_88;
		bool L_89 = V_10;
		if (!L_89)
		{
			goto IL_0201;
		}
	}
	{
		// if (DSP.ControlChange[(int)PedalEnum.SoftPedal].On) DSP.ControlChange[(int)PedalEnum.SoftPedal].PressedTime = (float)AudioSettings.dspTime;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_90 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_90);
		int32_t L_91 = ((int32_t)67);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		double L_93;
		L_93 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_92);
		il2cpp_codegen_memory_barrier();
		L_92->___PressedTime_1 = ((float)L_93);
		goto IL_0216;
	}

IL_0201:
	{
		// else  DSP.ControlChange[(int)PedalEnum.SoftPedal].ReleasedTime = (float)AudioSettings.dspTime;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_94 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_94);
		int32_t L_95 = ((int32_t)67);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		double L_97;
		L_97 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_96);
		il2cpp_codegen_memory_barrier();
		L_96->___ReleasedTime_2 = ((float)L_97);
	}

IL_0216:
	{
		// break;
		goto IL_0273;
	}

IL_0218:
	{
		// DSP.ControlChange[(int)PedalEnum.Portamento].On = m.Data2 > 0;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_98 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_98);
		int32_t L_99 = ((int32_t)65);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_101 = V_1;
		uint8_t L_102 = L_101.___Data2_2;
		NullCheck(L_100);
		il2cpp_codegen_memory_barrier();
		L_100->___On_0 = (bool)((((int32_t)L_102) > ((int32_t)0))? 1 : 0);
		// if (DSP.ControlChange[(int)PedalEnum.Portamento].On) DSP.ControlChange[(int)PedalEnum.Portamento].PressedTime = (float)AudioSettings.dspTime;
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_103 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_103);
		int32_t L_104 = ((int32_t)65);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		bool L_106 = L_105->___On_0;
		il2cpp_codegen_memory_barrier();
		V_11 = L_106;
		bool L_107 = V_11;
		if (!L_107)
		{
			goto IL_025c;
		}
	}
	{
		// if (DSP.ControlChange[(int)PedalEnum.Portamento].On) DSP.ControlChange[(int)PedalEnum.Portamento].PressedTime = (float)AudioSettings.dspTime;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_108 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_108);
		int32_t L_109 = ((int32_t)65);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		double L_111;
		L_111 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_110);
		il2cpp_codegen_memory_barrier();
		L_110->___PressedTime_1 = ((float)L_111);
		goto IL_0271;
	}

IL_025c:
	{
		// else  DSP.ControlChange[(int)PedalEnum.Portamento].ReleasedTime = (float)AudioSettings.dspTime;
		il2cpp_codegen_runtime_class_init_inline(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var);
		DataU5BU5D_t4CCD5F1958AC7D807A14B12A70B8DB1F2DEE3BE7* L_112 = ((DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_StaticFields*)il2cpp_codegen_static_fields_for(DSP_t240E9381E7A0A9B6DC87B28C98E859241635646D_il2cpp_TypeInfo_var))->___ControlChange_2;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)65);
		Data_t49EB86D9FF644DFF33E94E234552A1755960F283* L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		double L_115;
		L_115 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		NullCheck(L_114);
		il2cpp_codegen_memory_barrier();
		L_114->___ReleasedTime_2 = ((float)L_115);
	}

IL_0271:
	{
		// break;
		goto IL_0273;
	}

IL_0273:
	{
	}

IL_0274:
	{
		// if (through)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		bool L_116 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___through_13;
		il2cpp_codegen_memory_barrier();
		V_12 = L_116;
		bool L_117 = V_12;
		if (!L_117)
		{
			goto IL_02b5;
		}
	}
	{
		// MidiOUTPlugin.SendMidiMessage(new MidiMessage(m) { Editor = false, Through = true });
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_118 = V_1;
		MidiMessage__ctor_m284DA3500B17BE6E96E7C522CE5C1272434F9106((&V_13), L_118, NULL);
		(&V_13)->___Editor_6 = (bool)0;
		(&V_13)->___Through_7 = (bool)1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_119 = V_13;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		int32_t L_120;
		L_120 = MidiOUTPlugin_SendMidiMessage_m55E42BFE3F880FA6987AF45FFBBFF31D2F8238A9(L_119, (-1), (bool)0, NULL);
		// m.Editor = true;
		(&V_1)->___Editor_6 = (bool)1;
		// m.Through = true;
		(&V_1)->___Through_7 = (bool)1;
	}

IL_02b5:
	{
		// if (synth)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		bool L_121 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___synth_14;
		il2cpp_codegen_memory_barrier();
		V_14 = L_121;
		bool L_122 = V_14;
		if (!L_122)
		{
			goto IL_02db;
		}
	}
	{
		// Synthesizer.Synth.SendMidiMessage(m);
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_123 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Synth_t3369EA5E60CACC2A4689A9F2F8EED7E74FEB80B1_il2cpp_TypeInfo_var);
		Synth_SendMidiMessage_m509AEC99E77FCA5DCF292B91DF36C8026C7BAB04(L_123, NULL);
		// m.Editor = false;
		(&V_1)->___Editor_6 = (bool)0;
		// m.Synth = true;
		(&V_1)->___Synth_8 = (bool)1;
	}

IL_02db:
	{
		goto IL_0017;
	}

IL_02e1:
	{
		// while (iMidiInDevice.PopMessage(out var m, true) == 1)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_124 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiInDevice_0;
		NullCheck(L_124);
		int32_t L_125;
		L_125 = InterfaceFuncInvoker2< int32_t, MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7*, bool >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiINDevice::PopMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage&,System.Boolean) */, IMidiINDevice_tEA2A001463E39070F9080E4E57AEEBDAEE90AB4A_il2cpp_TypeInfo_var, L_124, (&V_15), (bool)1);
		V_16 = (bool)((((int32_t)L_125) == ((int32_t)1))? 1 : 0);
		bool L_126 = V_16;
		if (!L_126)
		{
			goto IL_0374;
		}
	}
	{
		// MessagesEditor.Enqueue(m);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_127 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___MessagesEditor_16;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_128 = V_15;
		NullCheck(L_127);
		NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58(L_127, L_128, NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_RuntimeMethod_var);
		// if (through)
		bool L_129 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___through_13;
		il2cpp_codegen_memory_barrier();
		V_17 = L_129;
		bool L_130 = V_17;
		if (!L_130)
		{
			goto IL_0347;
		}
	}
	{
		// MidiOUTPlugin.SendMidiMessage(new MidiMessage(m) { Editor = true, Through = true });
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_131 = V_15;
		MidiMessage__ctor_m284DA3500B17BE6E96E7C522CE5C1272434F9106((&V_13), L_131, NULL);
		(&V_13)->___Editor_6 = (bool)1;
		(&V_13)->___Through_7 = (bool)1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_132 = V_13;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		int32_t L_133;
		L_133 = MidiOUTPlugin_SendMidiMessage_m55E42BFE3F880FA6987AF45FFBBFF31D2F8238A9(L_132, (-1), (bool)0, NULL);
		// m.Editor = true;
		(&V_15)->___Editor_6 = (bool)1;
		// m.Through = true;
		(&V_15)->___Through_7 = (bool)1;
	}

IL_0347:
	{
		// if (synth)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		bool L_134 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___synth_14;
		il2cpp_codegen_memory_barrier();
		V_18 = L_134;
		bool L_135 = V_18;
		if (!L_135)
		{
			goto IL_036e;
		}
	}
	{
		// Synthesizer.Synth.SendMidiMessage(m);
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_136 = V_15;
		il2cpp_codegen_runtime_class_init_inline(Synth_t3369EA5E60CACC2A4689A9F2F8EED7E74FEB80B1_il2cpp_TypeInfo_var);
		Synth_SendMidiMessage_m509AEC99E77FCA5DCF292B91DF36C8026C7BAB04(L_136, NULL);
		// m.Editor = true;
		(&V_15)->___Editor_6 = (bool)1;
		// m.Synth = true;
		(&V_15)->___Synth_8 = (bool)1;
	}

IL_036e:
	{
		goto IL_02e1;
	}

IL_0374:
	{
	}

IL_0375:
	{
		// Thread.Sleep(sleep);
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		int32_t L_137 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___sleep_12;
		il2cpp_codegen_memory_barrier();
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(L_137, NULL);
		// } while (!_terminating);
		bool L_138 = ((MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var))->____terminating_0;
		il2cpp_codegen_memory_barrier();
		V_19 = (bool)((((int32_t)L_138) == ((int32_t)0))? 1 : 0);
		bool L_139 = V_19;
		if (L_139)
		{
			goto IL_0007;
		}
	}
	{
		// AndroidJNI.DetachCurrentThread();
		int32_t L_140;
		L_140 = AndroidJNI_DetachCurrentThread_mC0F3D8974C0681528B801EF0AC2A54E5C7A2E933(NULL);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/MidiThread::TerminateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiThread_TerminateInternal_m20235D2F402D31BE4766E1530E3E6972599F8257 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral132F7E7E8321FA0F727AF7721168AA509660E6D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18AE65A0A70B10AEBBE4BA2B5110A2070B6BB412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral404648D5009520207A387D415FE14F5B6620F9D9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B8_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B7_0 = NULL;
	{
		// if (_terminating) return;
		bool L_0 = ((MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var))->____terminating_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (_terminating) return;
		goto IL_0072;
	}

IL_000e:
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI IN Thread : Aborting");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_2;
		L_2 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->___debug_5;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI IN Thread : Aborting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral18AE65A0A70B10AEBBE4BA2B5110A2070B6BB412, NULL);
	}

IL_0027:
	{
		// _terminating = true;
		il2cpp_codegen_memory_barrier();
		((MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var))->____terminating_0 = (bool)1;
		// if (MIDISettings.instance.debug) Debug.Log("MIDI IN Thread : Joining");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_5;
		L_5 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = L_5->___debug_5;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI IN Thread : Joining");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral132F7E7E8321FA0F727AF7721168AA509660E6D7, NULL);
	}

IL_0048:
	{
		// _thread?.Join();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_8 = ((MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t36D7E70BB6F9EBCD536E8C9ED7169D0DB7DE8AFF_il2cpp_TypeInfo_var))->____thread_1;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9 = L_8;
		G_B7_0 = L_9;
		if (L_9)
		{
			G_B8_0 = L_9;
			goto IL_0053;
		}
	}
	{
		goto IL_0059;
	}

IL_0053:
	{
		NullCheck(G_B8_0);
		Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F(G_B8_0, NULL);
	}

IL_0059:
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDi IN Thread : Aborted");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_10;
		L_10 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = L_10->___debug_5;
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDi IN Thread : Aborted");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral404648D5009520207A387D415FE14F5B6620F9D9, NULL);
	}

IL_0072:
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
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m8CAF468D190BD46EB6728CF1C559F8882EA88EDC (U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<>c__DisplayClass25_0::<OpenVirtualPortAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_m13223E8C6B414E1D5281BCF5B0DC3860D66BE405 (U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static async Task<int> OpenVirtualPortAsync(string name, bool editor = false) => await Task.Run(() => iMidiDevice.OpenVirtualPort(name, editor));
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___iMidiDevice_5;
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
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25__ctor_m393B9C25E274B1D96C9647A022AE4E1D4057C296 (U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25_MoveNext_m0ACF0450457E0E18707967DF89758DE925110613 (U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_mEF555A8D005571E24B687E2654B5C6B417F6234F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_m13223E8C6B414E1D5281BCF5B0DC3860D66BE405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0084_1;
		}

IL_000e_1:
		{
			U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB* L_2 = (U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass25_0__ctor_m8CAF468D190BD46EB6728CF1C559F8882EA88EDC(L_2, NULL);
			__this->___U3CU3E8__1_4 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_2);
			U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB* L_3 = __this->___U3CU3E8__1_4;
			String_t* L_4 = __this->___name_2;
			NullCheck(L_3);
			L_3->___name_0 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___name_0), (void*)L_4);
			U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB* L_5 = __this->___U3CU3E8__1_4;
			bool L_6 = __this->___editor_3;
			NullCheck(L_5);
			L_5->___editor_1 = L_6;
			// public static async Task<int> OpenVirtualPortAsync(string name, bool editor = false) => await Task.Run(() => iMidiDevice.OpenVirtualPort(name, editor));
			U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB* L_7 = __this->___U3CU3E8__1_4;
			Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_8 = (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*)il2cpp_codegen_object_new(Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_m13223E8C6B414E1D5281BCF5B0DC3860D66BE405_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_9;
			L_9 = Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134(L_8, Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_RuntimeMethod_var);
			NullCheck(L_9);
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_10;
			L_10 = Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843(L_9, Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643((&V_2), TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_00a0_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_13 = V_2;
			__this->___U3CU3Eu__1_6 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_mEF555A8D005571E24B687E2654B5C6B417F6234F(L_14, (&V_2), (&V_3), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9_mEF555A8D005571E24B687E2654B5C6B417F6234F_RuntimeMethod_var);
			goto IL_00f3;
		}

IL_0084_1:
		{
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_15 = __this->___U3CU3Eu__1_6;
			V_2 = L_15;
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* L_16 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_00a0_1:
		{
			int32_t L_18;
			L_18 = TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80((&V_2), TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var);
			__this->___U3CU3Es__2_5 = L_18;
			int32_t L_19 = __this->___U3CU3Es__2_5;
			V_1 = L_19;
			goto IL_00d7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b6;
		}
		throw e;
	}

CATCH_00b6:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB*)NULL);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f3;
	}// end catch (depth: 1)

IL_00d7:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass25_0_t9DAA60E27487E989686FD93DEF128511483B8EFB*)NULL);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_22 = (&__this->___U3CU3Et__builder_1);
		int32_t L_23 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B(L_22, L_23, AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var);
	}

IL_00f3:
	{
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiINPlugin/<OpenVirtualPortAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25_SetStateMachine_m9D0474468168809FDF4DCE8A94575B7A77524F2D (U3COpenVirtualPortAsyncU3Ed__25_t2C35BD00DD86F511222E604239375DD733FBD0C9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::InitPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_InitPlayer_m8B94F1C402441892587B3B27B2F11FFE2B5695D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30E0B0A31702A072D1299A95B81FB5B741211A79);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* G_B3_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
		// var stopWatch = ForieroDebug.CodePerformance ? System.Diagnostics.Stopwatch.StartNew() : null;
		bool L_0;
		L_0 = ForieroDebug_get_CodePerformance_m272E47EEF1666F814153B7F8C39612CDE8C21F57(NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)(NULL));
		goto IL_0010;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1;
		L_1 = Stopwatch_StartNew_mF813F15E68604C7734FECC301B7042A521041259(NULL);
		G_B3_0 = L_1;
	}

IL_0010:
	{
		V_0 = G_B3_0;
		// if (Application.isPlaying) { Init(); }
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (Application.isPlaying) { Init(); }
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		MidiOUTPlugin_Init_mFE101AC616F139A1582D6DACE780E41999397214(NULL);
	}

IL_0022:
	{
		// if (ForieroDebug.CodePerformance) Debug.Log("METHOD STOPWATCH (MidiPlugin.OUT - BeforeSceneLoad): " + stopWatch?.Elapsed.ToString());
		bool L_4;
		L_4 = ForieroDebug_get_CodePerformance_m272E47EEF1666F814153B7F8C39612CDE8C21F57(NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		// if (ForieroDebug.CodePerformance) Debug.Log("METHOD STOPWATCH (MidiPlugin.OUT - BeforeSceneLoad): " + stopWatch?.Elapsed.ToString());
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_6 = V_0;
		G_B7_0 = _stringLiteral30E0B0A31702A072D1299A95B81FB5B741211A79;
		if (L_6)
		{
			G_B8_0 = _stringLiteral30E0B0A31702A072D1299A95B81FB5B741211A79;
			goto IL_0036;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_0;
		goto IL_004a;
	}

IL_0036:
	{
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_7 = V_0;
		NullCheck(L_7);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_7, NULL);
		V_3 = L_8;
		String_t* L_9;
		L_9 = TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92((&V_3), NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
	}

IL_004a:
	{
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_Init_mFE101AC616F139A1582D6DACE780E41999397214 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B6215BD7E9D7E899E199125709A68D9146D40D6);
		s_Il2CppMethodInitialized = true;
	}
	MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* V_0 = NULL;
	bool V_1 = false;
	{
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4(NULL);
		// var device = new MidiOUTDeviceANDROID();
		MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* L_1 = (MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352*)il2cpp_codegen_object_new(MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MidiOUTDeviceANDROID__ctor_m47746EE8A3297778FAB964325F3AD5ABB3A73BF4(L_1, NULL);
		V_0 = L_1;
		// iMidiDevice = device as IMidiDevice;
		MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5), (void*)L_2);
		// iMidiOUTDevice = device as IMidiOUTDevice;
		MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* L_3 = V_0;
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0), (void*)L_3);
		// iMidiEditorDevice = device as IMidiEditorDevice;
		MidiOUTDeviceANDROID_t0E042894422E83122C8F8125CF538D9A1C8DE352* L_4 = V_0;
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var)));
		// initialized = iMidiDevice.Init();
		RuntimeObject* L_5 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean ForieroEngine.MIDIUnified.Plugins.IMidiDevice::Init() */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_5);
		il2cpp_codegen_memory_barrier();
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___initialized_2 = L_6;
		// if (!initialized)
		bool L_7 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___initialized_2;
		il2cpp_codegen_memory_barrier();
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("MidiOUTDevice not initialized");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral8B6215BD7E9D7E899E199125709A68D9146D40D6, NULL);
		// return;
		goto IL_005f;
	}

IL_0051:
	{
		// { MidiThread.Initialise(); }
		MidiThread_Initialise_m600C30E059BA17D9FC86C3B1DA9F0120E6A322D7(NULL);
		// Refresh();
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		MidiOUTPlugin_Refresh_m374DA9ECEF71D61FF5576CEFBE0432DC321F104B(NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::StoreConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_StoreConnections_mEFF4AC6E2EF582936A2F94D8E4C18F2794C49899 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01F561DB717C4F1F85E741F829AD28D29B28E51A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_2;
	memset((&V_2), 0, sizeof(V_2));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_3 = NULL;
	{
		// var connectionNames = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var device in connectedDevices) { connectionNames.Add(device.name); }
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_1 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_1);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_2;
		L_2 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_1, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_2), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_0015_1:
			{
				// foreach (var device in connectedDevices) { connectionNames.Add(device.name); }
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_3;
				L_3 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_2), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_3 = L_3;
				// foreach (var device in connectedDevices) { connectionNames.Add(device.name); }
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = V_0;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_5 = V_3;
				NullCheck(L_5);
				String_t* L_6 = L_5->___name_1;
				NullCheck(L_4);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_002c_1:
			{
				// foreach (var device in connectedDevices) { connectionNames.Add(device.name); }
				bool L_7;
				L_7 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_2), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// var s = string.Join(";", connectionNames.ToArray());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_8, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_10;
		L_10 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, L_9, NULL);
		V_1 = L_10;
		// PlayerPrefs.SetString("MIDI_OUT_NAMES", s);
		String_t* L_11 = V_1;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral01F561DB717C4F1F85E741F829AD28D29B28E51A, L_11, NULL);
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::RestoreConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_RestoreConnections_mF7B82E6FB08707D39D3ADB7AB61F3CEA8EF9C408 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01F561DB717C4F1F85E741F829AD28D29B28E51A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CCD25C6B8FE128F4D1AD0BFB6C83BEC454529FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	bool V_5 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	{
		// var names = PlayerPrefs.GetString("MIDI_OUT_NAMES", "").Trim();
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteral01F561DB717C4F1F85E741F829AD28D29B28E51A, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_0, NULL);
		V_0 = L_1;
		// var midiInNames = string.IsNullOrEmpty(names) ? Array.Empty<string>() : names.Split(';');
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_4, ((int32_t)59), 0, NULL);
		G_B3_0 = L_5;
		goto IL_002e;
	}

IL_0029:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		G_B3_0 = L_6;
	}

IL_002e:
	{
		V_1 = G_B3_0;
		// foreach (string midiInName in midiInNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		V_2 = L_7;
		V_3 = 0;
		goto IL_0066;
	}

IL_0036:
	{
		// foreach (string midiInName in midiInNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// if (ConnectDeviceByName(midiInName) == null) { Debug.LogError("Could not conned midi in device : " + midiInName); }
		String_t* L_12 = V_4;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_13;
		L_13 = MidiOUTPlugin_ConnectDeviceByName_mF3EBF6D8F53C89C7DB4E3C4256D8EC60CB12AEC9(L_12, (bool)0, NULL);
		V_5 = (bool)((((RuntimeObject*)(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)L_13) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		// if (ConnectDeviceByName(midiInName) == null) { Debug.LogError("Could not conned midi in device : " + midiInName); }
		String_t* L_15 = V_4;
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9CCD25C6B8FE128F4D1AD0BFB6C83BEC454529FD, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
	}

IL_0061:
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0066:
	{
		// foreach (string midiInName in midiInNames)
		int32_t L_18 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_2;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_Refresh_m374DA9ECEF71D61FF5576CEFBE0432DC321F104B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_6 = NULL;
	bool V_7 = false;
	{
		// if (iMidiDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (iMidiDevice == null) return;
		goto IL_00df;
	}

IL_0012:
	{
		// deviceNames = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___deviceNames_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___deviceNames_4), (void*)L_2);
		// for (var i = 0; i < iMidiDevice.GetDeviceCount(); i++) { deviceNames.Add(iMidiDevice.GetDeviceName(i)); }
		V_1 = 0;
		goto IL_003c;
	}

IL_0020:
	{
		// for (var i = 0; i < iMidiDevice.GetDeviceCount(); i++) { deviceNames.Add(iMidiDevice.GetDeviceName(i)); }
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___deviceNames_4;
		RuntimeObject* L_4 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceName(System.Int32) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_4, L_5);
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (var i = 0; i < iMidiDevice.GetDeviceCount(); i++) { deviceNames.Add(iMidiDevice.GetDeviceName(i)); }
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003c:
	{
		// for (var i = 0; i < iMidiDevice.GetDeviceCount(); i++) { deviceNames.Add(iMidiDevice.GetDeviceName(i)); }
		int32_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceCount() */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_9);
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0020;
		}
	}
	{
		// if (iMidiEditorDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// if (iMidiEditorDevice == null) return;
		goto IL_00df;
	}

IL_005e:
	{
		// connectedEditorDevices = new List<MidiDevice>();
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_14 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_14, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6), (void*)L_14);
		// for (var i = 0; i < iMidiEditorDevice.GetConnectedDeviceCount(); i++)
		V_4 = 0;
		goto IL_00cb;
	}

IL_006d:
	{
		// if (iMidiEditorDevice.GetConnectedDeviceIsEditor(i))
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		bool L_17;
		L_17 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(3 /* System.Boolean ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceIsEditor(System.Int32) */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, L_15, L_16);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00c4;
		}
	}
	{
		// var md = new MidiDevice();
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_19 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)il2cpp_codegen_object_new(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		MidiDevice__ctor_m4FDBB89113043277282E0942DCA5173CE5803961(L_19, NULL);
		V_6 = L_19;
		// md.name = iMidiEditorDevice.GetConnectedDeviceName(i);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_20 = V_6;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_21 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceName(System.Int32) */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, L_21, L_22);
		NullCheck(L_20);
		L_20->___name_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___name_1), (void*)L_23);
		// md.deviceId = iMidiEditorDevice.GetConnectedDeviceId(i);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_24 = V_6;
		RuntimeObject* L_25 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceId(System.Int32) */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, L_25, L_26);
		NullCheck(L_24);
		L_24->___deviceId_0 = L_27;
		// md.isEditor = true;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_28 = V_6;
		NullCheck(L_28);
		L_28->___isEditor_2 = (bool)1;
		// connectedEditorDevices.Add(md);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_29 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_30 = V_6;
		NullCheck(L_29);
		List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_inline(L_29, L_30, List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
	}

IL_00c4:
	{
		// for (var i = 0; i < iMidiEditorDevice.GetConnectedDeviceCount(); i++)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00cb:
	{
		// for (var i = 0; i < iMidiEditorDevice.GetConnectedDeviceCount(); i++)
		int32_t L_32 = V_4;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_33 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceCount() */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, L_33);
		V_7 = (bool)((((int32_t)L_32) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_7;
		if (L_35)
		{
			goto IL_006d;
		}
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiOUTPlugin_Initialized_m57C5F6D12258125083C92A9DE800D4E59C50CB6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public static bool Initialized() => iMidiDevice != null && initialized;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		bool L_1 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___initialized_2;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		return (bool)G_B3_0;
	}
}
// ForieroEngine.MIDIUnified.Plugins.MidiDevice ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::ConnectDevice(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* MidiOUTPlugin_ConnectDevice_m759742868F65B35FCB87F75A57F1A8E48D4CE678 (int32_t ___deviceIndex0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36927E29337C770B3A29FAC284C8515C7BE5B388);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral421FA1E9E3784713B246ADD13F9E8C5240220139);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5DF33D23247684B52500B8C8F161D5D91D50E71);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_1 = NULL;
	bool V_2 = false;
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_3 = NULL;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_4;
	memset((&V_4), 0, sizeof(V_4));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_8;
	memset((&V_8), 0, sizeof(V_8));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_9 = NULL;
	bool V_10 = false;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_11;
	memset((&V_11), 0, sizeof(V_11));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B7_0 = 0;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B35_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B34_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B39_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B38_0 = NULL;
	{
		// if (iMidiDevice == null) return null;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (iMidiDevice == null) return null;
		V_3 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
		goto IL_01be;
	}

IL_0014:
	{
		// foreach (MidiDevice md in MidiINPlugin.connectedDevices)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_2 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_2);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_3;
		L_3 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_2, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_4 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_4), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006d_1;
			}

IL_0023_1:
			{
				// foreach (MidiDevice md in MidiINPlugin.connectedDevices)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_4;
				L_4 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_4), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_5 = L_4;
				// if (md.name == iMidiDevice.GetDeviceName(deviceIndex) && MIDISettings.instance.midiInOutExclusive)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_5 = V_5;
				NullCheck(L_5);
				String_t* L_6 = L_5->___name_1;
				il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
				RuntimeObject* L_7 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
				int32_t L_8 = ___deviceIndex0;
				NullCheck(L_7);
				String_t* L_9;
				L_9 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceName(System.Int32) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_7, L_8);
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_9, NULL);
				if (!L_10)
				{
					goto IL_0052_1;
				}
			}
			{
				MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_11;
				L_11 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
				NullCheck(L_11);
				bool L_12 = L_11->___midiInOutExclusive_15;
				G_B7_0 = ((int32_t)(L_12));
				goto IL_0053_1;
			}

IL_0052_1:
			{
				G_B7_0 = 0;
			}

IL_0053_1:
			{
				V_6 = (bool)G_B7_0;
				bool L_13 = V_6;
				if (!L_13)
				{
					goto IL_006c_1;
				}
			}
			{
				// Debug.LogError("Preventing infinite loop. To have same device connected as IN and OUT is not allowed.");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral36927E29337C770B3A29FAC284C8515C7BE5B388, NULL);
				// return null;
				V_3 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
				goto IL_01be;
			}

IL_006c_1:
			{
			}

IL_006d_1:
			{
				// foreach (MidiDevice md in MidiINPlugin.connectedDevices)
				bool L_14;
				L_14 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_4), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// int deviceId = iMidiDevice.ConnectDevice(deviceIndex, editor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		int32_t L_16 = ___deviceIndex0;
		bool L_17 = ___editor1;
		NullCheck(L_15);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(1 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::ConnectDevice(System.Int32,System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		V_0 = L_18;
		// if (editor)
		bool L_19 = ___editor1;
		V_7 = L_19;
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_00f7;
		}
	}
	{
		// foreach (var cd in connectedEditorDevices)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_21 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		NullCheck(L_21);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_22;
		L_22 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_21, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_8 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_8), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_00ab_1:
			{
				// foreach (var cd in connectedEditorDevices)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_23;
				L_23 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_8), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_9 = L_23;
				// if (deviceId == cd.deviceId)
				int32_t L_24 = V_0;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_25 = V_9;
				NullCheck(L_25);
				int32_t L_26 = L_25->___deviceId_0;
				V_10 = (bool)((((int32_t)L_24) == ((int32_t)L_26))? 1 : 0);
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00d9_1;
				}
			}
			{
				// Debug.LogError("Editor device already connected");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC5DF33D23247684B52500B8C8F161D5D91D50E71, NULL);
				// return cd;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_28 = V_9;
				V_3 = L_28;
				goto IL_01be;
			}

IL_00d9_1:
			{
			}

IL_00da_1:
			{
				// foreach (var cd in connectedEditorDevices)
				bool L_29;
				L_29 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_8), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00ab_1;
				}
			}
			{
				goto IL_00f4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		goto IL_0151;
	}

IL_00f7:
	{
		// foreach (var cd in connectedDevices)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_30 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_30);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_31;
		L_31 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_30, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_11 = L_31;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0141:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_11), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0136_1;
			}

IL_0107_1:
			{
				// foreach (var cd in connectedDevices)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_32;
				L_32 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_11), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_12 = L_32;
				// if (deviceId == cd.deviceId)
				int32_t L_33 = V_0;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_34 = V_12;
				NullCheck(L_34);
				int32_t L_35 = L_34->___deviceId_0;
				V_13 = (bool)((((int32_t)L_33) == ((int32_t)L_35))? 1 : 0);
				bool L_36 = V_13;
				if (!L_36)
				{
					goto IL_0135_1;
				}
			}
			{
				// Debug.LogError("Device already connected");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral421FA1E9E3784713B246ADD13F9E8C5240220139, NULL);
				// return cd;
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_37 = V_12;
				V_3 = L_37;
				goto IL_01be;
			}

IL_0135_1:
			{
			}

IL_0136_1:
			{
				// foreach (var cd in connectedDevices)
				bool L_38;
				L_38 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_11), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_0107_1;
				}
			}
			{
				goto IL_0150;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0150:
	{
	}

IL_0151:
	{
		// var connectedDevice = new MidiDevice
		// {
		//     deviceId = deviceId,
		//     name = GetDeviceName(deviceIndex),
		//     isEditor = editor
		// };
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_39 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)il2cpp_codegen_object_new(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		MidiDevice__ctor_m4FDBB89113043277282E0942DCA5173CE5803961(L_39, NULL);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_40 = L_39;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		L_40->___deviceId_0 = L_41;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_42 = L_40;
		int32_t L_43 = ___deviceIndex0;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		String_t* L_44;
		L_44 = MidiOUTPlugin_GetDeviceName_m98DB385075A36E362017F1E32DD71B91D60EE2FA(L_43, NULL);
		NullCheck(L_42);
		L_42->___name_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___name_1), (void*)L_44);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_45 = L_42;
		bool L_46 = ___editor1;
		NullCheck(L_45);
		L_45->___isEditor_2 = L_46;
		V_1 = L_45;
		// if (editor)
		bool L_47 = ___editor1;
		V_14 = L_47;
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_019a;
		}
	}
	{
		// connectedEditorDevices.Add(connectedDevice);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_49 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_50 = V_1;
		NullCheck(L_49);
		List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_inline(L_49, L_50, List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
		// OnEditorDeviceConnected?.Invoke(connectedDevice);
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_51 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___OnEditorDeviceConnected_8;
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_52 = L_51;
		G_B34_0 = L_52;
		if (L_52)
		{
			G_B35_0 = L_52;
			goto IL_0190;
		}
	}
	{
		goto IL_0197;
	}

IL_0190:
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_53 = V_1;
		NullCheck(G_B35_0);
		Action_1_Invoke_m2C2BF1198D9E682AD8362C5AB32A539BB337D911_inline(G_B35_0, L_53, NULL);
	}

IL_0197:
	{
		goto IL_01ba;
	}

IL_019a:
	{
		// connectedDevices.Add(connectedDevice);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_54 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_55 = V_1;
		NullCheck(L_54);
		List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_inline(L_54, L_55, List_1_Add_mE9BD35BF910226FAA69A8E694CD7823B020006ED_RuntimeMethod_var);
		// OnDeviceConnected?.Invoke(connectedDevice);
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_56 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___OnDeviceConnected_7;
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_57 = L_56;
		G_B38_0 = L_57;
		if (L_57)
		{
			G_B39_0 = L_57;
			goto IL_01b2;
		}
	}
	{
		goto IL_01b9;
	}

IL_01b2:
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_58 = V_1;
		NullCheck(G_B39_0);
		Action_1_Invoke_m2C2BF1198D9E682AD8362C5AB32A539BB337D911_inline(G_B39_0, L_58, NULL);
	}

IL_01b9:
	{
	}

IL_01ba:
	{
		// return connectedDevice;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_59 = V_1;
		V_3 = L_59;
		goto IL_01be;
	}

IL_01be:
	{
		// }
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_60 = V_3;
		return L_60;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::DisconnectDevices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_DisconnectDevices_mAAA44EBAE38E3F4F76BE41FD7DC12FB4F8B88F40 (bool ___editor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (iMidiDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (iMidiDevice == null) return;
		goto IL_003a;
	}

IL_000f:
	{
		// if (editor) { connectedEditorDevices = new List<MidiDevice>(); }
		bool L_2 = ___editor0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (editor) { connectedEditorDevices = new List<MidiDevice>(); }
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_4 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_4, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6), (void*)L_4);
		goto IL_002e;
	}

IL_0022:
	{
		// else { connectedDevices = new List<MidiDevice>(); }
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_5 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_5, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3), (void*)L_5);
	}

IL_002e:
	{
		// iMidiDevice.DisconnectDevices(editor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		bool L_7 = ___editor0;
		NullCheck(L_6);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void ForieroEngine.MIDIUnified.Plugins.IMidiDevice::DisconnectDevices(System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_003a:
	{
		// }
		return;
	}
}
// ForieroEngine.MIDIUnified.Plugins.MidiDevice ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::ConnectDeviceByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* MidiOUTPlugin_ConnectDeviceByName_mF3EBF6D8F53C89C7DB4E3C4256D8EC60CB12AEC9 (String_t* ___deviceName0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36927E29337C770B3A29FAC284C8515C7BE5B388);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_1 = NULL;
	Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B V_2;
	memset((&V_2), 0, sizeof(V_2));
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		// if (iMidiDevice == null) return null;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (iMidiDevice == null) return null;
		V_1 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
		goto IL_00b6;
	}

IL_0014:
	{
		// foreach (var md in MidiINPlugin.connectedDevices)
		il2cpp_codegen_runtime_class_init_inline(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_2 = ((MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_StaticFields*)il2cpp_codegen_static_fields_for(MidiINPlugin_t7D6DEA9C9FCB78157A6561644BEAA484496D2388_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_2);
		Enumerator_t131B8E1516C8FE11BA42358A5BBD2BDF6948760B L_3;
		L_3 = List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB(L_2, List_1_GetEnumerator_m2FC661BAE5858DFF7FA6A6CE2A4591290F1F13AB_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331((&V_2), Enumerator_Dispose_mD34D43F0728A1DACD57F3B43297EEB17B1343331_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005d_1;
			}

IL_0022_1:
			{
				// foreach (var md in MidiINPlugin.connectedDevices)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_4;
				L_4 = Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_inline((&V_2), Enumerator_get_Current_mE7BADD2A8872F9385B682E79197FE76B8E0F3696_RuntimeMethod_var);
				V_3 = L_4;
				// if (md.name == deviceName && MIDISettings.instance.midiInOutExclusive)
				MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_5 = V_3;
				NullCheck(L_5);
				String_t* L_6 = L_5->___name_1;
				String_t* L_7 = ___deviceName0;
				bool L_8;
				L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
				if (!L_8)
				{
					goto IL_0045_1;
				}
			}
			{
				MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_9;
				L_9 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
				NullCheck(L_9);
				bool L_10 = L_9->___midiInOutExclusive_15;
				G_B7_0 = ((int32_t)(L_10));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 0;
			}

IL_0046_1:
			{
				V_4 = (bool)G_B7_0;
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_005c_1;
				}
			}
			{
				// Debug.LogError("Preventing infinite loop. To have same device connected as IN and OUT is not allowed.");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral36927E29337C770B3A29FAC284C8515C7BE5B388, NULL);
				// return null;
				V_1 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
				goto IL_00b6;
			}

IL_005c_1:
			{
			}

IL_005d_1:
			{
				// foreach (var md in MidiINPlugin.connectedDevices)
				bool L_12;
				L_12 = Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0((&V_2), Enumerator_MoveNext_mB6DB10A664C92D6AD725E2C433163FE332101AF0_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		// for (var i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		V_5 = 0;
		goto IL_00a3;
	}

IL_007c:
	{
		// for (var i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		String_t* L_13 = ___deviceName0;
		int32_t L_14 = V_5;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = MidiOUTPlugin_GetDeviceName_m98DB385075A36E362017F1E32DD71B91D60EE2FA(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, L_15, NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		// for (var i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		int32_t L_18 = V_5;
		bool L_19 = ___editor1;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_20;
		L_20 = MidiOUTPlugin_ConnectDevice_m759742868F65B35FCB87F75A57F1A8E48D4CE678(L_18, L_19, NULL);
		V_1 = L_20;
		goto IL_00b6;
	}

IL_009c:
	{
		// for (var i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00a3:
	{
		// for (var i = 0; i < GetDeviceCount(); i++) { if (deviceName == GetDeviceName(i)) { return ConnectDevice(i, editor); } }
		int32_t L_22 = V_5;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = MidiOUTPlugin_GetDeviceCount_mB506BD38C147AAE2FEB94ADAF8AD3BE79D855548(NULL);
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_007c;
		}
	}
	{
		// return null;
		V_1 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
		goto IL_00b6;
	}

IL_00b6:
	{
		// }
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_25 = V_1;
		return L_25;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::DisconnectDevice(ForieroEngine.MIDIUnified.Plugins.MidiDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_DisconnectDevice_m1A1F31FAB6485304E1CF8C0FEFB4FD01811690EE (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* ___connectedDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B10_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B9_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B19_0 = NULL;
	Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* G_B18_0 = NULL;
	{
		// if (iMidiDevice == null || connectedDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_1 = ___connectedDevice0;
		G_B3_0 = ((((RuntimeObject*)(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (iMidiDevice == null || connectedDevice == null) return;
		goto IL_0105;
	}

IL_0018:
	{
		// if (connectedDevice.isEditor)
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_3 = ___connectedDevice0;
		NullCheck(L_3);
		bool L_4 = L_3->___isEditor_2;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0085;
		}
	}
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_6 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_inline(L_6, List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0075;
	}

IL_0032:
	{
		// if (connectedDevice.deviceId == connectedEditorDevices[i].deviceId)
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_8 = ___connectedDevice0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___deviceId_0;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_10 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_12;
		L_12 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_10, L_11, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_13 = L_12->___deviceId_0;
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		// connectedEditorDevices.RemoveAt(i);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_15 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8(L_15, L_16, List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8_RuntimeMethod_var);
		// OnEditorDeviceDisconnected?.Invoke(connectedDevice);
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_17 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___OnEditorDeviceDisconnected_10;
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_18 = L_17;
		G_B9_0 = L_18;
		if (L_18)
		{
			G_B10_0 = L_18;
			goto IL_0067;
		}
	}
	{
		goto IL_006e;
	}

IL_0067:
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_19 = ___connectedDevice0;
		NullCheck(G_B10_0);
		Action_1_Invoke_m2C2BF1198D9E682AD8362C5AB32A539BB337D911_inline(G_B10_0, L_19, NULL);
	}

IL_006e:
	{
		// break;
		goto IL_0082;
	}

IL_0070:
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_0075:
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		int32_t L_21 = V_2;
		V_4 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_0032;
		}
	}

IL_0082:
	{
		goto IL_00ee;
	}

IL_0085:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_23 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_inline(L_23, List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_00df;
	}

IL_0096:
	{
		// if (connectedDevice.deviceId == connectedDevices[i].deviceId)
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_25 = ___connectedDevice0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___deviceId_0;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_27 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_29;
		L_29 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_27, L_28, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30 = L_29->___deviceId_0;
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00d8;
		}
	}
	{
		// connectedDevices.RemoveAt(i);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_32 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8(L_32, L_33, List_1_RemoveAt_mB57C73CF90FF8C3CBEC9201C1DF7562AEFC85AF8_RuntimeMethod_var);
		// OnDeviceDisconnected?.Invoke(connectedDevice);
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_34 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___OnDeviceDisconnected_9;
		Action_1_tEE0F30164FE74ED3BF4949300502EA1E2F8EF703* L_35 = L_34;
		G_B18_0 = L_35;
		if (L_35)
		{
			G_B19_0 = L_35;
			goto IL_00cf;
		}
	}
	{
		goto IL_00d6;
	}

IL_00cf:
	{
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_36 = ___connectedDevice0;
		NullCheck(G_B19_0);
		Action_1_Invoke_m2C2BF1198D9E682AD8362C5AB32A539BB337D911_inline(G_B19_0, L_36, NULL);
	}

IL_00d6:
	{
		// break;
		goto IL_00ed;
	}

IL_00d8:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_00df:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		int32_t L_38 = V_5;
		V_7 = (bool)((((int32_t)((((int32_t)L_38) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_7;
		if (L_39)
		{
			goto IL_0096;
		}
	}

IL_00ed:
	{
	}

IL_00ee:
	{
		// iMidiDevice.DisconnectDevice(connectedDevice.deviceId, connectedDevice.isEditor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_40 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_41 = ___connectedDevice0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___deviceId_0;
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_43 = ___connectedDevice0;
		NullCheck(L_43);
		bool L_44 = L_43->___isEditor_2;
		NullCheck(L_40);
		InterfaceActionInvoker2< int32_t, bool >::Invoke(2 /* System.Void ForieroEngine.MIDIUnified.Plugins.IMidiDevice::DisconnectDevice(System.Int32,System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_40, L_42, L_44);
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::DisconnectDeviceByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_DisconnectDeviceByName_m2E312132D630C945023DF3CB86CB4757F9B1FEC3 (String_t* ___deviceName0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		// if (iMidiDevice == null) return;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (iMidiDevice == null) return;
		goto IL_00d2;
	}

IL_0012:
	{
		// MidiDevice disconnectDevice = null;
		V_0 = (MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)NULL;
		// if (editor)
		bool L_2 = ___editor1;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_4 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_inline(L_4, List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_005a;
	}

IL_0029:
	{
		// if (deviceName == connectedEditorDevices[i].name)
		String_t* L_6 = ___deviceName0;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_7 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_9;
		L_9 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_7, L_8, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10 = L_9->___name_1;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_10, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		// disconnectDevice = connectedEditorDevices[i];
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_13 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_15;
		L_15 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_13, L_14, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		V_0 = L_15;
		// break;
		goto IL_0067;
	}

IL_0055:
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_005a:
	{
		// for (var i = connectedEditorDevices.Count - 1; i >= 0; i--)
		int32_t L_17 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0029;
		}
	}

IL_0067:
	{
		goto IL_00bf;
	}

IL_006a:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_19 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_inline(L_19, List_1_get_Count_mA842B18741B2A83A837032B75177731A9DA985DA_RuntimeMethod_var);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		goto IL_00b0;
	}

IL_007b:
	{
		// if (deviceName == connectedDevices[i].name)
		String_t* L_21 = ___deviceName0;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_22 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_24;
		L_24 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_22, L_23, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		NullCheck(L_24);
		String_t* L_25 = L_24->___name_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, L_25, NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00a9;
		}
	}
	{
		// disconnectDevice = connectedDevices[i];
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_28 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_30;
		L_30 = List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E(L_28, L_29, List_1_get_Item_mB50BDA862203F3886165A712B9ED9E8F5F4F197E_RuntimeMethod_var);
		V_0 = L_30;
		// break;
		goto IL_00be;
	}

IL_00a9:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_00b0:
	{
		// for (var i = connectedDevices.Count - 1; i >= 0; i--)
		int32_t L_32 = V_6;
		V_8 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_8;
		if (L_33)
		{
			goto IL_007b;
		}
	}

IL_00be:
	{
	}

IL_00bf:
	{
		// if (disconnectDevice != null) { DisconnectDevice(disconnectDevice); }
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_34 = V_0;
		V_9 = (bool)((!(((RuntimeObject*)(MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_00d2;
		}
	}
	{
		// if (disconnectDevice != null) { DisconnectDevice(disconnectDevice); }
		MidiDevice_tDF16695051C5F86D0CC47744ADABBF3731B42FF7* L_36 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		MidiOUTPlugin_DisconnectDevice_m1A1F31FAB6485304E1CF8C0FEFB4FD01811690EE(L_36, NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::GetDeviceName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiOUTPlugin_GetDeviceName_m98DB385075A36E362017F1E32DD71B91D60EE2FA (int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// public static string GetDeviceName(int deviceIndex) => iMidiDevice == null ? "" : iMidiDevice.GetDeviceName(deviceIndex);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		int32_t L_2 = ___deviceIndex0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceName(System.Int32) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_1, L_2);
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::GetDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_GetDeviceCount_mB506BD38C147AAE2FEB94ADAF8AD3BE79D855548 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// public static int GetDeviceCount() => iMidiDevice?.GetDeviceCount() ?? 0;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetDeviceCount() */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		return G_B3_0;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::OpenVirtualPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_OpenVirtualPort_m94D3E76CAF29C47443E173852F1D77023EE8CC06 (String_t* ___name0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int OpenVirtualPort(string name, bool editor = false) => iMidiDevice.OpenVirtualPort(name, editor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		String_t* L_1 = ___name0;
		bool L_2 = ___editor1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, String_t*, bool >::Invoke(6 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::OpenVirtualPort(System.String,System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::OpenVirtualPortAsync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* MidiOUTPlugin_OpenVirtualPortAsync_m81DF6E6EAE2E6850DF821BE2034E7D0DDC40338A (String_t* ___name0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_m25BE14DE5087ACC3865C6A41DF8A8E29FBA62E49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* V_0 = NULL;
	{
		U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* L_0 = (U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710*)il2cpp_codegen_object_new(U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenVirtualPortAsyncU3Ed__25__ctor_m8B5491C32036B549F566E72D553E14E216987D73(L_0, NULL);
		V_0 = L_0;
		U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE(AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* L_3 = V_0;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		L_3->___name_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___name_2), (void*)L_4);
		U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* L_5 = V_0;
		bool L_6 = ___editor1;
		NullCheck(L_5);
		L_5->___editor_3 = L_6;
		U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* L_7 = V_0;
		NullCheck(L_7);
		L_7->___U3CU3E1__state_0 = (-1);
		U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* L_8 = V_0;
		NullCheck(L_8);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_9 = (&L_8->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_m25BE14DE5087ACC3865C6A41DF8A8E29FBA62E49(L_9, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_m25BE14DE5087ACC3865C6A41DF8A8E29FBA62E49_RuntimeMethod_var);
		U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* L_10 = V_0;
		NullCheck(L_10);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_11 = (&L_10->___U3CU3Et__builder_1);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_12;
		L_12 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(L_11, AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var);
		return L_12;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::CloseVirtualPort(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_CloseVirtualPort_m97EE1299DCD3166942DC004B94F0C8CA17FA3ED4 (int32_t ___deviceId0, bool ___editor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void CloseVirtualPort(int deviceId, bool editor = false) { iMidiDevice.CloseVirtualPort(deviceId, editor); }
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		int32_t L_1 = ___deviceId0;
		bool L_2 = ___editor1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, bool >::Invoke(7 /* System.Void ForieroEngine.MIDIUnified.Plugins.IMidiDevice::CloseVirtualPort(System.Int32,System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// public static void CloseVirtualPort(int deviceId, bool editor = false) { iMidiDevice.CloseVirtualPort(deviceId, editor); }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::CloseVirtualPorts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_CloseVirtualPorts_m63AD1587CC6562198E0E2B7DC49C87CD4E635863 (bool ___editor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void CloseVirtualPorts(bool editor = false) { iMidiDevice.CloseVirtualPorts(editor); }
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		bool L_1 = ___editor0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void ForieroEngine.MIDIUnified.Plugins.IMidiDevice::CloseVirtualPorts(System.Boolean) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_0, L_1);
		// public static void CloseVirtualPorts(bool editor = false) { iMidiDevice.CloseVirtualPorts(editor); }
		return;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::GetVirtualPortCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_GetVirtualPortCount_mF7003621D4E301242A35B9E815FC0ABEF6002ED4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int GetVirtualPortCount() => iMidiDevice.GetVirtualPortCount();
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetVirtualPortCount() */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::GetVirtualPortName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MidiOUTPlugin_GetVirtualPortName_mA9DEB972B70BFD35AEAFE09A07BFC8B9FD67B7C7 (int32_t ___portIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string GetVirtualPortName(int portIndex) => iMidiDevice.GetVirtualPortName(portIndex);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiDevice_5;
		int32_t L_1 = ___portIndex0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(10 /* System.String ForieroEngine.MIDIUnified.Plugins.IMidiDevice::GetVirtualPortName(System.Int32) */, IMidiDevice_t39D238D7741A60A152C678723A01AEF1ADC8CEB1_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::SendMidiMessage(ForieroEngine.MIDIUnified.Plugins.MidiMessage,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_SendMidiMessage_m55E42BFE3F880FA6987AF45FFBBFF31D2F8238A9 (MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 ___m0, int32_t ___deviceId1, bool ___editor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int SendMidiMessage(MidiMessage m, int deviceId = -1, bool editor = false) => SendData(m.Data, deviceId, editor);
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_0 = ___m0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0.___Data_4;
		int32_t L_2 = ___deviceId1;
		bool L_3 = ___editor2;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = MidiOUTPlugin_SendData_mD03FDA0900C0A3CC72472EF216134CE0086BA169(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::SendShortMessage(System.Byte,System.Byte,System.Byte,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_SendShortMessage_mDF025B41E221813469915F1D9B19E516B82F0DB4 (uint8_t ___command0, uint8_t ___data11, uint8_t ___data22, int32_t ___deviceId3, bool ___editor4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20194D6ACF3F338C6C9B7FFA006DA8C7CBE78464);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B5_0 = 0;
	{
		// if (iMidiOUTDevice == null) return -1;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (iMidiOUTDevice == null) return -1;
		V_1 = (-1);
		goto IL_00c0;
	}

IL_0014:
	{
		// if (MIDISettings.instance.outputSettings.logAll || MIDISettings.instance.outputSettings.logShortMessages)
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_2;
		L_2 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_2);
		MidiOutputSettings_t4BF1952F93BAF55CF10F7227C417BFD6AD2D01C5* L_3 = L_2->___outputSettings_23;
		NullCheck(L_3);
		bool L_4 = L_3->___logAll_4;
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_5;
		L_5 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_5);
		MidiOutputSettings_t4BF1952F93BAF55CF10F7227C417BFD6AD2D01C5* L_6 = L_5->___outputSettings_23;
		NullCheck(L_6);
		bool L_7 = L_6->___logShortMessages_5;
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 1;
	}

IL_0037:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		// new byte[] { command, data1, data2 }.Log(deviceId, "MIDI OUT : ");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		uint8_t L_11 = ___command0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_10;
		uint8_t L_13 = ___data11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_12;
		uint8_t L_15 = ___data22;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_15);
		int32_t L_16 = ___deviceId3;
		MidiExtensions_Log_mCBB57339F3A81DD30F864940C376C5E0162C4029(L_14, L_16, _stringLiteral20194D6ACF3F338C6C9B7FFA006DA8C7CBE78464, _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
	}

IL_0060:
	{
		// if (threaded)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		bool L_17 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___threaded_11;
		il2cpp_codegen_memory_barrier();
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		// Messages.Enqueue(new MidiMessage { CommandAndChannel = command, Data1 = data1, Data2 = data2, DeviceId = deviceId, DataSize = 3 });
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_19 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___Messages_13;
		il2cpp_codegen_initobj((&V_4), sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
		uint8_t L_20 = ___command0;
		(&V_4)->___CommandAndChannel_0 = L_20;
		uint8_t L_21 = ___data11;
		(&V_4)->___Data1_1 = L_21;
		uint8_t L_22 = ___data22;
		(&V_4)->___Data2_2 = L_22;
		int32_t L_23 = ___deviceId3;
		(&V_4)->___DeviceId_5 = L_23;
		(&V_4)->___DataSize_3 = 3;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_24 = V_4;
		NullCheck(L_19);
		NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58(L_19, L_24, NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_RuntimeMethod_var);
		// return 1;
		V_1 = 1;
		goto IL_00c0;
	}

IL_00ad:
	{
		// return iMidiOUTDevice.SendMessage(command, data1, data2, deviceId, editor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0;
		uint8_t L_26 = ___command0;
		uint8_t L_27 = ___data11;
		uint8_t L_28 = ___data22;
		int32_t L_29 = ___deviceId3;
		bool L_30 = ___editor4;
		NullCheck(L_25);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker5< int32_t, uint8_t, uint8_t, uint8_t, int32_t, bool >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiOUTDevice::SendMessage(System.Byte,System.Byte,System.Byte,System.Int32,System.Boolean) */, IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var, L_25, L_26, L_27, L_28, L_29, L_30);
		V_1 = L_31;
		goto IL_00c0;
	}

IL_00c0:
	{
		// }
		int32_t L_32 = V_1;
		return L_32;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::SendData(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_SendData_mD03FDA0900C0A3CC72472EF216134CE0086BA169 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___deviceId1, bool ___editor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20194D6ACF3F338C6C9B7FFA006DA8C7CBE78464);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (iMidiOUTDevice == null) return -1;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (iMidiOUTDevice == null) return -1;
		V_1 = (-1);
		goto IL_009c;
	}

IL_0014:
	{
		// if (MIDISettings.instance.outputSettings.logAll) data.Log(deviceId, "MIDI OUT : ");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_2;
		L_2 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_2);
		MidiOutputSettings_t4BF1952F93BAF55CF10F7227C417BFD6AD2D01C5* L_3 = L_2->___outputSettings_23;
		NullCheck(L_3);
		bool L_4 = L_3->___logAll_4;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// if (MIDISettings.instance.outputSettings.logAll) data.Log(deviceId, "MIDI OUT : ");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___data0;
		int32_t L_7 = ___deviceId1;
		MidiExtensions_Log_mCBB57339F3A81DD30F864940C376C5E0162C4029(L_6, L_7, _stringLiteral20194D6ACF3F338C6C9B7FFA006DA8C7CBE78464, _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
	}

IL_0039:
	{
		// if (threaded)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		bool L_8 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___threaded_11;
		il2cpp_codegen_memory_barrier();
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_008c;
		}
	}
	{
		// Messages.Enqueue(new MidiMessage { CommandAndChannel = 0xF0, Data = data, DeviceId = deviceId, DataSize = data.Length, Editor = editor });
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_10 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___Messages_13;
		il2cpp_codegen_initobj((&V_4), sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
		(&V_4)->___CommandAndChannel_0 = (uint8_t)((int32_t)240);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___data0;
		(&V_4)->___Data_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___Data_4), (void*)L_11);
		int32_t L_12 = ___deviceId1;
		(&V_4)->___DeviceId_5 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___data0;
		NullCheck(L_13);
		(&V_4)->___DataSize_3 = ((int32_t)(((RuntimeArray*)L_13)->max_length));
		bool L_14 = ___editor2;
		(&V_4)->___Editor_6 = L_14;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_15 = V_4;
		NullCheck(L_10);
		NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58(L_10, L_15, NonBlockingQueue_1_Enqueue_mCC4C666380094050FFEB3A2EC65494BA1E11AD58_RuntimeMethod_var);
		// return 1;
		V_1 = 1;
		goto IL_009c;
	}

IL_008c:
	{
		// return iMidiOUTDevice.SendData(data, deviceId, editor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___data0;
		int32_t L_18 = ___deviceId1;
		bool L_19 = ___editor2;
		NullCheck(L_16);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, bool >::Invoke(1 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiOUTDevice::SendData(System.Byte[],System.Int32,System.Boolean) */, IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var, L_16, L_17, L_18, L_19);
		V_1 = L_20;
		goto IL_009c;
	}

IL_009c:
	{
		// }
		int32_t L_21 = V_1;
		return L_21;
	}
}
// System.Int32 ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::GetConnectedDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MidiOUTPlugin_GetConnectedDeviceCount_m9065BB5A6E18E7D21D037E69D241BC45C636D949 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// public static int GetConnectedDeviceCount() => iMidiEditorDevice?.GetConnectedDeviceCount() ?? 0;
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiEditorDevice_1;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiEditorDevice::GetConnectedDeviceCount() */, IMidiEditorDevice_t5362A697FAD74D67CB748047C37E30D4216E6B19_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		return G_B3_0;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin_Terminate_m2F4C66D33EF0535BF7095BE63902A36D8EA4A910 (const RuntimeMethod* method) 
{
	{
		// public static void Terminate() { MidiThread.TerminateInternal(); }
		MidiThread_TerminateInternal_m89380D2CB0350949485E486B28D58E410DD90D63(NULL);
		// public static void Terminate() { MidiThread.TerminateInternal(); }
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MidiOUTPlugin__cctor_mD8FADE92D3EF9EC61BE64123239A3717A4C9C0F9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static volatile bool initialized = false;
		il2cpp_codegen_memory_barrier();
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___initialized_2 = (bool)0;
		// public static List<MidiDevice> connectedDevices = new List<MidiDevice>();
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_0 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_0, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedDevices_3), (void*)L_0);
		// public static List<string> deviceNames = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___deviceNames_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___deviceNames_4), (void*)L_1);
		// public static List<MidiDevice> connectedEditorDevices = new List<MidiDevice>();
		List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0* L_2 = (List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0*)il2cpp_codegen_object_new(List_1_t6E987A232958F3D39BBBA8933B76FDAB90FA00F0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890(L_2, List_1__ctor_m40E7AD6D87F4602CA9DBA6E4EF9870FFCC030890_RuntimeMethod_var);
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___connectedEditorDevices_6), (void*)L_2);
		// public static volatile bool threaded = true;
		il2cpp_codegen_memory_barrier();
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___threaded_11 = (bool)1;
		// public static volatile int sleep = 1;
		il2cpp_codegen_memory_barrier();
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___sleep_12 = 1;
		// private static readonly NonBlockingQueue<MidiMessage> Messages = new NonBlockingQueue<MidiMessage>();
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_3 = (NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149*)il2cpp_codegen_object_new(NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6(L_3, NonBlockingQueue_1__ctor_mAF2DD69EC37AA59DDC3C5BF5CDC0EC2023E075D6_RuntimeMethod_var);
		((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___Messages_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___Messages_13), (void*)L_3);
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
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_thread != null) return;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0;
		V_0 = (bool)((!(((RuntimeObject*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (_thread != null) return;
		goto IL_0049;
	}

IL_000f:
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Start");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_2;
		L_2 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->___debug_5;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral096337ABDF61BE0AFAB9B9D782471249FB163DEE, NULL);
	}

IL_0028:
	{
		// _thread = new Thread(MidiOutThread);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_5 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_5, NULL, (intptr_t)((void*)MidiThread_MidiOutThread_m27934A43F24AED93986600F6A29C882851C8A23D_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_6, L_5, NULL);
		((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0), (void*)L_6);
		// _thread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0;
		NullCheck(L_7);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_7, NULL);
	}

IL_0049:
	{
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
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4(NULL);
		// var m = new MidiMessage();
		il2cpp_codegen_initobj((&V_0), sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
	}

IL_000f:
	{
		// if (threaded)
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		bool L_1 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___threaded_11;
		il2cpp_codegen_memory_barrier();
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0079;
	}

IL_001e:
	{
		// if (m.CommandAndChannel == 0xF0) iMidiOUTDevice.SendData(m.Data, m.DeviceId, m.Editor);
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_3 = V_0;
		uint8_t L_4 = L_3.___CommandAndChannel_0;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)((int32_t)240)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// if (m.CommandAndChannel == 0xF0) iMidiOUTDevice.SendData(m.Data, m.DeviceId, m.Editor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7.___Data_4;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_9 = V_0;
		int32_t L_10 = L_9.___DeviceId_5;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_11 = V_0;
		bool L_12 = L_11.___Editor_6;
		NullCheck(L_6);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, bool >::Invoke(1 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiOUTDevice::SendData(System.Byte[],System.Int32,System.Boolean) */, IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var, L_6, L_8, L_10, L_12);
		goto IL_0078;
	}

IL_004f:
	{
		// else iMidiOUTDevice.SendMessage(m.CommandAndChannel, m.Data1, m.Data2, m.DeviceId, m.Editor);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___iMidiOUTDevice_0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_15 = V_0;
		uint8_t L_16 = L_15.___CommandAndChannel_0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_17 = V_0;
		uint8_t L_18 = L_17.___Data1_1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_19 = V_0;
		uint8_t L_20 = L_19.___Data2_2;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_21 = V_0;
		int32_t L_22 = L_21.___DeviceId_5;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_23 = V_0;
		bool L_24 = L_23.___Editor_6;
		NullCheck(L_14);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker5< int32_t, uint8_t, uint8_t, uint8_t, int32_t, bool >::Invoke(0 /* System.Int32 ForieroEngine.MIDIUnified.Plugins.IMidiOUTDevice::SendMessage(System.Byte,System.Byte,System.Byte,System.Int32,System.Boolean) */, IMidiOUTDevice_tCB8F87532179C31C8C6DD94A1351E6B129226614_il2cpp_TypeInfo_var, L_14, L_16, L_18, L_20, L_22, L_24);
	}

IL_0078:
	{
	}

IL_0079:
	{
		// while (Messages.Dequeue(ref m))
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		NonBlockingQueue_1_tEAF7E5F38ED40A98D76F79071230E0838F7B7149* L_26 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___Messages_13;
		NullCheck(L_26);
		bool L_27;
		L_27 = NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B(L_26, (&V_0), NonBlockingQueue_1_Dequeue_m89B89A1CDE96077B86FC840296A20E029722818B_RuntimeMethod_var);
		V_3 = L_27;
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_001e;
		}
	}
	{
	}

IL_008a:
	{
		// Thread.Sleep(sleep);
		il2cpp_codegen_runtime_class_init_inline(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var);
		int32_t L_29 = ((MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_StaticFields*)il2cpp_codegen_static_fields_for(MidiOUTPlugin_t6FBD82A0E17CD652C1517150474E4CA943FDD739_il2cpp_TypeInfo_var))->___sleep_12;
		il2cpp_codegen_memory_barrier();
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(L_29, NULL);
		// } while (!_terminating);
		bool L_30 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____terminating_1;
		il2cpp_codegen_memory_barrier();
		V_4 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_4;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		// AndroidJNI.DetachCurrentThread();
		int32_t L_32;
		L_32 = AndroidJNI_DetachCurrentThread_mC0F3D8974C0681528B801EF0AC2A54E5C7A2E933(NULL);
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
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B8_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B7_0 = NULL;
	{
		// if (_terminating) return;
		bool L_0 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____terminating_1;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (_terminating) return;
		goto IL_0072;
	}

IL_000e:
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Aborting");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_2;
		L_2 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->___debug_5;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Aborting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral24F5F813B5553DCE97BED2B38E7916EFCEAD1662, NULL);
	}

IL_0027:
	{
		// _terminating = true;
		il2cpp_codegen_memory_barrier();
		((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____terminating_1 = (bool)1;
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Joining");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_5;
		L_5 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = L_5->___debug_5;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDI OUT Thread : Joining");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD857983CB6F3E4D2C60DE8914CC9627DF44D1CCB, NULL);
	}

IL_0048:
	{
		// _thread?.Join();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_8 = ((MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_StaticFields*)il2cpp_codegen_static_fields_for(MidiThread_t7585583AB4787632A467C684BCBD9B65AE11B2DD_il2cpp_TypeInfo_var))->____thread_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9 = L_8;
		G_B7_0 = L_9;
		if (L_9)
		{
			G_B8_0 = L_9;
			goto IL_0053;
		}
	}
	{
		goto IL_0059;
	}

IL_0053:
	{
		NullCheck(G_B8_0);
		Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F(G_B8_0, NULL);
	}

IL_0059:
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDi OUT Thread : Aborted");
		MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E* L_10;
		L_10 = Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D(Settings_1_get_instance_mD3448E502EBFA82360EE365BECAE55BF5DFA328D_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = L_10->___debug_5;
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// if (MIDISettings.instance.debug) Debug.Log("MIDi OUT Thread : Aborted");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1586A6AA5864E5E6DE4F613A00FC4FA896BA8CEA, NULL);
	}

IL_0072:
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
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25__ctor_m8B5491C32036B549F566E72D553E14E216987D73 (U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
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
	U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0084_1;
		}

IL_000e_1:
		{
			U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* L_2 = (U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass25_0__ctor_mCD9D158A4F6EA6F04B3E9297A5C4EA598580C151(L_2, NULL);
			__this->___U3CU3E8__1_4 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_2);
			U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* L_3 = __this->___U3CU3E8__1_4;
			String_t* L_4 = __this->___name_2;
			NullCheck(L_3);
			L_3->___name_0 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___name_0), (void*)L_4);
			U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* L_5 = __this->___U3CU3E8__1_4;
			bool L_6 = __this->___editor_3;
			NullCheck(L_5);
			L_5->___editor_1 = L_6;
			// public static async Task<int> OpenVirtualPortAsync(string name, bool editor = false) => await Task.Run(() => iMidiDevice.OpenVirtualPort(name, editor));
			U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7* L_7 = __this->___U3CU3E8__1_4;
			Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_8 = (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*)il2cpp_codegen_object_new(Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3COpenVirtualPortAsyncU3Eb__0_mA6BDA8B1D9426DD847A2837B1FE97900DCDC7489_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_9;
			L_9 = Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134(L_8, Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_RuntimeMethod_var);
			NullCheck(L_9);
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_10;
			L_10 = Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843(L_9, Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_RuntimeMethod_var);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643((&V_2), TaskAwaiter_1_get_IsCompleted_mC7DC849F1A876644F8BD96DB3EC681CB44A0A643_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_00a0_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_13 = V_2;
			__this->___U3CU3Eu__1_6 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951(L_14, (&V_2), (&V_3), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710_mD19693473B5DB9CA863D16804768AC1680F7E951_RuntimeMethod_var);
			goto IL_00f3;
		}

IL_0084_1:
		{
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_15 = __this->___U3CU3Eu__1_6;
			V_2 = L_15;
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* L_16 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_00a0_1:
		{
			int32_t L_18;
			L_18 = TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80((&V_2), TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_RuntimeMethod_var);
			__this->___U3CU3Es__2_5 = L_18;
			int32_t L_19 = __this->___U3CU3Es__2_5;
			V_1 = L_19;
			goto IL_00d7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b6;
		}
		throw e;
	}

CATCH_00b6:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7*)NULL);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f3;
	}// end catch (depth: 1)

IL_00d7:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass25_0_tE0ED768DA8288549378F3E8E5307C88F9EA8BDE7*)NULL);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_22 = (&__this->___U3CU3Et__builder_1);
		int32_t L_23 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B(L_22, L_23, AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var);
	}

IL_00f3:
	{
		return;
	}
}
// System.Void ForieroEngine.MIDIUnified.Plugins.MidiOUTPlugin/<OpenVirtualPortAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenVirtualPortAsyncU3Ed__25_SetStateMachine_m804EAB9FB2805B81E6FF31748EDD5FC38C0A8F75 (U3COpenVirtualPortAsyncU3Ed__25_tF52AACE4616851788C9316E8CDF541E6A8C55710* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Boolean ForieroEngine.MIDIUnified.Plugins.MidiINDeviceANDROID::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MidiINDeviceANDROID_Init_mE1E0CA69D93ED08B294C1123FD308AEB84FAB467 (MidiINDeviceANDROID_t0850277247EF1E121020A806B79FAF6393B5A607* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool Init() { MidiPlugin.Init(); return true; }
		bool L_0;
		L_0 = MidiPlugin_Init_m49918B953F45588947A896EF343537769524EA29(NULL);
		// public bool Init() { MidiPlugin.Init(); return true; }
		V_0 = (bool)1;
		goto IL_000b;
	}

IL_000b:
	{
		// public bool Init() { MidiPlugin.Init(); return true; }
		bool L_1 = V_0;
		return L_1;
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
	int32_t V_0 = 0;
	MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// var result = MidiPlugin.MIDIIN_PopMessage(out var m);
		int32_t L_0;
		L_0 = MidiPlugin_MIDIIN_PopMessage_m68185DA31D0199E6D6105B0BFDF7A7C11799A5F9((&V_1), NULL);
		V_0 = L_0;
		// midiMessage = new MidiMessage(m);
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_1 = ___midiMessage0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7 L_2 = V_1;
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
		int32_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		int32_t L_7 = V_2;
		return L_7;
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
	bool V_0 = false;
	{
		// public bool Init() { MidiPlugin.Init(); return true; }
		bool L_0;
		L_0 = MidiPlugin_Init_m49918B953F45588947A896EF343537769524EA29(NULL);
		// public bool Init() { MidiPlugin.Init(); return true; }
		V_0 = (bool)1;
		goto IL_000b;
	}

IL_000b:
	{
		// public bool Init() { MidiPlugin.Init(); return true; }
		bool L_1 = V_0;
		return L_1;
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
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (data == null || data.Length == 0){ return -1; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if (data == null || data.Length == 0){ return -1; }
		V_1 = (-1);
		goto IL_0020;
	}

IL_0015:
	{
		// else{ return MidiPlugin.MIDIOUT_SendData(data, deviceId); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		int32_t L_4 = ___deviceId1;
		int32_t L_5;
		L_5 = MidiPlugin_MIDIOUT_SendData_m3C2FA1D2E9551FF5283B80FACFFC0BC0E5E16743(L_3, L_4, NULL);
		V_1 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
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
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (_initCalled) { return _isInitialized; }
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____initCalled_1;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (_initCalled) { return _isInitialized; }
		bool L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_2 = L_2;
		goto IL_004e;
	}

IL_0013:
	{
		// _initCalled = true;
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____initCalled_1 = (bool)1;
		// var jc = new AndroidJavaClass(MIDIUnifiedFragmentClass);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteralA1E532619F54874E046D40D48FB4EFDC8B5ECD3E, NULL);
		V_0 = L_3;
		// _midiPlugin = jc.CallStatic<AndroidJavaObject>("Init");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_4, _stringLiteral3C74EE53B1AF65557F9BDF1EAF0C416BADC79DB9, L_5, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2), (void*)L_6);
		// _isInitialized = _midiPlugin != null;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		// return _isInitialized;
		bool L_8 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_2 = L_8;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		bool L_9 = V_2;
		return L_9;
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
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (!_isInitialized) return -1;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (!_isInitialized) return -1;
		V_1 = (-1);
		goto IL_0032;
	}

IL_0011:
	{
		// return _midiPlugin.Call<int>(CMIDIIN_ConnectDevice, new object[] { deviceIndex });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___deviceIndex0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		int32_t L_8;
		L_8 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_2, _stringLiteral5C48882D3E7C40CECB2423A087ED1E46E60166B9, L_4, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
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
	bool V_0 = false;
	{
		// if (!_isInitialized) return;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (!_isInitialized) return;
		goto IL_002e;
	}

IL_000f:
	{
		// _midiPlugin.Call(CMIDIIN_DisconnectDevice, new object[] { id });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___id0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral70ADCD6FBAC1B27833FD9427753B62F86319A827, L_4, NULL);
	}

IL_002e:
	{
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
	bool V_0 = false;
	{
		// if (!_isInitialized) return;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (!_isInitialized) return;
		goto IL_0024;
	}

IL_000f:
	{
		// _midiPlugin.Call(CMIDIIN_DisconnectDevices);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralB511D0A10B2F4B8AC168C6AD2CA5FDEB2410F4DC, L_3, NULL);
	}

IL_0024:
	{
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
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (!_isInitialized) return "";
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!_isInitialized) return "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0036;
	}

IL_0015:
	{
		// return _midiPlugin.Call<String>(CMIDIIN_DeviceName, new object[] { deviceIndex });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___deviceIndex0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		String_t* L_8;
		L_8 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteral4273EF9CB477BFB57085C60BD43CC55EEA609E59, L_4, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		String_t* L_9 = V_1;
		return L_9;
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
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (!_isInitialized) return 0;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (!_isInitialized) return 0;
		V_1 = 0;
		goto IL_0028;
	}

IL_0011:
	{
		// return _midiPlugin.Call<int>(CMIDIIN_DeviceCount);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_2, _stringLiteralF60C4BD61933EFE4F42954BD1522D56C0E9D9BD4, L_3, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		int32_t L_5 = V_1;
		return L_5;
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
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		// aMidiMessage = new MidiMessage();
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_0 = ___aMidiMessage0;
		il2cpp_codegen_initobj(L_0, sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
		// if (!_isInitialized) return 0;
		bool L_1 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// if (!_isInitialized) return 0;
		V_1 = 0;
		goto IL_0128;
	}

IL_001b:
	{
		// if (_midiPlugin.CallStatic<int>(CMIDIIN_PopMidiMessage) == 0) return 0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_3, _stringLiteral51AC8AB7EDCBC23D8A39ACDE7B30FBAB6B719D36, L_4, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// if (_midiPlugin.CallStatic<int>(CMIDIIN_PopMidiMessage) == 0) return 0;
		V_1 = 0;
		goto IL_0128;
	}

IL_003d:
	{
		// _midiMessage = _midiPlugin.GetStatic<sbyte[]>(CMIDIIN_MidiMessage);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		NullCheck(L_7);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_8;
		L_8 = AndroidJavaObject_GetStatic_TisSByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_mE3F66AC293CE329D2B3BC8B9F4866623AA3F6C29(L_7, _stringLiteral43A371BA9EAD3F152A2D893D2C212EDBD64DB4D0, AndroidJavaObject_GetStatic_TisSByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_mE3F66AC293CE329D2B3BC8B9F4866623AA3F6C29_RuntimeMethod_var);
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessage_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessage_11), (void*)L_8);
		// if (_midiMessage == null) return 0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessage_11;
		V_3 = (bool)((((RuntimeObject*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		// if (_midiMessage == null) return 0;
		V_1 = 0;
		goto IL_0128;
	}

IL_0064:
	{
		// _midiMessageByte = _midiMessage.ToByte();
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_11 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessage_11;
		il2cpp_codegen_runtime_class_init_inline(ForieroEngineExtensions_t2EAA6E289E0B71711C758A884AA6562A249F7863_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = ForieroEngineExtensions_ToByte_mC9906595B0300BDFC30AF21A3F62BF4AF2B87F7B(L_11, NULL);
		((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12), (void*)L_12);
		// if (_midiMessageByte.Length <= 1) return 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_13);
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		// if (_midiMessageByte.Length <= 1) return 0;
		V_1 = 0;
		goto IL_0128;
	}

IL_008d:
	{
		// aMidiMessage.DeviceId = _midiMessageByte[0];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_15 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		L_15->___DeviceId_5 = L_18;
		// if(_midiMessageByte.Length == 4)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_19);
		V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) == ((int32_t)4))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00d3;
		}
	}
	{
		// aMidiMessage.CommandAndChannel = _midiMessageByte[1];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_21 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_22);
		int32_t L_23 = 1;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		L_21->___CommandAndChannel_0 = L_24;
		// aMidiMessage.Data1 = _midiMessageByte[2];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_25 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_26);
		int32_t L_27 = 2;
		uint8_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		L_25->___Data1_1 = L_28;
		// aMidiMessage.Data2 = _midiMessageByte[3];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_29 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_30);
		int32_t L_31 = 3;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		L_29->___Data2_2 = L_32;
	}

IL_00d3:
	{
		// aMidiMessage.DataSize = _midiMessageByte.Length - 1;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_33 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_34);
		L_33->___DataSize_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_34)->max_length)), 1));
		// aMidiMessage.Data = new byte[aMidiMessage.DataSize];
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_35 = ___aMidiMessage0;
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_36 = ___aMidiMessage0;
		int32_t L_37 = L_36->___DataSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_37);
		L_35->___Data_4 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___Data_4), (void*)L_38);
		// for (var i = 1; i < _midiMessageByte.Length; i++) { aMidiMessage.Data[i - 1] = _midiMessageByte[i]; }
		V_6 = 1;
		goto IL_0113;
	}

IL_00f8:
	{
		// for (var i = 1; i < _midiMessageByte.Length; i++) { aMidiMessage.Data[i - 1] = _midiMessageByte[i]; }
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_39 = ___aMidiMessage0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = L_39->___Data_4;
		int32_t L_41 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		int32_t L_43 = V_6;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_41, 1))), (uint8_t)L_45);
		// for (var i = 1; i < _midiMessageByte.Length; i++) { aMidiMessage.Data[i - 1] = _midiMessageByte[i]; }
		int32_t L_46 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0113:
	{
		// for (var i = 1; i < _midiMessageByte.Length; i++) { aMidiMessage.Data[i - 1] = _midiMessageByte[i]; }
		int32_t L_47 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiMessageByte_12;
		NullCheck(L_48);
		V_7 = (bool)((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))? 1 : 0);
		bool L_49 = V_7;
		if (L_49)
		{
			goto IL_00f8;
		}
	}
	{
		// return 1;
		V_1 = 1;
		goto IL_0128;
	}

IL_0128:
	{
		// }
		int32_t L_50 = V_1;
		return L_50;
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
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (!_isInitialized) return -1;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (!_isInitialized) return -1;
		V_1 = (-1);
		goto IL_0032;
	}

IL_0011:
	{
		// return _midiPlugin.Call<int>(CMIDIOUT_ConnectDevice, new object[] { deviceIndex });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___deviceIndex0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		int32_t L_8;
		L_8 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_2, _stringLiteral6C5FDF1937BC9A4D9C27A95437C19036532B2EB0, L_4, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
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
	bool V_0 = false;
	{
		// if (!_isInitialized) return;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (!_isInitialized) return;
		goto IL_002e;
	}

IL_000f:
	{
		// _midiPlugin.Call(CMIDIOUT_DisconnectDevice, new object[] { id });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___id0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral44ACD1FE59D6ECAE6C5C355170F9AD8F0A295AF4, L_4, NULL);
	}

IL_002e:
	{
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
	bool V_0 = false;
	{
		// if (!_isInitialized) return;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (!_isInitialized) return;
		goto IL_0024;
	}

IL_000f:
	{
		// _midiPlugin.Call(CMIDIOUT_DisconnectDevices);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralD483783AD1B0A3556D04C959A4DB869D3CE4A73E, L_3, NULL);
	}

IL_0024:
	{
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
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (!_isInitialized) return "";
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!_isInitialized) return "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0036;
	}

IL_0015:
	{
		// return _midiPlugin.Call<String>(CMIDIOUT_DeviceName, new object[] { deviceIndex });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___deviceIndex0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		String_t* L_8;
		L_8 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteral549E092FA757B20353BE7B6B56A82D9BDC5BB2CC, L_4, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		String_t* L_9 = V_1;
		return L_9;
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
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (!_isInitialized) return 0;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (!_isInitialized) return 0;
		V_1 = 0;
		goto IL_0028;
	}

IL_0011:
	{
		// return _midiPlugin.Call<int>(CMIDIOUT_DeviceCount);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_2, _stringLiteral9D21C5A7640248157EE9BF42D6074B11B3031C4C, L_3, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		int32_t L_5 = V_1;
		return L_5;
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
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// if (!_isInitialized) return -1;
		bool L_0 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____isInitialized_3;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (!_isInitialized) return -1;
		V_2 = (-1);
		goto IL_005d;
	}

IL_0011:
	{
		// int[] dst = new int[data.Length];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_0 = L_3;
		// for (var i = 0; i < data.Length;i++){ dst[i] = (int)data[i]; }
		V_3 = 0;
		goto IL_002a;
	}

IL_001e:
	{
		// for (var i = 0; i < data.Length;i++){ dst[i] = (int)data[i]; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___data0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_9);
		// for (var i = 0; i < data.Length;i++){ dst[i] = (int)data[i]; }
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002a:
	{
		// for (var i = 0; i < data.Length;i++){ dst[i] = (int)data[i]; }
		int32_t L_11 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___data0;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001e;
		}
	}
	{
		// _midiPlugin.Call(CMIDIOUT_SendData, new object[] { dst, deviceId });
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = ((MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_StaticFields*)il2cpp_codegen_static_fields_for(MidiPlugin_t069A8B6E80778479C20479CA02E5A2E8D7021AF4_il2cpp_TypeInfo_var))->____midiPlugin_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
		int32_t L_19 = ___deviceId1;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_21);
		NullCheck(L_14);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_14, _stringLiteral22F0D5E4C73FDB1CC93C433264B3EEB647FC8887, L_18, NULL);
		// return 1;
		V_2 = 1;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		int32_t L_22 = V_2;
		return L_22;
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
	int32_t V_0 = 0;
	{
		// public int PopMessage(out MidiMessage midiMessage, bool editor = false) { midiMessage = new MidiMessage(); return 0; }
		MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7* L_0 = ___midiMessage0;
		il2cpp_codegen_initobj(L_0, sizeof(MidiMessage_t119E2E388582DAC1CCED2BA853C33BFD225F48B7));
		// public int PopMessage(out MidiMessage midiMessage, bool editor = false) { midiMessage = new MidiMessage(); return 0; }
		V_0 = 0;
		goto IL_000c;
	}

IL_000c:
	{
		// public int PopMessage(out MidiMessage midiMessage, bool editor = false) { midiMessage = new MidiMessage(); return 0; }
		int32_t L_1 = V_0;
		return L_1;
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
	bool V_0 = false;
	{
		// if (!audioSourceBass24)
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// audioSourceBass24 = new GameObject("Bass24AudioSource").AddComponent<AudioSourceBass24>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral9D0D012E15EC76778603E614B27D347BC092EAB0, NULL);
		NullCheck(L_3);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_4;
		L_4 = GameObject_AddComponent_TisAudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303_m27C527DC61006832BD8E32F50E1D3A5CA7ECB691(L_3, GameObject_AddComponent_TisAudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303_m27C527DC61006832BD8E32F50E1D3A5CA7ECB691_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1), (void*)L_4);
		// UnityEngine.Object.DontDestroyOnLoad(audioSourceBass24.gameObject);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_5 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
	}

IL_0038:
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
	bool V_0 = false;
	{
		// if (!audioSourceBass24) return;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (!audioSourceBass24) return;
		goto IL_002a;
	}

IL_0014:
	{
		// UnityEngine.Object.Destroy(audioSourceBass24.gameObject);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_3 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// audioSourceBass24 = null;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1 = (AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1), (void*)(AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303*)NULL);
	}

IL_002a:
	{
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
	bool V_0 = false;
	{
		// if (!audioSourceBass24) return;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (!audioSourceBass24) return;
		goto IL_002c;
	}

IL_0014:
	{
		// audioSourceBass24.Init(clip, true);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_3 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = ___clip0;
		NullCheck(L_3);
		AudioSourceBass24_Init_mBB0FD86FD8981134ADB08052E1E7809C239B12EB(L_3, L_4, (bool)1, NULL);
		// audioSourceBass24.volume = volume;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_5 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		float L_6 = ___volume1;
		NullCheck(L_5);
		L_5->___volume_12 = L_6;
	}

IL_002c:
	{
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
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// if (midiStream == 0) return;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (midiStream == 0) return;
		goto IL_0153;
	}

IL_0012:
	{
		// if (recordingStream != 0)
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_2 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0;
		V_2 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogError("FileStream alread open. Seems like recording session is in the proccess!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1092046D2432FA58A38E8CF511BF553D9973668A, NULL);
		// return;
		goto IL_0153;
	}

IL_002f:
	{
		// var path = Recorders.Synth.fileName.PrependPersistentPath();
		il2cpp_codegen_runtime_class_init_inline(Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_StaticFields*)il2cpp_codegen_static_fields_for(Synth_tF6AA5A46607C2577E49899C712DBBAE8E804351F_il2cpp_TypeInfo_var))->___fileName_0;
		il2cpp_codegen_runtime_class_init_inline(ForieroEngineExtensions_t2EAA6E289E0B71711C758A884AA6562A249F7863_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = ForieroEngineExtensions_PrependPersistentPath_m1B0612959C76A78735CD9F644D195DDB43E2E5F7(L_4, NULL);
		V_0 = L_5;
		// Debug.Log("Saving : " + path);
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9BC08BED511D92683BA126F75A16D4E530CA6681, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// if (clip)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0107;
		}
	}
	{
		// CreateAudioSourceBass24();
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		BASS24SynthPlugin_CreateAudioSourceBass24_mE2BEF92287E68114E77EA1CF744295C27A06D5FB(NULL);
		// InitRecordingClip(clip, volume);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = ___clip0;
		float L_12 = ___volume1;
		BASS24SynthPlugin_InitRecordingClip_m22A7B48ACD9CC796C8A8329F9845D7CAE9E8E1D0(L_11, L_12, NULL);
		// audioSourceBass24.speed = speed;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_13 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		float L_14 = ___speed2;
		NullCheck(L_13);
		il2cpp_codegen_memory_barrier();
		L_13->___speed_9 = L_14;
		// audioSourceBass24.semitone = semitone;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_15 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		int32_t L_16 = ___semitone3;
		NullCheck(L_15);
		il2cpp_codegen_memory_barrier();
		L_15->___semitone_10 = L_16;
		// audioSourceBass24.Play();
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_17 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_17);
		AudioSourceBass24_Play_m3043DE22922D440A60CA4CA81B36CD62931EA92A(L_17, NULL);
		// if (!BassMix.BASS_Mixer_StreamAddChannel(mixerStream, audioSourceBass24.clipBass24.streamFX, BASSFlag.BASS_DEFAULT))
		int32_t L_18 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_19 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_19);
		AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* L_20;
		L_20 = AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = AudioClipBass24_get_streamFX_mF06BADA66EC1B910602C081525E1B3F6B88D82B4_inline(L_20, NULL);
		bool L_22;
		L_22 = BassMix_BASS_Mixer_StreamAddChannel_m4FEFD351DAAED588204EB86FE20A00C9BB3DB878(L_18, L_21, 0, NULL);
		V_4 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00d5;
		}
	}
	{
		// Debug.LogError("BassMix.BASS_Mixer_StreamAddChannel(mixerStream, audioSourceBass24.clipBass24.streamFX, BASSFlag.BASS_DEFAULT " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_5 = L_24;
		Il2CppFakeBox<int32_t> L_25(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_26;
		L_26 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_25), NULL);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2D2AF143890DFF0B9CFDFD4807F8D79958DCD17F, L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_27, NULL);
	}

IL_00d5:
	{
		// BassMix.BASS_Mixer_ChannelSetPosition(audioSourceBass24.clipBass24.streamFX, 0);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_28 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_28);
		AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* L_29;
		L_29 = AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline(L_28, NULL);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = AudioClipBass24_get_streamFX_mF06BADA66EC1B910602C081525E1B3F6B88D82B4_inline(L_29, NULL);
		bool L_31;
		L_31 = BassMix_BASS_Mixer_ChannelSetPosition_m1EBC698B2D523C9153521D1B92E026BA186AB296(L_30, ((int64_t)0), NULL);
		// recordingStream = BassEnc.BASS_Encode_Start(mixerStream, path, BASSEncode.BASS_ENCODE_PCM, null, System.IntPtr.Zero);
		int32_t L_32 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		String_t* L_33 = V_0;
		intptr_t L_34 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = BassEnc_BASS_Encode_Start_m54D13AA23812CD37CD37CFE7855C31F55CCF54E2(L_32, L_33, ((int32_t)64), (ENCODEPROC_t529AC7CECBB4A6C52A2BA99E73F40B65C1463423*)NULL, L_34, NULL);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0 = L_35;
		goto IL_0121;
	}

IL_0107:
	{
		// recordingStream = BassEnc.BASS_Encode_Start(midiStream, path, BASSEncode.BASS_ENCODE_PCM, null, System.IntPtr.Zero);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_36 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		String_t* L_37 = V_0;
		intptr_t L_38 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = BassEnc_BASS_Encode_Start_m54D13AA23812CD37CD37CFE7855C31F55CCF54E2(L_36, L_37, ((int32_t)64), (ENCODEPROC_t529AC7CECBB4A6C52A2BA99E73F40B65C1463423*)NULL, L_38, NULL);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0 = L_39;
	}

IL_0121:
	{
		// if (recordingStream == 0) Debug.LogError("BASS24 : BASS_Encode_Start " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_40 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0;
		V_6 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_6;
		if (!L_41)
		{
			goto IL_0153;
		}
	}
	{
		// if (recordingStream == 0) Debug.LogError("BASS24 : BASS_Encode_Start " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_5 = L_42;
		Il2CppFakeBox<int32_t> L_43(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_44;
		L_44 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_43), NULL);
		String_t* L_45;
		L_45 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral70C3208D68534E10EDDDDF84F2406FE55CFBB08A, L_44, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_45, NULL);
	}

IL_0153:
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
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* G_B9_0 = NULL;
	AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* G_B8_0 = NULL;
	{
		// if (recordingStream == 0) return;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (recordingStream == 0) return;
		goto IL_0068;
	}

IL_000f:
	{
		// BassEnc.BASS_Encode_Stop(recordingStream);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_2 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0;
		il2cpp_codegen_runtime_class_init_inline(BassEnc_t45AAAF82C43EF324522A59EE43E1220CB8585961_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BassEnc_BASS_Encode_Stop_m1253D2F1574202CD2B3222E5A0614512EC064793(L_2, NULL);
		// recordingStream = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___recordingStream_0 = 0;
		// if (audioSourceBass24 && audioSourceBass24.clipBass24 != null)
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_4 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_6 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_6);
		AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* L_7;
		L_7 = AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline(L_6, NULL);
		G_B5_0 = ((!(((RuntimeObject*)(AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// BassMix.BASS_Mixer_ChannelRemove(audioSourceBass24.clipBass24.streamFX);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_9 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		NullCheck(L_9);
		AudioClipBass24_t598CEC55E524C4DCACD86B3EB7EB97079CDAFD71* L_10;
		L_10 = AudioSourceBass24_get_clipBass24_mA08A4E12355DAB028C24DBB5329928492F3B1806_inline(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = AudioClipBass24_get_streamFX_mF06BADA66EC1B910602C081525E1B3F6B88D82B4_inline(L_10, NULL);
		bool L_12;
		L_12 = BassMix_BASS_Mixer_ChannelRemove_m10060426656E788BC557910731217BDBF5AF4B03(L_11, NULL);
	}

IL_0057:
	{
		// audioSourceBass24?.Stop();
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_13 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___audioSourceBass24_1;
		AudioSourceBass24_t71EA7A145A80CACA05CBAEDF1F85E4100BB66303* L_14 = L_13;
		G_B8_0 = L_14;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0062;
		}
	}
	{
		goto IL_0068;
	}

IL_0062:
	{
		NullCheck(G_B9_0);
		AudioSourceBass24_Stop_mA6EC7A0B8960B7585C46C4881FEA3BEB35AB10A1(G_B9_0, NULL);
	}

IL_0068:
	{
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
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	{
		// if (midiStream != 0)
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		V_3 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return 1;
		V_4 = 1;
		goto IL_037b;
	}

IL_0016:
	{
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | BASS24NETSynth - Start : " + freq.ToString() + " " + channels.ToString());
		il2cpp_codegen_runtime_class_init_inline(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = MIDISettings_get_IsDebug_m40FF4D03A775F32E7B19A859459131597B5D0D26(NULL);
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | BASS24NETSynth - Start : " + freq.ToString() + " " + channels.ToString());
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___freq0), NULL);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___channels1), NULL);
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral3CD345253F9878B88276F1C2C5A91911C419FF5B, L_4, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0044:
	{
		// sampleRate = freq;
		int32_t L_7 = ___freq0;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___sampleRate_5 = L_7;
		// MIDISoundSettings.Init();
		MIDISoundSettings_Init_m06E70FA98A19AE50645DA9D4C4730667BEBD9D9F((-1), NULL);
		// if (string.IsNullOrEmpty(MIDISettings.soundFontPersistentPath))
		il2cpp_codegen_runtime_class_init_inline(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var);
		String_t* L_8 = ((MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_StaticFields*)il2cpp_codegen_static_fields_for(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var))->___soundFontPersistentPath_6;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		V_6 = L_9;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// return 0;
		V_4 = 0;
		goto IL_037b;
	}

IL_006a:
	{
		// bool sampleFloat = true;
		V_0 = (bool)1;
		// midiStream = BassMidi.BASS_MIDI_StreamCreate(channels, BASSFlag.BASS_STREAM_DECODE | BASSFlag.BASS_SAMPLE_FLOAT, freq);
		int32_t L_11 = ___channels1;
		int32_t L_12 = ___freq0;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = BassMidi_BASS_MIDI_StreamCreate_m8F1B006FFE5773C06006F5FFBCB6FE663760C685(L_11, ((int32_t)2097408), L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3 = L_13;
		// if (midiStream == 0 && Bass.BASS_ErrorGetCode() == BASSError.BASS_ERROR_FORMAT)
		int32_t L_14 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		if (L_14)
		{
			goto IL_008e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		G_B9_0 = ((((int32_t)L_15) == ((int32_t)6))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B9_0 = 0;
	}

IL_008f:
	{
		V_7 = (bool)G_B9_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00fb;
		}
	}
	{
		// midiStream = BassMidi.BASS_MIDI_StreamCreate(channels, BASSFlag.BASS_STREAM_DECODE, freq);
		int32_t L_17 = ___channels1;
		int32_t L_18 = ___freq0;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = BassMidi_BASS_MIDI_StreamCreate_m8F1B006FFE5773C06006F5FFBCB6FE663760C685(L_17, ((int32_t)2097152), L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3 = L_19;
		// if (midiStream == 0)
		int32_t L_20 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		V_8 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_00e2;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BassMidi.BASS_MIDI_StreamCreate " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_9 = L_22;
		Il2CppFakeBox<int32_t> L_23(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_24;
		L_24 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_23), NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral96E86163C1CCBE54182D19B366160B9DDA8B6B5A, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_25, NULL);
		// return 0;
		V_4 = 0;
		goto IL_037b;
	}

IL_00e2:
	{
		// sampleFloat = false;
		V_0 = (bool)0;
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | Bass channels are 16bit non-floatable.");
		il2cpp_codegen_runtime_class_init_inline(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = MIDISettings_get_IsDebug_m40FF4D03A775F32E7B19A859459131597B5D0D26(NULL);
		V_10 = L_26;
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_00fa;
		}
	}
	{
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | Bass channels are 16bit non-floatable.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD0304E037333ADD63DA958D216D2258D971E7A2C, NULL);
	}

IL_00fa:
	{
	}

IL_00fb:
	{
		// mixerStream = BassMix.BASS_Mixer_StreamCreate(sampleRate, 2, sampleFloat ? BASSFlag.BASS_SAMPLE_FLOAT : 0);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_28 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___sampleRate_5;
		bool L_29 = V_0;
		G_B16_0 = 2;
		G_B16_1 = L_28;
		if (L_29)
		{
			G_B17_0 = 2;
			G_B17_1 = L_28;
			goto IL_0107;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_010c;
	}

IL_0107:
	{
		G_B18_0 = ((int32_t)256);
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_010c:
	{
		int32_t L_30;
		L_30 = BassMix_BASS_Mixer_StreamCreate_mD222A1F472C854BF44135ABFE3087F8330856A3D(G_B18_2, G_B18_1, G_B18_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4 = L_30;
		// if (mixerStream == 0)
		int32_t L_31 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		V_11 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_11;
		if (!L_32)
		{
			goto IL_0151;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BassMix.BASS_Mixer_StreamCreate " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_9 = L_33;
		Il2CppFakeBox<int32_t> L_34(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_35;
		L_35 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_34), NULL);
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3107BBA8540BCCB08501B1DE01852D9BE4CBCDC2, L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_36, NULL);
		// return 0;
		V_4 = 0;
		goto IL_037b;
	}

IL_0151:
	{
		// if (midiStream == 0)
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_37 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		V_12 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_018c;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_MIDI_StreamCreate " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_9 = L_39;
		Il2CppFakeBox<int32_t> L_40(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_41;
		L_41 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_40), NULL);
		String_t* L_42;
		L_42 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5A7D5B62ECF2AEDF540C508125DBC431BBA3EE74, L_41, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_42, NULL);
		// return 0;
		V_4 = 0;
		goto IL_037b;
	}

IL_018c:
	{
		// Bass.BASS_ChannelSetSync(midiStream, BASSSync.BASS_SYNC_MIDI_EVENT | BASSSync.BASS_SYNC_MIXTIME, (long)BASSMIDIEvent.MIDI_EVENT_PROGRAM, null, System.IntPtr.Zero);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_43 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		intptr_t L_44 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_45;
		L_45 = Bass_BASS_ChannelSetSync_m53A003EA5B2C64BDFB8EDAA38EE0699917605987(L_43, ((int32_t)1073807364), ((int64_t)2), (SYNCPROC_t3FD6564C701F16D9C8D0E6FBFF31D453A73DFCAC*)NULL, L_44, NULL);
		// Bass.BASS_ChannelSetAttribute(midiStream, BASSAttribute.BASS_ATTRIB_NOBUFFER, 1);
		int32_t L_46 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		bool L_47;
		L_47 = Bass_BASS_ChannelSetAttribute_m723556DB77F9C70AEFD8D9259BC72945D69F97BE(L_46, 5, (1.0f), NULL);
		// int newSoundFont = BassMidi.BASS_MIDI_FontInit(MIDISettings.soundFontPersistentPath);
		il2cpp_codegen_runtime_class_init_inline(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var);
		String_t* L_48 = ((MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_StaticFields*)il2cpp_codegen_static_fields_for(MIDISettings_t5712C711FDBF36BCBBD34868FC067E907B65666E_il2cpp_TypeInfo_var))->___soundFontPersistentPath_6;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		int32_t L_49;
		L_49 = BassMidi_BASS_MIDI_FontInit_mA1FB533F47501867175E039FD7A7FB1E78F7BCA2(L_48, NULL);
		V_1 = L_49;
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | BASS_MIDI_FontInit : " + newSoundFont.ToString());
		bool L_50;
		L_50 = MIDISettings_get_IsDebug_m40FF4D03A775F32E7B19A859459131597B5D0D26(NULL);
		V_13 = L_50;
		bool L_51 = V_13;
		if (!L_51)
		{
			goto IL_01e2;
		}
	}
	{
		// if (MIDISettings.IsDebug) Debug.Log("MU | BASS24 | BASS_MIDI_FontInit : " + newSoundFont.ToString());
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_53;
		L_53 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9EA1779715C3B398E93C925B7FE0872BE6BC7385, L_52, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_53, NULL);
	}

IL_01e2:
	{
		// if (!BassMidi.BASS_MIDI_FontSetVolume(newSoundFont, 2f))
		int32_t L_54 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = BassMidi_BASS_MIDI_FontSetVolume_mDBF437DCE84B001B8BF04244875FB778CB2A18A2(L_54, (2.0f), NULL);
		V_14 = (bool)((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0223;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_MIDI_FontSetVolume " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_57;
		L_57 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_9 = L_57;
		Il2CppFakeBox<int32_t> L_58(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_59;
		L_59 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_58), NULL);
		String_t* L_60;
		L_60 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5EDCDAA07CE9C5D2FDE677FF61317300F043F7D5, L_59, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_60, NULL);
		// return 0;
		V_4 = 0;
		goto IL_037b;
	}

IL_0223:
	{
		// BASS_MIDI_FONT bassMidiFont = new BASS_MIDI_FONT();
		il2cpp_codegen_initobj((&V_2), sizeof(BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7));
		// bassMidiFont.font = newSoundFont;
		int32_t L_61 = V_1;
		(&V_2)->___font_0 = L_61;
		// bassMidiFont.preset = -1;
		(&V_2)->___preset_1 = (-1);
		// bassMidiFont.bank = 0;
		(&V_2)->___bank_2 = 0;
		// if (!BassMidi.BASS_MIDI_StreamSetFonts(0, new BASS_MIDI_FONT[] { bassMidiFont }, 1))
		BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB* L_62 = (BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB*)(BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB*)SZArrayNew(BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB_il2cpp_TypeInfo_var, (uint32_t)1);
		BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB* L_63 = L_62;
		BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 L_64 = V_2;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7)L_64);
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = BassMidi_BASS_MIDI_StreamSetFonts_m8FDC0DF697634635FA92B9C2FE828E15833BBA84(0, L_63, 1, NULL);
		V_15 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_028f;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_MIDI_StreamSetFonts " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_67;
		L_67 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_9 = L_67;
		Il2CppFakeBox<int32_t> L_68(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_69;
		L_69 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_68), NULL);
		String_t* L_70;
		L_70 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6B11AA0B5D8E692323923F7AE908FEEC38913467, L_69, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_70, NULL);
		// return 0;
		V_4 = 0;
		goto IL_037b;
	}

IL_028f:
	{
		// if (!BassMidi.BASS_MIDI_StreamSetFonts(midiStream, new BASS_MIDI_FONT[] { bassMidiFont }, 1))
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_71 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB* L_72 = (BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB*)(BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB*)SZArrayNew(BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB_il2cpp_TypeInfo_var, (uint32_t)1);
		BASS_MIDI_FONTU5BU5D_tBDBB6BAE3744391A31F83F0F035B87E53D43F0CB* L_73 = L_72;
		BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7 L_74 = V_2;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (BASS_MIDI_FONT_t51BFCA6CBA24D93D9CF0140A55A567F6D78768A7)L_74);
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = BassMidi_BASS_MIDI_StreamSetFonts_m8FDC0DF697634635FA92B9C2FE828E15833BBA84(L_71, L_73, 1, NULL);
		V_16 = (bool)((((int32_t)L_75) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_16;
		if (!L_76)
		{
			goto IL_02de;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_MIDI_StreamSetFonts " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_77;
		L_77 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_9 = L_77;
		Il2CppFakeBox<int32_t> L_78(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_79;
		L_79 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_78), NULL);
		String_t* L_80;
		L_80 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6B11AA0B5D8E692323923F7AE908FEEC38913467, L_79, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_80, NULL);
		// return 0;
		V_4 = 0;
		goto IL_037b;
	}

IL_02de:
	{
		// if (!BassMidi.BASS_MIDI_FontFree(soundFont))
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_81 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___soundFont_2;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = BassMidi_BASS_MIDI_FontFree_mEFEBEBC5C26356C5CB8CC19AF1599EE17545B717(L_81, NULL);
		V_17 = (bool)((((int32_t)L_82) == ((int32_t)0))? 1 : 0);
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_02f3;
		}
	}
	{
	}

IL_02f3:
	{
		// soundFont = newSoundFont;
		int32_t L_84 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___soundFont_2 = L_84;
		// if (!BassMix.BASS_Mixer_StreamAddChannel(mixerStream, midiStream, BASSFlag.BASS_DEFAULT))
		int32_t L_85 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		int32_t L_86 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		bool L_87;
		L_87 = BassMix_BASS_Mixer_StreamAddChannel_m4FEFD351DAAED588204EB86FE20A00C9BB3DB878(L_85, L_86, 0, NULL);
		V_18 = (bool)((((int32_t)L_87) == ((int32_t)0))? 1 : 0);
		bool L_88 = V_18;
		if (!L_88)
		{
			goto IL_0338;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BassMix.BASS_Mixer_StreamAddChannel(mixerStream, midiStream, BASSFlag.BASS_DEFAULT " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_89;
		L_89 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_9 = L_89;
		Il2CppFakeBox<int32_t> L_90(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_91;
		L_91 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_90), NULL);
		String_t* L_92;
		L_92 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral12B871CDB68C91018FA0666FBFABF1FBC025A5E5, L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_92, NULL);
	}

IL_0338:
	{
		// if (!Bass.BASS_ChannelPlay(mixerStream, false))
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_93 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = Bass_BASS_ChannelPlay_mC64237181A39FD1AD4271B103DDD94D6530449B4(L_93, (bool)0, NULL);
		V_19 = (bool)((((int32_t)L_94) == ((int32_t)0))? 1 : 0);
		bool L_95 = V_19;
		if (!L_95)
		{
			goto IL_0376;
		}
	}
	{
		// Debug.LogError("MU | BASS24 | BASS_ChannelPlay " + Bass.BASS_ErrorGetCode().ToString());
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		int32_t L_96;
		L_96 = Bass_BASS_ErrorGetCode_m2EFD1BDDAE3048E92EC25D36016AE2F7D929098F(NULL);
		V_9 = L_96;
		Il2CppFakeBox<int32_t> L_97(BASSError_tD83C613B4D0401FD33BAA18974B1542DBD47EAC5_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_98;
		L_98 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_97), NULL);
		String_t* L_99;
		L_99 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB1D90842ECCB57CAF36F53172C3AC044CD8772B7, L_98, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_99, NULL);
		// return 0;
		V_4 = 0;
		goto IL_037b;
	}

IL_0376:
	{
		// return 1;
		V_4 = 1;
		goto IL_037b;
	}

IL_037b:
	{
		// }
		int32_t L_100 = V_4;
		return L_100;
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
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (mixerStream == 0) return 0;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (mixerStream == 0) return 0;
		V_1 = 0;
		goto IL_0067;
	}

IL_0011:
	{
		// StopRecording();
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		BASS24SynthPlugin_StopRecording_m9722A47CC1A57237F2BC0D6FCC9C080C4A6F8C12(NULL);
		// if (midiStream != 0)
		int32_t L_2 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		V_2 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// BassMix.BASS_Mixer_ChannelRemove(midiStream);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_4 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		bool L_5;
		L_5 = BassMix_BASS_Mixer_ChannelRemove_m10060426656E788BC557910731217BDBF5AF4B03(L_4, NULL);
		// Bass.BASS_StreamFree(midiStream);
		int32_t L_6 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Bass_BASS_StreamFree_m84D2A17D0E4530A6867124FDB385C6E8E42CBDDE(L_6, NULL);
		// midiStream = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3 = 0;
	}

IL_0041:
	{
		// Bass.BASS_ChannelStop(mixerStream);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_8 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		il2cpp_codegen_runtime_class_init_inline(Bass_t5B37DE0F8D0792AE47A0C7238DD79CD012409D4B_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Bass_BASS_ChannelStop_mF9A9313E884972806824672B36A409E4678BBAB3(L_8, NULL);
		// Bass.BASS_StreamFree(mixerStream);
		int32_t L_10 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4;
		bool L_11;
		L_11 = Bass_BASS_StreamFree_m84D2A17D0E4530A6867124FDB385C6E8E42CBDDE(L_10, NULL);
		// mixerStream = 0;
		((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___mixerStream_4 = 0;
		// DestroyAudioSource();
		BASS24SynthPlugin_DestroyAudioSource_m3A5E670D3BFA5FC6A6AA585494EC54567E6EB185(NULL);
		// return 1;
		V_1 = 1;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
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
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// if (midiStream == 0) return 0;
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (midiStream == 0) return 0;
		V_4 = 0;
		goto IL_0067;
	}

IL_0012:
	{
		// byte[] events = { (byte)Command, (byte)Data1, (byte)Data2 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		int32_t L_4 = ___Command0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_3;
		int32_t L_6 = ___Data11;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_5;
		int32_t L_8 = ___Data22;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)L_8));
		V_0 = L_7;
		// int size = Marshal.SizeOf(events[0]) * events.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC(L_11, Marshal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7AB12E9316F73FF78004C146AEF4D4616F3A7DEC_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_13);
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// IntPtr p = Marshal.AllocHGlobal(size);
		int32_t L_14 = V_1;
		intptr_t L_15;
		L_15 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_14, NULL);
		V_2 = L_15;
		// Marshal.Copy(events, 0, p, events.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		intptr_t L_17 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		NullCheck(L_18);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_16, 0, L_17, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		// BassMidi.BASS_MIDI_StreamEvents(midiStream, BASSMIDIEventMode.BASS_MIDI_EVENTS_RAW | BASSMIDIEventMode.BASS_MIDI_EVENTS_NORSTATUS, 0, p, 3);
		il2cpp_codegen_runtime_class_init_inline(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_StaticFields*)il2cpp_codegen_static_fields_for(BASS24SynthPlugin_t94CF46A5DC8D5F1FB6A95F999C3584FE74059475_il2cpp_TypeInfo_var))->___midiStream_3;
		intptr_t L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BassMidi_tE0C23D720EF3975FEC1D0AA772692F097564C319_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = BassMidi_BASS_MIDI_StreamEvents_m6E4D15E18F89B724C10BFFE766E8BBEA308A5A43(L_19, ((int32_t)33619968), 0, L_20, 3, NULL);
		// Marshal.FreeHGlobal(p);
		intptr_t L_22 = V_2;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_22, NULL);
		// return 1;
		V_4 = 1;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		int32_t L_23 = V_4;
		return L_23;
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
			goto IL_002c;
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
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiButtons_set_Id_mA2DADCECEC0AB1B86913F4886D31F82BCBD4E548_inline (MidiButtons_t830F7B74B213FDC7EA9802905DA8C25A3BD72ED3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiFaders_set_Id_mEE5BA581C67BEAA4D9999A4DFD90D333E20D67E7_inline (MidiFaders_tE2AB00C5D4F260EB29A5C454B2F8C897B03EAFBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiKeys_set_Id_m3B5D909EDAD5546BA48BE958CC61E2EC9FC0C286_inline (MidiKeys_t7F0A91DBB8D80E88714337D50D3BB36A4078DC77* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiKnobs_set_Id_mDCC9B8445FB1A756866E92DC7EA2FE4C23B16D1F_inline (MidiKnobs_t6937011DFC0F68FBF5C476761B9EFB96D9871449* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MidiPercussions_set_Id_m55F9C61F2F785AAAC0EC58E8F232FBA8DFA9E69F_inline (MidiPercussions_t51CF16D66292228134A6E7D03403ADC621494627* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; } = "";
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TimeProviders_get_iTimeProvider_m8ADF77CDB7A11C6DD0E90CD0FAEF9D6A19A10335_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ITimeProvider iTimeProvider { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->___U3CiTimeProviderU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeProviders_set_iTimeProvider_m59DD0F700685D83C7CAAB9D241667E5D37C8D717_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ITimeProvider iTimeProvider { get; private set; }
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var);
		((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->___U3CiTimeProviderU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_StaticFields*)il2cpp_codegen_static_fields_for(TimeProviders_t4D25BC6380920503A7FEFCB65846B715D47490B0_il2cpp_TypeInfo_var))->___U3CiTimeProviderU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___item0;
		((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
