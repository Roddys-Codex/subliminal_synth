#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.IComparer`1<AudioHelm.Note>
struct IComparer_1_t468E5614B35BD78FB7E458BD519CB992FFB3350E;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.IComparer`1<AudioHelm.Sequencer/NotePosition>
struct IComparer_1_t785178218C9E9D3657A8734FB99BEC8230E57D77;
// System.Collections.Generic.IEnumerable`1<AudioHelm.Note>
struct IEnumerable_1_t80DC0A473E34AB72458F7A0BAD3309AD7C83933A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IList`1<AudioHelm.Note>
struct IList_1_tF65EAFA63B9E2AA687BBEDC83656DAB575F3E73E;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.SortedList`2/KeyList<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>
struct KeyList_t01CF0D0048B8C0C0FB0003B1461F830CECF98E3D;
// System.Collections.Generic.SortedList`2/KeyList<AudioHelm.Sequencer/NotePosition,System.Object>
struct KeyList_t018984F0A21E5CFF8E35EB492E43EF52B39A5FC1;
// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_t0EDD1795F87849390F5CA17CBABE75183BE4E235;
// System.Collections.Generic.List`1<AudioHelm.Keyzone>
struct List_1_tE3F0C904204F5C4191A68CD16AB4A94AC16E33D8;
// System.Collections.Generic.List`1<AudioHelm.Note>
struct List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<AudioHelm.Sampler/ActiveNote>
struct List_1_tD666A415E18FD7649AAE78ABA3FE61844D81D4D1;
// System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>
struct SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB;
// System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>
struct SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<AudioHelm.Note>
struct UnityEvent_1_t8A3E615D0BD5BEF9FE317EBAC9DE401F480BAF4C;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Collections.Generic.SortedList`2/ValueList<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>
struct ValueList_t2D748A0A711B77BF66A472245EC4B6B63CA7A95B;
// System.Collections.Generic.SortedList`2/ValueList<AudioHelm.Sequencer/NotePosition,System.Object>
struct ValueList_t90FB8322E52667C009B114D0FCD293E36B0C2455;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// AudioHelm.Note[]
struct NoteU5BU5D_tC974B8C8FF64935B55212ABF7078B9D01DDE9E6E;
// AudioHelm.NoteRow[]
struct NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// AudioHelm.Sequencer/NotePosition[]
struct NotePositionU5BU5D_t17488CB427217A0EF9DEE1FEF369E0354F3C3837;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioHelm.AudioHelmClock
struct AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// AudioHelm.MidiFile
struct MidiFile_t4521CB115F4B4F4ECA7F1ACB3BC1EF568B926D49;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// AudioHelm.Note
struct Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5;
// AudioHelm.NoteRow
struct NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// AudioHelm.SampleSequencer
struct SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F;
// AudioHelm.Sampler
struct Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// AudioHelm.Sequencer
struct Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// AudioHelm.AudioHelmClock/ResetAction
struct ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837;
// AudioHelm.MidiFile/MidiData
struct MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9;
// AudioHelm.Note/NoteAction
struct NoteAction_t1A3F3FBBF674C5D7AA78406CBBAEDBAEB11C767A;
// AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28
struct U3CTurnVoiceOffInSecondsU3Ed__28_t287E122AD8CB38348CD26F172AD897776B2F6577;
// AudioHelm.Sampler/ActiveNote
struct ActiveNote_tC1958E5F58B8FBD7E898AC5845B4CE4939FCED25;
// AudioHelm.Sequencer/BeatAction
struct BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01;
// AudioHelm.Sequencer/BeatEvent
struct BeatEvent_t1052A86A9495FFA74394195F101E2A9B04769404;
// AudioHelm.Sequencer/NoteAction
struct NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149;
// AudioHelm.Sequencer/NoteComparer
struct NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95;
// AudioHelm.Sequencer/NoteEvent
struct NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692;
// AudioHelm.Sequencer/NotePositionComparer
struct NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tF65EAFA63B9E2AA687BBEDC83656DAB575F3E73E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4A08879A9977151E4797D24BB524732CB9BCB472CDAE95C8DA19BF6330C5B32E_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral8011C15B830276E7F4E6B48C91EEF932D506E005;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m5E0D09AC978584DBC94A5B92C339910ECFCE5A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mDEF417D768A1B200A1E809DF828587B802DC74FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9900814BE6375E848ADD7176341C88F91B83466E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_ContainsKey_mCB1FA8DA7315FF4560AD07D3E10CEC205EC50968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_IndexOfKey_mABE88AC0DED9250609DA83C0CBE09C87C68C8A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2__ctor_mC98F2F4B7EB439FEF8BBC1C849AF901CBD49DCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_get_Count_mC8FD1DB5ABB273A79EC5EC552F7B8A563C6B6ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedList_2_get_Values_m12E8E853C562C5C4CA250DFCF7E8C6CD7A433BE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTurnVoiceOffInSecondsU3Ed__28_System_Collections_IEnumerator_Reset_mFCD24F1FAA26BD614B2D8F97208919A7E5BF6305_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7F44B1C9813D8161ACA01483698D086A35645E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_t0EDD1795F87849390F5CA17CBABE75183BE4E235  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0EDD1795F87849390F5CA17CBABE75183BE4E235_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<AudioHelm.Note>
struct List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NoteU5BU5D_tC974B8C8FF64935B55212ABF7078B9D01DDE9E6E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NoteU5BU5D_tC974B8C8FF64935B55212ABF7078B9D01DDE9E6E* ___s_emptyArray_5;
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

// System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>
struct SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB  : public RuntimeObject
{
	// TKey[] System.Collections.Generic.SortedList`2::keys
	NotePositionU5BU5D_t17488CB427217A0EF9DEE1FEF369E0354F3C3837* ___keys_0;
	// TValue[] System.Collections.Generic.SortedList`2::values
	NoteU5BU5D_tC974B8C8FF64935B55212ABF7078B9D01DDE9E6E* ___values_1;
	// System.Int32 System.Collections.Generic.SortedList`2::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.SortedList`2::version
	int32_t ___version_3;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedList`2::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.Generic.SortedList`2/KeyList<TKey,TValue> System.Collections.Generic.SortedList`2::keyList
	KeyList_t01CF0D0048B8C0C0FB0003B1461F830CECF98E3D* ___keyList_5;
	// System.Collections.Generic.SortedList`2/ValueList<TKey,TValue> System.Collections.Generic.SortedList`2::valueList
	ValueList_t2D748A0A711B77BF66A472245EC4B6B63CA7A95B* ___valueList_6;
	// System.Object System.Collections.Generic.SortedList`2::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

// System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>
struct SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C  : public RuntimeObject
{
	// TKey[] System.Collections.Generic.SortedList`2::keys
	NotePositionU5BU5D_t17488CB427217A0EF9DEE1FEF369E0354F3C3837* ___keys_0;
	// TValue[] System.Collections.Generic.SortedList`2::values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values_1;
	// System.Int32 System.Collections.Generic.SortedList`2::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.SortedList`2::version
	int32_t ___version_3;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedList`2::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.Generic.SortedList`2/KeyList<TKey,TValue> System.Collections.Generic.SortedList`2::keyList
	KeyList_t018984F0A21E5CFF8E35EB492E43EF52B39A5FC1* ___keyList_5;
	// System.Collections.Generic.SortedList`2/ValueList<TKey,TValue> System.Collections.Generic.SortedList`2::valueList
	ValueList_t90FB8322E52667C009B114D0FCD293E36B0C2455* ___valueList_6;
	// System.Object System.Collections.Generic.SortedList`2::_syncRoot
	RuntimeObject* ____syncRoot_7;
};
struct Il2CppArrayBounds;

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// AudioHelm.NoteRow
struct NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.NoteRow::notes
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* ___notes_0;
	// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.NoteRow::oldNotes
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* ___oldNotes_1;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// AudioHelm.Utils
struct Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370  : public RuntimeObject
{
};

struct Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_StaticFields
{
	// System.Boolean[] AudioHelm.Utils::blackKeys
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___blackKeys_8;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AudioHelm.MidiFile/MidiData
struct MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9  : public RuntimeObject
{
	// System.Int32 AudioHelm.MidiFile/MidiData::length
	int32_t ___length_0;
	// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.MidiFile/MidiData::notes
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* ___notes_1;
};

// AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28
struct U3CTurnVoiceOffInSecondsU3Ed__28_t287E122AD8CB38348CD26F172AD897776B2F6577  : public RuntimeObject
{
	// System.Int32 AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::seconds
	float ___seconds_2;
	// AudioHelm.Sampler AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::<>4__this
	Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* ___U3CU3E4__this_3;
	// System.Int32 AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::note
	int32_t ___note_4;
};

// AudioHelm.Sampler/ActiveNote
struct ActiveNote_tC1958E5F58B8FBD7E898AC5845B4CE4939FCED25  : public RuntimeObject
{
	// System.Int32 AudioHelm.Sampler/ActiveNote::note
	int32_t ___note_0;
	// System.Collections.Generic.List`1<UnityEngine.AudioSource> AudioHelm.Sampler/ActiveNote::audioSources
	List_1_t0EDD1795F87849390F5CA17CBABE75183BE4E235* ___audioSources_1;
	// System.Double AudioHelm.Sampler/ActiveNote::startTime
	double ___startTime_2;
};

// AudioHelm.Sequencer/NoteComparer
struct NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95  : public RuntimeObject
{
};

// AudioHelm.Sequencer/NotePositionComparer
struct NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<AudioHelm.Note>
struct Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ____current_3;
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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<AudioHelm.Note>
struct UnityEvent_1_t8A3E615D0BD5BEF9FE317EBAC9DE401F480BAF4C  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2__padding[28];
	};
};
#pragma pack(pop, tp)

// AudioHelm.Sequencer/NotePosition
struct NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 
{
	// System.Single AudioHelm.Sequencer/NotePosition::position_
	float ___position__0;
	// System.Int32 AudioHelm.Sequencer/NotePosition::note_
	int32_t ___note__1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::09AF04F188DA6CBBE6F117E504417F8F4DAED939C1C0FA827CF435A0054484A7
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___09AF04F188DA6CBBE6F117E504417F8F4DAED939C1C0FA827CF435A0054484A7_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::4A08879A9977151E4797D24BB524732CB9BCB472CDAE95C8DA19BF6330C5B32E
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___4A08879A9977151E4797D24BB524732CB9BCB472CDAE95C8DA19BF6330C5B32E_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::96B3BB4F0A1E3414130FF502F359044B8FA9AA04BEAA6078429A63FDEBB56280
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___96B3BB4F0A1E3414130FF502F359044B8FA9AA04BEAA6078429A63FDEBB56280_2;
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

// AudioHelm.Note
struct Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5  : public RuntimeObject
{
	// AudioHelm.Note/NoteAction AudioHelm.Note::OnNoteOn
	NoteAction_t1A3F3FBBF674C5D7AA78406CBBAEDBAEB11C767A* ___OnNoteOn_0;
	// AudioHelm.Note/NoteAction AudioHelm.Note::OnNoteOff
	NoteAction_t1A3F3FBBF674C5D7AA78406CBBAEDBAEB11C767A* ___OnNoteOff_1;
	// System.Int32 AudioHelm.Note::note_
	int32_t ___note__2;
	// System.Single AudioHelm.Note::start_
	float ___start__3;
	// System.Single AudioHelm.Note::end_
	float ___end__4;
	// System.Single AudioHelm.Note::velocity_
	float ___velocity__5;
	// AudioHelm.Sequencer AudioHelm.Note::parent
	Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* ___parent_6;
	// System.IntPtr AudioHelm.Note::reference
	intptr_t ___reference_7;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// AudioHelm.Sequencer/BeatEvent
struct BeatEvent_t1052A86A9495FFA74394195F101E2A9B04769404  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// AudioHelm.Sequencer/NoteEvent
struct NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692  : public UnityEvent_1_t8A3E615D0BD5BEF9FE317EBAC9DE401F480BAF4C
{
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// AudioHelm.AudioHelmClock/ResetAction
struct ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837  : public MulticastDelegate_t
{
};

// AudioHelm.Sequencer/BeatAction
struct BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01  : public MulticastDelegate_t
{
};

// AudioHelm.Sequencer/NoteAction
struct NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioHelm.AudioHelmClock
struct AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AudioHelm.AudioHelmClock/ResetAction AudioHelm.AudioHelmClock::OnReset
	ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837* ___OnReset_11;
	// System.Single AudioHelm.AudioHelmClock::bpm_
	float ___bpm__12;
	// System.Boolean AudioHelm.AudioHelmClock::pause_
	bool ___pause__13;
};

struct AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_StaticFields
{
	// System.Single AudioHelm.AudioHelmClock::globalBpm
	float ___globalBpm_4;
	// System.Boolean AudioHelm.AudioHelmClock::globalPause
	bool ___globalPause_5;
	// System.Double AudioHelm.AudioHelmClock::globalBeatTime
	double ___globalBeatTime_6;
	// System.Double AudioHelm.AudioHelmClock::lastSampledTime
	double ___lastSampledTime_7;
	// AudioHelm.AudioHelmClock AudioHelm.AudioHelmClock::singleton
	AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* ___singleton_8;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// AudioHelm.MidiFile
struct MidiFile_t4521CB115F4B4F4ECA7F1ACB3BC1EF568B926D49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Object AudioHelm.MidiFile::midiObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___midiObject_4;
	// AudioHelm.MidiFile/MidiData AudioHelm.MidiFile::midiData
	MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* ___midiData_5;
};

// AudioHelm.Sampler
struct Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<AudioHelm.Keyzone> AudioHelm.Sampler::keyzones
	List_1_tE3F0C904204F5C4191A68CD16AB4A94AC16E33D8* ___keyzones_4;
	// AudioHelm.Sampler/KeyzonePlayMode AudioHelm.Sampler::keyzonePlayMode
	int32_t ___keyzonePlayMode_5;
	// System.Single AudioHelm.Sampler::velocityTracking
	float ___velocityTracking_6;
	// System.Int32 AudioHelm.Sampler::numVoices
	int32_t ___numVoices_7;
	// System.Boolean AudioHelm.Sampler::useNoteOff_
	bool ___useNoteOff__8;
	// System.Int32 AudioHelm.Sampler::audioIndex
	int32_t ___audioIndex_9;
	// System.Collections.Generic.List`1<AudioHelm.Sampler/ActiveNote> AudioHelm.Sampler::activeNotes
	List_1_tD666A415E18FD7649AAE78ABA3FE61844D81D4D1* ___activeNotes_10;
};

// AudioHelm.Sequencer
struct Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AudioHelm.Sequencer/NoteAction AudioHelm.Sequencer::OnNoteOn
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* ___OnNoteOn_4;
	// AudioHelm.Sequencer/NoteAction AudioHelm.Sequencer::OnNoteOff
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* ___OnNoteOff_5;
	// AudioHelm.Sequencer/BeatAction AudioHelm.Sequencer::OnBeat
	BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* ___OnBeat_6;
	// AudioHelm.Sequencer/NoteEvent AudioHelm.Sequencer::noteOnEvent
	NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692* ___noteOnEvent_7;
	// AudioHelm.Sequencer/NoteEvent AudioHelm.Sequencer::noteOffEvent
	NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692* ___noteOffEvent_8;
	// AudioHelm.Sequencer/BeatEvent AudioHelm.Sequencer::beatEvent
	BeatEvent_t1052A86A9495FFA74394195F101E2A9B04769404* ___beatEvent_9;
	// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.Sequencer::activeNotes
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* ___activeNotes_10;
	// System.Int32 AudioHelm.Sequencer::length
	int32_t ___length_11;
	// System.Int32 AudioHelm.Sequencer::currentIndex
	int32_t ___currentIndex_12;
	// System.Boolean AudioHelm.Sequencer::loop
	bool ___loop_13;
	// System.Double AudioHelm.Sequencer::beatTime
	double ___beatTime_14;
	// System.Boolean AudioHelm.Sequencer::paused
	bool ___paused_15;
	// AudioHelm.NoteRow[] AudioHelm.Sequencer::allNotes
	NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* ___allNotes_16;
	// UnityEngine.Vector2 AudioHelm.Sequencer::scrollPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollPosition_17;
	// System.Boolean AudioHelm.Sequencer::autoScroll
	bool ___autoScroll_18;
	// AudioHelm.Sequencer/Division AudioHelm.Sequencer::division
	int32_t ___division_19;
	// System.Single AudioHelm.Sequencer::zoom
	float ___zoom_20;
	// System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note> AudioHelm.Sequencer::sortedNoteOns
	SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* ___sortedNoteOns_23;
	// System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note> AudioHelm.Sequencer::sortedNoteOffs
	SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* ___sortedNoteOffs_24;
	// System.Single AudioHelm.Sequencer::lastSequencerPosition
	float ___lastSequencerPosition_25;
	// System.Boolean AudioHelm.Sequencer::waitTillNextCycle
	bool ___waitTillNextCycle_26;
	// System.Int32 AudioHelm.Sequencer::numCycles
	int32_t ___numCycles_27;
};

struct Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_StaticFields
{
	// AudioHelm.Sequencer/NoteComparer AudioHelm.Sequencer::noteComparer
	NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95* ___noteComparer_21;
	// AudioHelm.Sequencer/NotePositionComparer AudioHelm.Sequencer::notePositionComparer
	NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23* ___notePositionComparer_22;
};

// AudioHelm.SampleSequencer
struct SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F  : public Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD
{
	// System.Double AudioHelm.SampleSequencer::lastWindowTime
	double ___lastWindowTime_28;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// AudioHelm.NoteRow[]
struct NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D  : public RuntimeArray
{
	ALIGN_FIELD (8) NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* m_Items[1];

	inline NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_Remove_mDD2E77BC952932F644F4F44D68D25B67B3B64AE1_gshared (SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C* __this, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsKey_m07E7BBD0C8F3CC0AD251F96623BE4820714A2700_gshared (SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C* __this, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Add_mB0B174971A8034D138C3B58AD6DAD33AC377488C_gshared (SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C* __this, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Clear_mA34AC38BB7584FAF5D48265D280F0E5F19ED54AB_gshared (SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TValue> System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Values_m82F1DF8C16B7B048B3EE566AF20168228AF2A04A_gshared (SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4204C143D97E871DF2553329CFB0FBE3CD1A01F2_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>::IndexOfKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfKey_m8380164E790A6CD5E7EB24C82817D3A59A1774C9_gshared (SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C* __this, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m68D9CE1522DBA7B7FE370F51E4C5DF3BB89471EB_gshared_inline (SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_m8B45F708B7E76AB06126D73EBA9B473C90AF9A30_gshared (SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sampler::DoNoteOff(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler_DoNoteOff_m3DBDB6CF4D3D833100AA66D89D7A2CAB2551F3C2 (Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* __this, int32_t ___note0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::InitNoteRows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_InitNoteRows_m4943C064B759F08FF03B41F7D2E99FF96D482B0A (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::UpdateBeatTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_UpdateBeatTime_m2EFFCAE1EF183B8A06D8CDF79C05C7542EBD9097 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Double AudioHelm.Sequencer::GetSequencerTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Sequencer_GetSequencerTime_mA1FAB948CEB66DC72295C59B02A7E639C2C4A14D (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Single AudioHelm.Sequencer::GetSixteenthTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sequencer_GetSixteenthTime_m955CDE8129C67AD1B50D6594F9DD5439B83E629E (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_OnEnable_m08A2BA92A93C9B61FF565025B159AC0A1B44A904 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_OnDisable_m12559A8DC5DC3C319E678D4A3F4708734C0DD5B4 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AudioHelm.Sampler>()
inline Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void AudioHelm.Sampler::AllNotesOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler_AllNotesOff_m6BF0999EF8A54BD766CE930BCDC25BDF5FD13E9A (Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::AllNotesOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_AllNotesOff_mB5AF22F1A307A00ABE8C2BE1831F465AA04770CD (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sampler::NoteOn(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler_NoteOn_m81936F2EEA0ACF3B5EB2E98D9739E51085809BF5 (Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* __this, int32_t ___note0, float ___velocity1, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sampler::NoteOff(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler_NoteOff_mB0B7B984471A1CDE3CDE42F541497C22C3FCF6F6 (Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* __this, int32_t ___note0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::WaitForNextCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_WaitForNextCycle_m019AA14EEE717A1CEE9D647F82F98C7F4594AB3A (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.SampleSequencer::DoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_DoUpdate_mBA563115098C313702364EAF920509EB17AF8F85 (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.AudioSettings::get_dspTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA (const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::UpdatePosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_UpdatePosition_m13309995BBA5460FFEEAC9032BF9B3209171DCEA (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, bool ___sendEvents0, const RuntimeMethod* method) ;
// System.Boolean AudioHelm.AudioHelmClock::GetGlobalPause()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioHelmClock_GetGlobalPause_m12137577170507977C2F3485F205C234AEB482AA_inline (const RuntimeMethod* method) ;
// System.Double AudioHelm.Sequencer::GetSequencerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Sequencer_GetSequencerPosition_m5D647BB7E70CE21D23D6E5DFCA802EF1E9B491CA (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Boolean AudioHelm.Sequencer::WaitingForNextCycle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Sequencer_WaitingForNextCycle_m8AC748C5559A14475E97C4A9FA0F63E3DE0D84D7_inline (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.Sequencer::GetAllNoteOnsInRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* Sequencer_GetAllNoteOnsInRange_m5E60E7E10C7B8251BE53540888C6A4881645024A (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, float ___start0, float ___end1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<AudioHelm.Note>::GetEnumerator()
inline Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025 (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<AudioHelm.Note>::Dispose()
inline void Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C (Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<AudioHelm.Note>::get_Current()
inline Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline (Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03* __this, const RuntimeMethod* method)
{
	return ((  Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* (*) (Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Single AudioHelm.Note::get_start()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// System.Single AudioHelm.Note::get_end()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Note_get_end_m687BFB68CA5FFF0690CF7582C92BF5EAB597C439_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// System.Int32 AudioHelm.Note::get_note()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// System.Single AudioHelm.Note::get_velocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Note_get_velocity_mA62FCB00EC6DB619C38F704984B109BDA745EDDE_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sampler::NoteOnScheduled(System.Int32,System.Single,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler_NoteOnScheduled_mB40C28FF6BE60687780F8C0060FC44D9E0754425 (Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* __this, int32_t ___note0, float ___velocity1, double ___timeToStart2, double ___timeToEnd3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<AudioHelm.Note>::MoveNext()
inline bool Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761 (Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void AudioHelm.Sequencer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer__ctor_mAF7B7C7CC6DBB4DB01E25932627FCE7897D543C1 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer/NoteAction::Invoke(AudioHelm.Note)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_inline (NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<AudioHelm.Note>::Invoke(T0)
inline void UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA (UnityEvent_1_t8A3E615D0BD5BEF9FE317EBAC9DE401F480BAF4C* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8A3E615D0BD5BEF9FE317EBAC9DE401F480BAF4C*, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void AudioHelm.Note::TriggerNoteOffEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_TriggerNoteOffEvent_m3565E88D2BC5CDDA03C19F0B4D9911717B931F9B (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AudioHelm.Note>::Clear()
inline void List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_inline (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// AudioHelm.AudioHelmClock AudioHelm.AudioHelmClock::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* AudioHelmClock_GetInstance_mC31E75AD2E875E767B1C27E6A242C34D65EDF6FB_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void AudioHelm.AudioHelmClock/ResetAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetAction__ctor_mC2EF7812E9BD012F1E97DE85140D416774CBD447 (ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void AudioHelm.AudioHelmClock::add_OnReset(AudioHelm.AudioHelmClock/ResetAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHelmClock_add_OnReset_m84A60DB3D0C07849F22D21D1DF35E756B108D123 (AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* __this, ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837* ___value0, const RuntimeMethod* method) ;
// System.Void AudioHelm.AudioHelmClock::remove_OnReset(AudioHelm.AudioHelmClock/ResetAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHelmClock_remove_OnReset_m3D348EBC45FD6742D4DA4A859F1A23A3C2CC4AEF (AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* __this, ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837* ___value0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer/NotePosition::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E (NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3* __this, float ___position0, int32_t ___note1, const RuntimeMethod* method) ;
// AudioHelm.Sequencer/NotePosition AudioHelm.Sequencer::NoteOnPosition(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 Sequencer_NoteOnPosition_mFE56B5D69F8520D53881BE7F9A4AC211723946A0 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>::Remove(TKey)
inline bool SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658 (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* __this, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3, const RuntimeMethod*))SortedList_2_Remove_mDD2E77BC952932F644F4F44D68D25B67B3B64AE1_gshared)(__this, ___key0, method);
}
// AudioHelm.Sequencer/NotePosition AudioHelm.Sequencer::NoteOffPosition(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 Sequencer_NoteOffPosition_m75A780792547CFEC50F34C18DB8C942219907121 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>::ContainsKey(TKey)
inline bool SortedList_2_ContainsKey_mCB1FA8DA7315FF4560AD07D3E10CEC205EC50968 (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* __this, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3, const RuntimeMethod*))SortedList_2_ContainsKey_m07E7BBD0C8F3CC0AD251F96623BE4820714A2700_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>::Add(TKey,TValue)
inline void SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* __this, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___key0, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, const RuntimeMethod*))SortedList_2_Add_mB0B174971A8034D138C3B58AD6DAD33AC377488C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>::Clear()
inline void SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798 (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*, const RuntimeMethod*))SortedList_2_Clear_mA34AC38BB7584FAF5D48265D280F0E5F19ED54AB_gshared)(__this, method);
}
// System.Void AudioHelm.NoteRow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteRow__ctor_m08488830D740BCB3848B0416707447D9E3BA6521 (NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::AddSortedNoteEvents(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_AddSortedNoteEvents_m98C12FDDE1453EFF5DF34ADD590615D10793F8E7 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<AudioHelm.Note>::Remove(T)
inline bool List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835 (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<AudioHelm.Note>::Add(T)
inline void List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_inline (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void AudioHelm.Sequencer::RemoveSortedNoteEvents(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_RemoveSortedNoteEvents_m13D86E7A3A7057450F0DE0367DC44132B1AA6294 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Note::TryDelete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_TryDelete_m1C189F33AE94C68E438E29B004A2875428526303 (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// AudioHelm.Note AudioHelm.Sequencer::GetNoteInRange(System.Int32,System.Single,System.Single,AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* Sequencer_GetNoteInRange_mEF668ACE4A72F54726CDBACC46990EE692C9EDF8 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___ignore3, const RuntimeMethod* method) ;
// System.Boolean AudioHelm.Note::OverlapsRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Note_OverlapsRange_mD8B1C6604AED7620D39B86FD5B00169B26DA40C7 (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, float ___rangeStart0, float ___rangeEnd1, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TValue> System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>::get_Values()
inline RuntimeObject* SortedList_2_get_Values_m12E8E853C562C5C4CA250DFCF7E8C6CD7A433BE4 (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*, const RuntimeMethod*))SortedList_2_get_Values_m82F1DF8C16B7B048B3EE566AF20168228AF2A04A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<AudioHelm.Note>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m9900814BE6375E848ADD7176341C88F91B83466E (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.Sequencer::GetAllNoteEventsInRange(System.Single,System.Single,System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* Sequencer_GetAllNoteEventsInRange_mCCFEBABECF57CA0569AA3C3AC81D43F3E6F2EA07 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, float ___start0, float ___end1, SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* ___events2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AudioHelm.Note>::.ctor()
inline void List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971 (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void AudioHelm.Sequencer::RemoveNote(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_RemoveNote_m924EEFA398434F0015084C5B9AB3DBA1B79B88FF (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) ;
// System.Boolean AudioHelm.Note::InsideRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Note_InsideRange_mAA6D9D5BBB23313503C1ABD5CE198C0D141A3462 (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, float ___rangeStart0, float ___rangeEnd1, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::RemoveNotesContainedInRange(System.Int32,System.Single,System.Single,AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_RemoveNotesContainedInRange_m66231AAFF6DA51DE9C223E810D6E3C6339E38BEB (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___ignore3, const RuntimeMethod* method) ;
// System.Void AudioHelm.Note::RemoveRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_RemoveRange_m047B0A490E91955D61B346ECB21D65FF27585890 (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, float ___rangeStart0, float ___rangeEnd1, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::ClampNotesInRange(System.Int32,System.Single,System.Single,AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_ClampNotesInRange_mA935E2900F94F386A966877FA051671C34D21032 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___ignore3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void AudioHelm.Note::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note__ctor_m2351FC4DF22CF5A198D57CC0C8B9799F918C2E0B (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Note::set_note(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_set_note_mAC7299BEB24006B97185038223DF2A8960E2D7CF (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Note::set_start(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_set_start_m6D22A8E1E4832D3A6FA990CE34EDED5C157AB511 (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Note::set_end(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_set_end_mAF6FEE024F6C6BDA95E6882516050F57073FF62F (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Note::set_velocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_set_velocity_mF932A4B3BE304F3FD2CB588ADF05B546D501B2CA (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Note::TryCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_TryCreate_mA4A0EAA199ECEBA986112EA70ABFF92B9F18691C (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AudioHelm.Note>::Sort(System.Collections.Generic.IComparer`1<T>)
inline void List_1_Sort_mDEF417D768A1B200A1E809DF828587B802DC74FD (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m4204C143D97E871DF2553329CFB0FBE3CD1A01F2_gshared)(__this, ___comparer0, method);
}
// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.Sequencer::GetAllNotes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* Sequencer_GetAllNotes_m9F54203DBEFDB4B1CC1F6ED2EFD9F2B46291A1FE (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AudioHelm.Note>::Reverse()
inline void List_1_Reverse_m5E0D09AC978584DBC94A5B92C339910ECFCE5A00 (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, const RuntimeMethod*))List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared)(__this, method);
}
// System.Void AudioHelm.Sequencer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_Clear_m01EA28C1D53A45422C93648ADDFC30EAF40FAC3E (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// AudioHelm.Note AudioHelm.Sequencer::AddNote(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* Sequencer_AddNote_mC177601677C811B7AD3D60F0B22C096CB4725B60 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, float ___velocity3, const RuntimeMethod* method) ;
// AudioHelm.MidiFile/MidiData AudioHelm.MidiFile::LoadMidiData(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* MidiFile_LoadMidiData_m761077CAC81F388892A7A7FCAD49C6C618A91C3B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___midiStream0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::ReadMidiData(AudioHelm.MidiFile/MidiData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_ReadMidiData_m4B17F29872831583EF047008A560184AB1E957FA (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* ___midiData0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single AudioHelm.AudioHelmClock::GetGlobalBpm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AudioHelmClock_GetGlobalBpm_m8915DE2D7797D354E693C86439EBF7D732049A46_inline (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>::IndexOfKey(TKey)
inline int32_t SortedList_2_IndexOfKey_mABE88AC0DED9250609DA83C0CBE09C87C68C8A44 (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* __this, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3, const RuntimeMethod*))SortedList_2_IndexOfKey_m8380164E790A6CD5E7EB24C82817D3A59A1774C9_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>::get_Count()
inline int32_t SortedList_2_get_Count_mC8FD1DB5ABB273A79EC5EC552F7B8A563C6B6ED4_inline (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*, const RuntimeMethod*))SortedList_2_get_Count_m68D9CE1522DBA7B7FE370F51E4C5DF3BB89471EB_gshared_inline)(__this, method);
}
// System.Single AudioHelm.Sequencer::GetDivisionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sequencer_GetDivisionLength_m7DF88F076FF152596F09AE3CB663C8D14AEDC1CE (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer/BeatAction::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_inline (BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared)(__this, ___arg00, method);
}
// System.Double AudioHelm.AudioHelmClock::GetGlobalBeatTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioHelmClock_GetGlobalBeatTime_mC1A0686A725CC97F01C1D53F9B07F366144D12D9_inline (const RuntimeMethod* method) ;
// System.Double AudioHelm.AudioHelmClock::GetLastSampledTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioHelmClock_GetLastSampledTime_m77C0A89BBB432FF26CB5663450C006EDCB6DA3E2_inline (const RuntimeMethod* method) ;
// System.Void AudioHelm.Note::TriggerNoteOnEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_TriggerNoteOnEvent_mD8368E8E8002C6C8A7BFBD3A95C54A537C214FD6 (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::UpdateIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_UpdateIndex_mB719A0E37606F3482A8B3B0817256E98C2749FC8 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.Sequencer::GetAllNoteOffsInRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* Sequencer_GetAllNoteOffsInRange_m2B2546F3501C0A4B4A3FE9031D75CC407F9E3AE9 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, float ___start0, float ___end1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<AudioHelm.Note>::get_Item(System.Int32)
inline Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void AudioHelm.Sequencer::SendNoteOn(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_SendNoteOn_m300B2AAD625AFA4C10C183054A40F23963365641 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer::SendNoteOff(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_SendNoteOff_m4AC65123825CA782DF270AF1255A0C9A8DA8B106 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<AudioHelm.Note>::get_Count()
inline int32_t List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_inline (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
inline void SortedList_2__ctor_mC98F2F4B7EB439FEF8BBC1C849AF901CBD49DCD9 (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*, RuntimeObject*, const RuntimeMethod*))SortedList_2__ctor_m8B45F708B7E76AB06126D73EBA9B473C90AF9A30_gshared)(__this, ___comparer0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer/NoteComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteComparer__ctor_m0112540E80F00C227C107A38B88CF8AE7333E0E9 (NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer/NotePositionComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotePositionComparer__ctor_m931C85E3DBDCD8B48D535907BEF23D88923D272C (NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<AudioHelm.Note>::.ctor()
inline void UnityEvent_1__ctor_m7F44B1C9813D8161ACA01483698D086A35645E55 (UnityEvent_1_t8A3E615D0BD5BEF9FE317EBAC9DE401F480BAF4C* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8A3E615D0BD5BEF9FE317EBAC9DE401F480BAF4C*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, const RuntimeMethod*))UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared)(__this, method);
}
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mEACF8FD7BFDFBD76EB8FC7E438B3AF19DB57BC6D (const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioHelm.Sampler/ActiveNote::.ctor(System.Int32,System.Collections.Generic.List`1<UnityEngine.AudioSource>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveNote__ctor_m8B5B94EFAE986E3F308F1BDEB34EEC6A49A75D6F (ActiveNote_tC1958E5F58B8FBD7E898AC5845B4CE4939FCED25* __this, int32_t ___n0, List_1_t0EDD1795F87849390F5CA17CBABE75183BE4E235* ___sources1, double ___start2, const RuntimeMethod* method) 
{
	{
		// public ActiveNote(int n, List<AudioSource> sources, double start)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// note = n;
		int32_t L_0 = ___n0;
		__this->___note_0 = L_0;
		// audioSources = sources;
		List_1_t0EDD1795F87849390F5CA17CBABE75183BE4E235* L_1 = ___sources1;
		__this->___audioSources_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSources_1), (void*)L_1);
		// startTime = start;
		double L_2 = ___start2;
		__this->___startTime_2 = L_2;
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
// System.Void AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnVoiceOffInSecondsU3Ed__28__ctor_mD6EA966EB0D22C9B892406786F578C8856580BF8 (U3CTurnVoiceOffInSecondsU3Ed__28_t287E122AD8CB38348CD26F172AD897776B2F6577* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnVoiceOffInSecondsU3Ed__28_System_IDisposable_Dispose_m04B1D5F64FE6614AB2902E4F718B752A6629309F (U3CTurnVoiceOffInSecondsU3Ed__28_t287E122AD8CB38348CD26F172AD897776B2F6577* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTurnVoiceOffInSecondsU3Ed__28_MoveNext_mA3D8DEBEAB4BD174ECF0D6360E09D1D762D3BFAD (U3CTurnVoiceOffInSecondsU3Ed__28_t287E122AD8CB38348CD26F172AD897776B2F6577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(seconds);
		float L_4 = __this->___seconds_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// DoNoteOff(note);
		Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* L_6 = V_1;
		int32_t L_7 = __this->___note_4;
		NullCheck(L_6);
		Sampler_DoNoteOff_m3DBDB6CF4D3D833100AA66D89D7A2CAB2551F3C2(L_6, L_7, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTurnVoiceOffInSecondsU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF0C5DACF1B1096ED3A186694488D740AC93755B8 (U3CTurnVoiceOffInSecondsU3Ed__28_t287E122AD8CB38348CD26F172AD897776B2F6577* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnVoiceOffInSecondsU3Ed__28_System_Collections_IEnumerator_Reset_mFCD24F1FAA26BD614B2D8F97208919A7E5BF6305 (U3CTurnVoiceOffInSecondsU3Ed__28_t287E122AD8CB38348CD26F172AD897776B2F6577* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTurnVoiceOffInSecondsU3Ed__28_System_Collections_IEnumerator_Reset_mFCD24F1FAA26BD614B2D8F97208919A7E5BF6305_RuntimeMethod_var)));
	}
}
// System.Object AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTurnVoiceOffInSecondsU3Ed__28_System_Collections_IEnumerator_get_Current_m162495A25217B95A281C862228D80E99E8AB8F12 (U3CTurnVoiceOffInSecondsU3Ed__28_t287E122AD8CB38348CD26F172AD897776B2F6577* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void AudioHelm.SampleSequencer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_Awake_m50D4E89279917AB4C442FC93DCED956BD0606643 (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	{
		// InitNoteRows();
		Sequencer_InitNoteRows_m4943C064B759F08FF03B41F7D2E99FF96D482B0A(__this, NULL);
		// AllNotesOff();
		VirtualActionInvoker0::Invoke(9 /* System.Void AudioHelm.Sequencer::AllNotesOff() */, __this);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_Start_m60DE0B77146A9B0C5B14C5E584DB908EB79097E1 (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// UpdateBeatTime();
		Sequencer_UpdateBeatTime_m2EFFCAE1EF183B8A06D8CDF79C05C7542EBD9097(__this, NULL);
		// double position = GetSequencerTime();
		double L_0;
		L_0 = Sequencer_GetSequencerTime_mA1FAB948CEB66DC72295C59B02A7E639C2C4A14D(__this, NULL);
		V_0 = L_0;
		// lastWindowTime = position + lookaheadTime / GetSixteenthTime();
		double L_1 = V_0;
		float L_2;
		L_2 = Sequencer_GetSixteenthTime_m955CDE8129C67AD1B50D6594F9DD5439B83E629E(__this, NULL);
		__this->___lastWindowTime_28 = ((double)il2cpp_codegen_add(L_1, ((double)((float)((0.100000001f)/L_2)))));
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_OnDestroy_mF6C7F3ADA24A0A3157D687AEAA6FB3803C28E8E3 (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	{
		// AllNotesOff();
		VirtualActionInvoker0::Invoke(9 /* System.Void AudioHelm.Sequencer::AllNotesOff() */, __this);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_OnEnable_m7ED506B1FC3ED35A33671D7FDB82C6733C33871D (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// base.OnEnable();
		Sequencer_OnEnable_m08A2BA92A93C9B61FF565025B159AC0A1B44A904(__this, NULL);
		// double position = GetSequencerTime();
		double L_0;
		L_0 = Sequencer_GetSequencerTime_mA1FAB948CEB66DC72295C59B02A7E639C2C4A14D(__this, NULL);
		V_0 = L_0;
		// lastWindowTime = position + lookaheadTime / GetSixteenthTime();
		double L_1 = V_0;
		float L_2;
		L_2 = Sequencer_GetSixteenthTime_m955CDE8129C67AD1B50D6594F9DD5439B83E629E(__this, NULL);
		__this->___lastWindowTime_28 = ((double)il2cpp_codegen_add(L_1, ((double)((float)((0.100000001f)/L_2)))));
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_OnDisable_m904390442FDC9106635E20CE287BD5ACB136949A (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	{
		// base.OnDisable();
		Sequencer_OnDisable_m12559A8DC5DC3C319E678D4A3F4708734C0DD5B4(__this, NULL);
		// AllNotesOff();
		VirtualActionInvoker0::Invoke(9 /* System.Void AudioHelm.Sequencer::AllNotesOff() */, __this);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::AllNotesOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_AllNotesOff_m23DB57E6BB208405FA32B8B705804F08D439B7C1 (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Sampler>().AllNotesOff();
		Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* L_0;
		L_0 = Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944(__this, Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944_RuntimeMethod_var);
		NullCheck(L_0);
		Sampler_AllNotesOff_m6BF0999EF8A54BD766CE930BCDC25BDF5FD13E9A(L_0, NULL);
		// base.AllNotesOff();
		Sequencer_AllNotesOff_mB5AF22F1A307A00ABE8C2BE1831F465AA04770CD(__this, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::NoteOn(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_NoteOn_m565E4EB7088832CD280C7D2328B51D654F64A007 (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, int32_t ___note0, float ___velocity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Sampler>().NoteOn(note, velocity);
		Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* L_0;
		L_0 = Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944(__this, Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944_RuntimeMethod_var);
		int32_t L_1 = ___note0;
		float L_2 = ___velocity1;
		NullCheck(L_0);
		Sampler_NoteOn_m81936F2EEA0ACF3B5EB2E98D9739E51085809BF5(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::NoteOff(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_NoteOff_mEEA323909449EA888E7009FD013CCD6D7DA6DBAF (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, int32_t ___note0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Sampler>().NoteOff(note);
		Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* L_0;
		L_0 = Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944(__this, Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944_RuntimeMethod_var);
		int32_t L_1 = ___note0;
		NullCheck(L_0);
		Sampler_NoteOff_mB0B7B984471A1CDE3CDE42F541497C22C3FCF6F6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::EnableComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_EnableComponent_mC3857303A3879E553B9148835834ED98C644AA3B (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	{
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::StartOnNextCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_StartOnNextCycle_m3D40EA54605BF1C750FEA903296A3E1F85B3A3BB (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	{
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// WaitForNextCycle();
		Sequencer_WaitForNextCycle_m019AA14EEE717A1CEE9D647F82F98C7F4594AB3A(__this, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_FixedUpdate_m4978E3609AC851EEBD2A099907569D0DD5BD86AD (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	{
		// DoUpdate();
		SampleSequencer_DoUpdate_mBA563115098C313702364EAF920509EB17AF8F85(__this, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_Update_m4F64FA4BA65FCF85CFFEAC361556DA2D0E5B1001 (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	{
		// DoUpdate();
		SampleSequencer_DoUpdate_mBA563115098C313702364EAF920509EB17AF8F85(__this, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::DoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer_DoUpdate_mBA563115098C313702364EAF920509EB17AF8F85 (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	float V_1 = 0.0f;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_9 = NULL;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	{
		// double updateStartTime = AudioSettings.dspTime;
		double L_0;
		L_0 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		V_0 = L_0;
		// UpdatePosition();
		Sequencer_UpdatePosition_m13309995BBA5460FFEEAC9032BF9B3209171DCEA(__this, (bool)1, NULL);
		// if (AudioHelmClock.GetGlobalPause())
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AudioHelmClock_GetGlobalPause_m12137577170507977C2F3485F205C234AEB482AA_inline(NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// double position = GetSequencerTime();
		double L_2;
		L_2 = Sequencer_GetSequencerTime_mA1FAB948CEB66DC72295C59B02A7E639C2C4A14D(__this, NULL);
		// float sixteenthTime = GetSixteenthTime();
		float L_3;
		L_3 = Sequencer_GetSixteenthTime_m955CDE8129C67AD1B50D6594F9DD5439B83E629E(__this, NULL);
		V_1 = L_3;
		// double currentTime = GetSequencerPosition() * sixteenthTime;
		double L_4;
		L_4 = Sequencer_GetSequencerPosition_m5D647BB7E70CE21D23D6E5DFCA802EF1E9B491CA(__this, NULL);
		float L_5 = V_1;
		V_2 = ((double)il2cpp_codegen_multiply(L_4, ((double)L_5)));
		// double sequencerTime = length * sixteenthTime;
		int32_t L_6 = ((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD*)__this)->___length_11;
		float L_7 = V_1;
		V_3 = ((double)((float)il2cpp_codegen_multiply(((float)L_6), L_7)));
		// double windowMax = position + lookaheadTime / sixteenthTime;
		float L_8 = V_1;
		V_4 = ((double)il2cpp_codegen_add(L_2, ((double)((float)((0.100000001f)/L_8)))));
		// if (windowMax <= lastWindowTime)
		double L_9 = V_4;
		double L_10 = __this->___lastWindowTime_28;
		if ((!(((double)L_9) <= ((double)L_10))))
		{
			goto IL_0055;
		}
	}
	{
		// lastWindowTime = windowMax;
		double L_11 = V_4;
		__this->___lastWindowTime_28 = L_11;
		// return;
		return;
	}

IL_0055:
	{
		// if (WaitingForNextCycle())
		bool L_12;
		L_12 = Sequencer_WaitingForNextCycle_m8AC748C5559A14475E97C4A9FA0F63E3DE0D84D7_inline(__this, NULL);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		// lastWindowTime = windowMax;
		double L_13 = V_4;
		__this->___lastWindowTime_28 = L_13;
		// return;
		return;
	}

IL_0066:
	{
		// double internalLastWindowMax = Mathf.Repeat((float)lastWindowTime, length);
		double L_14 = __this->___lastWindowTime_28;
		int32_t L_15 = ((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD*)__this)->___length_11;
		float L_16;
		L_16 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)L_14), ((float)L_15), NULL);
		V_5 = ((double)L_16);
		// double internalWindowMax = Mathf.Repeat((float)windowMax, length);
		double L_17 = V_4;
		int32_t L_18 = ((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD*)__this)->___length_11;
		float L_19;
		L_19 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)L_17), ((float)L_18), NULL);
		// float startSearch = (float)internalLastWindowMax;
		double L_20 = V_5;
		V_6 = ((float)L_20);
		// float endSearch = (float)internalWindowMax;
		V_7 = ((float)((double)L_19));
		// List<Note> notes = GetAllNoteOnsInRange(startSearch, endSearch);
		float L_21 = V_6;
		float L_22 = V_7;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_23;
		L_23 = Sequencer_GetAllNoteOnsInRange_m5E60E7E10C7B8251BE53540888C6A4881645024A(__this, L_21, L_22, NULL);
		// foreach (Note note in notes)
		NullCheck(L_23);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_24;
		L_24 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_23, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_8 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0112:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_8), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0107_1;
			}

IL_00a7_1:
			{
				// foreach (Note note in notes)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_25;
				L_25 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_8), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				V_9 = L_25;
				// double startTime = sixteenthTime * note.start;
				float L_26 = V_1;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_27 = V_9;
				NullCheck(L_27);
				float L_28;
				L_28 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_27, NULL);
				V_10 = ((double)((float)il2cpp_codegen_multiply(L_26, L_28)));
				// if (startTime < currentTime)
				double L_29 = V_10;
				double L_30 = V_2;
				if ((!(((double)L_29) < ((double)L_30))))
				{
					goto IL_00c7_1;
				}
			}
			{
				// startTime += sequencerTime;
				double L_31 = V_10;
				double L_32 = V_3;
				V_10 = ((double)il2cpp_codegen_add(L_31, L_32));
			}

IL_00c7_1:
			{
				// double endTime = startTime + sixteenthTime * (note.end - note.start);
				double L_33 = V_10;
				float L_34 = V_1;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_35 = V_9;
				NullCheck(L_35);
				float L_36;
				L_36 = Note_get_end_m687BFB68CA5FFF0690CF7582C92BF5EAB597C439_inline(L_35, NULL);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_37 = V_9;
				NullCheck(L_37);
				float L_38;
				L_38 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_37, NULL);
				// double timeToStart = startTime - currentTime + updateStartTime;
				double L_39 = V_10;
				double L_40 = V_2;
				double L_41 = V_0;
				V_11 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_39, L_40)), L_41));
				// double timeToEnd = endTime - currentTime + updateStartTime;
				double L_42 = V_2;
				double L_43 = V_0;
				V_12 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_33, ((double)((float)il2cpp_codegen_multiply(L_34, ((float)il2cpp_codegen_subtract(L_36, L_38))))))), L_42)), L_43));
				// GetComponent<Sampler>().NoteOnScheduled(note.note, note.velocity, timeToStart, timeToEnd);
				Sampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49* L_44;
				L_44 = Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944(__this, Component_GetComponent_TisSampler_tC023C7EE0644B0C484E2DA3F3065CA5A54FACA49_m950AAC79EF3278D6111DF1EF99CBCCF41A6C7944_RuntimeMethod_var);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_45 = V_9;
				NullCheck(L_45);
				int32_t L_46;
				L_46 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_45, NULL);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_47 = V_9;
				NullCheck(L_47);
				float L_48;
				L_48 = Note_get_velocity_mA62FCB00EC6DB619C38F704984B109BDA745EDDE_inline(L_47, NULL);
				double L_49 = V_11;
				double L_50 = V_12;
				NullCheck(L_44);
				Sampler_NoteOnScheduled_mB40C28FF6BE60687780F8C0060FC44D9E0754425(L_44, L_46, L_48, L_49, L_50, NULL);
			}

IL_0107_1:
			{
				// foreach (Note note in notes)
				bool L_51;
				L_51 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_8), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_51)
				{
					goto IL_00a7_1;
				}
			}
			{
				goto IL_0120;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0120:
	{
		// lastWindowTime = windowMax;
		double L_52 = V_4;
		__this->___lastWindowTime_28 = L_52;
		// }
		return;
	}
}
// System.Void AudioHelm.SampleSequencer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSequencer__ctor_m7A10384A132B1E25BFA7E25F1D0B50D8850420FE (SampleSequencer_tA89927463C47905E12B17D77D88CC8CC7E1DD36F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// double lastWindowTime = -0.01;
		__this->___lastWindowTime_28 = (-0.01);
		il2cpp_codegen_runtime_class_init_inline(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var);
		Sequencer__ctor_mAF7B7C7CC6DBB4DB01E25932627FCE7897D543C1(__this, NULL);
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
// System.Void AudioHelm.Sequencer::add_OnNoteOn(AudioHelm.Sequencer/NoteAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_add_OnNoteOn_mB0FB918A2D4DD928963E82EE0400B48FBB66DACC (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_0 = NULL;
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_1 = NULL;
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_2 = NULL;
	{
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_0 = __this->___OnNoteOn_4;
		V_0 = L_0;
	}

IL_0007:
	{
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_1 = V_0;
		V_1 = L_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_2 = V_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)CastclassSealed((RuntimeObject*)L_4, NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149_il2cpp_TypeInfo_var));
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149** L_5 = (&__this->___OnNoteOn_4);
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_6 = V_2;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_7 = V_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_8;
		L_8 = InterlockedCompareExchangeImpl<NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*>(L_5, L_6, L_7);
		V_0 = L_8;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_9 = V_0;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_10 = V_1;
		if ((!(((RuntimeObject*)(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)L_9) == ((RuntimeObject*)(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AudioHelm.Sequencer::remove_OnNoteOn(AudioHelm.Sequencer/NoteAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_remove_OnNoteOn_mB9B560D2702AC526FE6230AD15128DB4B49087FD (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_0 = NULL;
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_1 = NULL;
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_2 = NULL;
	{
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_0 = __this->___OnNoteOn_4;
		V_0 = L_0;
	}

IL_0007:
	{
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_1 = V_0;
		V_1 = L_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_2 = V_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)CastclassSealed((RuntimeObject*)L_4, NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149_il2cpp_TypeInfo_var));
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149** L_5 = (&__this->___OnNoteOn_4);
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_6 = V_2;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_7 = V_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_8;
		L_8 = InterlockedCompareExchangeImpl<NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*>(L_5, L_6, L_7);
		V_0 = L_8;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_9 = V_0;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_10 = V_1;
		if ((!(((RuntimeObject*)(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)L_9) == ((RuntimeObject*)(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AudioHelm.Sequencer::add_OnNoteOff(AudioHelm.Sequencer/NoteAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_add_OnNoteOff_m31BF7BFBDEBBBA3B50801910C9B62FB4FD061584 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_0 = NULL;
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_1 = NULL;
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_2 = NULL;
	{
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_0 = __this->___OnNoteOff_5;
		V_0 = L_0;
	}

IL_0007:
	{
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_1 = V_0;
		V_1 = L_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_2 = V_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)CastclassSealed((RuntimeObject*)L_4, NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149_il2cpp_TypeInfo_var));
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149** L_5 = (&__this->___OnNoteOff_5);
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_6 = V_2;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_7 = V_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_8;
		L_8 = InterlockedCompareExchangeImpl<NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*>(L_5, L_6, L_7);
		V_0 = L_8;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_9 = V_0;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_10 = V_1;
		if ((!(((RuntimeObject*)(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)L_9) == ((RuntimeObject*)(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AudioHelm.Sequencer::remove_OnNoteOff(AudioHelm.Sequencer/NoteAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_remove_OnNoteOff_mB27A5EC1BB0BCC4F3824E6BCE42CF8D0C45B8C48 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_0 = NULL;
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_1 = NULL;
	NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* V_2 = NULL;
	{
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_0 = __this->___OnNoteOff_5;
		V_0 = L_0;
	}

IL_0007:
	{
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_1 = V_0;
		V_1 = L_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_2 = V_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)CastclassSealed((RuntimeObject*)L_4, NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149_il2cpp_TypeInfo_var));
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149** L_5 = (&__this->___OnNoteOff_5);
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_6 = V_2;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_7 = V_1;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_8;
		L_8 = InterlockedCompareExchangeImpl<NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*>(L_5, L_6, L_7);
		V_0 = L_8;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_9 = V_0;
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_10 = V_1;
		if ((!(((RuntimeObject*)(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)L_9) == ((RuntimeObject*)(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AudioHelm.Sequencer::add_OnBeat(AudioHelm.Sequencer/BeatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_add_OnBeat_m7D9E07CB6C6596BC564517BF314B8E2F2094E7C1 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* V_0 = NULL;
	BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* V_1 = NULL;
	BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* V_2 = NULL;
	{
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_0 = __this->___OnBeat_6;
		V_0 = L_0;
	}

IL_0007:
	{
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_1 = V_0;
		V_1 = L_1;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_2 = V_1;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01*)CastclassSealed((RuntimeObject*)L_4, BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01_il2cpp_TypeInfo_var));
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01** L_5 = (&__this->___OnBeat_6);
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_6 = V_2;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_7 = V_1;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_8;
		L_8 = InterlockedCompareExchangeImpl<BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01*>(L_5, L_6, L_7);
		V_0 = L_8;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_9 = V_0;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_10 = V_1;
		if ((!(((RuntimeObject*)(BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01*)L_9) == ((RuntimeObject*)(BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AudioHelm.Sequencer::remove_OnBeat(AudioHelm.Sequencer/BeatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_remove_OnBeat_m9654DE26C4B73E4074F3B5A7A0F59EA98BEAEBA2 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* V_0 = NULL;
	BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* V_1 = NULL;
	BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* V_2 = NULL;
	{
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_0 = __this->___OnBeat_6;
		V_0 = L_0;
	}

IL_0007:
	{
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_1 = V_0;
		V_1 = L_1;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_2 = V_1;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01*)CastclassSealed((RuntimeObject*)L_4, BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01_il2cpp_TypeInfo_var));
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01** L_5 = (&__this->___OnBeat_6);
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_6 = V_2;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_7 = V_1;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_8;
		L_8 = InterlockedCompareExchangeImpl<BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01*>(L_5, L_6, L_7);
		V_0 = L_8;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_9 = V_0;
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_10 = V_1;
		if ((!(((RuntimeObject*)(BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01*)L_9) == ((RuntimeObject*)(BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AudioHelm.Sequencer::AllNotesOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_AllNotesOff_mB5AF22F1A307A00ABE8C2BE1831F465AA04770CD (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_1 = NULL;
	{
		// foreach (Note note in activeNotes)
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_0 = __this->___activeNotes_10;
		NullCheck(L_0);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_1;
		L_1 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_0, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_0), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_000e_1:
			{
				// foreach (Note note in activeNotes)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_2;
				L_2 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_0), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				V_1 = L_2;
				// if (OnNoteOff != null)
				NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_3 = __this->___OnNoteOff_5;
				if (!L_3)
				{
					goto IL_002a_1;
				}
			}
			{
				// OnNoteOff(note);
				NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_4 = __this->___OnNoteOff_5;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_5 = V_1;
				NullCheck(L_4);
				NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_inline(L_4, L_5, NULL);
			}

IL_002a_1:
			{
				// if (noteOffEvent != null)
				NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692* L_6 = __this->___noteOffEvent_8;
				if (!L_6)
				{
					goto IL_003e_1;
				}
			}
			{
				// noteOffEvent.Invoke(note);
				NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692* L_7 = __this->___noteOffEvent_8;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_8 = V_1;
				NullCheck(L_7);
				UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA(L_7, L_8, UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA_RuntimeMethod_var);
			}

IL_003e_1:
			{
				// note.TriggerNoteOffEvent();
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_9 = V_1;
				NullCheck(L_9);
				Note_TriggerNoteOffEvent_m3565E88D2BC5CDDA03C19F0B4D9911717B931F9B(L_9, NULL);
			}

IL_0044_1:
			{
				// foreach (Note note in activeNotes)
				bool L_10;
				L_10 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_0), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		// activeNotes.Clear();
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_11 = __this->___activeNotes_10;
		NullCheck(L_11);
		List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_inline(L_11, List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::StartScheduled(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_StartScheduled_mA479DE7AD5CB4140562658E3A1C3BA57FCB9A29F (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, double ___dspTime0, const RuntimeMethod* method) 
{
	{
		// public void StartScheduled(double dspTime) { }
		return;
	}
}
// System.Void AudioHelm.Sequencer::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_OnBeforeSerialize_m34D56482C34DE0129C7629B3810EC781EB3BDC49 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	{
		// public void OnBeforeSerialize() { }
		return;
	}
}
// System.Void AudioHelm.Sequencer::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_OnAfterDeserialize_m38AEC820602931E32A9E65DB4CB6DF4F8C70C6C8 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	{
		// InitNoteRows();
		Sequencer_InitNoteRows_m4943C064B759F08FF03B41F7D2E99FF96D482B0A(__this, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_OnEnable_m08A2BA92A93C9B61FF565025B159AC0A1B44A904 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* V_0 = NULL;
	{
		// AudioHelmClock clock = AudioHelmClock.GetInstance();
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* L_0;
		L_0 = AudioHelmClock_GetInstance_mC31E75AD2E875E767B1C27E6A242C34D65EDF6FB_inline(NULL);
		V_0 = L_0;
		// if (clock)
		AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// clock.OnReset += AllNotesOff;
		AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* L_3 = V_0;
		ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837* L_4 = (ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837*)il2cpp_codegen_object_new(ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResetAction__ctor_mC2EF7812E9BD012F1E97DE85140D416774CBD447(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		NullCheck(L_3);
		AudioHelmClock_add_OnReset_m84A60DB3D0C07849F22D21D1DF35E756B108D123(L_3, L_4, NULL);
	}

IL_0021:
	{
		// UpdatePosition(false);
		Sequencer_UpdatePosition_m13309995BBA5460FFEEAC9032BF9B3209171DCEA(__this, (bool)0, NULL);
		// AllNotesOff();
		VirtualActionInvoker0::Invoke(9 /* System.Void AudioHelm.Sequencer::AllNotesOff() */, __this);
		// activeNotes.Clear();
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_5 = __this->___activeNotes_10;
		NullCheck(L_5);
		List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_inline(L_5, List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_OnDisable_m12559A8DC5DC3C319E678D4A3F4708734C0DD5B4 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* V_0 = NULL;
	{
		// AudioHelmClock clock = AudioHelmClock.GetInstance();
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* L_0;
		L_0 = AudioHelmClock_GetInstance_mC31E75AD2E875E767B1C27E6A242C34D65EDF6FB_inline(NULL);
		V_0 = L_0;
		// if (clock)
		AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// clock.OnReset -= AllNotesOff;
		AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* L_3 = V_0;
		ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837* L_4 = (ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837*)il2cpp_codegen_object_new(ResetAction_t41E33523E50BEEF846F8B78ACCA4273A9E70D837_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResetAction__ctor_mC2EF7812E9BD012F1E97DE85140D416774CBD447(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		NullCheck(L_3);
		AudioHelmClock_remove_OnReset_m3D348EBC45FD6742D4DA4A859F1A23A3C2CC4AEF(L_3, L_4, NULL);
	}

IL_0021:
	{
		// waitTillNextCycle = false;
		__this->___waitTillNextCycle_26 = (bool)0;
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::WaitForNextCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_WaitForNextCycle_m019AA14EEE717A1CEE9D647F82F98C7F4594AB3A (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	{
		// waitTillNextCycle = true;
		__this->___waitTillNextCycle_26 = (bool)1;
		// numCycles = (int)(GetSequencerTime() / length);
		double L_0;
		L_0 = Sequencer_GetSequencerTime_mA1FAB948CEB66DC72295C59B02A7E639C2C4A14D(__this, NULL);
		int32_t L_1 = __this->___length_11;
		__this->___numCycles_27 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)(L_0/((double)L_1))));
		// }
		return;
	}
}
// System.Boolean AudioHelm.Sequencer::WaitingForNextCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Sequencer_WaitingForNextCycle_m8AC748C5559A14475E97C4A9FA0F63E3DE0D84D7 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	{
		// return waitTillNextCycle;
		bool L_0 = __this->___waitTillNextCycle_26;
		return L_0;
	}
}
// AudioHelm.Sequencer/NotePosition AudioHelm.Sequencer::NoteOnPosition(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 Sequencer_NoteOnPosition_mFE56B5D69F8520D53881BE7F9A4AC211723946A0 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) 
{
	{
		// return new NotePosition(note.start, note.note);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_0 = ___note0;
		NullCheck(L_0);
		float L_1;
		L_1 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_0, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_2 = ___note0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_2, NULL);
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// AudioHelm.Sequencer/NotePosition AudioHelm.Sequencer::NoteOffPosition(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 Sequencer_NoteOffPosition_m75A780792547CFEC50F34C18DB8C942219907121 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) 
{
	{
		// return new NotePosition(note.end, note.note);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_0 = ___note0;
		NullCheck(L_0);
		float L_1;
		L_1 = Note_get_end_m687BFB68CA5FFF0690CF7582C92BF5EAB597C439_inline(L_0, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_2 = ___note0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_2, NULL);
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void AudioHelm.Sequencer::RemoveSortedNoteEvents(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_RemoveSortedNoteEvents_m13D86E7A3A7057450F0DE0367DC44132B1AA6294 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sortedNoteOns.Remove(NoteOnPosition(note));
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_0 = __this->___sortedNoteOns_23;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_1 = ___note0;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_2;
		L_2 = Sequencer_NoteOnPosition_mFE56B5D69F8520D53881BE7F9A4AC211723946A0(__this, L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658(L_0, L_2, SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		// sortedNoteOffs.Remove(NoteOffPosition(note));
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_4 = __this->___sortedNoteOffs_24;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_5 = ___note0;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_6;
		L_6 = Sequencer_NoteOffPosition_m75A780792547CFEC50F34C18DB8C942219907121(__this, L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658(L_4, L_6, SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::AddSortedNoteEvents(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_AddSortedNoteEvents_m98C12FDDE1453EFF5DF34ADD590615D10793F8E7 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_ContainsKey_mCB1FA8DA7315FF4560AD07D3E10CEC205EC50968_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (sortedNoteOns.ContainsKey(NoteOnPosition(note)))
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_0 = __this->___sortedNoteOns_23;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_1 = ___note0;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_2;
		L_2 = Sequencer_NoteOnPosition_mFE56B5D69F8520D53881BE7F9A4AC211723946A0(__this, L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = SortedList_2_ContainsKey_mCB1FA8DA7315FF4560AD07D3E10CEC205EC50968(L_0, L_2, SortedList_2_ContainsKey_mCB1FA8DA7315FF4560AD07D3E10CEC205EC50968_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// sortedNoteOns.Add(NoteOnPosition(note), note);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_4 = __this->___sortedNoteOns_23;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_5 = ___note0;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_6;
		L_6 = Sequencer_NoteOnPosition_mFE56B5D69F8520D53881BE7F9A4AC211723946A0(__this, L_5, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_7 = ___note0;
		NullCheck(L_4);
		SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D(L_4, L_6, L_7, SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
		// NotePosition offPosition = NoteOffPosition(note);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_8 = ___note0;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_9;
		L_9 = Sequencer_NoteOffPosition_m75A780792547CFEC50F34C18DB8C942219907121(__this, L_8, NULL);
		V_0 = L_9;
		// if (!sortedNoteOffs.ContainsKey(offPosition))
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_10 = __this->___sortedNoteOffs_24;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = SortedList_2_ContainsKey_mCB1FA8DA7315FF4560AD07D3E10CEC205EC50968(L_10, L_11, SortedList_2_ContainsKey_mCB1FA8DA7315FF4560AD07D3E10CEC205EC50968_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_004b;
		}
	}
	{
		// sortedNoteOffs.Add(offPosition, note);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_13 = __this->___sortedNoteOffs_24;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_14 = V_0;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_15 = ___note0;
		NullCheck(L_13);
		SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D(L_13, L_14, L_15, SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.IntPtr AudioHelm.Sequencer::Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Sequencer_Reference_mC906486EFFE16DE8824948031DBCA81457B33E5C (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_0;
	}
}
// System.Void AudioHelm.Sequencer::InitNoteRows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_InitNoteRows_m4943C064B759F08FF03B41F7D2E99FF96D482B0A (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_2 = NULL;
	{
		// sortedNoteOns.Clear();
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_0 = __this->___sortedNoteOns_23;
		NullCheck(L_0);
		SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798(L_0, SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798_RuntimeMethod_var);
		// sortedNoteOffs.Clear();
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_1 = __this->___sortedNoteOffs_24;
		NullCheck(L_1);
		SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798(L_1, SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798_RuntimeMethod_var);
		// for (int i = 0; i < allNotes.Length; ++i)
		V_0 = 0;
		goto IL_0072;
	}

IL_001a:
	{
		// if (allNotes[i] == null)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_2 = __this->___allNotes_16;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		// allNotes[i] = new NoteRow();
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_6 = __this->___allNotes_16;
		int32_t L_7 = V_0;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_8 = (NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D*)il2cpp_codegen_object_new(NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		NoteRow__ctor_m08488830D740BCB3848B0416707447D9E3BA6521(L_8, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D*)L_8);
	}

IL_0031:
	{
		// foreach (Note note in allNotes[i].notes)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_9 = __this->___allNotes_16;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_13 = L_12->___notes_0;
		NullCheck(L_13);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_14;
		L_14 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_13, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_1 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_1), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_0046_1:
			{
				// foreach (Note note in allNotes[i].notes)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_15;
				L_15 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_1), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				V_2 = L_15;
				// AddSortedNoteEvents(note);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_16 = V_2;
				Sequencer_AddSortedNoteEvents_m98C12FDDE1453EFF5DF34ADD590615D10793F8E7(__this, L_16, NULL);
			}

IL_0055_1:
			{
				// foreach (Note note in allNotes[i].notes)
				bool L_17;
				L_17 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_1), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0046_1;
				}
			}
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// for (int i = 0; i < allNotes.Length; ++i)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0072:
	{
		// for (int i = 0; i < allNotes.Length; ++i)
		int32_t L_19 = V_0;
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_20 = __this->___allNotes_16;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Single AudioHelm.Sequencer::GetDivisionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sequencer_GetDivisionLength_m7DF88F076FF152596F09AE3CB663C8D14AEDC1CE (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	{
		// if (division == Division.kEighth)
		int32_t L_0 = __this->___division_19;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return 2.0f;
		return (2.0f);
	}

IL_000e:
	{
		// if (division == Division.kSixteenth)
		int32_t L_1 = __this->___division_19;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// return 1.0f;
		return (1.0f);
	}

IL_001d:
	{
		// if (division == Division.kTriplet)
		int32_t L_2 = __this->___division_19;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_002c;
		}
	}
	{
		// return 4.0f / 3.0f;
		return (1.33333337f);
	}

IL_002c:
	{
		// if (division == Division.kThirtySecond)
		int32_t L_3 = __this->___division_19;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_003b;
		}
	}
	{
		// return 0.5f;
		return (0.5f);
	}

IL_003b:
	{
		// return 1.0f;
		return (1.0f);
	}
}
// System.Void AudioHelm.Sequencer::NotifyNoteKeyChanged(AudioHelm.Note,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_NotifyNoteKeyChanged_mA821929C8AF14E638B95EBADFBBB0D995C3C011A (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, int32_t ___oldKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// allNotes[oldKey].notes.Remove(note);
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_0 = __this->___allNotes_16;
		int32_t L_1 = ___oldKey1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_4 = L_3->___notes_0;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_5 = ___note0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835(L_4, L_5, List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835_RuntimeMethod_var);
		// allNotes[note.note].notes.Add(note);
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_7 = __this->___allNotes_16;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_8 = ___note0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_8, NULL);
		NullCheck(L_7);
		int32_t L_10 = L_9;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_12 = L_11->___notes_0;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_13 = ___note0;
		NullCheck(L_12);
		List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_inline(L_12, L_13, List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		// sortedNoteOns.Remove(new NotePosition(note.start, oldKey));
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_14 = __this->___sortedNoteOns_23;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_15 = ___note0;
		NullCheck(L_15);
		float L_16;
		L_16 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_15, NULL);
		int32_t L_17 = ___oldKey1;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_18;
		memset((&L_18), 0, sizeof(L_18));
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&L_18), L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_19;
		L_19 = SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658(L_14, L_18, SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		// sortedNoteOffs.Remove(new NotePosition(note.end, oldKey));
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_20 = __this->___sortedNoteOffs_24;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_21 = ___note0;
		NullCheck(L_21);
		float L_22;
		L_22 = Note_get_end_m687BFB68CA5FFF0690CF7582C92BF5EAB597C439_inline(L_21, NULL);
		int32_t L_23 = ___oldKey1;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_24;
		memset((&L_24), 0, sizeof(L_24));
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&L_24), L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		bool L_25;
		L_25 = SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658(L_20, L_24, SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		// AddSortedNoteEvents(note);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_26 = ___note0;
		Sequencer_AddSortedNoteEvents_m98C12FDDE1453EFF5DF34ADD590615D10793F8E7(__this, L_26, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::NotifyNoteStartChanged(AudioHelm.Note,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_NotifyNoteStartChanged_mBEE268D22393B130DDB42661AA8FEF84E1BEA1C8 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, float ___oldStart1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sortedNoteOns.Remove(new NotePosition(oldStart, note.note));
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_0 = __this->___sortedNoteOns_23;
		float L_1 = ___oldStart1;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_2 = ___note0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_2, NULL);
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&L_4), L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_5;
		L_5 = SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658(L_0, L_4, SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		// sortedNoteOns.Add(new NotePosition(note.start, note.note), note);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_6 = __this->___sortedNoteOns_23;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_7 = ___note0;
		NullCheck(L_7);
		float L_8;
		L_8 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_7, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_9 = ___note0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_9, NULL);
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&L_11), L_8, L_10, /*hidden argument*/NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_12 = ___note0;
		NullCheck(L_6);
		SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D(L_6, L_11, L_12, SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::NotifyNoteEndChanged(AudioHelm.Note,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_NotifyNoteEndChanged_mBC63F233C3F02FE832FC38466C602EB26DBCAED2 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, float ___oldEnd1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sortedNoteOffs.Remove(new NotePosition(oldEnd, note.note));
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_0 = __this->___sortedNoteOffs_24;
		float L_1 = ___oldEnd1;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_2 = ___note0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_2, NULL);
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&L_4), L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_5;
		L_5 = SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658(L_0, L_4, SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		// sortedNoteOffs.Add(new NotePosition(note.end, note.note), note);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_6 = __this->___sortedNoteOffs_24;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_7 = ___note0;
		NullCheck(L_7);
		float L_8;
		L_8 = Note_get_end_m687BFB68CA5FFF0690CF7582C92BF5EAB597C439_inline(L_7, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_9 = ___note0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_9, NULL);
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&L_11), L_8, L_10, /*hidden argument*/NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_12 = ___note0;
		NullCheck(L_6);
		SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D(L_6, L_11, L_12, SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::RemoveNote(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_RemoveNote_m924EEFA398434F0015084C5B9AB3DBA1B79B88FF (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// allNotes[note.note].notes.Remove(note);
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_0 = __this->___allNotes_16;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_1 = ___note0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_5 = L_4->___notes_0;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_6 = ___note0;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835(L_5, L_6, List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835_RuntimeMethod_var);
		// RemoveSortedNoteEvents(note);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_8 = ___note0;
		Sequencer_RemoveSortedNoteEvents_m13D86E7A3A7057450F0DE0367DC44132B1AA6294(__this, L_8, NULL);
		// note.TryDelete();
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_9 = ___note0;
		NullCheck(L_9);
		Note_TryDelete_m1C189F33AE94C68E438E29B004A2875428526303(L_9, NULL);
		// note.parent = null;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_10 = ___note0;
		NullCheck(L_10);
		L_10->___parent_6 = (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___parent_6), (void*)(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD*)NULL);
		// }
		return;
	}
}
// System.Boolean AudioHelm.Sequencer::NoteExistsInRange(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Sequencer_NoteExistsInRange_m332680703695AABA5B6E00B5AFC5D1AF3B54D535 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, const RuntimeMethod* method) 
{
	{
		// return GetNoteInRange(note, start, end) != null;
		int32_t L_0 = ___note0;
		float L_1 = ___start1;
		float L_2 = ___end2;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_3;
		L_3 = Sequencer_GetNoteInRange_mEF668ACE4A72F54726CDBACC46990EE692C9EDF8(__this, L_0, L_1, L_2, (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)NULL, NULL);
		return (bool)((!(((RuntimeObject*)(Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// AudioHelm.Note AudioHelm.Sequencer::GetNoteInRange(System.Int32,System.Single,System.Single,AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* Sequencer_GetNoteInRange_mEF668ACE4A72F54726CDBACC46990EE692C9EDF8 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___ignore3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_1 = NULL;
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_2 = NULL;
	{
		// if (note >= Utils.kMidiSize || note < 0 || allNotes == null || allNotes[note] == null)
		int32_t L_0 = ___note0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)128))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___note0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_2 = __this->___allNotes_16;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_3 = __this->___allNotes_16;
		int32_t L_4 = ___note0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (L_6)
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		// return null;
		return (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)NULL;
	}

IL_0020:
	{
		// foreach (Note noteObject in allNotes[note].notes)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_7 = __this->___allNotes_16;
		int32_t L_8 = ___note0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_11 = L_10->___notes_0;
		NullCheck(L_11);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_12;
		L_12 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_11, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_0 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_0), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_0035_1:
			{
				// foreach (Note noteObject in allNotes[note].notes)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_13;
				L_13 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_0), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				V_1 = L_13;
				// if (noteObject.OverlapsRange(start, end) && noteObject != ignore)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_14 = V_1;
				float L_15 = ___start1;
				float L_16 = ___end2;
				NullCheck(L_14);
				bool L_17;
				L_17 = Note_OverlapsRange_mD8B1C6604AED7620D39B86FD5B00169B26DA40C7(L_14, L_15, L_16, NULL);
				if (!L_17)
				{
					goto IL_0050_1;
				}
			}
			{
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_18 = V_1;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_19 = ___ignore3;
				if ((((RuntimeObject*)(Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)L_18) == ((RuntimeObject*)(Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)L_19)))
				{
					goto IL_0050_1;
				}
			}
			{
				// return noteObject;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_20 = V_1;
				V_2 = L_20;
				goto IL_006b;
			}

IL_0050_1:
			{
				// foreach (Note noteObject in allNotes[note].notes)
				bool L_21;
				L_21 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_0), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// return null;
		return (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)NULL;
	}

IL_006b:
	{
		// }
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_22 = V_2;
		return L_22;
	}
}
// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.Sequencer::GetAllNotes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* Sequencer_GetAllNotes_m9F54203DBEFDB4B1CC1F6ED2EFD9F2B46291A1FE (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9900814BE6375E848ADD7176341C88F91B83466E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_get_Values_m12E8E853C562C5C4CA250DFCF7E8C6CD7A433BE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<Note>(sortedNoteOns.Values);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_0 = __this->___sortedNoteOns_23;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SortedList_2_get_Values_m12E8E853C562C5C4CA250DFCF7E8C6CD7A433BE4(L_0, SortedList_2_get_Values_m12E8E853C562C5C4CA250DFCF7E8C6CD7A433BE4_RuntimeMethod_var);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_2 = (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*)il2cpp_codegen_object_new(List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m9900814BE6375E848ADD7176341C88F91B83466E(L_2, L_1, List_1__ctor_m9900814BE6375E848ADD7176341C88F91B83466E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.Sequencer::GetAllNoteOnsInRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* Sequencer_GetAllNoteOnsInRange_m5E60E7E10C7B8251BE53540888C6A4881645024A (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, float ___start0, float ___end1, const RuntimeMethod* method) 
{
	{
		// return GetAllNoteEventsInRange(start, end, sortedNoteOns);
		float L_0 = ___start0;
		float L_1 = ___end1;
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_2 = __this->___sortedNoteOns_23;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_3;
		L_3 = Sequencer_GetAllNoteEventsInRange_mCCFEBABECF57CA0569AA3C3AC81D43F3E6F2EA07(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.Sequencer::GetAllNoteOffsInRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* Sequencer_GetAllNoteOffsInRange_m2B2546F3501C0A4B4A3FE9031D75CC407F9E3AE9 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, float ___start0, float ___end1, const RuntimeMethod* method) 
{
	{
		// return GetAllNoteEventsInRange(start, end, sortedNoteOffs);
		float L_0 = ___start0;
		float L_1 = ___end1;
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_2 = __this->___sortedNoteOffs_24;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_3;
		L_3 = Sequencer_GetAllNoteEventsInRange_mCCFEBABECF57CA0569AA3C3AC81D43F3E6F2EA07(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void AudioHelm.Sequencer::RemoveNotesInRange(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_RemoveNotesInRange_mCFCDB5735859876F64D33CB644CACD11C947016D (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* V_0 = NULL;
	Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_2 = NULL;
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_3 = NULL;
	{
		// if (allNotes == null || allNotes[note] == null)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_0 = __this->___allNotes_16;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_1 = __this->___allNotes_16;
		int32_t L_2 = ___note0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0013;
		}
	}

IL_0012:
	{
		// return;
		return;
	}

IL_0013:
	{
		// List<Note> toRemove = new List<Note>();
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_5 = (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*)il2cpp_codegen_object_new(List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971(L_5, List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971_RuntimeMethod_var);
		V_0 = L_5;
		// foreach (Note noteObject in allNotes[note].notes)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_6 = __this->___allNotes_16;
		int32_t L_7 = ___note0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_10 = L_9->___notes_0;
		NullCheck(L_10);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_11;
		L_11 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_10, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_1 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_1), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_002e_1:
			{
				// foreach (Note noteObject in allNotes[note].notes)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_12;
				L_12 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_1), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				V_2 = L_12;
				// if (noteObject.OverlapsRange(start, end))
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_13 = V_2;
				float L_14 = ___start1;
				float L_15 = ___end2;
				NullCheck(L_13);
				bool L_16;
				L_16 = Note_OverlapsRange_mD8B1C6604AED7620D39B86FD5B00169B26DA40C7(L_13, L_14, L_15, NULL);
				if (!L_16)
				{
					goto IL_0047_1;
				}
			}
			{
				// toRemove.Add(noteObject);
				List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_17 = V_0;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_18 = V_2;
				NullCheck(L_17);
				List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_inline(L_17, L_18, List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
			}

IL_0047_1:
			{
				// foreach (Note noteObject in allNotes[note].notes)
				bool L_19;
				L_19 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_1), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0060;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		// foreach (Note noteObject in toRemove)
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_20 = V_0;
		NullCheck(L_20);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_21;
		L_21 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_20, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_1 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_1), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0078_1;
			}

IL_0069_1:
			{
				// foreach (Note noteObject in toRemove)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_22;
				L_22 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_1), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				V_3 = L_22;
				// RemoveNote(noteObject);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_23 = V_3;
				Sequencer_RemoveNote_m924EEFA398434F0015084C5B9AB3DBA1B79B88FF(__this, L_23, NULL);
			}

IL_0078_1:
			{
				// foreach (Note noteObject in toRemove)
				bool L_24;
				L_24 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_1), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0069_1;
				}
			}
			{
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::RemoveNotesContainedInRange(System.Int32,System.Single,System.Single,AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_RemoveNotesContainedInRange_m66231AAFF6DA51DE9C223E810D6E3C6339E38BEB (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___ignore3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* V_0 = NULL;
	Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_2 = NULL;
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_3 = NULL;
	{
		// if (allNotes == null || allNotes[note] == null)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_0 = __this->___allNotes_16;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_1 = __this->___allNotes_16;
		int32_t L_2 = ___note0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0013;
		}
	}

IL_0012:
	{
		// return;
		return;
	}

IL_0013:
	{
		// List<Note> toRemove = new List<Note>();
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_5 = (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*)il2cpp_codegen_object_new(List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971(L_5, List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971_RuntimeMethod_var);
		V_0 = L_5;
		// foreach (Note noteObject in allNotes[note].notes)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_6 = __this->___allNotes_16;
		int32_t L_7 = ___note0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_10 = L_9->___notes_0;
		NullCheck(L_10);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_11;
		L_11 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_10, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_1 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_1), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004c_1;
			}

IL_002e_1:
			{
				// foreach (Note noteObject in allNotes[note].notes)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_12;
				L_12 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_1), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				V_2 = L_12;
				// if (noteObject.InsideRange(start, end) && noteObject != ignore)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_13 = V_2;
				float L_14 = ___start1;
				float L_15 = ___end2;
				NullCheck(L_13);
				bool L_16;
				L_16 = Note_InsideRange_mAA6D9D5BBB23313503C1ABD5CE198C0D141A3462(L_13, L_14, L_15, NULL);
				if (!L_16)
				{
					goto IL_004c_1;
				}
			}
			{
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_17 = V_2;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_18 = ___ignore3;
				if ((((RuntimeObject*)(Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)L_17) == ((RuntimeObject*)(Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)L_18)))
				{
					goto IL_004c_1;
				}
			}
			{
				// toRemove.Add(noteObject);
				List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_19 = V_0;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_20 = V_2;
				NullCheck(L_19);
				List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_inline(L_19, L_20, List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
			}

IL_004c_1:
			{
				// foreach (Note noteObject in allNotes[note].notes)
				bool L_21;
				L_21 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_1), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// foreach (Note noteObject in toRemove)
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_22 = V_0;
		NullCheck(L_22);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_23;
		L_23 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_22, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_1 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0088:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_1), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007d_1;
			}

IL_006e_1:
			{
				// foreach (Note noteObject in toRemove)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_24;
				L_24 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_1), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				V_3 = L_24;
				// RemoveNote(noteObject);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_25 = V_3;
				Sequencer_RemoveNote_m924EEFA398434F0015084C5B9AB3DBA1B79B88FF(__this, L_25, NULL);
			}

IL_007d_1:
			{
				// foreach (Note noteObject in toRemove)
				bool L_26;
				L_26 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_1), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_006e_1;
				}
			}
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::ClampNotesInRange(System.Int32,System.Single,System.Single,AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_ClampNotesInRange_mA935E2900F94F386A966877FA051671C34D21032 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___ignore3, const RuntimeMethod* method) 
{
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_0 = NULL;
	{
		// RemoveNotesContainedInRange(note, start, end, ignore);
		int32_t L_0 = ___note0;
		float L_1 = ___start1;
		float L_2 = ___end2;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_3 = ___ignore3;
		Sequencer_RemoveNotesContainedInRange_m66231AAFF6DA51DE9C223E810D6E3C6339E38BEB(__this, L_0, L_1, L_2, L_3, NULL);
		// Note noteInRange = GetNoteInRange(note, start, end, ignore);
		int32_t L_4 = ___note0;
		float L_5 = ___start1;
		float L_6 = ___end2;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_7 = ___ignore3;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_8;
		L_8 = Sequencer_GetNoteInRange_mEF668ACE4A72F54726CDBACC46990EE692C9EDF8(__this, L_4, L_5, L_6, L_7, NULL);
		V_0 = L_8;
		goto IL_002d;
	}

IL_0019:
	{
		// noteInRange.RemoveRange(start, end);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_9 = V_0;
		float L_10 = ___start1;
		float L_11 = ___end2;
		NullCheck(L_9);
		Note_RemoveRange_m047B0A490E91955D61B346ECB21D65FF27585890(L_9, L_10, L_11, NULL);
		// noteInRange = GetNoteInRange(note, start, end, ignore);
		int32_t L_12 = ___note0;
		float L_13 = ___start1;
		float L_14 = ___end2;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_15 = ___ignore3;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_16;
		L_16 = Sequencer_GetNoteInRange_mEF668ACE4A72F54726CDBACC46990EE692C9EDF8(__this, L_12, L_13, L_14, L_15, NULL);
		V_0 = L_16;
	}

IL_002d:
	{
		// while (noteInRange != null)
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_17 = V_0;
		if (L_17)
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// AudioHelm.Note AudioHelm.Sequencer::AddNote(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* Sequencer_AddNote_mC177601677C811B7AD3D60F0B22C096CB4725B60 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___note0, float ___start1, float ___end2, float ___velocity3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mDEF417D768A1B200A1E809DF828587B802DC74FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_0 = NULL;
	{
		// ClampNotesInRange(note, start, end);
		int32_t L_0 = ___note0;
		float L_1 = ___start1;
		float L_2 = ___end2;
		Sequencer_ClampNotesInRange_mA935E2900F94F386A966877FA051671C34D21032(__this, L_0, L_1, L_2, (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)NULL, NULL);
		// note = Mathf.Clamp(note, 0, Utils.kMidiSize - 1);
		int32_t L_3 = ___note0;
		int32_t L_4;
		L_4 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_3, 0, ((int32_t)127), NULL);
		___note0 = L_4;
		// Note noteObject = new Note()
		// {
		//     note = note,
		//     start = start,
		//     end = end,
		//     velocity = velocity,
		//     parent = this
		// };
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_5 = (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)il2cpp_codegen_object_new(Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Note__ctor_m2351FC4DF22CF5A198D57CC0C8B9799F918C2E0B(L_5, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_6 = L_5;
		int32_t L_7 = ___note0;
		NullCheck(L_6);
		Note_set_note_mAC7299BEB24006B97185038223DF2A8960E2D7CF(L_6, L_7, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_8 = L_6;
		float L_9 = ___start1;
		NullCheck(L_8);
		Note_set_start_m6D22A8E1E4832D3A6FA990CE34EDED5C157AB511(L_8, L_9, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_10 = L_8;
		float L_11 = ___end2;
		NullCheck(L_10);
		Note_set_end_mAF6FEE024F6C6BDA95E6882516050F57073FF62F(L_10, L_11, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_12 = L_10;
		float L_13 = ___velocity3;
		NullCheck(L_12);
		Note_set_velocity_mF932A4B3BE304F3FD2CB588ADF05B546D501B2CA(L_12, L_13, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_14 = L_12;
		NullCheck(L_14);
		L_14->___parent_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___parent_6), (void*)__this);
		V_0 = L_14;
		// noteObject.TryCreate();
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_15 = V_0;
		NullCheck(L_15);
		Note_TryCreate_mA4A0EAA199ECEBA986112EA70ABFF92B9F18691C(L_15, NULL);
		// if (allNotes[note] == null)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_16 = __this->___allNotes_16;
		int32_t L_17 = ___note0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if (L_19)
		{
			goto IL_005c;
		}
	}
	{
		// allNotes[note] = new NoteRow();
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_20 = __this->___allNotes_16;
		int32_t L_21 = ___note0;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_22 = (NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D*)il2cpp_codegen_object_new(NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		NoteRow__ctor_m08488830D740BCB3848B0416707447D9E3BA6521(L_22, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D*)L_22);
	}

IL_005c:
	{
		// allNotes[note].notes.Add(noteObject);
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_23 = __this->___allNotes_16;
		int32_t L_24 = ___note0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_27 = L_26->___notes_0;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_28 = V_0;
		NullCheck(L_27);
		List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_inline(L_27, L_28, List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		// allNotes[note].notes.Sort(noteComparer);
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_29 = __this->___allNotes_16;
		int32_t L_30 = ___note0;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_33 = L_32->___notes_0;
		il2cpp_codegen_runtime_class_init_inline(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var);
		NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95* L_34 = ((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_StaticFields*)il2cpp_codegen_static_fields_for(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var))->___noteComparer_21;
		NullCheck(L_33);
		List_1_Sort_mDEF417D768A1B200A1E809DF828587B802DC74FD(L_33, L_34, List_1_Sort_mDEF417D768A1B200A1E809DF828587B802DC74FD_RuntimeMethod_var);
		// AddSortedNoteEvents(noteObject);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_35 = V_0;
		Sequencer_AddSortedNoteEvents_m98C12FDDE1453EFF5DF34ADD590615D10793F8E7(__this, L_35, NULL);
		// return noteObject;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_36 = V_0;
		return L_36;
	}
}
// System.Void AudioHelm.Sequencer::TransposeNotes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_TransposeNotes_mCBF916C15CDB869393411222817C3FAADF0BFCBF (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, int32_t ___transpose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m5E0D09AC978584DBC94A5B92C339910ECFCE5A00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* V_0 = NULL;
	Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* G_B6_0 = NULL;
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* G_B7_1 = NULL;
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* G_B9_0 = NULL;
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* G_B10_1 = NULL;
	{
		// List<Note> notes = GetAllNotes();
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_0;
		L_0 = Sequencer_GetAllNotes_m9F54203DBEFDB4B1CC1F6ED2EFD9F2B46291A1FE(__this, NULL);
		V_0 = L_0;
		// if (transpose > 0)
		int32_t L_1 = ___transpose0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// notes.Reverse();
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_2 = V_0;
		NullCheck(L_2);
		List_1_Reverse_m5E0D09AC978584DBC94A5B92C339910ECFCE5A00(L_2, List_1_Reverse_m5E0D09AC978584DBC94A5B92C339910ECFCE5A00_RuntimeMethod_var);
	}

IL_0011:
	{
		// foreach (Note note in notes)
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_4;
		L_4 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_3, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_1), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_001a_1:
			{
				// foreach (Note note in notes)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_5;
				L_5 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_1), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				// int new_note = note.note + transpose;
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_6 = L_5;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_6, NULL);
				int32_t L_8 = ___transpose0;
				V_2 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
				// new_note = new_note >= Utils.kMidiSize ? Utils.kMidiSize - 1 : new_note;
				int32_t L_9 = V_2;
				G_B5_0 = L_6;
				if ((((int32_t)L_9) >= ((int32_t)((int32_t)128))))
				{
					G_B6_0 = L_6;
					goto IL_0035_1;
				}
			}
			{
				int32_t L_10 = V_2;
				G_B7_0 = L_10;
				G_B7_1 = G_B5_0;
				goto IL_0037_1;
			}

IL_0035_1:
			{
				G_B7_0 = ((int32_t)127);
				G_B7_1 = G_B6_0;
			}

IL_0037_1:
			{
				V_2 = G_B7_0;
				// new_note = new_note < 0 ? 0 : new_note;
				int32_t L_11 = V_2;
				G_B8_0 = G_B7_1;
				if ((((int32_t)L_11) < ((int32_t)0)))
				{
					G_B9_0 = G_B7_1;
					goto IL_003f_1;
				}
			}
			{
				int32_t L_12 = V_2;
				G_B10_0 = L_12;
				G_B10_1 = G_B8_0;
				goto IL_0040_1;
			}

IL_003f_1:
			{
				G_B10_0 = 0;
				G_B10_1 = G_B9_0;
			}

IL_0040_1:
			{
				V_2 = G_B10_0;
				// note.note = new_note;
				int32_t L_13 = V_2;
				NullCheck(G_B10_1);
				Note_set_note_mAC7299BEB24006B97185038223DF2A8960E2D7CF(G_B10_1, L_13, NULL);
			}

IL_0047_1:
			{
				// foreach (Note note in notes)
				bool L_14;
				L_14 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_1), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0060;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::ReadMidiData(AudioHelm.MidiFile/MidiData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_ReadMidiData_m4B17F29872831583EF047008A560184AB1E957FA (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* ___midiData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* V_1 = NULL;
	{
		// if (midiData == null || midiData.notes == null)
		MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* L_0 = ___midiData0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* L_1 = ___midiData0;
		NullCheck(L_1);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_2 = L_1->___notes_1;
		if (L_2)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		// return;
		return;
	}

IL_000c:
	{
		// Clear();
		Sequencer_Clear_m01EA28C1D53A45422C93648ADDFC30EAF40FAC3E(__this, NULL);
		// length = midiData.length;
		MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* L_3 = ___midiData0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___length_0;
		__this->___length_11 = L_4;
		// foreach (Note note in midiData.notes)
		MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* L_5 = ___midiData0;
		NullCheck(L_5);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_6 = L_5->___notes_1;
		NullCheck(L_6);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_7;
		L_7 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_6, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_0), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_002c_1:
			{
				// foreach (Note note in midiData.notes)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_8;
				L_8 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_0), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				V_1 = L_8;
				// AddNote(note.note, note.start, note.end, note.velocity);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_9 = V_1;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline(L_9, NULL);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_11 = V_1;
				NullCheck(L_11);
				float L_12;
				L_12 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_11, NULL);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_13 = V_1;
				NullCheck(L_13);
				float L_14;
				L_14 = Note_get_end_m687BFB68CA5FFF0690CF7582C92BF5EAB597C439_inline(L_13, NULL);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_15 = V_1;
				NullCheck(L_15);
				float L_16;
				L_16 = Note_get_velocity_mA62FCB00EC6DB619C38F704984B109BDA745EDDE_inline(L_15, NULL);
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_17;
				L_17 = Sequencer_AddNote_mC177601677C811B7AD3D60F0B22C096CB4725B60(__this, L_10, L_12, L_14, L_16, NULL);
			}

IL_0053_1:
			{
				// foreach (Note note in midiData.notes)
				bool L_18;
				L_18 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_0), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::ReadMidiFile(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_ReadMidiFile_m34F56E3A9D495E1A2162A8F7A2E3917F4EBAD318 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___midiStream0, const RuntimeMethod* method) 
{
	{
		// ReadMidiData(MidiFile.LoadMidiData(midiStream));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___midiStream0;
		MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* L_1;
		L_1 = MidiFile_LoadMidiData_m761077CAC81F388892A7A7FCAD49C6C618A91C3B(L_0, NULL);
		Sequencer_ReadMidiData_m4B17F29872831583EF047008A560184AB1E957FA(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::ReadMidiFile(AudioHelm.MidiFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_ReadMidiFile_mDBBAD0592B1D13DA620C006B47C24CA450AC2DD6 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, MidiFile_t4521CB115F4B4F4ECA7F1ACB3BC1EF568B926D49* ___midiFile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (midiFile != null)
		MidiFile_t4521CB115F4B4F4ECA7F1ACB3BC1EF568B926D49* L_0 = ___midiFile0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ReadMidiData(midiFile.midiData);
		MidiFile_t4521CB115F4B4F4ECA7F1ACB3BC1EF568B926D49* L_2 = ___midiFile0;
		NullCheck(L_2);
		MidiData_tA9E61B8783E0715738B9A5534462F7457CA77AB9* L_3 = L_2->___midiData_5;
		Sequencer_ReadMidiData_m4B17F29872831583EF047008A560184AB1E957FA(__this, L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_Clear_m01EA28C1D53A45422C93648ADDFC30EAF40FAC3E (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < allNotes.Length; ++i)
		V_0 = 0;
		goto IL_0065;
	}

IL_0004:
	{
		// if (allNotes[i] != null)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_0 = __this->___allNotes_16;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0061;
		}
	}
	{
		// foreach (Note note in allNotes[i].notes)
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_4 = __this->___allNotes_16;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_8 = L_7->___notes_0;
		NullCheck(L_8);
		Enumerator_t5430177D46828382C2DEC1EA3CC2338BD5A58D03 L_9;
		L_9 = List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025(L_8, List_1_GetEnumerator_m0685BA1F3CA72B18629EABD762480F778B130025_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C((&V_1), Enumerator_Dispose_m728A6A54DA0AB1E4D2A97341B6C36614A49D1D8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_0023_1:
			{
				// foreach (Note note in allNotes[i].notes)
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_10;
				L_10 = Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_inline((&V_1), Enumerator_get_Current_m53E56A35FE7F3ECDDF056D3C61BE063BAA9420D4_RuntimeMethod_var);
				// note.TryDelete();
				Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_11 = L_10;
				NullCheck(L_11);
				Note_TryDelete_m1C189F33AE94C68E438E29B004A2875428526303(L_11, NULL);
				// note.parent = null;
				NullCheck(L_11);
				L_11->___parent_6 = (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_11->___parent_6), (void*)(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD*)NULL);
			}

IL_0036_1:
			{
				// foreach (Note note in allNotes[i].notes)
				bool L_12;
				L_12 = Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761((&V_1), Enumerator_MoveNext_mC651FC3A8F2BBA37577016D1D269D24BE4A5E761_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// allNotes[i].notes.Clear();
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_13 = __this->___allNotes_16;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		NoteRow_tB786360D39AA4C062A7E90F57512F0603E429F6D* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_17 = L_16->___notes_0;
		NullCheck(L_17);
		List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_inline(L_17, List_1_Clear_mFCB5DD1850DFA1DEE9A0898F0A43A1E63C153CB3_RuntimeMethod_var);
	}

IL_0061:
	{
		// for (int i = 0; i < allNotes.Length; ++i)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		// for (int i = 0; i < allNotes.Length; ++i)
		int32_t L_19 = V_0;
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_20 = __this->___allNotes_16;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// sortedNoteOns.Clear();
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_21 = __this->___sortedNoteOns_23;
		NullCheck(L_21);
		SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798(L_21, SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798_RuntimeMethod_var);
		// sortedNoteOffs.Clear();
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_22 = __this->___sortedNoteOffs_24;
		NullCheck(L_22);
		SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798(L_22, SortedList_2_Clear_m3BE12B6FB85B0C0C918C66067C33EACD3EFB1798_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Single AudioHelm.Sequencer::GetSixteenthTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sequencer_GetSixteenthTime_m955CDE8129C67AD1B50D6594F9DD5439B83E629E (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return 1.0f / (Utils.kBpmToSixteenths * AudioHelmClock.GetGlobalBpm());
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = AudioHelmClock_GetGlobalBpm_m8915DE2D7797D354E693C86439EBF7D732049A46_inline(NULL);
		return ((float)((1.0f)/((float)il2cpp_codegen_multiply((0.0666666701f), L_0))));
	}
}
// System.Double AudioHelm.Sequencer::GetSequencerTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Sequencer_GetSequencerTime_mA1FAB948CEB66DC72295C59B02A7E639C2C4A14D (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	{
		// return Utils.kSixteenthsPerBeat * beatTime;
		double L_0 = __this->___beatTime_14;
		return ((double)il2cpp_codegen_multiply((4.0), L_0));
	}
}
// System.Double AudioHelm.Sequencer::GetSequencerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Sequencer_GetSequencerPosition_m5D647BB7E70CE21D23D6E5DFCA802EF1E9B491CA (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		// double sequencerTime = GetSequencerTime();
		double L_0;
		L_0 = Sequencer_GetSequencerTime_mA1FAB948CEB66DC72295C59B02A7E639C2C4A14D(__this, NULL);
		V_0 = L_0;
		// int cycles = 0;
		V_1 = 0;
		// if (loop)
		bool L_1 = __this->___loop_13;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// cycles = (int)(sequencerTime / length);
		double L_2 = V_0;
		int32_t L_3 = __this->___length_11;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)(L_2/((double)L_3))));
	}

IL_001c:
	{
		// return sequencerTime - cycles * length;
		double L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___length_11;
		return ((double)il2cpp_codegen_subtract(L_4, ((double)((int32_t)il2cpp_codegen_multiply(L_5, L_6)))));
	}
}
// System.Collections.Generic.List`1<AudioHelm.Note> AudioHelm.Sequencer::GetAllNoteEventsInRange(System.Single,System.Single,System.Collections.Generic.SortedList`2<AudioHelm.Sequencer/NotePosition,AudioHelm.Note>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* Sequencer_GetAllNoteEventsInRange_mCCFEBABECF57CA0569AA3C3AC81D43F3E6F2EA07 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, float ___start0, float ___end1, SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* ___events2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tF65EAFA63B9E2AA687BBEDC83656DAB575F3E73E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_IndexOfKey_mABE88AC0DED9250609DA83C0CBE09C87C68C8A44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_get_Count_mC8FD1DB5ABB273A79EC5EC552F7B8A563C6B6ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_get_Values_m12E8E853C562C5C4CA250DFCF7E8C6CD7A433BE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* V_0 = NULL;
	NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// List<Note> notesInRange = new List<Note>();
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_0 = (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*)il2cpp_codegen_object_new(List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971(L_0, List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971_RuntimeMethod_var);
		V_0 = L_0;
		// NotePosition startSearch = new NotePosition(start, -2);
		float L_1 = ___start0;
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&V_1), L_1, ((int32_t)-2), NULL);
		// NotePosition endSearch = new NotePosition(end, -1);
		float L_2 = ___end1;
		NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E((&V_2), L_2, (-1), NULL);
		// events.Add(startSearch, null);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_3 = ___events2;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_4 = V_1;
		NullCheck(L_3);
		SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D(L_3, L_4, (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)NULL, SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
		// events.Add(endSearch, null);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_5 = ___events2;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_6 = V_2;
		NullCheck(L_5);
		SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D(L_5, L_6, (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*)NULL, SortedList_2_Add_m4D776CB4AC5BE625A28AD154845B85167458336D_RuntimeMethod_var);
		// int indexStart = events.IndexOfKey(startSearch);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_7 = ___events2;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = SortedList_2_IndexOfKey_mABE88AC0DED9250609DA83C0CBE09C87C68C8A44(L_7, L_8, SortedList_2_IndexOfKey_mABE88AC0DED9250609DA83C0CBE09C87C68C8A44_RuntimeMethod_var);
		// int indexEnd = events.IndexOfKey(endSearch);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_10 = ___events2;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = SortedList_2_IndexOfKey_mABE88AC0DED9250609DA83C0CBE09C87C68C8A44(L_10, L_11, SortedList_2_IndexOfKey_mABE88AC0DED9250609DA83C0CBE09C87C68C8A44_RuntimeMethod_var);
		V_3 = L_12;
		// IList<Note> notes = events.Values;
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_13 = ___events2;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = SortedList_2_get_Values_m12E8E853C562C5C4CA250DFCF7E8C6CD7A433BE4(L_13, SortedList_2_get_Values_m12E8E853C562C5C4CA250DFCF7E8C6CD7A433BE4_RuntimeMethod_var);
		V_4 = L_14;
		// int numNotes = events.Count;
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_15 = ___events2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = SortedList_2_get_Count_mC8FD1DB5ABB273A79EC5EC552F7B8A563C6B6ED4_inline(L_15, SortedList_2_get_Count_mC8FD1DB5ABB273A79EC5EC552F7B8A563C6B6ED4_RuntimeMethod_var);
		V_5 = L_16;
		// for (int i = (indexStart + 1) % numNotes; i != indexEnd; i = (i + 1) % numNotes)
		int32_t L_17 = V_5;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_9, 1))%L_17));
		goto IL_0069;
	}

IL_0051:
	{
		// notesInRange.Add(notes[i]);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_18 = V_0;
		RuntimeObject* L_19 = V_4;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_21;
		L_21 = InterfaceFuncInvoker1< Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<AudioHelm.Note>::get_Item(System.Int32) */, IList_1_tF65EAFA63B9E2AA687BBEDC83656DAB575F3E73E_il2cpp_TypeInfo_var, L_19, L_20);
		NullCheck(L_18);
		List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_inline(L_18, L_21, List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		// for (int i = (indexStart + 1) % numNotes; i != indexEnd; i = (i + 1) % numNotes)
		int32_t L_22 = V_6;
		int32_t L_23 = V_5;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_22, 1))%L_23));
	}

IL_0069:
	{
		// for (int i = (indexStart + 1) % numNotes; i != indexEnd; i = (i + 1) % numNotes)
		int32_t L_24 = V_6;
		int32_t L_25 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_0051;
		}
	}
	{
		// events.Remove(startSearch);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_26 = ___events2;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_27 = V_1;
		NullCheck(L_26);
		bool L_28;
		L_28 = SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658(L_26, L_27, SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		// events.Remove(endSearch);
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_29 = ___events2;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_30 = V_2;
		NullCheck(L_29);
		bool L_31;
		L_31 = SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658(L_29, L_30, SortedList_2_Remove_m5168122517506DF8EE0BAFD97466B1A4DC0A4658_RuntimeMethod_var);
		// return notesInRange;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_32 = V_0;
		return L_32;
	}
}
// System.Void AudioHelm.Sequencer::UpdateIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_UpdateIndex_mB719A0E37606F3482A8B3B0817256E98C2749FC8 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int nextIndex = (int)(GetSequencerPosition() / GetDivisionLength());
		double L_0;
		L_0 = Sequencer_GetSequencerPosition_m5D647BB7E70CE21D23D6E5DFCA802EF1E9B491CA(__this, NULL);
		float L_1;
		L_1 = Sequencer_GetDivisionLength_m7DF88F076FF152596F09AE3CB663C8D14AEDC1CE(__this, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)(L_0/((double)L_1))));
		// if (currentIndex != nextIndex)
		int32_t L_2 = __this->___currentIndex_12;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0041;
		}
	}
	{
		// if (OnBeat != null)
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_4 = __this->___OnBeat_6;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// OnBeat(nextIndex);
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* L_5 = __this->___OnBeat_6;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_inline(L_5, L_6, NULL);
	}

IL_002d:
	{
		// if (beatEvent != null)
		BeatEvent_t1052A86A9495FFA74394195F101E2A9B04769404* L_7 = __this->___beatEvent_9;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// beatEvent.Invoke(nextIndex);
		BeatEvent_t1052A86A9495FFA74394195F101E2A9B04769404* L_8 = __this->___beatEvent_9;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_8, L_9, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
	}

IL_0041:
	{
		// currentIndex = nextIndex;
		int32_t L_10 = V_0;
		__this->___currentIndex_12 = L_10;
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::UpdateBeatTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_UpdateBeatTime_m2EFFCAE1EF183B8A06D8CDF79C05C7542EBD9097 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		// double globalBeatTime = AudioHelmClock.GetGlobalBeatTime();
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = AudioHelmClock_GetGlobalBeatTime_mC1A0686A725CC97F01C1D53F9B07F366144D12D9_inline(NULL);
		V_0 = L_0;
		// double bpm = AudioHelmClock.GetGlobalBpm();
		float L_1;
		L_1 = AudioHelmClock_GetGlobalBpm_m8915DE2D7797D354E693C86439EBF7D732049A46_inline(NULL);
		V_1 = ((double)L_1);
		// double lastUpdate = AudioHelmClock.GetLastSampledTime();
		double L_2;
		L_2 = AudioHelmClock_GetLastSampledTime_m77C0A89BBB432FF26CB5663450C006EDCB6DA3E2_inline(NULL);
		V_2 = L_2;
		// double time = AudioSettings.dspTime;
		double L_3;
		L_3 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		V_3 = L_3;
		// beatTime = globalBeatTime + bpm * (time - lastUpdate) / Utils.kSecondsPerMinute;
		double L_4 = V_0;
		double L_5 = V_1;
		double L_6 = V_3;
		double L_7 = V_2;
		__this->___beatTime_14 = ((double)il2cpp_codegen_add(L_4, ((double)(((double)il2cpp_codegen_multiply(L_5, ((double)il2cpp_codegen_subtract(L_6, L_7))))/(60.0)))));
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::SendNoteOff(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_SendNoteOff_m4AC65123825CA782DF270AF1255A0C9A8DA8B106 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnNoteOff != null)
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_0 = __this->___OnNoteOff_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnNoteOff(note);
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_1 = __this->___OnNoteOff_5;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_2 = ___note0;
		NullCheck(L_1);
		NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// if (noteOffEvent != null)
		NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692* L_3 = __this->___noteOffEvent_8;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// noteOffEvent.Invoke(note);
		NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692* L_4 = __this->___noteOffEvent_8;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_5 = ___note0;
		NullCheck(L_4);
		UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA(L_4, L_5, UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA_RuntimeMethod_var);
	}

IL_0028:
	{
		// note.TriggerNoteOffEvent();
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_6 = ___note0;
		NullCheck(L_6);
		Note_TriggerNoteOffEvent_m3565E88D2BC5CDDA03C19F0B4D9911717B931F9B(L_6, NULL);
		// activeNotes.Remove(note);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_7 = __this->___activeNotes_10;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_8 = ___note0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835(L_7, L_8, List_1_Remove_m88B399DBB31AB555983A92B9D4EFDDE6DA2C9835_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::SendNoteOn(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_SendNoteOn_m300B2AAD625AFA4C10C183054A40F23963365641 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnNoteOn != null)
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_0 = __this->___OnNoteOn_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnNoteOn(note);
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* L_1 = __this->___OnNoteOn_4;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_2 = ___note0;
		NullCheck(L_1);
		NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// if (noteOnEvent != null)
		NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692* L_3 = __this->___noteOnEvent_7;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// noteOnEvent.Invoke(note);
		NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692* L_4 = __this->___noteOnEvent_7;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_5 = ___note0;
		NullCheck(L_4);
		UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA(L_4, L_5, UnityEvent_1_Invoke_m28FA07FF85BEAFA67A163AB07089FCA681AC1BEA_RuntimeMethod_var);
	}

IL_0028:
	{
		// note.TriggerNoteOnEvent();
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_6 = ___note0;
		NullCheck(L_6);
		Note_TriggerNoteOnEvent_mD8368E8E8002C6C8A7BFBD3A95C54A537C214FD6(L_6, NULL);
		// activeNotes.Add(note);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_7 = __this->___activeNotes_10;
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_8 = ___note0;
		NullCheck(L_7);
		List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_inline(L_7, L_8, List_1_Add_mDF1F643D7623D39CEE9F9CA88E5FE398C5F3A582_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::UpdatePosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer_UpdatePosition_m13309995BBA5460FFEEAC9032BF9B3209171DCEA (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, bool ___sendEvents0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* V_2 = NULL;
	List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (AudioHelmClock.GetGlobalPause()) {
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AudioHelmClock_GetGlobalPause_m12137577170507977C2F3485F205C234AEB482AA_inline(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if (!paused)
		bool L_1 = __this->___paused_15;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// AllNotesOff();
		VirtualActionInvoker0::Invoke(9 /* System.Void AudioHelm.Sequencer::AllNotesOff() */, __this);
	}

IL_0015:
	{
		// paused = true;
		__this->___paused_15 = (bool)1;
		// return;
		return;
	}

IL_001d:
	{
		// paused = false;
		__this->___paused_15 = (bool)0;
		// UpdateBeatTime();
		Sequencer_UpdateBeatTime_m2EFFCAE1EF183B8A06D8CDF79C05C7542EBD9097(__this, NULL);
		// UpdateIndex();
		Sequencer_UpdateIndex_mB719A0E37606F3482A8B3B0817256E98C2749FC8(__this, NULL);
		// float nextPosition = (float)GetSequencerPosition();
		double L_2;
		L_2 = Sequencer_GetSequencerPosition_m5D647BB7E70CE21D23D6E5DFCA802EF1E9B491CA(__this, NULL);
		V_0 = ((float)L_2);
		// int cycles = Mathf.FloorToInt((float)GetSequencerTime() / length);
		double L_3;
		L_3 = Sequencer_GetSequencerTime_mA1FAB948CEB66DC72295C59B02A7E639C2C4A14D(__this, NULL);
		int32_t L_4 = __this->___length_11;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(((float)L_3)/((float)L_4))), NULL);
		V_1 = L_5;
		// if (nextPosition < 0.0f || cycles < numCycles)
		float L_6 = V_0;
		if ((((float)L_6) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = __this->___numCycles_27;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_006d;
		}
	}

IL_005e:
	{
		// lastSequencerPosition = nextPosition;
		float L_9 = V_0;
		__this->___lastSequencerPosition_25 = L_9;
		// numCycles = cycles;
		int32_t L_10 = V_1;
		__this->___numCycles_27 = L_10;
		// return;
		return;
	}

IL_006d:
	{
		// if (cycles > numCycles)
		int32_t L_11 = V_1;
		int32_t L_12 = __this->___numCycles_27;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0084;
		}
	}
	{
		// numCycles = cycles;
		int32_t L_13 = V_1;
		__this->___numCycles_27 = L_13;
		// waitTillNextCycle = false;
		__this->___waitTillNextCycle_26 = (bool)0;
	}

IL_0084:
	{
		// if (waitTillNextCycle || !sendEvents)
		bool L_14 = __this->___waitTillNextCycle_26;
		if (L_14)
		{
			goto IL_008f;
		}
	}
	{
		bool L_15 = ___sendEvents0;
		if (L_15)
		{
			goto IL_0097;
		}
	}

IL_008f:
	{
		// lastSequencerPosition = nextPosition;
		float L_16 = V_0;
		__this->___lastSequencerPosition_25 = L_16;
		// return;
		return;
	}

IL_0097:
	{
		// List<Note> noteOns = GetAllNoteOnsInRange(lastSequencerPosition, nextPosition);
		float L_17 = __this->___lastSequencerPosition_25;
		float L_18 = V_0;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_19;
		L_19 = Sequencer_GetAllNoteOnsInRange_m5E60E7E10C7B8251BE53540888C6A4881645024A(__this, L_17, L_18, NULL);
		V_2 = L_19;
		// List<Note> noteOffs = GetAllNoteOffsInRange(lastSequencerPosition, nextPosition);
		float L_20 = __this->___lastSequencerPosition_25;
		float L_21 = V_0;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_22;
		L_22 = Sequencer_GetAllNoteOffsInRange_m2B2546F3501C0A4B4A3FE9031D75CC407F9E3AE9(__this, L_20, L_21, NULL);
		V_3 = L_22;
		// int noteOnIndex = 0;
		V_4 = 0;
		// int noteOffIndex = 0;
		V_5 = 0;
		goto IL_00ff;
	}

IL_00bb:
	{
		// if (noteOns[noteOnIndex].start < noteOffs[noteOffIndex].end)
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_23 = V_2;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_25;
		L_25 = List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A(L_23, L_24, List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A_RuntimeMethod_var);
		NullCheck(L_25);
		float L_26;
		L_26 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_25, NULL);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_29;
		L_29 = List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A(L_27, L_28, List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A_RuntimeMethod_var);
		NullCheck(L_29);
		float L_30;
		L_30 = Note_get_end_m687BFB68CA5FFF0690CF7582C92BF5EAB597C439_inline(L_29, NULL);
		if ((!(((float)L_26) < ((float)L_30))))
		{
			goto IL_00ec;
		}
	}
	{
		// SendNoteOn(noteOns[noteOnIndex++]);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_31 = V_2;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		NullCheck(L_31);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_34;
		L_34 = List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A(L_31, L_33, List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A_RuntimeMethod_var);
		Sequencer_SendNoteOn_m300B2AAD625AFA4C10C183054A40F23963365641(__this, L_34, NULL);
		goto IL_00ff;
	}

IL_00ec:
	{
		// SendNoteOff(noteOffs[noteOffIndex++]);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_35 = V_3;
		int32_t L_36 = V_5;
		int32_t L_37 = L_36;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_38;
		L_38 = List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A(L_35, L_37, List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A_RuntimeMethod_var);
		Sequencer_SendNoteOff_m4AC65123825CA782DF270AF1255A0C9A8DA8B106(__this, L_38, NULL);
	}

IL_00ff:
	{
		// while (noteOnIndex < noteOns.Count && noteOffIndex < noteOffs.Count) {
		int32_t L_39 = V_4;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_inline(L_40, List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_RuntimeMethod_var);
		if ((((int32_t)L_39) >= ((int32_t)L_41)))
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_42 = V_5;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_43 = V_3;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_inline(L_43, List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_RuntimeMethod_var);
		if ((((int32_t)L_42) < ((int32_t)L_44)))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_0129;
	}

IL_0115:
	{
		// SendNoteOn(noteOns[noteOnIndex]);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_45 = V_2;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_47;
		L_47 = List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A(L_45, L_46, List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A_RuntimeMethod_var);
		Sequencer_SendNoteOn_m300B2AAD625AFA4C10C183054A40F23963365641(__this, L_47, NULL);
		// for (; noteOnIndex < noteOns.Count; ++noteOnIndex)
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0129:
	{
		// for (; noteOnIndex < noteOns.Count; ++noteOnIndex)
		int32_t L_49 = V_4;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_50 = V_2;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_inline(L_50, List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_RuntimeMethod_var);
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0115;
		}
	}
	{
		goto IL_0149;
	}

IL_0135:
	{
		// SendNoteOff(noteOffs[noteOffIndex]);
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_52 = V_3;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_54;
		L_54 = List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A(L_52, L_53, List_1_get_Item_m1645E88C8817F0DB794CB092A83B3DAA9441584A_RuntimeMethod_var);
		Sequencer_SendNoteOff_m4AC65123825CA782DF270AF1255A0C9A8DA8B106(__this, L_54, NULL);
		// for (; noteOffIndex < noteOffs.Count; ++noteOffIndex)
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0149:
	{
		// for (; noteOffIndex < noteOffs.Count; ++noteOffIndex)
		int32_t L_56 = V_5;
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_57 = V_3;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_inline(L_57, List_1_get_Count_mAFE1D6DB8AE0A5D564D4AF77C98E04F20B1A63AC_RuntimeMethod_var);
		if ((((int32_t)L_56) < ((int32_t)L_58)))
		{
			goto IL_0135;
		}
	}
	{
		// lastSequencerPosition = nextPosition;
		float L_59 = V_0;
		__this->___lastSequencerPosition_25 = L_59;
		// }
		return;
	}
}
// System.Void AudioHelm.Sequencer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer__ctor_mAF7B7C7CC6DBB4DB01E25932627FCE7897D543C1 (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2__ctor_mC98F2F4B7EB439FEF8BBC1C849AF901CBD49DCD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Note> activeNotes = new List<Note>();
		List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F* L_0 = (List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F*)il2cpp_codegen_object_new(List_1_t8B0AE78FF4A508C20C1FC0AD0BF595E84EB2F75F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971(L_0, List_1__ctor_mF0FD04F28F865513C4CF4AFF71F9C68B1CB7F971_RuntimeMethod_var);
		__this->___activeNotes_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeNotes_10), (void*)L_0);
		// public int length = 16;
		__this->___length_11 = ((int32_t)16);
		// public int currentIndex = -1;
		__this->___currentIndex_12 = (-1);
		// public bool loop = true;
		__this->___loop_13 = (bool)1;
		// public NoteRow[] allNotes = new NoteRow[Utils.kMidiSize];
		NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D* L_1 = (NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D*)(NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D*)SZArrayNew(NoteRowU5BU5D_tA8FABE369EA8491DC9E01738A3839EC89C76B33D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->___allNotes_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allNotes_16), (void*)L_1);
		// public Vector2 scrollPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___scrollPosition_17 = L_2;
		// public Division division = Division.kSixteenth;
		__this->___division_19 = 1;
		// public float zoom = 0.3f;
		__this->___zoom_20 = (0.300000012f);
		// SortedList<NotePosition, Note> sortedNoteOns =
		//     new SortedList<NotePosition, Note>(notePositionComparer);
		il2cpp_codegen_runtime_class_init_inline(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var);
		NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23* L_3 = ((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_StaticFields*)il2cpp_codegen_static_fields_for(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var))->___notePositionComparer_22;
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_4 = (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*)il2cpp_codegen_object_new(SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SortedList_2__ctor_mC98F2F4B7EB439FEF8BBC1C849AF901CBD49DCD9(L_4, L_3, SortedList_2__ctor_mC98F2F4B7EB439FEF8BBC1C849AF901CBD49DCD9_RuntimeMethod_var);
		__this->___sortedNoteOns_23 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sortedNoteOns_23), (void*)L_4);
		// SortedList<NotePosition, Note> sortedNoteOffs =
		//     new SortedList<NotePosition, Note>(notePositionComparer);
		NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23* L_5 = ((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_StaticFields*)il2cpp_codegen_static_fields_for(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var))->___notePositionComparer_22;
		SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB* L_6 = (SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB*)il2cpp_codegen_object_new(SortedList_2_t0822BF802F58481FE1359D2F82A2E21D234A2CAB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SortedList_2__ctor_mC98F2F4B7EB439FEF8BBC1C849AF901CBD49DCD9(L_6, L_5, SortedList_2__ctor_mC98F2F4B7EB439FEF8BBC1C849AF901CBD49DCD9_RuntimeMethod_var);
		__this->___sortedNoteOffs_24 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sortedNoteOffs_24), (void*)L_6);
		// float lastSequencerPosition = -1.0f;
		__this->___lastSequencerPosition_25 = (-1.0f);
		// int numCycles = -1;
		__this->___numCycles_27 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AudioHelm.Sequencer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequencer__cctor_m9B6AC8D3032B52068ED76EA3C9305438F1DAE3A4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static NoteComparer noteComparer = new NoteComparer();
		NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95* L_0 = (NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95*)il2cpp_codegen_object_new(NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NoteComparer__ctor_m0112540E80F00C227C107A38B88CF8AE7333E0E9(L_0, NULL);
		((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_StaticFields*)il2cpp_codegen_static_fields_for(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var))->___noteComparer_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_StaticFields*)il2cpp_codegen_static_fields_for(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var))->___noteComparer_21), (void*)L_0);
		// static NotePositionComparer notePositionComparer = new NotePositionComparer();
		NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23* L_1 = (NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23*)il2cpp_codegen_object_new(NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NotePositionComparer__ctor_m931C85E3DBDCD8B48D535907BEF23D88923D272C(L_1, NULL);
		((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_StaticFields*)il2cpp_codegen_static_fields_for(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var))->___notePositionComparer_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_StaticFields*)il2cpp_codegen_static_fields_for(Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD_il2cpp_TypeInfo_var))->___notePositionComparer_22), (void*)L_1);
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
void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_Multicast(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* currentDelegate = reinterpret_cast<NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___note0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenInst(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method)
{
	NullCheck(___note0);
	typedef void (*FunctionPointerType) (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___note0, method);
}
void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenStatic(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___note0, method);
}
void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenStaticInvoker(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* >::Invoke(__this->___method_ptr_0, method, NULL, ___note0);
}
void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_ClosedStaticInvoker(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___note0);
}
void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenVirtual(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method)
{
	NullCheck(___note0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___note0);
}
void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenInterface(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method)
{
	NullCheck(___note0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___note0);
}
void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenGenericVirtual(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method)
{
	NullCheck(___note0);
	GenericVirtualActionInvoker0::Invoke(method, ___note0);
}
void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenGenericInterface(NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method)
{
	NullCheck(___note0);
	GenericInterfaceActionInvoker0::Invoke(method, ___note0);
}
// System.Void AudioHelm.Sequencer/NoteAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteAction__ctor_m6B7EAD3F2A970F9400F145835BF2C1A062CF4FF4 (NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_Multicast;
}
// System.Void AudioHelm.Sequencer/NoteAction::Invoke(AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728 (NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___note0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AudioHelm.Sequencer/NoteAction::BeginInvoke(AudioHelm.Note,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NoteAction_BeginInvoke_m5467135FCF7F9F8F2C44D663DA90688460FB4BE5 (NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___note0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void AudioHelm.Sequencer/NoteAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteAction_EndInvoke_mFDC72512DD022F0826ADFA5EDFE8079656E9D439 (NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_Multicast(BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* currentDelegate = reinterpret_cast<BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___index0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_OpenInst(BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___index0, method);
}
void BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_OpenStatic(BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___index0, method);
}
void BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_OpenStaticInvoker(BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___index0);
}
void BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_ClosedStaticInvoker(BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___index0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01 (BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void AudioHelm.Sequencer/BeatAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeatAction__ctor_m71F1C1BD9D56720F438B1A628EFBF109F1159E7F (BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_Multicast;
}
// System.Void AudioHelm.Sequencer/BeatAction::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452 (BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___index0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AudioHelm.Sequencer/BeatAction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BeatAction_BeginInvoke_m965FEC1FF82942091C56D5602F41A4153F7FD840 (BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void AudioHelm.Sequencer/BeatAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeatAction_EndInvoke_mFCD52A24D9BA29C2091ECC7818B7517826F8FC88 (BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioHelm.Sequencer/NoteEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteEvent__ctor_mE08D0F8125AD590745534B612590828B4F959971 (NoteEvent_tE357F57589C0E04F3D4996AC3BC01CC79CA0A692* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7F44B1C9813D8161ACA01483698D086A35645E55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7F44B1C9813D8161ACA01483698D086A35645E55(__this, UnityEvent_1__ctor_m7F44B1C9813D8161ACA01483698D086A35645E55_RuntimeMethod_var);
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
// System.Void AudioHelm.Sequencer/BeatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeatEvent__ctor_mE384C4BBFD2096FEE50FB4DDB45A5588373C0463 (BeatEvent_t1052A86A9495FFA74394195F101E2A9B04769404* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(__this, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
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
// System.Int32 AudioHelm.Sequencer/NoteComparer::Compare(AudioHelm.Note,AudioHelm.Note)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoteComparer_Compare_m221452FB588C6B0BC8F6344D540B87A20E73B0D3 (NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___left0, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___right1, const RuntimeMethod* method) 
{
	{
		// if (left.start < right.start)
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_0 = ___left0;
		NullCheck(L_0);
		float L_1;
		L_1 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_0, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_2 = ___right1;
		NullCheck(L_2);
		float L_3;
		L_3 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_2, NULL);
		if ((!(((float)L_1) < ((float)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// if (left.start > right.start)
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_4 = ___left0;
		NullCheck(L_4);
		float L_5;
		L_5 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_4, NULL);
		Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* L_6 = ___right1;
		NullCheck(L_6);
		float L_7;
		L_7 = Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline(L_6, NULL);
		if ((!(((float)L_5) > ((float)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0020:
	{
		// return 0;
		return 0;
	}
}
// System.Void AudioHelm.Sequencer/NoteComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoteComparer__ctor_m0112540E80F00C227C107A38B88CF8AE7333E0E9 (NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95* __this, const RuntimeMethod* method) 
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
// System.Int32 AudioHelm.Sequencer/NotePositionComparer::Compare(AudioHelm.Sequencer/NotePosition,AudioHelm.Sequencer/NotePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotePositionComparer_Compare_m0BC6C897E5B1476A08CFF4CFF67724F0433427FC (NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23* __this, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___left0, NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 ___right1, const RuntimeMethod* method) 
{
	{
		// if (left.position_ < right.position_)
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_0 = ___left0;
		float L_1 = L_0.___position__0;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_2 = ___right1;
		float L_3 = L_2.___position__0;
		if ((!(((float)L_1) < ((float)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// if (left.position_ > right.position_)
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_4 = ___left0;
		float L_5 = L_4.___position__0;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_6 = ___right1;
		float L_7 = L_6.___position__0;
		if ((!(((float)L_5) > ((float)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0020:
	{
		// if (left.note_ < right.note_)
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_8 = ___left0;
		int32_t L_9 = L_8.___note__1;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_10 = ___right1;
		int32_t L_11 = L_10.___note__1;
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_0030;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0030:
	{
		// if (left.note_ > right.note_)
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_12 = ___left0;
		int32_t L_13 = L_12.___note__1;
		NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3 L_14 = ___right1;
		int32_t L_15 = L_14.___note__1;
		if ((((int32_t)L_13) <= ((int32_t)L_15)))
		{
			goto IL_0040;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0040:
	{
		// return 0;
		return 0;
	}
}
// System.Void AudioHelm.Sequencer/NotePositionComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotePositionComparer__ctor_m931C85E3DBDCD8B48D535907BEF23D88923D272C (NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23* __this, const RuntimeMethod* method) 
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
// System.Void AudioHelm.Sequencer/NotePosition::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E (NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3* __this, float ___position0, int32_t ___note1, const RuntimeMethod* method) 
{
	{
		// position_ = position;
		float L_0 = ___position0;
		__this->___position__0 = L_0;
		// note_ = note;
		int32_t L_1 = ___note1;
		__this->___note__1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E_AdjustorThunk (RuntimeObject* __this, float ___position0, int32_t ___note1, const RuntimeMethod* method)
{
	NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3*>(__this + _offset);
	NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E(_thisAdjusted, ___position0, ___note1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean AudioHelm.Utils::IsBlackKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsBlackKey_m0B5CC7B75585F62F7DF5BECD3A88B189C2F64938 (int32_t ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return blackKeys[key % kNotesPerOctave];
		il2cpp_codegen_runtime_class_init_inline(Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_il2cpp_TypeInfo_var))->___blackKeys_8;
		int32_t L_1 = ___key0;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1%((int32_t)12)));
		uint8_t L_3 = (uint8_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)L_3;
	}
}
// System.Boolean AudioHelm.Utils::IsC(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsC_m09B2A998077B6822FE030DF04B21BEAF13D0E9EF (int32_t ___key0, const RuntimeMethod* method) 
{
	{
		// return key % kNotesPerOctave == 0;
		int32_t L_0 = ___key0;
		return (bool)((((int32_t)((int32_t)(L_0%((int32_t)12)))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 AudioHelm.Utils::GetOctave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetOctave_m62F72FC1DD011A9E1482590363BAFBAC76FBE5E6 (int32_t ___key0, const RuntimeMethod* method) 
{
	{
		// return key / kNotesPerOctave + kMinOctave;
		int32_t L_0 = ___key0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(L_0/((int32_t)12))), ((int32_t)-2)));
	}
}
// System.Single AudioHelm.Utils::MidiChangeToRatio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_MidiChangeToRatio_m7287B1D6CFD95FCD6BFA27BCB50484091E5AAD05 (int32_t ___midi0, const RuntimeMethod* method) 
{
	{
		// return Mathf.Pow(2, (1.0f * midi) / kNotesPerOctave);
		int32_t L_0 = ___midi0;
		float L_1;
		L_1 = powf((2.0f), ((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_0)))/(12.0f))));
		return L_1;
	}
}
// System.Boolean AudioHelm.Utils::RangesOverlap(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_RangesOverlap_m064F2CAAFE310C87B9CC34A0FE987C4FCF927C42 (float ___start0, float ___end1, float ___rangeStart2, float ___rangeEnd3, const RuntimeMethod* method) 
{
	{
		// return !(start < rangeStart && end <= rangeStart) &&
		//        !(start >= rangeEnd && end > rangeEnd);
		float L_0 = ___start0;
		float L_1 = ___rangeStart2;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___end1;
		float L_3 = ___rangeStart2;
		if ((((float)L_2) <= ((float)L_3)))
		{
			goto IL_0016;
		}
	}

IL_0008:
	{
		float L_4 = ___start0;
		float L_5 = ___rangeEnd3;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0014;
		}
	}
	{
		float L_6 = ___end1;
		float L_7 = ___rangeEnd3;
		return (bool)((((int32_t)((((float)L_6) > ((float)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0014:
	{
		return (bool)1;
	}

IL_0016:
	{
		return (bool)0;
	}
}
// System.Void AudioHelm.Utils::InitAudioSource(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_InitAudioSource_m70CDA8E190D10674A77DB5E44B6AA0235E401D93 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audio0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8011C15B830276E7F4E6B48C91EEF932D506E005);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		// AudioClip one = AudioClip.Create("helm", 1, 1, AudioSettings.outputSampleRate, false);
		int32_t L_0;
		L_0 = AudioSettings_get_outputSampleRate_mEACF8FD7BFDFBD76EB8FC7E438B3AF19DB57BC6D(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB(_stringLiteral8011C15B830276E7F4E6B48C91EEF932D506E005, 1, 1, L_0, (bool)0, NULL);
		V_0 = L_1;
		// one.SetData(new float[] { 1 }, 0);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		NullCheck(L_2);
		bool L_5;
		L_5 = AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3(L_2, L_4, 0, NULL);
		// audio.clip = one;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = ___audio0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = V_0;
		NullCheck(L_6);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_6, L_7, NULL);
		// audio.loop = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = ___audio0;
		NullCheck(L_8);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_8, (bool)1, NULL);
		// if (Application.isPlaying)
		bool L_9;
		L_9 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		// audio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = ___audio0;
		NullCheck(L_10);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_10, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void AudioHelm.Utils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__cctor_mE348D9B9B61B4D35E0C0286B32A85762796C9D7B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4A08879A9977151E4797D24BB524732CB9BCB472CDAE95C8DA19BF6330C5B32E_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static bool[] blackKeys = { false, true, false, true,
		//                             false, false, true, false,
		//                             true, false, true, false };
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4A08879A9977151E4797D24BB524732CB9BCB472CDAE95C8DA19BF6330C5B32E_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_il2cpp_TypeInfo_var))->___blackKeys_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_il2cpp_TypeInfo_var))->___blackKeys_8), (void*)L_1);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioHelmClock_GetGlobalPause_m12137577170507977C2F3485F205C234AEB482AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return globalPause;
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		bool L_0 = ((AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_StaticFields*)il2cpp_codegen_static_fields_for(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var))->___globalPause_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Sequencer_WaitingForNextCycle_m8AC748C5559A14475E97C4A9FA0F63E3DE0D84D7_inline (Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD* __this, const RuntimeMethod* method) 
{
	{
		// return waitTillNextCycle;
		bool L_0 = __this->___waitTillNextCycle_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) 
{
	{
		// return start_;
		float L_0 = __this->___start__3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Note_get_end_m687BFB68CA5FFF0690CF7582C92BF5EAB597C439_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) 
{
	{
		// return end_;
		float L_0 = __this->___end__4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Note_get_note_m7A2FDECC954D8A9C0654CC5CE206FFDE6FD615F5_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) 
{
	{
		// return note_;
		int32_t L_0 = __this->___note__2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Note_get_velocity_mA62FCB00EC6DB619C38F704984B109BDA745EDDE_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) 
{
	{
		// return velocity_;
		float L_0 = __this->___velocity__5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoteAction_Invoke_m529CAAE62454215CFD3C72D7684F97AECDCD9728_inline (NoteAction_t7D38B8B718CE56D60566C26AE0809B55DAF4A149* __this, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* ___note0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___note0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* AudioHelmClock_GetInstance_mC31E75AD2E875E767B1C27E6A242C34D65EDF6FB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return singleton;
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2* L_0 = ((AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_StaticFields*)il2cpp_codegen_static_fields_for(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var))->___singleton_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AudioHelmClock_GetGlobalBpm_m8915DE2D7797D354E693C86439EBF7D732049A46_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return globalBpm;
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		float L_0 = ((AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_StaticFields*)il2cpp_codegen_static_fields_for(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var))->___globalBpm_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BeatAction_Invoke_m3FE0B7915C08448E9408BA8E1E7B97D0AFB66452_inline (BeatAction_t1B36003AA2A51900EEA60D115551B533E373BF01* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___index0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioHelmClock_GetGlobalBeatTime_mC1A0686A725CC97F01C1D53F9B07F366144D12D9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return globalBeatTime;
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		double L_0 = ((AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_StaticFields*)il2cpp_codegen_static_fields_for(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var))->___globalBeatTime_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioHelmClock_GetLastSampledTime_m77C0A89BBB432FF26CB5663450C006EDCB6DA3E2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return lastSampledTime;
		il2cpp_codegen_runtime_class_init_inline(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var);
		double L_0 = ((AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_StaticFields*)il2cpp_codegen_static_fields_for(AudioHelmClock_t5280AC98E964707AAC361FD4B6107AA7ACDB85B2_il2cpp_TypeInfo_var))->___lastSampledTime_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m68D9CE1522DBA7B7FE370F51E4C5DF3BB89471EB_gshared_inline (SortedList_2_t8313209F0B74CD2C13D0A1541EF519A42E04904C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
