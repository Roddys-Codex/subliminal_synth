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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<AudioHelm.Note>
struct UnityEvent_1_t8A3E615D0BD5BEF9FE317EBAC9DE401F480BAF4C;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// AudioHelm.Note
struct Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// AudioHelm.Sequencer
struct Sequencer_t8CF9E0ED74B3253FC15BDAF29AD89FD39C5360BD;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// AudioHelm.Note/NoteAction
struct NoteAction_t1A3F3FBBF674C5D7AA78406CBBAEDBAEB11C767A;
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

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_tDAD97EEEE6E24993B53FA93C6A655156617B6370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4A08879A9977151E4797D24BB524732CB9BCB472CDAE95C8DA19BF6330C5B32E_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral8011C15B830276E7F4E6B48C91EEF932D506E005;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7F44B1C9813D8161ACA01483698D086A35645E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

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

// AudioHelm.Sequencer/NoteComparer
struct NoteComparer_t65DE2E3F5842B92430527D54BFD4DEBB72A99F95  : public RuntimeObject
{
};

// AudioHelm.Sequencer/NotePositionComparer
struct NotePositionComparer_t935B4CD6BBD92F73838427CAA46462A89E810C23  : public RuntimeObject
{
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method) ;

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
// System.Single AudioHelm.Note::get_start()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void AudioHelm.Sequencer/NotePosition::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotePosition__ctor_m68BB3E860CDED21423436FE47B640642C724439E (NotePosition_t15A331061289A0162FB0B074363E83AE3E4C3DB3* __this, float ___position0, int32_t ___note1, const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Note_get_start_mF3698449654AB242D7D969F304FB3CD5352818A1_inline (Note_t96CE62C204CCD9CC7B1070C2D04984810A3F0EB5* __this, const RuntimeMethod* method) 
{
	{
		// return start_;
		float L_0 = __this->___start__3;
		return L_0;
	}
}
