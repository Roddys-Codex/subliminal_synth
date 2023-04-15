#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant>
struct HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<jp.kshoji.rtpmidi.RtpMidiParticipant>
struct IEqualityComparer_1_tDA065E6B0E1ABE134FCD690561A8EDE3C39600B2;
// System.Collections.Generic.LinkedListNode`1<System.Byte>
struct LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755;
// System.Collections.Generic.LinkedList`1<System.Byte>
struct LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Collections.Generic.HashSet`1/Slot<jp.kshoji.rtpmidi.RtpMidiParticipant>[]
struct SlotU5BU5D_tB5AB0BC199D9E6BC4358D0D3C49082E3811F8DEE;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// jp.kshoji.rtpmidi.AppleMidiParser
struct AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener
struct IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243;
// jp.kshoji.rtpmidi.IRtpMidiEventHandler
struct IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C;
// jp.kshoji.rtpmidi.IRtpMidiExceptionListener
struct IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// jp.kshoji.rtpmidi.RtpMidiClock
struct RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2;
// jp.kshoji.rtpmidi.RtpMidiParser
struct RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81;
// jp.kshoji.rtpmidi.RtpMidiParticipant
struct RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC;
// jp.kshoji.rtpmidi.RtpMidiServer
struct RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD;
// jp.kshoji.rtpmidi.RtpMidiSession
struct RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// System.Net.Sockets.UdpClient
struct UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread
struct RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8;

IL2CPP_EXTERN_C RuntimeClass* AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralBD37381EF3F1C5592B8550DA3E4FBE0D73D1EFBA;
IL2CPP_EXTERN_C String_t* _stringLiteralEBB995C696A493646158B1E14E822F8326AA2C43;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m2C0731E08086235FD02D7FF345D41D824641015F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7B2B211EA00403D20A22C7BE9ABB6C75CEE78558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddFirst_mF9254D6604580CE76567B1E13F42EF28E1A665C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_CopyTo_mBADD51274EC844B23FA838A470F508C862303B69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m34717ACB3637517832915DE95CFE2C2C8ED5C0B8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t101CF50B63EE7735B6D6D30200995AAFE96EDF0B 
{
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant>
struct HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB5AB0BC199D9E6BC4358D0D3C49082E3811F8DEE* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.LinkedListNode`1<System.Byte>
struct LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	uint8_t ___item_3;
};

// System.Collections.Generic.LinkedList`1<System.Byte>
struct LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// jp.kshoji.rtpmidi.AppleMidiParser
struct AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA  : public RuntimeObject
{
	// jp.kshoji.rtpmidi.RtpMidiSession jp.kshoji.rtpmidi.AppleMidiParser::session
	RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session_0;
};
struct Il2CppArrayBounds;

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

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

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

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// jp.kshoji.rtpmidi.RtpMidiConstants
struct RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE  : public RuntimeObject
{
};

struct RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields
{
	// System.Byte[] jp.kshoji.rtpmidi.RtpMidiConstants::Signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature_0;
	// System.Byte[] jp.kshoji.rtpmidi.RtpMidiConstants::ProtocolVersion
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ProtocolVersion_1;
	// System.Byte[] jp.kshoji.rtpmidi.RtpMidiConstants::Invitation
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Invitation_2;
	// System.Byte[] jp.kshoji.rtpmidi.RtpMidiConstants::EndSession
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EndSession_3;
	// System.Byte[] jp.kshoji.rtpmidi.RtpMidiConstants::Synchronization
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Synchronization_4;
	// System.Byte[] jp.kshoji.rtpmidi.RtpMidiConstants::InvitationAccepted
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InvitationAccepted_5;
	// System.Byte[] jp.kshoji.rtpmidi.RtpMidiConstants::InvitationRejected
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InvitationRejected_6;
	// System.Byte[] jp.kshoji.rtpmidi.RtpMidiConstants::ReceiverFeedback
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ReceiverFeedback_7;
	// System.Byte[] jp.kshoji.rtpmidi.RtpMidiConstants::BitrateReceiveLimit
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitrateReceiveLimit_8;
};

// jp.kshoji.rtpmidi.RtpMidiParser
struct RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81  : public RuntimeObject
{
	// System.Boolean jp.kshoji.rtpmidi.RtpMidiParser::rtpHeadersComplete
	bool ___rtpHeadersComplete_0;
	// System.Boolean jp.kshoji.rtpmidi.RtpMidiParser::journalSectionComplete
	bool ___journalSectionComplete_1;
	// System.Int16 jp.kshoji.rtpmidi.RtpMidiParser::midiCommandLength
	int16_t ___midiCommandLength_2;
	// System.Byte jp.kshoji.rtpmidi.RtpMidiParser::journalTotalChannels
	uint8_t ___journalTotalChannels_3;
	// System.Byte jp.kshoji.rtpmidi.RtpMidiParser::rtpMidiFlags
	uint8_t ___rtpMidiFlags_4;
	// jp.kshoji.rtpmidi.RtpMidiSession jp.kshoji.rtpmidi.RtpMidiParser::session
	RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session_5;
};

// jp.kshoji.rtpmidi.RtpMidiParticipant
struct RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC  : public RuntimeObject
{
	// jp.kshoji.rtpmidi.ParticipantKind jp.kshoji.rtpmidi.RtpMidiParticipant::kind
	int32_t ___kind_1;
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiParticipant::ssrc
	int32_t ___ssrc_2;
	// System.Net.IPEndPoint jp.kshoji.rtpmidi.RtpMidiParticipant::ControlEndPoint
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___ControlEndPoint_3;
	// System.Net.IPEndPoint jp.kshoji.rtpmidi.RtpMidiParticipant::DataEndPoint
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___DataEndPoint_4;
	// System.Int64 jp.kshoji.rtpmidi.RtpMidiParticipant::receiverFeedbackStartTime
	int64_t ___receiverFeedbackStartTime_5;
	// System.Boolean jp.kshoji.rtpmidi.RtpMidiParticipant::doReceiverFeedback
	bool ___doReceiverFeedback_6;
	// System.Int16 jp.kshoji.rtpmidi.RtpMidiParticipant::sendSequenceNr
	int16_t ___sendSequenceNr_7;
	// System.Int16 jp.kshoji.rtpmidi.RtpMidiParticipant::receiveSequenceNr
	int16_t ___receiveSequenceNr_8;
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiParticipant::lostPacketCount
	int32_t ___lostPacketCount_9;
	// System.Int64 jp.kshoji.rtpmidi.RtpMidiParticipant::lastSyncExchangeTime
	int64_t ___lastSyncExchangeTime_10;
	// System.String jp.kshoji.rtpmidi.RtpMidiParticipant::sessionName
	String_t* ___sessionName_11;
	// System.Byte jp.kshoji.rtpmidi.RtpMidiParticipant::connectionAttempts
	uint8_t ___connectionAttempts_12;
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiParticipant::initiatorToken
	int32_t ___initiatorToken_13;
	// System.Int64 jp.kshoji.rtpmidi.RtpMidiParticipant::lastInviteSentTime
	int64_t ___lastInviteSentTime_14;
	// jp.kshoji.rtpmidi.InviteStatus jp.kshoji.rtpmidi.RtpMidiParticipant::invitationStatus
	int32_t ___invitationStatus_15;
	// System.Byte jp.kshoji.rtpmidi.RtpMidiParticipant::synchronizationHeartBeats
	uint8_t ___synchronizationHeartBeats_16;
	// System.Byte jp.kshoji.rtpmidi.RtpMidiParticipant::synchronizationCount
	uint8_t ___synchronizationCount_17;
	// System.Boolean jp.kshoji.rtpmidi.RtpMidiParticipant::<Synchronizing>k__BackingField
	bool ___U3CSynchronizingU3Ek__BackingField_18;
	// System.Boolean jp.kshoji.rtpmidi.RtpMidiParticipant::FirstMessageReceived
	bool ___FirstMessageReceived_19;
	// System.Int64 jp.kshoji.rtpmidi.RtpMidiParticipant::<OffsetEstimate>k__BackingField
	int64_t ___U3COffsetEstimateU3Ek__BackingField_20;
	// System.Collections.Generic.LinkedList`1<System.Byte> jp.kshoji.rtpmidi.RtpMidiParticipant::inMidiBuffer
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___inMidiBuffer_22;
	// System.Collections.Generic.LinkedList`1<System.Byte> jp.kshoji.rtpmidi.RtpMidiParticipant::outMidiBuffer
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___outMidiBuffer_23;
	// System.Collections.Generic.LinkedList`1<System.Byte> jp.kshoji.rtpmidi.RtpMidiParticipant::dataBuffer
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___dataBuffer_24;
	// jp.kshoji.rtpmidi.RtpMidiParser jp.kshoji.rtpmidi.RtpMidiParticipant::rtpMidiParser
	RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* ___rtpMidiParser_25;
};

struct RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_StaticFields
{
	// System.Random jp.kshoji.rtpmidi.RtpMidiParticipant::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_0;
};

// jp.kshoji.rtpmidi.RtpMidiServer
struct RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD  : public RuntimeObject
{
	// jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread jp.kshoji.rtpmidi.RtpMidiServer::rtpMidiThread
	RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* ___rtpMidiThread_0;
	// jp.kshoji.rtpmidi.RtpMidiSession jp.kshoji.rtpmidi.RtpMidiServer::session
	RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session_1;
};

// jp.kshoji.rtpmidi.RtpMidiSession
struct RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF  : public RuntimeObject
{
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_0;
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::<Ssrc>k__BackingField
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	// jp.kshoji.rtpmidi.RtpMidiClock jp.kshoji.rtpmidi.RtpMidiSession::rtpMidiClock
	RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* ___rtpMidiClock_2;
	// System.Random jp.kshoji.rtpmidi.RtpMidiSession::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_3;
	// System.Net.Sockets.UdpClient jp.kshoji.rtpmidi.RtpMidiSession::controlPort
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* ___controlPort_4;
	// System.Net.IPEndPoint jp.kshoji.rtpmidi.RtpMidiSession::controlReceivedEndPoint
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___controlReceivedEndPoint_5;
	// System.Net.Sockets.UdpClient jp.kshoji.rtpmidi.RtpMidiSession::dataPort
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* ___dataPort_6;
	// System.Net.IPEndPoint jp.kshoji.rtpmidi.RtpMidiSession::dataReceivedEndPoint
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___dataReceivedEndPoint_7;
	// System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant> jp.kshoji.rtpmidi.RtpMidiSession::participants
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* ___participants_9;
	// System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant> jp.kshoji.rtpmidi.RtpMidiSession::participantsToRemove
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* ___participantsToRemove_10;
	// System.Collections.Generic.LinkedList`1<System.Byte> jp.kshoji.rtpmidi.RtpMidiSession::controlBuffer
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___controlBuffer_11;
	// jp.kshoji.rtpmidi.AppleMidiParser jp.kshoji.rtpmidi.RtpMidiSession::appleMidiParser
	AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA* ___appleMidiParser_12;
	// System.String jp.kshoji.rtpmidi.RtpMidiSession::localName
	String_t* ___localName_18;
	// jp.kshoji.rtpmidi.IRtpMidiEventHandler jp.kshoji.rtpmidi.RtpMidiSession::rtpMidiEventHandler
	RuntimeObject* ___rtpMidiEventHandler_19;
	// jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener jp.kshoji.rtpmidi.RtpMidiSession::deviceConnectionListener
	RuntimeObject* ___deviceConnectionListener_20;
	// jp.kshoji.rtpmidi.IRtpMidiExceptionListener jp.kshoji.rtpmidi.RtpMidiSession::exceptionListener
	RuntimeObject* ___exceptionListener_21;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
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

// System.Net.Sockets.UdpClient
struct UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8  : public RuntimeObject
{
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::m_ClientSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_ClientSocket_1;
	// System.Boolean System.Net.Sockets.UdpClient::m_Active
	bool ___m_Active_2;
	// System.Byte[] System.Net.Sockets.UdpClient::m_Buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer_3;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::m_Family
	int32_t ___m_Family_4;
	// System.Boolean System.Net.Sockets.UdpClient::m_CleanedUp
	bool ___m_CleanedUp_5;
	// System.Boolean System.Net.Sockets.UdpClient::m_IsBroadcast
	bool ___m_IsBroadcast_6;
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

// jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread
struct RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76  : public RuntimeObject
{
	// System.Boolean jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread::IsRunning
	bool ___IsRunning_0;
	// System.Threading.Thread jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread::thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread_1;
};

// jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8  : public RuntimeObject
{
	// jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread/<>c__DisplayClass2_0::<>4__this
	RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* ___U3CU3E4__this_0;
	// jp.kshoji.rtpmidi.RtpMidiSession jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread/<>c__DisplayClass2_0::session
	RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session_1;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<jp.kshoji.rtpmidi.RtpMidiParticipant>
struct Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ____current_3;
};

// System.Nullable`1<System.Byte>
struct Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_2;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_3;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_6;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// jp.kshoji.rtpmidi.Rtp
struct Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 
{
	// System.Byte jp.kshoji.rtpmidi.Rtp::vpxcc
	uint8_t ___vpxcc_0;
	// System.Byte jp.kshoji.rtpmidi.Rtp::mpayload
	uint8_t ___mpayload_1;
	// System.Int16 jp.kshoji.rtpmidi.Rtp::sequenceNr
	int16_t ___sequenceNr_2;
	// System.Int32 jp.kshoji.rtpmidi.Rtp::timestamp
	int32_t ___timestamp_3;
	// System.Int32 jp.kshoji.rtpmidi.Rtp::ssrc
	int32_t ___ssrc_4;
};

// jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit
struct RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273 
{
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::<Ssrc>k__BackingField
	int32_t ___U3CSsrcU3Ek__BackingField_0;
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::<BitrateLimit>k__BackingField
	int32_t ___U3CBitrateLimitU3Ek__BackingField_1;
};

// jp.kshoji.rtpmidi.RtpMidiEndSession
struct RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9 
{
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiEndSession::<InitiatorToken>k__BackingField
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiEndSession::<Ssrc>k__BackingField
	int32_t ___U3CSsrcU3Ek__BackingField_1;
};

// jp.kshoji.rtpmidi.RtpMidiInvitation
struct RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 
{
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitation::<InitiatorToken>k__BackingField
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitation::<Ssrc>k__BackingField
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	// System.String jp.kshoji.rtpmidi.RtpMidiInvitation::<SessionName>k__BackingField
	String_t* ___U3CSessionNameU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of jp.kshoji.rtpmidi.RtpMidiInvitation
struct RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshaled_pinvoke
{
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	char* ___U3CSessionNameU3Ek__BackingField_2;
};
// Native definition for COM marshalling of jp.kshoji.rtpmidi.RtpMidiInvitation
struct RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshaled_com
{
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	Il2CppChar* ___U3CSessionNameU3Ek__BackingField_2;
};

// jp.kshoji.rtpmidi.RtpMidiInvitationAccepted
struct RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 
{
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::<InitiatorToken>k__BackingField
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::<Ssrc>k__BackingField
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	// System.String jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::<SessionName>k__BackingField
	String_t* ___U3CSessionNameU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of jp.kshoji.rtpmidi.RtpMidiInvitationAccepted
struct RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshaled_pinvoke
{
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	char* ___U3CSessionNameU3Ek__BackingField_2;
};
// Native definition for COM marshalling of jp.kshoji.rtpmidi.RtpMidiInvitationAccepted
struct RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshaled_com
{
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	Il2CppChar* ___U3CSessionNameU3Ek__BackingField_2;
};

// jp.kshoji.rtpmidi.RtpMidiInvitationRejected
struct RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040 
{
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationRejected::<InitiatorToken>k__BackingField
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationRejected::<Ssrc>k__BackingField
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	// System.String jp.kshoji.rtpmidi.RtpMidiInvitationRejected::<SessionName>k__BackingField
	String_t* ___U3CSessionNameU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of jp.kshoji.rtpmidi.RtpMidiInvitationRejected
struct RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshaled_pinvoke
{
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	char* ___U3CSessionNameU3Ek__BackingField_2;
};
// Native definition for COM marshalling of jp.kshoji.rtpmidi.RtpMidiInvitationRejected
struct RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshaled_com
{
	int32_t ___U3CInitiatorTokenU3Ek__BackingField_0;
	int32_t ___U3CSsrcU3Ek__BackingField_1;
	Il2CppChar* ___U3CSessionNameU3Ek__BackingField_2;
};

// jp.kshoji.rtpmidi.RtpMidiReceiverFeedback
struct RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E 
{
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::<Ssrc>k__BackingField
	int32_t ___U3CSsrcU3Ek__BackingField_0;
	// System.Int16 jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::<SequenceNr>k__BackingField
	int16_t ___U3CSequenceNrU3Ek__BackingField_1;
};

// jp.kshoji.rtpmidi.RtpMidiSynchronization
struct RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A 
{
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiSynchronization::<Ssrc>k__BackingField
	int32_t ___U3CSsrcU3Ek__BackingField_0;
	// System.Byte jp.kshoji.rtpmidi.RtpMidiSynchronization::<Count>k__BackingField
	uint8_t ___U3CCountU3Ek__BackingField_1;
	// System.Int64[] jp.kshoji.rtpmidi.RtpMidiSynchronization::<Timestamps>k__BackingField
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___U3CTimestampsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of jp.kshoji.rtpmidi.RtpMidiSynchronization
struct RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshaled_pinvoke
{
	int32_t ___U3CSsrcU3Ek__BackingField_0;
	uint8_t ___U3CCountU3Ek__BackingField_1;
	Il2CppSafeArray/*NONE*/* ___U3CTimestampsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of jp.kshoji.rtpmidi.RtpMidiSynchronization
struct RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshaled_com
{
	int32_t ___U3CSsrcU3Ek__BackingField_0;
	uint8_t ___U3CCountU3Ek__BackingField_1;
	Il2CppSafeArray/*NONE*/* ___U3CTimestampsU3Ek__BackingField_2;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// jp.kshoji.rtpmidi.RtpMidiClock
struct RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2  : public RuntimeObject
{
	// System.Int32 jp.kshoji.rtpmidi.RtpMidiClock::clockRate
	int32_t ___clockRate_2;
	// System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::startTime
	int64_t ___startTime_3;
};

struct RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_StaticFields
{
	// System.DateTime jp.kshoji.rtpmidi.RtpMidiClock::Epoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Epoch_1;
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

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
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
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
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


// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Byte>::RemoveFirst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_gshared (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Byte>::AddFirst(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* LinkedList_1_AddFirst_mF9254D6604580CE76567B1E13F42EF28E1A665C6_gshared (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Byte>::get_First()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_gshared_inline (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.LinkedListNode`1<System.Byte>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_gshared_inline (LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Byte>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_gshared (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Byte>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_gshared (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1_gshared (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.LinkedList`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_gshared_inline (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Byte>::AddLast(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_gshared (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Byte>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_gshared (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Byte>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Byte>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_CopyTo_mBADD51274EC844B23FA838A470F508C862303B69_gshared (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;

// System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336 (const RuntimeMethod* method) ;
// System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::CalculateCurrentTimeStamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RtpMidiClock_CalculateCurrentTimeStamp_mEE49CFC07304972CE43B02DF9CA8B34CA85A8CFB (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, const RuntimeMethod* method) ;
// System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::CalculateTimeSpent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RtpMidiClock_CalculateTimeSpent_mDA4BFA5DCF960E9DFB2460B4756ED259B678807A (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared)(___source0, method);
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedRtp(jp.kshoji.rtpmidi.Rtp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedRtp_mC2621016A0CA097C6B302A38C4DE125D7D69645E (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 ___rtp0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Byte>::RemoveFirst()
inline void LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*, const RuntimeMethod*))LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_gshared)(__this, method);
}
// jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.RtpMidiParser::DecodeMidiSection(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiParser_DecodeMidiSection_m1A11A94EE0C6D6B4C2834A089E4DC1CE49AC1E31 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData1, const RuntimeMethod* method) ;
// jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.RtpMidiParser::DecodeJournalSection(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiParser_DecodeJournalSection_m3D7188F13F90C77C2E66F3BA18A8EF60529D6A32 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData1, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiParser::DecodeTime(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiParser_DecodeTime_m3ADC494C67FDD57189FCE05A829669772B955599 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Byte jp.kshoji.rtpmidi.RtpMidiParser::DecodeMidi(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RtpMidiParser_DecodeMidi_m3EE00672430A807D6471F0F9C9E72057FFF88C50 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData1, uint8_t* ___runningStatus2, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedMidi(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedMidi_mB73D360059B664A8681945D34F847DA40ADAD81B (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, uint8_t ___midi0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedMidi(jp.kshoji.rtpmidi.RtpMidiParticipant,jp.kshoji.rtpmidi.MidiType,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedMidi_mC7443254C4EDFD7A6E10191BF365769B65926F44 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, int32_t ___midiType1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data2, const RuntimeMethod* method) ;
// System.Byte jp.kshoji.rtpmidi.RtpMidiParser::DecodeMidiSysEx(System.Collections.Generic.LinkedList`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RtpMidiParser_DecodeMidiSysEx_m0C071D7F62BF2DDA34461F7B547BE6F32EF17DCA (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData0, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Byte>::AddFirst(T)
inline LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* LinkedList_1_AddFirst_mF9254D6604580CE76567B1E13F42EF28E1A665C6 (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* (*) (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*, uint8_t, const RuntimeMethod*))LinkedList_1_AddFirst_mF9254D6604580CE76567B1E13F42EF28E1A665C6_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Byte>::get_First()
inline LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_inline (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* (*) (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*, const RuntimeMethod*))LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_gshared_inline)(__this, method);
}
// T System.Collections.Generic.LinkedListNode`1<System.Byte>::get_Value()
inline uint8_t LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_inline (LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755*, const RuntimeMethod*))LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Byte>::.ctor(T)
inline void Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, uint8_t, const RuntimeMethod*))Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_gshared)(__this, ___value0, method);
}
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_gshared)(___first0, ___second1, method);
}
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C (const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiInvitation__ctor_m68479C50617FDAFD40000AFB502B685AF84B4537 (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, String_t* ___sessionName2, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedInvitation(jp.kshoji.rtpmidi.RtpMidiInvitation,jp.kshoji.rtpmidi.PortType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedInvitation_m6BBDF81180387EDE2B68A603D6B4F96C7E308FAB (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 ___invitation0, int32_t ___portType1, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiEndSession::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D (RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedEndSession(jp.kshoji.rtpmidi.RtpMidiEndSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedEndSession_m58B95EA276CC742F1405E9CBD0D73A9690C7B182 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9 ___endSession0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::.ctor(System.Int32,System.Byte,System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSynchronization__ctor_mA8B795137F855A1526935238789737C18A3FC848 (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, int32_t ___ssrc0, uint8_t ___count1, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___timestamps2, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedSynchronization(jp.kshoji.rtpmidi.RtpMidiSynchronization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedSynchronization_m50146E909893CDE277963444F96314741629933D (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A ___synchronization0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::.ctor(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiReceiverFeedback__ctor_mEC938661E354EF7F2D0BCC617B6B4D5EAFC46DA1 (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, int32_t ___ssrc0, int16_t ___sequenceNr1, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedReceiverFeedback(jp.kshoji.rtpmidi.RtpMidiReceiverFeedback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedReceiverFeedback_m8E21FC7C788B160198541BD185DE2B06B1A287D7 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E ___receiverFeedback0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiInvitationAccepted__ctor_mA4CB69FDD348EA904326DA286F7E43DD2EE41365 (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, String_t* ___sessionName2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Byte>::Clear()
inline void LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67 (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*, const RuntimeMethod*))LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_gshared)(__this, method);
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedInvitationAccepted(jp.kshoji.rtpmidi.RtpMidiInvitationAccepted,jp.kshoji.rtpmidi.PortType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedInvitationAccepted_mAF531DF62FED1792DAD477DDC48E7CB86465E839 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 ___invitationAccepted0, int32_t ___portType1, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitationRejected::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiInvitationRejected__ctor_m2B085695B68E6489A0D2D4658830081368DA3D32 (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, String_t* ___sessionName2, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedInvitationRejected(jp.kshoji.rtpmidi.RtpMidiInvitationRejected)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedInvitationRejected_m30FDC4E5E3025E15BFEFCAA55C0E4799E52FA8D5 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040 ___invitationRejected0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiBitrateReceiveLimit__ctor_m899F4FB060850ED9C3E5E9B83783AF26BC7B621A (RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* __this, int32_t ___ssrc0, int32_t ___bitrateLimit1, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedBitrateReceiveLimit(jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedBitrateReceiveLimit_m967A2C31731C73888F18EFE670184F5EFAAE4C18 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273 ___bitrateReceiveLimit0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::set_InitiatorToken(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::set_Ssrc(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::set_SessionName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitation::get_InitiatorToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitation::get_Ssrc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, const RuntimeMethod* method) ;
// System.String jp.kshoji.rtpmidi.RtpMidiInvitation::get_SessionName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::get_InitiatorToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28_inline (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::get_Ssrc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0_inline (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, const RuntimeMethod* method) ;
// System.String jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::get_SessionName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53_inline (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationRejected::get_InitiatorToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationRejected_get_InitiatorToken_m4E2C63FA156F61A6115C1EBC85C5ABAB0B29698E_inline (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationRejected::get_Ssrc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22_inline (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, const RuntimeMethod* method) ;
// System.String jp.kshoji.rtpmidi.RtpMidiInvitationRejected::get_SessionName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RtpMidiInvitationRejected_get_SessionName_mA780CAAA4017F4A916FA7FBBEDFDE45BBBE6AF6D_inline (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::get_Ssrc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiBitrateReceiveLimit_get_Ssrc_mFDA1650FF97499413CE686A094021ED22B5C03CC_inline (RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* __this, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::get_BitrateLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiBitrateReceiveLimit_get_BitrateLimit_m2500D86E7990624D97B4CCB49F1A287FEBED7974_inline (RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::set_Ssrc(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::set_Count(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::set_Timestamps(System.Int64[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___value0, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSynchronization::get_Ssrc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, const RuntimeMethod* method) ;
// System.Byte jp.kshoji.rtpmidi.RtpMidiSynchronization::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, const RuntimeMethod* method) ;
// System.Int64[] jp.kshoji.rtpmidi.RtpMidiSynchronization::get_Timestamps()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::set_Ssrc(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174_inline (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::set_SequenceNr(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED_inline (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, int16_t ___value0, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::get_Ssrc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_inline (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, const RuntimeMethod* method) ;
// System.Int16 jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::get_SequenceNr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B_inline (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiEndSession::get_InitiatorToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_inline (RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* __this, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiEndSession::get_Ssrc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_inline (RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* __this, const RuntimeMethod* method) ;
// jp.kshoji.rtpmidi.RtpMidiParticipant jp.kshoji.rtpmidi.RtpMidiSession::GetParticipantFromDeviceId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* RtpMidiSession_GetParticipantFromDeviceId_m5E9681536C0782ECA1A6F16CB340ABF0FA4B2991 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, String_t* ___deviceId0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::.ctor(System.String,System.Int32,jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession__ctor_m483B4F64860D904D186DB7526513F3737E56BEB9 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, String_t* ___sessionName0, int32_t ___listenPort1, RuntimeObject* ___deviceConnectionListener2, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::SetMidiEventListener(jp.kshoji.rtpmidi.IRtpMidiEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_SetMidiEventListener_mE2AD07E2C7C6E2B629B3DF4A7A1D177813331C69 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RuntimeObject* ___eventHandler0, const RuntimeMethod* method) ;
// System.Boolean jp.kshoji.rtpmidi.RtpMidiSession::SendInvite(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RtpMidiSession_SendInvite_mE9101385CC91905BF1A282B5B0FA9D9F7CADFEDC (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread::.ctor(jp.kshoji.rtpmidi.RtpMidiSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiThread__ctor_m0FA37BF59644E0FBE249D1F4128DCCFD07DAFD7B (RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* __this, RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiThread_Stop_m260B30396538D3A15ED98FC33870446C14A86C6C (RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiRaw(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// System.Boolean jp.kshoji.rtpmidi.RtpMidiSession::BeginTransmission(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RtpMidiSession_BeginTransmission_m518370F239FDC0C6178C32FEA978C2C5BC6B2B66 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::Write(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_Write_mCB83C01AEF62AFF70B4E233ACC888CD5D80BE116 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, uint8_t ___datum1, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::EndTransmission(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_EndTransmission_mACD6BB6A2D23510484F6EB3153DD86FF4B82F0D2 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m03F0CCDB39111D331F97A97278F2F32CA2099F4F (U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::PulseAll(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_PulseAll_m176CB60AB441BA3F5EC1ADD72BAF603556E9D958 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_Begin_mC52BF739237C5187633D0C6E00C382EAA7C2D075 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageSessionInvites()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ManageSessionInvites_m0D0C32AE1632AE3C51002EF4AD9EC317A98A1214 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReadDataPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReadDataPackets_m68C80889F7EFDFE3FE67673C8F182D64D6F1943D (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant>::GetEnumerator()
inline Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54 (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 (*) (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<jp.kshoji.rtpmidi.RtpMidiParticipant>::Dispose()
inline void Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949 (Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<jp.kshoji.rtpmidi.RtpMidiParticipant>::get_Current()
inline RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline (Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262* __this, const RuntimeMethod* method)
{
	return ((  RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* (*) (Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::Available(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiSession_Available_m87E775EAB23A0890ABEB7796FA20641EBC85D2C8 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Byte jp.kshoji.rtpmidi.RtpMidiSession::Read(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RtpMidiSession_Read_mD146F0D6AB1A0AA91E0E3B32687B722CAA33FA32 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<jp.kshoji.rtpmidi.RtpMidiParticipant>::MoveNext()
inline bool Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1 (Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::ReadControlPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiSession_ReadControlPackets_mA47E6A6C787ED032324BA8A38AE2D62FC4332A5D (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ParseControlPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ParseControlPackets_m8C9367D90111CFE0915D2767D4495F48A45BA00B (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageReceiverFeedback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ManageReceiverFeedback_m0E9CBA03489F02D1565D09F4BC025D8938B0B26A (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageSynchronization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ManageSynchronization_mDF103B072D62660CA1D13901F38E56F00D8B7030 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_Wait_m60B0A448270187089CC75DE856B496C452EF4601 (RuntimeObject* ___obj0, int32_t ___millisecondsTimeout1, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_End_m7863BA59945C973877C9AE0F959694CCC8F06FA6 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Byte>::.ctor()
inline void LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1 (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*, const RuntimeMethod*))LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1_gshared)(__this, method);
}
// System.Void jp.kshoji.rtpmidi.RtpMidiParser::.ctor(jp.kshoji.rtpmidi.RtpMidiSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiParser__ctor_m41EE9465D0F91881879F210D6B49FDE1583A2CF5 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session0, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiClock__ctor_m3B03B531023885415D32314F8CF82A53089FCE91 (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant>::.ctor()
inline void HashSet_1__ctor_m7B2B211EA00403D20A22C7BE9ABB6C75CEE78558 (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void jp.kshoji.rtpmidi.AppleMidiParser::.ctor(jp.kshoji.rtpmidi.RtpMidiSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleMidiParser__ctor_m80DEA11B2D63BFD68BCC01036607BDEA7559F018 (AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA* __this, RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant>::get_Count()
inline int32_t HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_inline (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::.ctor(jp.kshoji.rtpmidi.RtpMidiSession,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiParticipant__ctor_mF9057DE20163285A4D5484F4CB8D106D24054D2F (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant>::Add(T)
inline bool HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E*, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiSession_get_Port_m31BCC9B42C314665019BE60D5C8551879C2C8A86_inline (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// jp.kshoji.rtpmidi.RtpMidiParticipant jp.kshoji.rtpmidi.RtpMidiSession::GetParticipantBySsrc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, int32_t ___ssrc0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::SendEndSession(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_SendEndSession_m58DC5A45D223079AE151E5AEE9ACDD621025E9E5 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::get_Ssrc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92_inline (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteEndSession(System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiEndSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteEndSession_m760F965A73F36677C475AE9ECC67655927C52FE0 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___controlEndPoint0, RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9 ___endSession1, const RuntimeMethod* method) ;
// System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RtpMidiClock_Now_m11B034C9E2C4FB7F9C9EE7FC122495B3D773806E (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteSynchronization(System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiSynchronization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteSynchronization_m27187F9AFDA0FC771DE29C843D3B3B1B5F5DBFA2 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint0, RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A ___synchronization1, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::set_Synchronizing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiParticipant_set_Synchronizing_m85239D61ABFC5F3885A669381565911B47B58371_inline (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::set_Ssrc(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiSession_set_Ssrc_m081E8D90233B36C201EB75EEE015BC983D629C42_inline (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpClient__ctor_m6DCF61B7A404114E51B86974B1B4E028F45C3442 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, int32_t ___port0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiClock::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiClock_Init_mF73EE129B3E7DA01C6D3F8CFA556C49DDCDA622F (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, int32_t ___clockRateValue0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::SendEndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_SendEndSession_m834BBB4F3F21141A5CFFA865313A6E3F8B406385 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.UdpClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpClient_Dispose_m12D6B00FE05B89B2049F79E847BCA2D0490DD63E (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.LinkedList`1<System.Byte>::get_Count()
inline int32_t LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*, const RuntimeMethod*))LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_gshared_inline)(__this, method);
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteRtpMidiBuffer(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteRtpMidiBuffer_m9BDC07852AE1E47C62AD61A44CB70020988BDBD6 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Byte>::AddLast(T)
inline LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11 (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* (*) (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*, uint8_t, const RuntimeMethod*))LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_gshared)(__this, ___value0, method);
}
// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* UdpClient_get_Client_m7338E337D9A97F9050FCAD3A29760AB5CA7AFD9A_inline (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteRtpMidi(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteRtpMidi_m468A4CB83DE0470464BB79362C21CA8D18EB67D3 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ParseDataPackets(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ParseDataPackets_mD145D1C78EB2B83C13D2ACFF1145D73569DD5D40 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Byte>::get_Value()
inline uint8_t Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299 (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_gshared)(__this, method);
}
// System.Int32 System.Net.Sockets.UdpClient::get_Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpClient_get_Available_mBDBB7CEAFFC57F6E35D56B90C2C5458C318925E6 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Net.Sockets.UdpClient::Receive(System.Net.IPEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UdpClient_Receive_mC682A8DE6CD86CEFA3CE52852574FD3437EC7DA9 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB** ___remoteEP0, const RuntimeMethod* method) ;
// jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.RtpMidiParser::Parse(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiParser_Parse_m5248207E239A2F809A5773AEF55ADA983FCE20D8 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData1, const RuntimeMethod* method) ;
// jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.AppleMidiParser::Parse(System.Collections.Generic.LinkedList`1<System.Byte>,jp.kshoji.rtpmidi.PortType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleMidiParser_Parse_mCBF399592EF78A9914D10558553CEC043070E5EF (AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA* __this, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData0, int32_t ___portType1, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedControlInvitation(jp.kshoji.rtpmidi.RtpMidiInvitation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedControlInvitation_m27CF5525C6D42C2EF3C51DE8A6C59844EA6AF086 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 ___invitation0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedDataInvitation(jp.kshoji.rtpmidi.RtpMidiInvitation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedDataInvitation_m40FE0CC6A950AD05F82B16549AE319088C249E23 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 ___invitation0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteInvitation(System.Net.Sockets.UdpClient,System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiInvitation,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* ___udpClient0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint1, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 ___invitation2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___command3, const RuntimeMethod* method) ;
// System.String jp.kshoji.rtpmidi.RtpMidiSession::GetDeviceId(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Byte>::GetValueOrDefault()
inline uint8_t Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.UdpClient::Send(System.Byte[],System.Int32,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpClient_Send_m4DCD3993D7ED39C174F8FC8F653DD30F1BDF47B9 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dgram0, int32_t ___bytes1, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Byte>::CopyTo(T[],System.Int32)
inline void LinkedList_1_CopyTo_mBADD51274EC844B23FA838A470F508C862303B69 (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))LinkedList_1_CopyTo_mBADD51274EC844B23FA838A470F508C862303B69_gshared)(__this, ___array0, ___index1, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant>::Remove(T)
inline bool HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E*, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<jp.kshoji.rtpmidi.RtpMidiParticipant>::Clear()
inline void HashSet_1_Clear_m2C0731E08086235FD02D7FF345D41D824641015F (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteReceiverFeedback(System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiReceiverFeedback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteReceiverFeedback_m5503C97AB226E3DD17CEC685547B16944BD02E21 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint0, RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E ___receiverFeedback1, const RuntimeMethod* method) ;
// System.Boolean jp.kshoji.rtpmidi.RtpMidiParticipant::get_Synchronizing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RtpMidiParticipant_get_Synchronizing_mF60EF42DC53BEC43B3DD61D6100A6400B9A7472B_inline (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, const RuntimeMethod* method) ;
// System.Boolean jp.kshoji.rtpmidi.RtpMidiSession::ManageSynchronizationInitiatorInvites(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RtpMidiSession_ManageSynchronizationInitiatorInvites_m5E93887D867B6B87C76381AD83B357E6616E1D3D (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageSynchronizationInitiatorHeartBeat(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ManageSynchronizationInitiatorHeartBeat_mC50CB3D5B06D77F49806495F668784CB6D0A3F3E (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::SendSynchronization(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_SendSynchronization_m4487D4DE3A13E6E1BAA445C735182EF938675B40 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::set_OffsetEstimate(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiParticipant_set_OffsetEstimate_m247AF18F141787C6EA72D9F1D70F96C01963B2F0_inline (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedControlInvitationAccepted(jp.kshoji.rtpmidi.RtpMidiInvitationAccepted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedControlInvitationAccepted_m9D1659E908820FD4DD6AD5B15016957D727E4733 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 ___invitationAccepted0, const RuntimeMethod* method) ;
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedDataInvitationAccepted(jp.kshoji.rtpmidi.RtpMidiInvitationAccepted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedDataInvitationAccepted_mE116065321485879046AFD3AE95FF9A7630F136C (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 ___invitationAccepted0, const RuntimeMethod* method) ;
// jp.kshoji.rtpmidi.RtpMidiParticipant jp.kshoji.rtpmidi.RtpMidiSession::GetParticipantByInitiatorToken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* RtpMidiSession_GetParticipantByInitiatorToken_m6678E759B1841EB95B3445778489C06EFEEA4417 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, int32_t ___initiatorToken0, const RuntimeMethod* method) ;
// System.Int64 jp.kshoji.rtpmidi.RtpMidiParticipant::get_OffsetEstimate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t RtpMidiParticipant_get_OffsetEstimate_m49C51370146D2B3AA104E0711B8C861461EABA67_inline (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, const RuntimeMethod* method) ;
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
// System.Void jp.kshoji.rtpmidi.RtpMidiClock::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiClock_Init_mF73EE129B3E7DA01C6D3F8CFA556C49DDCDA622F (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, int32_t ___clockRateValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// clockRate = clockRateValue;
		int32_t L_0 = ___clockRateValue0;
		__this->___clockRate_2 = L_0;
		// if (clockRate == 0)
		int32_t L_1 = __this->___clockRate_2;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// clockRate = MidiSamplingRateDefault;
		__this->___clockRate_2 = ((int32_t)10000);
	}

IL_0022:
	{
		// startTime = Ticks();
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_3;
		L_3 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		__this->___startTime_3 = L_3;
		// }
		return;
	}
}
// System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RtpMidiClock_Now_m11B034C9E2C4FB7F9C9EE7FC122495B3D773806E (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// return CalculateCurrentTimeStamp();
		int64_t L_0;
		L_0 = RtpMidiClock_CalculateCurrentTimeStamp_mEE49CFC07304972CE43B02DF9CA8B34CA85A8CFB(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::CalculateCurrentTimeStamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RtpMidiClock_CalculateCurrentTimeStamp_mEE49CFC07304972CE43B02DF9CA8B34CA85A8CFB (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// return CalculateTimeSpent() * clockRate / 1000L;
		int64_t L_0;
		L_0 = RtpMidiClock_CalculateTimeSpent_mDA4BFA5DCF960E9DFB2460B4756ED259B678807A(__this, NULL);
		int32_t L_1 = __this->___clockRate_2;
		V_0 = ((int64_t)(((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)))/((int64_t)((int32_t)1000))));
		goto IL_0019;
	}

IL_0019:
	{
		// }
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::CalculateTimeSpent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RtpMidiClock_CalculateTimeSpent_mDA4BFA5DCF960E9DFB2460B4756ED259B678807A (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// return Ticks() - startTime;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		int64_t L_1 = __this->___startTime_3;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.Int64 jp.kshoji.rtpmidi.RtpMidiClock::Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		// return (long)(DateTime.UtcNow - Epoch).TotalMilliseconds;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var))->___Epoch_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_0), NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int64_t>(L_3);
		goto IL_001c;
	}

IL_001c:
	{
		// }
		int64_t L_4 = V_1;
		return L_4;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiClock__ctor_m3B03B531023885415D32314F8CF82A53089FCE91 (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiClock::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiClock__cctor_m6CE84C5D914CBD0E09D80EF1FFDA5B13F820BE44 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly DateTime Epoch = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var))->___Epoch_1 = L_0;
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
// System.Void jp.kshoji.rtpmidi.RtpMidiParser::.ctor(jp.kshoji.rtpmidi.RtpMidiSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiParser__ctor_m41EE9465D0F91881879F210D6B49FDE1583A2CF5 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session0, const RuntimeMethod* method) 
{
	{
		// public RtpMidiParser(RtpMidiSession session)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.session = session;
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_0 = ___session0;
		__this->___session_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___session_5), (void*)L_0);
		// }
		return;
	}
}
// jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.RtpMidiParser::Parse(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiParser_Parse_m5248207E239A2F809A5773AEF55ADA983FCE20D8 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		// var buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_0 = ___bufferData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_0, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_1;
		// if (!rtpHeadersComplete)
		bool L_2 = __this->___rtpHeadersComplete_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_019e;
		}
	}
	{
		// var consumed = 12;
		V_2 = ((int32_t)12);
		// if (buffer.Length < consumed)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = V_2;
		V_6 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_6;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return ParserResult.NotSureGiveMeMoreData;
		V_7 = 1;
		goto IL_0230;
	}

IL_0031:
	{
		// var rtp = new Rtp();
		il2cpp_codegen_initobj((&V_3), sizeof(Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61));
		// rtp.vpxcc = buffer[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		(&V_3)->___vpxcc_0 = L_9;
		// rtp.mpayload = buffer[1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		(&V_3)->___mpayload_1 = L_12;
		// rtp.sequenceNr = (short)(buffer[2] << 8 | buffer[3]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 2;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 3;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		(&V_3)->___sequenceNr_2 = ((int16_t)((int32_t)(((int32_t)((int32_t)L_15<<8))|(int32_t)L_18)));
		// rtp.timestamp = buffer[4] << 24 | buffer[5] << 16 | buffer[6] << 8 | buffer[7];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 4;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 5;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 6;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 7;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		(&V_3)->___timestamp_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_21<<((int32_t)24)))|((int32_t)((int32_t)L_24<<((int32_t)16)))))|((int32_t)((int32_t)L_27<<8))))|(int32_t)L_30));
		// rtp.ssrc = buffer[8] << 24 | buffer[9] << 16 | buffer[10] << 8 | buffer[11];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 8;
		uint8_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = ((int32_t)9);
		uint8_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)10);
		uint8_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = ((int32_t)11);
		uint8_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		(&V_3)->___ssrc_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_33<<((int32_t)24)))|((int32_t)((int32_t)L_36<<((int32_t)16)))))|((int32_t)((int32_t)L_39<<8))))|(int32_t)L_42));
		// var version = rtp.vpxcc >> 6;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_43 = V_3;
		uint8_t L_44 = L_43.___vpxcc_0;
		V_4 = ((int32_t)((int32_t)L_44>>6));
		// if (version != 2)
		int32_t L_45 = V_4;
		V_8 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_00be;
		}
	}
	{
		// return ParserResult.UnexpectedData;
		V_7 = 3;
		goto IL_0230;
	}

IL_00be:
	{
		// var payloadType = rtp.mpayload & 0x7F;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_47 = V_3;
		uint8_t L_48 = L_47.___mpayload_1;
		V_5 = ((int32_t)((int32_t)L_48&((int32_t)127)));
		// if (payloadType != 97)
		int32_t L_49 = V_5;
		V_9 = (bool)((((int32_t)((((int32_t)L_49) == ((int32_t)((int32_t)97)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_9;
		if (!L_50)
		{
			goto IL_00e1;
		}
	}
	{
		// return ParserResult.UnexpectedData;
		V_7 = 3;
		goto IL_0230;
	}

IL_00e1:
	{
		// session.ReceivedRtp(rtp);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_51 = __this->___session_5;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_52 = V_3;
		NullCheck(L_51);
		RtpMidiSession_ReceivedRtp_mC2621016A0CA097C6B302A38C4DE125D7D69645E(L_51, L_52, NULL);
		// consumed++;
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		// if (buffer.Length < consumed)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = V_2;
		V_10 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_0107;
		}
	}
	{
		// return ParserResult.NotSureGiveMeMoreData;
		V_7 = 1;
		goto IL_0230;
	}

IL_0107:
	{
		// rtpMidiFlags = buffer[12];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = ((int32_t)12);
		uint8_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		__this->___rtpMidiFlags_4 = L_59;
		// midiCommandLength = (short)(rtpMidiFlags & 0x0f);
		uint8_t L_60 = __this->___rtpMidiFlags_4;
		__this->___midiCommandLength_2 = ((int16_t)((int32_t)((int32_t)L_60&((int32_t)15))));
		// if ((rtpMidiFlags & 0x80) == 0x80)
		uint8_t L_61 = __this->___rtpMidiFlags_4;
		V_11 = (bool)((((int32_t)((int32_t)((int32_t)L_61&((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0169;
		}
	}
	{
		// consumed++;
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		// if (buffer.Length < consumed)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_0;
		NullCheck(L_64);
		int32_t L_65 = V_2;
		V_12 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length))) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_12;
		if (!L_66)
		{
			goto IL_0154;
		}
	}
	{
		// return ParserResult.NotSureGiveMeMoreData;
		V_7 = 1;
		goto IL_0230;
	}

IL_0154:
	{
		// midiCommandLength = (short)(midiCommandLength << 8 | buffer[13]);
		int16_t L_67 = __this->___midiCommandLength_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_0;
		NullCheck(L_68);
		int32_t L_69 = ((int32_t)13);
		uint8_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		__this->___midiCommandLength_2 = ((int16_t)((int32_t)(((int32_t)((int32_t)L_67<<8))|(int32_t)L_70)));
	}

IL_0169:
	{
		// for (var i = 0; i < consumed; i++)
		V_13 = 0;
		goto IL_017d;
	}

IL_016e:
	{
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_71 = ___bufferData1;
		NullCheck(L_71);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_71, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < consumed; i++)
		int32_t L_72 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_017d:
	{
		// for (var i = 0; i < consumed; i++)
		int32_t L_73 = V_13;
		int32_t L_74 = V_2;
		V_14 = (bool)((((int32_t)L_73) < ((int32_t)L_74))? 1 : 0);
		bool L_75 = V_14;
		if (L_75)
		{
			goto IL_016e;
		}
	}
	{
		// rtpHeadersComplete = true;
		__this->___rtpHeadersComplete_0 = (bool)1;
		// journalSectionComplete = false;
		__this->___journalSectionComplete_1 = (bool)0;
		// journalTotalChannels = 0;
		__this->___journalTotalChannels_3 = (uint8_t)0;
	}

IL_019e:
	{
		// if (midiCommandLength > 0)
		int16_t L_76 = __this->___midiCommandLength_2;
		V_15 = (bool)((((int32_t)L_76) > ((int32_t)0))? 1 : 0);
		bool L_77 = V_15;
		if (!L_77)
		{
			goto IL_01df;
		}
	}
	{
		// var retVal = DecodeMidiSection(participant, bufferData);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_78 = ___participant0;
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_79 = ___bufferData1;
		int32_t L_80;
		L_80 = RtpMidiParser_DecodeMidiSection_m1A11A94EE0C6D6B4C2834A089E4DC1CE49AC1E31(__this, L_78, L_79, NULL);
		V_16 = L_80;
		// switch (retVal)
		int32_t L_81 = V_16;
		V_18 = L_81;
		int32_t L_82 = V_18;
		V_17 = L_82;
		int32_t L_83 = V_17;
		if (!L_83)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_01c6;
	}

IL_01c6:
	{
		int32_t L_84 = V_17;
		if ((((int32_t)L_84) == ((int32_t)4)))
		{
			goto IL_01cf;
		}
	}
	{
		goto IL_01d8;
	}

IL_01cd:
	{
		// break;
		goto IL_01de;
	}

IL_01cf:
	{
		// rtpHeadersComplete = false;
		__this->___rtpHeadersComplete_0 = (bool)0;
		// break;
		goto IL_01de;
	}

IL_01d8:
	{
		// return retVal;
		int32_t L_85 = V_16;
		V_7 = L_85;
		goto IL_0230;
	}

IL_01de:
	{
	}

IL_01df:
	{
		// if ((rtpMidiFlags & 0x40) == 0x40)
		uint8_t L_86 = __this->___rtpMidiFlags_4;
		V_19 = (bool)((((int32_t)((int32_t)((int32_t)L_86&((int32_t)64)))) == ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_87 = V_19;
		if (!L_87)
		{
			goto IL_0224;
		}
	}
	{
		// var retVal = DecodeJournalSection(participant, bufferData);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_88 = ___participant0;
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_89 = ___bufferData1;
		int32_t L_90;
		L_90 = RtpMidiParser_DecodeJournalSection_m3D7188F13F90C77C2E66F3BA18A8EF60529D6A32(__this, L_88, L_89, NULL);
		V_20 = L_90;
		// switch (retVal)
		int32_t L_91 = V_20;
		V_22 = L_91;
		int32_t L_92 = V_22;
		V_21 = L_92;
		int32_t L_93 = V_21;
		if (!L_93)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_020b;
	}

IL_020b:
	{
		int32_t L_94 = V_21;
		if ((((int32_t)L_94) == ((int32_t)5)))
		{
			goto IL_0214;
		}
	}
	{
		goto IL_021d;
	}

IL_0212:
	{
		// break;
		goto IL_0223;
	}

IL_0214:
	{
		// rtpHeadersComplete = false;
		__this->___rtpHeadersComplete_0 = (bool)0;
		// break;
		goto IL_0223;
	}

IL_021d:
	{
		// return retVal;
		int32_t L_95 = V_20;
		V_7 = L_95;
		goto IL_0230;
	}

IL_0223:
	{
	}

IL_0224:
	{
		// rtpHeadersComplete = false;
		__this->___rtpHeadersComplete_0 = (bool)0;
		// return ParserResult.Processed;
		V_7 = 0;
		goto IL_0230;
	}

IL_0230:
	{
		// }
		int32_t L_96 = V_7;
		return L_96;
	}
}
// jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.RtpMidiParser::DecodeMidiSection(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiParser_DecodeMidiSection_m1A11A94EE0C6D6B4C2834A089E4DC1CE49AC1E31 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	uint8_t V_11 = 0x0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B30_0 = 0;
	{
		// var buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_0 = ___bufferData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_0, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_1;
		// int cmdCount = 0;
		V_1 = 0;
		// byte runningStatus = 0;
		V_2 = (uint8_t)0;
		goto IL_0153;
	}

IL_0011:
	{
		// if (cmdCount != 0 || (rtpMidiFlags & 0x20) == 0x20)
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_3 = __this->___rtpMidiFlags_4;
		G_B4_0 = ((((int32_t)((int32_t)((int32_t)L_3&((int32_t)32)))) == ((int32_t)((int32_t)32)))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 1;
	}

IL_0025:
	{
		V_3 = (bool)G_B4_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_00a0;
		}
	}
	{
		// var consumed = DecodeTime(buffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6;
		L_6 = RtpMidiParser_DecodeTime_m3ADC494C67FDD57189FCE05A829669772B955599(__this, L_5, NULL);
		V_4 = L_6;
		// if (consumed < 0)
		int32_t L_7 = V_4;
		V_5 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_6 = 2;
		goto IL_016a;
	}

IL_0047:
	{
		// midiCommandLength -= (byte)consumed;
		int16_t L_9 = __this->___midiCommandLength_2;
		int32_t L_10 = V_4;
		__this->___midiCommandLength_2 = ((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, ((int32_t)(uint8_t)L_10))));
		// for (var i = 0; i < consumed; i++)
		V_7 = 0;
		goto IL_006c;
	}

IL_005d:
	{
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_11 = ___bufferData1;
		NullCheck(L_11);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_11, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < consumed; i++)
		int32_t L_12 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_006c:
	{
		// for (var i = 0; i < consumed; i++)
		int32_t L_13 = V_7;
		int32_t L_14 = V_4;
		V_8 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_8;
		if (L_15)
		{
			goto IL_005d;
		}
	}
	{
		// buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_16 = ___bufferData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_16, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_17;
		// if (midiCommandLength > 0 && 0 >= buffer.Length)
		int16_t L_18 = __this->___midiCommandLength_2;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		NullCheck(L_19);
		G_B13_0 = ((((int32_t)(((RuntimeArray*)L_19)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B13_0 = 0;
	}

IL_0090:
	{
		V_9 = (bool)G_B13_0;
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_009f;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_6 = 2;
		goto IL_016a;
	}

IL_009f:
	{
	}

IL_00a0:
	{
		// if (midiCommandLength > 0)
		int16_t L_21 = __this->___midiCommandLength_2;
		V_10 = (bool)((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
		bool L_22 = V_10;
		if (!L_22)
		{
			goto IL_0152;
		}
	}
	{
		// var consumed = DecodeMidi(participant, bufferData, ref runningStatus);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_23 = ___participant0;
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_24 = ___bufferData1;
		uint8_t L_25;
		L_25 = RtpMidiParser_DecodeMidi_m3EE00672430A807D6471F0F9C9E72057FFF88C50(__this, L_23, L_24, (&V_2), NULL);
		V_11 = L_25;
		// buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_26 = ___bufferData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_26, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_27;
		// if (consumed == 0 || consumed > buffer.Length)
		uint8_t L_28 = V_11;
		if (!L_28)
		{
			goto IL_00d3;
		}
	}
	{
		uint8_t L_29 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		NullCheck(L_30);
		G_B20_0 = ((((int32_t)L_29) > ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))? 1 : 0);
		goto IL_00d4;
	}

IL_00d3:
	{
		G_B20_0 = 1;
	}

IL_00d4:
	{
		V_12 = (bool)G_B20_0;
		bool L_31 = V_12;
		if (!L_31)
		{
			goto IL_00e3;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_6 = 2;
		goto IL_016a;
	}

IL_00e3:
	{
		// if (consumed > midiCommandLength)
		uint8_t L_32 = V_11;
		int16_t L_33 = __this->___midiCommandLength_2;
		V_13 = (bool)((((int32_t)L_32) > ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_13;
		if (!L_34)
		{
			goto IL_00f9;
		}
	}
	{
		// return ParserResult.UnexpectedMidiData;
		V_6 = 4;
		goto IL_016a;
	}

IL_00f9:
	{
		// midiCommandLength -= consumed;
		int16_t L_35 = __this->___midiCommandLength_2;
		uint8_t L_36 = V_11;
		__this->___midiCommandLength_2 = ((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)));
		// for (var i = 0; i < consumed; i++)
		V_14 = 0;
		goto IL_011d;
	}

IL_010e:
	{
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_37 = ___bufferData1;
		NullCheck(L_37);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_37, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < consumed; i++)
		int32_t L_38 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_011d:
	{
		// for (var i = 0; i < consumed; i++)
		int32_t L_39 = V_14;
		uint8_t L_40 = V_11;
		V_15 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_15;
		if (L_41)
		{
			goto IL_010e;
		}
	}
	{
		// buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_42 = ___bufferData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43;
		L_43 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_42, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_43;
		// if (midiCommandLength > 0 && 0 >= buffer.Length)
		int16_t L_44 = __this->___midiCommandLength_2;
		if ((((int32_t)L_44) <= ((int32_t)0)))
		{
			goto IL_0140;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		NullCheck(L_45);
		G_B30_0 = ((((int32_t)(((RuntimeArray*)L_45)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0141;
	}

IL_0140:
	{
		G_B30_0 = 0;
	}

IL_0141:
	{
		V_16 = (bool)G_B30_0;
		bool L_46 = V_16;
		if (!L_46)
		{
			goto IL_014d;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_6 = 2;
		goto IL_016a;
	}

IL_014d:
	{
		// cmdCount++;
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0152:
	{
	}

IL_0153:
	{
		// while (midiCommandLength > 0)
		int16_t L_48 = __this->___midiCommandLength_2;
		V_17 = (bool)((((int32_t)L_48) > ((int32_t)0))? 1 : 0);
		bool L_49 = V_17;
		if (L_49)
		{
			goto IL_0011;
		}
	}
	{
		// return ParserResult.Processed;
		V_6 = 0;
		goto IL_016a;
	}

IL_016a:
	{
		// }
		int32_t L_50 = V_6;
		return L_50;
	}
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiParser::DecodeTime(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiParser_DecodeTime_m3ADC494C67FDD57189FCE05A829669772B955599 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		// byte consumed = 0;
		V_0 = (uint8_t)0;
		// int deltatime = 0;
		V_1 = 0;
		// for (var j = 0; j < 4; j++)
		V_2 = 0;
		goto IL_0046;
	}

IL_0009:
	{
		// if (buffer.Length < consumed)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		NullCheck(L_0);
		uint8_t L_1 = V_0;
		V_4 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return -1;
		V_5 = (-1);
		goto IL_0055;
	}

IL_001c:
	{
		// byte octet = buffer[consumed];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		uint8_t L_4 = V_0;
		NullCheck(L_3);
		uint8_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// deltatime = (deltatime << 7) | (octet & 0x7f);
		int32_t L_7 = V_1;
		uint8_t L_8 = V_3;
		V_1 = ((int32_t)(((int32_t)(L_7<<7))|((int32_t)((int32_t)L_8&((int32_t)127)))));
		// consumed++;
		uint8_t L_9 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, 1)));
		// if ((octet & 0x80) == 0)
		uint8_t L_10 = V_3;
		V_6 = (bool)((((int32_t)((int32_t)((int32_t)L_10&((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		// break;
		goto IL_0050;
	}

IL_0041:
	{
		// for (var j = 0; j < 4; j++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0046:
	{
		// for (var j = 0; j < 4; j++)
		int32_t L_13 = V_2;
		V_7 = (bool)((((int32_t)L_13) < ((int32_t)4))? 1 : 0);
		bool L_14 = V_7;
		if (L_14)
		{
			goto IL_0009;
		}
	}

IL_0050:
	{
		// return consumed;
		uint8_t L_15 = V_0;
		V_5 = L_15;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		int32_t L_16 = V_5;
		return L_16;
	}
}
// System.Byte jp.kshoji.rtpmidi.RtpMidiParser::DecodeMidi(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RtpMidiParser_DecodeMidi_m3EE00672430A807D6471F0F9C9E72057FFF88C50 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData1, uint8_t* ___runningStatus2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	bool V_22 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	int32_t G_B41_0 = 0;
	uint8_t G_B43_0 = 0x0;
	uint8_t G_B42_0 = 0x0;
	int32_t G_B44_0 = 0;
	uint8_t G_B44_1 = 0x0;
	int32_t G_B49_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B49_1 = NULL;
	int32_t G_B48_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B48_1 = NULL;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B50_2 = NULL;
	int32_t G_B65_0 = 0;
	uint8_t G_B67_0 = 0x0;
	uint8_t G_B66_0 = 0x0;
	int32_t G_B68_0 = 0;
	uint8_t G_B68_1 = 0x0;
	int32_t G_B73_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B73_1 = NULL;
	int32_t G_B72_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B72_1 = NULL;
	int32_t G_B74_0 = 0;
	int32_t G_B74_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B74_2 = NULL;
	{
		// byte consumed = 0;
		V_0 = (uint8_t)0;
		// var buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_0 = ___bufferData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_0, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_1 = L_1;
		// if (buffer.Length < 1)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		V_3 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return 0;
		V_4 = (uint8_t)0;
		goto IL_02ff;
	}

IL_001d:
	{
		// var octet = buffer[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (octet >= 0xf8)
		uint8_t L_7 = V_2;
		V_5 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)((int32_t)248)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		// session.ReceivedMidi(octet);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_9 = __this->___session_5;
		uint8_t L_10 = V_2;
		NullCheck(L_9);
		RtpMidiSession_ReceivedMidi_mB73D360059B664A8681945D34F847DA40ADAD81B(L_9, L_10, NULL);
		// session.ReceivedMidi(participant, (MidiType)octet, new []{octet});
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_11 = __this->___session_5;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_12 = ___participant0;
		uint8_t L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		uint8_t L_16 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_16);
		NullCheck(L_11);
		RtpMidiSession_ReceivedMidi_mC7443254C4EDFD7A6E10191BF365769B65926F44(L_11, L_12, L_13, L_15, NULL);
		// return 1;
		V_4 = (uint8_t)1;
		goto IL_02ff;
	}

IL_0060:
	{
		// if ((octet & 0x80) == 0)
		uint8_t L_17 = V_2;
		V_6 = (bool)((((int32_t)((int32_t)((int32_t)L_17&((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0091;
		}
	}
	{
		// if ((runningStatus & 0x80) == 0)
		uint8_t* L_19 = ___runningStatus2;
		int32_t L_20 = *((uint8_t*)L_19);
		V_7 = (bool)((((int32_t)((int32_t)(L_20&((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		// return 0;
		V_4 = (uint8_t)0;
		goto IL_02ff;
	}

IL_008b:
	{
		// octet = runningStatus;
		uint8_t* L_22 = ___runningStatus2;
		int32_t L_23 = *((uint8_t*)L_22);
		V_2 = (uint8_t)L_23;
		goto IL_00b2;
	}

IL_0091:
	{
		// if (octet < 0xf0)
		uint8_t L_24 = V_2;
		V_8 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)240)))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00a7;
		}
	}
	{
		// runningStatus = octet;
		uint8_t* L_26 = ___runningStatus2;
		uint8_t L_27 = V_2;
		*((int8_t*)L_26) = (int8_t)L_27;
		goto IL_00ac;
	}

IL_00a7:
	{
		// runningStatus = 0;
		uint8_t* L_28 = ___runningStatus2;
		*((int8_t*)L_28) = (int8_t)0;
	}

IL_00ac:
	{
		// consumed++;
		uint8_t L_29 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, 1)));
	}

IL_00b2:
	{
		// if (octet < 0xf0)
		uint8_t L_30 = V_2;
		V_9 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)240)))? 1 : 0);
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_0203;
		}
	}
	{
		// var type = (MidiType)(octet & 0xf0);
		uint8_t L_32 = V_2;
		V_10 = ((int32_t)((int32_t)L_32&((int32_t)240)));
		// switch (type)
		int32_t L_33 = V_10;
		V_14 = L_33;
		int32_t L_34 = V_14;
		V_13 = L_34;
		int32_t L_35 = V_13;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)160))))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_36 = V_13;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)128))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_00e9;
	}

IL_00e9:
	{
		int32_t L_37 = V_13;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)144))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_00f4;
	}

IL_00f4:
	{
		int32_t L_38 = V_13;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)160))))
		{
			goto IL_0142;
		}
	}
	{
		goto IL_0165;
	}

IL_00ff:
	{
		int32_t L_39 = V_13;
		if ((((int32_t)L_39) > ((int32_t)((int32_t)192))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_40 = V_13;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)176))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_13;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)192))))
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0165;
	}

IL_011e:
	{
		int32_t L_42 = V_13;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)208))))
		{
			goto IL_0157;
		}
	}
	{
		goto IL_0129;
	}

IL_0129:
	{
		int32_t L_43 = V_13;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)224))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0165;
	}

IL_0134:
	{
		// consumed += 2;
		uint8_t L_44 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, 2)));
		// break;
		goto IL_0165;
	}

IL_013b:
	{
		// consumed += 2;
		uint8_t L_45 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, 2)));
		// break;
		goto IL_0165;
	}

IL_0142:
	{
		// consumed += 2;
		uint8_t L_46 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, 2)));
		// break;
		goto IL_0165;
	}

IL_0149:
	{
		// consumed += 2;
		uint8_t L_47 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, 2)));
		// break;
		goto IL_0165;
	}

IL_0150:
	{
		// consumed += 1;
		uint8_t L_48 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, 1)));
		// break;
		goto IL_0165;
	}

IL_0157:
	{
		// consumed += 1;
		uint8_t L_49 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, 1)));
		// break;
		goto IL_0165;
	}

IL_015e:
	{
		// consumed += 2;
		uint8_t L_50 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, 2)));
		// break;
		goto IL_0165;
	}

IL_0165:
	{
		// if (buffer.Length < consumed)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_1;
		NullCheck(L_51);
		uint8_t L_52 = V_0;
		V_15 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))) < ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_15;
		if (!L_53)
		{
			goto IL_017a;
		}
	}
	{
		// return 0;
		V_4 = (uint8_t)0;
		goto IL_02ff;
	}

IL_017a:
	{
		// bool addRunningStatus = runningStatus != 0 && (buffer[0] & 0x80) == 0;
		uint8_t* L_54 = ___runningStatus2;
		int32_t L_55 = *((uint8_t*)L_54);
		if (!L_55)
		{
			goto IL_018c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = 0;
		uint8_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		G_B41_0 = ((((int32_t)((int32_t)((int32_t)L_58&((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		goto IL_018d;
	}

IL_018c:
	{
		G_B41_0 = 0;
	}

IL_018d:
	{
		V_11 = (bool)G_B41_0;
		// byte[] midiData = new byte[consumed + (addRunningStatus ? 1 : 0)];
		uint8_t L_59 = V_0;
		bool L_60 = V_11;
		G_B42_0 = L_59;
		if (L_60)
		{
			G_B43_0 = L_59;
			goto IL_0197;
		}
	}
	{
		G_B44_0 = 0;
		G_B44_1 = G_B42_0;
		goto IL_0198;
	}

IL_0197:
	{
		G_B44_0 = 1;
		G_B44_1 = G_B43_0;
	}

IL_0198:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B44_1, G_B44_0)));
		V_12 = L_61;
		// if (addRunningStatus)
		bool L_62 = V_11;
		V_16 = L_62;
		bool L_63 = V_16;
		if (!L_63)
		{
			goto IL_01b0;
		}
	}
	{
		// midiData[0] = runningStatus;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_12;
		uint8_t* L_65 = ___runningStatus2;
		int32_t L_66 = *((uint8_t*)L_65);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_66);
	}

IL_01b0:
	{
		// for (var j = 0; j < consumed; j++)
		V_17 = 0;
		goto IL_01df;
	}

IL_01b5:
	{
		// session.ReceivedMidi(buffer[j]);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_67 = __this->___session_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_1;
		int32_t L_69 = V_17;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_67);
		RtpMidiSession_ReceivedMidi_mB73D360059B664A8681945D34F847DA40ADAD81B(L_67, L_71, NULL);
		// midiData[j + (addRunningStatus ? 1 : 0)] = buffer[j];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_12;
		int32_t L_73 = V_17;
		bool L_74 = V_11;
		G_B48_0 = L_73;
		G_B48_1 = L_72;
		if (L_74)
		{
			G_B49_0 = L_73;
			G_B49_1 = L_72;
			goto IL_01d1;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		G_B50_2 = G_B48_1;
		goto IL_01d2;
	}

IL_01d1:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
		G_B50_2 = G_B49_1;
	}

IL_01d2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_1;
		int32_t L_76 = V_17;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(G_B50_2);
		(G_B50_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(G_B50_1, G_B50_0))), (uint8_t)L_78);
		// for (var j = 0; j < consumed; j++)
		int32_t L_79 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_01df:
	{
		// for (var j = 0; j < consumed; j++)
		int32_t L_80 = V_17;
		uint8_t L_81 = V_0;
		V_18 = (bool)((((int32_t)L_80) < ((int32_t)L_81))? 1 : 0);
		bool L_82 = V_18;
		if (L_82)
		{
			goto IL_01b5;
		}
	}
	{
		// session.ReceivedMidi(participant, type, midiData);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_83 = __this->___session_5;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_84 = ___participant0;
		int32_t L_85 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_12;
		NullCheck(L_83);
		RtpMidiSession_ReceivedMidi_mC7443254C4EDFD7A6E10191BF365769B65926F44(L_83, L_84, L_85, L_86, NULL);
		// return consumed;
		uint8_t L_87 = V_0;
		V_4 = L_87;
		goto IL_02ff;
	}

IL_0203:
	{
		// switch ((MidiType)octet)
		uint8_t L_88 = V_2;
		V_20 = L_88;
		int32_t L_89 = V_20;
		V_19 = L_89;
		int32_t L_90 = V_19;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_90, ((int32_t)240))))
		{
			case 0:
			{
				goto IL_0239;
			}
			case 1:
			{
				goto IL_025e;
			}
			case 2:
			{
				goto IL_0265;
			}
			case 3:
			{
				goto IL_026c;
			}
			case 4:
			{
				goto IL_0275;
			}
			case 5:
			{
				goto IL_0275;
			}
			case 6:
			{
				goto IL_0273;
			}
			case 7:
			{
				goto IL_0239;
			}
		}
	}
	{
		goto IL_0275;
	}

IL_0239:
	{
		// consumed = DecodeMidiSysEx(bufferData);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_91 = ___bufferData1;
		uint8_t L_92;
		L_92 = RtpMidiParser_DecodeMidiSysEx_m0C071D7F62BF2DDA34461F7B547BE6F32EF17DCA(__this, L_91, NULL);
		V_0 = L_92;
		// buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_93 = ___bufferData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94;
		L_94 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_93, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_1 = L_94;
		// if (consumed > RtpMidiParticipant.MaxBufferSize)
		uint8_t L_95 = V_0;
		V_21 = (bool)((((int32_t)L_95) > ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_96 = V_21;
		if (!L_96)
		{
			goto IL_025c;
		}
	}
	{
		// return consumed;
		uint8_t L_97 = V_0;
		V_4 = L_97;
		goto IL_02ff;
	}

IL_025c:
	{
		// break;
		goto IL_0275;
	}

IL_025e:
	{
		// consumed += 1;
		uint8_t L_98 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_98, 1)));
		// break;
		goto IL_0275;
	}

IL_0265:
	{
		// consumed += 2;
		uint8_t L_99 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, 2)));
		// break;
		goto IL_0275;
	}

IL_026c:
	{
		// consumed += 1;
		uint8_t L_100 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, 1)));
		// break;
		goto IL_0275;
	}

IL_0273:
	{
		// break;
		goto IL_0275;
	}

IL_0275:
	{
		// bool addRunningStatus = runningStatus != 0 && (buffer[0] & 0x80) != 0;
		uint8_t* L_101 = ___runningStatus2;
		int32_t L_102 = *((uint8_t*)L_101);
		if (!L_102)
		{
			goto IL_0288;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_1;
		NullCheck(L_103);
		int32_t L_104 = 0;
		uint8_t L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		G_B65_0 = ((!(((uint32_t)((int32_t)((int32_t)L_105&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0289;
	}

IL_0288:
	{
		G_B65_0 = 0;
	}

IL_0289:
	{
		V_22 = (bool)G_B65_0;
		// byte[] midiData = new byte[consumed + (addRunningStatus ? 1 : 0)];
		uint8_t L_106 = V_0;
		bool L_107 = V_22;
		G_B66_0 = L_106;
		if (L_107)
		{
			G_B67_0 = L_106;
			goto IL_0293;
		}
	}
	{
		G_B68_0 = 0;
		G_B68_1 = G_B66_0;
		goto IL_0294;
	}

IL_0293:
	{
		G_B68_0 = 1;
		G_B68_1 = G_B67_0;
	}

IL_0294:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B68_1, G_B68_0)));
		V_23 = L_108;
		// if (runningStatus != 0)
		uint8_t* L_109 = ___runningStatus2;
		int32_t L_110 = *((uint8_t*)L_109);
		V_24 = (bool)((!(((uint32_t)L_110) <= ((uint32_t)0)))? 1 : 0);
		bool L_111 = V_24;
		if (!L_111)
		{
			goto IL_02af;
		}
	}
	{
		// midiData[0] = runningStatus;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_23;
		uint8_t* L_113 = ___runningStatus2;
		int32_t L_114 = *((uint8_t*)L_113);
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_114);
	}

IL_02af:
	{
		// for (var j = 0; j < consumed; j++)
		V_25 = 0;
		goto IL_02de;
	}

IL_02b4:
	{
		// session.ReceivedMidi(buffer[j]);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_115 = __this->___session_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = V_1;
		int32_t L_117 = V_25;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		uint8_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_115);
		RtpMidiSession_ReceivedMidi_mB73D360059B664A8681945D34F847DA40ADAD81B(L_115, L_119, NULL);
		// midiData[j + (addRunningStatus ? 1 : 0)] = buffer[j];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_120 = V_23;
		int32_t L_121 = V_25;
		bool L_122 = V_22;
		G_B72_0 = L_121;
		G_B72_1 = L_120;
		if (L_122)
		{
			G_B73_0 = L_121;
			G_B73_1 = L_120;
			goto IL_02d0;
		}
	}
	{
		G_B74_0 = 0;
		G_B74_1 = G_B72_0;
		G_B74_2 = G_B72_1;
		goto IL_02d1;
	}

IL_02d0:
	{
		G_B74_0 = 1;
		G_B74_1 = G_B73_0;
		G_B74_2 = G_B73_1;
	}

IL_02d1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = V_1;
		int32_t L_124 = V_25;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		uint8_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(G_B74_2);
		(G_B74_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(G_B74_1, G_B74_0))), (uint8_t)L_126);
		// for (var j = 0; j < consumed; j++)
		int32_t L_127 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_02de:
	{
		// for (var j = 0; j < consumed; j++)
		int32_t L_128 = V_25;
		uint8_t L_129 = V_0;
		V_26 = (bool)((((int32_t)L_128) < ((int32_t)L_129))? 1 : 0);
		bool L_130 = V_26;
		if (L_130)
		{
			goto IL_02b4;
		}
	}
	{
		// session.ReceivedMidi(participant, (MidiType)octet, midiData);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_131 = __this->___session_5;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_132 = ___participant0;
		uint8_t L_133 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = V_23;
		NullCheck(L_131);
		RtpMidiSession_ReceivedMidi_mC7443254C4EDFD7A6E10191BF365769B65926F44(L_131, L_132, L_133, L_134, NULL);
		// return consumed;
		uint8_t L_135 = V_0;
		V_4 = L_135;
		goto IL_02ff;
	}

IL_02ff:
	{
		// }
		uint8_t L_136 = V_4;
		return L_136;
	}
}
// System.Byte jp.kshoji.rtpmidi.RtpMidiParser::DecodeMidiSysEx(System.Collections.Generic.LinkedList`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RtpMidiParser_DecodeMidiSysEx_m0C071D7F62BF2DDA34461F7B547BE6F32EF17DCA (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddFirst_mF9254D6604580CE76567B1E13F42EF28E1A665C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	{
		// byte consumed = 1; // beginning SysEx Token is not counted (as it could remain)
		V_0 = (uint8_t)1;
		// var buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_0 = ___bufferData0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_0, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_0043;
	}

IL_000c:
	{
		// var octet = buffer[consumed++];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		uint8_t L_3 = V_0;
		uint8_t L_4 = L_3;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, 1)));
		NullCheck(L_2);
		uint8_t L_5 = L_4;
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (octet == (int)MidiType.SystemExclusiveEnd) // Complete message
		uint8_t L_7 = V_2;
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)247)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		// return consumed;
		uint8_t L_9 = V_0;
		V_4 = L_9;
		goto IL_00dc;
	}

IL_002b:
	{
		// if (octet == (int)MidiType.SystemExclusiveStart) // Start
		uint8_t L_10 = V_2;
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)((int32_t)240)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		// return consumed;
		uint8_t L_12 = V_0;
		V_4 = L_12;
		goto IL_00dc;
	}

IL_0042:
	{
	}

IL_0043:
	{
		// while (consumed < buffer.Length)
		uint8_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		V_6 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))? 1 : 0);
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_000c;
		}
	}
	{
		// consumed--;
		uint8_t L_16 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, 1)));
		// for (var i = 0; i < consumed; i++)
		V_7 = 0;
		goto IL_0071;
	}

IL_0059:
	{
		// session.ReceivedMidi(buffer[i]);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_17 = __this->___session_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		RtpMidiSession_ReceivedMidi_mB73D360059B664A8681945D34F847DA40ADAD81B(L_17, L_21, NULL);
		// for (var i = 0; i < consumed; i++)
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0071:
	{
		// for (var i = 0; i < consumed; i++)
		int32_t L_23 = V_7;
		uint8_t L_24 = V_0;
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_0059;
		}
	}
	{
		// session.ReceivedMidi((byte)MidiType.SystemExclusiveStart);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_26 = __this->___session_5;
		NullCheck(L_26);
		RtpMidiSession_ReceivedMidi_mB73D360059B664A8681945D34F847DA40ADAD81B(L_26, (uint8_t)((int32_t)240), NULL);
		// for (var i = 0; i < consumed; i++)
		V_9 = 0;
		goto IL_00a1;
	}

IL_0092:
	{
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_27 = ___bufferData0;
		NullCheck(L_27);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_27, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < consumed; i++)
		int32_t L_28 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a1:
	{
		// for (var i = 0; i < consumed; i++)
		int32_t L_29 = V_9;
		uint8_t L_30 = V_0;
		V_10 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_10;
		if (L_31)
		{
			goto IL_0092;
		}
	}
	{
		// bufferData.AddFirst((byte)MidiType.SystemExclusiveEnd);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_32 = ___bufferData0;
		NullCheck(L_32);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_33;
		L_33 = LinkedList_1_AddFirst_mF9254D6604580CE76567B1E13F42EF28E1A665C6(L_32, (uint8_t)((int32_t)247), LinkedList_1_AddFirst_mF9254D6604580CE76567B1E13F42EF28E1A665C6_RuntimeMethod_var);
		// midiCommandLength -= consumed;
		int16_t L_34 = __this->___midiCommandLength_2;
		uint8_t L_35 = V_0;
		__this->___midiCommandLength_2 = ((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_35)));
		// midiCommandLength += 1; // adding the manual SysEx SystemExclusiveEnd
		int16_t L_36 = __this->___midiCommandLength_2;
		__this->___midiCommandLength_2 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, 1)));
		// return RtpMidiParticipant.MaxBufferSize + 1;
		V_4 = (uint8_t)((int32_t)65);
		goto IL_00dc;
	}

IL_00dc:
	{
		// }
		uint8_t L_37 = V_4;
		return L_37;
	}
}
// jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.RtpMidiParser::DecodeJournalSection(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Collections.Generic.LinkedList`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiParser_DecodeJournalSection_m3D7188F13F90C77C2E66F3BA18A8EF60529D6A32 (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	bool V_16 = false;
	int16_t V_17 = 0;
	int16_t V_18 = 0;
	int16_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t V_23 = 0;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_26 = NULL;
	int32_t V_27 = 0;
	uint8_t V_28 = 0x0;
	bool V_29 = false;
	int16_t V_30 = 0;
	uint8_t V_31 = 0x0;
	bool V_32 = false;
	bool V_33 = false;
	int32_t V_34 = 0;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_35;
	memset((&V_35), 0, sizeof(V_35));
	bool V_36 = false;
	bool V_37 = false;
	int32_t G_B6_0 = 0;
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B10_0 = NULL;
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B9_0 = NULL;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B20_0 = NULL;
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B19_0 = NULL;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B35_0 = NULL;
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B34_0 = NULL;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 G_B36_0;
	memset((&G_B36_0), 0, sizeof(G_B36_0));
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B47_0 = NULL;
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B46_0 = NULL;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 G_B48_0;
	memset((&G_B48_0), 0, sizeof(G_B48_0));
	{
		// if (!journalSectionComplete)
		bool L_0 = __this->___journalSectionComplete_1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_01d7;
		}
	}
	{
		// var buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_2 = ___bufferData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_2, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_1 = L_3;
		// var minimumLength = 3;
		V_2 = 3;
		// if (buffer.Length < minimumLength)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = V_2;
		V_4 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_5 = 2;
		goto IL_02bc;
	}

IL_0030:
	{
		// var flags = buffer[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if ((flags & 0x40) == 0 && (flags & 0x20) == 0)
		uint8_t L_10 = V_3;
		if (((int32_t)((int32_t)L_10&((int32_t)64))))
		{
			goto IL_0043;
		}
	}
	{
		uint8_t L_11 = V_3;
		G_B6_0 = ((((int32_t)((int32_t)((int32_t)L_11&((int32_t)32)))) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 0;
	}

IL_0044:
	{
		V_6 = (bool)G_B6_0;
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_009b;
		}
	}
	{
		// for (var i = 0; i < minimumLength; i++)
		V_7 = 0;
		goto IL_0081;
	}

IL_0050:
	{
		// var toRemove = bufferData.First?.Value;
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_13 = ___bufferData1;
		NullCheck(L_13);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_14;
		L_14 = LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_inline(L_13, LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_15 = L_14;
		G_B9_0 = L_15;
		if (L_15)
		{
			G_B10_0 = L_15;
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505));
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_16 = V_9;
		G_B11_0 = L_16;
		goto IL_0071;
	}

IL_0067:
	{
		NullCheck(G_B10_0);
		uint8_t L_17;
		L_17 = LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_inline(G_B10_0, LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var);
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C((&L_18), L_17, /*hidden argument*/Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
		G_B11_0 = L_18;
	}

IL_0071:
	{
		V_8 = G_B11_0;
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_19 = ___bufferData1;
		NullCheck(L_19);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_19, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < minimumLength; i++)
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0081:
	{
		// for (var i = 0; i < minimumLength; i++)
		int32_t L_21 = V_7;
		int32_t L_22 = V_2;
		V_10 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_10;
		if (L_23)
		{
			goto IL_0050;
		}
	}
	{
		// journalSectionComplete = true;
		__this->___journalSectionComplete_1 = (bool)1;
		// return ParserResult.Processed;
		V_5 = 0;
		goto IL_02bc;
	}

IL_009b:
	{
		// if ((flags & 0x10) == 0x10)
		uint8_t L_24 = V_3;
		V_11 = (bool)((((int32_t)((int32_t)((int32_t)L_24&((int32_t)16)))) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_25 = V_11;
		if (!L_25)
		{
			goto IL_00ab;
		}
	}
	{
	}

IL_00ab:
	{
		// if ((flags & 0x80) == 0x80)
		uint8_t L_26 = V_3;
		V_12 = (bool)((((int32_t)((int32_t)((int32_t)L_26&((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_27 = V_12;
		if (!L_27)
		{
			goto IL_0110;
		}
	}
	{
		// for (var i = 0; i < minimumLength; i++)
		V_13 = 0;
		goto IL_00f6;
	}

IL_00c5:
	{
		// var toRemove = bufferData.First?.Value;
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_28 = ___bufferData1;
		NullCheck(L_28);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_29;
		L_29 = LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_inline(L_28, LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_30 = L_29;
		G_B19_0 = L_30;
		if (L_30)
		{
			G_B20_0 = L_30;
			goto IL_00dc;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505));
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_31 = V_9;
		G_B21_0 = L_31;
		goto IL_00e6;
	}

IL_00dc:
	{
		NullCheck(G_B20_0);
		uint8_t L_32;
		L_32 = LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_inline(G_B20_0, LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var);
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C((&L_33), L_32, /*hidden argument*/Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
		G_B21_0 = L_33;
	}

IL_00e6:
	{
		V_14 = G_B21_0;
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_34 = ___bufferData1;
		NullCheck(L_34);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_34, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < minimumLength; i++)
		int32_t L_35 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00f6:
	{
		// for (var i = 0; i < minimumLength; i++)
		int32_t L_36 = V_13;
		int32_t L_37 = V_2;
		V_15 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_15;
		if (L_38)
		{
			goto IL_00c5;
		}
	}
	{
		// journalSectionComplete = true;
		__this->___journalSectionComplete_1 = (bool)1;
		// return ParserResult.Processed;
		V_5 = 0;
		goto IL_02bc;
	}

IL_0110:
	{
		// if ((flags & 0x40) == 0x40)
		uint8_t L_39 = V_3;
		V_16 = (bool)((((int32_t)((int32_t)((int32_t)L_39&((int32_t)64)))) == ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_40 = V_16;
		if (!L_40)
		{
			goto IL_0171;
		}
	}
	{
		// minimumLength += 2;
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		// if (buffer.Length < minimumLength)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = V_2;
		V_20 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_20;
		if (!L_44)
		{
			goto IL_0138;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_5 = 2;
		goto IL_02bc;
	}

IL_0138:
	{
		// short systemFlags = (short)(buffer[3] << 8 | buffer[4]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46 = 3;
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_1;
		NullCheck(L_48);
		int32_t L_49 = 4;
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_17 = ((int16_t)((int32_t)(((int32_t)((int32_t)L_47<<8))|(int32_t)L_50)));
		// short sysjourlen = (short)(systemFlags & 0x3ff);
		int16_t L_51 = V_17;
		V_18 = ((int16_t)((int32_t)((int32_t)L_51&((int32_t)1023))));
		// short remainingBytes = (short)(sysjourlen - 2);
		int16_t L_52 = V_18;
		V_19 = ((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_52, 2)));
		// minimumLength += remainingBytes;
		int32_t L_53 = V_2;
		int16_t L_54 = V_19;
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, (int32_t)L_54));
		// if (buffer.Length < minimumLength)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56 = V_2;
		V_21 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_21;
		if (!L_57)
		{
			goto IL_0170;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_5 = 2;
		goto IL_02bc;
	}

IL_0170:
	{
	}

IL_0171:
	{
		// if ((flags & 0x20) == 0x20)
		uint8_t L_58 = V_3;
		V_22 = (bool)((((int32_t)((int32_t)((int32_t)L_58&((int32_t)32)))) == ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_59 = V_22;
		if (!L_59)
		{
			goto IL_018e;
		}
	}
	{
		// journalTotalChannels = (byte)((flags & 0xf) + 1);
		uint8_t L_60 = V_3;
		__this->___journalTotalChannels_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_60&((int32_t)15))), 1)));
	}

IL_018e:
	{
		// for (var i = 0; i < minimumLength; i++)
		V_23 = 0;
		goto IL_01c4;
	}

IL_0193:
	{
		// var toRemove = bufferData.First?.Value;
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_61 = ___bufferData1;
		NullCheck(L_61);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_62;
		L_62 = LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_inline(L_61, LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_63 = L_62;
		G_B34_0 = L_63;
		if (L_63)
		{
			G_B35_0 = L_63;
			goto IL_01aa;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505));
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_64 = V_9;
		G_B36_0 = L_64;
		goto IL_01b4;
	}

IL_01aa:
	{
		NullCheck(G_B35_0);
		uint8_t L_65;
		L_65 = LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_inline(G_B35_0, LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var);
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C((&L_66), L_65, /*hidden argument*/Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
		G_B36_0 = L_66;
	}

IL_01b4:
	{
		V_24 = G_B36_0;
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_67 = ___bufferData1;
		NullCheck(L_67);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_67, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < minimumLength; i++)
		int32_t L_68 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_01c4:
	{
		// for (var i = 0; i < minimumLength; i++)
		int32_t L_69 = V_23;
		int32_t L_70 = V_2;
		V_25 = (bool)((((int32_t)L_69) < ((int32_t)L_70))? 1 : 0);
		bool L_71 = V_25;
		if (L_71)
		{
			goto IL_0193;
		}
	}
	{
		// journalSectionComplete = true;
		__this->___journalSectionComplete_1 = (bool)1;
	}

IL_01d7:
	{
		goto IL_02a5;
	}

IL_01dc:
	{
		// var buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_72 = ___bufferData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73;
		L_73 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_72, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_26 = L_73;
		// if (buffer.Length < 3)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_26;
		NullCheck(L_74);
		V_32 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))) < ((int32_t)3))? 1 : 0);
		bool L_75 = V_32;
		if (!L_75)
		{
			goto IL_01fb;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_5 = 2;
		goto IL_02bc;
	}

IL_01fb:
	{
		// int chanflags = buffer[0] << 16 | buffer[1] << 8 | buffer[2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_26;
		NullCheck(L_76);
		int32_t L_77 = 0;
		uint8_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_26;
		NullCheck(L_79);
		int32_t L_80 = 1;
		uint8_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_26;
		NullCheck(L_82);
		int32_t L_83 = 2;
		uint8_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_27 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_78<<((int32_t)16)))|((int32_t)((int32_t)L_81<<8))))|(int32_t)L_84));
		// byte channel = (byte)((buffer[0] & 0x78) >> 3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = V_26;
		NullCheck(L_85);
		int32_t L_86 = 0;
		uint8_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_28 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_87&((int32_t)120)))>>3)));
		// bool enhancedChapterC = (buffer[0] & 0x04) == 0x04;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = V_26;
		NullCheck(L_88);
		int32_t L_89 = 0;
		uint8_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_29 = (bool)((((int32_t)((int32_t)((int32_t)L_90&4))) == ((int32_t)4))? 1 : 0);
		// short chanjourlen = (short)((chanflags & 0x03ff00) >> 8);
		int32_t L_91 = V_27;
		V_30 = ((int16_t)((int32_t)(((int32_t)(L_91&((int32_t)261888)))>>8)));
		// byte chapterFlag = (byte)(chanflags & 0xff);
		int32_t L_92 = V_27;
		V_31 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_92&((int32_t)255))));
		// if (buffer.Length < chanjourlen)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = V_26;
		NullCheck(L_93);
		int16_t L_94 = V_30;
		V_33 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length))) < ((int32_t)L_94))? 1 : 0);
		bool L_95 = V_33;
		if (!L_95)
		{
			goto IL_0253;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_5 = 2;
		goto IL_02bc;
	}

IL_0253:
	{
		// journalTotalChannels--;
		uint8_t L_96 = __this->___journalTotalChannels_3;
		__this->___journalTotalChannels_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_96, 1)));
		// for (var i = 0; i < chanjourlen; i++)
		V_34 = 0;
		goto IL_0298;
	}

IL_0267:
	{
		// var toRemove = bufferData.First?.Value;
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_97 = ___bufferData1;
		NullCheck(L_97);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_98;
		L_98 = LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_inline(L_97, LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_99 = L_98;
		G_B46_0 = L_99;
		if (L_99)
		{
			G_B47_0 = L_99;
			goto IL_027e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505));
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_100 = V_9;
		G_B48_0 = L_100;
		goto IL_0288;
	}

IL_027e:
	{
		NullCheck(G_B47_0);
		uint8_t L_101;
		L_101 = LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_inline(G_B47_0, LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var);
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_102;
		memset((&L_102), 0, sizeof(L_102));
		Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C((&L_102), L_101, /*hidden argument*/Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
		G_B48_0 = L_102;
	}

IL_0288:
	{
		V_35 = G_B48_0;
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_103 = ___bufferData1;
		NullCheck(L_103);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_103, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < chanjourlen; i++)
		int32_t L_104 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0298:
	{
		// for (var i = 0; i < chanjourlen; i++)
		int32_t L_105 = V_34;
		int16_t L_106 = V_30;
		V_36 = (bool)((((int32_t)L_105) < ((int32_t)L_106))? 1 : 0);
		bool L_107 = V_36;
		if (L_107)
		{
			goto IL_0267;
		}
	}
	{
	}

IL_02a5:
	{
		// while (journalTotalChannels > 0)
		uint8_t L_108 = __this->___journalTotalChannels_3;
		V_37 = (bool)((((int32_t)L_108) > ((int32_t)0))? 1 : 0);
		bool L_109 = V_37;
		if (L_109)
		{
			goto IL_01dc;
		}
	}
	{
		// return ParserResult.Processed;
		V_5 = 0;
		goto IL_02bc;
	}

IL_02bc:
	{
		// }
		int32_t L_110 = V_5;
		return L_110;
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
// System.Void jp.kshoji.rtpmidi.AppleMidiParser::.ctor(jp.kshoji.rtpmidi.RtpMidiSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleMidiParser__ctor_m80DEA11B2D63BFD68BCC01036607BDEA7559F018 (AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA* __this, RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session0, const RuntimeMethod* method) 
{
	{
		// public AppleMidiParser(RtpMidiSession session)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.session = session;
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_0 = ___session0;
		__this->___session_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___session_0), (void*)L_0);
		// }
		return;
	}
}
// jp.kshoji.rtpmidi.ParserResult jp.kshoji.rtpmidi.AppleMidiParser::Parse(System.Collections.Generic.LinkedList`1<System.Byte>,jp.kshoji.rtpmidi.PortType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleMidiParser_Parse_mCBF399592EF78A9914D10558553CEC043070E5EF (AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA* __this, LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* ___bufferData0, int32_t ___portType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_14 = NULL;
	RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9 V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	bool V_17 = false;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	int32_t V_23 = 0;
	bool V_24 = false;
	bool V_25 = false;
	RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E V_26;
	memset((&V_26), 0, sizeof(V_26));
	bool V_27 = false;
	int32_t V_28 = 0;
	bool V_29 = false;
	bool V_30 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_31 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_32 = NULL;
	RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 V_33;
	memset((&V_33), 0, sizeof(V_33));
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_37 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_38 = NULL;
	RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040 V_39;
	memset((&V_39), 0, sizeof(V_39));
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273 V_43;
	memset((&V_43), 0, sizeof(V_43));
	bool V_44 = false;
	int32_t V_45 = 0;
	bool V_46 = false;
	int32_t G_B5_0 = 0;
	{
		// var buffer = bufferData.ToArray();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_0 = ___bufferData0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_0, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_1;
		// if (buffer.Length < 4)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) < ((int32_t)4))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return ParserResult.NotSureGiveMeMoreData;
		V_3 = 1;
		goto IL_0679;
	}

IL_001a:
	{
		// if (buffer[0] != RtpMidiConstants.Signature[0] || buffer[1] != RtpMidiConstants.Signature[1])
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Signature_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Signature_0;
		NullCheck(L_13);
		int32_t L_14 = 1;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B5_0 = ((((int32_t)((((int32_t)L_12) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 1;
	}

IL_0038:
	{
		V_4 = (bool)G_B5_0;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// return ParserResult.UnexpectedData;
		V_3 = 3;
		goto IL_0679;
	}

IL_0046:
	{
		// byte[] command = {buffer[2], buffer[3]};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 2;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = 3;
		uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_25);
		V_1 = L_22;
		// if (command.SequenceEqual(RtpMidiConstants.Invitation))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Invitation_2;
		bool L_28;
		L_28 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_26, (RuntimeObject*)L_27, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_5 = L_28;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_015d;
		}
	}
	{
		// if (buffer.Length < 16)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		NullCheck(L_30);
		V_9 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_0083;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_3 = 2;
		goto IL_0679;
	}

IL_0083:
	{
		// byte[] protocolVersion = { buffer[4], buffer[5], buffer[6], buffer[7] };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = 4;
		uint8_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = 5;
		uint8_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = L_37;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = 6;
		uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = L_41;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = 7;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_48);
		V_6 = L_45;
		// if (!protocolVersion.SequenceEqual(RtpMidiConstants.ProtocolVersion))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_6;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ProtocolVersion_1;
		bool L_51;
		L_51 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_49, (RuntimeObject*)L_50, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_51) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_00c0;
		}
	}
	{
		// return ParserResult.UnexpectedData;
		V_3 = 3;
		goto IL_0679;
	}

IL_00c0:
	{
		// var sessionName = new byte[buffer.Length - 16];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_0;
		NullCheck(L_53);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_53)->max_length)), ((int32_t)16))));
		V_7 = L_54;
		// Array.Copy(buffer, 16, sessionName, 0, buffer.Length - 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_0;
		NullCheck(L_57);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_55, ((int32_t)16), (RuntimeArray*)L_56, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_57)->max_length)), ((int32_t)16))), NULL);
		// var invitation = new RtpMidiInvitation(
		//     buffer[8] << 24 | buffer[9] << 16 | buffer[10] << 8 | buffer[11],
		//     buffer[12] << 24 | buffer[13] << 16 | buffer[14] << 8 | buffer[15],
		//     Encoding.Default.GetString(sessionName)
		// );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_0;
		NullCheck(L_58);
		int32_t L_59 = 8;
		uint8_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = ((int32_t)9);
		uint8_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_0;
		NullCheck(L_64);
		int32_t L_65 = ((int32_t)10);
		uint8_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = ((int32_t)11);
		uint8_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_0;
		NullCheck(L_70);
		int32_t L_71 = ((int32_t)12);
		uint8_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = ((int32_t)13);
		uint8_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77 = ((int32_t)14);
		uint8_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_0;
		NullCheck(L_79);
		int32_t L_80 = ((int32_t)15);
		uint8_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_82;
		L_82 = Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_7;
		NullCheck(L_82);
		String_t* L_84;
		L_84 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_82, L_83);
		RtpMidiInvitation__ctor_m68479C50617FDAFD40000AFB502B685AF84B4537((&V_8), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_60<<((int32_t)24)))|((int32_t)((int32_t)L_63<<((int32_t)16)))))|((int32_t)((int32_t)L_66<<8))))|(int32_t)L_69)), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_72<<((int32_t)24)))|((int32_t)((int32_t)L_75<<((int32_t)16)))))|((int32_t)((int32_t)L_78<<8))))|(int32_t)L_81)), L_84, NULL);
		// for (var i = 0; i < 16; i++)
		V_11 = 0;
		goto IL_013b;
	}

IL_012c:
	{
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_85 = ___bufferData0;
		NullCheck(L_85);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_85, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < 16; i++)
		int32_t L_86 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_013b:
	{
		// for (var i = 0; i < 16; i++)
		int32_t L_87 = V_11;
		V_12 = (bool)((((int32_t)L_87) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_88 = V_12;
		if (L_88)
		{
			goto IL_012c;
		}
	}
	{
		// session.ReceivedInvitation(invitation, portType);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_89 = __this->___session_0;
		RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_90 = V_8;
		int32_t L_91 = ___portType1;
		NullCheck(L_89);
		RtpMidiSession_ReceivedInvitation_m6BBDF81180387EDE2B68A603D6B4F96C7E308FAB(L_89, L_90, L_91, NULL);
		// return ParserResult.Processed;
		V_3 = 0;
		goto IL_0679;
	}

IL_015d:
	{
		// if (command.SequenceEqual(RtpMidiConstants.EndSession))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___EndSession_3;
		bool L_94;
		L_94 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_92, (RuntimeObject*)L_93, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_13 = L_94;
		bool L_95 = V_13;
		if (!L_95)
		{
			goto IL_0235;
		}
	}
	{
		// if (buffer.Length < 16)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_0;
		NullCheck(L_96);
		V_16 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_97 = V_16;
		if (!L_97)
		{
			goto IL_0187;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_3 = 2;
		goto IL_0679;
	}

IL_0187:
	{
		// byte[] protocolVersion = { buffer[4], buffer[5], buffer[6], buffer[7] };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = L_98;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = V_0;
		NullCheck(L_100);
		int32_t L_101 = 4;
		uint8_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_102);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = L_99;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = V_0;
		NullCheck(L_104);
		int32_t L_105 = 5;
		uint8_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_106);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = L_103;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = V_0;
		NullCheck(L_108);
		int32_t L_109 = 6;
		uint8_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_110);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = L_107;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_0;
		NullCheck(L_112);
		int32_t L_113 = 7;
		uint8_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_114);
		V_14 = L_111;
		// if (!protocolVersion.SequenceEqual(RtpMidiConstants.ProtocolVersion))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = V_14;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ProtocolVersion_1;
		bool L_117;
		L_117 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_115, (RuntimeObject*)L_116, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_17 = (bool)((((int32_t)L_117) == ((int32_t)0))? 1 : 0);
		bool L_118 = V_17;
		if (!L_118)
		{
			goto IL_01c4;
		}
	}
	{
		// return ParserResult.UnexpectedData;
		V_3 = 3;
		goto IL_0679;
	}

IL_01c4:
	{
		// var endSession = new RtpMidiEndSession(
		//     buffer[8] << 24 | buffer[9] << 16 | buffer[10] << 8 | buffer[11],
		//     buffer[12] << 24 | buffer[13] << 16 | buffer[14] << 8 | buffer[15]
		// );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = V_0;
		NullCheck(L_119);
		int32_t L_120 = 8;
		uint8_t L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122 = V_0;
		NullCheck(L_122);
		int32_t L_123 = ((int32_t)9);
		uint8_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = V_0;
		NullCheck(L_125);
		int32_t L_126 = ((int32_t)10);
		uint8_t L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = V_0;
		NullCheck(L_128);
		int32_t L_129 = ((int32_t)11);
		uint8_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = V_0;
		NullCheck(L_131);
		int32_t L_132 = ((int32_t)12);
		uint8_t L_133 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = V_0;
		NullCheck(L_134);
		int32_t L_135 = ((int32_t)13);
		uint8_t L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_137 = V_0;
		NullCheck(L_137);
		int32_t L_138 = ((int32_t)14);
		uint8_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_140 = V_0;
		NullCheck(L_140);
		int32_t L_141 = ((int32_t)15);
		uint8_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D((&V_15), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_121<<((int32_t)24)))|((int32_t)((int32_t)L_124<<((int32_t)16)))))|((int32_t)((int32_t)L_127<<8))))|(int32_t)L_130)), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_133<<((int32_t)24)))|((int32_t)((int32_t)L_136<<((int32_t)16)))))|((int32_t)((int32_t)L_139<<8))))|(int32_t)L_142)), NULL);
		// for (var i = 0; i < 16; i++)
		V_18 = 0;
		goto IL_0214;
	}

IL_0205:
	{
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_143 = ___bufferData0;
		NullCheck(L_143);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_143, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < 16; i++)
		int32_t L_144 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_0214:
	{
		// for (var i = 0; i < 16; i++)
		int32_t L_145 = V_18;
		V_19 = (bool)((((int32_t)L_145) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_146 = V_19;
		if (L_146)
		{
			goto IL_0205;
		}
	}
	{
		// session.ReceivedEndSession(endSession);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_147 = __this->___session_0;
		RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9 L_148 = V_15;
		NullCheck(L_147);
		RtpMidiSession_ReceivedEndSession_m58B95EA276CC742F1405E9CBD0D73A9690C7B182(L_147, L_148, NULL);
		// return ParserResult.Processed;
		V_3 = 0;
		goto IL_0679;
	}

IL_0235:
	{
		// if (command.SequenceEqual(RtpMidiConstants.Synchronization))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_149 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_150 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Synchronization_4;
		bool L_151;
		L_151 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_149, (RuntimeObject*)L_150, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_20 = L_151;
		bool L_152 = V_20;
		if (!L_152)
		{
			goto IL_038d;
		}
	}
	{
		// if (buffer.Length < 36)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = V_0;
		NullCheck(L_153);
		V_22 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_153)->max_length))) < ((int32_t)((int32_t)36)))? 1 : 0);
		bool L_154 = V_22;
		if (!L_154)
		{
			goto IL_025f;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_3 = 2;
		goto IL_0679;
	}

IL_025f:
	{
		// var synchronization = new RtpMidiSynchronization(
		//     buffer[4] << 24 | buffer[5] << 16 | buffer[6] << 8 | buffer[7],
		//     buffer[8], new[]
		//     {
		//         ((long)buffer[12] << 56) | ((long)buffer[13] << 48) | ((long)buffer[14] << 40) | ((long)buffer[15] << 32) |
		//         ((long)buffer[16] << 24) | ((long)buffer[17] << 16) | ((long)buffer[18] << 8) | buffer[19],
		//         ((long)buffer[20] << 56) | ((long)buffer[21] << 48) | ((long)buffer[22] << 40) | ((long)buffer[23] << 32) |
		//         ((long)buffer[24] << 24) | ((long)buffer[25] << 16) | ((long)buffer[26] << 8) | buffer[27],
		//         ((long)buffer[28] << 56) | ((long)buffer[29] << 48) | ((long)buffer[30] << 40) | ((long)buffer[31] << 32) |
		//         ((long)buffer[32] << 24) | ((long)buffer[33] << 16) | ((long)buffer[34] << 8) | buffer[35],
		//     }
		// );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_155 = V_0;
		NullCheck(L_155);
		int32_t L_156 = 4;
		uint8_t L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_158 = V_0;
		NullCheck(L_158);
		int32_t L_159 = 5;
		uint8_t L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_161 = V_0;
		NullCheck(L_161);
		int32_t L_162 = 6;
		uint8_t L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_164 = V_0;
		NullCheck(L_164);
		int32_t L_165 = 7;
		uint8_t L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_167 = V_0;
		NullCheck(L_167);
		int32_t L_168 = 8;
		uint8_t L_169 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_170 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)3);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_171 = L_170;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = V_0;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)12);
		uint8_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_175 = V_0;
		NullCheck(L_175);
		int32_t L_176 = ((int32_t)13);
		uint8_t L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_178 = V_0;
		NullCheck(L_178);
		int32_t L_179 = ((int32_t)14);
		uint8_t L_180 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_181 = V_0;
		NullCheck(L_181);
		int32_t L_182 = ((int32_t)15);
		uint8_t L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_184 = V_0;
		NullCheck(L_184);
		int32_t L_185 = ((int32_t)16);
		uint8_t L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_187 = V_0;
		NullCheck(L_187);
		int32_t L_188 = ((int32_t)17);
		uint8_t L_189 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_190 = V_0;
		NullCheck(L_190);
		int32_t L_191 = ((int32_t)18);
		uint8_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_193 = V_0;
		NullCheck(L_193);
		int32_t L_194 = ((int32_t)19);
		uint8_t L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_174)<<((int32_t)56)))|((int64_t)(((int64_t)(uint64_t)L_177)<<((int32_t)48)))))|((int64_t)(((int64_t)(uint64_t)L_180)<<((int32_t)40)))))|((int64_t)(((int64_t)(uint64_t)L_183)<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)L_186)<<((int32_t)24)))))|((int64_t)(((int64_t)(uint64_t)L_189)<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)L_192)<<8))))|((int64_t)(uint64_t)L_195))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_196 = L_171;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_197 = V_0;
		NullCheck(L_197);
		int32_t L_198 = ((int32_t)20);
		uint8_t L_199 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_200 = V_0;
		NullCheck(L_200);
		int32_t L_201 = ((int32_t)21);
		uint8_t L_202 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = V_0;
		NullCheck(L_203);
		int32_t L_204 = ((int32_t)22);
		uint8_t L_205 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_206 = V_0;
		NullCheck(L_206);
		int32_t L_207 = ((int32_t)23);
		uint8_t L_208 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_209 = V_0;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)24);
		uint8_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_212 = V_0;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)25);
		uint8_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_215 = V_0;
		NullCheck(L_215);
		int32_t L_216 = ((int32_t)26);
		uint8_t L_217 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_218 = V_0;
		NullCheck(L_218);
		int32_t L_219 = ((int32_t)27);
		uint8_t L_220 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(1), (int64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_199)<<((int32_t)56)))|((int64_t)(((int64_t)(uint64_t)L_202)<<((int32_t)48)))))|((int64_t)(((int64_t)(uint64_t)L_205)<<((int32_t)40)))))|((int64_t)(((int64_t)(uint64_t)L_208)<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)L_211)<<((int32_t)24)))))|((int64_t)(((int64_t)(uint64_t)L_214)<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)L_217)<<8))))|((int64_t)(uint64_t)L_220))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_221 = L_196;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_222 = V_0;
		NullCheck(L_222);
		int32_t L_223 = ((int32_t)28);
		uint8_t L_224 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_225 = V_0;
		NullCheck(L_225);
		int32_t L_226 = ((int32_t)29);
		uint8_t L_227 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = V_0;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)30);
		uint8_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_231 = V_0;
		NullCheck(L_231);
		int32_t L_232 = ((int32_t)31);
		uint8_t L_233 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_234 = V_0;
		NullCheck(L_234);
		int32_t L_235 = ((int32_t)32);
		uint8_t L_236 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_237 = V_0;
		NullCheck(L_237);
		int32_t L_238 = ((int32_t)33);
		uint8_t L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_240 = V_0;
		NullCheck(L_240);
		int32_t L_241 = ((int32_t)34);
		uint8_t L_242 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_243 = V_0;
		NullCheck(L_243);
		int32_t L_244 = ((int32_t)35);
		uint8_t L_245 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(2), (int64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_224)<<((int32_t)56)))|((int64_t)(((int64_t)(uint64_t)L_227)<<((int32_t)48)))))|((int64_t)(((int64_t)(uint64_t)L_230)<<((int32_t)40)))))|((int64_t)(((int64_t)(uint64_t)L_233)<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)L_236)<<((int32_t)24)))))|((int64_t)(((int64_t)(uint64_t)L_239)<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)L_242)<<8))))|((int64_t)(uint64_t)L_245))));
		RtpMidiSynchronization__ctor_mA8B795137F855A1526935238789737C18A3FC848((&V_21), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_157<<((int32_t)24)))|((int32_t)((int32_t)L_160<<((int32_t)16)))))|((int32_t)((int32_t)L_163<<8))))|(int32_t)L_166)), L_169, L_221, NULL);
		// for (var i = 0; i < 36; i++)
		V_23 = 0;
		goto IL_036c;
	}

IL_035d:
	{
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_246 = ___bufferData0;
		NullCheck(L_246);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_246, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < 36; i++)
		int32_t L_247 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_247, 1));
	}

IL_036c:
	{
		// for (var i = 0; i < 36; i++)
		int32_t L_248 = V_23;
		V_24 = (bool)((((int32_t)L_248) < ((int32_t)((int32_t)36)))? 1 : 0);
		bool L_249 = V_24;
		if (L_249)
		{
			goto IL_035d;
		}
	}
	{
		// session.ReceivedSynchronization(synchronization);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_250 = __this->___session_0;
		RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A L_251 = V_21;
		NullCheck(L_250);
		RtpMidiSession_ReceivedSynchronization_m50146E909893CDE277963444F96314741629933D(L_250, L_251, NULL);
		// return ParserResult.Processed;
		V_3 = 0;
		goto IL_0679;
	}

IL_038d:
	{
		// if (command.SequenceEqual(RtpMidiConstants.ReceiverFeedback))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_252 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_253 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ReceiverFeedback_7;
		bool L_254;
		L_254 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_252, (RuntimeObject*)L_253, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_25 = L_254;
		bool L_255 = V_25;
		if (!L_255)
		{
			goto IL_0412;
		}
	}
	{
		// if (buffer.Length < 12)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_256 = V_0;
		NullCheck(L_256);
		V_27 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_256)->max_length))) < ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_257 = V_27;
		if (!L_257)
		{
			goto IL_03b4;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_3 = 2;
		goto IL_0679;
	}

IL_03b4:
	{
		// var receiverFeedback = new RtpMidiReceiverFeedback(
		//     buffer[4] << 24 | buffer[5] << 16 | buffer[6] << 8 | buffer[7],
		//     (short)(buffer[8] << 8 | buffer[9])
		// );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_258 = V_0;
		NullCheck(L_258);
		int32_t L_259 = 4;
		uint8_t L_260 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_261 = V_0;
		NullCheck(L_261);
		int32_t L_262 = 5;
		uint8_t L_263 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_264 = V_0;
		NullCheck(L_264);
		int32_t L_265 = 6;
		uint8_t L_266 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_267 = V_0;
		NullCheck(L_267);
		int32_t L_268 = 7;
		uint8_t L_269 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_268));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_270 = V_0;
		NullCheck(L_270);
		int32_t L_271 = 8;
		uint8_t L_272 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_273 = V_0;
		NullCheck(L_273);
		int32_t L_274 = ((int32_t)9);
		uint8_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		RtpMidiReceiverFeedback__ctor_mEC938661E354EF7F2D0BCC617B6B4D5EAFC46DA1((&V_26), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_260<<((int32_t)24)))|((int32_t)((int32_t)L_263<<((int32_t)16)))))|((int32_t)((int32_t)L_266<<8))))|(int32_t)L_269)), ((int16_t)((int32_t)(((int32_t)((int32_t)L_272<<8))|(int32_t)L_275))), NULL);
		// for (var i = 0; i < 12; i++)
		V_28 = 0;
		goto IL_03f1;
	}

IL_03e2:
	{
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_276 = ___bufferData0;
		NullCheck(L_276);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_276, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < 12; i++)
		int32_t L_277 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_277, 1));
	}

IL_03f1:
	{
		// for (var i = 0; i < 12; i++)
		int32_t L_278 = V_28;
		V_29 = (bool)((((int32_t)L_278) < ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_279 = V_29;
		if (L_279)
		{
			goto IL_03e2;
		}
	}
	{
		// session.ReceivedReceiverFeedback(receiverFeedback);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_280 = __this->___session_0;
		RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E L_281 = V_26;
		NullCheck(L_280);
		RtpMidiSession_ReceivedReceiverFeedback_m8E21FC7C788B160198541BD185DE2B06B1A287D7(L_280, L_281, NULL);
		// return ParserResult.Processed;
		V_3 = 0;
		goto IL_0679;
	}

IL_0412:
	{
		// if (command.SequenceEqual(RtpMidiConstants.InvitationAccepted))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_282 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_283 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationAccepted_5;
		bool L_284;
		L_284 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_282, (RuntimeObject*)L_283, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_30 = L_284;
		bool L_285 = V_30;
		if (!L_285)
		{
			goto IL_04fd;
		}
	}
	{
		// if (buffer.Length < 16)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_286 = V_0;
		NullCheck(L_286);
		V_34 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_286)->max_length))) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_287 = V_34;
		if (!L_287)
		{
			goto IL_043c;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_3 = 2;
		goto IL_0679;
	}

IL_043c:
	{
		// byte[] protocolVersion = { buffer[4], buffer[5], buffer[6], buffer[7] };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_288 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_289 = L_288;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_290 = V_0;
		NullCheck(L_290);
		int32_t L_291 = 4;
		uint8_t L_292 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_291));
		NullCheck(L_289);
		(L_289)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_292);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_293 = L_289;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_294 = V_0;
		NullCheck(L_294);
		int32_t L_295 = 5;
		uint8_t L_296 = (L_294)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		NullCheck(L_293);
		(L_293)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_296);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_297 = L_293;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_298 = V_0;
		NullCheck(L_298);
		int32_t L_299 = 6;
		uint8_t L_300 = (L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		NullCheck(L_297);
		(L_297)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_300);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_301 = L_297;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_302 = V_0;
		NullCheck(L_302);
		int32_t L_303 = 7;
		uint8_t L_304 = (L_302)->GetAt(static_cast<il2cpp_array_size_t>(L_303));
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_304);
		V_31 = L_301;
		// if (!protocolVersion.SequenceEqual(RtpMidiConstants.ProtocolVersion))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_305 = V_31;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_306 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ProtocolVersion_1;
		bool L_307;
		L_307 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_305, (RuntimeObject*)L_306, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_35 = (bool)((((int32_t)L_307) == ((int32_t)0))? 1 : 0);
		bool L_308 = V_35;
		if (!L_308)
		{
			goto IL_0479;
		}
	}
	{
		// return ParserResult.UnexpectedData;
		V_3 = 3;
		goto IL_0679;
	}

IL_0479:
	{
		// var sessionName = new byte[buffer.Length - 16];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_309 = V_0;
		NullCheck(L_309);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_310 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_309)->max_length)), ((int32_t)16))));
		V_32 = L_310;
		// Array.Copy(buffer, 16, sessionName, 0, buffer.Length - 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_311 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_312 = V_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_313 = V_0;
		NullCheck(L_313);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_311, ((int32_t)16), (RuntimeArray*)L_312, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_313)->max_length)), ((int32_t)16))), NULL);
		// var invitationAccepted = new RtpMidiInvitationAccepted(
		//     buffer[8] << 24 | buffer[9] << 16 | buffer[10] << 8 | buffer[11],
		//     buffer[12] << 24 | buffer[13] << 16 | buffer[14] << 8 | buffer[15],
		//     Encoding.Default.GetString(sessionName)
		// );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_314 = V_0;
		NullCheck(L_314);
		int32_t L_315 = 8;
		uint8_t L_316 = (L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_317 = V_0;
		NullCheck(L_317);
		int32_t L_318 = ((int32_t)9);
		uint8_t L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_320 = V_0;
		NullCheck(L_320);
		int32_t L_321 = ((int32_t)10);
		uint8_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_323 = V_0;
		NullCheck(L_323);
		int32_t L_324 = ((int32_t)11);
		uint8_t L_325 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_326 = V_0;
		NullCheck(L_326);
		int32_t L_327 = ((int32_t)12);
		uint8_t L_328 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_329 = V_0;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)13);
		uint8_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_332 = V_0;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)14);
		uint8_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_335 = V_0;
		NullCheck(L_335);
		int32_t L_336 = ((int32_t)15);
		uint8_t L_337 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_338;
		L_338 = Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_339 = V_32;
		NullCheck(L_338);
		String_t* L_340;
		L_340 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_338, L_339);
		RtpMidiInvitationAccepted__ctor_mA4CB69FDD348EA904326DA286F7E43DD2EE41365((&V_33), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_316<<((int32_t)24)))|((int32_t)((int32_t)L_319<<((int32_t)16)))))|((int32_t)((int32_t)L_322<<8))))|(int32_t)L_325)), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_328<<((int32_t)24)))|((int32_t)((int32_t)L_331<<((int32_t)16)))))|((int32_t)((int32_t)L_334<<8))))|(int32_t)L_337)), L_340, NULL);
		// bufferData.Clear();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_341 = ___bufferData0;
		NullCheck(L_341);
		LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67(L_341, LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
		// session.ReceivedInvitationAccepted(invitationAccepted, portType);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_342 = __this->___session_0;
		RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 L_343 = V_33;
		int32_t L_344 = ___portType1;
		NullCheck(L_342);
		RtpMidiSession_ReceivedInvitationAccepted_mAF531DF62FED1792DAD477DDC48E7CB86465E839(L_342, L_343, L_344, NULL);
		// return ParserResult.Processed;
		V_3 = 0;
		goto IL_0679;
	}

IL_04fd:
	{
		// if (command.SequenceEqual(RtpMidiConstants.InvitationRejected))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_345 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_346 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationRejected_6;
		bool L_347;
		L_347 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_345, (RuntimeObject*)L_346, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_36 = L_347;
		bool L_348 = V_36;
		if (!L_348)
		{
			goto IL_05e7;
		}
	}
	{
		// if (buffer.Length < 16)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_349 = V_0;
		NullCheck(L_349);
		V_40 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_349)->max_length))) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_350 = V_40;
		if (!L_350)
		{
			goto IL_0527;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_3 = 2;
		goto IL_0679;
	}

IL_0527:
	{
		// byte[] protocolVersion = { buffer[4], buffer[5], buffer[6], buffer[7] };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_351 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_352 = L_351;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_353 = V_0;
		NullCheck(L_353);
		int32_t L_354 = 4;
		uint8_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_355);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_356 = L_352;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_357 = V_0;
		NullCheck(L_357);
		int32_t L_358 = 5;
		uint8_t L_359 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		NullCheck(L_356);
		(L_356)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_359);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_360 = L_356;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_361 = V_0;
		NullCheck(L_361);
		int32_t L_362 = 6;
		uint8_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		NullCheck(L_360);
		(L_360)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_363);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_364 = L_360;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_365 = V_0;
		NullCheck(L_365);
		int32_t L_366 = 7;
		uint8_t L_367 = (L_365)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		NullCheck(L_364);
		(L_364)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_367);
		V_37 = L_364;
		// if (!protocolVersion.SequenceEqual(RtpMidiConstants.ProtocolVersion))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_368 = V_37;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_369 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ProtocolVersion_1;
		bool L_370;
		L_370 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_368, (RuntimeObject*)L_369, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_41 = (bool)((((int32_t)L_370) == ((int32_t)0))? 1 : 0);
		bool L_371 = V_41;
		if (!L_371)
		{
			goto IL_0564;
		}
	}
	{
		// return ParserResult.UnexpectedData;
		V_3 = 3;
		goto IL_0679;
	}

IL_0564:
	{
		// var sessionName = new byte[buffer.Length - 16];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_372 = V_0;
		NullCheck(L_372);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_373 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_372)->max_length)), ((int32_t)16))));
		V_38 = L_373;
		// Array.Copy(buffer, 16, sessionName, 0, buffer.Length - 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_374 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_375 = V_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_376 = V_0;
		NullCheck(L_376);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_374, ((int32_t)16), (RuntimeArray*)L_375, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_376)->max_length)), ((int32_t)16))), NULL);
		// var invitationRejected = new RtpMidiInvitationRejected(
		//     buffer[8] << 24 | buffer[9] << 16 | buffer[10] << 8 | buffer[11],
		//     buffer[12] << 24 | buffer[13] << 16 | buffer[14] << 8 | buffer[15],
		//     Encoding.Default.GetString(sessionName)
		// );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_377 = V_0;
		NullCheck(L_377);
		int32_t L_378 = 8;
		uint8_t L_379 = (L_377)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_380 = V_0;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)9);
		uint8_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_383 = V_0;
		NullCheck(L_383);
		int32_t L_384 = ((int32_t)10);
		uint8_t L_385 = (L_383)->GetAt(static_cast<il2cpp_array_size_t>(L_384));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_386 = V_0;
		NullCheck(L_386);
		int32_t L_387 = ((int32_t)11);
		uint8_t L_388 = (L_386)->GetAt(static_cast<il2cpp_array_size_t>(L_387));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_389 = V_0;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)12);
		uint8_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_392 = V_0;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)13);
		uint8_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_395 = V_0;
		NullCheck(L_395);
		int32_t L_396 = ((int32_t)14);
		uint8_t L_397 = (L_395)->GetAt(static_cast<il2cpp_array_size_t>(L_396));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_398 = V_0;
		NullCheck(L_398);
		int32_t L_399 = ((int32_t)15);
		uint8_t L_400 = (L_398)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_401;
		L_401 = Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_402 = V_38;
		NullCheck(L_401);
		String_t* L_403;
		L_403 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_401, L_402);
		RtpMidiInvitationRejected__ctor_m2B085695B68E6489A0D2D4658830081368DA3D32((&V_39), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_379<<((int32_t)24)))|((int32_t)((int32_t)L_382<<((int32_t)16)))))|((int32_t)((int32_t)L_385<<8))))|(int32_t)L_388)), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_391<<((int32_t)24)))|((int32_t)((int32_t)L_394<<((int32_t)16)))))|((int32_t)((int32_t)L_397<<8))))|(int32_t)L_400)), L_403, NULL);
		// bufferData.Clear();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_404 = ___bufferData0;
		NullCheck(L_404);
		LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67(L_404, LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
		// session.ReceivedInvitationRejected(invitationRejected);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_405 = __this->___session_0;
		RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040 L_406 = V_39;
		NullCheck(L_405);
		RtpMidiSession_ReceivedInvitationRejected_m30FDC4E5E3025E15BFEFCAA55C0E4799E52FA8D5(L_405, L_406, NULL);
		// return ParserResult.Processed;
		V_3 = 0;
		goto IL_0679;
	}

IL_05e7:
	{
		// if (command.SequenceEqual(RtpMidiConstants.BitrateReceiveLimit))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_407 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_408 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___BitrateReceiveLimit_8;
		bool L_409;
		L_409 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298((RuntimeObject*)L_407, (RuntimeObject*)L_408, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m07C16FE84A94AFDBE3D9A1F5639AD074BB95C298_RuntimeMethod_var);
		V_42 = L_409;
		bool L_410 = V_42;
		if (!L_410)
		{
			goto IL_0675;
		}
	}
	{
		// if (buffer.Length < 12)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_411 = V_0;
		NullCheck(L_411);
		V_44 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_411)->max_length))) < ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_412 = V_44;
		if (!L_412)
		{
			goto IL_060b;
		}
	}
	{
		// return ParserResult.NotEnoughData;
		V_3 = 2;
		goto IL_0679;
	}

IL_060b:
	{
		// var bitrateReceiveLimit = new RtpMidiBitrateReceiveLimit(
		//     buffer[4] << 24 | buffer[5] << 16 | buffer[6] << 8 | buffer[7],
		//     buffer[8] << 24 | buffer[9] << 16 | buffer[10] << 8 | buffer[11]
		// );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_413 = V_0;
		NullCheck(L_413);
		int32_t L_414 = 4;
		uint8_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_416 = V_0;
		NullCheck(L_416);
		int32_t L_417 = 5;
		uint8_t L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_419 = V_0;
		NullCheck(L_419);
		int32_t L_420 = 6;
		uint8_t L_421 = (L_419)->GetAt(static_cast<il2cpp_array_size_t>(L_420));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_422 = V_0;
		NullCheck(L_422);
		int32_t L_423 = 7;
		uint8_t L_424 = (L_422)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_425 = V_0;
		NullCheck(L_425);
		int32_t L_426 = 8;
		uint8_t L_427 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_426));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_428 = V_0;
		NullCheck(L_428);
		int32_t L_429 = ((int32_t)9);
		uint8_t L_430 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_429));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_431 = V_0;
		NullCheck(L_431);
		int32_t L_432 = ((int32_t)10);
		uint8_t L_433 = (L_431)->GetAt(static_cast<il2cpp_array_size_t>(L_432));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_434 = V_0;
		NullCheck(L_434);
		int32_t L_435 = ((int32_t)11);
		uint8_t L_436 = (L_434)->GetAt(static_cast<il2cpp_array_size_t>(L_435));
		RtpMidiBitrateReceiveLimit__ctor_m899F4FB060850ED9C3E5E9B83783AF26BC7B621A((&V_43), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_415<<((int32_t)24)))|((int32_t)((int32_t)L_418<<((int32_t)16)))))|((int32_t)((int32_t)L_421<<8))))|(int32_t)L_424)), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_427<<((int32_t)24)))|((int32_t)((int32_t)L_430<<((int32_t)16)))))|((int32_t)((int32_t)L_433<<8))))|(int32_t)L_436)), NULL);
		// for (var i = 0; i < 12; i++)
		V_45 = 0;
		goto IL_0657;
	}

IL_0648:
	{
		// bufferData.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_437 = ___bufferData0;
		NullCheck(L_437);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_437, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// for (var i = 0; i < 12; i++)
		int32_t L_438 = V_45;
		V_45 = ((int32_t)il2cpp_codegen_add(L_438, 1));
	}

IL_0657:
	{
		// for (var i = 0; i < 12; i++)
		int32_t L_439 = V_45;
		V_46 = (bool)((((int32_t)L_439) < ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_440 = V_46;
		if (L_440)
		{
			goto IL_0648;
		}
	}
	{
		// session.ReceivedBitrateReceiveLimit(bitrateReceiveLimit);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_441 = __this->___session_0;
		RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273 L_442 = V_43;
		NullCheck(L_441);
		RtpMidiSession_ReceivedBitrateReceiveLimit_m967A2C31731C73888F18EFE670184F5EFAAE4C18(L_441, L_442, NULL);
		// return ParserResult.Processed;
		V_3 = 0;
		goto IL_0679;
	}

IL_0675:
	{
		// return ParserResult.UnexpectedData;
		V_3 = 3;
		goto IL_0679;
	}

IL_0679:
	{
		// }
		int32_t L_443 = V_3;
		return L_443;
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
// System.Void jp.kshoji.rtpmidi.RtpMidiConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiConstants__cctor_mAA81A3DEAE79DCB783A18AFB990BC30B9EEAC81F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly byte[] Signature = {0xff, 0xff};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)255));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)255));
		((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Signature_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Signature_0), (void*)L_2);
		// public static readonly byte[] ProtocolVersion = {0x00, 0x00, 0x00, 0x02};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)2);
		((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ProtocolVersion_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ProtocolVersion_1), (void*)L_4);
		// public static readonly byte[] Invitation = {(byte)'I', (byte)'N'};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)73));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)78));
		((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Invitation_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Invitation_2), (void*)L_7);
		// public static readonly byte[] EndSession = {(byte)'B', (byte)'Y'};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)66));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)89));
		((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___EndSession_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___EndSession_3), (void*)L_10);
		// public static readonly byte[] Synchronization = {(byte)'C', (byte)'K'};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)75));
		((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Synchronization_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Synchronization_4), (void*)L_13);
		// public static readonly byte[] InvitationAccepted = {(byte)'O', (byte)'K'};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)79));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)75));
		((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationAccepted_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationAccepted_5), (void*)L_16);
		// public static readonly byte[] InvitationRejected = {(byte)'N', (byte)'O'};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)78));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)79));
		((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationRejected_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationRejected_6), (void*)L_19);
		// public static readonly byte[] ReceiverFeedback = {(byte)'R', (byte)'S'};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)82));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)83));
		((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ReceiverFeedback_7 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ReceiverFeedback_7), (void*)L_22);
		// public static readonly byte[] BitrateReceiveLimit = {(byte)'R', (byte)'L'};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = L_23;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)82));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_24;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)76));
		((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___BitrateReceiveLimit_8 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___BitrateReceiveLimit_8), (void*)L_25);
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
// Conversion methods for marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitation
IL2CPP_EXTERN_C void RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshal_pinvoke(const RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925& unmarshaled, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	marshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaled.___U3CSsrcU3Ek__BackingField_1;
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.___U3CSessionNameU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshal_pinvoke_back(const RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshaled_pinvoke& marshaled, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925& unmarshaled)
{
	int32_t unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = marshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0;
	int32_t unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = marshaled.___U3CSsrcU3Ek__BackingField_1;
	unmarshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaledU3CSsrcU3Ek__BackingField_temp_1;
	unmarshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_string_result(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CSessionNameU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CSessionNameU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitation
IL2CPP_EXTERN_C void RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshal_pinvoke_cleanup(RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = NULL;
}
// Conversion methods for marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitation
IL2CPP_EXTERN_C void RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshal_com(const RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925& unmarshaled, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshaled_com& marshaled)
{
	marshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	marshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaled.___U3CSsrcU3Ek__BackingField_1;
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CSessionNameU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshal_com_back(const RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshaled_com& marshaled, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925& unmarshaled)
{
	int32_t unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = marshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0;
	int32_t unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = marshaled.___U3CSsrcU3Ek__BackingField_1;
	unmarshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaledU3CSsrcU3Ek__BackingField_temp_1;
	unmarshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CSessionNameU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CSessionNameU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitation
IL2CPP_EXTERN_C void RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshal_com_cleanup(RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = NULL;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiInvitation__ctor_m68479C50617FDAFD40000AFB502B685AF84B4537 (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, String_t* ___sessionName2, const RuntimeMethod* method) 
{
	{
		// InitiatorToken = initiatorToken;
		int32_t L_0 = ___initiatorToken0;
		RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_inline(__this, L_0, NULL);
		// Ssrc = ssrc;
		int32_t L_1 = ___ssrc1;
		RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2_inline(__this, L_1, NULL);
		// SessionName = sessionName;
		String_t* L_2 = ___sessionName2;
		RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiInvitation__ctor_m68479C50617FDAFD40000AFB502B685AF84B4537_AdjustorThunk (RuntimeObject* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, String_t* ___sessionName2, const RuntimeMethod* method)
{
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925*>(__this + _offset);
	RtpMidiInvitation__ctor_m68479C50617FDAFD40000AFB502B685AF84B4537(_thisAdjusted, ___initiatorToken0, ___ssrc1, ___sessionName2, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitation::get_InitiatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97 (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; internal set; }
		int32_t L_0 = __this->___U3CInitiatorTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::set_InitiatorToken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441 (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CInitiatorTokenU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925*>(__this + _offset);
	RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitation::get_Ssrc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6 (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; internal set; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::set_Ssrc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2 (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CSsrcU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925*>(__this + _offset);
	RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2_inline(_thisAdjusted, ___value0, method);
}
// System.String jp.kshoji.rtpmidi.RtpMidiInvitation::get_SessionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46 (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionName { get; internal set; }
		String_t* L_0 = __this->___U3CSessionNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitation::set_SessionName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SessionName { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CSessionNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925*>(__this + _offset);
	RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitationAccepted
IL2CPP_EXTERN_C void RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshal_pinvoke(const RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1& unmarshaled, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	marshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaled.___U3CSsrcU3Ek__BackingField_1;
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.___U3CSessionNameU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshal_pinvoke_back(const RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshaled_pinvoke& marshaled, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1& unmarshaled)
{
	int32_t unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = marshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0;
	int32_t unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = marshaled.___U3CSsrcU3Ek__BackingField_1;
	unmarshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaledU3CSsrcU3Ek__BackingField_temp_1;
	unmarshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_string_result(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CSessionNameU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CSessionNameU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitationAccepted
IL2CPP_EXTERN_C void RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshal_pinvoke_cleanup(RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = NULL;
}
// Conversion methods for marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitationAccepted
IL2CPP_EXTERN_C void RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshal_com(const RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1& unmarshaled, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshaled_com& marshaled)
{
	marshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	marshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaled.___U3CSsrcU3Ek__BackingField_1;
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CSessionNameU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshal_com_back(const RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshaled_com& marshaled, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1& unmarshaled)
{
	int32_t unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = marshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0;
	int32_t unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = marshaled.___U3CSsrcU3Ek__BackingField_1;
	unmarshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaledU3CSsrcU3Ek__BackingField_temp_1;
	unmarshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CSessionNameU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CSessionNameU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitationAccepted
IL2CPP_EXTERN_C void RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshal_com_cleanup(RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = NULL;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiInvitationAccepted__ctor_mA4CB69FDD348EA904326DA286F7E43DD2EE41365 (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, String_t* ___sessionName2, const RuntimeMethod* method) 
{
	{
		// InitiatorToken = initiatorToken;
		int32_t L_0 = ___initiatorToken0;
		__this->___U3CInitiatorTokenU3Ek__BackingField_0 = L_0;
		// Ssrc = ssrc;
		int32_t L_1 = ___ssrc1;
		__this->___U3CSsrcU3Ek__BackingField_1 = L_1;
		// SessionName = sessionName;
		String_t* L_2 = ___sessionName2;
		__this->___U3CSessionNameU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionNameU3Ek__BackingField_2), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiInvitationAccepted__ctor_mA4CB69FDD348EA904326DA286F7E43DD2EE41365_AdjustorThunk (RuntimeObject* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, String_t* ___sessionName2, const RuntimeMethod* method)
{
	RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1*>(__this + _offset);
	RtpMidiInvitationAccepted__ctor_mA4CB69FDD348EA904326DA286F7E43DD2EE41365(_thisAdjusted, ___initiatorToken0, ___ssrc1, ___sessionName2, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::get_InitiatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28 (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; }
		int32_t L_0 = __this->___U3CInitiatorTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::get_Ssrc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0 (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String jp.kshoji.rtpmidi.RtpMidiInvitationAccepted::get_SessionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53 (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionName { get; }
		String_t* L_0 = __this->___U3CSessionNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitationRejected
IL2CPP_EXTERN_C void RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshal_pinvoke(const RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040& unmarshaled, RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	marshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaled.___U3CSsrcU3Ek__BackingField_1;
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.___U3CSessionNameU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshal_pinvoke_back(const RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshaled_pinvoke& marshaled, RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040& unmarshaled)
{
	int32_t unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = marshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0;
	int32_t unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = marshaled.___U3CSsrcU3Ek__BackingField_1;
	unmarshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaledU3CSsrcU3Ek__BackingField_temp_1;
	unmarshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_string_result(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CSessionNameU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CSessionNameU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitationRejected
IL2CPP_EXTERN_C void RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshal_pinvoke_cleanup(RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = NULL;
}
// Conversion methods for marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitationRejected
IL2CPP_EXTERN_C void RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshal_com(const RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040& unmarshaled, RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshaled_com& marshaled)
{
	marshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	marshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaled.___U3CSsrcU3Ek__BackingField_1;
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CSessionNameU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshal_com_back(const RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshaled_com& marshaled, RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040& unmarshaled)
{
	int32_t unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0 = marshaled.___U3CInitiatorTokenU3Ek__BackingField_0;
	unmarshaled.___U3CInitiatorTokenU3Ek__BackingField_0 = unmarshaledU3CInitiatorTokenU3Ek__BackingField_temp_0;
	int32_t unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CSsrcU3Ek__BackingField_temp_1 = marshaled.___U3CSsrcU3Ek__BackingField_1;
	unmarshaled.___U3CSsrcU3Ek__BackingField_1 = unmarshaledU3CSsrcU3Ek__BackingField_temp_1;
	unmarshaled.___U3CSessionNameU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CSessionNameU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CSessionNameU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: jp.kshoji.rtpmidi.RtpMidiInvitationRejected
IL2CPP_EXTERN_C void RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshal_com_cleanup(RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CSessionNameU3Ek__BackingField_2);
	marshaled.___U3CSessionNameU3Ek__BackingField_2 = NULL;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiInvitationRejected::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiInvitationRejected__ctor_m2B085695B68E6489A0D2D4658830081368DA3D32 (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, String_t* ___sessionName2, const RuntimeMethod* method) 
{
	{
		// InitiatorToken = initiatorToken;
		int32_t L_0 = ___initiatorToken0;
		__this->___U3CInitiatorTokenU3Ek__BackingField_0 = L_0;
		// Ssrc = ssrc;
		int32_t L_1 = ___ssrc1;
		__this->___U3CSsrcU3Ek__BackingField_1 = L_1;
		// SessionName = sessionName;
		String_t* L_2 = ___sessionName2;
		__this->___U3CSessionNameU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionNameU3Ek__BackingField_2), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiInvitationRejected__ctor_m2B085695B68E6489A0D2D4658830081368DA3D32_AdjustorThunk (RuntimeObject* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, String_t* ___sessionName2, const RuntimeMethod* method)
{
	RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040*>(__this + _offset);
	RtpMidiInvitationRejected__ctor_m2B085695B68E6489A0D2D4658830081368DA3D32(_thisAdjusted, ___initiatorToken0, ___ssrc1, ___sessionName2, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationRejected::get_InitiatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationRejected_get_InitiatorToken_m4E2C63FA156F61A6115C1EBC85C5ABAB0B29698E (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; }
		int32_t L_0 = __this->___U3CInitiatorTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiInvitationRejected_get_InitiatorToken_m4E2C63FA156F61A6115C1EBC85C5ABAB0B29698E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiInvitationRejected_get_InitiatorToken_m4E2C63FA156F61A6115C1EBC85C5ABAB0B29698E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiInvitationRejected::get_Ssrc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22 (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String jp.kshoji.rtpmidi.RtpMidiInvitationRejected::get_SessionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RtpMidiInvitationRejected_get_SessionName_mA780CAAA4017F4A916FA7FBBEDFDE45BBBE6AF6D (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionName { get; }
		String_t* L_0 = __this->___U3CSessionNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* RtpMidiInvitationRejected_get_SessionName_mA780CAAA4017F4A916FA7FBBEDFDE45BBBE6AF6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RtpMidiInvitationRejected_get_SessionName_mA780CAAA4017F4A916FA7FBBEDFDE45BBBE6AF6D_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiBitrateReceiveLimit__ctor_m899F4FB060850ED9C3E5E9B83783AF26BC7B621A (RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* __this, int32_t ___ssrc0, int32_t ___bitrateLimit1, const RuntimeMethod* method) 
{
	{
		// Ssrc = ssrc;
		int32_t L_0 = ___ssrc0;
		__this->___U3CSsrcU3Ek__BackingField_0 = L_0;
		// BitrateLimit = bitrateLimit;
		int32_t L_1 = ___bitrateLimit1;
		__this->___U3CBitrateLimitU3Ek__BackingField_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiBitrateReceiveLimit__ctor_m899F4FB060850ED9C3E5E9B83783AF26BC7B621A_AdjustorThunk (RuntimeObject* __this, int32_t ___ssrc0, int32_t ___bitrateLimit1, const RuntimeMethod* method)
{
	RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273*>(__this + _offset);
	RtpMidiBitrateReceiveLimit__ctor_m899F4FB060850ED9C3E5E9B83783AF26BC7B621A(_thisAdjusted, ___ssrc0, ___bitrateLimit1, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::get_Ssrc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiBitrateReceiveLimit_get_Ssrc_mFDA1650FF97499413CE686A094021ED22B5C03CC (RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiBitrateReceiveLimit_get_Ssrc_mFDA1650FF97499413CE686A094021ED22B5C03CC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiBitrateReceiveLimit_get_Ssrc_mFDA1650FF97499413CE686A094021ED22B5C03CC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit::get_BitrateLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiBitrateReceiveLimit_get_BitrateLimit_m2500D86E7990624D97B4CCB49F1A287FEBED7974 (RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* __this, const RuntimeMethod* method) 
{
	{
		// public int BitrateLimit { get; }
		int32_t L_0 = __this->___U3CBitrateLimitU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiBitrateReceiveLimit_get_BitrateLimit_m2500D86E7990624D97B4CCB49F1A287FEBED7974_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiBitrateReceiveLimit_get_BitrateLimit_m2500D86E7990624D97B4CCB49F1A287FEBED7974_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: jp.kshoji.rtpmidi.RtpMidiSynchronization
IL2CPP_EXTERN_C void RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshal_pinvoke(const RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A& unmarshaled, RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CSsrcU3Ek__BackingField_0 = unmarshaled.___U3CSsrcU3Ek__BackingField_0;
	marshaled.___U3CCountU3Ek__BackingField_1 = unmarshaled.___U3CCountU3Ek__BackingField_1;
	marshaled.___U3CTimestampsU3Ek__BackingField_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.___U3CTimestampsU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshal_pinvoke_back(const RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshaled_pinvoke& marshaled, RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledU3CSsrcU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CSsrcU3Ek__BackingField_temp_0 = marshaled.___U3CSsrcU3Ek__BackingField_0;
	unmarshaled.___U3CSsrcU3Ek__BackingField_0 = unmarshaledU3CSsrcU3Ek__BackingField_temp_0;
	uint8_t unmarshaledU3CCountU3Ek__BackingField_temp_1 = 0x0;
	unmarshaledU3CCountU3Ek__BackingField_temp_1 = marshaled.___U3CCountU3Ek__BackingField_1;
	unmarshaled.___U3CCountU3Ek__BackingField_1 = unmarshaledU3CCountU3Ek__BackingField_temp_1;
	unmarshaled.___U3CTimestampsU3Ek__BackingField_2 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CTimestampsU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CTimestampsU3Ek__BackingField_2), (void*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CTimestampsU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: jp.kshoji.rtpmidi.RtpMidiSynchronization
IL2CPP_EXTERN_C void RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshal_pinvoke_cleanup(RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CTimestampsU3Ek__BackingField_2);
	marshaled.___U3CTimestampsU3Ek__BackingField_2 = NULL;
}
// Conversion methods for marshalling of: jp.kshoji.rtpmidi.RtpMidiSynchronization
IL2CPP_EXTERN_C void RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshal_com(const RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A& unmarshaled, RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshaled_com& marshaled)
{
	marshaled.___U3CSsrcU3Ek__BackingField_0 = unmarshaled.___U3CSsrcU3Ek__BackingField_0;
	marshaled.___U3CCountU3Ek__BackingField_1 = unmarshaled.___U3CCountU3Ek__BackingField_1;
	marshaled.___U3CTimestampsU3Ek__BackingField_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.___U3CTimestampsU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshal_com_back(const RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshaled_com& marshaled, RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledU3CSsrcU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CSsrcU3Ek__BackingField_temp_0 = marshaled.___U3CSsrcU3Ek__BackingField_0;
	unmarshaled.___U3CSsrcU3Ek__BackingField_0 = unmarshaledU3CSsrcU3Ek__BackingField_temp_0;
	uint8_t unmarshaledU3CCountU3Ek__BackingField_temp_1 = 0x0;
	unmarshaledU3CCountU3Ek__BackingField_temp_1 = marshaled.___U3CCountU3Ek__BackingField_1;
	unmarshaled.___U3CCountU3Ek__BackingField_1 = unmarshaledU3CCountU3Ek__BackingField_temp_1;
	unmarshaled.___U3CTimestampsU3Ek__BackingField_2 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CTimestampsU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CTimestampsU3Ek__BackingField_2), (void*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CTimestampsU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: jp.kshoji.rtpmidi.RtpMidiSynchronization
IL2CPP_EXTERN_C void RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshal_com_cleanup(RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CTimestampsU3Ek__BackingField_2);
	marshaled.___U3CTimestampsU3Ek__BackingField_2 = NULL;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::.ctor(System.Int32,System.Byte,System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSynchronization__ctor_mA8B795137F855A1526935238789737C18A3FC848 (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, int32_t ___ssrc0, uint8_t ___count1, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___timestamps2, const RuntimeMethod* method) 
{
	{
		// Ssrc = ssrc;
		int32_t L_0 = ___ssrc0;
		RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF_inline(__this, L_0, NULL);
		// Count = count;
		uint8_t L_1 = ___count1;
		RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_inline(__this, L_1, NULL);
		// Timestamps = timestamps;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___timestamps2;
		RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiSynchronization__ctor_mA8B795137F855A1526935238789737C18A3FC848_AdjustorThunk (RuntimeObject* __this, int32_t ___ssrc0, uint8_t ___count1, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___timestamps2, const RuntimeMethod* method)
{
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A*>(__this + _offset);
	RtpMidiSynchronization__ctor_mA8B795137F855A1526935238789737C18A3FC848(_thisAdjusted, ___ssrc0, ___count1, ___timestamps2, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSynchronization::get_Ssrc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; set; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::set_Ssrc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSsrcU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A*>(__this + _offset);
	RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF_inline(_thisAdjusted, ___value0, method);
}
// System.Byte jp.kshoji.rtpmidi.RtpMidiSynchronization::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, const RuntimeMethod* method) 
{
	{
		// public byte Count { get; set; }
		uint8_t L_0 = __this->___U3CCountU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::set_Count(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537 (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public byte Count { get; set; }
		uint8_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_AdjustorThunk (RuntimeObject* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A*>(__this + _offset);
	RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_inline(_thisAdjusted, ___value0, method);
}
// System.Int64[] jp.kshoji.rtpmidi.RtpMidiSynchronization::get_Timestamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396 (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, const RuntimeMethod* method) 
{
	{
		// public long[] Timestamps { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___U3CTimestampsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A*>(__this + _offset);
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* _returnValue;
	_returnValue = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSynchronization::set_Timestamps(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4 (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___value0, const RuntimeMethod* method) 
{
	{
		// public long[] Timestamps { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___value0;
		__this->___U3CTimestampsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4_AdjustorThunk (RuntimeObject* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___value0, const RuntimeMethod* method)
{
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A*>(__this + _offset);
	RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::.ctor(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiReceiverFeedback__ctor_mEC938661E354EF7F2D0BCC617B6B4D5EAFC46DA1 (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, int32_t ___ssrc0, int16_t ___sequenceNr1, const RuntimeMethod* method) 
{
	{
		// Ssrc = ssrc;
		int32_t L_0 = ___ssrc0;
		RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174_inline(__this, L_0, NULL);
		// SequenceNr = sequenceNr;
		int16_t L_1 = ___sequenceNr1;
		RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED_inline(__this, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiReceiverFeedback__ctor_mEC938661E354EF7F2D0BCC617B6B4D5EAFC46DA1_AdjustorThunk (RuntimeObject* __this, int32_t ___ssrc0, int16_t ___sequenceNr1, const RuntimeMethod* method)
{
	RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E*>(__this + _offset);
	RtpMidiReceiverFeedback__ctor_mEC938661E354EF7F2D0BCC617B6B4D5EAFC46DA1(_thisAdjusted, ___ssrc0, ___sequenceNr1, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::get_Ssrc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; set; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::set_Ssrc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174 (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSsrcU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E*>(__this + _offset);
	RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174_inline(_thisAdjusted, ___value0, method);
}
// System.Int16 jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::get_SequenceNr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, const RuntimeMethod* method) 
{
	{
		// public short SequenceNr { get; set; }
		int16_t L_0 = __this->___U3CSequenceNrU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int16_t RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void jp.kshoji.rtpmidi.RtpMidiReceiverFeedback::set_SequenceNr(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	{
		// public short SequenceNr { get; set; }
		int16_t L_0 = ___value0;
		__this->___U3CSequenceNrU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED_AdjustorThunk (RuntimeObject* __this, int16_t ___value0, const RuntimeMethod* method)
{
	RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E*>(__this + _offset);
	RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void jp.kshoji.rtpmidi.RtpMidiEndSession::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D (RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, const RuntimeMethod* method) 
{
	{
		// InitiatorToken = initiatorToken;
		int32_t L_0 = ___initiatorToken0;
		__this->___U3CInitiatorTokenU3Ek__BackingField_0 = L_0;
		// Ssrc = ssrc;
		int32_t L_1 = ___ssrc1;
		__this->___U3CSsrcU3Ek__BackingField_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D_AdjustorThunk (RuntimeObject* __this, int32_t ___initiatorToken0, int32_t ___ssrc1, const RuntimeMethod* method)
{
	RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9*>(__this + _offset);
	RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D(_thisAdjusted, ___initiatorToken0, ___ssrc1, method);
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiEndSession::get_InitiatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9 (RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* __this, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; }
		int32_t L_0 = __this->___U3CInitiatorTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiEndSession::get_Ssrc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD (RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String jp.kshoji.rtpmidi.RtpMidiServer::GetDeviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RtpMidiServer_GetDeviceName_m7C819D6166BA017C35111EE15348426D5EA38ABA (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD37381EF3F1C5592B8550DA3E4FBE0D73D1EFBA);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// var participant = session.GetParticipantFromDeviceId(deviceId);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_0 = __this->___session_1;
		String_t* L_1 = ___deviceId0;
		NullCheck(L_0);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2;
		L_2 = RtpMidiSession_GetParticipantFromDeviceId_m5E9681536C0782ECA1A6F16CB340ABF0FA4B2991(L_0, L_1, NULL);
		V_0 = L_2;
		// return participant == null ? null : $"{participant.sessionName},${participant.ssrc}";
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___sessionName_11;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___ssrc_2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralBD37381EF3F1C5592B8550DA3E4FBE0D73D1EFBA, L_5, L_9, NULL);
		G_B3_0 = L_10;
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_002f:
	{
		V_1 = G_B3_0;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::.ctor(System.String,System.Int32,jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener,jp.kshoji.rtpmidi.IRtpMidiEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer__ctor_m44412C2DC6313F2C44EA766CEE28107DDA97B3BF (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___sessionName0, int32_t ___listenPort1, RuntimeObject* ___deviceConnectionListener2, RuntimeObject* ___rtpMidiEventHandler3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RtpMidiServer(string sessionName, int listenPort, IRtpMidiDeviceConnectionListener deviceConnectionListener, IRtpMidiEventHandler rtpMidiEventHandler)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// session = new RtpMidiSession(sessionName, listenPort, deviceConnectionListener);
		String_t* L_0 = ___sessionName0;
		int32_t L_1 = ___listenPort1;
		RuntimeObject* L_2 = ___deviceConnectionListener2;
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_3 = (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF*)il2cpp_codegen_object_new(RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RtpMidiSession__ctor_m483B4F64860D904D186DB7526513F3737E56BEB9(L_3, L_0, L_1, L_2, NULL);
		__this->___session_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___session_1), (void*)L_3);
		// session.SetMidiEventListener(rtpMidiEventHandler);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_4 = __this->___session_1;
		RuntimeObject* L_5 = ___rtpMidiEventHandler3;
		NullCheck(L_4);
		RtpMidiSession_SetMidiEventListener_mE2AD07E2C7C6E2B629B3DF4A7A1D177813331C69(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::ConnectToListener(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_ConnectToListener_mDC894D425EC1B6A4F5CA26FE9442C711D604E612 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint0, const RuntimeMethod* method) 
{
	{
		// session.SendInvite(endPoint);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_0 = __this->___session_1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1 = ___endPoint0;
		NullCheck(L_0);
		bool L_2;
		L_2 = RtpMidiSession_SendInvite_mE9101385CC91905BF1A282B5B0FA9D9F7CADFEDC(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_Start_m196FC0F839E48D7533857FC452B468B184A8FED8 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (rtpMidiThread == null)
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_0 = __this->___rtpMidiThread_0;
		V_0 = (bool)((((RuntimeObject*)(RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// rtpMidiThread = new RtpMidiThread(session);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_2 = __this->___session_1;
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_3 = (RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76*)il2cpp_codegen_object_new(RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RtpMidiThread__ctor_m0FA37BF59644E0FBE249D1F4128DCCFD07DAFD7B(L_3, L_2, NULL);
		__this->___rtpMidiThread_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rtpMidiThread_0), (void*)L_3);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean jp.kshoji.rtpmidi.RtpMidiServer::IsStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RtpMidiServer_IsStarted_m83684B19F34CA72DFA2E0EFBDD5BC0488800D6A6 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (rtpMidiThread == null)
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_0 = __this->___rtpMidiThread_0;
		V_0 = (bool)((((RuntimeObject*)(RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		// return rtpMidiThread.IsRunning;
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_2 = __this->___rtpMidiThread_0;
		NullCheck(L_2);
		bool L_3 = L_2->___IsRunning_0;
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_Stop_mA28C309584CD5E37742F3108152E8841AA712C24 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, const RuntimeMethod* method) 
{
	RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* G_B2_0 = NULL;
	RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* G_B1_0 = NULL;
	{
		// rtpMidiThread?.Stop();
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_0 = __this->___rtpMidiThread_0;
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RtpMidiThread_Stop_m260B30396538D3A15ED98FC33870446C14A86C6C(G_B2_0, NULL);
	}

IL_0013:
	{
		// rtpMidiThread = null;
		__this->___rtpMidiThread_0 = (RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rtpMidiThread_0), (void*)(RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76*)NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiNoteOn(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiNoteOn_m0CEA2420A3C35764F97668CF22907756A43CDAF3 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___channel1, int32_t ___note2, int32_t ___velocity3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)((channel & 0xf) | 0x90), (byte)(note & 0x7f), (byte)(velocity & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int32_t L_3 = ___channel1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_3&((int32_t)15)))|((int32_t)144)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		int32_t L_5 = ___note2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)127)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_4;
		int32_t L_7 = ___velocity3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_7&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiNoteOff(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiNoteOff_mA5AAE3EEF329807C4D0FBEB9DEC95A6F5B04965A (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___channel1, int32_t ___note2, int32_t ___velocity3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)((channel & 0xf) | 0x80), (byte)(note & 0x7f), (byte)(velocity & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int32_t L_3 = ___channel1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_3&((int32_t)15)))|((int32_t)128)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		int32_t L_5 = ___note2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)127)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_4;
		int32_t L_7 = ___velocity3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_7&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiPolyphonicAftertouch(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiPolyphonicAftertouch_mEE25FE1F979C90E87001EA5B59DF339E5A1BEFE7 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___channel1, int32_t ___note2, int32_t ___pressure3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)((channel & 0xf) | 0xa0), (byte)(note & 0x7f), (byte)(pressure & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int32_t L_3 = ___channel1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_3&((int32_t)15)))|((int32_t)160)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		int32_t L_5 = ___note2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)127)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_4;
		int32_t L_7 = ___pressure3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_7&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiControlChange(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiControlChange_m8FB9A04EB26D5881573F578D2DA03B1358B3EB95 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___channel1, int32_t ___function2, int32_t ___value3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)((channel & 0xf) | 0xb0), (byte)(function & 0x7f), (byte)(value & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int32_t L_3 = ___channel1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_3&((int32_t)15)))|((int32_t)176)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		int32_t L_5 = ___function2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)127)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_4;
		int32_t L_7 = ___value3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_7&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiProgramChange(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiProgramChange_m2C74E4DDCBC66C99AC74B65F276833B0AA335233 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___channel1, int32_t ___program2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)((channel & 0xf) | 0xc0), (byte)(program & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int32_t L_3 = ___channel1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_3&((int32_t)15)))|((int32_t)192)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		int32_t L_5 = ___program2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiChannelAftertouch(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiChannelAftertouch_m673AC79E1E6DBB34F1EF2771EDB7CC496DFE0144 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___channel1, int32_t ___pressure2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)((channel & 0xf) | 0xd0), (byte)(pressure & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int32_t L_3 = ___channel1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_3&((int32_t)15)))|((int32_t)208)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		int32_t L_5 = ___pressure2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiPitchWheel(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiPitchWheel_m2243684C6183FCD7899BA867670416F67D05ACC2 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___channel1, int32_t ___amount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)((channel & 0xf) | 0xe0), (byte)(amount & 0x7f), (byte)((amount >> 7) & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int32_t L_3 = ___channel1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_3&((int32_t)15)))|((int32_t)224)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		int32_t L_5 = ___amount2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)127)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_4;
		int32_t L_7 = ___amount2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_7>>7))&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiSystemExclusive(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiSystemExclusive_m1CECDF757D45552231A0EA3F37AB531D890F7036 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___systemExclusive1, const RuntimeMethod* method) 
{
	{
		// SendMidiRaw(deviceId, systemExclusive);
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___systemExclusive1;
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiTimeCodeQuarterFrame(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiTimeCodeQuarterFrame_mE7CFE1328098F08D38BF77AC8C435876795ACBC8 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___timing1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xf1, (byte)(timing & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)241));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		int32_t L_4 = ___timing1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_4&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiSongSelect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiSongSelect_m281353AEF9996D0E80447EE4860C3A26CCA39B06 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___song1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xf3, (byte)(song & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)243));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		int32_t L_4 = ___song1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_4&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiSongPositionPointer(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiSongPositionPointer_m53D1A057F3EC1F19F4AD2865886F2DA481D0A2A1 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, int32_t ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xf2, (byte)(position & 0x7f), (byte)((position >> 7) & 0x7f)});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)242));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		int32_t L_4 = ___position1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_4&((int32_t)127)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_3;
		int32_t L_6 = ___position1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_6>>7))&((int32_t)127)))));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiTuneRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiTuneRequest_mFE3881965DCADFF21F7A523C0C684CA9EC65B11F (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xf6});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)246));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiTimingClock(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiTimingClock_m0FDBB88768A70E14D55DD5E76EE941B6EB8DEED7 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xf8});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)248));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiStart_m3300141A171663078145A76D7A7978D7100419BA (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xfa});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)250));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiContinue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiContinue_m963FBDE26E882DEAFDC3FB4ACB3DD3E3415DDAC8 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xfb});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)251));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiStop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiStop_mAC386DA498744AB27A61DFDD760B07F2DBEA102D (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xfc});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)252));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiActiveSensing(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiActiveSensing_m7C679EBE0EF32BD0B19AA6B6571068B462BCE1D0 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xfe});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)254));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiReset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiReset_m0FDCFCB1BB741BB1F8532F625E264526DD5EEC81 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMidiRaw(deviceId, new[] {(byte)0xff});
		String_t* L_0 = ___deviceId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)255));
		RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer::SendMidiRaw(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiServer_SendMidiRaw_m098A69A3326A0F4FB375B8B22662FD5BD806C8E7 (RtpMidiServer_t2C3195A1BFEBFAD2840A8ABE4B100505FF9D37DD* __this, String_t* ___deviceId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) 
{
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	{
		// var participant = session.GetParticipantFromDeviceId(deviceId);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_0 = __this->___session_1;
		String_t* L_1 = ___deviceId0;
		NullCheck(L_0);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2;
		L_2 = RtpMidiSession_GetParticipantFromDeviceId_m5E9681536C0782ECA1A6F16CB340ABF0FA4B2991(L_0, L_1, NULL);
		V_0 = L_2;
		// if (participant == null)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_3 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0064;
	}

IL_0019:
	{
		// if (session.BeginTransmission(participant))
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_5 = __this->___session_1;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = RtpMidiSession_BeginTransmission_m518370F239FDC0C6178C32FEA978C2C5BC6B2B66(L_5, L_6, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// foreach (var datum in data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___data1;
		V_3 = L_9;
		V_4 = 0;
		goto IL_004f;
	}

IL_0032:
	{
		// foreach (var datum in data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// session.Write(participant, datum);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_14 = __this->___session_1;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_15 = V_0;
		uint8_t L_16 = V_5;
		NullCheck(L_14);
		RtpMidiSession_Write_mCB83C01AEF62AFF70B4E233ACC888CD5D80BE116(L_14, L_15, L_16, NULL);
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004f:
	{
		// foreach (var datum in data)
		int32_t L_18 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// session.EndTransmission(participant);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_20 = __this->___session_1;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_21 = V_0;
		NullCheck(L_20);
		RtpMidiSession_EndTransmission_mACD6BB6A2D23510484F6EB3153DD86FF4B82F0D2(L_20, L_21, NULL);
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
// System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread::.ctor(jp.kshoji.rtpmidi.RtpMidiSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiThread__ctor_m0FA37BF59644E0FBE249D1F4128DCCFD07DAFD7B (RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* __this, RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m34717ACB3637517832915DE95CFE2C2C8ED5C0B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8* L_0 = (U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m03F0CCDB39111D331F97A97278F2F32CA2099F4F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8* L_1 = V_0;
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_2 = ___session0;
		NullCheck(L_1);
		L_1->___session_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___session_1), (void*)L_2);
		// internal RtpMidiThread(RtpMidiSession session)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_0), (void*)__this);
		// thread = new Thread(() =>
		// {
		//     IsRunning = true;
		// 
		//     session.Begin();
		//     while (IsRunning)
		//     {
		//         session.ManageSessionInvites();
		//         session.ReadDataPackets();
		// 
		//         foreach (var participant in session.participants)
		//         {
		//             var length = session.Available(participant);
		//             for (var i = 0; i < length; i++)
		//             {
		//                 session.Read(participant);
		//             }
		//         }
		// 
		//         if (session.ReadControlPackets() > 0)
		//         {
		//             session.ParseControlPackets();
		//         }
		// 
		//         session.ManageReceiverFeedback();
		//         session.ManageSynchronization();
		// 
		//         // wait for next data
		//         if (thread != null)
		//         {
		//             lock (thread)
		//             {
		//                 Monitor.Wait(thread, 10);
		//             }
		//         }
		//     }
		//     session.End();
		// });
		U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8* L_4 = V_0;
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_5 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m34717ACB3637517832915DE95CFE2C2C8ED5C0B8_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_6, L_5, NULL);
		__this->___thread_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thread_1), (void*)L_6);
		// thread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = __this->___thread_1;
		NullCheck(L_7);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_7, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiThread_Stop_m260B30396538D3A15ED98FC33870446C14A86C6C (RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* __this, const RuntimeMethod* method) 
{
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_0 = NULL;
	bool V_1 = false;
	{
		// IsRunning = false;
		__this->___IsRunning_0 = (bool)0;
		// lock (thread)
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = __this->___thread_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// Monitor.PulseAll(thread);
			Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = __this->___thread_1;
			Monitor_PulseAll_m176CB60AB441BA3F5EC1ADD72BAF603556E9D958(L_4, NULL);
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
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
// System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m03F0CCDB39111D331F97A97278F2F32CA2099F4F (U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiServer/RtpMidiThread/<>c__DisplayClass2_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m34717ACB3637517832915DE95CFE2C2C8ED5C0B8 (U3CU3Ec__DisplayClass2_0_tEB343A873DAAF49B6CC82621D23462D8311224F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	{
		// IsRunning = true;
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		L_0->___IsRunning_0 = (bool)1;
		// session.Begin();
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_1 = __this->___session_1;
		NullCheck(L_1);
		RtpMidiSession_Begin_mC52BF739237C5187633D0C6E00C382EAA7C2D075(L_1, NULL);
		goto IL_012c;
	}

IL_001e:
	{
		// session.ManageSessionInvites();
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_2 = __this->___session_1;
		NullCheck(L_2);
		RtpMidiSession_ManageSessionInvites_m0D0C32AE1632AE3C51002EF4AD9EC317A98A1214(L_2, NULL);
		// session.ReadDataPackets();
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_3 = __this->___session_1;
		NullCheck(L_3);
		RtpMidiSession_ReadDataPackets_m68C80889F7EFDFE3FE67673C8F182D64D6F1943D(L_3, NULL);
		// foreach (var participant in session.participants)
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_4 = __this->___session_1;
		NullCheck(L_4);
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_5 = L_4->___participants_9;
		NullCheck(L_5);
		Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_6;
		L_6 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_5, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_0), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0083_1;
			}

IL_004b_1:
			{
				// foreach (var participant in session.participants)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_7;
				L_7 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_0), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
				V_1 = L_7;
				// var length = session.Available(participant);
				RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_8 = __this->___session_1;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_9 = V_1;
				NullCheck(L_8);
				int32_t L_10;
				L_10 = RtpMidiSession_Available_m87E775EAB23A0890ABEB7796FA20641EBC85D2C8(L_8, L_9, NULL);
				V_2 = L_10;
				// for (var i = 0; i < length; i++)
				V_3 = 0;
				goto IL_0078_1;
			}

IL_0065_1:
			{
				// session.Read(participant);
				RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_11 = __this->___session_1;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_12 = V_1;
				NullCheck(L_11);
				uint8_t L_13;
				L_13 = RtpMidiSession_Read_mD146F0D6AB1A0AA91E0E3B32687B722CAA33FA32(L_11, L_12, NULL);
				// for (var i = 0; i < length; i++)
				int32_t L_14 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			}

IL_0078_1:
			{
				// for (var i = 0; i < length; i++)
				int32_t L_15 = V_3;
				int32_t L_16 = V_2;
				V_4 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
				bool L_17 = V_4;
				if (L_17)
				{
					goto IL_0065_1;
				}
			}
			{
			}

IL_0083_1:
			{
				// foreach (var participant in session.participants)
				bool L_18;
				L_18 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_0), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_004b_1;
				}
			}
			{
				goto IL_009d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		// if (session.ReadControlPackets() > 0)
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_19 = __this->___session_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = RtpMidiSession_ReadControlPackets_mA47E6A6C787ED032324BA8A38AE2D62FC4332A5D(L_19, NULL);
		V_5 = (bool)((((int32_t)L_20) > ((int32_t)0))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_00bf;
		}
	}
	{
		// session.ParseControlPackets();
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_22 = __this->___session_1;
		NullCheck(L_22);
		RtpMidiSession_ParseControlPackets_m8C9367D90111CFE0915D2767D4495F48A45BA00B(L_22, NULL);
	}

IL_00bf:
	{
		// session.ManageReceiverFeedback();
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_23 = __this->___session_1;
		NullCheck(L_23);
		RtpMidiSession_ManageReceiverFeedback_m0E9CBA03489F02D1565D09F4BC025D8938B0B26A(L_23, NULL);
		// session.ManageSynchronization();
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_24 = __this->___session_1;
		NullCheck(L_24);
		RtpMidiSession_ManageSynchronization_mDF103B072D62660CA1D13901F38E56F00D8B7030(L_24, NULL);
		// if (thread != null)
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_25 = __this->___U3CU3E4__this_0;
		NullCheck(L_25);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_26 = L_25->___thread_1;
		V_6 = (bool)((!(((RuntimeObject*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_012b;
		}
	}
	{
		// lock (thread)
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_28 = __this->___U3CU3E4__this_0;
		NullCheck(L_28);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_29 = L_28->___thread_1;
		V_7 = L_29;
		V_8 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{// begin finally (depth: 1)
				{
					bool L_30 = V_8;
					if (!L_30)
					{
						goto IL_0129;
					}
				}
				{
					Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_31 = V_7;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_31, NULL);
				}

IL_0129:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_32 = V_7;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_32, (&V_8), NULL);
			// Monitor.Wait(thread, 10);
			RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_33 = __this->___U3CU3E4__this_0;
			NullCheck(L_33);
			Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_34 = L_33->___thread_1;
			bool L_35;
			L_35 = Monitor_Wait_m60B0A448270187089CC75DE856B496C452EF4601(L_34, ((int32_t)10), NULL);
			goto IL_012a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012a:
	{
	}

IL_012b:
	{
	}

IL_012c:
	{
		// while (IsRunning)
		RtpMidiThread_tB6580907B7018421D5E61F6687212B8655E4AE76* L_36 = __this->___U3CU3E4__this_0;
		NullCheck(L_36);
		bool L_37 = L_36->___IsRunning_0;
		V_9 = L_37;
		bool L_38 = V_9;
		if (L_38)
		{
			goto IL_001e;
		}
	}
	{
		// session.End();
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_39 = __this->___session_1;
		NullCheck(L_39);
		RtpMidiSession_End_m7863BA59945C973877C9AE0F959694CCC8F06FA6(L_39, NULL);
		// });
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
// System.Boolean jp.kshoji.rtpmidi.RtpMidiParticipant::get_Synchronizing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RtpMidiParticipant_get_Synchronizing_mF60EF42DC53BEC43B3DD61D6100A6400B9A7472B (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, const RuntimeMethod* method) 
{
	{
		// public bool Synchronizing { get; set; }
		bool L_0 = __this->___U3CSynchronizingU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::set_Synchronizing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiParticipant_set_Synchronizing_m85239D61ABFC5F3885A669381565911B47B58371 (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Synchronizing { get; set; }
		bool L_0 = ___value0;
		__this->___U3CSynchronizingU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Int64 jp.kshoji.rtpmidi.RtpMidiParticipant::get_OffsetEstimate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RtpMidiParticipant_get_OffsetEstimate_m49C51370146D2B3AA104E0711B8C861461EABA67 (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, const RuntimeMethod* method) 
{
	{
		// public long OffsetEstimate { get; set; }
		int64_t L_0 = __this->___U3COffsetEstimateU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::set_OffsetEstimate(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiParticipant_set_OffsetEstimate_m247AF18F141787C6EA72D9F1D70F96C01963B2F0 (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public long OffsetEstimate { get; set; }
		int64_t L_0 = ___value0;
		__this->___U3COffsetEstimateU3Ek__BackingField_20 = L_0;
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::.ctor(jp.kshoji.rtpmidi.RtpMidiSession,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiParticipant__ctor_mF9057DE20163285A4D5484F4CB8D106D24054D2F (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* ___session0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal short sendSequenceNr = (short)random.Next(1, short.MaxValue);
		il2cpp_codegen_runtime_class_init_inline(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var))->___random_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, 1, ((int32_t)32767));
		__this->___sendSequenceNr_7 = ((int16_t)L_1);
		// internal InviteStatus invitationStatus = InviteStatus.Initiating;
		__this->___invitationStatus_15 = 0;
		// public bool FirstMessageReceived = true;
		__this->___FirstMessageReceived_19 = (bool)1;
		// internal readonly LinkedList<byte> inMidiBuffer = new LinkedList<byte>();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_2 = (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*)il2cpp_codegen_object_new(LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1(L_2, LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1_RuntimeMethod_var);
		__this->___inMidiBuffer_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inMidiBuffer_22), (void*)L_2);
		// internal readonly LinkedList<byte> outMidiBuffer = new LinkedList<byte>();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_3 = (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*)il2cpp_codegen_object_new(LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1(L_3, LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1_RuntimeMethod_var);
		__this->___outMidiBuffer_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outMidiBuffer_23), (void*)L_3);
		// internal readonly LinkedList<byte> dataBuffer = new LinkedList<byte>();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_4 = (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*)il2cpp_codegen_object_new(LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1(L_4, LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1_RuntimeMethod_var);
		__this->___dataBuffer_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataBuffer_24), (void*)L_4);
		// internal RtpMidiParticipant(RtpMidiSession session, IPEndPoint endPoint)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// rtpMidiParser = new RtpMidiParser(session);
		RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* L_5 = ___session0;
		RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* L_6 = (RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81*)il2cpp_codegen_object_new(RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RtpMidiParser__ctor_m41EE9465D0F91881879F210D6B49FDE1583A2CF5(L_6, L_5, NULL);
		__this->___rtpMidiParser_25 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rtpMidiParser_25), (void*)L_6);
		// ControlEndPoint = endPoint;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_7 = ___endPoint1;
		__this->___ControlEndPoint_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ControlEndPoint_3), (void*)L_7);
		// DataEndPoint = new IPEndPoint(endPoint.Address, endPoint.Port + 1);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_8 = ___endPoint1;
		NullCheck(L_8);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9;
		L_9 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_8, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_10 = ___endPoint1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_10, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_12 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_12, L_9, ((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		__this->___DataEndPoint_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DataEndPoint_4), (void*)L_12);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiParticipant::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiParticipant__cctor_m8D77592CCB5BB86F31625F94BBA66C2D5E49DB68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Random random = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var))->___random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var))->___random_0), (void*)L_0);
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
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiSession_get_Port_m31BCC9B42C314665019BE60D5C8551879C2C8A86 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	{
		// private int Port { get; }
		int32_t L_0 = __this->___U3CPortU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::get_Ssrc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	{
		// private int Ssrc { get; set; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::set_Ssrc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_set_Ssrc_m081E8D90233B36C201EB75EEE015BC983D629C42 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private int Ssrc { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSsrcU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::.ctor(System.String,System.Int32,jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession__ctor_m483B4F64860D904D186DB7526513F3737E56BEB9 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, String_t* ___sessionName0, int32_t ___listenPort1, RuntimeObject* ___deviceConnectionListener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7B2B211EA00403D20A22C7BE9ABB6C75CEE78558_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly RtpMidiClock rtpMidiClock = new RtpMidiClock();
		RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* L_0 = (RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2*)il2cpp_codegen_object_new(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RtpMidiClock__ctor_m3B03B531023885415D32314F8CF82A53089FCE91(L_0, NULL);
		__this->___rtpMidiClock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rtpMidiClock_2), (void*)L_0);
		// private readonly Random random = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_1, NULL);
		__this->___random_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_3), (void*)L_1);
		// internal readonly HashSet<RtpMidiParticipant> participants = new HashSet<RtpMidiParticipant>();
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_2 = (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E*)il2cpp_codegen_object_new(HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_m7B2B211EA00403D20A22C7BE9ABB6C75CEE78558(L_2, HashSet_1__ctor_m7B2B211EA00403D20A22C7BE9ABB6C75CEE78558_RuntimeMethod_var);
		__this->___participants_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___participants_9), (void*)L_2);
		// private readonly HashSet<RtpMidiParticipant> participantsToRemove = new HashSet<RtpMidiParticipant>();
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_3 = (HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E*)il2cpp_codegen_object_new(HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HashSet_1__ctor_m7B2B211EA00403D20A22C7BE9ABB6C75CEE78558(L_3, HashSet_1__ctor_m7B2B211EA00403D20A22C7BE9ABB6C75CEE78558_RuntimeMethod_var);
		__this->___participantsToRemove_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___participantsToRemove_10), (void*)L_3);
		// private readonly LinkedList<byte> controlBuffer = new LinkedList<byte>();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_4 = (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272*)il2cpp_codegen_object_new(LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1(L_4, LinkedList_1__ctor_mD8423A053CA8FEC62151A975CE86C39C1C79EBA1_RuntimeMethod_var);
		__this->___controlBuffer_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlBuffer_11), (void*)L_4);
		// public RtpMidiSession(string sessionName, int listenPort, IRtpMidiDeviceConnectionListener deviceConnectionListener)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Port = listenPort;
		int32_t L_5 = ___listenPort1;
		__this->___U3CPortU3Ek__BackingField_0 = L_5;
		// localName = sessionName;
		String_t* L_6 = ___sessionName0;
		__this->___localName_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localName_18), (void*)L_6);
		// appleMidiParser = new AppleMidiParser(this);
		AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA* L_7 = (AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA*)il2cpp_codegen_object_new(AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AppleMidiParser__ctor_m80DEA11B2D63BFD68BCC01036607BDEA7559F018(L_7, __this, NULL);
		__this->___appleMidiParser_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appleMidiParser_12), (void*)L_7);
		// this.deviceConnectionListener = deviceConnectionListener;
		RuntimeObject* L_8 = ___deviceConnectionListener2;
		__this->___deviceConnectionListener_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceConnectionListener_20), (void*)L_8);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::SetMidiEventListener(jp.kshoji.rtpmidi.IRtpMidiEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_SetMidiEventListener_mE2AD07E2C7C6E2B629B3DF4A7A1D177813331C69 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RuntimeObject* ___eventHandler0, const RuntimeMethod* method) 
{
	{
		// rtpMidiEventHandler = eventHandler;
		RuntimeObject* L_0 = ___eventHandler0;
		__this->___rtpMidiEventHandler_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rtpMidiEventHandler_19), (void*)L_0);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::SetRtpMidiExceptionListener(jp.kshoji.rtpmidi.IRtpMidiExceptionListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_SetRtpMidiExceptionListener_m561A141EDFF9050CACEB0218A1E06612BA12B630 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	{
		// exceptionListener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->___exceptionListener_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exceptionListener_21), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean jp.kshoji.rtpmidi.RtpMidiSession::SendInvite(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RtpMidiSession_SendInvite_mE9101385CC91905BF1A282B5B0FA9D9F7CADFEDC (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_0 = NULL;
	bool V_1 = false;
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_0 = __this->___participants_9;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0087;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0087:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (participants.Count >= MaxParticipants)
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_4 = __this->___participants_9;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_inline(L_4, HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_RuntimeMethod_var);
				V_3 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)((int32_t)64)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_0030_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_008d;
			}

IL_0030_1:
			{
				// var participant = new RtpMidiParticipant(this, endPoint)
				// {
				//     kind = ParticipantKind.Initiator,
				//     lastInviteSentTime = RtpMidiClock.Ticks() - 1000,
				//     lastSyncExchangeTime = RtpMidiClock.Ticks(),
				//     initiatorToken = random.Next(),
				// };
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_7 = ___endPoint0;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8 = (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)il2cpp_codegen_object_new(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				RtpMidiParticipant__ctor_mF9057DE20163285A4D5484F4CB8D106D24054D2F(L_8, __this, L_7, NULL);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_9 = L_8;
				NullCheck(L_9);
				L_9->___kind_1 = 1;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_10 = L_9;
				il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
				int64_t L_11;
				L_11 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
				NullCheck(L_10);
				L_10->___lastInviteSentTime_14 = ((int64_t)il2cpp_codegen_subtract(L_11, ((int64_t)((int32_t)1000))));
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_12 = L_10;
				int64_t L_13;
				L_13 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
				NullCheck(L_12);
				L_12->___lastSyncExchangeTime_10 = L_13;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_14 = L_12;
				Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_15 = __this->___random_3;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_15);
				NullCheck(L_14);
				L_14->___initiatorToken_13 = L_16;
				V_2 = L_14;
				// participants.Add(participant);
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_17 = __this->___participants_9;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_18 = V_2;
				NullCheck(L_17);
				bool L_19;
				L_19 = HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB(L_17, L_18, HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var);
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// return true;
		V_4 = (bool)1;
		goto IL_008d;
	}

IL_008d:
	{
		// }
		bool L_20 = V_4;
		return L_20;
	}
}
// System.String jp.kshoji.rtpmidi.RtpMidiSession::GetDeviceId(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBB995C696A493646158B1E14E822F8326AA2C43);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return $"RtpMidi:{Port}:{participant.ssrc}";
		int32_t L_0;
		L_0 = RtpMidiSession_get_Port_m31BCC9B42C314665019BE60D5C8551879C2C8A86_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_3 = ___participant0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___ssrc_2;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralEBB995C696A493646158B1E14E822F8326AA2C43, L_2, L_6, NULL);
		V_0 = L_7;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::GetPortFromDeviceId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiSession_GetPortFromDeviceId_m38B0BC4DCB8CC70D6A8555FB664743F0D4BF7CD9 (String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// var deviceInfo = deviceId.Split(':');
		String_t* L_0 = ___deviceId0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)58), 0, NULL);
		V_0 = L_1;
		// if (deviceInfo.Length != 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		V_1 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return -1;
		V_2 = (-1);
		goto IL_0028;
	}

IL_001d:
	{
		// return Convert.ToInt32(deviceInfo[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_6, NULL);
		V_2 = L_7;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Nullable`1<System.Int32> jp.kshoji.rtpmidi.RtpMidiSession::GetSsrcFromDeviceId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 RtpMidiSession_GetSsrcFromDeviceId_m2ED9503BC36486711826211EF2F0B3FE64904350 (String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var deviceInfo = deviceId.Split(':');
		String_t* L_0 = ___deviceId0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)58), 0, NULL);
		V_0 = L_1;
		// if (deviceInfo.Length != 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		V_1 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_4 = V_2;
		V_3 = L_4;
		goto IL_0035;
	}

IL_0025:
	{
		// return Convert.ToInt32(deviceInfo[2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 2;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_7, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		V_3 = L_9;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10 = V_3;
		return L_10;
	}
}
// jp.kshoji.rtpmidi.RtpMidiParticipant jp.kshoji.rtpmidi.RtpMidiSession::GetParticipantFromDeviceId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* RtpMidiSession_GetParticipantFromDeviceId_m5E9681536C0782ECA1A6F16CB340ABF0FA4B2991 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, String_t* ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	bool V_1 = false;
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_2 = NULL;
	{
		// var deviceInfo = deviceId.Split(':');
		String_t* L_0 = ___deviceId0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)58), 0, NULL);
		V_0 = L_1;
		// if (deviceInfo.Length != 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		V_1 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return null;
		V_2 = (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)NULL;
		goto IL_002e;
	}

IL_001d:
	{
		// return GetParticipantBySsrc(Convert.ToInt32(deviceInfo[2]));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 2;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_6, NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8;
		L_8 = RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5(__this, L_7, NULL);
		V_2 = L_8;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_9 = V_2;
		return L_9;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::SendEndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_SendEndSession_m834BBB4F3F21141A5CFFA865313A6E3F8B406385 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_0 = NULL;
	bool V_1 = false;
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_3 = NULL;
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_0 = __this->___participants_9;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005c;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// foreach (var participant in participants)
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_4 = __this->___participants_9;
				NullCheck(L_4);
				Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_5;
				L_5 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_4, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0040_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_2), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0035_2;
					}

IL_0023_2:
					{
						// foreach (var participant in participants)
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6;
						L_6 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_2), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
						V_3 = L_6;
						// SendEndSession(participant);
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_7 = V_3;
						RtpMidiSession_SendEndSession_m58DC5A45D223079AE151E5AEE9ACDD621025E9E5(__this, L_7, NULL);
					}

IL_0035_2:
					{
						// foreach (var participant in participants)
						bool L_8;
						L_8 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_2), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
						if (L_8)
						{
							goto IL_0023_2;
						}
					}
					{
						goto IL_004f_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_004f_1:
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
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::SendEndSession(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_SendEndSession_m58DC5A45D223079AE151E5AEE9ACDD621025E9E5 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var endSession = new RtpMidiEndSession(0, Ssrc);
		int32_t L_0;
		L_0 = RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92_inline(__this, NULL);
		RtpMidiEndSession__ctor_m77AB9EC0630D7EDBCC955D9EA840348854BD649D((&V_0), 0, L_0, NULL);
		// WriteEndSession(participant.ControlEndPoint, endSession);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1 = ___participant0;
		NullCheck(L_1);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_2 = L_1->___ControlEndPoint_3;
		RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9 L_3 = V_0;
		RtpMidiSession_WriteEndSession_m760F965A73F36677C475AE9ECC67655927C52FE0(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::SendSynchronization(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_SendSynchronization_m4487D4DE3A13E6E1BAA445C735182EF938675B40 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var synchronization = new RtpMidiSynchronization
		// {
		//     Timestamps = new []
		//     {
		//         rtpMidiClock.Now(),
		//         0L,
		//         0L,
		//     },
		//     Count = 0,
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)3);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = L_0;
		RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* L_2 = __this->___rtpMidiClock_2;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = RtpMidiClock_Now_m11B034C9E2C4FB7F9C9EE7FC122495B3D773806E(L_2, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)L_3);
		RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4_inline((&V_1), L_1, NULL);
		RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_inline((&V_1), (uint8_t)0, NULL);
		RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A L_4 = V_1;
		V_0 = L_4;
		// WriteSynchronization(participant.DataEndPoint, synchronization);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_5 = ___participant0;
		NullCheck(L_5);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = L_5->___DataEndPoint_4;
		RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A L_7 = V_0;
		RtpMidiSession_WriteSynchronization_m27187F9AFDA0FC771DE29C843D3B3B1B5F5DBFA2(__this, L_6, L_7, NULL);
		// participant.Synchronizing = true;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8 = ___participant0;
		NullCheck(L_8);
		RtpMidiParticipant_set_Synchronizing_m85239D61ABFC5F3885A669381565911B47B58371_inline(L_8, (bool)1, NULL);
		// participant.synchronizationCount++;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_9 = ___participant0;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_10 = L_9;
		NullCheck(L_10);
		uint8_t L_11 = L_10->___synchronizationCount_17;
		NullCheck(L_10);
		L_10->___synchronizationCount_17 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, 1)));
		// participant.lastInviteSentTime = RtpMidiClock.Ticks();
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_12 = ___participant0;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_13;
		L_13 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		NullCheck(L_12);
		L_12->___lastInviteSentTime_14 = L_13;
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_Begin_mC52BF739237C5187633D0C6E00C382EAA7C2D075 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_0 = NULL;
	bool V_1 = false;
	{
		// Ssrc = random.Next();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = __this->___random_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_0);
		RtpMidiSession_set_Ssrc_m081E8D90233B36C201EB75EEE015BC983D629C42_inline(__this, L_1, NULL);
		// controlPort = new UdpClient(Port);
		int32_t L_2;
		L_2 = RtpMidiSession_get_Port_m31BCC9B42C314665019BE60D5C8551879C2C8A86_inline(__this, NULL);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_3 = (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)il2cpp_codegen_object_new(UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UdpClient__ctor_m6DCF61B7A404114E51B86974B1B4E028F45C3442(L_3, L_2, NULL);
		__this->___controlPort_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlPort_4), (void*)L_3);
		// dataPort = new UdpClient(Port + 1);
		int32_t L_4;
		L_4 = RtpMidiSession_get_Port_m31BCC9B42C314665019BE60D5C8551879C2C8A86_inline(__this, NULL);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_5 = (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)il2cpp_codegen_object_new(UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UdpClient__ctor_m6DCF61B7A404114E51B86974B1B4E028F45C3442(L_5, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		__this->___dataPort_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataPort_6), (void*)L_5);
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_6 = __this->___participants_9;
		V_0 = L_6;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				{
					bool L_7 = V_1;
					if (!L_7)
					{
						goto IL_0068;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_8 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_8, NULL);
				}

IL_0068:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_9 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_9, (&V_1), NULL);
			// rtpMidiClock.Init(RtpMidiClock.MidiSamplingRateDefault);
			RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* L_10 = __this->___rtpMidiClock_2;
			NullCheck(L_10);
			RtpMidiClock_Init_mF73EE129B3E7DA01C6D3F8CFA556C49DDCDA622F(L_10, ((int32_t)10000), NULL);
			goto IL_0069;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_End_m7863BA59945C973877C9AE0F959694CCC8F06FA6 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B2_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B1_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B5_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B4_0 = NULL;
	{
		// SendEndSession();
		RtpMidiSession_SendEndSession_m834BBB4F3F21141A5CFFA865313A6E3F8B406385(__this, NULL);
		// controlPort?.Dispose();
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_0 = __this->___controlPort_4;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		goto IL_001a;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		UdpClient_Dispose_m12D6B00FE05B89B2049F79E847BCA2D0490DD63E(G_B2_0, NULL);
	}

IL_001a:
	{
		// controlPort = null;
		__this->___controlPort_4 = (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlPort_4), (void*)(UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)NULL);
		// dataPort?.Dispose();
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_2 = __this->___dataPort_6;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_002d;
		}
	}
	{
		goto IL_0033;
	}

IL_002d:
	{
		NullCheck(G_B5_0);
		UdpClient_Dispose_m12D6B00FE05B89B2049F79E847BCA2D0490DD63E(G_B5_0, NULL);
	}

IL_0033:
	{
		// dataPort = null;
		__this->___dataPort_6 = (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataPort_6), (void*)(UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)NULL);
		// }
		return;
	}
}
// System.Boolean jp.kshoji.rtpmidi.RtpMidiSession::BeginTransmission(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RtpMidiSession_BeginTransmission_m518370F239FDC0C6178C32FEA978C2C5BC6B2B66 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B16_0 = 0;
	{
		// if (dataPort == null)
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_0 = __this->___dataPort_6;
		V_1 = (bool)((((RuntimeObject*)(UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00da;
	}

IL_0016:
	{
		// lock (participant.outMidiBuffer)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2 = ___participant0;
		NullCheck(L_2);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_3 = L_2->___outMidiBuffer_23;
		V_3 = L_3;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_4;
					if (!L_4)
					{
						goto IL_008e;
					}
				}
				{
					LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_5 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_008e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_6 = V_3;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_4), NULL);
				// if (participant.outMidiBuffer.Count > 0)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_7 = ___participant0;
				NullCheck(L_7);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_8 = L_7->___outMidiBuffer_23;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_8, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
				bool L_10 = V_5;
				if (!L_10)
				{
					goto IL_0080_1;
				}
			}
			{
				// if (participant.outMidiBuffer.Count + 1 + 3 > RtpMidiParticipant.MaxBufferSize)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_11 = ___participant0;
				NullCheck(L_11);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_12 = L_11->___outMidiBuffer_23;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_12, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
				V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_13, 1)), 3))) > ((int32_t)((int32_t)64)))? 1 : 0);
				bool L_14 = V_6;
				if (!L_14)
				{
					goto IL_0070_1;
				}
			}
			{
				// WriteRtpMidiBuffer(participant);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_15 = ___participant0;
				RtpMidiSession_WriteRtpMidiBuffer_m9BDC07852AE1E47C62AD61A44CB70020988BDBD6(__this, L_15, NULL);
				// participant.outMidiBuffer.Clear();
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_16 = ___participant0;
				NullCheck(L_16);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_17 = L_16->___outMidiBuffer_23;
				NullCheck(L_17);
				LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67(L_17, LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
				goto IL_007f_1;
			}

IL_0070_1:
			{
				// participant.outMidiBuffer.AddLast(0x00); // zero timestamp
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_18 = ___participant0;
				NullCheck(L_18);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_19 = L_18->___outMidiBuffer_23;
				NullCheck(L_19);
				LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_20;
				L_20 = LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11(L_19, (uint8_t)0, LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
			}

IL_007f_1:
			{
			}

IL_0080_1:
			{
				goto IL_008f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		// var dataPortConnected = dataPort.Client.Connected;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_21 = __this->___dataPort_6;
		NullCheck(L_21);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_22;
		L_22 = UdpClient_get_Client_m7338E337D9A97F9050FCAD3A29760AB5CA7AFD9A_inline(L_21, NULL);
		NullCheck(L_22);
		bool L_23;
		L_23 = Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline(L_22, NULL);
		V_0 = L_23;
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_24 = __this->___participants_9;
		V_7 = L_24;
		V_8 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cd:
			{// begin finally (depth: 1)
				{
					bool L_25 = V_8;
					if (!L_25)
					{
						goto IL_00d9;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_26 = V_7;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_26, NULL);
				}

IL_00d9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_27 = V_7;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_27, (&V_8), NULL);
				// return dataPortConnected && participants.Count > 0;
				bool L_28 = V_0;
				if (!L_28)
				{
					goto IL_00c9_1;
				}
			}
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_29 = __this->___participants_9;
				NullCheck(L_29);
				int32_t L_30;
				L_30 = HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_inline(L_29, HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_RuntimeMethod_var);
				G_B16_0 = ((((int32_t)L_30) > ((int32_t)0))? 1 : 0);
				goto IL_00ca_1;
			}

IL_00c9_1:
			{
				G_B16_0 = 0;
			}

IL_00ca_1:
			{
				V_2 = (bool)G_B16_0;
				goto IL_00da;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00da:
	{
		// }
		bool L_31 = V_2;
		return L_31;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::EndTransmission(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_EndTransmission_mACD6BB6A2D23510484F6EB3153DD86FF4B82F0D2 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::Available(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiSession_Available_m87E775EAB23A0890ABEB7796FA20641EBC85D2C8 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	{
		// lock (participant.outMidiBuffer)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_0 = ___participant0;
		NullCheck(L_0);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_1 = L_0->___outMidiBuffer_23;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if (participant.outMidiBuffer.Count > 0)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_5 = ___participant0;
				NullCheck(L_5);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_6 = L_5->___outMidiBuffer_23;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_6, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0030_1;
				}
			}
			{
				// WriteRtpMidi(participant);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_9 = ___participant0;
				RtpMidiSession_WriteRtpMidi_m468A4CB83DE0470464BB79362C21CA8D18EB67D3(__this, L_9, NULL);
			}

IL_0030_1:
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// lock (participant.inMidiBuffer)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_10 = ___participant0;
		NullCheck(L_10);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_11 = L_10->___inMidiBuffer_22;
		V_3 = L_11;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					bool L_12 = V_4;
					if (!L_12)
					{
						goto IL_0084;
					}
				}
				{
					LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_13 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_13, NULL);
				}

IL_0084:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_14 = V_3;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_14, (&V_4), NULL);
				// if (participant.inMidiBuffer.Count > 0)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_15 = ___participant0;
				NullCheck(L_15);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_16 = L_15->___inMidiBuffer_22;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_16, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
				bool L_18 = V_5;
				if (!L_18)
				{
					goto IL_0076_1;
				}
			}
			{
				// return participant.inMidiBuffer.Count;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_19 = ___participant0;
				NullCheck(L_19);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_20 = L_19->___inMidiBuffer_22;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_20, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
				V_6 = L_21;
				goto IL_00ce;
			}

IL_0076_1:
			{
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		// lock (participant.dataBuffer)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_22 = ___participant0;
		NullCheck(L_22);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_23 = L_22->___dataBuffer_24;
		V_7 = L_23;
		V_8 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bc:
			{// begin finally (depth: 1)
				{
					bool L_24 = V_8;
					if (!L_24)
					{
						goto IL_00c8;
					}
				}
				{
					LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_25 = V_7;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_25, NULL);
				}

IL_00c8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_26 = V_7;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_26, (&V_8), NULL);
				// if (participant.dataBuffer.Count > 0)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_27 = ___participant0;
				NullCheck(L_27);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_28 = L_27->___dataBuffer_24;
				NullCheck(L_28);
				int32_t L_29;
				L_29 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_28, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
				V_9 = (bool)((((int32_t)L_29) > ((int32_t)0))? 1 : 0);
				bool L_30 = V_9;
				if (!L_30)
				{
					goto IL_00b9_1;
				}
			}
			{
				// ParseDataPackets(participant);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_31 = ___participant0;
				RtpMidiSession_ParseDataPackets_mD145D1C78EB2B83C13D2ACFF1145D73569DD5D40(__this, L_31, NULL);
			}

IL_00b9_1:
			{
				goto IL_00c9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		// return 0;
		V_6 = 0;
		goto IL_00ce;
	}

IL_00ce:
	{
		// }
		int32_t L_32 = V_6;
		return L_32;
	}
}
// System.Byte jp.kshoji.rtpmidi.RtpMidiSession::Read(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RtpMidiSession_Read_mD146F0D6AB1A0AA91E0E3B32687B722CAA33FA32 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	uint8_t V_5 = 0x0;
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B3_0 = NULL;
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B2_0 = NULL;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// lock (participant.inMidiBuffer)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_0 = ___participant0;
		NullCheck(L_0);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_1 = L_0->___inMidiBuffer_22;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0070;
					}
				}
				{
					LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0070:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// var result = participant.inMidiBuffer.First?.Value;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_5 = ___participant0;
				NullCheck(L_5);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_6 = L_5->___inMidiBuffer_22;
				NullCheck(L_6);
				LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_7;
				L_7 = LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_inline(L_6, LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var);
				LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_8 = L_7;
				G_B2_0 = L_8;
				if (L_8)
				{
					G_B3_0 = L_8;
					goto IL_002e_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505));
				Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_9 = V_3;
				G_B4_0 = L_9;
				goto IL_0038_1;
			}

IL_002e_1:
			{
				NullCheck(G_B3_0);
				uint8_t L_10;
				L_10 = LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_inline(G_B3_0, LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var);
				Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_11;
				memset((&L_11), 0, sizeof(L_11));
				Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
				G_B4_0 = L_11;
			}

IL_0038_1:
			{
				V_2 = G_B4_0;
				// if (!result.HasValue)
				bool L_12;
				L_12 = Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline((&V_2), Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
				V_4 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
				bool L_13 = V_4;
				if (!L_13)
				{
					goto IL_004f_1;
				}
			}
			{
				// return 0;
				V_5 = (uint8_t)0;
				goto IL_0071;
			}

IL_004f_1:
			{
				// participant.inMidiBuffer.RemoveFirst();
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_14 = ___participant0;
				NullCheck(L_14);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_15 = L_14->___inMidiBuffer_22;
				NullCheck(L_15);
				LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_15, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
				// return result.Value;
				uint8_t L_16;
				L_16 = Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299((&V_2), Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_RuntimeMethod_var);
				V_5 = L_16;
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// }
		uint8_t L_17 = V_5;
		return L_17;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReadDataPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReadDataPackets_m68C80889F7EFDFE3FE67673C8F182D64D6F1943D (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_5 = NULL;
	bool V_6 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	bool V_10 = false;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// if (dataPort == null)
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_0 = __this->___dataPort_6;
		V_1 = (bool)((((RuntimeObject*)(UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_00e1;
	}

IL_0014:
	{
		// var packetSize = dataPort.Available;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_2 = __this->___dataPort_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UdpClient_get_Available_mBDBB7CEAFFC57F6E35D56B90C2C5458C318925E6(L_2, NULL);
		V_0 = L_3;
		goto IL_00d4;
	}

IL_0025:
	{
		// IPEndPoint receivedEndpoint = null;
		V_2 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)NULL;
		// var received = dataPort.Receive(ref receivedEndpoint);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_4 = __this->___dataPort_6;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = UdpClient_Receive_mC682A8DE6CD86CEFA3CE52852574FD3437EC7DA9(L_4, (&V_2), NULL);
		V_3 = L_5;
		// dataReceivedEndPoint = receivedEndpoint;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = V_2;
		__this->___dataReceivedEndPoint_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataReceivedEndPoint_7), (void*)L_6);
		// packetSize -= received.Length;
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_3;
		NullCheck(L_8);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// foreach (var participant in participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_9 = __this->___participants_9;
		NullCheck(L_9);
		Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_10;
		L_10 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_9, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		V_4 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_4), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b9_1;
			}

IL_0053_1:
			{
				// foreach (var participant in participants)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_11;
				L_11 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_4), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
				V_5 = L_11;
				// if (participant.dataBuffer.Count > RtpMidiParticipant.MaxBufferSize)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_12 = V_5;
				NullCheck(L_12);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_13 = L_12->___dataBuffer_24;
				NullCheck(L_13);
				int32_t L_14;
				L_14 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_13, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
				V_6 = (bool)((((int32_t)L_14) > ((int32_t)((int32_t)64)))? 1 : 0);
				bool L_15 = V_6;
				if (!L_15)
				{
					goto IL_0089_1;
				}
			}
			{
				// exceptionListener?.OnError(RtpMidiExceptionKind.BufferFullException);
				RuntimeObject* L_16 = __this->___exceptionListener_21;
				RuntimeObject* L_17 = L_16;
				G_B7_0 = L_17;
				if (L_17)
				{
					G_B8_0 = L_17;
					goto IL_0080_1;
				}
			}
			{
				goto IL_0087_1;
			}

IL_0080_1:
			{
				NullCheck(G_B8_0);
				InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B8_0, 0);
			}

IL_0087_1:
			{
				// continue;
				goto IL_00b9_1;
			}

IL_0089_1:
			{
				// foreach (var b in received)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
				V_7 = L_18;
				V_8 = 0;
				goto IL_00b0_1;
			}

IL_0092_1:
			{
				// foreach (var b in received)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_7;
				int32_t L_20 = V_8;
				NullCheck(L_19);
				int32_t L_21 = L_20;
				uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
				V_9 = L_22;
				// participant.dataBuffer.AddLast(b);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_23 = V_5;
				NullCheck(L_23);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_24 = L_23->___dataBuffer_24;
				uint8_t L_25 = V_9;
				NullCheck(L_24);
				LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_26;
				L_26 = LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11(L_24, L_25, LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
				int32_t L_27 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_00b0_1:
			{
				// foreach (var b in received)
				int32_t L_28 = V_8;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_7;
				NullCheck(L_29);
				if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
				{
					goto IL_0092_1;
				}
			}
			{
			}

IL_00b9_1:
			{
				// foreach (var participant in participants)
				bool L_30;
				L_30 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_4), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00d3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
	}

IL_00d4:
	{
		// while (packetSize > 0)
		int32_t L_31 = V_0;
		V_10 = (bool)((((int32_t)L_31) > ((int32_t)0))? 1 : 0);
		bool L_32 = V_10;
		if (L_32)
		{
			goto IL_0025;
		}
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ParseDataPackets(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ParseDataPackets_mD145D1C78EB2B83C13D2ACFF1145D73569DD5D40 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	{
		goto IL_0080;
	}

IL_0003:
	{
		// var retVal1 = participant.rtpMidiParser.Parse(participant, participant.dataBuffer);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_0 = ___participant0;
		NullCheck(L_0);
		RtpMidiParser_t85169243CB7F220FF822065A632372A54D8ABC81* L_1 = L_0->___rtpMidiParser_25;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2 = ___participant0;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_3 = ___participant0;
		NullCheck(L_3);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_4 = L_3->___dataBuffer_24;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = RtpMidiParser_Parse_m5248207E239A2F809A5773AEF55ADA983FCE20D8(L_1, L_2, L_4, NULL);
		V_0 = L_5;
		// if (retVal1 == ParserResult.Processed || retVal1 == ParserResult.NotEnoughData)
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)2))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 1;
	}

IL_0021:
	{
		V_2 = (bool)G_B4_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		// break;
		goto IL_0097;
	}

IL_0028:
	{
		// var retVal2 = appleMidiParser.Parse(participant.dataBuffer, PortType.Data);
		AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA* L_9 = __this->___appleMidiParser_12;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_10 = ___participant0;
		NullCheck(L_10);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_11 = L_10->___dataBuffer_24;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = AppleMidiParser_Parse_mCBF399592EF78A9914D10558553CEC043070E5EF(L_9, L_11, 1, NULL);
		V_1 = L_12;
		// if (retVal2 == ParserResult.Processed || retVal2 == ParserResult.NotEnoughData)
		int32_t L_13 = V_1;
		if (!L_13)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = V_1;
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B9_0 = 1;
	}

IL_0045:
	{
		V_3 = (bool)G_B9_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_004c;
		}
	}
	{
		// break;
		goto IL_0097;
	}

IL_004c:
	{
		// if (retVal1 == ParserResult.NotSureGiveMeMoreData || retVal2 == ParserResult.NotSureGiveMeMoreData)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_17 = V_1;
		G_B14_0 = ((((int32_t)L_17) == ((int32_t)1))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B14_0 = 1;
	}

IL_0057:
	{
		V_4 = (bool)G_B14_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		// break;
		goto IL_0097;
	}

IL_0060:
	{
		// participant.dataBuffer.RemoveFirst();
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_19 = ___participant0;
		NullCheck(L_19);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_20 = L_19->___dataBuffer_24;
		NullCheck(L_20);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_20, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// exceptionListener?.OnError(RtpMidiExceptionKind.UnexpectedParseException);
		RuntimeObject* L_21 = __this->___exceptionListener_21;
		RuntimeObject* L_22 = L_21;
		G_B17_0 = L_22;
		if (L_22)
		{
			G_B18_0 = L_22;
			goto IL_0078;
		}
	}
	{
		goto IL_007f;
	}

IL_0078:
	{
		NullCheck(G_B18_0);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B18_0, 2);
	}

IL_007f:
	{
	}

IL_0080:
	{
		// while (participant.dataBuffer.Count > 0)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_23 = ___participant0;
		NullCheck(L_23);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_24 = L_23->___dataBuffer_24;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_24, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_0003;
		}
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Int32 jp.kshoji.rtpmidi.RtpMidiSession::ReadControlPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RtpMidiSession_ReadControlPackets_mA47E6A6C787ED032324BA8A38AE2D62FC4332A5D (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	int32_t G_B10_0 = 0;
	{
		// if (controlPort == null)
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_0 = __this->___controlPort_4;
		V_1 = (bool)((((RuntimeObject*)(UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return 0;
		V_2 = 0;
		goto IL_009e;
	}

IL_0016:
	{
		// var packetSize = controlPort.Available;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_2 = __this->___controlPort_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UdpClient_get_Available_mBDBB7CEAFFC57F6E35D56B90C2C5458C318925E6(L_2, NULL);
		V_0 = L_3;
		goto IL_0074;
	}

IL_0024:
	{
		// IPEndPoint receivedEndpoint = null;
		V_3 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)NULL;
		// var received = controlPort.Receive(ref receivedEndpoint);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_4 = __this->___controlPort_4;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = UdpClient_Receive_mC682A8DE6CD86CEFA3CE52852574FD3437EC7DA9(L_4, (&V_3), NULL);
		V_4 = L_5;
		// controlReceivedEndPoint = receivedEndpoint;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = V_3;
		__this->___controlReceivedEndPoint_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlReceivedEndPoint_5), (void*)L_6);
		// packetSize -= received.Length;
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_4;
		NullCheck(L_8);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// foreach (var b in received)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_4;
		V_5 = L_9;
		V_6 = 0;
		goto IL_006b;
	}

IL_004e:
	{
		// foreach (var b in received)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_5;
		int32_t L_11 = V_6;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_7 = L_13;
		// controlBuffer.AddLast(b);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_14 = __this->___controlBuffer_11;
		uint8_t L_15 = V_7;
		NullCheck(L_14);
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_16;
		L_16 = LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11(L_14, L_15, LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
		int32_t L_17 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_006b:
	{
		// foreach (var b in received)
		int32_t L_18 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
	}

IL_0074:
	{
		// while (packetSize > 0 && controlBuffer.Count < RtpMidiParticipant.MaxBufferSize)
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_21 = __this->___controlBuffer_11;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_21, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		G_B10_0 = ((((int32_t)L_22) < ((int32_t)((int32_t)64)))? 1 : 0);
		goto IL_008a;
	}

IL_0089:
	{
		G_B10_0 = 0;
	}

IL_008a:
	{
		V_8 = (bool)G_B10_0;
		bool L_23 = V_8;
		if (L_23)
		{
			goto IL_0024;
		}
	}
	{
		// return controlBuffer.Count;
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_24 = __this->___controlBuffer_11;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_24, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		V_2 = L_25;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		int32_t L_26 = V_2;
		return L_26;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ParseControlPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ParseControlPackets_m8C9367D90111CFE0915D2767D4495F48A45BA00B (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	{
		goto IL_006e;
	}

IL_0003:
	{
		// var retVal = appleMidiParser.Parse(controlBuffer, PortType.Control);
		AppleMidiParser_tE5DD85FA871050010C9B09CC4F718BECD6EE80DA* L_0 = __this->___appleMidiParser_12;
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_1 = __this->___controlBuffer_11;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AppleMidiParser_Parse_mCBF399592EF78A9914D10558553CEC043070E5EF(L_0, L_1, 0, NULL);
		V_0 = L_2;
		// if (retVal == ParserResult.Processed || retVal == ParserResult.NotEnoughData || retVal == ParserResult.NotSureGiveMeMoreData)
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// break;
		goto IL_0082;
	}

IL_002c:
	{
		// if (retVal == ParserResult.UnexpectedData)
		int32_t L_7 = V_0;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)3))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// controlBuffer.RemoveFirst();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_9 = __this->___controlBuffer_11;
		NullCheck(L_9);
		LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F(L_9, LinkedList_1_RemoveFirst_m9B6456CD5AC8AEEF682B872F1D49EE69DD55913F_RuntimeMethod_var);
		// exceptionListener?.OnError(RtpMidiExceptionKind.ParseException);
		RuntimeObject* L_10 = __this->___exceptionListener_21;
		RuntimeObject* L_11 = L_10;
		G_B9_0 = L_11;
		if (L_11)
		{
			G_B10_0 = L_11;
			goto IL_004d;
		}
	}
	{
		goto IL_0054;
	}

IL_004d:
	{
		NullCheck(G_B10_0);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B10_0, 1);
	}

IL_0054:
	{
		goto IL_006d;
	}

IL_0057:
	{
		// else if (retVal == ParserResult.SessionNameVeryLong)
		int32_t L_12 = V_0;
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)6))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		// controlBuffer.Clear();
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_14 = __this->___controlBuffer_11;
		NullCheck(L_14);
		LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67(L_14, LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
	}

IL_006d:
	{
	}

IL_006e:
	{
		// while (controlBuffer.Count > 0)
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_15 = __this->___controlBuffer_11;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_15, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0003;
		}
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedInvitation(jp.kshoji.rtpmidi.RtpMidiInvitation,jp.kshoji.rtpmidi.PortType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedInvitation_m6BBDF81180387EDE2B68A603D6B4F96C7E308FAB (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 ___invitation0, int32_t ___portType1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (portType == PortType.Control)
		int32_t L_0 = ___portType1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ReceivedControlInvitation(invitation);
		RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_2 = ___invitation0;
		RtpMidiSession_ReceivedControlInvitation_m27CF5525C6D42C2EF3C51DE8A6C59844EA6AF086(__this, L_2, NULL);
		goto IL_001f;
	}

IL_0015:
	{
		// ReceivedDataInvitation(invitation);
		RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_3 = ___invitation0;
		RtpMidiSession_ReceivedDataInvitation_m40FE0CC6A950AD05F82B16549AE319088C249E23(__this, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedControlInvitation(jp.kshoji.rtpmidi.RtpMidiInvitation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedControlInvitation_m27CF5525C6D42C2EF3C51DE8A6C59844EA6AF086 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 ___invitation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_2 = NULL;
	bool V_3 = false;
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_4 = NULL;
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// if (GetParticipantBySsrc(invitation.Ssrc) != null)
		int32_t L_0;
		L_0 = RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline((&___invitation0), NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1;
		L_1 = RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5(__this, L_0, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_0121;
	}

IL_001b:
	{
		// if (controlReceivedEndPoint == null)
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_3 = __this->___controlReceivedEndPoint_5;
		V_1 = (bool)((((RuntimeObject*)(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// return;
		goto IL_0121;
	}

IL_002e:
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_5 = __this->___participants_9;
		V_2 = L_5;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0116:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_3;
					if (!L_6)
					{
						goto IL_0120;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_7 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
				}

IL_0120:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_8 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, (&V_3), NULL);
				// if (participants.Count >= MaxParticipants)
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_9 = __this->___participants_9;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_inline(L_9, HashSet_1_get_Count_m59CF078C736A68A81D9A3B55CD1FE7521A72EAC5_RuntimeMethod_var);
				V_6 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)((int32_t)64)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_11 = V_6;
				if (!L_11)
				{
					goto IL_0087_1;
				}
			}
			{
				// WriteInvitation(controlPort, controlReceivedEndPoint, invitation, RtpMidiConstants.InvitationRejected);
				UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_12 = __this->___controlPort_4;
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_13 = __this->___controlReceivedEndPoint_5;
				RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_14 = ___invitation0;
				il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationRejected_6;
				RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2(__this, L_12, L_13, L_14, L_15, NULL);
				// exceptionListener?.OnError(RtpMidiExceptionKind.TooManyParticipantsException);
				RuntimeObject* L_16 = __this->___exceptionListener_21;
				RuntimeObject* L_17 = L_16;
				G_B7_0 = L_17;
				if (L_17)
				{
					G_B8_0 = L_17;
					goto IL_007f_1;
				}
			}
			{
				goto IL_0086_1;
			}

IL_007f_1:
			{
				NullCheck(G_B8_0);
				InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B8_0, 3);
			}

IL_0086_1:
			{
			}

IL_0087_1:
			{
				// var participant = new RtpMidiParticipant(this, controlReceivedEndPoint)
				// {
				//     kind = ParticipantKind.Listener,
				//     ssrc = invitation.Ssrc,
				//     lastSyncExchangeTime = RtpMidiClock.Ticks(),
				//     sessionName = invitation.SessionName,
				// };
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_18 = __this->___controlReceivedEndPoint_5;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_19 = (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)il2cpp_codegen_object_new(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC_il2cpp_TypeInfo_var);
				NullCheck(L_19);
				RtpMidiParticipant__ctor_mF9057DE20163285A4D5484F4CB8D106D24054D2F(L_19, __this, L_18, NULL);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_20 = L_19;
				NullCheck(L_20);
				L_20->___kind_1 = 0;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_21 = L_20;
				int32_t L_22;
				L_22 = RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline((&___invitation0), NULL);
				NullCheck(L_21);
				L_21->___ssrc_2 = L_22;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_23 = L_21;
				il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
				int64_t L_24;
				L_24 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
				NullCheck(L_23);
				L_23->___lastSyncExchangeTime_10 = L_24;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_25 = L_23;
				String_t* L_26;
				L_26 = RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46_inline((&___invitation0), NULL);
				NullCheck(L_25);
				L_25->___sessionName_11 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&L_25->___sessionName_11), (void*)L_26);
				V_4 = L_25;
				// var invitationAccepted = new RtpMidiInvitation
				// {
				//     SessionName = localName,
				//     InitiatorToken = invitation.InitiatorToken,
				// };
				il2cpp_codegen_initobj((&V_7), sizeof(RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925));
				String_t* L_27 = __this->___localName_18;
				RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_inline((&V_7), L_27, NULL);
				int32_t L_28;
				L_28 = RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_inline((&___invitation0), NULL);
				RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_inline((&V_7), L_28, NULL);
				RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_29 = V_7;
				V_5 = L_29;
				// participants.Add(participant);
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_30 = __this->___participants_9;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_31 = V_4;
				NullCheck(L_30);
				bool L_32;
				L_32 = HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB(L_30, L_31, HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var);
				// WriteInvitation(controlPort, participant.ControlEndPoint, invitationAccepted, RtpMidiConstants.InvitationAccepted);
				UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_33 = __this->___controlPort_4;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_34 = V_4;
				NullCheck(L_34);
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_35 = L_34->___ControlEndPoint_3;
				RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_36 = V_5;
				il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationAccepted_5;
				RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2(__this, L_33, L_35, L_36, L_37, NULL);
				goto IL_0121;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0121:
	{
		// }
		return;
	}
}
// jp.kshoji.rtpmidi.RtpMidiParticipant jp.kshoji.rtpmidi.RtpMidiSession::GetParticipantBySsrc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, int32_t ___ssrc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_0 = NULL;
	bool V_1 = false;
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_3 = NULL;
	bool V_4 = false;
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_5 = NULL;
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_0 = __this->___participants_9;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0069;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// foreach (var participant in participants)
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_4 = __this->___participants_9;
				NullCheck(L_4);
				Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_5;
				L_5 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_4, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_004d_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_2), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0042_2;
					}

IL_0023_2:
					{
						// foreach (var participant in participants)
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6;
						L_6 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_2), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
						V_3 = L_6;
						// if (participant.ssrc == ssrc)
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_7 = V_3;
						NullCheck(L_7);
						int32_t L_8 = L_7->___ssrc_2;
						int32_t L_9 = ___ssrc0;
						V_4 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
						bool L_10 = V_4;
						if (!L_10)
						{
							goto IL_0041_2;
						}
					}
					{
						// return participant;
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_11 = V_3;
						V_5 = L_11;
						goto IL_006f;
					}

IL_0041_2:
					{
					}

IL_0042_2:
					{
						// foreach (var participant in participants)
						bool L_12;
						L_12 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_2), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
						if (L_12)
						{
							goto IL_0023_2;
						}
					}
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// return null;
		V_5 = (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)NULL;
		goto IL_006f;
	}

IL_006f:
	{
		// }
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_13 = V_5;
		return L_13;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedDataInvitation(jp.kshoji.rtpmidi.RtpMidiInvitation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedDataInvitation_m40FE0CC6A950AD05F82B16549AE319088C249E23 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 ___invitation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// var participant = GetParticipantBySsrc(invitation.Ssrc);
		int32_t L_0;
		L_0 = RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline((&___invitation0), NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1;
		L_1 = RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5(__this, L_0, NULL);
		V_0 = L_1;
		// if (participant == null)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2 = V_0;
		V_2 = (bool)((((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// if (dataReceivedEndPoint != null)
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_4 = __this->___dataReceivedEndPoint_7;
		V_3 = (bool)((!(((RuntimeObject*)(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// WriteInvitation(dataPort, dataReceivedEndPoint, invitation, RtpMidiConstants.InvitationRejected);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_6 = __this->___dataPort_6;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_7 = __this->___dataReceivedEndPoint_7;
		RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_8 = ___invitation0;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationRejected_6;
		RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2(__this, L_6, L_7, L_8, L_9, NULL);
	}

IL_0040:
	{
		// exceptionListener?.OnError(RtpMidiExceptionKind.ParticipantNotFoundException);
		RuntimeObject* L_10 = __this->___exceptionListener_21;
		RuntimeObject* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_004c;
		}
	}
	{
		goto IL_0053;
	}

IL_004c:
	{
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B5_0, 4);
	}

IL_0053:
	{
		// return;
		goto IL_00b0;
	}

IL_0055:
	{
		// var invitationAccepted = new RtpMidiInvitation
		// {
		//     SessionName = localName,
		//     InitiatorToken = invitation.InitiatorToken,
		// };
		il2cpp_codegen_initobj((&V_4), sizeof(RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925));
		String_t* L_12 = __this->___localName_18;
		RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_inline((&V_4), L_12, NULL);
		int32_t L_13;
		L_13 = RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_inline((&___invitation0), NULL);
		RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_inline((&V_4), L_13, NULL);
		RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_14 = V_4;
		V_1 = L_14;
		// WriteInvitation(dataPort, participant.DataEndPoint, invitationAccepted, RtpMidiConstants.InvitationAccepted);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_15 = __this->___dataPort_6;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_16 = V_0;
		NullCheck(L_16);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_17 = L_16->___DataEndPoint_4;
		RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___InvitationAccepted_5;
		RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2(__this, L_15, L_17, L_18, L_19, NULL);
		// deviceConnectionListener.OnRtpMidiDeviceAttached(GetDeviceId(participant));
		RuntimeObject* L_20 = __this->___deviceConnectionListener_20;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_21 = V_0;
		String_t* L_22;
		L_22 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_21, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener::OnRtpMidiDeviceAttached(System.String) */, IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var, L_20, L_22);
		// participant.kind = ParticipantKind.Listener;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_23 = V_0;
		NullCheck(L_23);
		L_23->___kind_1 = 0;
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::Write(jp.kshoji.rtpmidi.RtpMidiParticipant,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_Write_mCB83C01AEF62AFF70B4E233ACC888CD5D80BE116 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, uint8_t ___datum1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_7;
	memset((&V_7), 0, sizeof(V_7));
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	int32_t G_B5_1 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	int32_t G_B8_1 = 0;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// lock (participant.outMidiBuffer)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_0 = ___participant0;
		NullCheck(L_0);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_1 = L_0->___outMidiBuffer_23;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f1:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_00fb;
					}
				}
				{
					LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_00fb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if ((participant.outMidiBuffer.Count) + 2 > RtpMidiParticipant.MaxBufferSize)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_5 = ___participant0;
				NullCheck(L_5);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_6 = L_5->___outMidiBuffer_23;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_6, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_7, 2))) > ((int32_t)((int32_t)64)))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_00e1_1;
				}
			}
			{
				// if ((byte)MidiType.SystemExclusive == participant.outMidiBuffer.First?.Value)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_9 = ___participant0;
				NullCheck(L_9);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_10 = L_9->___outMidiBuffer_23;
				NullCheck(L_10);
				LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_11;
				L_11 = LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_inline(L_10, LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_RuntimeMethod_var);
				LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_12 = L_11;
				G_B3_0 = L_12;
				G_B3_1 = ((int32_t)240);
				if (L_12)
				{
					G_B4_0 = L_12;
					G_B4_1 = ((int32_t)240);
					goto IL_004d_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505));
				Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_13 = V_6;
				G_B5_0 = L_13;
				G_B5_1 = G_B3_1;
				goto IL_0057_1;
			}

IL_004d_1:
			{
				NullCheck(G_B4_0);
				uint8_t L_14;
				L_14 = LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_inline(G_B4_0, LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_RuntimeMethod_var);
				Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_15;
				memset((&L_15), 0, sizeof(L_15));
				Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_mE8C7661325A107A7849C9933388054D78F10889C_RuntimeMethod_var);
				G_B5_0 = L_15;
				G_B5_1 = G_B4_1;
			}

IL_0057_1:
			{
				V_5 = G_B5_0;
				bool L_16;
				L_16 = Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline((&V_5), Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
				G_B6_0 = G_B5_1;
				if (L_16)
				{
					G_B7_0 = G_B5_1;
					goto IL_006e_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_17 = V_7;
				G_B8_0 = L_17;
				G_B8_1 = G_B6_0;
				goto IL_007a_1;
			}

IL_006e_1:
			{
				uint8_t L_18;
				L_18 = Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_inline((&V_5), Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_RuntimeMethod_var);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_19;
				memset((&L_19), 0, sizeof(L_19));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_19), L_18, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B8_0 = L_19;
				G_B8_1 = G_B7_0;
			}

IL_007a_1:
			{
				V_4 = G_B8_0;
				int32_t L_20;
				L_20 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_4), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				bool L_21;
				L_21 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_3 = (bool)((int32_t)(((((int32_t)G_B8_1) == ((int32_t)L_20))? 1 : 0)&(int32_t)L_21));
				bool L_22 = V_3;
				if (!L_22)
				{
					goto IL_00cb_1;
				}
			}
			{
				// participant.outMidiBuffer.AddLast((byte)MidiType.SystemExclusiveStart);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_23 = ___participant0;
				NullCheck(L_23);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_24 = L_23->___outMidiBuffer_23;
				NullCheck(L_24);
				LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_25;
				L_25 = LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11(L_24, (uint8_t)((int32_t)240), LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
				// WriteRtpMidi(participant);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_26 = ___participant0;
				RtpMidiSession_WriteRtpMidi_m468A4CB83DE0470464BB79362C21CA8D18EB67D3(__this, L_26, NULL);
				// participant.outMidiBuffer.Clear();
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_27 = ___participant0;
				NullCheck(L_27);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_28 = L_27->___outMidiBuffer_23;
				NullCheck(L_28);
				LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67(L_28, LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
				// participant.outMidiBuffer.AddLast((byte)MidiType.SystemExclusiveEnd);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_29 = ___participant0;
				NullCheck(L_29);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_30 = L_29->___outMidiBuffer_23;
				NullCheck(L_30);
				LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_31;
				L_31 = LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11(L_30, (uint8_t)((int32_t)247), LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
				goto IL_00e0_1;
			}

IL_00cb_1:
			{
				// exceptionListener?.OnError(RtpMidiExceptionKind.BufferFullException);
				RuntimeObject* L_32 = __this->___exceptionListener_21;
				RuntimeObject* L_33 = L_32;
				G_B11_0 = L_33;
				if (L_33)
				{
					G_B12_0 = L_33;
					goto IL_00d8_1;
				}
			}
			{
				goto IL_00df_1;
			}

IL_00d8_1:
			{
				NullCheck(G_B12_0);
				InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B12_0, 0);
			}

IL_00df_1:
			{
			}

IL_00e0_1:
			{
			}

IL_00e1_1:
			{
				// participant.outMidiBuffer.AddLast(datum);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_34 = ___participant0;
				NullCheck(L_34);
				LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_35 = L_34->___outMidiBuffer_23;
				uint8_t L_36 = ___datum1;
				NullCheck(L_35);
				LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_37;
				L_37 = LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11(L_35, L_36, LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
				goto IL_00fc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteInvitation(System.Net.Sockets.UdpClient,System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiInvitation,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* ___udpClient0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint1, RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 ___invitation2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___command3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	{
		// var dataStream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
		// invitation.Ssrc = Ssrc;
		int32_t L_1;
		L_1 = RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92_inline(__this, NULL);
		RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2_inline((&___invitation2), L_1, NULL);
		// dataStream.Write(RtpMidiConstants.Signature, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Signature_0;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, 2);
		// dataStream.Write(command, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___command3;
		NullCheck(L_4);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, 2);
		// dataStream.Write(RtpMidiConstants.ProtocolVersion, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ProtocolVersion_1;
		NullCheck(L_6);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, 4);
		// dataStream.Write(
		//     new[]
		//     {
		//         (byte)((invitation.InitiatorToken >> 24) & 0xff),
		//         (byte)((invitation.InitiatorToken >> 16) & 0xff),
		//         (byte)((invitation.InitiatorToken >> 8) & 0xff),
		//         (byte)(invitation.InitiatorToken & 0xff),
		//         (byte)((invitation.Ssrc >> 24) & 0xff),
		//         (byte)((invitation.Ssrc >> 16) & 0xff),
		//         (byte)((invitation.Ssrc >> 8) & 0xff),
		//         (byte)(invitation.Ssrc & 0xff),
		//     }
		//     , 0, 8);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		int32_t L_11;
		L_11 = RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_inline((&___invitation2), NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_11>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_10;
		int32_t L_13;
		L_13 = RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_inline((&___invitation2), NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_13>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_12;
		int32_t L_15;
		L_15 = RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_inline((&___invitation2), NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_15>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_14;
		int32_t L_17;
		L_17 = RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_inline((&___invitation2), NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_17&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_16;
		int32_t L_19;
		L_19 = RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline((&___invitation2), NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_19>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_18;
		int32_t L_21;
		L_21 = RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline((&___invitation2), NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_21>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = L_20;
		int32_t L_23;
		L_23 = RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline((&___invitation2), NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_23>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = L_22;
		int32_t L_25;
		L_25 = RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline((&___invitation2), NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_25&((int32_t)255)))));
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_24, 0, 8);
		// udpClient?.Send(dataStream.ToArray(), (int)dataStream.Length, endPoint);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_26 = ___udpClient0;
		if (L_26)
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_00fd;
	}

IL_00e8:
	{
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_27 = ___udpClient0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = V_0;
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_28);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_30 = V_0;
		NullCheck(L_30);
		int64_t L_31;
		L_31 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_30);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_32 = ___endPoint1;
		NullCheck(L_27);
		int32_t L_33;
		L_33 = UdpClient_Send_m4DCD3993D7ED39C174F8FC8F653DD30F1BDF47B9(L_27, L_29, ((int32_t)L_31), L_32, NULL);
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteReceiverFeedback(System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiReceiverFeedback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteReceiverFeedback_m5503C97AB226E3DD17CEC685547B16944BD02E21 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint0, RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E ___receiverFeedback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B2_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B1_0 = NULL;
	{
		// var dataStream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
		// dataStream.Write(RtpMidiConstants.Signature, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Signature_0;
		NullCheck(L_1);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, 2);
		// dataStream.Write(RtpMidiConstants.ReceiverFeedback, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ReceiverFeedback_7;
		NullCheck(L_3);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, 2);
		// dataStream.Write(
		//     new[]
		//     {
		//         (byte)((receiverFeedback.Ssrc >> 24) & 0xff),
		//         (byte)((receiverFeedback.Ssrc >> 16) & 0xff),
		//         (byte)((receiverFeedback.Ssrc >> 8) & 0xff),
		//         (byte)(receiverFeedback.Ssrc & 0xff),
		//         (byte)((receiverFeedback.SequenceNr >> 8) & 0xff),
		//         (byte)(receiverFeedback.SequenceNr & 0xff),
		//         (byte)0,
		//         (byte)0,
		//     }
		// ,0, 8);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		int32_t L_8;
		L_8 = RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_inline((&___receiverFeedback1), NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_8>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_7;
		int32_t L_10;
		L_10 = RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_inline((&___receiverFeedback1), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_10>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_9;
		int32_t L_12;
		L_12 = RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_inline((&___receiverFeedback1), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_12>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_11;
		int32_t L_14;
		L_14 = RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_inline((&___receiverFeedback1), NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_14&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_13;
		int16_t L_16;
		L_16 = RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B_inline((&___receiverFeedback1), NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_16>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_15;
		int16_t L_18;
		L_18 = RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B_inline((&___receiverFeedback1), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_18&((int32_t)255)))));
		NullCheck(L_5);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_17, 0, 8);
		// controlPort?.Send(dataStream.ToArray(), (int)dataStream.Length, endPoint);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_19 = __this->___controlPort_4;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_20 = L_19;
		G_B1_0 = L_20;
		if (L_20)
		{
			G_B2_0 = L_20;
			goto IL_00ae;
		}
	}
	{
		goto IL_00c2;
	}

IL_00ae:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = V_0;
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_21);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24;
		L_24 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_23);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_25 = ___endPoint0;
		NullCheck(G_B2_0);
		int32_t L_26;
		L_26 = UdpClient_Send_m4DCD3993D7ED39C174F8FC8F653DD30F1BDF47B9(G_B2_0, L_22, ((int32_t)L_24), L_25, NULL);
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteSynchronization(System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiSynchronization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteSynchronization_m27187F9AFDA0FC771DE29C843D3B3B1B5F5DBFA2 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endPoint0, RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A ___synchronization1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B2_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B1_0 = NULL;
	{
		// var dataStream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
		// synchronization.Ssrc = Ssrc;
		int32_t L_1;
		L_1 = RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92_inline(__this, NULL);
		RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF_inline((&___synchronization1), L_1, NULL);
		// dataStream.Write(RtpMidiConstants.Signature, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Signature_0;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, 2);
		// dataStream.Write(RtpMidiConstants.Synchronization, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Synchronization_4;
		NullCheck(L_4);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, 2);
		// dataStream.Write(
		//     new[]
		//     {
		//         (byte)((synchronization.Ssrc >> 24) & 0xff),
		//         (byte)((synchronization.Ssrc >> 16) & 0xff),
		//         (byte)((synchronization.Ssrc >> 8) & 0xff),
		//         (byte)(synchronization.Ssrc & 0xff),
		//         (byte)(synchronization.Count & 0xff),
		//         (byte)0,
		//         (byte)0,
		//         (byte)0,
		//         (byte)((synchronization.Timestamps[0] >> 56) & 0xff),
		//         (byte)((synchronization.Timestamps[0] >> 48) & 0xff),
		//         (byte)((synchronization.Timestamps[0] >> 40) & 0xff),
		//         (byte)((synchronization.Timestamps[0] >> 32) & 0xff),
		//         (byte)((synchronization.Timestamps[0] >> 24) & 0xff),
		//         (byte)((synchronization.Timestamps[0] >> 16) & 0xff),
		//         (byte)((synchronization.Timestamps[0] >> 8) & 0xff),
		//         (byte)(synchronization.Timestamps[0] & 0xff),
		//         (byte)((synchronization.Timestamps[1] >> 56) & 0xff),
		//         (byte)((synchronization.Timestamps[1] >> 48) & 0xff),
		//         (byte)((synchronization.Timestamps[1] >> 40) & 0xff),
		//         (byte)((synchronization.Timestamps[1] >> 32) & 0xff),
		//         (byte)((synchronization.Timestamps[1] >> 24) & 0xff),
		//         (byte)((synchronization.Timestamps[1] >> 16) & 0xff),
		//         (byte)((synchronization.Timestamps[1] >> 8) & 0xff),
		//         (byte)(synchronization.Timestamps[1] & 0xff),
		//         (byte)((synchronization.Timestamps[2] >> 56) & 0xff),
		//         (byte)((synchronization.Timestamps[2] >> 48) & 0xff),
		//         (byte)((synchronization.Timestamps[2] >> 40) & 0xff),
		//         (byte)((synchronization.Timestamps[2] >> 32) & 0xff),
		//         (byte)((synchronization.Timestamps[2] >> 24) & 0xff),
		//         (byte)((synchronization.Timestamps[2] >> 16) & 0xff),
		//         (byte)((synchronization.Timestamps[2] >> 8) & 0xff),
		//         (byte)(synchronization.Timestamps[2] & 0xff),
		//     }
		// ,0, 32);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
		int32_t L_9;
		L_9 = RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_inline((&___synchronization1), NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_9>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_8;
		int32_t L_11;
		L_11 = RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_inline((&___synchronization1), NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_11>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_10;
		int32_t L_13;
		L_13 = RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_inline((&___synchronization1), NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_13>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_12;
		int32_t L_15;
		L_15 = RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_inline((&___synchronization1), NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_15&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_14;
		uint8_t L_17;
		L_17 = RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D_inline((&___synchronization1), NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_17&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_16;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_19;
		L_19 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_19);
		int32_t L_20 = 0;
		int64_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_21>>((int32_t)56)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = L_18;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_23;
		L_23 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_23);
		int32_t L_24 = 0;
		int64_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_25>>((int32_t)48)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = L_22;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27;
		L_27 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_27);
		int32_t L_28 = 0;
		int64_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_29>>((int32_t)40)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = L_26;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_31;
		L_31 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_31);
		int32_t L_32 = 0;
		int64_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_33>>((int32_t)32)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_30;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_35;
		L_35 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_35);
		int32_t L_36 = 0;
		int64_t L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_37>>((int32_t)24)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = L_34;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_39;
		L_39 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_39);
		int32_t L_40 = 0;
		int64_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_41>>((int32_t)16)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = L_38;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_43;
		L_43 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_43);
		int32_t L_44 = 0;
		int64_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_45>>8))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = L_42;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_47;
		L_47 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_47);
		int32_t L_48 = 0;
		int64_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_49&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = L_46;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51;
		L_51 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_51);
		int32_t L_52 = 1;
		int64_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_53>>((int32_t)56)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = L_50;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_55;
		L_55 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_55);
		int32_t L_56 = 1;
		int64_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_57>>((int32_t)48)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = L_54;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_59;
		L_59 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_59);
		int32_t L_60 = 1;
		int64_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_61>>((int32_t)40)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = L_58;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_63;
		L_63 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_63);
		int32_t L_64 = 1;
		int64_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_65>>((int32_t)32)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = L_62;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_67;
		L_67 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_67);
		int32_t L_68 = 1;
		int64_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_69>>((int32_t)24)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = L_66;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_71;
		L_71 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_71);
		int32_t L_72 = 1;
		int64_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_73>>((int32_t)16)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = L_70;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_75;
		L_75 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_75);
		int32_t L_76 = 1;
		int64_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_77>>8))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = L_74;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_79;
		L_79 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_79);
		int32_t L_80 = 1;
		int64_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_81&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = L_78;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_83;
		L_83 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_83);
		int32_t L_84 = 2;
		int64_t L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_85>>((int32_t)56)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = L_82;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_87;
		L_87 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_87);
		int32_t L_88 = 2;
		int64_t L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_89>>((int32_t)48)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = L_86;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_91;
		L_91 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_91);
		int32_t L_92 = 2;
		int64_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_93>>((int32_t)40)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = L_90;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_95;
		L_95 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_95);
		int32_t L_96 = 2;
		int64_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_97>>((int32_t)32)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = L_94;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_99;
		L_99 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_99);
		int32_t L_100 = 2;
		int64_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_101>>((int32_t)24)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = L_98;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_103;
		L_103 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_103);
		int32_t L_104 = 2;
		int64_t L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_105>>((int32_t)16)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = L_102;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_107;
		L_107 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_107);
		int32_t L_108 = 2;
		int64_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_109>>8))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = L_106;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_111;
		L_111 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization1), NULL);
		NullCheck(L_111);
		int32_t L_112 = 2;
		int64_t L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_113&((int64_t)((int32_t)255))))));
		NullCheck(L_6);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_110, 0, ((int32_t)32));
		// dataPort?.Send(dataStream.ToArray(), (int)dataStream.Length, endPoint);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_114 = __this->___dataPort_6;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_115 = L_114;
		G_B1_0 = L_115;
		if (L_115)
		{
			G_B2_0 = L_115;
			goto IL_02de;
		}
	}
	{
		goto IL_02f2;
	}

IL_02de:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_116 = V_0;
		NullCheck(L_116);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117;
		L_117 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_116);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_118 = V_0;
		NullCheck(L_118);
		int64_t L_119;
		L_119 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_118);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_120 = ___endPoint0;
		NullCheck(G_B2_0);
		int32_t L_121;
		L_121 = UdpClient_Send_m4DCD3993D7ED39C174F8FC8F653DD30F1BDF47B9(G_B2_0, L_117, ((int32_t)L_119), L_120, NULL);
	}

IL_02f2:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteEndSession(System.Net.IPEndPoint,jp.kshoji.rtpmidi.RtpMidiEndSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteEndSession_m760F965A73F36677C475AE9ECC67655927C52FE0 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___controlEndPoint0, RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9 ___endSession1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B2_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B1_0 = NULL;
	{
		// var dataStream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
		// dataStream.Write(RtpMidiConstants.Signature, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Signature_0;
		NullCheck(L_1);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, 2);
		// dataStream.Write(RtpMidiConstants.EndSession, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___EndSession_3;
		NullCheck(L_3);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, 2);
		// dataStream.Write(RtpMidiConstants.ProtocolVersion, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___ProtocolVersion_1;
		NullCheck(L_5);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, 4);
		// dataStream.Write(
		//     new[]
		//     {
		//         (byte)((endSession.InitiatorToken >> 24) & 0xff),
		//         (byte)((endSession.InitiatorToken >> 16) & 0xff),
		//         (byte)((endSession.InitiatorToken >> 8) & 0xff),
		//         (byte)(endSession.InitiatorToken & 0xff),
		//         (byte)((endSession.Ssrc >> 24) & 0xff),
		//         (byte)((endSession.Ssrc >> 16) & 0xff),
		//         (byte)((endSession.Ssrc >> 8) & 0xff),
		//         (byte)(endSession.Ssrc & 0xff),
		//     }
		// ,0, 8);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		int32_t L_10;
		L_10 = RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_inline((&___endSession1), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_10>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_9;
		int32_t L_12;
		L_12 = RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_inline((&___endSession1), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_12>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_11;
		int32_t L_14;
		L_14 = RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_inline((&___endSession1), NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_14>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_13;
		int32_t L_16;
		L_16 = RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_inline((&___endSession1), NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_16&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_15;
		int32_t L_18;
		L_18 = RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_inline((&___endSession1), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_18>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_17;
		int32_t L_20;
		L_20 = RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_inline((&___endSession1), NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_20>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_19;
		int32_t L_22;
		L_22 = RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_inline((&___endSession1), NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_22>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_21;
		int32_t L_24;
		L_24 = RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_inline((&___endSession1), NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_24&((int32_t)255)))));
		NullCheck(L_7);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_7, L_23, 0, 8);
		// controlPort?.Send(dataStream.ToArray(), (int)dataStream.Length, controlEndPoint);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_25 = __this->___controlPort_4;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_26 = L_25;
		G_B1_0 = L_26;
		if (L_26)
		{
			G_B2_0 = L_26;
			goto IL_00e4;
		}
	}
	{
		goto IL_00f8;
	}

IL_00e4:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_0;
		NullCheck(L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_27);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_29 = V_0;
		NullCheck(L_29);
		int64_t L_30;
		L_30 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_29);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_31 = ___controlEndPoint0;
		NullCheck(G_B2_0);
		int32_t L_32;
		L_32 = UdpClient_Send_m4DCD3993D7ED39C174F8FC8F653DD30F1BDF47B9(G_B2_0, L_28, ((int32_t)L_30), L_31, NULL);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteRtpMidi(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteRtpMidi_m468A4CB83DE0470464BB79362C21CA8D18EB67D3 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (participant.outMidiBuffer)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_0 = ___participant0;
		NullCheck(L_0);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_1 = L_0->___outMidiBuffer_23;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0035;
					}
				}
				{
					LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WriteRtpMidiBuffer(participant);
			RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_5 = ___participant0;
			RtpMidiSession_WriteRtpMidiBuffer_m9BDC07852AE1E47C62AD61A44CB70020988BDBD6(__this, L_5, NULL);
			// participant.outMidiBuffer.Clear();
			RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6 = ___participant0;
			NullCheck(L_6);
			LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_7 = L_6->___outMidiBuffer_23;
			NullCheck(L_7);
			LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67(L_7, LinkedList_1_Clear_m7A54CCEEF8CC423F44A9AFD078CE6F1214851E67_RuntimeMethod_var);
			goto IL_0036;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::WriteRtpMidiBuffer(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_WriteRtpMidiBuffer_m9BDC07852AE1E47C62AD61A44CB70020988BDBD6 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_CopyTo_mBADD51274EC844B23FA838A470F508C862303B69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B5_0 = NULL;
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* G_B4_0 = NULL;
	{
		// var dataStream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
		// var rtp = new Rtp
		// {
		//     // First octet
		//     vpxcc = 2 << 6,
		//     // second octet
		//     mpayload = 97,
		//     ssrc = Ssrc,
		//     timestamp = (int)rtpMidiClock.Now(),
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61));
		(&V_5)->___vpxcc_0 = (uint8_t)((int32_t)128);
		(&V_5)->___mpayload_1 = (uint8_t)((int32_t)97);
		int32_t L_1;
		L_1 = RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92_inline(__this, NULL);
		(&V_5)->___ssrc_4 = L_1;
		RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* L_2 = __this->___rtpMidiClock_2;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = RtpMidiClock_Now_m11B034C9E2C4FB7F9C9EE7FC122495B3D773806E(L_2, NULL);
		(&V_5)->___timestamp_3 = ((int32_t)L_3);
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_4 = V_5;
		V_1 = L_4;
		// participant.sendSequenceNr++;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_5 = ___participant0;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6 = L_5;
		NullCheck(L_6);
		int16_t L_7 = L_6->___sendSequenceNr_7;
		NullCheck(L_6);
		L_6->___sendSequenceNr_7 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, 1)));
		// rtp.sequenceNr = participant.sendSequenceNr;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8 = ___participant0;
		NullCheck(L_8);
		int16_t L_9 = L_8->___sendSequenceNr_7;
		(&V_1)->___sequenceNr_2 = L_9;
		// dataStream.Write(new[]
		// {
		//     rtp.vpxcc,
		//     rtp.mpayload,
		//     (byte)((rtp.sequenceNr >> 8) & 0xff),
		//     (byte)(rtp.sequenceNr & 0xff),
		//     (byte)((rtp.timestamp >> 24) & 0xff),
		//     (byte)((rtp.timestamp >> 16) & 0xff),
		//     (byte)((rtp.timestamp >> 8) & 0xff),
		//     (byte)(rtp.timestamp & 0xff),
		//     (byte)((rtp.ssrc >> 24) & 0xff),
		//     (byte)((rtp.ssrc >> 16) & 0xff),
		//     (byte)((rtp.ssrc >> 8) & 0xff),
		//     (byte)(rtp.ssrc & 0xff),
		// }, 0, 12);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_13 = V_1;
		uint8_t L_14 = L_13.___vpxcc_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_12;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_16 = V_1;
		uint8_t L_17 = L_16.___mpayload_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_15;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_19 = V_1;
		int16_t L_20 = L_19.___sequenceNr_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_20>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_18;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_22 = V_1;
		int16_t L_23 = L_22.___sequenceNr_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = L_21;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_25 = V_1;
		int32_t L_26 = L_25.___timestamp_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_26>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = L_24;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_28 = V_1;
		int32_t L_29 = L_28.___timestamp_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_29>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = L_27;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_31 = V_1;
		int32_t L_32 = L_31.___timestamp_3;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_32>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = L_30;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_34 = V_1;
		int32_t L_35 = L_34.___timestamp_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_35&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_33;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_37 = V_1;
		int32_t L_38 = L_37.___ssrc_4;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_38>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_36;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_40 = V_1;
		int32_t L_41 = L_40.___ssrc_4;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_41>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = L_39;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_43 = V_1;
		int32_t L_44 = L_43.___ssrc_4;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_44>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = L_42;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_46 = V_1;
		int32_t L_47 = L_46.___ssrc_4;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_47&((int32_t)255)))));
		NullCheck(L_10);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_45, 0, ((int32_t)12));
		// byte rtpMidiFlags = 0;
		V_2 = (uint8_t)0;
		// var bufferLen = participant.outMidiBuffer.Count;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_48 = ___participant0;
		NullCheck(L_48);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_49 = L_48->___outMidiBuffer_23;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_inline(L_49, LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_RuntimeMethod_var);
		V_3 = L_50;
		// if (bufferLen < 0x0f)
		int32_t L_51 = V_3;
		V_6 = (bool)((((int32_t)L_51) < ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_52 = V_6;
		if (!L_52)
		{
			goto IL_0177;
		}
	}
	{
		// rtpMidiFlags |= (byte)bufferLen;
		uint8_t L_53 = V_2;
		int32_t L_54 = V_3;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_53|((int32_t)(uint8_t)L_54))));
		// rtpMidiFlags &= 0x7f; // short header, clear B flag
		uint8_t L_55 = V_2;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_55&((int32_t)127))));
		// dataStream.Write(new[] {rtpMidiFlags}, 0, 1);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_56 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = L_57;
		uint8_t L_59 = V_2;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_59);
		NullCheck(L_56);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_56, L_58, 0, 1);
		goto IL_01a2;
	}

IL_0177:
	{
		// rtpMidiFlags |= (byte)(bufferLen >> 8);
		uint8_t L_60 = V_2;
		int32_t L_61 = V_3;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_60|((int32_t)(uint8_t)((int32_t)(L_61>>8))))));
		// rtpMidiFlags |= 0x80; // set B flag for long header
		uint8_t L_62 = V_2;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_62|((int32_t)128))));
		// dataStream.Write(new[] {rtpMidiFlags, (byte)bufferLen}, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_63 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = L_64;
		uint8_t L_66 = V_2;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_66);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = L_65;
		int32_t L_68 = V_3;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_68));
		NullCheck(L_63);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_63, L_67, 0, 2);
	}

IL_01a2:
	{
		// var outMidiArray = new byte[bufferLen];
		int32_t L_69 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_69);
		V_4 = L_70;
		// participant.outMidiBuffer.CopyTo(outMidiArray, 0);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_71 = ___participant0;
		NullCheck(L_71);
		LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_72 = L_71->___outMidiBuffer_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_4;
		NullCheck(L_72);
		LinkedList_1_CopyTo_mBADD51274EC844B23FA838A470F508C862303B69(L_72, L_73, 0, LinkedList_1_CopyTo_mBADD51274EC844B23FA838A470F508C862303B69_RuntimeMethod_var);
		// dataStream.Write(outMidiArray, 0, bufferLen);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_74 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_4;
		int32_t L_76 = V_3;
		NullCheck(L_74);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_74, L_75, 0, L_76);
		// dataPort?.Send(dataStream.ToArray(), (int)dataStream.Length, participant.DataEndPoint);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_77 = __this->___dataPort_6;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_78 = L_77;
		G_B4_0 = L_78;
		if (L_78)
		{
			G_B5_0 = L_78;
			goto IL_01d0;
		}
	}
	{
		goto IL_01e9;
	}

IL_01d0:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_79 = V_0;
		NullCheck(L_79);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80;
		L_80 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_79);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_81 = V_0;
		NullCheck(L_81);
		int64_t L_82;
		L_82 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_81);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_83 = ___participant0;
		NullCheck(L_83);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_84 = L_83->___DataEndPoint_4;
		NullCheck(G_B5_0);
		int32_t L_85;
		L_85 = UdpClient_Send_m4DCD3993D7ED39C174F8FC8F653DD30F1BDF47B9(G_B5_0, L_80, ((int32_t)L_82), L_84, NULL);
	}

IL_01e9:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageSessionInvites()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ManageSessionInvites_m0D0C32AE1632AE3C51002EF4AD9EC317A98A1214 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m2C0731E08086235FD02D7FF345D41D824641015F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_0 = NULL;
	bool V_1 = false;
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_13 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_0 = __this->___participants_9;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0225:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_022f;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_022f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01bc_1:
					{// begin finally (depth: 2)
						{
							// foreach (var participant in participantsToRemove)
							HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_4 = __this->___participantsToRemove_10;
							NullCheck(L_4);
							Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_5;
							L_5 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_4, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
							V_12 = L_5;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_0205_1:
								{// begin finally (depth: 3)
									Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_12), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
									return;
								}// end finally (depth: 3)
							});
							try
							{// begin try (depth: 3)
								{
									goto IL_01fa_2;
								}

IL_01cd_2:
								{
									// foreach (var participant in participantsToRemove)
									RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6;
									L_6 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_12), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
									V_13 = L_6;
									// participants.Remove(participant);
									HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_7 = __this->___participants_9;
									RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8 = V_13;
									NullCheck(L_7);
									bool L_9;
									L_9 = HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B(L_7, L_8, HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B_RuntimeMethod_var);
									// deviceConnectionListener.OnRtpMidiDeviceDetached(GetDeviceId(participant));
									RuntimeObject* L_10 = __this->___deviceConnectionListener_20;
									RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_11 = V_13;
									String_t* L_12;
									L_12 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_11, NULL);
									NullCheck(L_10);
									InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener::OnRtpMidiDeviceDetached(System.String) */, IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var, L_10, L_12);
								}

IL_01fa_2:
								{
									// foreach (var participant in participantsToRemove)
									bool L_13;
									L_13 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_12), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
									if (L_13)
									{
										goto IL_01cd_2;
									}
								}
								{
									goto IL_0214_1;
								}
							}// end try (depth: 3)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_0214_1:
						{
							// participantsToRemove.Clear();
							HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_14 = __this->___participantsToRemove_10;
							NullCheck(L_14);
							HashSet_1_Clear_m2C0731E08086235FD02D7FF345D41D824641015F(L_14, HashSet_1_Clear_m2C0731E08086235FD02D7FF345D41D824641015F_RuntimeMethod_var);
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// foreach (var participant in participants)
						HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_15 = __this->___participants_9;
						NullCheck(L_15);
						Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_16;
						L_16 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_15, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
						V_2 = L_16;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_01aa_2:
							{// begin finally (depth: 3)
								Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_2), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
								return;
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								goto IL_019c_3;
							}

IL_0027_3:
							{
								// foreach (var participant in participants)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_17;
								L_17 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_2), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
								V_3 = L_17;
								// if (participant.kind == ParticipantKind.Listener)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_18 = V_3;
								NullCheck(L_18);
								int32_t L_19 = L_18->___kind_1;
								V_4 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
								bool L_20 = V_4;
								if (!L_20)
								{
									goto IL_0045_3;
								}
							}
							{
								// continue;
								goto IL_019c_3;
							}

IL_0045_3:
							{
								// if (participant.invitationStatus == InviteStatus.DataInvitationAccepted)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_21 = V_3;
								NullCheck(L_21);
								int32_t L_22 = L_21->___invitationStatus_15;
								V_5 = (bool)((((int32_t)L_22) == ((int32_t)4))? 1 : 0);
								bool L_23 = V_5;
								if (!L_23)
								{
									goto IL_005d_3;
								}
							}
							{
								// participant.invitationStatus = InviteStatus.Connected;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_24 = V_3;
								NullCheck(L_24);
								L_24->___invitationStatus_15 = 5;
							}

IL_005d_3:
							{
								// if (participant.invitationStatus == InviteStatus.Connected)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_25 = V_3;
								NullCheck(L_25);
								int32_t L_26 = L_25->___invitationStatus_15;
								V_6 = (bool)((((int32_t)L_26) == ((int32_t)5))? 1 : 0);
								bool L_27 = V_6;
								if (!L_27)
								{
									goto IL_0072_3;
								}
							}
							{
								// continue;
								goto IL_019c_3;
							}

IL_0072_3:
							{
								// if (RtpMidiClock.Ticks() - participant.lastInviteSentTime > 1000)
								il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
								int64_t L_28;
								L_28 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_29 = V_3;
								NullCheck(L_29);
								int64_t L_30 = L_29->___lastInviteSentTime_14;
								V_7 = (bool)((((int64_t)((int64_t)il2cpp_codegen_subtract(L_28, L_30))) > ((int64_t)((int64_t)((int32_t)1000))))? 1 : 0);
								bool L_31 = V_7;
								if (!L_31)
								{
									goto IL_019b_3;
								}
							}
							{
								// if (participant.connectionAttempts >= MaxSessionInvitesAttempts)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_32 = V_3;
								NullCheck(L_32);
								uint8_t L_33 = L_32->___connectionAttempts_12;
								V_9 = (bool)((((int32_t)((((int32_t)L_33) < ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
								bool L_34 = V_9;
								if (!L_34)
								{
									goto IL_00d1_3;
								}
							}
							{
								// SendEndSession(participant);
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_35 = V_3;
								RtpMidiSession_SendEndSession_m58DC5A45D223079AE151E5AEE9ACDD621025E9E5(__this, L_35, NULL);
								// participantsToRemove.Add(participant);
								HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_36 = __this->___participantsToRemove_10;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_37 = V_3;
								NullCheck(L_36);
								bool L_38;
								L_38 = HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB(L_36, L_37, HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var);
								// exceptionListener?.OnError(RtpMidiExceptionKind.NoResponseFromConnectionRequestException);
								RuntimeObject* L_39 = __this->___exceptionListener_21;
								RuntimeObject* L_40 = L_39;
								G_B13_0 = L_40;
								if (L_40)
								{
									G_B14_0 = L_40;
									goto IL_00c5_3;
								}
							}
							{
								goto IL_00cc_3;
							}

IL_00c5_3:
							{
								NullCheck(G_B14_0);
								InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B14_0, 7);
							}

IL_00cc_3:
							{
								// continue;
								goto IL_019c_3;
							}

IL_00d1_3:
							{
								// participant.lastInviteSentTime = RtpMidiClock.Ticks();
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_41 = V_3;
								il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
								int64_t L_42;
								L_42 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
								NullCheck(L_41);
								L_41->___lastInviteSentTime_14 = L_42;
								// participant.connectionAttempts++;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_43 = V_3;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_44 = L_43;
								NullCheck(L_44);
								uint8_t L_45 = L_44->___connectionAttempts_12;
								NullCheck(L_44);
								L_44->___connectionAttempts_12 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, 1)));
								// var invitation = new RtpMidiInvitation();
								il2cpp_codegen_initobj((&V_8), sizeof(RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925));
								// invitation.Ssrc = Ssrc;
								int32_t L_46;
								L_46 = RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92_inline(__this, NULL);
								RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2_inline((&V_8), L_46, NULL);
								// invitation.InitiatorToken = participant.initiatorToken;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_47 = V_3;
								NullCheck(L_47);
								int32_t L_48 = L_47->___initiatorToken_13;
								RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_inline((&V_8), L_48, NULL);
								// invitation.SessionName = localName;
								String_t* L_49 = __this->___localName_18;
								RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_inline((&V_8), L_49, NULL);
								// if (participant.invitationStatus == InviteStatus.Initiating ||
								//     participant.invitationStatus == InviteStatus.AwaitingControlInvitationAccepted)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_50 = V_3;
								NullCheck(L_50);
								int32_t L_51 = L_50->___invitationStatus_15;
								if (!L_51)
								{
									goto IL_0130_3;
								}
							}
							{
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_52 = V_3;
								NullCheck(L_52);
								int32_t L_53 = L_52->___invitationStatus_15;
								G_B19_0 = ((((int32_t)L_53) == ((int32_t)1))? 1 : 0);
								goto IL_0131_3;
							}

IL_0130_3:
							{
								G_B19_0 = 1;
							}

IL_0131_3:
							{
								V_10 = (bool)G_B19_0;
								bool L_54 = V_10;
								if (!L_54)
								{
									goto IL_015c_3;
								}
							}
							{
								// WriteInvitation(controlPort, participant.ControlEndPoint, invitation, RtpMidiConstants.Invitation);
								UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_55 = __this->___controlPort_4;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_56 = V_3;
								NullCheck(L_56);
								IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_57 = L_56->___ControlEndPoint_3;
								RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_58 = V_8;
								il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Invitation_2;
								RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2(__this, L_55, L_57, L_58, L_59, NULL);
								// participant.invitationStatus = InviteStatus.AwaitingControlInvitationAccepted;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_60 = V_3;
								NullCheck(L_60);
								L_60->___invitationStatus_15 = 1;
								goto IL_019a_3;
							}

IL_015c_3:
							{
								// else if (participant.invitationStatus == InviteStatus.ControlInvitationAccepted ||
								//          participant.invitationStatus == InviteStatus.AwaitingDataInvitationAccepted)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_61 = V_3;
								NullCheck(L_61);
								int32_t L_62 = L_61->___invitationStatus_15;
								if ((((int32_t)L_62) == ((int32_t)2)))
								{
									goto IL_0170_3;
								}
							}
							{
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_63 = V_3;
								NullCheck(L_63);
								int32_t L_64 = L_63->___invitationStatus_15;
								G_B24_0 = ((((int32_t)L_64) == ((int32_t)3))? 1 : 0);
								goto IL_0171_3;
							}

IL_0170_3:
							{
								G_B24_0 = 1;
							}

IL_0171_3:
							{
								V_11 = (bool)G_B24_0;
								bool L_65 = V_11;
								if (!L_65)
								{
									goto IL_019a_3;
								}
							}
							{
								// WriteInvitation(dataPort, participant.DataEndPoint, invitation, RtpMidiConstants.Invitation);
								UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_66 = __this->___dataPort_6;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_67 = V_3;
								NullCheck(L_67);
								IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_68 = L_67->___DataEndPoint_4;
								RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925 L_69 = V_8;
								il2cpp_codegen_runtime_class_init_inline(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ((RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_StaticFields*)il2cpp_codegen_static_fields_for(RtpMidiConstants_tBE4FBC1BC1588B531CC6D9C1BD3E51F3A67BB1DE_il2cpp_TypeInfo_var))->___Invitation_2;
								RtpMidiSession_WriteInvitation_m37FDD9C71F894E81A80460D4B3983082C48A56C2(__this, L_66, L_68, L_69, L_70, NULL);
								// participant.invitationStatus = InviteStatus.AwaitingDataInvitationAccepted;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_71 = V_3;
								NullCheck(L_71);
								L_71->___invitationStatus_15 = 3;
							}

IL_019a_3:
							{
							}

IL_019b_3:
							{
							}

IL_019c_3:
							{
								// foreach (var participant in participants)
								bool L_72;
								L_72 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_2), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
								if (L_72)
								{
									goto IL_0027_3;
								}
							}
							{
								goto IL_01b9_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_01b9_2:
					{
						goto IL_0222_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0222_1:
			{
				goto IL_0230;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0230:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageReceiverFeedback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ManageReceiverFeedback_m0E9CBA03489F02D1565D09F4BC025D8938B0B26A (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E V_5;
	memset((&V_5), 0, sizeof(V_5));
	RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// foreach (var participant in participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_0 = __this->___participants_9;
		NullCheck(L_0);
		Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_1;
		L_1 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_0, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_0), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0097_1;
			}

IL_0013_1:
			{
				// foreach (var participant in participants)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2;
				L_2 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_0), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
				V_1 = L_2;
				// if (participant.ssrc == 0)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_3 = V_1;
				NullCheck(L_3);
				int32_t L_4 = L_3->___ssrc_2;
				V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_002c_1;
				}
			}
			{
				// continue;
				goto IL_0097_1;
			}

IL_002c_1:
			{
				// if (!participant.doReceiverFeedback)
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6 = V_1;
				NullCheck(L_6);
				bool L_7 = L_6->___doReceiverFeedback_6;
				V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_003c_1;
				}
			}
			{
				// continue;
				goto IL_0097_1;
			}

IL_003c_1:
			{
				// if (RtpMidiClock.Ticks() - participant.receiverFeedbackStartTime > ReceiversFeedbackThreshold)
				il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
				int64_t L_9;
				L_9 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_10 = V_1;
				NullCheck(L_10);
				int64_t L_11 = L_10->___receiverFeedbackStartTime_5;
				V_4 = (bool)((((int64_t)((int64_t)il2cpp_codegen_subtract(L_9, L_11))) > ((int64_t)((int64_t)((int32_t)1000))))? 1 : 0);
				bool L_12 = V_4;
				if (!L_12)
				{
					goto IL_0096_1;
				}
			}
			{
				// var rf = new RtpMidiReceiverFeedback
				// {
				//     Ssrc = Ssrc,
				//     SequenceNr = participant.receiveSequenceNr,
				// };
				il2cpp_codegen_initobj((&V_6), sizeof(RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E));
				int32_t L_13;
				L_13 = RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92_inline(__this, NULL);
				RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174_inline((&V_6), L_13, NULL);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_14 = V_1;
				NullCheck(L_14);
				int16_t L_15 = L_14->___receiveSequenceNr_8;
				RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED_inline((&V_6), L_15, NULL);
				RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E L_16 = V_6;
				V_5 = L_16;
				// WriteReceiverFeedback(participant.ControlEndPoint, rf);
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_17 = V_1;
				NullCheck(L_17);
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_18 = L_17->___ControlEndPoint_3;
				RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E L_19 = V_5;
				RtpMidiSession_WriteReceiverFeedback_m5503C97AB226E3DD17CEC685547B16944BD02E21(__this, L_18, L_19, NULL);
				// participant.doReceiverFeedback = false;
				RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_20 = V_1;
				NullCheck(L_20);
				L_20->___doReceiverFeedback_6 = (bool)0;
			}

IL_0096_1:
			{
			}

IL_0097_1:
			{
				// foreach (var participant in participants)
				bool L_21;
				L_21 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_0), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_00b4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageSynchronization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ManageSynchronization_mDF103B072D62660CA1D13901F38E56F00D8B7030 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m2C0731E08086235FD02D7FF345D41D824641015F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_0 = NULL;
	bool V_1 = false;
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_10;
	memset((&V_10), 0, sizeof(V_10));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_11 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_0 = __this->___participants_9;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0189:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0193;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0193:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0120_1:
					{// begin finally (depth: 2)
						{
							// foreach (var participant in participantsToRemove)
							HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_4 = __this->___participantsToRemove_10;
							NullCheck(L_4);
							Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_5;
							L_5 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_4, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
							V_10 = L_5;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_0169_1:
								{// begin finally (depth: 3)
									Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_10), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
									return;
								}// end finally (depth: 3)
							});
							try
							{// begin try (depth: 3)
								{
									goto IL_015e_2;
								}

IL_0131_2:
								{
									// foreach (var participant in participantsToRemove)
									RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6;
									L_6 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_10), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
									V_11 = L_6;
									// participants.Remove(participant);
									HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_7 = __this->___participants_9;
									RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8 = V_11;
									NullCheck(L_7);
									bool L_9;
									L_9 = HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B(L_7, L_8, HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B_RuntimeMethod_var);
									// deviceConnectionListener.OnRtpMidiDeviceDetached(GetDeviceId(participant));
									RuntimeObject* L_10 = __this->___deviceConnectionListener_20;
									RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_11 = V_11;
									String_t* L_12;
									L_12 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_11, NULL);
									NullCheck(L_10);
									InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener::OnRtpMidiDeviceDetached(System.String) */, IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var, L_10, L_12);
								}

IL_015e_2:
								{
									// foreach (var participant in participantsToRemove)
									bool L_13;
									L_13 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_10), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
									if (L_13)
									{
										goto IL_0131_2;
									}
								}
								{
									goto IL_0178_1;
								}
							}// end try (depth: 3)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_0178_1:
						{
							// participantsToRemove.Clear();
							HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_14 = __this->___participantsToRemove_10;
							NullCheck(L_14);
							HashSet_1_Clear_m2C0731E08086235FD02D7FF345D41D824641015F(L_14, HashSet_1_Clear_m2C0731E08086235FD02D7FF345D41D824641015F_RuntimeMethod_var);
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// foreach (var participant in participants)
						HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_15 = __this->___participants_9;
						NullCheck(L_15);
						Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_16;
						L_16 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_15, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
						V_2 = L_16;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_010e_2:
							{// begin finally (depth: 3)
								Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_2), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
								return;
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								goto IL_0100_3;
							}

IL_0027_3:
							{
								// foreach (var participant in participants)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_17;
								L_17 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_2), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
								V_3 = L_17;
								// if (participant.ssrc == 0)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_18 = V_3;
								NullCheck(L_18);
								int32_t L_19 = L_18->___ssrc_2;
								V_4 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
								bool L_20 = V_4;
								if (!L_20)
								{
									goto IL_0045_3;
								}
							}
							{
								// continue;
								goto IL_0100_3;
							}

IL_0045_3:
							{
								// if (participant.invitationStatus != InviteStatus.Connected)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_21 = V_3;
								NullCheck(L_21);
								int32_t L_22 = L_21->___invitationStatus_15;
								V_5 = (bool)((((int32_t)((((int32_t)L_22) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
								bool L_23 = V_5;
								if (!L_23)
								{
									goto IL_005d_3;
								}
							}
							{
								// continue;
								goto IL_0100_3;
							}

IL_005d_3:
							{
								// if (participant.kind == ParticipantKind.Listener)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_24 = V_3;
								NullCheck(L_24);
								int32_t L_25 = L_24->___kind_1;
								V_6 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
								bool L_26 = V_6;
								if (!L_26)
								{
									goto IL_00b4_3;
								}
							}
							{
								// if (RtpMidiClock.Ticks() - participant.lastSyncExchangeTime > CkMaxTimeOut)
								il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
								int64_t L_27;
								L_27 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_28 = V_3;
								NullCheck(L_28);
								int64_t L_29 = L_28->___lastSyncExchangeTime_10;
								V_7 = (bool)((((int64_t)((int64_t)il2cpp_codegen_subtract(L_27, L_29))) > ((int64_t)((int64_t)((int32_t)61000))))? 1 : 0);
								bool L_30 = V_7;
								if (!L_30)
								{
									goto IL_00b1_3;
								}
							}
							{
								// SendEndSession(participant);
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_31 = V_3;
								RtpMidiSession_SendEndSession_m58DC5A45D223079AE151E5AEE9ACDD621025E9E5(__this, L_31, NULL);
								// participantsToRemove.Add(participant);
								HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_32 = __this->___participantsToRemove_10;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_33 = V_3;
								NullCheck(L_32);
								bool L_34;
								L_34 = HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB(L_32, L_33, HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var);
								// exceptionListener?.OnError(RtpMidiExceptionKind.ListenerTimeOutException);
								RuntimeObject* L_35 = __this->___exceptionListener_21;
								RuntimeObject* L_36 = L_35;
								G_B11_0 = L_36;
								if (L_36)
								{
									G_B12_0 = L_36;
									goto IL_00a9_3;
								}
							}
							{
								goto IL_00b0_3;
							}

IL_00a9_3:
							{
								NullCheck(G_B12_0);
								InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B12_0, 5);
							}

IL_00b0_3:
							{
							}

IL_00b1_3:
							{
								goto IL_00ff_3;
							}

IL_00b4_3:
							{
								// if (participant.Synchronizing)
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_37 = V_3;
								NullCheck(L_37);
								bool L_38;
								L_38 = RtpMidiParticipant_get_Synchronizing_mF60EF42DC53BEC43B3DD61D6100A6400B9A7472B_inline(L_37, NULL);
								V_8 = L_38;
								bool L_39 = V_8;
								if (!L_39)
								{
									goto IL_00f4_3;
								}
							}
							{
								// if (ManageSynchronizationInitiatorInvites(participant))
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_40 = V_3;
								bool L_41;
								L_41 = RtpMidiSession_ManageSynchronizationInitiatorInvites_m5E93887D867B6B87C76381AD83B357E6616E1D3D(__this, L_40, NULL);
								V_9 = L_41;
								bool L_42 = V_9;
								if (!L_42)
								{
									goto IL_00f1_3;
								}
							}
							{
								// participantsToRemove.Add(participant);
								HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_43 = __this->___participantsToRemove_10;
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_44 = V_3;
								NullCheck(L_43);
								bool L_45;
								L_45 = HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB(L_43, L_44, HashSet_1_Add_m5E1648259D3C383737B36AE678BD0408E0CDFDDB_RuntimeMethod_var);
								// exceptionListener?.OnError(RtpMidiExceptionKind.MaxAttemptsException);
								RuntimeObject* L_46 = __this->___exceptionListener_21;
								RuntimeObject* L_47 = L_46;
								G_B18_0 = L_47;
								if (L_47)
								{
									G_B19_0 = L_47;
									goto IL_00e9_3;
								}
							}
							{
								goto IL_00f0_3;
							}

IL_00e9_3:
							{
								NullCheck(G_B19_0);
								InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B19_0, 6);
							}

IL_00f0_3:
							{
							}

IL_00f1_3:
							{
								goto IL_00fe_3;
							}

IL_00f4_3:
							{
								// ManageSynchronizationInitiatorHeartBeat(participant);
								RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_48 = V_3;
								RtpMidiSession_ManageSynchronizationInitiatorHeartBeat_mC50CB3D5B06D77F49806495F668784CB6D0A3F3E(__this, L_48, NULL);
							}

IL_00fe_3:
							{
							}

IL_00ff_3:
							{
							}

IL_0100_3:
							{
								// foreach (var participant in participants)
								bool L_49;
								L_49 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_2), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
								if (L_49)
								{
									goto IL_0027_3;
								}
							}
							{
								goto IL_011d_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_011d_2:
					{
						goto IL_0186_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0186_1:
			{
				goto IL_0194;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0194:
	{
		// }
		return;
	}
}
// System.Boolean jp.kshoji.rtpmidi.RtpMidiSession::ManageSynchronizationInitiatorInvites(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RtpMidiSession_ManageSynchronizationInitiatorInvites_m5E93887D867B6B87C76381AD83B357E6616E1D3D (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (RtpMidiClock.Ticks() - participant.lastInviteSentTime > 10000)
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1 = ___participant0;
		NullCheck(L_1);
		int64_t L_2 = L_1->___lastInviteSentTime_14;
		V_0 = (bool)((((int64_t)((int64_t)il2cpp_codegen_subtract(L_0, L_2))) > ((int64_t)((int64_t)((int32_t)10000))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// if (participant.synchronizationCount > MaxSynchronizationCk0Attempts)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_4 = ___participant0;
		NullCheck(L_4);
		uint8_t L_5 = L_4->___synchronizationCount_17;
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// SendEndSession(participant);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_7 = ___participant0;
		RtpMidiSession_SendEndSession_m58DC5A45D223079AE151E5AEE9ACDD621025E9E5(__this, L_7, NULL);
		// return true;
		V_2 = (bool)1;
		goto IL_0041;
	}

IL_0034:
	{
		// SendSynchronization(participant);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8 = ___participant0;
		RtpMidiSession_SendSynchronization_m4487D4DE3A13E6E1BAA445C735182EF938675B40(__this, L_8, NULL);
	}

IL_003d:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ManageSynchronizationInitiatorHeartBeat(jp.kshoji.rtpmidi.RtpMidiParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ManageSynchronizationInitiatorHeartBeat_mC50CB3D5B06D77F49806495F668784CB6D0A3F3E (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// var doSynchronize = false;
		V_0 = (bool)0;
		// if (participant.synchronizationHeartBeats < 2)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_0 = ___participant0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->___synchronizationHeartBeats_16;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)2))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// if (RtpMidiClock.Ticks() - participant.lastInviteSentTime > 500)
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_3;
		L_3 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_4 = ___participant0;
		NullCheck(L_4);
		int64_t L_5 = L_4->___lastInviteSentTime_14;
		V_2 = (bool)((((int64_t)((int64_t)il2cpp_codegen_subtract(L_3, L_5))) > ((int64_t)((int64_t)((int32_t)500))))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// participant.synchronizationHeartBeats++;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_7 = ___participant0;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8 = L_7;
		NullCheck(L_8);
		uint8_t L_9 = L_8->___synchronizationHeartBeats_16;
		NullCheck(L_8);
		L_8->___synchronizationHeartBeats_16 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, 1)));
		// doSynchronize = true;
		V_0 = (bool)1;
	}

IL_003c:
	{
		goto IL_009b;
	}

IL_003f:
	{
		// else if (participant.synchronizationHeartBeats < 7)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_10 = ___participant0;
		NullCheck(L_10);
		uint8_t L_11 = L_10->___synchronizationHeartBeats_16;
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)7))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// if (RtpMidiClock.Ticks() - participant.lastInviteSentTime > 1500)
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_13;
		L_13 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_14 = ___participant0;
		NullCheck(L_14);
		int64_t L_15 = L_14->___lastInviteSentTime_14;
		V_4 = (bool)((((int64_t)((int64_t)il2cpp_codegen_subtract(L_13, L_15))) > ((int64_t)((int64_t)((int32_t)1500))))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		// participant.synchronizationHeartBeats++;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_17 = ___participant0;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_18 = L_17;
		NullCheck(L_18);
		uint8_t L_19 = L_18->___synchronizationHeartBeats_16;
		NullCheck(L_18);
		L_18->___synchronizationHeartBeats_16 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, 1)));
		// doSynchronize = true;
		V_0 = (bool)1;
	}

IL_007a:
	{
		goto IL_009b;
	}

IL_007d:
	{
		// else if (RtpMidiClock.Ticks() - participant.lastInviteSentTime > SynchronizationHeartBeat)
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_20;
		L_20 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_21 = ___participant0;
		NullCheck(L_21);
		int64_t L_22 = L_21->___lastInviteSentTime_14;
		V_5 = (bool)((((int64_t)((int64_t)il2cpp_codegen_subtract(L_20, L_22))) > ((int64_t)((int64_t)((int32_t)10000))))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_009b;
		}
	}
	{
		// doSynchronize = true;
		V_0 = (bool)1;
	}

IL_009b:
	{
		// if (!doSynchronize)
		bool L_24 = V_0;
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		// return;
		goto IL_00b7;
	}

IL_00a8:
	{
		// participant.synchronizationCount = 0;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_26 = ___participant0;
		NullCheck(L_26);
		L_26->___synchronizationCount_17 = (uint8_t)0;
		// SendSynchronization(participant);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_27 = ___participant0;
		RtpMidiSession_SendSynchronization_m4487D4DE3A13E6E1BAA445C735182EF938675B40(__this, L_27, NULL);
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedEndSession(jp.kshoji.rtpmidi.RtpMidiEndSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedEndSession_m58B95EA276CC742F1405E9CBD0D73A9690C7B182 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9 ___endSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	bool V_1 = false;
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_2 = NULL;
	bool V_3 = false;
	{
		// var participant = GetParticipantBySsrc(endSession.Ssrc);
		int32_t L_0;
		L_0 = RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_inline((&___endSession0), NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1;
		L_1 = RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5(__this, L_0, NULL);
		V_0 = L_1;
		// if (participant != null)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_4 = __this->___participants_9;
		V_2 = L_4;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_3;
					if (!L_5)
					{
						goto IL_0058;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_6 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0058:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_7 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_3), NULL);
			// participants.Remove(participant);
			HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_8 = __this->___participants_9;
			RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_9 = V_0;
			NullCheck(L_8);
			bool L_10;
			L_10 = HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B(L_8, L_9, HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B_RuntimeMethod_var);
			// deviceConnectionListener.OnRtpMidiDeviceDetached(GetDeviceId(participant));
			RuntimeObject* L_11 = __this->___deviceConnectionListener_20;
			RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_12 = V_0;
			String_t* L_13;
			L_13 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_12, NULL);
			NullCheck(L_11);
			InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener::OnRtpMidiDeviceDetached(System.String) */, IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var, L_11, L_13);
			goto IL_0059;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedSynchronization(jp.kshoji.rtpmidi.RtpMidiSynchronization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedSynchronization_m50146E909893CDE277963444F96314741629933D (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A ___synchronization0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_4 = NULL;
	bool V_5 = false;
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// var participant = GetParticipantBySsrc(synchronization.Ssrc);
		int32_t L_0;
		L_0 = RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_inline((&___synchronization0), NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1;
		L_1 = RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5(__this, L_0, NULL);
		V_0 = L_1;
		// if (participant == null)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// exceptionListener?.OnError(RtpMidiExceptionKind.ParticipantNotFoundException);
		RuntimeObject* L_4 = __this->___exceptionListener_21;
		RuntimeObject* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0024;
		}
	}
	{
		goto IL_002b;
	}

IL_0024:
	{
		NullCheck(G_B3_0);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B3_0, 4);
	}

IL_002b:
	{
		// return;
		goto IL_0136;
	}

IL_0030:
	{
		// switch (synchronization.Count)
		uint8_t L_6;
		L_6 = RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D_inline((&___synchronization0), NULL);
		V_3 = L_6;
		uint8_t L_7 = V_3;
		V_2 = L_7;
		uint8_t L_8 = V_2;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_00a7;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_012b;
	}

IL_0051:
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_9 = __this->___participants_9;
		V_4 = L_9;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				{
					bool L_10 = V_5;
					if (!L_10)
					{
						goto IL_008a;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_11 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_11, NULL);
				}

IL_008a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_12 = V_4;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_12, (&V_5), NULL);
			// synchronization.Timestamps[1] = rtpMidiClock.Now();
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13;
			L_13 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization0), NULL);
			RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* L_14 = __this->___rtpMidiClock_2;
			NullCheck(L_14);
			int64_t L_15;
			L_15 = RtpMidiClock_Now_m11B034C9E2C4FB7F9C9EE7FC122495B3D773806E(L_14, NULL);
			NullCheck(L_13);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (int64_t)L_15);
			goto IL_008b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		// synchronization.Count = 1;
		RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_inline((&___synchronization0), (uint8_t)1, NULL);
		// WriteSynchronization(participant.DataEndPoint, synchronization);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_16 = V_0;
		NullCheck(L_16);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_17 = L_16->___DataEndPoint_4;
		RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A L_18 = ___synchronization0;
		RtpMidiSession_WriteSynchronization_m27187F9AFDA0FC771DE29C843D3B3B1B5F5DBFA2(__this, L_17, L_18, NULL);
		// break;
		goto IL_012b;
	}

IL_00a7:
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_19 = __this->___participants_9;
		V_6 = L_19;
		V_7 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d4:
			{// begin finally (depth: 1)
				{
					bool L_20 = V_7;
					if (!L_20)
					{
						goto IL_00e0;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_21 = V_6;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_21, NULL);
				}

IL_00e0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_22 = V_6;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_22, (&V_7), NULL);
			// synchronization.Timestamps[2] = rtpMidiClock.Now();
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_23;
			L_23 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization0), NULL);
			RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2* L_24 = __this->___rtpMidiClock_2;
			NullCheck(L_24);
			int64_t L_25;
			L_25 = RtpMidiClock_Now_m11B034C9E2C4FB7F9C9EE7FC122495B3D773806E(L_24, NULL);
			NullCheck(L_23);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (int64_t)L_25);
			goto IL_00e1;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e1:
	{
		// synchronization.Count = 2;
		RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_inline((&___synchronization0), (uint8_t)2, NULL);
		// WriteSynchronization(participant.DataEndPoint, synchronization);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_26 = V_0;
		NullCheck(L_26);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_27 = L_26->___DataEndPoint_4;
		RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A L_28 = ___synchronization0;
		RtpMidiSession_WriteSynchronization_m27187F9AFDA0FC771DE29C843D3B3B1B5F5DBFA2(__this, L_27, L_28, NULL);
		// participant.Synchronizing = false;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_29 = V_0;
		NullCheck(L_29);
		RtpMidiParticipant_set_Synchronizing_m85239D61ABFC5F3885A669381565911B47B58371_inline(L_29, (bool)0, NULL);
		// break;
		goto IL_012b;
	}

IL_0102:
	{
		// participant.OffsetEstimate = (synchronization.Timestamps[2] + synchronization.Timestamps[0]) / 2 - synchronization.Timestamps[1];
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_30 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_31;
		L_31 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization0), NULL);
		NullCheck(L_31);
		int32_t L_32 = 2;
		int64_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_34;
		L_34 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization0), NULL);
		NullCheck(L_34);
		int32_t L_35 = 0;
		int64_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_37;
		L_37 = RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline((&___synchronization0), NULL);
		NullCheck(L_37);
		int32_t L_38 = 1;
		int64_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_30);
		RtpMidiParticipant_set_OffsetEstimate_m247AF18F141787C6EA72D9F1D70F96C01963B2F0_inline(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(((int64_t)il2cpp_codegen_add(L_33, L_36))/((int64_t)2))), L_39)), NULL);
		// break;
		goto IL_012b;
	}

IL_012b:
	{
		// participant.lastSyncExchangeTime = RtpMidiClock.Ticks();
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_40 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_41;
		L_41 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		NullCheck(L_40);
		L_40->___lastSyncExchangeTime_10 = L_41;
	}

IL_0136:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedInvitationAccepted(jp.kshoji.rtpmidi.RtpMidiInvitationAccepted,jp.kshoji.rtpmidi.PortType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedInvitationAccepted_mAF531DF62FED1792DAD477DDC48E7CB86465E839 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 ___invitationAccepted0, int32_t ___portType1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (portType == PortType.Control)
		int32_t L_0 = ___portType1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ReceivedControlInvitationAccepted(invitationAccepted);
		RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 L_2 = ___invitationAccepted0;
		RtpMidiSession_ReceivedControlInvitationAccepted_m9D1659E908820FD4DD6AD5B15016957D727E4733(__this, L_2, NULL);
		goto IL_001f;
	}

IL_0015:
	{
		// ReceivedDataInvitationAccepted(invitationAccepted);
		RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 L_3 = ___invitationAccepted0;
		RtpMidiSession_ReceivedDataInvitationAccepted_mE116065321485879046AFD3AE95FF9A7630F136C(__this, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedControlInvitationAccepted(jp.kshoji.rtpmidi.RtpMidiInvitationAccepted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedControlInvitationAccepted_m9D1659E908820FD4DD6AD5B15016957D727E4733 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 ___invitationAccepted0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	bool V_1 = false;
	{
		// var participant = GetParticipantByInitiatorToken(invitationAccepted.InitiatorToken);
		int32_t L_0;
		L_0 = RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28_inline((&___invitationAccepted0), NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1;
		L_1 = RtpMidiSession_GetParticipantByInitiatorToken_m6678E759B1841EB95B3445778489C06EFEEA4417(__this, L_0, NULL);
		V_0 = L_1;
		// if (participant == null)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_0054;
	}

IL_001a:
	{
		// participant.ssrc = invitationAccepted.Ssrc;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_4 = V_0;
		int32_t L_5;
		L_5 = RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0_inline((&___invitationAccepted0), NULL);
		NullCheck(L_4);
		L_4->___ssrc_2 = L_5;
		// participant.lastInviteSentTime = RtpMidiClock.Ticks() - 1000;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_7;
		L_7 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		NullCheck(L_6);
		L_6->___lastInviteSentTime_14 = ((int64_t)il2cpp_codegen_subtract(L_7, ((int64_t)((int32_t)1000))));
		// participant.connectionAttempts = 0;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8 = V_0;
		NullCheck(L_8);
		L_8->___connectionAttempts_12 = (uint8_t)0;
		// participant.invitationStatus = InviteStatus.ControlInvitationAccepted;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_9 = V_0;
		NullCheck(L_9);
		L_9->___invitationStatus_15 = 2;
		// participant.sessionName = invitationAccepted.SessionName;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_10 = V_0;
		String_t* L_11;
		L_11 = RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53_inline((&___invitationAccepted0), NULL);
		NullCheck(L_10);
		L_10->___sessionName_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___sessionName_11), (void*)L_11);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedDataInvitationAccepted(jp.kshoji.rtpmidi.RtpMidiInvitationAccepted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedDataInvitationAccepted_mE116065321485879046AFD3AE95FF9A7630F136C (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1 ___invitationAccepted0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	bool V_1 = false;
	{
		// var participant = GetParticipantByInitiatorToken(invitationAccepted.InitiatorToken);
		int32_t L_0;
		L_0 = RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28_inline((&___invitationAccepted0), NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1;
		L_1 = RtpMidiSession_GetParticipantByInitiatorToken_m6678E759B1841EB95B3445778489C06EFEEA4417(__this, L_0, NULL);
		V_0 = L_1;
		// if (participant == null)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_0034;
	}

IL_001a:
	{
		// participant.invitationStatus = InviteStatus.DataInvitationAccepted;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_4 = V_0;
		NullCheck(L_4);
		L_4->___invitationStatus_15 = 4;
		// deviceConnectionListener.OnRtpMidiDeviceAttached(GetDeviceId(participant));
		RuntimeObject* L_5 = __this->___deviceConnectionListener_20;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6 = V_0;
		String_t* L_7;
		L_7 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_6, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener::OnRtpMidiDeviceAttached(System.String) */, IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var, L_5, L_7);
	}

IL_0034:
	{
		// }
		return;
	}
}
// jp.kshoji.rtpmidi.RtpMidiParticipant jp.kshoji.rtpmidi.RtpMidiSession::GetParticipantByInitiatorToken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* RtpMidiSession_GetParticipantByInitiatorToken_m6678E759B1841EB95B3445778489C06EFEEA4417 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, int32_t ___initiatorToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_0 = NULL;
	bool V_1 = false;
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_3 = NULL;
	bool V_4 = false;
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_5 = NULL;
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_0 = __this->___participants_9;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0069;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// foreach (var participant in participants)
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_4 = __this->___participants_9;
				NullCheck(L_4);
				Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_5;
				L_5 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_4, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_004d_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_2), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0042_2;
					}

IL_0023_2:
					{
						// foreach (var participant in participants)
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6;
						L_6 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_2), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
						V_3 = L_6;
						// if (participant.initiatorToken == initiatorToken)
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_7 = V_3;
						NullCheck(L_7);
						int32_t L_8 = L_7->___initiatorToken_13;
						int32_t L_9 = ___initiatorToken0;
						V_4 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
						bool L_10 = V_4;
						if (!L_10)
						{
							goto IL_0041_2;
						}
					}
					{
						// return participant;
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_11 = V_3;
						V_5 = L_11;
						goto IL_006f;
					}

IL_0041_2:
					{
					}

IL_0042_2:
					{
						// foreach (var participant in participants)
						bool L_12;
						L_12 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_2), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
						if (L_12)
						{
							goto IL_0023_2;
						}
					}
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// return null;
		V_5 = (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)NULL;
		goto IL_006f;
	}

IL_006f:
	{
		// }
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_13 = V_5;
		return L_13;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedInvitationRejected(jp.kshoji.rtpmidi.RtpMidiInvitationRejected)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedInvitationRejected_m30FDC4E5E3025E15BFEFCAA55C0E4799E52FA8D5 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040 ___invitationRejected0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	bool V_1 = false;
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_2 = NULL;
	bool V_3 = false;
	{
		// var participant = GetParticipantBySsrc(invitationRejected.Ssrc);
		int32_t L_0;
		L_0 = RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22_inline((&___invitationRejected0), NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1;
		L_1 = RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5(__this, L_0, NULL);
		V_0 = L_1;
		// if (participant != null)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_4 = __this->___participants_9;
		V_2 = L_4;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_3;
					if (!L_5)
					{
						goto IL_0058;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_6 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0058:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_7 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_3), NULL);
			// participants.Remove(participant);
			HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_8 = __this->___participants_9;
			RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_9 = V_0;
			NullCheck(L_8);
			bool L_10;
			L_10 = HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B(L_8, L_9, HashSet_1_Remove_m0253FF9641C5117817742AF4B342AE1385AD238B_RuntimeMethod_var);
			// deviceConnectionListener.OnRtpMidiDeviceDetached(GetDeviceId(participant));
			RuntimeObject* L_11 = __this->___deviceConnectionListener_20;
			RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_12 = V_0;
			String_t* L_13;
			L_13 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_12, NULL);
			NullCheck(L_11);
			InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void jp.kshoji.rtpmidi.IRtpMidiDeviceConnectionListener::OnRtpMidiDeviceDetached(System.String) */, IRtpMidiDeviceConnectionListener_t1CE76EAB1D1941DBEE0A79432F8A888FE9B8D243_il2cpp_TypeInfo_var, L_11, L_13);
			goto IL_0059;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedReceiverFeedback(jp.kshoji.rtpmidi.RtpMidiReceiverFeedback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedReceiverFeedback_m8E21FC7C788B160198541BD185DE2B06B1A287D7 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E ___receiverFeedback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// var participant = GetParticipantBySsrc(receiverFeedback.Ssrc);
		int32_t L_0;
		L_0 = RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_inline((&___receiverFeedback0), NULL);
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_1;
		L_1 = RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5(__this, L_0, NULL);
		V_0 = L_1;
		// if (participant == null)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// exceptionListener?.OnError(RtpMidiExceptionKind.ParticipantNotFoundException);
		RuntimeObject* L_4 = __this->___exceptionListener_21;
		RuntimeObject* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0024;
		}
	}
	{
		goto IL_002b;
	}

IL_0024:
	{
		NullCheck(G_B3_0);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B3_0, 4);
	}

IL_002b:
	{
		// return;
		goto IL_0055;
	}

IL_002d:
	{
		// if (participant.sendSequenceNr < receiverFeedback.SequenceNr)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6 = V_0;
		NullCheck(L_6);
		int16_t L_7 = L_6->___sendSequenceNr_7;
		int16_t L_8;
		L_8 = RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B_inline((&___receiverFeedback0), NULL);
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// exceptionListener?.OnError(RtpMidiExceptionKind.SendPacketsDropped);
		RuntimeObject* L_10 = __this->___exceptionListener_21;
		RuntimeObject* L_11 = L_10;
		G_B7_0 = L_11;
		if (L_11)
		{
			G_B8_0 = L_11;
			goto IL_004d;
		}
	}
	{
		goto IL_0054;
	}

IL_004d:
	{
		NullCheck(G_B8_0);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B8_0, 8);
	}

IL_0054:
	{
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedBitrateReceiveLimit(jp.kshoji.rtpmidi.RtpMidiBitrateReceiveLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedBitrateReceiveLimit_m967A2C31731C73888F18EFE670184F5EFAAE4C18 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273 ___bitrateReceiveLimit0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedMidi(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedMidi_mB73D360059B664A8681945D34F847DA40ADAD81B (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, uint8_t ___midi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* V_0 = NULL;
	bool V_1 = false;
	Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_3 = NULL;
	{
		// lock (participants)
		HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_0 = __this->___participants_9;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0061;
					}
				}
				{
					HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0061:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// foreach (var participant in participants)
				HashSet_1_t8749F1E8D505D5979552BCC680CCA1185DA9BA9E* L_4 = __this->___participants_9;
				NullCheck(L_4);
				Enumerator_tD9282F4C94E30CC891B58E5EC94ABDE870B3C262 L_5;
				L_5 = HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54(L_4, HashSet_1_GetEnumerator_m9B160855387B7CBF95EED0B00BFE0B25C1FE0B54_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0045_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949((&V_2), Enumerator_Dispose_m4CCD4DB963746B401151B9E019D55426EC0F9949_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_003a_2;
					}

IL_0023_2:
					{
						// foreach (var participant in participants)
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_6;
						L_6 = Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_inline((&V_2), Enumerator_get_Current_mFEC1D066C0C7966F070B58BE205CC4FE59CDDBBF_RuntimeMethod_var);
						V_3 = L_6;
						// participant.inMidiBuffer.AddLast(midi);
						RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_7 = V_3;
						NullCheck(L_7);
						LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* L_8 = L_7->___inMidiBuffer_22;
						uint8_t L_9 = ___midi0;
						NullCheck(L_8);
						LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_10;
						L_10 = LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11(L_8, L_9, LinkedList_1_AddLast_mA9E9D4A92BB14A2C4B555BB2B2C376468EA1FF11_RuntimeMethod_var);
					}

IL_003a_2:
					{
						// foreach (var participant in participants)
						bool L_11;
						L_11 = Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1((&V_2), Enumerator_MoveNext_m7E43D9762BF0EFA5E32FCDF89EE059A2EF3912C1_RuntimeMethod_var);
						if (L_11)
						{
							goto IL_0023_2;
						}
					}
					{
						goto IL_0054_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0054_1:
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedMidi(jp.kshoji.rtpmidi.RtpMidiParticipant,jp.kshoji.rtpmidi.MidiType,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedMidi_mC7443254C4EDFD7A6E10191BF365769B65926F44 (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* ___participant0, int32_t ___midiType1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	RuntimeObject* G_B24_0 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	RuntimeObject* G_B33_0 = NULL;
	RuntimeObject* G_B32_0 = NULL;
	RuntimeObject* G_B37_0 = NULL;
	RuntimeObject* G_B36_0 = NULL;
	RuntimeObject* G_B41_0 = NULL;
	RuntimeObject* G_B40_0 = NULL;
	RuntimeObject* G_B45_0 = NULL;
	RuntimeObject* G_B44_0 = NULL;
	RuntimeObject* G_B49_0 = NULL;
	RuntimeObject* G_B48_0 = NULL;
	RuntimeObject* G_B53_0 = NULL;
	RuntimeObject* G_B52_0 = NULL;
	RuntimeObject* G_B57_0 = NULL;
	RuntimeObject* G_B56_0 = NULL;
	RuntimeObject* G_B61_0 = NULL;
	RuntimeObject* G_B60_0 = NULL;
	RuntimeObject* G_B65_0 = NULL;
	RuntimeObject* G_B64_0 = NULL;
	RuntimeObject* G_B69_0 = NULL;
	RuntimeObject* G_B68_0 = NULL;
	RuntimeObject* G_B73_0 = NULL;
	RuntimeObject* G_B72_0 = NULL;
	RuntimeObject* G_B77_0 = NULL;
	RuntimeObject* G_B76_0 = NULL;
	RuntimeObject* G_B81_0 = NULL;
	RuntimeObject* G_B80_0 = NULL;
	RuntimeObject* G_B85_0 = NULL;
	RuntimeObject* G_B84_0 = NULL;
	RuntimeObject* G_B89_0 = NULL;
	RuntimeObject* G_B88_0 = NULL;
	{
		// switch (midiType)
		int32_t L_0 = ___midiType1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)176))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)144))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)128))))
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)144))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0340;
	}

IL_0032:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)160))))
		{
			goto IL_0126;
		}
	}
	{
		goto IL_003f;
	}

IL_003f:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)176))))
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0340;
	}

IL_004f:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)208))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)192))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_0064;
	}

IL_0064:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)208))))
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0340;
	}

IL_0074:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)224))))
		{
			goto IL_01c8;
		}
	}
	{
		goto IL_0081;
	}

IL_0081:
	{
		int32_t L_12 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, ((int32_t)240))))
		{
			case 0:
			{
				goto IL_01f5;
			}
			case 1:
			{
				goto IL_0214;
			}
			case 2:
			{
				goto IL_0235;
			}
			case 3:
			{
				goto IL_025c;
			}
			case 4:
			{
				goto IL_0340;
			}
			case 5:
			{
				goto IL_0340;
			}
			case 6:
			{
				goto IL_027d;
			}
			case 7:
			{
				goto IL_0340;
			}
			case 8:
			{
				goto IL_029b;
			}
			case 9:
			{
				goto IL_0340;
			}
			case 10:
			{
				goto IL_02b9;
			}
			case 11:
			{
				goto IL_02d4;
			}
			case 12:
			{
				goto IL_02ef;
			}
			case 13:
			{
				goto IL_0340;
			}
			case 14:
			{
				goto IL_030a;
			}
			case 15:
			{
				goto IL_0325;
			}
		}
	}
	{
		goto IL_0340;
	}

IL_00d2:
	{
		// rtpMidiEventHandler?.OnMidiNoteOff(GetDeviceId(participant), data[0] & 0xf, data[1], data[2]);
		RuntimeObject* L_13 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_14 = L_13;
		G_B20_0 = L_14;
		if (L_14)
		{
			G_B21_0 = L_14;
			goto IL_00de;
		}
	}
	{
		goto IL_00f7;
	}

IL_00de:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_15 = ___participant0;
		String_t* L_16;
		L_16 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___data2;
		NullCheck(L_17);
		int32_t L_18 = 0;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___data2;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___data2;
		NullCheck(L_23);
		int32_t L_24 = 2;
		uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(G_B21_0);
		InterfaceActionInvoker4< String_t*, int32_t, int32_t, int32_t >::Invoke(1 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiNoteOff(System.String,System.Int32,System.Int32,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B21_0, L_16, ((int32_t)((int32_t)L_19&((int32_t)15))), L_22, L_25);
	}

IL_00f7:
	{
		// break;
		goto IL_0340;
	}

IL_00fc:
	{
		// rtpMidiEventHandler?.OnMidiNoteOn(GetDeviceId(participant), data[0] & 0xf, data[1], data[2]);
		RuntimeObject* L_26 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_27 = L_26;
		G_B24_0 = L_27;
		if (L_27)
		{
			G_B25_0 = L_27;
			goto IL_0108;
		}
	}
	{
		goto IL_0121;
	}

IL_0108:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_28 = ___participant0;
		String_t* L_29;
		L_29 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_28, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___data2;
		NullCheck(L_30);
		int32_t L_31 = 0;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___data2;
		NullCheck(L_33);
		int32_t L_34 = 1;
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___data2;
		NullCheck(L_36);
		int32_t L_37 = 2;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(G_B25_0);
		InterfaceActionInvoker4< String_t*, int32_t, int32_t, int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiNoteOn(System.String,System.Int32,System.Int32,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B25_0, L_29, ((int32_t)((int32_t)L_32&((int32_t)15))), L_35, L_38);
	}

IL_0121:
	{
		// break;
		goto IL_0340;
	}

IL_0126:
	{
		// rtpMidiEventHandler?.OnMidiPolyphonicAftertouch(GetDeviceId(participant), data[0] & 0xf, data[1], data[2]);
		RuntimeObject* L_39 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_40 = L_39;
		G_B28_0 = L_40;
		if (L_40)
		{
			G_B29_0 = L_40;
			goto IL_0132;
		}
	}
	{
		goto IL_014b;
	}

IL_0132:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_41 = ___participant0;
		String_t* L_42;
		L_42 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_41, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___data2;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___data2;
		NullCheck(L_46);
		int32_t L_47 = 1;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___data2;
		NullCheck(L_49);
		int32_t L_50 = 2;
		uint8_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(G_B29_0);
		InterfaceActionInvoker4< String_t*, int32_t, int32_t, int32_t >::Invoke(2 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiPolyphonicAftertouch(System.String,System.Int32,System.Int32,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B29_0, L_42, ((int32_t)((int32_t)L_45&((int32_t)15))), L_48, L_51);
	}

IL_014b:
	{
		// break;
		goto IL_0340;
	}

IL_0150:
	{
		// rtpMidiEventHandler?.OnMidiControlChange(GetDeviceId(participant), data[0] & 0xf, data[1], data[2]);
		RuntimeObject* L_52 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_53 = L_52;
		G_B32_0 = L_53;
		if (L_53)
		{
			G_B33_0 = L_53;
			goto IL_015c;
		}
	}
	{
		goto IL_0175;
	}

IL_015c:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_54 = ___participant0;
		String_t* L_55;
		L_55 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_54, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___data2;
		NullCheck(L_56);
		int32_t L_57 = 0;
		uint8_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ___data2;
		NullCheck(L_59);
		int32_t L_60 = 1;
		uint8_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___data2;
		NullCheck(L_62);
		int32_t L_63 = 2;
		uint8_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(G_B33_0);
		InterfaceActionInvoker4< String_t*, int32_t, int32_t, int32_t >::Invoke(3 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiControlChange(System.String,System.Int32,System.Int32,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B33_0, L_55, ((int32_t)((int32_t)L_58&((int32_t)15))), L_61, L_64);
	}

IL_0175:
	{
		// break;
		goto IL_0340;
	}

IL_017a:
	{
		// rtpMidiEventHandler?.OnMidiProgramChange(GetDeviceId(participant), data[0] & 0xf, data[1]);
		RuntimeObject* L_65 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_66 = L_65;
		G_B36_0 = L_66;
		if (L_66)
		{
			G_B37_0 = L_66;
			goto IL_0186;
		}
	}
	{
		goto IL_019c;
	}

IL_0186:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_67 = ___participant0;
		String_t* L_68;
		L_68 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_67, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___data2;
		NullCheck(L_69);
		int32_t L_70 = 0;
		uint8_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___data2;
		NullCheck(L_72);
		int32_t L_73 = 1;
		uint8_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(G_B37_0);
		InterfaceActionInvoker3< String_t*, int32_t, int32_t >::Invoke(4 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiProgramChange(System.String,System.Int32,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B37_0, L_68, ((int32_t)((int32_t)L_71&((int32_t)15))), L_74);
	}

IL_019c:
	{
		// break;
		goto IL_0340;
	}

IL_01a1:
	{
		// rtpMidiEventHandler?.OnMidiChannelAftertouch(GetDeviceId(participant), data[0] & 0xf, data[1]);
		RuntimeObject* L_75 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_76 = L_75;
		G_B40_0 = L_76;
		if (L_76)
		{
			G_B41_0 = L_76;
			goto IL_01ad;
		}
	}
	{
		goto IL_01c3;
	}

IL_01ad:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_77 = ___participant0;
		String_t* L_78;
		L_78 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_77, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ___data2;
		NullCheck(L_79);
		int32_t L_80 = 0;
		uint8_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___data2;
		NullCheck(L_82);
		int32_t L_83 = 1;
		uint8_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(G_B41_0);
		InterfaceActionInvoker3< String_t*, int32_t, int32_t >::Invoke(5 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiChannelAftertouch(System.String,System.Int32,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B41_0, L_78, ((int32_t)((int32_t)L_81&((int32_t)15))), L_84);
	}

IL_01c3:
	{
		// break;
		goto IL_0340;
	}

IL_01c8:
	{
		// rtpMidiEventHandler?.OnMidiPitchWheel(GetDeviceId(participant), data[0] & 0xf, data[1] | (data[2] << 7));
		RuntimeObject* L_85 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_86 = L_85;
		G_B44_0 = L_86;
		if (L_86)
		{
			G_B45_0 = L_86;
			goto IL_01d4;
		}
	}
	{
		goto IL_01f0;
	}

IL_01d4:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_87 = ___participant0;
		String_t* L_88;
		L_88 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_87, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = ___data2;
		NullCheck(L_89);
		int32_t L_90 = 0;
		uint8_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ___data2;
		NullCheck(L_92);
		int32_t L_93 = 1;
		uint8_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___data2;
		NullCheck(L_95);
		int32_t L_96 = 2;
		uint8_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(G_B45_0);
		InterfaceActionInvoker3< String_t*, int32_t, int32_t >::Invoke(6 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiPitchWheel(System.String,System.Int32,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B45_0, L_88, ((int32_t)((int32_t)L_91&((int32_t)15))), ((int32_t)((int32_t)L_94|((int32_t)((int32_t)L_97<<7)))));
	}

IL_01f0:
	{
		// break;
		goto IL_0340;
	}

IL_01f5:
	{
		// rtpMidiEventHandler?.OnMidiSystemExclusive(GetDeviceId(participant), data);
		RuntimeObject* L_98 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_99 = L_98;
		G_B48_0 = L_99;
		if (L_99)
		{
			G_B49_0 = L_99;
			goto IL_0201;
		}
	}
	{
		goto IL_020f;
	}

IL_0201:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_100 = ___participant0;
		String_t* L_101;
		L_101 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_100, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ___data2;
		NullCheck(G_B49_0);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiSystemExclusive(System.String,System.Byte[]) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B49_0, L_101, L_102);
	}

IL_020f:
	{
		// break;
		goto IL_0340;
	}

IL_0214:
	{
		// rtpMidiEventHandler?.OnMidiTimeCodeQuarterFrame(GetDeviceId(participant), data[0]);
		RuntimeObject* L_103 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_104 = L_103;
		G_B52_0 = L_104;
		if (L_104)
		{
			G_B53_0 = L_104;
			goto IL_0220;
		}
	}
	{
		goto IL_0230;
	}

IL_0220:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_105 = ___participant0;
		String_t* L_106;
		L_106 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_105, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = ___data2;
		NullCheck(L_107);
		int32_t L_108 = 0;
		uint8_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(G_B53_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(8 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiTimeCodeQuarterFrame(System.String,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B53_0, L_106, L_109);
	}

IL_0230:
	{
		// break;
		goto IL_0340;
	}

IL_0235:
	{
		// rtpMidiEventHandler?.OnMidiSongPositionPointer(GetDeviceId(participant), data[0] | (data[1] << 7));
		RuntimeObject* L_110 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_111 = L_110;
		G_B56_0 = L_111;
		if (L_111)
		{
			G_B57_0 = L_111;
			goto IL_0241;
		}
	}
	{
		goto IL_0257;
	}

IL_0241:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_112 = ___participant0;
		String_t* L_113;
		L_113 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_112, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = ___data2;
		NullCheck(L_114);
		int32_t L_115 = 0;
		uint8_t L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = ___data2;
		NullCheck(L_117);
		int32_t L_118 = 1;
		uint8_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(G_B57_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(10 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiSongPositionPointer(System.String,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B57_0, L_113, ((int32_t)((int32_t)L_116|((int32_t)((int32_t)L_119<<7)))));
	}

IL_0257:
	{
		// break;
		goto IL_0340;
	}

IL_025c:
	{
		// rtpMidiEventHandler?.OnMidiSongSelect(GetDeviceId(participant), data[0]);
		RuntimeObject* L_120 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_121 = L_120;
		G_B60_0 = L_121;
		if (L_121)
		{
			G_B61_0 = L_121;
			goto IL_0268;
		}
	}
	{
		goto IL_0278;
	}

IL_0268:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_122 = ___participant0;
		String_t* L_123;
		L_123 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_122, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = ___data2;
		NullCheck(L_124);
		int32_t L_125 = 0;
		uint8_t L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(G_B61_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(9 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiSongSelect(System.String,System.Int32) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B61_0, L_123, L_126);
	}

IL_0278:
	{
		// break;
		goto IL_0340;
	}

IL_027d:
	{
		// rtpMidiEventHandler?.OnMidiTuneRequest(GetDeviceId(participant));
		RuntimeObject* L_127 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_128 = L_127;
		G_B64_0 = L_128;
		if (L_128)
		{
			G_B65_0 = L_128;
			goto IL_0289;
		}
	}
	{
		goto IL_0296;
	}

IL_0289:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_129 = ___participant0;
		String_t* L_130;
		L_130 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_129, NULL);
		NullCheck(G_B65_0);
		InterfaceActionInvoker1< String_t* >::Invoke(11 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiTuneRequest(System.String) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B65_0, L_130);
	}

IL_0296:
	{
		// break;
		goto IL_0340;
	}

IL_029b:
	{
		// rtpMidiEventHandler?.OnMidiTimingClock(GetDeviceId(participant));
		RuntimeObject* L_131 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_132 = L_131;
		G_B68_0 = L_132;
		if (L_132)
		{
			G_B69_0 = L_132;
			goto IL_02a7;
		}
	}
	{
		goto IL_02b4;
	}

IL_02a7:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_133 = ___participant0;
		String_t* L_134;
		L_134 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_133, NULL);
		NullCheck(G_B69_0);
		InterfaceActionInvoker1< String_t* >::Invoke(12 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiTimingClock(System.String) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B69_0, L_134);
	}

IL_02b4:
	{
		// break;
		goto IL_0340;
	}

IL_02b9:
	{
		// rtpMidiEventHandler?.OnMidiStart(GetDeviceId(participant));
		RuntimeObject* L_135 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_136 = L_135;
		G_B72_0 = L_136;
		if (L_136)
		{
			G_B73_0 = L_136;
			goto IL_02c5;
		}
	}
	{
		goto IL_02d2;
	}

IL_02c5:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_137 = ___participant0;
		String_t* L_138;
		L_138 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_137, NULL);
		NullCheck(G_B73_0);
		InterfaceActionInvoker1< String_t* >::Invoke(13 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiStart(System.String) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B73_0, L_138);
	}

IL_02d2:
	{
		// break;
		goto IL_0340;
	}

IL_02d4:
	{
		// rtpMidiEventHandler?.OnMidiContinue(GetDeviceId(participant));
		RuntimeObject* L_139 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_140 = L_139;
		G_B76_0 = L_140;
		if (L_140)
		{
			G_B77_0 = L_140;
			goto IL_02e0;
		}
	}
	{
		goto IL_02ed;
	}

IL_02e0:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_141 = ___participant0;
		String_t* L_142;
		L_142 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_141, NULL);
		NullCheck(G_B77_0);
		InterfaceActionInvoker1< String_t* >::Invoke(14 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiContinue(System.String) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B77_0, L_142);
	}

IL_02ed:
	{
		// break;
		goto IL_0340;
	}

IL_02ef:
	{
		// rtpMidiEventHandler?.OnMidiStop(GetDeviceId(participant));
		RuntimeObject* L_143 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_144 = L_143;
		G_B80_0 = L_144;
		if (L_144)
		{
			G_B81_0 = L_144;
			goto IL_02fb;
		}
	}
	{
		goto IL_0308;
	}

IL_02fb:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_145 = ___participant0;
		String_t* L_146;
		L_146 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_145, NULL);
		NullCheck(G_B81_0);
		InterfaceActionInvoker1< String_t* >::Invoke(15 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiStop(System.String) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B81_0, L_146);
	}

IL_0308:
	{
		// break;
		goto IL_0340;
	}

IL_030a:
	{
		// rtpMidiEventHandler?.OnMidiActiveSensing(GetDeviceId(participant));
		RuntimeObject* L_147 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_148 = L_147;
		G_B84_0 = L_148;
		if (L_148)
		{
			G_B85_0 = L_148;
			goto IL_0316;
		}
	}
	{
		goto IL_0323;
	}

IL_0316:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_149 = ___participant0;
		String_t* L_150;
		L_150 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_149, NULL);
		NullCheck(G_B85_0);
		InterfaceActionInvoker1< String_t* >::Invoke(16 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiActiveSensing(System.String) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B85_0, L_150);
	}

IL_0323:
	{
		// break;
		goto IL_0340;
	}

IL_0325:
	{
		// rtpMidiEventHandler?.OnMidiReset(GetDeviceId(participant));
		RuntimeObject* L_151 = __this->___rtpMidiEventHandler_19;
		RuntimeObject* L_152 = L_151;
		G_B88_0 = L_152;
		if (L_152)
		{
			G_B89_0 = L_152;
			goto IL_0331;
		}
	}
	{
		goto IL_033e;
	}

IL_0331:
	{
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_153 = ___participant0;
		String_t* L_154;
		L_154 = RtpMidiSession_GetDeviceId_mE207A5CA37CDA78EBC4F204A0A9FEDC853FA30B9(__this, L_153, NULL);
		NullCheck(G_B89_0);
		InterfaceActionInvoker1< String_t* >::Invoke(17 /* System.Void jp.kshoji.rtpmidi.IRtpMidiEventHandler::OnMidiReset(System.String) */, IRtpMidiEventHandler_t9691C82F73CE86359DD670DF575E8E018F98DF5C_il2cpp_TypeInfo_var, G_B89_0, L_154);
	}

IL_033e:
	{
		// break;
		goto IL_0340;
	}

IL_0340:
	{
		// }
		return;
	}
}
// System.Void jp.kshoji.rtpmidi.RtpMidiSession::ReceivedRtp(jp.kshoji.rtpmidi.Rtp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtpMidiSession_ReceivedRtp_mC2621016A0CA097C6B302A38C4DE125D7D69645E (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 ___rtp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// var participant = GetParticipantBySsrc(rtp.ssrc);
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_0 = ___rtp0;
		int32_t L_1 = L_0.___ssrc_4;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_2;
		L_2 = RtpMidiSession_GetParticipantBySsrc_m9F999D3C20E61DBEB1F94837ADD34B260D3AB0F5(__this, L_1, NULL);
		V_0 = L_2;
		// if (participant != null)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_3 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00b6;
		}
	}
	{
		// if (!participant.doReceiverFeedback)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->___doReceiverFeedback_6;
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// participant.receiverFeedbackStartTime = RtpMidiClock.Ticks();
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		NullCheck(L_8);
		L_8->___receiverFeedbackStartTime_5 = L_9;
		// participant.doReceiverFeedback = true;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_10 = V_0;
		NullCheck(L_10);
		L_10->___doReceiverFeedback_6 = (bool)1;
	}

IL_003d:
	{
		// var offset = rtp.timestamp - participant.OffsetEstimate;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_11 = ___rtp0;
		int32_t L_12 = L_11.___timestamp_3;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_13 = V_0;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = RtpMidiParticipant_get_OffsetEstimate_m49C51370146D2B3AA104E0711B8C861461EABA67_inline(L_13, NULL);
		V_2 = ((int64_t)il2cpp_codegen_subtract(((int64_t)L_12), L_14));
		// var latency = (int)RtpMidiClock.Ticks() - offset;
		il2cpp_codegen_runtime_class_init_inline(RtpMidiClock_t7CA92F2930F73E80558C9F1E965774FB1E50AAF2_il2cpp_TypeInfo_var);
		int64_t L_15;
		L_15 = RtpMidiClock_Ticks_mDBA80F31724AE19E95CC67076E0A8C3B3102A336(NULL);
		int64_t L_16 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_subtract(((int64_t)((int32_t)L_15)), L_16));
		// if (participant.FirstMessageReceived)
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = L_17->___FirstMessageReceived_19;
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_006d;
		}
	}
	{
		// participant.FirstMessageReceived = false;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_20 = V_0;
		NullCheck(L_20);
		L_20->___FirstMessageReceived_19 = (bool)0;
		goto IL_00a9;
	}

IL_006d:
	{
		// var lostPacketCount = rtp.sequenceNr - participant.receiveSequenceNr - 1;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_21 = ___rtp0;
		int16_t L_22 = L_21.___sequenceNr_2;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_23 = V_0;
		NullCheck(L_23);
		int16_t L_24 = L_23->___receiveSequenceNr_8;
		V_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_24)), 1));
		// participant.lostPacketCount = lostPacketCount;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_25 = V_0;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		L_25->___lostPacketCount_9 = L_26;
		// if (lostPacketCount > 0)
		int32_t L_27 = V_6;
		V_7 = (bool)((((int32_t)L_27) > ((int32_t)0))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00a8;
		}
	}
	{
		// exceptionListener?.OnError(RtpMidiExceptionKind.ReceivedPacketsDropped);
		RuntimeObject* L_29 = __this->___exceptionListener_21;
		RuntimeObject* L_30 = L_29;
		G_B7_0 = L_30;
		if (L_30)
		{
			G_B8_0 = L_30;
			goto IL_009f;
		}
	}
	{
		goto IL_00a7;
	}

IL_009f:
	{
		NullCheck(G_B8_0);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void jp.kshoji.rtpmidi.IRtpMidiExceptionListener::OnError(jp.kshoji.rtpmidi.RtpMidiExceptionKind) */, IRtpMidiExceptionListener_t0101676516B61780F75697FB5D63CD8A5D3660A7_il2cpp_TypeInfo_var, G_B8_0, ((int32_t)9));
	}

IL_00a7:
	{
	}

IL_00a8:
	{
	}

IL_00a9:
	{
		// participant.receiveSequenceNr = rtp.sequenceNr;
		RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* L_31 = V_0;
		Rtp_tDD920B74B55BDCFFF0227371BA4AC3F7F9EA9C61 L_32 = ___rtp0;
		int16_t L_33 = L_32.___sequenceNr_2;
		NullCheck(L_31);
		L_31->___receiveSequenceNr_8 = L_33;
	}

IL_00b6:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiInvitation_set_InitiatorToken_m09E8A4EE671B948B6FFDCA55B4E5674E9CD7A441_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CInitiatorTokenU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiInvitation_set_Ssrc_m2391B717BC85EFF69FEA3DE8BE984016A94EC8D2_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CSsrcU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiInvitation_set_SessionName_m78E789399E5C553221B9B5494AD2DE90FADE1C6A_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SessionName { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CSessionNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitation_get_InitiatorToken_m1DC1F78F55A6819BAC626695FEC6FA7A6F4BEA97_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; internal set; }
		int32_t L_0 = __this->___U3CInitiatorTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitation_get_Ssrc_mF075D78E253CE4EC8798F00D529C9568CE5066D6_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; internal set; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RtpMidiInvitation_get_SessionName_m1FFE7B9FF0B26551FED22E8F7C8166215BA11B46_inline (RtpMidiInvitation_t02C744A8EEEDA226EFB84F3B24B2783DE79B6925* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionName { get; internal set; }
		String_t* L_0 = __this->___U3CSessionNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationAccepted_get_InitiatorToken_m38D79DFED5FCBEF713324AAF34F0FB347DF69E28_inline (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; }
		int32_t L_0 = __this->___U3CInitiatorTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationAccepted_get_Ssrc_m1216A1FD588BC8771A058FC0FA281CBD9AEAF3A0_inline (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RtpMidiInvitationAccepted_get_SessionName_mCD25E41B2FD9E0855AF039F325240CD60ABDEB53_inline (RtpMidiInvitationAccepted_tF2ADDB5C3E4DBB8B4A4B98161175CCFFD44185F1* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionName { get; }
		String_t* L_0 = __this->___U3CSessionNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationRejected_get_InitiatorToken_m4E2C63FA156F61A6115C1EBC85C5ABAB0B29698E_inline (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; }
		int32_t L_0 = __this->___U3CInitiatorTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiInvitationRejected_get_Ssrc_mDE98F58DD0732058B6B761E4CE9DD7178C0E1D22_inline (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RtpMidiInvitationRejected_get_SessionName_mA780CAAA4017F4A916FA7FBBEDFDE45BBBE6AF6D_inline (RtpMidiInvitationRejected_t347D761C908F962A7B28603110EFD89C655CE040* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionName { get; }
		String_t* L_0 = __this->___U3CSessionNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiBitrateReceiveLimit_get_Ssrc_mFDA1650FF97499413CE686A094021ED22B5C03CC_inline (RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiBitrateReceiveLimit_get_BitrateLimit_m2500D86E7990624D97B4CCB49F1A287FEBED7974_inline (RtpMidiBitrateReceiveLimit_t2916B803D3121DF1F17232D6A84671586CFBA273* __this, const RuntimeMethod* method) 
{
	{
		// public int BitrateLimit { get; }
		int32_t L_0 = __this->___U3CBitrateLimitU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiSynchronization_set_Ssrc_mE2B6D90DB5D7EA6E28E446351B5ABEAA700274DF_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSsrcU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiSynchronization_set_Count_mB1DD8D16BADDA051B37D11FF4667C954BF44D537_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public byte Count { get; set; }
		uint8_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiSynchronization_set_Timestamps_m69C449C9492225EB5F46D3E591DA05890DF307E4_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___value0, const RuntimeMethod* method) 
{
	{
		// public long[] Timestamps { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___value0;
		__this->___U3CTimestampsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTimestampsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiSynchronization_get_Ssrc_mC050A61728373FA08CA946F02F29793985D81A3D_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; set; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RtpMidiSynchronization_get_Count_m6DC4A2265670427533BDE5D951458E99C15A0D5D_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, const RuntimeMethod* method) 
{
	{
		// public byte Count { get; set; }
		uint8_t L_0 = __this->___U3CCountU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* RtpMidiSynchronization_get_Timestamps_m7654FE456536E3A97E814019F69DDD0D1BAA2396_inline (RtpMidiSynchronization_tABF1936975A5D5988044127B9C47BC62AD01826A* __this, const RuntimeMethod* method) 
{
	{
		// public long[] Timestamps { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___U3CTimestampsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiReceiverFeedback_set_Ssrc_mD2B4C3CF887E8D1A999A883D4D45BE28DF272174_inline (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSsrcU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiReceiverFeedback_set_SequenceNr_mD05BEC315A01B5CD0904FF58A5ECA8C5C091BEED_inline (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	{
		// public short SequenceNr { get; set; }
		int16_t L_0 = ___value0;
		__this->___U3CSequenceNrU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiReceiverFeedback_get_Ssrc_m28EA736EFDCEB9AC4676ECE87C6F2D52503B06CE_inline (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; set; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t RtpMidiReceiverFeedback_get_SequenceNr_mD03B0D8F79903A1A4E9DAE887F301DD043C25E6B_inline (RtpMidiReceiverFeedback_t39A18927FE7252EB5C9138135419CE97F4C9C82E* __this, const RuntimeMethod* method) 
{
	{
		// public short SequenceNr { get; set; }
		int16_t L_0 = __this->___U3CSequenceNrU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiEndSession_get_InitiatorToken_m465A0C1F978ACC955C98107F8C780CE3207DA4A9_inline (RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* __this, const RuntimeMethod* method) 
{
	{
		// public int InitiatorToken { get; }
		int32_t L_0 = __this->___U3CInitiatorTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiEndSession_get_Ssrc_mF86CBC20A92170D9ABF88085AE164A3B91C459CD_inline (RtpMidiEndSession_t23F98E3E42FC3CF957CF867CD3879FF995335FA9* __this, const RuntimeMethod* method) 
{
	{
		// public int Ssrc { get; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____port_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiSession_get_Port_m31BCC9B42C314665019BE60D5C8551879C2C8A86_inline (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	{
		// private int Port { get; }
		int32_t L_0 = __this->___U3CPortU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RtpMidiSession_get_Ssrc_mF2C95C5D90DC5E8F47A1AC8B64D97C29D840BB92_inline (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, const RuntimeMethod* method) 
{
	{
		// private int Ssrc { get; set; }
		int32_t L_0 = __this->___U3CSsrcU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiParticipant_set_Synchronizing_m85239D61ABFC5F3885A669381565911B47B58371_inline (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Synchronizing { get; set; }
		bool L_0 = ___value0;
		__this->___U3CSynchronizingU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiSession_set_Ssrc_m081E8D90233B36C201EB75EEE015BC983D629C42_inline (RtpMidiSession_t53C8747F483568A65D05BDB745A854062F701ADF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private int Ssrc { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSsrcU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* UdpClient_get_Client_m7338E337D9A97F9050FCAD3A29760AB5CA7AFD9A_inline (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___m_ClientSocket_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_connected_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RtpMidiParticipant_get_Synchronizing_mF60EF42DC53BEC43B3DD61D6100A6400B9A7472B_inline (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, const RuntimeMethod* method) 
{
	{
		// public bool Synchronizing { get; set; }
		bool L_0 = __this->___U3CSynchronizingU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RtpMidiParticipant_set_OffsetEstimate_m247AF18F141787C6EA72D9F1D70F96C01963B2F0_inline (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public long OffsetEstimate { get; set; }
		int64_t L_0 = ___value0;
		__this->___U3COffsetEstimateU3Ek__BackingField_20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t RtpMidiParticipant_get_OffsetEstimate_m49C51370146D2B3AA104E0711B8C861461EABA67_inline (RtpMidiParticipant_tDBD01D22E9D93ABC73B220EA497E2645779C12AC* __this, const RuntimeMethod* method) 
{
	{
		// public long OffsetEstimate { get; set; }
		int64_t L_0 = __this->___U3COffsetEstimateU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* LinkedList_1_get_First_mDAB9324E16EF242A9173A9CA992BE8187320D2D8_gshared_inline (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method) 
{
	{
		LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* L_0 = (LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755*)__this->___head_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t LinkedListNode_1_get_Value_m43814CDFD81CC7481EA2B9EC797919CA897F24F3_gshared_inline (LinkedListNode_1_t96BB91586D36629D0BC13BDFE9A4DFBA8A9AF755* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = (uint8_t)__this->___item_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m6418EF7D9896D727A3565E76E451EBA7CBCA5DD9_gshared_inline (LinkedList_1_t669BE4D6413C4CA9CD08E7C29B6A3F971C9AC272* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___count_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = (uint8_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
