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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<AudioSynthesis.Bank.PatchAsset>
struct List_1_t6F2262DF78C9B544318F3F50CA5DF34821159524;
// System.Collections.Generic.List`1<AudioSynthesis.Bank.SampleDataAsset>
struct List_1_tE3753345C4EC75827E7CF356C7F87B37302E7D49;
// System.Collections.Generic.Queue`1<AudioSynthesis.Synthesis.MidiMessage>
struct Queue_1_t23D72F44921EF68A2F5F583BF5E074A4DC9A6FDE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Single[][]
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// AudioSynthesis.Bank.Patches.Patch[]
struct PatchU5BU5D_t3843B3F2E2CF39C3036E988DC23749007BA65879;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// AudioSynthesis.Synthesis.SynthParameters[]
struct SynthParametersU5BU5D_t2389AFB032A3A3B3609853ADD1122AF0298F0EB0;
// AudioSynthesis.Bank.Components.Envelope/EnvelopeStage[]
struct EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB;
// AudioSynthesis.Bank.AssetManager
struct AssetManager_tAB21564C528D6B60DD1BD654C6A9EA9220C69A77;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// AudioSynthesis.Bank.Components.Effects.Chorus
struct Chorus_t09D9FFA17123F18DDCA537E3242D025AE316F992;
// AudioSynthesis.Bank.Descriptors.CustomDescriptor
struct CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// AudioSynthesis.Bank.Components.Effects.Delay
struct Delay_t6C14E1C1CF3FEDC6B1060C60F9BFB0A132CDA60D;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// AudioSynthesis.Bank.Components.Envelope
struct Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812;
// AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor
struct EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38;
// System.Exception
struct Exception_t;
// AudioSynthesis.Bank.Components.Filter
struct Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8;
// AudioSynthesis.Bank.Descriptors.FilterDescriptor
struct FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1;
// AudioSynthesis.Bank.Components.Effects.Flanger
struct Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3;
// AudioSynthesis.Bank.Components.Generators.Generator
struct Generator_tADF163794E3E90EE4A764830F2731836023B4A32;
// AudioSynthesis.Bank.Descriptors.GeneratorDescriptor
struct GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280;
// AudioSynthesis.Bank.Components.Generators.GeneratorParameters
struct GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// AudioSynthesis.Bank.Components.Lfo
struct Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F;
// AudioSynthesis.Bank.Descriptors.LfoDescriptor
struct LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B;
// AudioSynthesis.Bank.PatchBank
struct PatchBank_t8B37E1460C8DBF8808BFFEF2B343644A26D4AAB6;
// AudioSynthesis.Wave.PcmData
struct PcmData_tB54EF39258C17586A65A55E564458B5441164E62;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// AudioSynthesis.Bank.SampleDataAsset
struct SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D;
// AudioSynthesis.Bank.Components.Generators.SampleGenerator
struct SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121;
// AudioSynthesis.Bank.Components.Generators.SawGenerator
struct SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776;
// AudioSynthesis.Bank.Components.Generators.SineGenerator
struct SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D;
// AudioSynthesis.Bank.Components.Generators.SquareGenerator
struct SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// AudioSynthesis.Bank.Components.Generators.TriangleGenerator
struct TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0;
// AudioSynthesis.Synthesis.VoiceManager
struct VoiceManager_t30675FC2CEE74ACAE838F2B7316852E2A303A9BD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AudioSynthesis.Bank.Components.Generators.WhiteNoiseGenerator
struct WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902;
// AudioSynthesis.Bank.Components.Envelope/EnvelopeStage
struct EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007;

IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvelopeStateEnum_tB6B4F5110C9D4598383F13E7F95E94C393C5635D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FilterTypeEnum_t692AA97999B34CB5F44B7D2EEE6B9213C544D794_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratorStateEnum_t412ACB826544CF9E8894152D4D00E0E0A3DD3D0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LfoStateEnum_t4E4FBB4DED94B846AA4475006DA0653F7C42C3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoopModeEnum_tA9D16CFCA909C691F62AC5154D4178F3854D77EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Synthesizer_t843688EC8CDE0AC21C6EBB600F197D38F0A93554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveformEnum_tDD161CE5DE46ADF6DB8E268B5D3CB6C9D7D0C3F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5621636841427FA307015FCDA5C2D284950EE4;
IL2CPP_EXTERN_C String_t* _stringLiteral14C488114FBBE9A74E618082CC97D3D75E12F952;
IL2CPP_EXTERN_C String_t* _stringLiteral15B905E20BF1937BEB7B6A0655224817BE45D615;
IL2CPP_EXTERN_C String_t* _stringLiteral172D02FEDB21D861AEC79893A831ECB196760398;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8E4FF5AC4045E7DBBD4E0E205869393964BA42;
IL2CPP_EXTERN_C String_t* _stringLiteral1E0549A4765B89BF168C0E22B892D3A200FFDD97;
IL2CPP_EXTERN_C String_t* _stringLiteral1E8355B57CD722A6917A10DCB51F2D1288B8AFD9;
IL2CPP_EXTERN_C String_t* _stringLiteral2164C309B189E1D59968BD1503C521033172FEA6;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral26F3519BA0E799C6E902BFAECA592B51547C2AE6;
IL2CPP_EXTERN_C String_t* _stringLiteral2960CB8A8A3623978AF0B030510E5DE7DE34BE46;
IL2CPP_EXTERN_C String_t* _stringLiteral2A2AE9AE1BECEBC8112125EB150DB6098A9CFE1A;
IL2CPP_EXTERN_C String_t* _stringLiteral2D0776803EAB54D3571A885890D7D69F6A4DFFE3;
IL2CPP_EXTERN_C String_t* _stringLiteral2F6199971D948E24B53ABA08157EB49E99DA62A1;
IL2CPP_EXTERN_C String_t* _stringLiteral3447B51C509C040B9552CA369519E7157E7BE3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB881CFDC984BDC1260D5D51702D1454EFC6C68;
IL2CPP_EXTERN_C String_t* _stringLiteral3D037CE54FD9FD36517234C102DC8F2CF557ED8D;
IL2CPP_EXTERN_C String_t* _stringLiteral3F999CEC9AF3C863EBE016150185505672D39565;
IL2CPP_EXTERN_C String_t* _stringLiteral43A69411449A9B4614D8ACE4727C4E7D33BED661;
IL2CPP_EXTERN_C String_t* _stringLiteral465F31FEE3CEB14806FFA1845BE184A11FDD1B16;
IL2CPP_EXTERN_C String_t* _stringLiteral4870629158021B5B3B07A48F646C92944311E6B3;
IL2CPP_EXTERN_C String_t* _stringLiteral4A86CBBCE2260DF19FA3434F545D507101BEC041;
IL2CPP_EXTERN_C String_t* _stringLiteral4BFDDF86F0C70D5E1AF3DB66C11B9612D9FA6DF0;
IL2CPP_EXTERN_C String_t* _stringLiteral4C54423E0C8F90A2630DB27970C8B3C0A3E4FEF5;
IL2CPP_EXTERN_C String_t* _stringLiteral4EF1F726DBB73B6CD07B35DDC7AA1ABFE9133AE8;
IL2CPP_EXTERN_C String_t* _stringLiteral512DAFAD7D40E93D1E96F5FAA3ADB7BEF586A1E7;
IL2CPP_EXTERN_C String_t* _stringLiteral53749BB024072974CA98CD1D4ED1EBC4DC13C60C;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral58EA9816B9C590B0A28979EB361531108047E405;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5DBF075CA37C261045FF7DC9A458137CEE6C39BB;
IL2CPP_EXTERN_C String_t* _stringLiteral6811A797CBFB88912FDAFDC30F0C9B0EF7499F1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6AFB6DC3E62A90A45D0F193AED6DF17BE1748959;
IL2CPP_EXTERN_C String_t* _stringLiteral6BFD7BA3F02AE5E6C4368960EBBF95509912E86B;
IL2CPP_EXTERN_C String_t* _stringLiteral7122A6F5A686007A1E2503B43675564557CDF7BA;
IL2CPP_EXTERN_C String_t* _stringLiteral72D721749A61993094E0FBA1534288C6D2BC206C;
IL2CPP_EXTERN_C String_t* _stringLiteral7402ADEA3CC253155752F9EDB1399DB87D680206;
IL2CPP_EXTERN_C String_t* _stringLiteral75988F756BCA11D27990566941F697F56045D8D5;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6C281E4E4C23EE08784A13DA3618CE7E7EFD6F;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F957464E9A75AEDCD2F037413702E8278E8153F;
IL2CPP_EXTERN_C String_t* _stringLiteral84A6BCDED14B5459B04CF00E16083D9581780EB4;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0;
IL2CPP_EXTERN_C String_t* _stringLiteral87FDE86C4B7EA95E604660BFB8348E374ADA193A;
IL2CPP_EXTERN_C String_t* _stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E;
IL2CPP_EXTERN_C String_t* _stringLiteral8EA4067A0F1DCFC31F8AE691C45CB42539522160;
IL2CPP_EXTERN_C String_t* _stringLiteral8F67017AA65C39B29179ECA01EF024B32B658D8F;
IL2CPP_EXTERN_C String_t* _stringLiteral8FECFF1A309DF4CB72C61ADFFE054E290760D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral9464E6803D4CA748A54F5908D50D99EA9A45D949;
IL2CPP_EXTERN_C String_t* _stringLiteral946C66BDF7790C4502BC0CE3B36FFE5731EF0E0D;
IL2CPP_EXTERN_C String_t* _stringLiteral97B71553CBE50703007E5C7830C07CC0067B297F;
IL2CPP_EXTERN_C String_t* _stringLiteral99CFB8847C7D5638284937E5B0B7965A8CBF4CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A2A77A240508FD0E651A645B91A2F3F073A0A7;
IL2CPP_EXTERN_C String_t* _stringLiteralAA596617B91E7D9DFD1986C0810A160ABB5CEA33;
IL2CPP_EXTERN_C String_t* _stringLiteralAD0A176270C47E1C4123185A66A98B3D6B58E450;
IL2CPP_EXTERN_C String_t* _stringLiteralAD88ECBD135D7E7861EE52F538BEC1F9767085EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA;
IL2CPP_EXTERN_C String_t* _stringLiteralBCCC05F8DF8C510CDF184E30F3EF8C24A0BDA929;
IL2CPP_EXTERN_C String_t* _stringLiteralC354370C067B8882EE34D44D5E7998EBD843CA90;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC43C0457A0A1AE6192059195777CB2E2DF3248;
IL2CPP_EXTERN_C String_t* _stringLiteralCD42E43D5D64914D44A5E748772BF3FBFDFCE893;
IL2CPP_EXTERN_C String_t* _stringLiteralDE135694D353D9C51F92C18C26311D7B91975F27;
IL2CPP_EXTERN_C String_t* _stringLiteralDE65ED40B86FCD609A7E98735C6D0260815A861E;
IL2CPP_EXTERN_C String_t* _stringLiteralE007B17B06CB84F1B41E40F63F887BC77704FA27;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FE212B2A65F41DA135B3E0ED1EE893F53A20A7;
IL2CPP_EXTERN_C String_t* _stringLiteralE8D604EA97ACA8EB403D281FB23304D3B2338E81;
IL2CPP_EXTERN_C String_t* _stringLiteralE98AD5931AB31D6C39FC8F20166DA8333ED37601;
IL2CPP_EXTERN_C String_t* _stringLiteralEA3F66075DE0843717AA97C350531BD73B74F403;
IL2CPP_EXTERN_C String_t* _stringLiteralEF350BE090444387C1BF25D0C52F334434451C94;
IL2CPP_EXTERN_C String_t* _stringLiteralEF49A70C9B852B75416510EF51C65CE9602339B3;
IL2CPP_EXTERN_C String_t* _stringLiteralEFB293E0EE1046130E928744D03741ADD0AB4301;
IL2CPP_EXTERN_C String_t* _stringLiteralF09192DD2434D6C873539AA4955F9D7D0C4520A9;
IL2CPP_EXTERN_C String_t* _stringLiteralF26B4D25DFC904CC895873A926FD57589C329C14;
IL2CPP_EXTERN_C String_t* _stringLiteralF31B2E97B2E615C20572BA5D3968860ED3E49693;
IL2CPP_EXTERN_C String_t* _stringLiteralF322ECBFF4A42EACC2AFA92B3FD57721A0193059;
IL2CPP_EXTERN_C String_t* _stringLiteralF3995DB1F55A07A166A1319A775266407055AD20;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3EB129E803C790D1A6A54812F108FC137DDD3DA;
IL2CPP_EXTERN_C String_t* _stringLiteralF5D967938B4A9813CAFB5F1E8A223984F33F7DFE;
IL2CPP_EXTERN_C const RuntimeMethod* CustomDescriptor_Read_m7A6F68E5F3BD3CB0837866C700B9F2CF0B4C1879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomDescriptor_Write_m61D35039B0FCC9F5BAA39056D5436468D918E918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnvelopeDescriptor_GetGraphID_m34D019EF3998F8D395A3966555E1D9FD54AE9AB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FilterDescriptor_GetFilterType_mBBA9BFAD9BE4BA4452DDC51F6CEC94148E69FB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratorDescriptor_ToGenerator_m71D8962435208AC33C4FFBE708E20E00CA5D795D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Generator_GetInterpolationFromString_m6634FB75C6E3DE5C3BCC5B2BD985B4ABD105AE53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Generator_GetLoopModeFromString_mE1CD369010064FFB9D12CA01E2AB3EAFC19A9140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Generator_GetWaveformFromString_mA0EF1D2AA607F6E9B734A8587B23B384A39A646D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LfoDescriptor_GetWaveform_m8A76C55C4D5E7C38CB9A606ECA1A1DD276400CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleGenerator__ctor_mEC77F49216C38D5DA3B5F03C8DC6B688E7AD5ABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m459CB3E04D560D6A8203CDF4B28CB72F0950FF36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_get_Count_mCE2AC3510DE63C21A57311CBF6855FFAB0C92D60_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
};
struct Il2CppArrayBounds;

// AudioSynthesis.Bank.AssetManager
struct AssetManager_tAB21564C528D6B60DD1BD654C6A9EA9220C69A77  : public RuntimeObject
{
	// System.Collections.Generic.List`1<AudioSynthesis.Bank.PatchAsset> AudioSynthesis.Bank.AssetManager::patchAssets
	List_1_t6F2262DF78C9B544318F3F50CA5DF34821159524* ___patchAssets_0;
	// System.Collections.Generic.List`1<AudioSynthesis.Bank.SampleDataAsset> AudioSynthesis.Bank.AssetManager::sampleAssets
	List_1_tE3753345C4EC75827E7CF356C7F87B37302E7D49* ___sampleAssets_1;
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

// AudioSynthesis.Bank.Descriptors.CustomDescriptor
struct CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213  : public RuntimeObject
{
	// System.String AudioSynthesis.Bank.Descriptors.CustomDescriptor::id
	String_t* ___id_0;
	// System.Int32 AudioSynthesis.Bank.Descriptors.CustomDescriptor::size
	int32_t ___size_1;
	// System.Object[] AudioSynthesis.Bank.Descriptors.CustomDescriptor::objs
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs_2;
};

// AudioSynthesis.Bank.Components.Effects.Delay
struct Delay_t6C14E1C1CF3FEDC6B1060C60F9BFB0A132CDA60D  : public RuntimeObject
{
	// System.Single[] AudioSynthesis.Bank.Components.Effects.Delay::buffer1
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___buffer1_0;
	// System.Single[] AudioSynthesis.Bank.Components.Effects.Delay::buffer2
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___buffer2_1;
	// System.Int32 AudioSynthesis.Bank.Components.Effects.Delay::position1
	int32_t ___position1_2;
	// System.Int32 AudioSynthesis.Bank.Components.Effects.Delay::position2
	int32_t ___position2_3;
};

// AudioSynthesis.Bank.Components.Envelope
struct Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812  : public RuntimeObject
{
	// AudioSynthesis.Bank.Components.EnvelopeStateEnum AudioSynthesis.Bank.Components.Envelope::envState
	int32_t ___envState_0;
	// AudioSynthesis.Bank.Components.Envelope/EnvelopeStage[] AudioSynthesis.Bank.Components.Envelope::stages
	EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* ___stages_1;
	// AudioSynthesis.Bank.Components.Envelope/EnvelopeStage AudioSynthesis.Bank.Components.Envelope::stage
	EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* ___stage_2;
	// System.Int32 AudioSynthesis.Bank.Components.Envelope::index
	int32_t ___index_3;
	// System.Single AudioSynthesis.Bank.Components.Envelope::value
	float ___value_4;
	// System.Single AudioSynthesis.Bank.Components.Envelope::depth
	float ___depth_5;
};

// AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor
struct EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38  : public RuntimeObject
{
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::DelayTime
	float ___DelayTime_2;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::AttackTime
	float ___AttackTime_3;
	// System.Int16 AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::AttackGraph
	int16_t ___AttackGraph_4;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::HoldTime
	float ___HoldTime_5;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::DecayTime
	float ___DecayTime_6;
	// System.Int16 AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::DecayGraph
	int16_t ___DecayGraph_7;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::SustainTime
	float ___SustainTime_8;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::ReleaseTime
	float ___ReleaseTime_9;
	// System.Int16 AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::ReleaseGraph
	int16_t ___ReleaseGraph_10;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::SustainLevel
	float ___SustainLevel_11;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::PeakLevel
	float ___PeakLevel_12;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::StartLevel
	float ___StartLevel_13;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Depth
	float ___Depth_14;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Vel2Delay
	float ___Vel2Delay_15;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Vel2Attack
	float ___Vel2Attack_16;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Vel2Hold
	float ___Vel2Hold_17;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Vel2Decay
	float ___Vel2Decay_18;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Vel2Sustain
	float ___Vel2Sustain_19;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Vel2Release
	float ___Vel2Release_20;
	// System.Single AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Vel2Depth
	float ___Vel2Depth_21;
};

// AudioSynthesis.Bank.Components.Filter
struct Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8  : public RuntimeObject
{
	// AudioSynthesis.Bank.Components.FilterTypeEnum AudioSynthesis.Bank.Components.Filter::filterType
	int32_t ___filterType_0;
	// System.Single AudioSynthesis.Bank.Components.Filter::a1
	float ___a1_1;
	// System.Single AudioSynthesis.Bank.Components.Filter::a2
	float ___a2_2;
	// System.Single AudioSynthesis.Bank.Components.Filter::b1
	float ___b1_3;
	// System.Single AudioSynthesis.Bank.Components.Filter::b2
	float ___b2_4;
	// System.Single AudioSynthesis.Bank.Components.Filter::m1
	float ___m1_5;
	// System.Single AudioSynthesis.Bank.Components.Filter::m2
	float ___m2_6;
	// System.Single AudioSynthesis.Bank.Components.Filter::m3
	float ___m3_7;
	// System.Double AudioSynthesis.Bank.Components.Filter::cutOff
	double ___cutOff_8;
	// System.Double AudioSynthesis.Bank.Components.Filter::resonance
	double ___resonance_9;
	// System.Boolean AudioSynthesis.Bank.Components.Filter::coeffUpdateRequired
	bool ___coeffUpdateRequired_10;
};

// AudioSynthesis.Bank.Descriptors.FilterDescriptor
struct FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1  : public RuntimeObject
{
	// AudioSynthesis.Bank.Components.FilterTypeEnum AudioSynthesis.Bank.Descriptors.FilterDescriptor::FilterMethod
	int32_t ___FilterMethod_2;
	// System.Single AudioSynthesis.Bank.Descriptors.FilterDescriptor::CutOff
	float ___CutOff_3;
	// System.Single AudioSynthesis.Bank.Descriptors.FilterDescriptor::Resonance
	float ___Resonance_4;
	// System.Int16 AudioSynthesis.Bank.Descriptors.FilterDescriptor::RootKey
	int16_t ___RootKey_5;
	// System.Int16 AudioSynthesis.Bank.Descriptors.FilterDescriptor::KeyTrack
	int16_t ___KeyTrack_6;
	// System.Int16 AudioSynthesis.Bank.Descriptors.FilterDescriptor::VelTrack
	int16_t ___VelTrack_7;
};

// AudioSynthesis.Bank.Components.Effects.Flanger
struct Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3  : public RuntimeObject
{
	// AudioSynthesis.Bank.Components.Lfo AudioSynthesis.Bank.Components.Effects.Flanger::lfo
	Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* ___lfo_0;
	// System.Single AudioSynthesis.Bank.Components.Effects.Flanger::fBack
	float ___fBack_1;
	// System.Single AudioSynthesis.Bank.Components.Effects.Flanger::wMix
	float ___wMix_2;
	// System.Single AudioSynthesis.Bank.Components.Effects.Flanger::dMix
	float ___dMix_3;
	// System.Int32 AudioSynthesis.Bank.Components.Effects.Flanger::baseDelay
	int32_t ___baseDelay_4;
	// System.Int32 AudioSynthesis.Bank.Components.Effects.Flanger::minDelay
	int32_t ___minDelay_5;
	// System.Single[] AudioSynthesis.Bank.Components.Effects.Flanger::inputBuffer1
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBuffer1_6;
	// System.Single[] AudioSynthesis.Bank.Components.Effects.Flanger::outputBuffer1
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBuffer1_7;
	// System.Int32 AudioSynthesis.Bank.Components.Effects.Flanger::position1
	int32_t ___position1_8;
	// System.Single[] AudioSynthesis.Bank.Components.Effects.Flanger::inputBuffer2
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBuffer2_9;
	// System.Single[] AudioSynthesis.Bank.Components.Effects.Flanger::outputBuffer2
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBuffer2_10;
	// System.Int32 AudioSynthesis.Bank.Components.Effects.Flanger::position2
	int32_t ___position2_11;
};

// AudioSynthesis.Bank.Components.Generators.Generator
struct Generator_tADF163794E3E90EE4A764830F2731836023B4A32  : public RuntimeObject
{
	// AudioSynthesis.Bank.Components.LoopModeEnum AudioSynthesis.Bank.Components.Generators.Generator::loopMethod
	int32_t ___loopMethod_4;
	// System.Double AudioSynthesis.Bank.Components.Generators.Generator::loopStart
	double ___loopStart_5;
	// System.Double AudioSynthesis.Bank.Components.Generators.Generator::loopEnd
	double ___loopEnd_6;
	// System.Double AudioSynthesis.Bank.Components.Generators.Generator::start
	double ___start_7;
	// System.Double AudioSynthesis.Bank.Components.Generators.Generator::end
	double ___end_8;
	// System.Double AudioSynthesis.Bank.Components.Generators.Generator::startOffset
	double ___startOffset_9;
	// System.Double AudioSynthesis.Bank.Components.Generators.Generator::genPeriod
	double ___genPeriod_10;
	// System.Double AudioSynthesis.Bank.Components.Generators.Generator::freq
	double ___freq_11;
	// System.Int16 AudioSynthesis.Bank.Components.Generators.Generator::root
	int16_t ___root_12;
	// System.Int16 AudioSynthesis.Bank.Components.Generators.Generator::noteTrack
	int16_t ___noteTrack_13;
	// System.Int16 AudioSynthesis.Bank.Components.Generators.Generator::velTrack
	int16_t ___velTrack_14;
	// System.Int16 AudioSynthesis.Bank.Components.Generators.Generator::tuneCents
	int16_t ___tuneCents_15;
};

struct Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields
{
	// AudioSynthesis.Bank.Components.Generators.SineGenerator AudioSynthesis.Bank.Components.Generators.Generator::DefaultSine
	SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* ___DefaultSine_0;
	// AudioSynthesis.Bank.Components.Generators.SawGenerator AudioSynthesis.Bank.Components.Generators.Generator::DefaultSaw
	SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776* ___DefaultSaw_1;
	// AudioSynthesis.Bank.Components.Generators.SquareGenerator AudioSynthesis.Bank.Components.Generators.Generator::DefaultSquare
	SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41* ___DefaultSquare_2;
	// AudioSynthesis.Bank.Components.Generators.TriangleGenerator AudioSynthesis.Bank.Components.Generators.Generator::DefaultTriangle
	TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0* ___DefaultTriangle_3;
};

// AudioSynthesis.Bank.Descriptors.GeneratorDescriptor
struct GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280  : public RuntimeObject
{
	// AudioSynthesis.Bank.Components.LoopModeEnum AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::LoopMethod
	int32_t ___LoopMethod_2;
	// AudioSynthesis.Bank.Components.WaveformEnum AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::SamplerType
	int32_t ___SamplerType_3;
	// System.String AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::AssetName
	String_t* ___AssetName_4;
	// System.Double AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::EndPhase
	double ___EndPhase_5;
	// System.Double AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::StartPhase
	double ___StartPhase_6;
	// System.Double AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::LoopEndPhase
	double ___LoopEndPhase_7;
	// System.Double AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::LoopStartPhase
	double ___LoopStartPhase_8;
	// System.Double AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::Offset
	double ___Offset_9;
	// System.Double AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::Period
	double ___Period_10;
	// System.Int16 AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::Rootkey
	int16_t ___Rootkey_11;
	// System.Int16 AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::KeyTrack
	int16_t ___KeyTrack_12;
	// System.Int16 AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::VelTrack
	int16_t ___VelTrack_13;
	// System.Int16 AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::Tune
	int16_t ___Tune_14;
};

// AudioSynthesis.Bank.Components.Generators.GeneratorParameters
struct GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF  : public RuntimeObject
{
	// System.Double AudioSynthesis.Bank.Components.Generators.GeneratorParameters::phase
	double ___phase_0;
	// System.Double AudioSynthesis.Bank.Components.Generators.GeneratorParameters::currentStart
	double ___currentStart_1;
	// System.Double AudioSynthesis.Bank.Components.Generators.GeneratorParameters::currentEnd
	double ___currentEnd_2;
	// AudioSynthesis.Bank.Components.GeneratorStateEnum AudioSynthesis.Bank.Components.Generators.GeneratorParameters::currentState
	int32_t ___currentState_3;
};

// AudioSynthesis.Bank.Components.Lfo
struct Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F  : public RuntimeObject
{
	// AudioSynthesis.Bank.Components.LfoStateEnum AudioSynthesis.Bank.Components.Lfo::lfoState
	int32_t ___lfoState_0;
	// System.Double AudioSynthesis.Bank.Components.Lfo::phase
	double ___phase_1;
	// System.Double AudioSynthesis.Bank.Components.Lfo::value
	double ___value_2;
	// System.Double AudioSynthesis.Bank.Components.Lfo::increment
	double ___increment_3;
	// System.Double AudioSynthesis.Bank.Components.Lfo::frequency
	double ___frequency_4;
	// System.Double AudioSynthesis.Bank.Components.Lfo::depth
	double ___depth_5;
	// System.Int32 AudioSynthesis.Bank.Components.Lfo::delayTime
	int32_t ___delayTime_6;
	// AudioSynthesis.Bank.Components.Generators.Generator AudioSynthesis.Bank.Components.Lfo::generator
	Generator_tADF163794E3E90EE4A764830F2731836023B4A32* ___generator_7;
};

// AudioSynthesis.Bank.Descriptors.LfoDescriptor
struct LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B  : public RuntimeObject
{
	// System.Single AudioSynthesis.Bank.Descriptors.LfoDescriptor::DelayTime
	float ___DelayTime_2;
	// System.Single AudioSynthesis.Bank.Descriptors.LfoDescriptor::Frequency
	float ___Frequency_3;
	// System.Single AudioSynthesis.Bank.Descriptors.LfoDescriptor::Depth
	float ___Depth_4;
	// AudioSynthesis.Bank.Components.Generators.Generator AudioSynthesis.Bank.Descriptors.LfoDescriptor::Generator
	Generator_tADF163794E3E90EE4A764830F2731836023B4A32* ___Generator_5;
};

// AudioSynthesis.Wave.PcmData
struct PcmData_tB54EF39258C17586A65A55E564458B5441164E62  : public RuntimeObject
{
	// System.Byte[] AudioSynthesis.Wave.PcmData::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_0;
	// System.Byte AudioSynthesis.Wave.PcmData::bytes
	uint8_t ___bytes_1;
	// System.Int32 AudioSynthesis.Wave.PcmData::length
	int32_t ___length_2;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// AudioSynthesis.Bank.SampleDataAsset
struct SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D  : public RuntimeObject
{
	// System.String AudioSynthesis.Bank.SampleDataAsset::assetName
	String_t* ___assetName_0;
	// System.Int32 AudioSynthesis.Bank.SampleDataAsset::audioChannels
	int32_t ___audioChannels_1;
	// System.Int32 AudioSynthesis.Bank.SampleDataAsset::sampleRate
	int32_t ___sampleRate_2;
	// System.Int16 AudioSynthesis.Bank.SampleDataAsset::rootKey
	int16_t ___rootKey_3;
	// System.Int16 AudioSynthesis.Bank.SampleDataAsset::tune
	int16_t ___tune_4;
	// System.Double AudioSynthesis.Bank.SampleDataAsset::start
	double ___start_5;
	// System.Double AudioSynthesis.Bank.SampleDataAsset::end
	double ___end_6;
	// System.Double AudioSynthesis.Bank.SampleDataAsset::loopStart
	double ___loopStart_7;
	// System.Double AudioSynthesis.Bank.SampleDataAsset::loopEnd
	double ___loopEnd_8;
	// AudioSynthesis.Wave.PcmData AudioSynthesis.Bank.SampleDataAsset::sampleData
	PcmData_tB54EF39258C17586A65A55E564458B5441164E62* ___sampleData_9;
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

// AudioSynthesis.Synthesis.Synthesizer
struct Synthesizer_t843688EC8CDE0AC21C6EBB600F197D38F0A93554  : public RuntimeObject
{
	// System.Single[] AudioSynthesis.Synthesis.Synthesizer::sampleBuffer
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sampleBuffer_17;
	// AudioSynthesis.Synthesis.VoiceManager AudioSynthesis.Synthesis.Synthesizer::voiceManager
	VoiceManager_t30675FC2CEE74ACAE838F2B7316852E2A303A9BD* ___voiceManager_18;
	// System.Int32 AudioSynthesis.Synthesis.Synthesizer::audioChannels
	int32_t ___audioChannels_19;
	// System.Boolean AudioSynthesis.Synthesis.Synthesizer::littleEndian
	bool ___littleEndian_20;
	// AudioSynthesis.Bank.PatchBank AudioSynthesis.Synthesis.Synthesizer::bank
	PatchBank_t8B37E1460C8DBF8808BFFEF2B343644A26D4AAB6* ___bank_21;
	// System.Int32 AudioSynthesis.Synthesis.Synthesizer::sampleRate
	int32_t ___sampleRate_22;
	// System.Single AudioSynthesis.Synthesis.Synthesizer::mainVolume
	float ___mainVolume_23;
	// System.Single AudioSynthesis.Synthesis.Synthesizer::synthGain
	float ___synthGain_24;
	// System.Int32 AudioSynthesis.Synthesis.Synthesizer::microBufferSize
	int32_t ___microBufferSize_25;
	// System.Int32 AudioSynthesis.Synthesis.Synthesizer::microBufferCount
	int32_t ___microBufferCount_26;
	// AudioSynthesis.Synthesis.SynthParameters[] AudioSynthesis.Synthesis.Synthesizer::synthChannels
	SynthParametersU5BU5D_t2389AFB032A3A3B3609853ADD1122AF0298F0EB0* ___synthChannels_27;
	// System.Collections.Generic.Queue`1<AudioSynthesis.Synthesis.MidiMessage> AudioSynthesis.Synthesis.Synthesizer::midiEventQueue
	Queue_1_t23D72F44921EF68A2F5F583BF5E074A4DC9A6FDE* ___midiEventQueue_28;
	// System.Int32[] AudioSynthesis.Synthesis.Synthesizer::midiEventCounts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___midiEventCounts_29;
	// AudioSynthesis.Bank.Patches.Patch[] AudioSynthesis.Synthesis.Synthesizer::layerList
	PatchU5BU5D_t3843B3F2E2CF39C3036E988DC23749007BA65879* ___layerList_30;
};

struct Synthesizer_t843688EC8CDE0AC21C6EBB600F197D38F0A93554_StaticFields
{
	// AudioSynthesis.Bank.Components.InterpolationEnum AudioSynthesis.Synthesis.Synthesizer::InterpolationMode
	int32_t ___InterpolationMode_0;
};

// AudioSynthesis.Util.Tables
struct Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62  : public RuntimeObject
{
};

struct Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_StaticFields
{
	// System.Single[][] AudioSynthesis.Util.Tables::EnvelopeTables
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___EnvelopeTables_0;
	// System.Double[] AudioSynthesis.Util.Tables::SemitoneTable
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___SemitoneTable_1;
	// System.Double[] AudioSynthesis.Util.Tables::CentTable
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___CentTable_2;
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

// AudioSynthesis.Bank.Components.Envelope/EnvelopeStage
struct EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007  : public RuntimeObject
{
	// System.Int32 AudioSynthesis.Bank.Components.Envelope/EnvelopeStage::time
	int32_t ___time_0;
	// System.Single[] AudioSynthesis.Bank.Components.Envelope/EnvelopeStage::graph
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___graph_1;
	// System.Single AudioSynthesis.Bank.Components.Envelope/EnvelopeStage::scale
	float ___scale_2;
	// System.Single AudioSynthesis.Bank.Components.Envelope/EnvelopeStage::offset
	float ___offset_3;
	// System.Boolean AudioSynthesis.Bank.Components.Envelope/EnvelopeStage::reverse
	bool ___reverse_4;
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

// AudioSynthesis.Bank.Components.Effects.Chorus
struct Chorus_t09D9FFA17123F18DDCA537E3242D025AE316F992  : public Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// AudioSynthesis.Bank.Components.Generators.SampleGenerator
struct SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121  : public Generator_tADF163794E3E90EE4A764830F2731836023B4A32
{
	// AudioSynthesis.Wave.PcmData AudioSynthesis.Bank.Components.Generators.SampleGenerator::data
	PcmData_tB54EF39258C17586A65A55E564458B5441164E62* ___data_16;
};

// AudioSynthesis.Bank.Components.Generators.SawGenerator
struct SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776  : public Generator_tADF163794E3E90EE4A764830F2731836023B4A32
{
};

// AudioSynthesis.Bank.Components.Generators.SineGenerator
struct SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D  : public Generator_tADF163794E3E90EE4A764830F2731836023B4A32
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// AudioSynthesis.Bank.Components.Generators.SquareGenerator
struct SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41  : public Generator_tADF163794E3E90EE4A764830F2731836023B4A32
{
};

// AudioSynthesis.Bank.Components.Generators.TriangleGenerator
struct TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0  : public Generator_tADF163794E3E90EE4A764830F2731836023B4A32
{
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

// AudioSynthesis.Bank.Components.Generators.WhiteNoiseGenerator
struct WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902  : public Generator_tADF163794E3E90EE4A764830F2731836023B4A32
{
};

struct WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_StaticFields
{
	// System.Random AudioSynthesis.Bank.Components.Generators.WhiteNoiseGenerator::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_16;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D28_t99EFD8FFE334E68DD967684842F1827E3CD65AC0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t99EFD8FFE334E68DD967684842F1827E3CD65AC0__padding[28];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t40A46EEC17BD62C03CF1D7DACB9197747A965396  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t40A46EEC17BD62C03CF1D7DACB9197747A965396_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::DC68A26D0DEADB81F96E98AAE4BA1ABC37C0124F
	__StaticArrayInitTypeSizeU3D28_t99EFD8FFE334E68DD967684842F1827E3CD65AC0 ___DC68A26D0DEADB81F96E98AAE4BA1ABC37C0124F_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// AudioSynthesis.Bank.Components.Envelope/EnvelopeStage[]
struct EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB  : public RuntimeArray
{
	ALIGN_FIELD (8) EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* m_Items[1];

	inline EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Single[][]
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4  : public RuntimeArray
{
	ALIGN_FIELD (8) SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* m_Items[1];

	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m8138319201D267998400C7759D4EA510C591587C_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m877ED0CB6A05E77E01BE0B87ADB53084E26B9FF7_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int16 System.Int16::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Byte System.Byte::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___s0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
inline ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::get_Count()
inline int32_t ValueCollection_get_Count_mCE2AC3510DE63C21A57311CBF6855FFAB0C92D60 (ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E*, const RuntimeMethod*))ValueCollection_get_Count_m8138319201D267998400C7759D4EA510C591587C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::CopyTo(TValue[],System.Int32)
inline void ValueCollection_CopyTo_m459CB3E04D560D6A8203CDF4B28CB72F0950FF36 (ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))ValueCollection_CopyTo_m877ED0CB6A05E77E01BE0B87ADB53084E26B9FF7_gshared)(__this, ___array0, ___index1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String AudioSynthesis.Util.IOHelper::Read8BitString(System.IO.BinaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOHelper_Read8BitString_m5D33C73A6175EEFA160688D635EE9B6AAB1CF3B6 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void AudioSynthesis.Util.IOHelper::Write8BitString(System.IO.BinaryWriter,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOHelper_Write8BitString_m51DA4CE8B4F479414F32184B29DF6C18258B7ABE (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, String_t* ___str1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::ApplyDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDescriptor_ApplyDefault_m24BC00DADF60264D70D4BE872608A58AEC68C6F4 (EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF5D3E9C8845C573F909CCF6B26DBD06653FC39E7 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int16 AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::GetGraphID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnvelopeDescriptor_GetGraphID_m34D019EF3998F8D395A3966555E1D9FD54AE9AB0 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::CheckValidParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDescriptor_CheckValidParameters_m18664AA7F67C83A56DA88A2812BD2DFE8969DCDF (EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* __this, const RuntimeMethod* method) ;
// System.Single AudioSynthesis.Synthesis.SynthHelper::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SynthHelper_Clamp_mD46B99EDF04D8B5DF7A04439898FD1FFBD5ECD31 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Descriptors.FilterDescriptor::ApplyDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterDescriptor_ApplyDefault_mBBFE0617BE8AF96109D84DEC0129C2A9836E095A (FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* __this, const RuntimeMethod* method) ;
// AudioSynthesis.Bank.Components.FilterTypeEnum AudioSynthesis.Bank.Descriptors.FilterDescriptor::GetFilterType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FilterDescriptor_GetFilterType_mBBA9BFAD9BE4BA4452DDC51F6CEC94148E69FB87 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Descriptors.FilterDescriptor::CheckValidParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterDescriptor_CheckValidParameters_mB9CC8346CD646959A53EAC7B4C3F2AA5C322FCA8 (FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* __this, const RuntimeMethod* method) ;
// System.Int16 AudioSynthesis.Synthesis.SynthHelper::Clamp(System.Int16,System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t SynthHelper_Clamp_m559B8CA6EC1454AC68BE6782197D239D13E04D63 (int16_t ___value0, int16_t ___min1, int16_t ___max2, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::ApplyDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDescriptor_ApplyDefault_mFE960F6F66365AA36F27588ACC4BCCC63655037B (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* __this, const RuntimeMethod* method) ;
// AudioSynthesis.Bank.Components.LoopModeEnum AudioSynthesis.Bank.Components.Generators.Generator::GetLoopModeFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Generator_GetLoopModeFromString_mE1CD369010064FFB9D12CA01E2AB3EAFC19A9140 (String_t* ___value0, const RuntimeMethod* method) ;
// AudioSynthesis.Bank.Components.WaveformEnum AudioSynthesis.Bank.Components.Generators.Generator::GetWaveformFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Generator_GetWaveformFromString_mA0EF1D2AA607F6E9B734A8587B23B384A39A646D (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Generators.SampleGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor,AudioSynthesis.Bank.AssetManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleGenerator__ctor_mEC77F49216C38D5DA3B5F03C8DC6B688E7AD5ABB (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, AssetManager_tAB21564C528D6B60DD1BD654C6A9EA9220C69A77* ___assets1, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Generators.SawGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SawGenerator__ctor_m63BB8E828DE4DB99F5A970AE312C64661E56A8D6 (SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Generators.SineGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SineGenerator__ctor_m6E89C7662634417B9495F94439ECE7E7D337CD9E (SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Generators.SquareGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareGenerator__ctor_mA64659B7E5DE316ED502B319980E6948921F921F (SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Generators.TriangleGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleGenerator__ctor_m66DBC2E0329DBE7F530480F7C13CD558CB86E51C (TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Generators.WhiteNoiseGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteNoiseGenerator__ctor_m42C03D9F9BA2CFCC7F2C6942398FAB5FFC6DC306 (WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Descriptors.LfoDescriptor::ApplyDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LfoDescriptor_ApplyDefault_mF5E46C15EA83CA7DC74C5C8FBE41D0005BA4E450 (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* __this, const RuntimeMethod* method) ;
// AudioSynthesis.Bank.Components.Generators.Generator AudioSynthesis.Bank.Descriptors.LfoDescriptor::GetGenerator(AudioSynthesis.Bank.Components.WaveformEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Generator_tADF163794E3E90EE4A764830F2731836023B4A32* LfoDescriptor_GetGenerator_mB4E830621F55EE5D185AA16C0A432C54125F2588 (int32_t ___waveform0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Descriptors.LfoDescriptor::CheckValidParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LfoDescriptor_CheckValidParameters_mB856FD34E59C310C044CECFE46BCF27344762A58 (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* __this, const RuntimeMethod* method) ;
// AudioSynthesis.Bank.Components.WaveformEnum AudioSynthesis.Bank.Descriptors.LfoDescriptor::GetWaveform(AudioSynthesis.Bank.Components.Generators.Generator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LfoDescriptor_GetWaveform_m8A76C55C4D5E7C38CB9A606ECA1A1DD276400CDE (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* ___gen0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Envelope/EnvelopeStage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeStage__ctor_m09BD16265C162B7AA17A34493A9DFBBC0332BA5D (EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Synthesis.SynthHelper::CentsToPitch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SynthHelper_CentsToPitch_m385E4AED1D52B5EED3106CC84763C9A385FB3B68 (int32_t ___cents0, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Filter::UpdateCoeff(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_UpdateCoeff_m9CA02971F1428D246636BAD543CB3F465377F6BD (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, int32_t ___sampleRate0, const RuntimeMethod* method) ;
// System.Single[] AudioSynthesis.Bank.Components.Filter::GenerateFilterCoeff(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Filter_GenerateFilterCoeff_mCF0C50978D8E1A732A819D9448A87B5AC544DF03 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, double ___fc0, double ___q1, const RuntimeMethod* method) ;
// System.Boolean AudioSynthesis.Bank.Components.Filter::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Filter_get_Enabled_m2DC86F4F636A8127B4FA7AAEF82ACB1107952FC5 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Synthesis.SynthHelper::Clamp(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SynthHelper_Clamp_mA2D08EBFACEF9535F8426FCAB02166F2FA985E75 (double ___value0, double ___min1, double ___max2, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_Period()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_Period_mE96E0477662AB9B81BE2EB6348640137ED4DFCA5_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Lfo::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo_Reset_m2512163F66419F8E774C9CBE597FA107521A6675 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_LoopStartPhase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_LoopEndPhase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_LoopEndPhase_mD377463C1A76AD483551A7D2888A27B1D52094EA_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDescriptor__ctor_m2A2A54506DFD4213E5A305FFE4E1BE7682E23FA2 (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_StartPhase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_StartPhase_mBC857B423D6C030558ED348297C21191442769B3_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_Offset_m238F00876E65A327B42A762AE8020AAC004E5B5B_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) ;
// AudioSynthesis.Bank.Components.LoopModeEnum AudioSynthesis.Bank.Components.Generators.Generator::get_LoopMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Generator_get_LoopMode_m2A6FEBE8FA2BF7AE184F53DD09D0EE65CE22B78F_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_EndPhase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_EndPhase_m0854116479A89E64191C51238E39FA83AF8DD761_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator__ctor_m3313B048E930DC072C9AEEA9DE0A12F183FE0473 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) ;
// System.String AudioSynthesis.Util.IOHelper::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOHelper_GetFileNameWithoutExtension_m47B7421799777D3A4EEF813BAACCA86171D89BC8 (String_t* ___fileName0, const RuntimeMethod* method) ;
// AudioSynthesis.Bank.SampleDataAsset AudioSynthesis.Bank.AssetManager::FindSample(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* AssetManager_FindSample_mE14A5C6FD5818E47E972E3104BEA8DD81F700491 (AssetManager_tAB21564C528D6B60DD1BD654C6A9EA9220C69A77* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// AudioSynthesis.Wave.PcmData AudioSynthesis.Bank.SampleDataAsset::get_SampleData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PcmData_tB54EF39258C17586A65A55E564458B5441164E62* SampleDataAsset_get_SampleData_m9F5444819DE3FE56F38CE5F9136FAD5BE4B17AF5_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) ;
// System.Int32 AudioSynthesis.Bank.SampleDataAsset::get_SampleRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SampleDataAsset_get_SampleRate_mBC3EA51E2F4835C3FC3D4D0E1F4D8CEAAB7CF3ED_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.SampleDataAsset::get_End()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SampleDataAsset_get_End_m34C3BEE7193C5A014FC366E75878C18E8C9E91FC_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.SampleDataAsset::get_Start()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SampleDataAsset_get_Start_mABDCE9D65CF998DF2F3C57BFCC000FC510167514_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.SampleDataAsset::get_LoopEnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SampleDataAsset_get_LoopEnd_mA61A6A62DCE7EB5619329A0EE7E3630454B9B6FE_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.SampleDataAsset::get_LoopStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SampleDataAsset_get_LoopStart_m9C733A08C95FE827F1571857B16A109CD697B171_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) ;
// System.Int16 AudioSynthesis.Bank.SampleDataAsset::get_RootKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t SampleDataAsset_get_RootKey_m1DB6F5B9F0EE68BF87683BFC7EF72DD1CFE15AED_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) ;
// System.Int16 AudioSynthesis.Bank.SampleDataAsset::get_Tune()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t SampleDataAsset_get_Tune_m53C9EFB741C0C0DECCE3514EB11F0E1D2A75015D_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) ;
// System.Int32 AudioSynthesis.Wave.PcmData::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PcmData_get_Length_m4E82710F2380143906E2619EB05910A0D366F44F_inline (PcmData_tB54EF39258C17586A65A55E564458B5441164E62* __this, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Generators.SampleGenerator::Interpolate(AudioSynthesis.Bank.Components.Generators.GeneratorParameters,System.Single[],System.Double,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleGenerator_Interpolate_mB9F43686CE090C4624E4BD4F293EC7B8BF027CF0 (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* __this, GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* ___generatorParams0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___blockBuffer1, double ___increment2, int32_t ___start3, int32_t ___end4, const RuntimeMethod* method) ;
// System.Int32 System.Math::Sign(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Sign_m6E20753D72DE4B46CB1268023661DBE154294408 (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Effects.Flanger::.ctor(System.Int32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flanger__ctor_m8E8D43691C7BF11D2BC033CC8594AE9A4B07BA66 (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, int32_t ___sampleRate0, double ___minDelay1, double ___maxDelay2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Descriptors.LfoDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LfoDescriptor__ctor_mD9E326596F80BF9593C4B9802C9852C33C281C3F (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* __this, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Lfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo__ctor_m386916DEEB7479C4A2999BD1D36C7AFE17C28BC6 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Lfo::QuickSetup(System.Int32,AudioSynthesis.Bank.Descriptors.LfoDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo_QuickSetup_m8E14308AA6F0AE2E77BBC83991B864F7F75BCB0E (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, int32_t ___sampleRate0, LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* ___lfoInfo1, const RuntimeMethod* method) ;
// System.Void AudioSynthesis.Bank.Components.Lfo::Increment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo_Increment_m660CF62DB3C06A4E031751F7F56E8EF3A538A0D0 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Double AudioSynthesis.Bank.Components.Lfo::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Lfo_get_Value_m75E933EB26C8F773CC40ECC8D88626132848EFF2_inline (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String AudioSynthesis.Bank.Descriptors.CustomDescriptor::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomDescriptor_get_ID_m17A12AB55CB822E226F00E696648A7DE53ABC291 (CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___id_0;
		return L_0;
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.CustomDescriptor::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomDescriptor_get_Size_m14B12BD6C6E29A073273F71C8732E8D7616DE43B (CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size_1;
		return L_0;
	}
}
// System.Object[] AudioSynthesis.Bank.Descriptors.CustomDescriptor::get_Objects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CustomDescriptor_get_Objects_mA734433EDA635234C848AE5AB9717A7EF47488F1 (CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___objs_2;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.CustomDescriptor::.ctor(System.String,System.Int32,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDescriptor__ctor_m583AA4560F0D41091F7749AA5CCAD31C4A1FB4BF (CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213* __this, String_t* ___id0, int32_t ___size1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___id0;
		__this->___id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_0), (void*)L_0);
		int32_t L_1 = ___size1;
		__this->___size_1 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___objs2;
		__this->___objs_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objs_2), (void*)L_2);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.CustomDescriptor::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDescriptor__ctor_m579AE3BD2FA8C15CF24368A2122B88D9C02494AC (CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213* __this, String_t* ___id0, int32_t ___size1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___id0;
		__this->___id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_0), (void*)L_0);
		int32_t L_1 = ___size1;
		__this->___size_1 = L_1;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.CustomDescriptor::Read(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDescriptor_Read_mD0CFB79077AF04862C34E12624E24F763AFC6E11 (CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_CopyTo_m459CB3E04D560D6A8203CDF4B28CB72F0950FF36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_get_Count_mCE2AC3510DE63C21A57311CBF6855FFAB0C92D60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Il2CppChar V_6 = 0x0;
	RuntimeObject* V_7 = NULL;
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		__this->___size_1 = 0;
		V_1 = 0;
		goto IL_0180;
	}

IL_0014:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___description0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)61), NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_7 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___description0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		if ((((int32_t)L_7) >= ((int32_t)L_12)))
		{
			goto IL_017c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___description0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_2;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_16, 0, L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_19, NULL);
		V_4 = L_20;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = ___description0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = V_2;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_26, NULL);
		V_5 = L_27;
		String_t* L_28 = V_5;
		String_t* L_29 = V_5;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		NullCheck(L_28);
		Il2CppChar L_31;
		L_31 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, ((int32_t)il2cpp_codegen_subtract(L_30, 1)), NULL);
		V_6 = L_31;
		String_t* L_32 = V_5;
		String_t* L_33 = V_5;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_33, NULL);
		NullCheck(L_32);
		String_t* L_35;
		L_35 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_32, 0, ((int32_t)il2cpp_codegen_subtract(L_34, 1)), NULL);
		V_5 = L_35;
		V_7 = NULL;
		Il2CppChar L_36 = V_6;
		if ((!(((uint32_t)L_36) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_00b6;
		}
	}
	{
		Il2CppChar L_37 = V_6;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)38))))
		{
			goto IL_0122;
		}
	}
	{
		Il2CppChar L_38 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_38, ((int32_t)98))))
		{
			case 0:
			{
				goto IL_00eb;
			}
			case 1:
			{
				goto IL_0148;
			}
			case 2:
			{
				goto IL_00fd;
			}
			case 3:
			{
				goto IL_0148;
			}
			case 4:
			{
				goto IL_0110;
			}
		}
	}
	{
		goto IL_0148;
	}

IL_00b6:
	{
		Il2CppChar L_39 = V_6;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)105))))
		{
			goto IL_00c7;
		}
	}
	{
		Il2CppChar L_40 = V_6;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)115))))
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_0148;
	}

IL_00c7:
	{
		String_t* L_41 = V_5;
		int32_t L_42;
		L_42 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_41, NULL);
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_43);
		V_7 = L_44;
		V_3 = 5;
		goto IL_014a;
	}

IL_00d9:
	{
		String_t* L_45 = V_5;
		int16_t L_46;
		L_46 = Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60(L_45, NULL);
		int16_t L_47 = L_46;
		RuntimeObject* L_48 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_47);
		V_7 = L_48;
		V_3 = 3;
		goto IL_014a;
	}

IL_00eb:
	{
		String_t* L_49 = V_5;
		uint8_t L_50;
		L_50 = Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417(L_49, NULL);
		uint8_t L_51 = L_50;
		RuntimeObject* L_52 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_51);
		V_7 = L_52;
		V_3 = 2;
		goto IL_014a;
	}

IL_00fd:
	{
		String_t* L_53 = V_5;
		double L_54;
		L_54 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_53, NULL);
		double L_55 = L_54;
		RuntimeObject* L_56 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_55);
		V_7 = L_56;
		V_3 = ((int32_t)9);
		goto IL_014a;
	}

IL_0110:
	{
		String_t* L_57 = V_5;
		float L_58;
		L_58 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_57, NULL);
		float L_59 = L_58;
		RuntimeObject* L_60 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_59);
		V_7 = L_60;
		V_3 = 5;
		goto IL_014a;
	}

IL_0122:
	{
		String_t* L_61 = V_5;
		V_7 = L_61;
		String_t* L_62 = V_5;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_62, NULL);
		if ((((int32_t)L_63) <= ((int32_t)((int32_t)255))))
		{
			goto IL_013c;
		}
	}
	{
		V_3 = ((int32_t)257);
		goto IL_014a;
	}

IL_013c:
	{
		String_t* L_64 = V_5;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_64, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add(2, L_65));
		goto IL_014a;
	}

IL_0148:
	{
		V_3 = 0;
	}

IL_014a:
	{
		RuntimeObject* L_66 = V_7;
		if (!L_66)
		{
			goto IL_017c;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_67 = V_0;
		String_t* L_68 = V_4;
		NullCheck(L_67);
		bool L_69;
		L_69 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_67, L_68, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_69)
		{
			goto IL_0164;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_70 = V_0;
		String_t* L_71 = V_4;
		RuntimeObject* L_72 = V_7;
		NullCheck(L_70);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_70, L_71, L_72, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		goto IL_017c;
	}

IL_0164:
	{
		int32_t L_73 = __this->___size_1;
		int32_t L_74 = V_3;
		__this->___size_1 = ((int32_t)il2cpp_codegen_add(L_73, L_74));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_75 = V_0;
		String_t* L_76 = V_4;
		RuntimeObject* L_77 = V_7;
		NullCheck(L_75);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_75, L_76, L_77, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_017c:
	{
		int32_t L_78 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0180:
	{
		int32_t L_79 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = ___description0;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_81 = __this->___size_1;
		if ((!(((uint32_t)((int32_t)(L_81%2))) == ((uint32_t)1))))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_82 = __this->___size_1;
		__this->___size_1 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01a2:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_83 = V_0;
		NullCheck(L_83);
		ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* L_84;
		L_84 = Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC(L_83, Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		NullCheck(L_84);
		int32_t L_85;
		L_85 = ValueCollection_get_Count_mCE2AC3510DE63C21A57311CBF6855FFAB0C92D60(L_84, ValueCollection_get_Count_mCE2AC3510DE63C21A57311CBF6855FFAB0C92D60_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_85);
		__this->___objs_2 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objs_2), (void*)L_86);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_87 = V_0;
		NullCheck(L_87);
		ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* L_88;
		L_88 = Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC(L_87, Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_89 = __this->___objs_2;
		NullCheck(L_88);
		ValueCollection_CopyTo_m459CB3E04D560D6A8203CDF4B28CB72F0950FF36(L_88, L_89, 0, ValueCollection_CopyTo_m459CB3E04D560D6A8203CDF4B28CB72F0950FF36_RuntimeMethod_var);
		return;
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.CustomDescriptor::Read(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomDescriptor_Read_m7A6F68E5F3BD3CB0837866C700B9F2CF0B4C1879 (CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0107;
	}

IL_000d:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___reader0;
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_1);
		V_3 = L_2;
		Il2CppChar L_3 = V_3;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)38)))))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_4 = V_3;
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)38))))
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_00f1;
	}

IL_0029:
	{
		Il2CppChar L_6 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)98))))
		{
			case 0:
			{
				goto IL_008f;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_00a6;
			}
			case 3:
			{
				goto IL_00f1;
			}
			case 4:
			{
				goto IL_00be;
			}
		}
	}
	{
		Il2CppChar L_7 = V_3;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)105))))
		{
			goto IL_005e;
		}
	}
	{
		Il2CppChar L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)115))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00f1;
	}

IL_0055:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_0107;
	}

IL_005e:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_10 = V_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___reader0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_10, L_14, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 5));
		goto IL_0107;
	}

IL_0078:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_16 = V_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = ___reader0;
		NullCheck(L_17);
		int16_t L_18;
		L_18 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_17);
		int16_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_16, L_20, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		goto IL_0107;
	}

IL_008f:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_22 = V_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = ___reader0;
		NullCheck(L_23);
		uint8_t L_24;
		L_24 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_23);
		uint8_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_22);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_22, L_26, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 2));
		goto IL_0107;
	}

IL_00a6:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_28 = V_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_29 = ___reader0;
		NullCheck(L_29);
		double L_30;
		L_30 = VirtualFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_29);
		double L_31 = L_30;
		RuntimeObject* L_32 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_28, L_32, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)9)));
		goto IL_0107;
	}

IL_00be:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_34 = V_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_35 = ___reader0;
		NullCheck(L_35);
		float L_36;
		L_36 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_35);
		float L_37 = L_36;
		RuntimeObject* L_38 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_34);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_34, L_38, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 5));
		goto IL_0107;
	}

IL_00d5:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_40 = ___reader0;
		NullCheck(L_40);
		uint8_t L_41;
		L_41 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_40);
		V_2 = L_41;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_42 = V_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_43 = ___reader0;
		int32_t L_44 = V_2;
		String_t* L_45;
		L_45 = IOHelper_Read8BitString_m5D33C73A6175EEFA160688D635EE9B6AAB1CF3B6(L_43, L_44, NULL);
		NullCheck(L_42);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_42, L_45, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		int32_t L_46 = V_1;
		int32_t L_47 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)il2cpp_codegen_add(L_47, 2))));
		goto IL_0107;
	}

IL_00f1:
	{
		String_t* L_48 = __this->___id_0;
		String_t* L_49;
		L_49 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA3F66075DE0843717AA97C350531BD73B74F403)), L_48, NULL);
		Exception_t* L_50 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_50);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_50, L_49, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CustomDescriptor_Read_m7A6F68E5F3BD3CB0837866C700B9F2CF0B4C1879_RuntimeMethod_var)));
	}

IL_0107:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = __this->___size_1;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_53 = V_1;
		int32_t L_54 = __this->___size_1;
		if ((((int32_t)L_53) <= ((int32_t)L_54)))
		{
			goto IL_0132;
		}
	}
	{
		String_t* L_55 = __this->___id_0;
		String_t* L_56;
		L_56 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA3F66075DE0843717AA97C350531BD73B74F403)), L_55, NULL);
		Exception_t* L_57 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_57);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_57, L_56, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CustomDescriptor_Read_m7A6F68E5F3BD3CB0837866C700B9F2CF0B4C1879_RuntimeMethod_var)));
	}

IL_0132:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_58 = V_0;
		NullCheck(L_58);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59;
		L_59 = List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F(L_58, List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var);
		__this->___objs_2 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objs_2), (void*)L_59);
		int32_t L_60 = V_1;
		return L_60;
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.CustomDescriptor::Write(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomDescriptor_Write_m61D35039B0FCC9F5BAA39056D5436468D918E918 (CustomDescriptor_tB5748F2264055F3C1C5F96E35DDA02D1BE144213* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0151;
	}

IL_0009:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___objs_2;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer0;
		NullCheck(L_4);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_4, (uint8_t)((int32_t)105));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = ___writer0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->___objs_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_5, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 5));
		goto IL_014d;
	}

IL_003c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->___objs_2;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_14, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_006f;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_15 = ___writer0;
		NullCheck(L_15);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_15, (uint8_t)((int32_t)115));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = ___writer0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->___objs_2;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_16, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_20, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		goto IL_014d;
	}

IL_006f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = __this->___objs_2;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_25, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_00a2;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_26 = ___writer0;
		NullCheck(L_26);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_26, (uint8_t)((int32_t)98));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_27 = ___writer0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = __this->___objs_2;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_27, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_31, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))));
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		goto IL_014d;
	}

IL_00a2:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = __this->___objs_2;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_36, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_37 = ___writer0;
		NullCheck(L_37);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_37, (uint8_t)((int32_t)100));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_38 = ___writer0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = __this->___objs_2;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		RuntimeObject* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		VirtualActionInvoker1< double >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_38, ((*(double*)((double*)(double*)UnBox(L_42, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))));
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)9)));
		goto IL_014d;
	}

IL_00d3:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = __this->___objs_2;
		int32_t L_45 = V_1;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_47, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0103;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_48 = ___writer0;
		NullCheck(L_48);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_48, (uint8_t)((int32_t)102));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_49 = ___writer0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = __this->___objs_2;
		int32_t L_51 = V_1;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_49);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_49, ((*(float*)((float*)(float*)UnBox(L_53, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))));
		int32_t L_54 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_54, 5));
		goto IL_014d;
	}

IL_0103:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = __this->___objs_2;
		int32_t L_56 = V_1;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		RuntimeObject* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_58, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_014d;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_59 = ___writer0;
		NullCheck(L_59);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_59, (uint8_t)((int32_t)38));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = __this->___objs_2;
		int32_t L_61 = V_1;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_63, String_t_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_64 = ___writer0;
		String_t* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_65, NULL);
		NullCheck(L_64);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_64, (uint8_t)((int32_t)(uint8_t)L_66));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_67 = ___writer0;
		String_t* L_68 = V_2;
		String_t* L_69 = V_2;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_69, NULL);
		IOHelper_Write8BitString_m51DA4CE8B4F479414F32184B29DF6C18258B7ABE(L_67, L_68, L_70, NULL);
		int32_t L_71 = V_0;
		String_t* L_72 = V_2;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_72, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_71, ((int32_t)il2cpp_codegen_add(L_73, 2))));
	}

IL_014d:
	{
		int32_t L_74 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0151:
	{
		int32_t L_75 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_76 = __this->___objs_2;
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_77 = V_0;
		int32_t L_78 = __this->___size_1;
		if ((((int32_t)L_77) >= ((int32_t)L_78)))
		{
			goto IL_017e;
		}
	}

IL_0168:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_79 = ___writer0;
		NullCheck(L_79);
		VirtualActionInvoker1< uint8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_79, (uint8_t)0);
		int32_t L_80 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		int32_t L_81 = V_0;
		int32_t L_82 = __this->___size_1;
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_0168;
		}
	}
	{
		goto IL_0192;
	}

IL_017e:
	{
		int32_t L_83 = V_0;
		int32_t L_84 = __this->___size_1;
		if ((((int32_t)L_83) <= ((int32_t)L_84)))
		{
			goto IL_0192;
		}
	}
	{
		Exception_t* L_85 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_85);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_85, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5D967938B4A9813CAFB5F1E8A223984F33F7DFE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CustomDescriptor_Write_m61D35039B0FCC9F5BAA39056D5436468D918E918_RuntimeMethod_var)));
	}

IL_0192:
	{
		int32_t L_86 = V_0;
		return L_86;
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
// System.Void AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDescriptor__ctor_m1883AB0B73403AF675FCA1E83DC93B2804DF4CF7 (EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		EnvelopeDescriptor_ApplyDefault_m24BC00DADF60264D70D4BE872608A58AEC68C6F4(__this, NULL);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Read(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDescriptor_Read_m990757C0107442B55C31F48D962CF9B818830391 (EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15B905E20BF1937BEB7B6A0655224817BE45D615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral172D02FEDB21D861AEC79893A831ECB196760398);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2960CB8A8A3623978AF0B030510E5DE7DE34BE46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB881CFDC984BDC1260D5D51702D1454EFC6C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D037CE54FD9FD36517234C102DC8F2CF557ED8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F999CEC9AF3C863EBE016150185505672D39565);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4870629158021B5B3B07A48F646C92944311E6B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BFDDF86F0C70D5E1AF3DB66C11B9612D9FA6DF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C54423E0C8F90A2630DB27970C8B3C0A3E4FEF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF1F726DBB73B6CD07B35DDC7AA1ABFE9133AE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6811A797CBFB88912FDAFDC30F0C9B0EF7499F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87FDE86C4B7EA95E604660BFB8348E374ADA193A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F67017AA65C39B29179ECA01EF024B32B658D8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FECFF1A309DF4CB72C61ADFFE054E290760D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA596617B91E7D9DFD1986C0810A160ABB5CEA33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC354370C067B8882EE34D44D5E7998EBD843CA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF350BE090444387C1BF25D0C52F334434451C94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF09192DD2434D6C873539AA4955F9D7D0C4520A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF31B2E97B2E615C20572BA5D3968860ED3E49693);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	{
		EnvelopeDescriptor_ApplyDefault_m24BC00DADF60264D70D4BE872608A58AEC68C6F4(__this, NULL);
		V_0 = 0;
		goto IL_04a6;
	}

IL_000d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___description0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)61), NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_04a2;
		}
	}
	{
		int32_t L_6 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___description0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_11)))
		{
			goto IL_04a2;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___description0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_15, 0, L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_18, NULL);
		V_2 = L_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ___description0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_1;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		V_3 = L_26;
		String_t* L_27 = V_2;
		if (!L_27)
		{
			goto IL_04a2;
		}
	}
	{
		String_t* L_28 = V_2;
		uint32_t L_29;
		L_29 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF5D3E9C8845C573F909CCF6B26DBD06653FC39E7(L_28, NULL);
		V_4 = L_29;
		uint32_t L_30 = V_4;
		if ((!(((uint32_t)L_30) <= ((uint32_t)((int32_t)1753466603)))))
		{
			goto IL_0114;
		}
	}
	{
		uint32_t L_31 = V_4;
		if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)314518566)))))
		{
			goto IL_00c5;
		}
	}
	{
		uint32_t L_32 = V_4;
		if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)96428764)))))
		{
			goto IL_009c;
		}
	}
	{
		uint32_t L_33 = V_4;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)32275848))))
		{
			goto IL_0278;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)96428764))))
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_04a2;
	}

IL_009c:
	{
		uint32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)218545599))))
		{
			goto IL_02f6;
		}
	}
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)300183652))))
		{
			goto IL_030b;
		}
	}
	{
		uint32_t L_37 = V_4;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)314518566))))
		{
			goto IL_0263;
		}
	}
	{
		goto IL_04a2;
	}

IL_00c5:
	{
		uint32_t L_38 = V_4;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)463647109)))))
		{
			goto IL_00eb;
		}
	}
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)402141105))))
		{
			goto IL_01bb;
		}
	}
	{
		uint32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)463647109))))
		{
			goto IL_028d;
		}
	}
	{
		goto IL_04a2;
	}

IL_00eb:
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)470387516))))
		{
			goto IL_020f;
		}
	}
	{
		uint32_t L_42 = V_4;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)665697169))))
		{
			goto IL_01fa;
		}
	}
	{
		uint32_t L_43 = V_4;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)1753466603))))
		{
			goto IL_0239;
		}
	}
	{
		goto IL_04a2;
	}

IL_0114:
	{
		uint32_t L_44 = V_4;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-969513577)))))
		{
			goto IL_016c;
		}
	}
	{
		uint32_t L_45 = V_4;
		if ((!(((uint32_t)L_45) <= ((uint32_t)((int32_t)2138219359)))))
		{
			goto IL_0143;
		}
	}
	{
		uint32_t L_46 = V_4;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)1777777223))))
		{
			goto IL_0335;
		}
	}
	{
		uint32_t L_47 = V_4;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)2138219359))))
		{
			goto IL_0224;
		}
	}
	{
		goto IL_04a2;
	}

IL_0143:
	{
		uint32_t L_48 = V_4;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)-1352036993))))
		{
			goto IL_01e5;
		}
	}
	{
		uint32_t L_49 = V_4;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)-1133970575))))
		{
			goto IL_02cc;
		}
	}
	{
		uint32_t L_50 = V_4;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)-969513577))))
		{
			goto IL_034a;
		}
	}
	{
		goto IL_04a2;
	}

IL_016c:
	{
		uint32_t L_51 = V_4;
		if ((!(((uint32_t)L_51) <= ((uint32_t)((int32_t)-592381121)))))
		{
			goto IL_0192;
		}
	}
	{
		uint32_t L_52 = V_4;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)-858856361))))
		{
			goto IL_024e;
		}
	}
	{
		uint32_t L_53 = V_4;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)-592381121))))
		{
			goto IL_0320;
		}
	}
	{
		goto IL_04a2;
	}

IL_0192:
	{
		uint32_t L_54 = V_4;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)-370965729))))
		{
			goto IL_02a2;
		}
	}
	{
		uint32_t L_55 = V_4;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)-60932358))))
		{
			goto IL_02e1;
		}
	}
	{
		uint32_t L_56 = V_4;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)-25846038))))
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_04a2;
	}

IL_01bb:
	{
		String_t* L_57 = V_2;
		bool L_58;
		L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteral2960CB8A8A3623978AF0B030510E5DE7DE34BE46, NULL);
		if (L_58)
		{
			goto IL_035f;
		}
	}
	{
		goto IL_04a2;
	}

IL_01d0:
	{
		String_t* L_59 = V_2;
		bool L_60;
		L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteral4BFDDF86F0C70D5E1AF3DB66C11B9612D9FA6DF0, NULL);
		if (L_60)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_04a2;
	}

IL_01e5:
	{
		String_t* L_61 = V_2;
		bool L_62;
		L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteral4EF1F726DBB73B6CD07B35DDC7AA1ABFE9133AE8, NULL);
		if (L_62)
		{
			goto IL_0381;
		}
	}
	{
		goto IL_04a2;
	}

IL_01fa:
	{
		String_t* L_63 = V_2;
		bool L_64;
		L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral8F67017AA65C39B29179ECA01EF024B32B658D8F, NULL);
		if (L_64)
		{
			goto IL_0397;
		}
	}
	{
		goto IL_04a2;
	}

IL_020f:
	{
		String_t* L_65 = V_2;
		bool L_66;
		L_66 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_65, _stringLiteralC354370C067B8882EE34D44D5E7998EBD843CA90, NULL);
		if (L_66)
		{
			goto IL_03a8;
		}
	}
	{
		goto IL_04a2;
	}

IL_0224:
	{
		String_t* L_67 = V_2;
		bool L_68;
		L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteralEF350BE090444387C1BF25D0C52F334434451C94, NULL);
		if (L_68)
		{
			goto IL_03b9;
		}
	}
	{
		goto IL_04a2;
	}

IL_0239:
	{
		String_t* L_69 = V_2;
		bool L_70;
		L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_69, _stringLiteral3F999CEC9AF3C863EBE016150185505672D39565, NULL);
		if (L_70)
		{
			goto IL_03cf;
		}
	}
	{
		goto IL_04a2;
	}

IL_024e:
	{
		String_t* L_71 = V_2;
		bool L_72;
		L_72 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_71, _stringLiteral4870629158021B5B3B07A48F646C92944311E6B3, NULL);
		if (L_72)
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_04a2;
	}

IL_0263:
	{
		String_t* L_73 = V_2;
		bool L_74;
		L_74 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_73, _stringLiteral8FECFF1A309DF4CB72C61ADFFE054E290760D4EB, NULL);
		if (L_74)
		{
			goto IL_03f1;
		}
	}
	{
		goto IL_04a2;
	}

IL_0278:
	{
		String_t* L_75 = V_2;
		bool L_76;
		L_76 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_75, _stringLiteral15B905E20BF1937BEB7B6A0655224817BE45D615, NULL);
		if (L_76)
		{
			goto IL_0407;
		}
	}
	{
		goto IL_04a2;
	}

IL_028d:
	{
		String_t* L_77 = V_2;
		bool L_78;
		L_78 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_77, _stringLiteralAA596617B91E7D9DFD1986C0810A160ABB5CEA33, NULL);
		if (L_78)
		{
			goto IL_0418;
		}
	}
	{
		goto IL_04a2;
	}

IL_02a2:
	{
		String_t* L_79 = V_2;
		bool L_80;
		L_80 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_79, _stringLiteral3D037CE54FD9FD36517234C102DC8F2CF557ED8D, NULL);
		if (L_80)
		{
			goto IL_0426;
		}
	}
	{
		goto IL_04a2;
	}

IL_02b7:
	{
		String_t* L_81 = V_2;
		bool L_82;
		L_82 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_81, _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, NULL);
		if (L_82)
		{
			goto IL_0434;
		}
	}
	{
		goto IL_04a2;
	}

IL_02cc:
	{
		String_t* L_83 = V_2;
		bool L_84;
		L_84 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_83, _stringLiteralF31B2E97B2E615C20572BA5D3968860ED3E49693, NULL);
		if (L_84)
		{
			goto IL_0442;
		}
	}
	{
		goto IL_04a2;
	}

IL_02e1:
	{
		String_t* L_85 = V_2;
		bool L_86;
		L_86 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_85, _stringLiteral4C54423E0C8F90A2630DB27970C8B3C0A3E4FEF5, NULL);
		if (L_86)
		{
			goto IL_0450;
		}
	}
	{
		goto IL_04a2;
	}

IL_02f6:
	{
		String_t* L_87 = V_2;
		bool L_88;
		L_88 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_87, _stringLiteral87FDE86C4B7EA95E604660BFB8348E374ADA193A, NULL);
		if (L_88)
		{
			goto IL_045e;
		}
	}
	{
		goto IL_04a2;
	}

IL_030b:
	{
		String_t* L_89 = V_2;
		bool L_90;
		L_90 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_89, _stringLiteralF09192DD2434D6C873539AA4955F9D7D0C4520A9, NULL);
		if (L_90)
		{
			goto IL_046c;
		}
	}
	{
		goto IL_04a2;
	}

IL_0320:
	{
		String_t* L_91 = V_2;
		bool L_92;
		L_92 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_91, _stringLiteral3AB881CFDC984BDC1260D5D51702D1454EFC6C68, NULL);
		if (L_92)
		{
			goto IL_047a;
		}
	}
	{
		goto IL_04a2;
	}

IL_0335:
	{
		String_t* L_93 = V_2;
		bool L_94;
		L_94 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_93, _stringLiteral172D02FEDB21D861AEC79893A831ECB196760398, NULL);
		if (L_94)
		{
			goto IL_0488;
		}
	}
	{
		goto IL_04a2;
	}

IL_034a:
	{
		String_t* L_95 = V_2;
		bool L_96;
		L_96 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_95, _stringLiteral6811A797CBFB88912FDAFDC30F0C9B0EF7499F1B, NULL);
		if (L_96)
		{
			goto IL_0496;
		}
	}
	{
		goto IL_04a2;
	}

IL_035f:
	{
		String_t* L_97 = V_3;
		float L_98;
		L_98 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_97, NULL);
		__this->___DelayTime_2 = L_98;
		goto IL_04a2;
	}

IL_0370:
	{
		String_t* L_99 = V_3;
		float L_100;
		L_100 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_99, NULL);
		__this->___AttackTime_3 = L_100;
		goto IL_04a2;
	}

IL_0381:
	{
		String_t* L_101 = V_3;
		NullCheck(L_101);
		String_t* L_102;
		L_102 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_101, NULL);
		int16_t L_103;
		L_103 = EnvelopeDescriptor_GetGraphID_m34D019EF3998F8D395A3966555E1D9FD54AE9AB0(L_102, NULL);
		__this->___AttackGraph_4 = L_103;
		goto IL_04a2;
	}

IL_0397:
	{
		String_t* L_104 = V_3;
		float L_105;
		L_105 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_104, NULL);
		__this->___HoldTime_5 = L_105;
		goto IL_04a2;
	}

IL_03a8:
	{
		String_t* L_106 = V_3;
		float L_107;
		L_107 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_106, NULL);
		__this->___DecayTime_6 = L_107;
		goto IL_04a2;
	}

IL_03b9:
	{
		String_t* L_108 = V_3;
		NullCheck(L_108);
		String_t* L_109;
		L_109 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_108, NULL);
		int16_t L_110;
		L_110 = EnvelopeDescriptor_GetGraphID_m34D019EF3998F8D395A3966555E1D9FD54AE9AB0(L_109, NULL);
		__this->___DecayGraph_7 = L_110;
		goto IL_04a2;
	}

IL_03cf:
	{
		String_t* L_111 = V_3;
		float L_112;
		L_112 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_111, NULL);
		__this->___SustainTime_8 = L_112;
		goto IL_04a2;
	}

IL_03e0:
	{
		String_t* L_113 = V_3;
		float L_114;
		L_114 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_113, NULL);
		__this->___ReleaseTime_9 = L_114;
		goto IL_04a2;
	}

IL_03f1:
	{
		String_t* L_115 = V_3;
		NullCheck(L_115);
		String_t* L_116;
		L_116 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_115, NULL);
		int16_t L_117;
		L_117 = EnvelopeDescriptor_GetGraphID_m34D019EF3998F8D395A3966555E1D9FD54AE9AB0(L_116, NULL);
		__this->___ReleaseGraph_10 = L_117;
		goto IL_04a2;
	}

IL_0407:
	{
		String_t* L_118 = V_3;
		float L_119;
		L_119 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_118, NULL);
		__this->___SustainLevel_11 = L_119;
		goto IL_04a2;
	}

IL_0418:
	{
		String_t* L_120 = V_3;
		float L_121;
		L_121 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_120, NULL);
		__this->___PeakLevel_12 = L_121;
		goto IL_04a2;
	}

IL_0426:
	{
		String_t* L_122 = V_3;
		float L_123;
		L_123 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_122, NULL);
		__this->___StartLevel_13 = L_123;
		goto IL_04a2;
	}

IL_0434:
	{
		String_t* L_124 = V_3;
		float L_125;
		L_125 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_124, NULL);
		__this->___Depth_14 = L_125;
		goto IL_04a2;
	}

IL_0442:
	{
		String_t* L_126 = V_3;
		float L_127;
		L_127 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_126, NULL);
		__this->___Vel2Delay_15 = L_127;
		goto IL_04a2;
	}

IL_0450:
	{
		String_t* L_128 = V_3;
		float L_129;
		L_129 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_128, NULL);
		__this->___Vel2Attack_16 = L_129;
		goto IL_04a2;
	}

IL_045e:
	{
		String_t* L_130 = V_3;
		float L_131;
		L_131 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_130, NULL);
		__this->___Vel2Hold_17 = L_131;
		goto IL_04a2;
	}

IL_046c:
	{
		String_t* L_132 = V_3;
		float L_133;
		L_133 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_132, NULL);
		__this->___Vel2Decay_18 = L_133;
		goto IL_04a2;
	}

IL_047a:
	{
		String_t* L_134 = V_3;
		float L_135;
		L_135 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_134, NULL);
		__this->___Vel2Sustain_19 = L_135;
		goto IL_04a2;
	}

IL_0488:
	{
		String_t* L_136 = V_3;
		float L_137;
		L_137 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_136, NULL);
		__this->___Vel2Release_20 = L_137;
		goto IL_04a2;
	}

IL_0496:
	{
		String_t* L_138 = V_3;
		float L_139;
		L_139 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_138, NULL);
		__this->___Vel2Depth_21 = L_139;
	}

IL_04a2:
	{
		int32_t L_140 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_04a6:
	{
		int32_t L_141 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_142 = ___description0;
		NullCheck(L_142);
		if ((((int32_t)L_141) < ((int32_t)((int32_t)(((RuntimeArray*)L_142)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		EnvelopeDescriptor_CheckValidParameters_m18664AA7F67C83A56DA88A2812BD2DFE8969DCDF(__this, NULL);
		return;
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Read(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnvelopeDescriptor_Read_mF03489DBFC8F9398A06BBAB2A051597AC9E933A4 (EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_0);
		__this->___DelayTime_2 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___reader0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_2);
		__this->___AttackTime_3 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___reader0;
		NullCheck(L_4);
		int16_t L_5;
		L_5 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_4);
		__this->___AttackGraph_4 = L_5;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___reader0;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_6);
		__this->___HoldTime_5 = L_7;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___reader0;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_8);
		__this->___DecayTime_6 = L_9;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___reader0;
		NullCheck(L_10);
		int16_t L_11;
		L_11 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_10);
		__this->___DecayGraph_7 = L_11;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = ___reader0;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		__this->___SustainTime_8 = L_13;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = ___reader0;
		NullCheck(L_14);
		float L_15;
		L_15 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_14);
		__this->___ReleaseTime_9 = L_15;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___reader0;
		NullCheck(L_16);
		int16_t L_17;
		L_17 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_16);
		__this->___ReleaseGraph_10 = L_17;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = ___reader0;
		NullCheck(L_18);
		float L_19;
		L_19 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_18);
		__this->___SustainLevel_11 = L_19;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = ___reader0;
		NullCheck(L_20);
		float L_21;
		L_21 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_20);
		__this->___PeakLevel_12 = L_21;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___reader0;
		NullCheck(L_22);
		float L_23;
		L_23 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_22);
		__this->___StartLevel_13 = L_23;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_24 = ___reader0;
		NullCheck(L_24);
		float L_25;
		L_25 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_24);
		__this->___Depth_14 = L_25;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_26 = ___reader0;
		NullCheck(L_26);
		float L_27;
		L_27 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_26);
		__this->___Vel2Delay_15 = L_27;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = ___reader0;
		NullCheck(L_28);
		float L_29;
		L_29 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_28);
		__this->___Vel2Attack_16 = L_29;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_30 = ___reader0;
		NullCheck(L_30);
		float L_31;
		L_31 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_30);
		__this->___Vel2Hold_17 = L_31;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_32 = ___reader0;
		NullCheck(L_32);
		float L_33;
		L_33 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_32);
		__this->___Vel2Decay_18 = L_33;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_34 = ___reader0;
		NullCheck(L_34);
		float L_35;
		L_35 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_34);
		__this->___Vel2Sustain_19 = L_35;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_36 = ___reader0;
		NullCheck(L_36);
		float L_37;
		L_37 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_36);
		__this->___Vel2Release_20 = L_37;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_38 = ___reader0;
		NullCheck(L_38);
		float L_39;
		L_39 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_38);
		__this->___Vel2Depth_21 = L_39;
		EnvelopeDescriptor_CheckValidParameters_m18664AA7F67C83A56DA88A2812BD2DFE8969DCDF(__this, NULL);
		return ((int32_t)74);
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::Write(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnvelopeDescriptor_Write_m1DF344A1D908A31E6F7B86597DB8774F6D3A8C48 (EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		float L_1 = __this->___DelayTime_2;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_0, L_1);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer0;
		float L_3 = __this->___AttackTime_3;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_2, L_3);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer0;
		int16_t L_5 = __this->___AttackGraph_4;
		NullCheck(L_4);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_4, L_5);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___writer0;
		float L_7 = __this->___HoldTime_5;
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_6, L_7);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___writer0;
		float L_9 = __this->___DecayTime_6;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_8, L_9);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_10 = ___writer0;
		int16_t L_11 = __this->___DecayGraph_7;
		NullCheck(L_10);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_10, L_11);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_12 = ___writer0;
		float L_13 = __this->___SustainTime_8;
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_12, L_13);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_14 = ___writer0;
		float L_15 = __this->___ReleaseTime_9;
		NullCheck(L_14);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_14, L_15);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = ___writer0;
		int16_t L_17 = __this->___ReleaseGraph_10;
		NullCheck(L_16);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_16, L_17);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_18 = ___writer0;
		float L_19 = __this->___SustainLevel_11;
		NullCheck(L_18);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_18, L_19);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_20 = ___writer0;
		float L_21 = __this->___PeakLevel_12;
		NullCheck(L_20);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_20, L_21);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_22 = ___writer0;
		float L_23 = __this->___StartLevel_13;
		NullCheck(L_22);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_22, L_23);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_24 = ___writer0;
		float L_25 = __this->___Depth_14;
		NullCheck(L_24);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_24, L_25);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_26 = ___writer0;
		float L_27 = __this->___Vel2Delay_15;
		NullCheck(L_26);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_26, L_27);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = ___writer0;
		float L_29 = __this->___Vel2Attack_16;
		NullCheck(L_28);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_28, L_29);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_30 = ___writer0;
		float L_31 = __this->___Vel2Hold_17;
		NullCheck(L_30);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_30, L_31);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_32 = ___writer0;
		float L_33 = __this->___Vel2Decay_18;
		NullCheck(L_32);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_32, L_33);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_34 = ___writer0;
		float L_35 = __this->___Vel2Sustain_19;
		NullCheck(L_34);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_34, L_35);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_36 = ___writer0;
		float L_37 = __this->___Vel2Release_20;
		NullCheck(L_36);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_36, L_37);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_38 = ___writer0;
		float L_39 = __this->___Vel2Depth_21;
		NullCheck(L_38);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_38, L_39);
		return ((int32_t)74);
	}
}
// System.Int16 AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::GetGraphID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnvelopeDescriptor_GetGraphID_m34D019EF3998F8D395A3966555E1D9FD54AE9AB0 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D0776803EAB54D3571A885890D7D69F6A4DFFE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58EA9816B9C590B0A28979EB361531108047E405);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BFD7BA3F02AE5E6C4368960EBBF95509912E86B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946C66BDF7790C4502BC0CE3B36FFE5731EF0E0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE65ED40B86FCD609A7E98735C6D0260815A861E);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_1 = ___value0;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF5D3E9C8845C573F909CCF6B26DBD06653FC39E7(L_1, NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)687835207)))))
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)28637622))))
		{
			goto IL_00af;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)687835207))))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_00d5;
	}

IL_0035:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)-1043494774)))))
		{
			goto IL_0052;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)911001080))))
		{
			goto IL_0091;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1043494774))))
		{
			goto IL_0082;
		}
	}
	{
		goto IL_00d5;
	}

IL_0052:
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-804940608))))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-527865190))))
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00d5;
	}

IL_0064:
	{
		String_t* L_12 = ___value0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_13)
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_00d5;
	}

IL_0073:
	{
		String_t* L_14 = ___value0;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralDE65ED40B86FCD609A7E98735C6D0260815A861E, NULL);
		if (L_15)
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_00d5;
	}

IL_0082:
	{
		String_t* L_16 = ___value0;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral2D0776803EAB54D3571A885890D7D69F6A4DFFE3, NULL);
		if (L_17)
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_00d5;
	}

IL_0091:
	{
		String_t* L_18 = ___value0;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral58EA9816B9C590B0A28979EB361531108047E405, NULL);
		if (L_19)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_00d5;
	}

IL_00a0:
	{
		String_t* L_20 = ___value0;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral946C66BDF7790C4502BC0CE3B36FFE5731EF0E0D, NULL);
		if (L_21)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_00d5;
	}

IL_00af:
	{
		String_t* L_22 = ___value0;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral6BFD7BA3F02AE5E6C4368960EBBF95509912E86B, NULL);
		if (L_23)
		{
			goto IL_00d1;
		}
	}
	{
		goto IL_00d5;
	}

IL_00be:
	{
		String_t* L_24 = ___value0;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA, NULL);
		if (L_25)
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_00d5;
	}

IL_00cd:
	{
		return (int16_t)0;
	}

IL_00cf:
	{
		return (int16_t)1;
	}

IL_00d1:
	{
		return (int16_t)2;
	}

IL_00d3:
	{
		return (int16_t)3;
	}

IL_00d5:
	{
		String_t* L_26 = ___value0;
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCCC05F8DF8C510CDF184E30F3EF8C24A0BDA929)), L_26, NULL);
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EnvelopeDescriptor_GetGraphID_m34D019EF3998F8D395A3966555E1D9FD54AE9AB0_RuntimeMethod_var)));
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::ApplyDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDescriptor_ApplyDefault_m24BC00DADF60264D70D4BE872608A58AEC68C6F4 (EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* __this, const RuntimeMethod* method) 
{
	{
		__this->___DelayTime_2 = (0.0f);
		__this->___AttackTime_3 = (0.0f);
		__this->___AttackGraph_4 = (int16_t)1;
		__this->___HoldTime_5 = (0.0f);
		__this->___DecayTime_6 = (0.0f);
		__this->___DecayGraph_7 = (int16_t)1;
		__this->___SustainTime_8 = (3600.0f);
		__this->___ReleaseTime_9 = (0.0f);
		__this->___ReleaseGraph_10 = (int16_t)1;
		__this->___SustainLevel_11 = (0.0f);
		__this->___PeakLevel_12 = (1.0f);
		__this->___StartLevel_13 = (0.0f);
		__this->___Depth_14 = (1.0f);
		__this->___Vel2Delay_15 = (0.0f);
		__this->___Vel2Attack_16 = (0.0f);
		__this->___Vel2Hold_17 = (0.0f);
		__this->___Vel2Decay_18 = (0.0f);
		__this->___Vel2Sustain_19 = (0.0f);
		__this->___Vel2Release_20 = (0.0f);
		__this->___Vel2Depth_21 = (0.0f);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor::CheckValidParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDescriptor_CheckValidParameters_m18664AA7F67C83A56DA88A2812BD2DFE8969DCDF (EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->___ReleaseTime_9;
		float L_1;
		L_1 = SynthHelper_Clamp_mD46B99EDF04D8B5DF7A04439898FD1FFBD5ECD31(L_0, (0.00100000005f), (2.0f), NULL);
		__this->___ReleaseTime_9 = L_1;
		float L_2 = __this->___DelayTime_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_2, (0.0f), NULL);
		__this->___DelayTime_2 = L_3;
		float L_4 = __this->___AttackTime_3;
		float L_5;
		L_5 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_4, (0.0f), NULL);
		__this->___AttackTime_3 = L_5;
		float L_6 = __this->___HoldTime_5;
		float L_7;
		L_7 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_6, (0.0f), NULL);
		__this->___HoldTime_5 = L_7;
		float L_8 = __this->___DecayTime_6;
		float L_9;
		L_9 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_8, (0.0f), NULL);
		__this->___DecayTime_6 = L_9;
		float L_10 = __this->___SustainTime_8;
		float L_11;
		L_11 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_10, (0.0f), NULL);
		__this->___SustainTime_8 = L_11;
		float L_12 = __this->___ReleaseTime_9;
		float L_13;
		L_13 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_12, (0.0f), NULL);
		__this->___ReleaseTime_9 = L_13;
		float L_14 = __this->___SustainLevel_11;
		float L_15;
		L_15 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_14, (0.0f), NULL);
		__this->___SustainLevel_11 = L_15;
		float L_16 = __this->___PeakLevel_12;
		float L_17;
		L_17 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_16, (0.0f), NULL);
		__this->___PeakLevel_12 = L_17;
		float L_18 = __this->___StartLevel_13;
		float L_19 = __this->___PeakLevel_12;
		float L_20;
		L_20 = SynthHelper_Clamp_mD46B99EDF04D8B5DF7A04439898FD1FFBD5ECD31(L_18, (0.0f), L_19, NULL);
		__this->___StartLevel_13 = L_20;
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
// System.Void AudioSynthesis.Bank.Descriptors.FilterDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterDescriptor__ctor_mB8FF137067B986F0F54597D9A7A2FB72AD097EC2 (FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FilterDescriptor_ApplyDefault_mBBFE0617BE8AF96109D84DEC0129C2A9836E095A(__this, NULL);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.FilterDescriptor::Read(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterDescriptor_Read_m1F4DF7AD6EB4B4199209AC8D15C82A183D58C945 (FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14C488114FBBE9A74E618082CC97D3D75E12F952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral512DAFAD7D40E93D1E96F5FAA3ADB7BEF586A1E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7122A6F5A686007A1E2503B43675564557CDF7BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD88ECBD135D7E7861EE52F538BEC1F9767085EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE135694D353D9C51F92C18C26311D7B91975F27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		FilterDescriptor_ApplyDefault_mBBFE0617BE8AF96109D84DEC0129C2A9836E095A(__this, NULL);
		V_0 = 0;
		goto IL_0104;
	}

IL_000d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___description0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)61), NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_6 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___description0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_11)))
		{
			goto IL_0100;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___description0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_15, 0, L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_18, NULL);
		V_2 = L_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ___description0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_1;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		V_3 = L_26;
		String_t* L_27 = V_2;
		if (!L_27)
		{
			goto IL_0100;
		}
	}
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_29)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralAD88ECBD135D7E7861EE52F538BEC1F9767085EA, NULL);
		if (L_31)
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralDE135694D353D9C51F92C18C26311D7B91975F27, NULL);
		if (L_33)
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral7122A6F5A686007A1E2503B43675564557CDF7BA, NULL);
		if (L_35)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral14C488114FBBE9A74E618082CC97D3D75E12F952, NULL);
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral512DAFAD7D40E93D1E96F5FAA3ADB7BEF586A1E7, NULL);
		if (L_39)
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0100;
	}

IL_00a9:
	{
		String_t* L_40 = V_3;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_40, NULL);
		int32_t L_42;
		L_42 = FilterDescriptor_GetFilterType_mBBA9BFAD9BE4BA4452DDC51F6CEC94148E69FB87(L_41, NULL);
		__this->___FilterMethod_2 = L_42;
		goto IL_0100;
	}

IL_00bc:
	{
		String_t* L_43 = V_3;
		float L_44;
		L_44 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_43, NULL);
		__this->___CutOff_3 = L_44;
		goto IL_0100;
	}

IL_00ca:
	{
		String_t* L_45 = V_3;
		float L_46;
		L_46 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_45, NULL);
		__this->___Resonance_4 = L_46;
		goto IL_0100;
	}

IL_00d8:
	{
		String_t* L_47 = V_3;
		int16_t L_48;
		L_48 = Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60(L_47, NULL);
		__this->___RootKey_5 = L_48;
		goto IL_0100;
	}

IL_00e6:
	{
		String_t* L_49 = V_3;
		int16_t L_50;
		L_50 = Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60(L_49, NULL);
		__this->___KeyTrack_6 = L_50;
		goto IL_0100;
	}

IL_00f4:
	{
		String_t* L_51 = V_3;
		int16_t L_52;
		L_52 = Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60(L_51, NULL);
		__this->___VelTrack_7 = L_52;
	}

IL_0100:
	{
		int32_t L_53 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0104:
	{
		int32_t L_54 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = ___description0;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		FilterDescriptor_CheckValidParameters_mB9CC8346CD646959A53EAC7B4C3F2AA5C322FCA8(__this, NULL);
		return;
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.FilterDescriptor::Read(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FilterDescriptor_Read_mF87B72DC8A8D493158B7003A1578E052AD1C736F (FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		NullCheck(L_0);
		int16_t L_1;
		L_1 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_0);
		__this->___FilterMethod_2 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___reader0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_2);
		__this->___CutOff_3 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___reader0;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_4);
		__this->___Resonance_4 = L_5;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___reader0;
		NullCheck(L_6);
		int16_t L_7;
		L_7 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_6);
		__this->___RootKey_5 = L_7;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___reader0;
		NullCheck(L_8);
		int16_t L_9;
		L_9 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_8);
		__this->___KeyTrack_6 = L_9;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___reader0;
		NullCheck(L_10);
		int16_t L_11;
		L_11 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_10);
		__this->___VelTrack_7 = L_11;
		FilterDescriptor_CheckValidParameters_mB9CC8346CD646959A53EAC7B4C3F2AA5C322FCA8(__this, NULL);
		return ((int32_t)16);
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.FilterDescriptor::Write(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FilterDescriptor_Write_m5CA9F3F21792EDF5C10AFD81E91BB0701C86B421 (FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		int32_t L_1 = __this->___FilterMethod_2;
		NullCheck(L_0);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_0, ((int16_t)L_1));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer0;
		float L_3 = __this->___CutOff_3;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_2, L_3);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer0;
		float L_5 = __this->___Resonance_4;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_4, L_5);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___writer0;
		int16_t L_7 = __this->___RootKey_5;
		NullCheck(L_6);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_6, L_7);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___writer0;
		int16_t L_9 = __this->___KeyTrack_6;
		NullCheck(L_8);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_8, L_9);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_10 = ___writer0;
		int16_t L_11 = __this->___VelTrack_7;
		NullCheck(L_10);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_10, L_11);
		return ((int32_t)16);
	}
}
// AudioSynthesis.Bank.Components.FilterTypeEnum AudioSynthesis.Bank.Descriptors.FilterDescriptor::GetFilterType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FilterDescriptor_GetFilterType_mBBA9BFAD9BE4BA4452DDC51F6CEC94148E69FB87 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8E4FF5AC4045E7DBBD4E0E205869393964BA42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7402ADEA3CC253155752F9EDB1399DB87D680206);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F957464E9A75AEDCD2F037413702E8278E8153F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF322ECBFF4A42EACC2AFA92B3FD57721A0193059);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral7F957464E9A75AEDCD2F037413702E8278E8153F, NULL);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral1B8E4FF5AC4045E7DBBD4E0E205869393964BA42, NULL);
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralF322ECBFF4A42EACC2AFA92B3FD57721A0193059, NULL);
		if (L_8)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral7402ADEA3CC253155752F9EDB1399DB87D680206, NULL);
		if (L_10)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
		if (L_12)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0055;
	}

IL_004d:
	{
		return (int32_t)(3);
	}

IL_004f:
	{
		return (int32_t)(1);
	}

IL_0051:
	{
		return (int32_t)(2);
	}

IL_0053:
	{
		return (int32_t)(0);
	}

IL_0055:
	{
		String_t* L_13 = ___value0;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEFB293E0EE1046130E928744D03741ADD0AB4301)), L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FilterDescriptor_GetFilterType_mBBA9BFAD9BE4BA4452DDC51F6CEC94148E69FB87_RuntimeMethod_var)));
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.FilterDescriptor::ApplyDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterDescriptor_ApplyDefault_mBBFE0617BE8AF96109D84DEC0129C2A9836E095A (FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* __this, const RuntimeMethod* method) 
{
	{
		__this->___FilterMethod_2 = 0;
		__this->___CutOff_3 = (-1.0f);
		__this->___Resonance_4 = (1.0f);
		__this->___RootKey_5 = (int16_t)((int32_t)60);
		__this->___KeyTrack_6 = (int16_t)0;
		__this->___VelTrack_7 = (int16_t)0;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.FilterDescriptor::CheckValidParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterDescriptor_CheckValidParameters_mB9CC8346CD646959A53EAC7B4C3F2AA5C322FCA8 (FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___CutOff_3;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0014;
		}
	}
	{
		__this->___FilterMethod_2 = 0;
	}

IL_0014:
	{
		int16_t L_1 = __this->___RootKey_5;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int16_t L_2 = __this->___RootKey_5;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)127))))
		{
			goto IL_002f;
		}
	}

IL_0027:
	{
		__this->___RootKey_5 = (int16_t)((int32_t)60);
	}

IL_002f:
	{
		int16_t L_3 = __this->___KeyTrack_6;
		int16_t L_4;
		L_4 = SynthHelper_Clamp_m559B8CA6EC1454AC68BE6782197D239D13E04D63(L_3, (int16_t)0, (int16_t)((int32_t)1200), NULL);
		__this->___KeyTrack_6 = L_4;
		int16_t L_5 = __this->___VelTrack_7;
		int16_t L_6;
		L_6 = SynthHelper_Clamp_m559B8CA6EC1454AC68BE6782197D239D13E04D63(L_5, (int16_t)((int32_t)-9600), (int16_t)((int32_t)9600), NULL);
		__this->___VelTrack_7 = L_6;
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
// System.Void AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDescriptor__ctor_m2A2A54506DFD4213E5A305FFE4E1BE7682E23FA2 (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GeneratorDescriptor_ApplyDefault_mFE960F6F66365AA36F27588ACC4BCCC63655037B(__this, NULL);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::Read(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDescriptor_Read_m16825C1C4F50872DAE60A01331CC5A3632CDFB9A (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14C488114FBBE9A74E618082CC97D3D75E12F952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A2AE9AE1BECEBC8112125EB150DB6098A9CFE1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F6199971D948E24B53ABA08157EB49E99DA62A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3447B51C509C040B9552CA369519E7157E7BE3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral512DAFAD7D40E93D1E96F5FAA3ADB7BEF586A1E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7122A6F5A686007A1E2503B43675564557CDF7BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A6BCDED14B5459B04CF00E16083D9581780EB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA4067A0F1DCFC31F8AE691C45CB42539522160);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBC43C0457A0A1AE6192059195777CB2E2DF3248);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD42E43D5D64914D44A5E748772BF3FBFDFCE893);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE98AD5931AB31D6C39FC8F20166DA8333ED37601);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF49A70C9B852B75416510EF51C65CE9602339B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	{
		GeneratorDescriptor_ApplyDefault_mFE960F6F66365AA36F27588ACC4BCCC63655037B(__this, NULL);
		V_0 = 0;
		goto IL_033a;
	}

IL_000d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___description0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)61), NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0336;
		}
	}
	{
		int32_t L_6 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___description0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_11)))
		{
			goto IL_0336;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___description0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_15, 0, L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_18, NULL);
		V_2 = L_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ___description0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_1;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		V_3 = L_26;
		String_t* L_27 = V_2;
		if (!L_27)
		{
			goto IL_0336;
		}
	}
	{
		String_t* L_28 = V_2;
		uint32_t L_29;
		L_29 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF5D3E9C8845C573F909CCF6B26DBD06653FC39E7(L_28, NULL);
		V_4 = L_29;
		uint32_t L_30 = V_4;
		if ((!(((uint32_t)L_30) <= ((uint32_t)((int32_t)1719115907)))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_31 = V_4;
		if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)767941905)))))
		{
			goto IL_009c;
		}
	}
	{
		uint32_t L_32 = V_4;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)156375386))))
		{
			goto IL_01a2;
		}
	}
	{
		uint32_t L_33 = V_4;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)348705738))))
		{
			goto IL_01e1;
		}
	}
	{
		uint32_t L_34 = V_4;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)767941905))))
		{
			goto IL_018d;
		}
	}
	{
		goto IL_0336;
	}

IL_009c:
	{
		uint32_t L_35 = V_4;
		if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)1361572173)))))
		{
			goto IL_00c2;
		}
	}
	{
		uint32_t L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)1082146284))))
		{
			goto IL_0220;
		}
	}
	{
		uint32_t L_37 = V_4;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0163;
		}
	}
	{
		goto IL_0336;
	}

IL_00c2:
	{
		uint32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)1557427900))))
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)1719115907))))
		{
			goto IL_0235;
		}
	}
	{
		goto IL_0336;
	}

IL_00df:
	{
		uint32_t L_40 = V_4;
		if ((!(((uint32_t)L_40) <= ((uint32_t)((int32_t)1954127169)))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_41 = V_4;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)1749091475))))
		{
			goto IL_025f;
		}
	}
	{
		uint32_t L_42 = V_4;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)1928504751))))
		{
			goto IL_01b7;
		}
	}
	{
		uint32_t L_43 = V_4;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)1954127169))))
		{
			goto IL_024a;
		}
	}
	{
		goto IL_0336;
	}

IL_0111:
	{
		uint32_t L_44 = V_4;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-917468268)))))
		{
			goto IL_0134;
		}
	}
	{
		uint32_t L_45 = V_4;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)-1714862332))))
		{
			goto IL_01f6;
		}
	}
	{
		uint32_t L_46 = V_4;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)-917468268))))
		{
			goto IL_014e;
		}
	}
	{
		goto IL_0336;
	}

IL_0134:
	{
		uint32_t L_47 = V_4;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)-461217083))))
		{
			goto IL_020b;
		}
	}
	{
		uint32_t L_48 = V_4;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)-261204480))))
		{
			goto IL_0178;
		}
	}
	{
		goto IL_0336;
	}

IL_014e:
	{
		String_t* L_49 = V_2;
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteral2A2AE9AE1BECEBC8112125EB150DB6098A9CFE1A, NULL);
		if (L_50)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_0336;
	}

IL_0163:
	{
		String_t* L_51 = V_2;
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_52)
		{
			goto IL_028a;
		}
	}
	{
		goto IL_0336;
	}

IL_0178:
	{
		String_t* L_53 = V_2;
		bool L_54;
		L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteralCD42E43D5D64914D44A5E748772BF3FBFDFCE893, NULL);
		if (L_54)
		{
			goto IL_02a0;
		}
	}
	{
		goto IL_0336;
	}

IL_018d:
	{
		String_t* L_55 = V_2;
		bool L_56;
		L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteralE98AD5931AB31D6C39FC8F20166DA8333ED37601, NULL);
		if (L_56)
		{
			goto IL_02ac;
		}
	}
	{
		goto IL_0336;
	}

IL_01a2:
	{
		String_t* L_57 = V_2;
		bool L_58;
		L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteralCBC43C0457A0A1AE6192059195777CB2E2DF3248, NULL);
		if (L_58)
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_0336;
	}

IL_01b7:
	{
		String_t* L_59 = V_2;
		bool L_60;
		L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteral2F6199971D948E24B53ABA08157EB49E99DA62A1, NULL);
		if (L_60)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0336;
	}

IL_01cc:
	{
		String_t* L_61 = V_2;
		bool L_62;
		L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteral3447B51C509C040B9552CA369519E7157E7BE3AF, NULL);
		if (L_62)
		{
			goto IL_02d6;
		}
	}
	{
		goto IL_0336;
	}

IL_01e1:
	{
		String_t* L_63 = V_2;
		bool L_64;
		L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4, NULL);
		if (L_64)
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_0336;
	}

IL_01f6:
	{
		String_t* L_65 = V_2;
		bool L_66;
		L_66 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_65, _stringLiteralEF49A70C9B852B75416510EF51C65CE9602339B3, NULL);
		if (L_66)
		{
			goto IL_02f2;
		}
	}
	{
		goto IL_0336;
	}

IL_020b:
	{
		String_t* L_67 = V_2;
		bool L_68;
		L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteral7122A6F5A686007A1E2503B43675564557CDF7BA, NULL);
		if (L_68)
		{
			goto IL_0300;
		}
	}
	{
		goto IL_0336;
	}

IL_0220:
	{
		String_t* L_69 = V_2;
		bool L_70;
		L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_69, _stringLiteral8EA4067A0F1DCFC31F8AE691C45CB42539522160, NULL);
		if (L_70)
		{
			goto IL_0300;
		}
	}
	{
		goto IL_0336;
	}

IL_0235:
	{
		String_t* L_71 = V_2;
		bool L_72;
		L_72 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_71, _stringLiteral14C488114FBBE9A74E618082CC97D3D75E12F952, NULL);
		if (L_72)
		{
			goto IL_030e;
		}
	}
	{
		goto IL_0336;
	}

IL_024a:
	{
		String_t* L_73 = V_2;
		bool L_74;
		L_74 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_73, _stringLiteral512DAFAD7D40E93D1E96F5FAA3ADB7BEF586A1E7, NULL);
		if (L_74)
		{
			goto IL_031c;
		}
	}
	{
		goto IL_0336;
	}

IL_025f:
	{
		String_t* L_75 = V_2;
		bool L_76;
		L_76 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_75, _stringLiteral84A6BCDED14B5459B04CF00E16083D9581780EB4, NULL);
		if (L_76)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_0336;
	}

IL_0274:
	{
		String_t* L_77 = V_3;
		NullCheck(L_77);
		String_t* L_78;
		L_78 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_77, NULL);
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		int32_t L_79;
		L_79 = Generator_GetLoopModeFromString_mE1CD369010064FFB9D12CA01E2AB3EAFC19A9140(L_78, NULL);
		__this->___LoopMethod_2 = L_79;
		goto IL_0336;
	}

IL_028a:
	{
		String_t* L_80 = V_3;
		NullCheck(L_80);
		String_t* L_81;
		L_81 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_80, NULL);
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		int32_t L_82;
		L_82 = Generator_GetWaveformFromString_mA0EF1D2AA607F6E9B734A8587B23B384A39A646D(L_81, NULL);
		__this->___SamplerType_3 = L_82;
		goto IL_0336;
	}

IL_02a0:
	{
		String_t* L_83 = V_3;
		__this->___AssetName_4 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AssetName_4), (void*)L_83);
		goto IL_0336;
	}

IL_02ac:
	{
		String_t* L_84 = V_3;
		double L_85;
		L_85 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_84, NULL);
		__this->___EndPhase_5 = L_85;
		goto IL_0336;
	}

IL_02ba:
	{
		String_t* L_86 = V_3;
		double L_87;
		L_87 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_86, NULL);
		__this->___StartPhase_6 = L_87;
		goto IL_0336;
	}

IL_02c8:
	{
		String_t* L_88 = V_3;
		double L_89;
		L_89 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_88, NULL);
		__this->___LoopEndPhase_7 = L_89;
		goto IL_0336;
	}

IL_02d6:
	{
		String_t* L_90 = V_3;
		double L_91;
		L_91 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_90, NULL);
		__this->___LoopStartPhase_8 = L_91;
		goto IL_0336;
	}

IL_02e4:
	{
		String_t* L_92 = V_3;
		double L_93;
		L_93 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_92, NULL);
		__this->___Offset_9 = L_93;
		goto IL_0336;
	}

IL_02f2:
	{
		String_t* L_94 = V_3;
		double L_95;
		L_95 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_94, NULL);
		__this->___Period_10 = L_95;
		goto IL_0336;
	}

IL_0300:
	{
		String_t* L_96 = V_3;
		int16_t L_97;
		L_97 = Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60(L_96, NULL);
		__this->___Rootkey_11 = L_97;
		goto IL_0336;
	}

IL_030e:
	{
		String_t* L_98 = V_3;
		int16_t L_99;
		L_99 = Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60(L_98, NULL);
		__this->___KeyTrack_12 = L_99;
		goto IL_0336;
	}

IL_031c:
	{
		String_t* L_100 = V_3;
		int16_t L_101;
		L_101 = Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60(L_100, NULL);
		__this->___VelTrack_13 = L_101;
		goto IL_0336;
	}

IL_032a:
	{
		String_t* L_102 = V_3;
		int16_t L_103;
		L_103 = Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60(L_102, NULL);
		__this->___Tune_14 = L_103;
	}

IL_0336:
	{
		int32_t L_104 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_033a:
	{
		int32_t L_105 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_106 = ___description0;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::Read(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeneratorDescriptor_Read_mEC71A42DFD7E5C9E4312C15CEF00DAF8D63DC280 (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		NullCheck(L_0);
		int16_t L_1;
		L_1 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_0);
		__this->___LoopMethod_2 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___reader0;
		NullCheck(L_2);
		int16_t L_3;
		L_3 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_2);
		__this->___SamplerType_3 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___reader0;
		String_t* L_5;
		L_5 = IOHelper_Read8BitString_m5D33C73A6175EEFA160688D635EE9B6AAB1CF3B6(L_4, ((int32_t)20), NULL);
		__this->___AssetName_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AssetName_4), (void*)L_5);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___reader0;
		NullCheck(L_6);
		double L_7;
		L_7 = VirtualFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_6);
		__this->___EndPhase_5 = L_7;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___reader0;
		NullCheck(L_8);
		double L_9;
		L_9 = VirtualFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_8);
		__this->___StartPhase_6 = L_9;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___reader0;
		NullCheck(L_10);
		double L_11;
		L_11 = VirtualFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_10);
		__this->___LoopEndPhase_7 = L_11;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = ___reader0;
		NullCheck(L_12);
		double L_13;
		L_13 = VirtualFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_12);
		__this->___LoopStartPhase_8 = L_13;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = ___reader0;
		NullCheck(L_14);
		double L_15;
		L_15 = VirtualFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_14);
		__this->___Offset_9 = L_15;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___reader0;
		NullCheck(L_16);
		double L_17;
		L_17 = VirtualFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_16);
		__this->___Period_10 = L_17;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = ___reader0;
		NullCheck(L_18);
		int16_t L_19;
		L_19 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_18);
		__this->___Rootkey_11 = L_19;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = ___reader0;
		NullCheck(L_20);
		int16_t L_21;
		L_21 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_20);
		__this->___KeyTrack_12 = L_21;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___reader0;
		NullCheck(L_22);
		int16_t L_23;
		L_23 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_22);
		__this->___VelTrack_13 = L_23;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_24 = ___reader0;
		NullCheck(L_24);
		int16_t L_25;
		L_25 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_24);
		__this->___Tune_14 = L_25;
		return ((int32_t)80);
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::Write(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeneratorDescriptor_Write_mB2845C62E59CEC84FF428FD957447309C785ECA5 (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		int32_t L_1 = __this->___LoopMethod_2;
		NullCheck(L_0);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_0, ((int16_t)L_1));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer0;
		int32_t L_3 = __this->___SamplerType_3;
		NullCheck(L_2);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_2, ((int16_t)L_3));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer0;
		String_t* L_5 = __this->___AssetName_4;
		IOHelper_Write8BitString_m51DA4CE8B4F479414F32184B29DF6C18258B7ABE(L_4, L_5, ((int32_t)20), NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___writer0;
		double L_7 = __this->___EndPhase_5;
		NullCheck(L_6);
		VirtualActionInvoker1< double >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_6, L_7);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___writer0;
		double L_9 = __this->___StartPhase_6;
		NullCheck(L_8);
		VirtualActionInvoker1< double >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_8, L_9);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_10 = ___writer0;
		double L_11 = __this->___LoopEndPhase_7;
		NullCheck(L_10);
		VirtualActionInvoker1< double >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_10, L_11);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_12 = ___writer0;
		double L_13 = __this->___LoopStartPhase_8;
		NullCheck(L_12);
		VirtualActionInvoker1< double >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_12, L_13);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_14 = ___writer0;
		double L_15 = __this->___Offset_9;
		NullCheck(L_14);
		VirtualActionInvoker1< double >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_14, L_15);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = ___writer0;
		double L_17 = __this->___Period_10;
		NullCheck(L_16);
		VirtualActionInvoker1< double >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_16, L_17);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_18 = ___writer0;
		int16_t L_19 = __this->___Rootkey_11;
		NullCheck(L_18);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_18, L_19);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_20 = ___writer0;
		int16_t L_21 = __this->___KeyTrack_12;
		NullCheck(L_20);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_20, L_21);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_22 = ___writer0;
		int16_t L_23 = __this->___VelTrack_13;
		NullCheck(L_22);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_22, L_23);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_24 = ___writer0;
		int16_t L_25 = __this->___Tune_14;
		NullCheck(L_24);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_24, L_25);
		return ((int32_t)80);
	}
}
// AudioSynthesis.Bank.Components.Generators.Generator AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::ToGenerator(AudioSynthesis.Bank.AssetManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Generator_tADF163794E3E90EE4A764830F2731836023B4A32* GeneratorDescriptor_ToGenerator_m71D8962435208AC33C4FFBE708E20E00CA5D795D (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* __this, AssetManager_tAB21564C528D6B60DD1BD654C6A9EA9220C69A77* ___assets0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___SamplerType_3;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_0027;
			}
			case 5:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0052;
	}

IL_0027:
	{
		AssetManager_tAB21564C528D6B60DD1BD654C6A9EA9220C69A77* L_2 = ___assets0;
		SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* L_3 = (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121*)il2cpp_codegen_object_new(SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SampleGenerator__ctor_mEC77F49216C38D5DA3B5F03C8DC6B688E7AD5ABB(L_3, __this, L_2, NULL);
		return L_3;
	}

IL_002f:
	{
		SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776* L_4 = (SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776*)il2cpp_codegen_object_new(SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SawGenerator__ctor_m63BB8E828DE4DB99F5A970AE312C64661E56A8D6(L_4, __this, NULL);
		return L_4;
	}

IL_0036:
	{
		SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* L_5 = (SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D*)il2cpp_codegen_object_new(SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SineGenerator__ctor_m6E89C7662634417B9495F94439ECE7E7D337CD9E(L_5, __this, NULL);
		return L_5;
	}

IL_003d:
	{
		SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41* L_6 = (SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41*)il2cpp_codegen_object_new(SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SquareGenerator__ctor_mA64659B7E5DE316ED502B319980E6948921F921F(L_6, __this, NULL);
		return L_6;
	}

IL_0044:
	{
		TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0* L_7 = (TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0*)il2cpp_codegen_object_new(TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TriangleGenerator__ctor_m66DBC2E0329DBE7F530480F7C13CD558CB86E51C(L_7, __this, NULL);
		return L_7;
	}

IL_004b:
	{
		WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902* L_8 = (WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902*)il2cpp_codegen_object_new(WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WhiteNoiseGenerator__ctor_m42C03D9F9BA2CFCC7F2C6942398FAB5FFC6DC306(L_8, __this, NULL);
		return L_8;
	}

IL_0052:
	{
		int32_t L_9 = __this->___SamplerType_3;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveformEnum_tDD161CE5DE46ADF6DB8E268B5D3CB6C9D7D0C3F7_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD0A176270C47E1C4123185A66A98B3D6B58E450)), L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GeneratorDescriptor_ToGenerator_m71D8962435208AC33C4FFBE708E20E00CA5D795D_RuntimeMethod_var)));
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.GeneratorDescriptor::ApplyDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDescriptor_ApplyDefault_mFE960F6F66365AA36F27588ACC4BCCC63655037B (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___LoopMethod_2 = 0;
		__this->___SamplerType_3 = 0;
		__this->___AssetName_4 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AssetName_4), (void*)_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		__this->___EndPhase_5 = (-1.0);
		__this->___StartPhase_6 = (-1.0);
		__this->___LoopEndPhase_7 = (-1.0);
		__this->___LoopStartPhase_8 = (-1.0);
		__this->___Offset_9 = (0.0);
		__this->___Period_10 = (-1.0);
		__this->___Rootkey_11 = (int16_t)(-1);
		__this->___KeyTrack_12 = (int16_t)((int32_t)100);
		__this->___VelTrack_13 = (int16_t)0;
		__this->___Tune_14 = (int16_t)0;
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
// System.Void AudioSynthesis.Bank.Descriptors.LfoDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LfoDescriptor__ctor_mD9E326596F80BF9593C4B9802C9852C33C281C3F (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		LfoDescriptor_ApplyDefault_mF5E46C15EA83CA7DC74C5C8FBE41D0005BA4E450(__this, NULL);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.LfoDescriptor::Read(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LfoDescriptor_Read_mAA7C597AAE1BB41E9C6660F9E93CB7EDA7216C37 (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2960CB8A8A3623978AF0B030510E5DE7DE34BE46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		LfoDescriptor_ApplyDefault_mF5E46C15EA83CA7DC74C5C8FBE41D0005BA4E450(__this, NULL);
		V_0 = 0;
		goto IL_00d0;
	}

IL_000d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___description0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)61), NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_6 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___description0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_11)))
		{
			goto IL_00cc;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___description0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_15, 0, L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_18, NULL);
		V_2 = L_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ___description0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_1;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		V_3 = L_26;
		String_t* L_27 = V_2;
		if (!L_27)
		{
			goto IL_00cc;
		}
	}
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2960CB8A8A3623978AF0B030510E5DE7DE34BE46, NULL);
		if (L_29)
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51, NULL);
		if (L_31)
		{
			goto IL_009a;
		}
	}
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, NULL);
		if (L_33)
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_35)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00cc;
	}

IL_008c:
	{
		String_t* L_36 = V_3;
		float L_37;
		L_37 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_36, NULL);
		__this->___DelayTime_2 = L_37;
		goto IL_00cc;
	}

IL_009a:
	{
		String_t* L_38 = V_3;
		float L_39;
		L_39 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_38, NULL);
		__this->___Frequency_3 = L_39;
		goto IL_00cc;
	}

IL_00a8:
	{
		String_t* L_40 = V_3;
		float L_41;
		L_41 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_40, NULL);
		__this->___Depth_4 = L_41;
		goto IL_00cc;
	}

IL_00b6:
	{
		String_t* L_42 = V_3;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_42, NULL);
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		int32_t L_44;
		L_44 = Generator_GetWaveformFromString_mA0EF1D2AA607F6E9B734A8587B23B384A39A646D(L_43, NULL);
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_45;
		L_45 = LfoDescriptor_GetGenerator_mB4E830621F55EE5D185AA16C0A432C54125F2588(L_44, NULL);
		__this->___Generator_5 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Generator_5), (void*)L_45);
	}

IL_00cc:
	{
		int32_t L_46 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00d0:
	{
		int32_t L_47 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = ___description0;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		LfoDescriptor_CheckValidParameters_mB856FD34E59C310C044CECFE46BCF27344762A58(__this, NULL);
		return;
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.LfoDescriptor::Read(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LfoDescriptor_Read_m84A64C61ECB2F5F78DFAFC35F7D68489CC2AB8C9 (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_0);
		__this->___DelayTime_2 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___reader0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_2);
		__this->___Frequency_3 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___reader0;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_4);
		__this->___Depth_4 = L_5;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___reader0;
		NullCheck(L_6);
		int16_t L_7;
		L_7 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_6);
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_8;
		L_8 = LfoDescriptor_GetGenerator_mB4E830621F55EE5D185AA16C0A432C54125F2588(L_7, NULL);
		__this->___Generator_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Generator_5), (void*)L_8);
		LfoDescriptor_CheckValidParameters_mB856FD34E59C310C044CECFE46BCF27344762A58(__this, NULL);
		return ((int32_t)14);
	}
}
// System.Int32 AudioSynthesis.Bank.Descriptors.LfoDescriptor::Write(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LfoDescriptor_Write_m0AF1FB70A6DDB9CA6F4731939642FE14F810976E (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		float L_1 = __this->___DelayTime_2;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_0, L_1);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___writer0;
		float L_3 = __this->___Frequency_3;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_2, L_3);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___writer0;
		float L_5 = __this->___Depth_4;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(23 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_4, L_5);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = ___writer0;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_7 = __this->___Generator_5;
		int32_t L_8;
		L_8 = LfoDescriptor_GetWaveform_m8A76C55C4D5E7C38CB9A606ECA1A1DD276400CDE(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< int16_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_6, ((int16_t)L_8));
		return ((int32_t)14);
	}
}
// AudioSynthesis.Bank.Components.WaveformEnum AudioSynthesis.Bank.Descriptors.LfoDescriptor::GetWaveform(AudioSynthesis.Bank.Components.Generators.Generator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LfoDescriptor_GetWaveform_m8A76C55C4D5E7C38CB9A606ECA1A1DD276400CDE (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* ___gen0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_0 = ___gen0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776* L_1 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSaw_1;
		if ((!(((RuntimeObject*)(Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)L_0) == ((RuntimeObject*)(SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776*)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(2);
	}

IL_000a:
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_2 = ___gen0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* L_3 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSine_0;
		if ((!(((RuntimeObject*)(Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)L_2) == ((RuntimeObject*)(SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D*)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0014:
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_4 = ___gen0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41* L_5 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSquare_2;
		if ((!(((RuntimeObject*)(Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)L_4) == ((RuntimeObject*)(SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41*)L_5))))
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001e:
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_6 = ___gen0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0* L_7 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultTriangle_3;
		if ((!(((RuntimeObject*)(Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)L_6) == ((RuntimeObject*)(TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0*)L_7))))
		{
			goto IL_0028;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0028:
	{
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral465F31FEE3CEB14806FFA1845BE184A11FDD1B16)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LfoDescriptor_GetWaveform_m8A76C55C4D5E7C38CB9A606ECA1A1DD276400CDE_RuntimeMethod_var)));
	}
}
// AudioSynthesis.Bank.Components.Generators.Generator AudioSynthesis.Bank.Descriptors.LfoDescriptor::GetGenerator(AudioSynthesis.Bank.Components.WaveformEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Generator_tADF163794E3E90EE4A764830F2731836023B4A32* LfoDescriptor_GetGenerator_mB4E830621F55EE5D185AA16C0A432C54125F2588 (int32_t ___waveform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___waveform0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0016;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0028;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776* L_1 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSaw_1;
		return L_1;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41* L_2 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSquare_2;
		return L_2;
	}

IL_0022:
	{
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0* L_3 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultTriangle_3;
		return L_3;
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* L_4 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSine_0;
		return L_4;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.LfoDescriptor::ApplyDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LfoDescriptor_ApplyDefault_mF5E46C15EA83CA7DC74C5C8FBE41D0005BA4E450 (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___DelayTime_2 = (0.0f);
		__this->___Frequency_3 = (8.0f);
		__this->___Depth_4 = (1.0f);
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* L_0 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSine_0;
		__this->___Generator_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Generator_5), (void*)L_0);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Descriptors.LfoDescriptor::CheckValidParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LfoDescriptor_CheckValidParameters_mB856FD34E59C310C044CECFE46BCF27344762A58 (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->___DelayTime_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_0, (0.0f), NULL);
		__this->___DelayTime_2 = L_1;
		float L_2 = __this->___Frequency_3;
		float L_3;
		L_3 = SynthHelper_Clamp_mD46B99EDF04D8B5DF7A04439898FD1FFBD5ECD31(L_2, (9.99999975E-06f), (20.0f), NULL);
		__this->___Frequency_3 = L_3;
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
// System.Single AudioSynthesis.Bank.Components.Envelope::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Envelope_get_Value_mDDD912EFEE57225CE882DDBC6226EDB6362EB933 (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___value_4;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Envelope::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Envelope_set_Value_m2724EAE5038D4A5BBB374728A6DF5A211626E6BA (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___value_4 = L_0;
		return;
	}
}
// AudioSynthesis.Bank.Components.EnvelopeStateEnum AudioSynthesis.Bank.Components.Envelope::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Envelope_get_CurrentState_m9EC1997E191B523345A2043F54517C5C815721A7 (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___envState_0;
		return L_0;
	}
}
// System.Single AudioSynthesis.Bank.Components.Envelope::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Envelope_get_Depth_mE598455584FFA07D3B0369DF9B10C6A49395944C (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___depth_5;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Envelope::set_Depth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Envelope_set_Depth_mA392E821C6AB695BE936D33027CE67F7097640B8 (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___depth_5 = L_0;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Envelope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Envelope__ctor_m493055A1DEAFF748A8BE05511F1D17A2C3017204 (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_0 = (EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB*)(EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB*)SZArrayNew(EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB_il2cpp_TypeInfo_var, (uint32_t)7);
		__this->___stages_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stages_1), (void*)L_0);
		V_0 = 0;
		goto IL_003b;
	}

IL_0016:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_1 = __this->___stages_1;
		int32_t L_2 = V_0;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_3 = (EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007*)il2cpp_codegen_object_new(EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EnvelopeStage__ctor_m09BD16265C162B7AA17A34493A9DFBBC0332BA5D(L_3, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007*)L_3);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_4 = __this->___stages_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_8 = ((Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_StaticFields*)il2cpp_codegen_static_fields_for(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var))->___EnvelopeTables_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		L_7->___graph_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___graph_1), (void*)L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_13 = __this->___stages_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_14 = __this->___stages_1;
		NullCheck(L_14);
		int32_t L_15 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		L_16->___reverse_4 = (bool)1;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_17 = __this->___stages_1;
		NullCheck(L_17);
		int32_t L_18 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		L_19->___reverse_4 = (bool)1;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_20 = __this->___stages_1;
		NullCheck(L_20);
		int32_t L_21 = 6;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		L_22->___time_0 = ((int32_t)100000000);
		__this->___envState_0 = 6;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_23 = __this->___stages_1;
		int32_t L_24 = __this->___envState_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		__this->___stage_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stage_2), (void*)L_26);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Envelope::QuickSetup(System.Int32,System.Single,AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Envelope_QuickSetup_mDB8C27D0BC7A1B5AEAE62C4D992B196BDDC04537 (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, int32_t ___sampleRate0, float ___velocity1, EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* ___envelopeInfo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* G_B2_0 = NULL;
	EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* G_B1_0 = NULL;
	EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* G_B3_0 = NULL;
	float G_B4_0 = 0.0f;
	EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* G_B4_1 = NULL;
	{
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_0 = ___envelopeInfo2;
		NullCheck(L_0);
		float L_1 = L_0->___Depth_14;
		float L_2 = ___velocity1;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_3 = ___envelopeInfo2;
		NullCheck(L_3);
		float L_4 = L_3->___Vel2Depth_21;
		__this->___depth_5 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_4))));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_5 = __this->___stages_1;
		NullCheck(L_5);
		int32_t L_6 = 0;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		L_7->___offset_3 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_8 = __this->___stages_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		L_10->___scale_2 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_11 = __this->___stages_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_15 = ___envelopeInfo2;
		NullCheck(L_15);
		float L_16 = L_15->___DelayTime_2;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_17 = ___envelopeInfo2;
		NullCheck(L_17);
		float L_18 = L_17->___Vel2Delay_15;
		float L_19 = ___velocity1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_14), ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(L_18, L_19))))))), NULL);
		NullCheck(L_13);
		L_13->___time_0 = L_20;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_21 = __this->___stages_1;
		NullCheck(L_21);
		int32_t L_22 = 1;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_24 = ___envelopeInfo2;
		NullCheck(L_24);
		float L_25 = L_24->___StartLevel_13;
		NullCheck(L_23);
		L_23->___offset_3 = L_25;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_26 = __this->___stages_1;
		NullCheck(L_26);
		int32_t L_27 = 1;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_29 = ___envelopeInfo2;
		NullCheck(L_29);
		float L_30 = L_29->___PeakLevel_12;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_31 = ___envelopeInfo2;
		NullCheck(L_31);
		float L_32 = L_31->___StartLevel_13;
		NullCheck(L_28);
		L_28->___scale_2 = ((float)il2cpp_codegen_subtract(L_30, L_32));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_33 = __this->___stages_1;
		NullCheck(L_33);
		int32_t L_34 = 1;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_37 = ___envelopeInfo2;
		NullCheck(L_37);
		float L_38 = L_37->___AttackTime_3;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_39 = ___envelopeInfo2;
		NullCheck(L_39);
		float L_40 = L_39->___Vel2Attack_16;
		float L_41 = ___velocity1;
		int32_t L_42;
		L_42 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_36), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(L_40, L_41))))))), NULL);
		NullCheck(L_35);
		L_35->___time_0 = L_42;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_43 = __this->___stages_1;
		NullCheck(L_43);
		int32_t L_44 = 1;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		il2cpp_codegen_runtime_class_init_inline(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_46 = ((Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_StaticFields*)il2cpp_codegen_static_fields_for(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var))->___EnvelopeTables_0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_47 = ___envelopeInfo2;
		NullCheck(L_47);
		int16_t L_48 = L_47->___AttackGraph_4;
		NullCheck(L_46);
		int16_t L_49 = L_48;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_45);
		L_45->___graph_1 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___graph_1), (void*)L_50);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_51 = __this->___stages_1;
		NullCheck(L_51);
		int32_t L_52 = 2;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		L_53->___offset_3 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_54 = __this->___stages_1;
		NullCheck(L_54);
		int32_t L_55 = 2;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_57 = ___envelopeInfo2;
		NullCheck(L_57);
		float L_58 = L_57->___PeakLevel_12;
		NullCheck(L_56);
		L_56->___scale_2 = L_58;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_59 = __this->___stages_1;
		NullCheck(L_59);
		int32_t L_60 = 2;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int32_t L_62 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_63 = ___envelopeInfo2;
		NullCheck(L_63);
		float L_64 = L_63->___HoldTime_5;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_65 = ___envelopeInfo2;
		NullCheck(L_65);
		float L_66 = L_65->___Vel2Hold_17;
		float L_67 = ___velocity1;
		int32_t L_68;
		L_68 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_62), ((float)il2cpp_codegen_add(L_64, ((float)il2cpp_codegen_multiply(L_66, L_67))))))), NULL);
		NullCheck(L_61);
		L_61->___time_0 = L_68;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_69 = __this->___stages_1;
		NullCheck(L_69);
		int32_t L_70 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_72 = ___envelopeInfo2;
		NullCheck(L_72);
		float L_73 = L_72->___SustainLevel_11;
		NullCheck(L_71);
		L_71->___offset_3 = L_73;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_74 = __this->___stages_1;
		NullCheck(L_74);
		int32_t L_75 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_77 = ___envelopeInfo2;
		NullCheck(L_77);
		float L_78 = L_77->___PeakLevel_12;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_79 = ___envelopeInfo2;
		NullCheck(L_79);
		float L_80 = L_79->___SustainLevel_11;
		NullCheck(L_76);
		L_76->___scale_2 = ((float)il2cpp_codegen_subtract(L_78, L_80));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_81 = __this->___stages_1;
		NullCheck(L_81);
		int32_t L_82 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_85 = ___envelopeInfo2;
		NullCheck(L_85);
		float L_86 = L_85->___DecayTime_6;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_87 = ___envelopeInfo2;
		NullCheck(L_87);
		float L_88 = L_87->___Vel2Decay_18;
		float L_89 = ___velocity1;
		int32_t L_90;
		L_90 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_84), ((float)il2cpp_codegen_add(L_86, ((float)il2cpp_codegen_multiply(L_88, L_89))))))), NULL);
		NullCheck(L_83);
		L_83->___time_0 = L_90;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_91 = __this->___stages_1;
		NullCheck(L_91);
		int32_t L_92 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_94 = ((Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_StaticFields*)il2cpp_codegen_static_fields_for(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var))->___EnvelopeTables_0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_95 = ___envelopeInfo2;
		NullCheck(L_95);
		int16_t L_96 = L_95->___DecayGraph_7;
		NullCheck(L_94);
		int16_t L_97 = L_96;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_98 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_93);
		L_93->___graph_1 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&L_93->___graph_1), (void*)L_98);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_99 = __this->___stages_1;
		NullCheck(L_99);
		int32_t L_100 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		L_101->___offset_3 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_102 = __this->___stages_1;
		NullCheck(L_102);
		int32_t L_103 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_105 = ___envelopeInfo2;
		NullCheck(L_105);
		float L_106 = L_105->___SustainLevel_11;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_107 = ___envelopeInfo2;
		NullCheck(L_107);
		float L_108 = L_107->___Vel2Sustain_19;
		float L_109 = ___velocity1;
		NullCheck(L_104);
		L_104->___scale_2 = ((float)il2cpp_codegen_add(L_106, ((float)il2cpp_codegen_multiply(L_108, L_109))));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_110 = __this->___stages_1;
		NullCheck(L_110);
		int32_t L_111 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		int32_t L_113 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_114 = ___envelopeInfo2;
		NullCheck(L_114);
		float L_115 = L_114->___SustainTime_8;
		NullCheck(L_112);
		L_112->___time_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_113), L_115)));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_116 = __this->___stages_1;
		NullCheck(L_116);
		int32_t L_117 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		L_118->___offset_3 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_119 = __this->___stages_1;
		NullCheck(L_119);
		int32_t L_120 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_122 = __this->___stages_1;
		NullCheck(L_122);
		int32_t L_123 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_124);
		int32_t L_125 = L_124->___time_0;
		G_B1_0 = L_121;
		if (L_125)
		{
			G_B2_0 = L_121;
			goto IL_01ff;
		}
	}
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_126 = __this->___stages_1;
		NullCheck(L_126);
		int32_t L_127 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		int32_t L_129 = L_128->___time_0;
		G_B2_0 = G_B1_0;
		if (!L_129)
		{
			G_B3_0 = G_B1_0;
			goto IL_020e;
		}
	}

IL_01ff:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_130 = __this->___stages_1;
		NullCheck(L_130);
		int32_t L_131 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		float L_133 = L_132->___scale_2;
		G_B4_0 = L_133;
		G_B4_1 = G_B2_0;
		goto IL_0214;
	}

IL_020e:
	{
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_134 = ___envelopeInfo2;
		NullCheck(L_134);
		float L_135 = L_134->___PeakLevel_12;
		G_B4_0 = L_135;
		G_B4_1 = G_B3_0;
	}

IL_0214:
	{
		NullCheck(G_B4_1);
		G_B4_1->___scale_2 = G_B4_0;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_136 = __this->___stages_1;
		NullCheck(L_136);
		int32_t L_137 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_140 = ___envelopeInfo2;
		NullCheck(L_140);
		float L_141 = L_140->___ReleaseTime_9;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_142 = ___envelopeInfo2;
		NullCheck(L_142);
		float L_143 = L_142->___Vel2Release_20;
		float L_144 = ___velocity1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_145;
		L_145 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_139), ((float)il2cpp_codegen_add(L_141, ((float)il2cpp_codegen_multiply(L_143, L_144))))))), NULL);
		NullCheck(L_138);
		L_138->___time_0 = L_145;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_146 = __this->___stages_1;
		NullCheck(L_146);
		int32_t L_147 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		il2cpp_codegen_runtime_class_init_inline(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_149 = ((Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_StaticFields*)il2cpp_codegen_static_fields_for(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var))->___EnvelopeTables_0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_150 = ___envelopeInfo2;
		NullCheck(L_150);
		int16_t L_151 = L_150->___ReleaseGraph_10;
		NullCheck(L_149);
		int16_t L_152 = L_151;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_153 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		NullCheck(L_148);
		L_148->___graph_1 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&L_148->___graph_1), (void*)L_153);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_154 = __this->___stages_1;
		NullCheck(L_154);
		int32_t L_155 = 6;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_156 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		NullCheck(L_156);
		L_156->___scale_2 = (0.0f);
		__this->___index_3 = 0;
		__this->___value_4 = (0.0f);
		__this->___envState_0 = 0;
		goto IL_0293;
	}

IL_0285:
	{
		int32_t L_157 = __this->___envState_0;
		__this->___envState_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, 1));
	}

IL_0293:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_158 = __this->___stages_1;
		int32_t L_159 = __this->___envState_0;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_161);
		int32_t L_162 = L_161->___time_0;
		if (!L_162)
		{
			goto IL_0285;
		}
	}
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_163 = __this->___stages_1;
		int32_t L_164 = __this->___envState_0;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		__this->___stage_2 = L_166;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stage_2), (void*)L_166);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Envelope::QuickSetupSf2(System.Int32,System.Int32,System.Int16,System.Int16,System.Boolean,AudioSynthesis.Bank.Descriptors.EnvelopeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Envelope_QuickSetupSf2_m9AF0ED9EDD4191902D1C19C63B5ACCC08D923D26 (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, int32_t ___sampleRate0, int32_t ___note1, int16_t ___keyNumToHold2, int16_t ___keyNumToDecay3, bool ___isVolumeEnvelope4, EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* ___envelopeInfo5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* G_B5_0 = NULL;
	EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* G_B4_0 = NULL;
	EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* G_B6_0 = NULL;
	float G_B7_0 = 0.0f;
	EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* G_B7_1 = NULL;
	{
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_0 = ___envelopeInfo5;
		NullCheck(L_0);
		float L_1 = L_0->___Depth_14;
		__this->___depth_5 = L_1;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_2 = __this->___stages_1;
		NullCheck(L_2);
		int32_t L_3 = 0;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		L_4->___offset_3 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_5 = __this->___stages_1;
		NullCheck(L_5);
		int32_t L_6 = 0;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		L_7->___scale_2 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_8 = __this->___stages_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_12 = ___envelopeInfo5;
		NullCheck(L_12);
		float L_13 = L_12->___DelayTime_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_11), L_13))), NULL);
		NullCheck(L_10);
		L_10->___time_0 = L_14;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_15 = __this->___stages_1;
		NullCheck(L_15);
		int32_t L_16 = 1;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_18 = ___envelopeInfo5;
		NullCheck(L_18);
		float L_19 = L_18->___StartLevel_13;
		NullCheck(L_17);
		L_17->___offset_3 = L_19;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_20 = __this->___stages_1;
		NullCheck(L_20);
		int32_t L_21 = 1;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_23 = ___envelopeInfo5;
		NullCheck(L_23);
		float L_24 = L_23->___PeakLevel_12;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_25 = ___envelopeInfo5;
		NullCheck(L_25);
		float L_26 = L_25->___StartLevel_13;
		NullCheck(L_22);
		L_22->___scale_2 = ((float)il2cpp_codegen_subtract(L_24, L_26));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_27 = __this->___stages_1;
		NullCheck(L_27);
		int32_t L_28 = 1;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_31 = ___envelopeInfo5;
		NullCheck(L_31);
		float L_32 = L_31->___AttackTime_3;
		int32_t L_33;
		L_33 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_30), L_32))), NULL);
		NullCheck(L_29);
		L_29->___time_0 = L_33;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_34 = __this->___stages_1;
		NullCheck(L_34);
		int32_t L_35 = 1;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		il2cpp_codegen_runtime_class_init_inline(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_37 = ((Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_StaticFields*)il2cpp_codegen_static_fields_for(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var))->___EnvelopeTables_0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_38 = ___envelopeInfo5;
		NullCheck(L_38);
		int16_t L_39 = L_38->___AttackGraph_4;
		NullCheck(L_37);
		int16_t L_40 = L_39;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_36);
		L_36->___graph_1 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->___graph_1), (void*)L_41);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_42 = __this->___stages_1;
		NullCheck(L_42);
		int32_t L_43 = 2;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		L_44->___offset_3 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_45 = __this->___stages_1;
		NullCheck(L_45);
		int32_t L_46 = 2;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_48 = ___envelopeInfo5;
		NullCheck(L_48);
		float L_49 = L_48->___PeakLevel_12;
		NullCheck(L_47);
		L_47->___scale_2 = L_49;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_50 = __this->___stages_1;
		NullCheck(L_50);
		int32_t L_51 = 2;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_54 = ___envelopeInfo5;
		NullCheck(L_54);
		float L_55 = L_54->___HoldTime_5;
		int32_t L_56 = ___note1;
		int16_t L_57 = ___keyNumToHold2;
		double L_58;
		L_58 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((2.0), ((double)(((double)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)60), L_56)), (int32_t)L_57)))/(1200.0))), NULL);
		int32_t L_59;
		L_59 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_multiply(((float)L_53), L_55))), L_58))), NULL);
		NullCheck(L_52);
		L_52->___time_0 = L_59;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_60 = __this->___stages_1;
		NullCheck(L_60);
		int32_t L_61 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_63 = ___envelopeInfo5;
		NullCheck(L_63);
		float L_64 = L_63->___SustainLevel_11;
		NullCheck(L_62);
		L_62->___offset_3 = L_64;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_65 = __this->___stages_1;
		NullCheck(L_65);
		int32_t L_66 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_68 = ___envelopeInfo5;
		NullCheck(L_68);
		float L_69 = L_68->___PeakLevel_12;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_70 = ___envelopeInfo5;
		NullCheck(L_70);
		float L_71 = L_70->___SustainLevel_11;
		NullCheck(L_67);
		L_67->___scale_2 = ((float)il2cpp_codegen_subtract(L_69, L_71));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_72 = ___envelopeInfo5;
		NullCheck(L_72);
		float L_73 = L_72->___SustainLevel_11;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_74 = ___envelopeInfo5;
		NullCheck(L_74);
		float L_75 = L_74->___PeakLevel_12;
		if ((!(((float)L_73) == ((float)L_75))))
		{
			goto IL_016c;
		}
	}
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_76 = __this->___stages_1;
		NullCheck(L_76);
		int32_t L_77 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		L_78->___time_0 = 0;
		goto IL_01ac;
	}

IL_016c:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_79 = __this->___stages_1;
		NullCheck(L_79);
		int32_t L_80 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		int32_t L_82 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_83 = ___envelopeInfo5;
		NullCheck(L_83);
		float L_84 = L_83->___DecayTime_6;
		int32_t L_85 = ___note1;
		int16_t L_86 = ___keyNumToDecay3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_87;
		L_87 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((2.0), ((double)(((double)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)60), L_85)), (int32_t)L_86)))/(1200.0))), NULL);
		int32_t L_88;
		L_88 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_multiply(((float)L_82), L_84))), L_87))), NULL);
		NullCheck(L_81);
		L_81->___time_0 = L_88;
	}

IL_01ac:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_89 = __this->___stages_1;
		NullCheck(L_89);
		int32_t L_90 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		il2cpp_codegen_runtime_class_init_inline(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_92 = ((Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_StaticFields*)il2cpp_codegen_static_fields_for(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var))->___EnvelopeTables_0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_93 = ___envelopeInfo5;
		NullCheck(L_93);
		int16_t L_94 = L_93->___DecayGraph_7;
		NullCheck(L_92);
		int16_t L_95 = L_94;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_91);
		L_91->___graph_1 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&L_91->___graph_1), (void*)L_96);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_97 = __this->___stages_1;
		NullCheck(L_97);
		int32_t L_98 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_99);
		L_99->___offset_3 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_100 = __this->___stages_1;
		NullCheck(L_100);
		int32_t L_101 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_103 = ___envelopeInfo5;
		NullCheck(L_103);
		float L_104 = L_103->___SustainLevel_11;
		NullCheck(L_102);
		L_102->___scale_2 = L_104;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_105 = __this->___stages_1;
		NullCheck(L_105);
		int32_t L_106 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		int32_t L_108 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_109 = ___envelopeInfo5;
		NullCheck(L_109);
		float L_110 = L_109->___SustainTime_8;
		NullCheck(L_107);
		L_107->___time_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_108), L_110)));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_111 = __this->___stages_1;
		NullCheck(L_111);
		int32_t L_112 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_114 = __this->___stages_1;
		NullCheck(L_114);
		int32_t L_115 = 3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		int32_t L_117 = L_116->___time_0;
		G_B4_0 = L_113;
		if (L_117)
		{
			G_B5_0 = L_113;
			goto IL_022a;
		}
	}
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_118 = __this->___stages_1;
		NullCheck(L_118);
		int32_t L_119 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_120);
		int32_t L_121 = L_120->___time_0;
		G_B5_0 = G_B4_0;
		if (!L_121)
		{
			G_B6_0 = G_B4_0;
			goto IL_0239;
		}
	}

IL_022a:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_122 = __this->___stages_1;
		NullCheck(L_122);
		int32_t L_123 = 4;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_124);
		float L_125 = L_124->___scale_2;
		G_B7_0 = L_125;
		G_B7_1 = G_B5_0;
		goto IL_0240;
	}

IL_0239:
	{
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_126 = ___envelopeInfo5;
		NullCheck(L_126);
		float L_127 = L_126->___PeakLevel_12;
		G_B7_0 = L_127;
		G_B7_1 = G_B6_0;
	}

IL_0240:
	{
		NullCheck(G_B7_1);
		G_B7_1->___scale_2 = G_B7_0;
		bool L_128 = ___isVolumeEnvelope4;
		if (!L_128)
		{
			goto IL_0288;
		}
	}
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_129 = __this->___stages_1;
		NullCheck(L_129);
		int32_t L_130 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		NullCheck(L_131);
		L_131->___offset_3 = (-100.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_132 = __this->___stages_1;
		NullCheck(L_132);
		int32_t L_133 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_135 = L_134;
		NullCheck(L_135);
		float L_136 = L_135->___scale_2;
		NullCheck(L_135);
		L_135->___scale_2 = ((float)il2cpp_codegen_add(L_136, (100.0f)));
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_137 = __this->___stages_1;
		NullCheck(L_137);
		int32_t L_138 = 6;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_139);
		L_139->___scale_2 = (-100.0f);
		goto IL_02ac;
	}

IL_0288:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_140 = __this->___stages_1;
		NullCheck(L_140);
		int32_t L_141 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_142);
		L_142->___offset_3 = (0.0f);
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_143 = __this->___stages_1;
		NullCheck(L_143);
		int32_t L_144 = 6;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_145);
		L_145->___scale_2 = (0.0f);
	}

IL_02ac:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_146 = __this->___stages_1;
		NullCheck(L_146);
		int32_t L_147 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		int32_t L_149 = ___sampleRate0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_150 = ___envelopeInfo5;
		NullCheck(L_150);
		float L_151 = L_150->___ReleaseTime_9;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_152;
		L_152 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_149), L_151))), NULL);
		NullCheck(L_148);
		L_148->___time_0 = L_152;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_153 = __this->___stages_1;
		NullCheck(L_153);
		int32_t L_154 = 5;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		il2cpp_codegen_runtime_class_init_inline(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_156 = ((Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_StaticFields*)il2cpp_codegen_static_fields_for(Tables_t6A73CEC31AEBCA319D6312987D77A400C92FAC62_il2cpp_TypeInfo_var))->___EnvelopeTables_0;
		EnvelopeDescriptor_tC1261FA5063FC78656674B68253D6C04B7640B38* L_157 = ___envelopeInfo5;
		NullCheck(L_157);
		int16_t L_158 = L_157->___ReleaseGraph_10;
		NullCheck(L_156);
		int16_t L_159 = L_158;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_160 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_155);
		L_155->___graph_1 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&L_155->___graph_1), (void*)L_160);
		__this->___index_3 = 0;
		__this->___value_4 = (0.0f);
		__this->___envState_0 = 0;
		goto IL_030d;
	}

IL_02ff:
	{
		int32_t L_161 = __this->___envState_0;
		__this->___envState_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, 1));
	}

IL_030d:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_162 = __this->___stages_1;
		int32_t L_163 = __this->___envState_0;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		NullCheck(L_165);
		int32_t L_166 = L_165->___time_0;
		if (!L_166)
		{
			goto IL_02ff;
		}
	}
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_167 = __this->___stages_1;
		int32_t L_168 = __this->___envState_0;
		NullCheck(L_167);
		int32_t L_169 = L_168;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		__this->___stage_2 = L_170;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stage_2), (void*)L_170);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Envelope::Increment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Envelope_Increment_m5CAF9DA83D76AE6DED0C823ACB211C6934CF58FF (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, int32_t ___samples0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;

IL_0000:
	{
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_0 = __this->___stage_2;
		NullCheck(L_0);
		int32_t L_1 = L_0->___time_0;
		int32_t L_2 = __this->___index_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		int32_t L_3 = V_1;
		int32_t L_4 = ___samples0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = __this->___index_3;
		int32_t L_6 = ___samples0;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		___samples0 = 0;
		goto IL_006a;
	}

IL_002a:
	{
		__this->___index_3 = 0;
		int32_t L_7 = __this->___envState_0;
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_0065;
		}
	}

IL_003a:
	{
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_8 = __this->___stages_1;
		int32_t L_9 = __this->___envState_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
		int32_t L_10 = V_2;
		__this->___envState_0 = L_10;
		int32_t L_11 = V_2;
		NullCheck(L_8);
		int32_t L_12 = L_11;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___stage_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stage_2), (void*)L_13);
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_14 = __this->___stage_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___time_0;
		if (!L_15)
		{
			goto IL_003a;
		}
	}

IL_0065:
	{
		int32_t L_16 = ___samples0;
		int32_t L_17 = V_1;
		___samples0 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
	}

IL_006a:
	{
		int32_t L_18 = ___samples0;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0000;
		}
	}
	{
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_19 = __this->___stage_2;
		NullCheck(L_19);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = L_19->___graph_1;
		NullCheck(L_20);
		int32_t L_21 = __this->___index_3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_22 = __this->___stage_2;
		NullCheck(L_22);
		int32_t L_23 = L_22->___time_0;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_20)->max_length))), ((double)(((double)L_21)/((double)L_23))))));
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_24 = __this->___stage_2;
		NullCheck(L_24);
		bool L_25 = L_24->___reverse_4;
		if (!L_25)
		{
			goto IL_00d2;
		}
	}
	{
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_26 = __this->___stage_2;
		NullCheck(L_26);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = L_26->___graph_1;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_31 = __this->___stage_2;
		NullCheck(L_31);
		float L_32 = L_31->___scale_2;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_33 = __this->___stage_2;
		NullCheck(L_33);
		float L_34 = L_33->___offset_3;
		__this->___value_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_30)), L_32)), L_34));
		return;
	}

IL_00d2:
	{
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_35 = __this->___stage_2;
		NullCheck(L_35);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = L_35->___graph_1;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		float L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_40 = __this->___stage_2;
		NullCheck(L_40);
		float L_41 = L_40->___scale_2;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_42 = __this->___stage_2;
		NullCheck(L_42);
		float L_43 = L_42->___offset_3;
		__this->___value_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_39, L_41)), L_43));
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Envelope::Release(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Envelope_Release_mFE3E6D2F847F756A58CB954D01B1DD32C02FF0A1 (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, float ___lowerLimit0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___value_4;
		float L_1 = ___lowerLimit0;
		if ((!(((float)L_0) <= ((float)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		__this->___index_3 = 0;
		__this->___envState_0 = 6;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_2 = __this->___stages_1;
		int32_t L_3 = __this->___envState_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___stage_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stage_2), (void*)L_5);
		return;
	}

IL_002b:
	{
		int32_t L_6 = __this->___envState_0;
		if ((((int32_t)L_6) >= ((int32_t)5)))
		{
			goto IL_0066;
		}
	}
	{
		__this->___index_3 = 0;
		__this->___envState_0 = 5;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_7 = __this->___stages_1;
		int32_t L_8 = __this->___envState_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___stage_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stage_2), (void*)L_10);
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_11 = __this->___stage_2;
		float L_12 = __this->___value_4;
		NullCheck(L_11);
		L_11->___scale_2 = L_12;
	}

IL_0066:
	{
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Envelope::ReleaseSf2VolumeEnvelope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Envelope_ReleaseSf2VolumeEnvelope_m7B7D4943D1A382753A602B0E4547321F5C5DC07D (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___value_4;
		if ((!(((float)L_0) <= ((float)(-100.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		__this->___index_3 = 0;
		__this->___envState_0 = 6;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_1 = __this->___stages_1;
		int32_t L_2 = __this->___envState_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->___stage_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stage_2), (void*)L_4);
		return;
	}

IL_002f:
	{
		int32_t L_5 = __this->___envState_0;
		if ((((int32_t)L_5) >= ((int32_t)5)))
		{
			goto IL_0080;
		}
	}
	{
		__this->___index_3 = 0;
		__this->___envState_0 = 5;
		EnvelopeStageU5BU5D_tA3242260EF3736379467531D4BDC42709E6EA3AB* L_6 = __this->___stages_1;
		int32_t L_7 = __this->___envState_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___stage_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stage_2), (void*)L_9);
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_10 = __this->___stage_2;
		NullCheck(L_10);
		L_10->___offset_3 = (-100.0f);
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_11 = __this->___stage_2;
		float L_12 = __this->___value_4;
		NullCheck(L_11);
		L_11->___scale_2 = ((float)il2cpp_codegen_add((100.0f), L_12));
	}

IL_0080:
	{
		return;
	}
}
// System.String AudioSynthesis.Bank.Components.Envelope::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Envelope_ToString_mBBB42C0886F598521F5D46AFAD7430A6E48D6B6B (Envelope_tEDE1B86DBB933D49D2CC7A988F563F3CABF04812* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvelopeStateEnum_tB6B4F5110C9D4598383F13E7F95E94C393C5635D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A2A77A240508FD0E651A645B91A2F3F073A0A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___envState_0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(EnvelopeStateEnum_tB6B4F5110C9D4598383F13E7F95E94C393C5635D_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->___index_3;
		EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* L_4 = __this->___stage_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___time_0;
		int32_t L_6 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)(((float)L_3)/((float)L_5))), (100.0f))));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		float L_8 = __this->___value_4;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralA3A2A77A240508FD0E651A645B91A2F3F073A0A7, L_2, L_7, L_10, NULL);
		return L_11;
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
// System.Void AudioSynthesis.Bank.Components.Envelope/EnvelopeStage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeStage__ctor_m09BD16265C162B7AA17A34493A9DFBBC0332BA5D (EnvelopeStage_t632C0F23C12BC9D2D01A554378ED790FA89DF007* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___time_0 = 0;
		__this->___graph_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___graph_1), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		__this->___scale_2 = (0.0f);
		__this->___offset_3 = (0.0f);
		__this->___reverse_4 = (bool)0;
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
// AudioSynthesis.Bank.Components.FilterTypeEnum AudioSynthesis.Bank.Components.Filter::get_FilterMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Filter_get_FilterMethod_m178E874D6FA19DD6D46C2BBEDAF366F16D84CAF6 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___filterType_0;
		return L_0;
	}
}
// System.Double AudioSynthesis.Bank.Components.Filter::get_Cutoff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Filter_get_Cutoff_m1677ED4F9DA05E49744417710F0A514798DD79A8 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___cutOff_8;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Filter::set_Cutoff(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_set_Cutoff_mFDEE76268F07E495E3C63F67D8B93BC6D7656E77 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___cutOff_8;
		double L_1 = ___value0;
		if ((((double)L_0) == ((double)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		double L_2 = ___value0;
		__this->___cutOff_8 = L_2;
		__this->___coeffUpdateRequired_10 = (bool)1;
	}

IL_0017:
	{
		return;
	}
}
// System.Double AudioSynthesis.Bank.Components.Filter::get_Resonance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Filter_get_Resonance_m8FFF42A5E378D2E980951AA9E13AE8023371AFED (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___resonance_9;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Filter::set_Resonance(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_set_Resonance_m3F7F81D236D04A038497102E406CB300DD075B58 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		double L_1 = __this->___resonance_9;
		if ((((double)L_0) == ((double)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		double L_2 = ___value0;
		__this->___resonance_9 = L_2;
		__this->___coeffUpdateRequired_10 = (bool)1;
	}

IL_0017:
	{
		return;
	}
}
// System.Boolean AudioSynthesis.Bank.Components.Filter::get_CoeffNeedsUpdating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Filter_get_CoeffNeedsUpdating_m7C754DA6A9555C7AD4BB63672EAA1AADDFAA6DD8 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___coeffUpdateRequired_10;
		return L_0;
	}
}
// System.Boolean AudioSynthesis.Bank.Components.Filter::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Filter_get_Enabled_m2DC86F4F636A8127B4FA7AAEF82ACB1107952FC5 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___filterType_0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void AudioSynthesis.Bank.Components.Filter::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_Disable_m019A78B540E63AF72BA9BB7356B067B7996D8647 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, const RuntimeMethod* method) 
{
	{
		__this->___filterType_0 = 0;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Filter::QuickSetup(System.Int32,System.Int32,System.Single,AudioSynthesis.Bank.Descriptors.FilterDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_QuickSetup_m97E8FD4A7A1D3B3F5BB72F2645123964B773ABDE (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, int32_t ___sampleRate0, int32_t ___note1, float ___velocity2, FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* ___filterInfo3, const RuntimeMethod* method) 
{
	{
		__this->___coeffUpdateRequired_10 = (bool)0;
		FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* L_0 = ___filterInfo3;
		NullCheck(L_0);
		float L_1 = L_0->___CutOff_3;
		__this->___cutOff_8 = ((double)L_1);
		FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* L_2 = ___filterInfo3;
		NullCheck(L_2);
		float L_3 = L_2->___Resonance_4;
		__this->___resonance_9 = ((double)L_3);
		FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* L_4 = ___filterInfo3;
		NullCheck(L_4);
		int32_t L_5 = L_4->___FilterMethod_2;
		__this->___filterType_0 = L_5;
		__this->___a1_1 = (0.0f);
		__this->___a2_2 = (0.0f);
		__this->___b1_3 = (0.0f);
		__this->___b2_4 = (0.0f);
		__this->___m1_5 = (0.0f);
		__this->___m2_6 = (0.0f);
		__this->___m3_7 = (0.0f);
		double L_6 = __this->___cutOff_8;
		if ((((double)L_6) <= ((double)(0.0))))
		{
			goto IL_009f;
		}
	}
	{
		double L_7 = __this->___resonance_9;
		if ((!(((double)L_7) <= ((double)(0.0)))))
		{
			goto IL_00a6;
		}
	}

IL_009f:
	{
		__this->___filterType_0 = 0;
	}

IL_00a6:
	{
		int32_t L_8 = __this->___filterType_0;
		if (!L_8)
		{
			goto IL_00e4;
		}
	}
	{
		double L_9 = __this->___cutOff_8;
		int32_t L_10 = ___note1;
		FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* L_11 = ___filterInfo3;
		NullCheck(L_11);
		int16_t L_12 = L_11->___RootKey_5;
		FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* L_13 = ___filterInfo3;
		NullCheck(L_13);
		int16_t L_14 = L_13->___KeyTrack_6;
		float L_15 = ___velocity2;
		FilterDescriptor_t9AF4F297751AC9204F0BC6CD0949E105C457FCE1* L_16 = ___filterInfo3;
		NullCheck(L_16);
		int16_t L_17 = L_16->___VelTrack_7;
		double L_18;
		L_18 = SynthHelper_CentsToPitch_m385E4AED1D52B5EED3106CC84763C9A385FB3B68(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_10, (int32_t)L_12)), (int32_t)L_14)), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_15, ((float)L_17)))))), NULL);
		__this->___cutOff_8 = ((double)il2cpp_codegen_multiply(L_9, L_18));
		int32_t L_19 = ___sampleRate0;
		Filter_UpdateCoeff_m9CA02971F1428D246636BAD543CB3F465377F6BD(__this, L_19, NULL);
	}

IL_00e4:
	{
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Filter::ApplyFilter(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Filter_ApplyFilter_mAAE97DA5B0E47646BFBC5D8439B22ECEF5F27F70 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, float ___sample0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___filterType_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1))) > ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_009a;
	}

IL_0016:
	{
		float L_3 = ___sample0;
		float L_4 = __this->___a1_1;
		float L_5 = __this->___m1_5;
		float L_6 = __this->___a2_2;
		float L_7 = __this->___m2_6;
		__this->___m3_7 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)))), ((float)il2cpp_codegen_multiply(L_6, L_7))));
		float L_8 = __this->___b2_4;
		float L_9 = __this->___m3_7;
		float L_10 = __this->___m2_6;
		float L_11 = __this->___b1_3;
		float L_12 = __this->___m1_5;
		___sample0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, ((float)il2cpp_codegen_add(L_9, L_10)))), ((float)il2cpp_codegen_multiply(L_11, L_12))));
		float L_13 = __this->___m1_5;
		__this->___m2_6 = L_13;
		float L_14 = __this->___m3_7;
		__this->___m1_5 = L_14;
		float L_15 = ___sample0;
		return L_15;
	}

IL_0077:
	{
		float L_16 = __this->___m1_5;
		float L_17 = __this->___a1_1;
		float L_18 = ___sample0;
		float L_19 = __this->___m1_5;
		__this->___m1_5 = ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(L_17, ((float)il2cpp_codegen_subtract(L_18, L_19))))));
		float L_20 = __this->___m1_5;
		return L_20;
	}

IL_009a:
	{
		return (0.0f);
	}
}
// System.Void AudioSynthesis.Bank.Components.Filter::ApplyFilter(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_ApplyFilter_m9D7775812E7FC09FC598CA3DEB1927D020E7BAFD (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___filterType_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0083;
		}
	}
	{
		return;
	}

IL_0012:
	{
		V_1 = 0;
		goto IL_007c;
	}

IL_0016:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___data0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = __this->___a1_1;
		float L_8 = __this->___m1_5;
		float L_9 = __this->___a2_2;
		float L_10 = __this->___m2_6;
		__this->___m3_7 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)))), ((float)il2cpp_codegen_multiply(L_9, L_10))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ___data0;
		int32_t L_12 = V_1;
		float L_13 = __this->___b2_4;
		float L_14 = __this->___m3_7;
		float L_15 = __this->___m2_6;
		float L_16 = __this->___b1_3;
		float L_17 = __this->___m1_5;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, ((float)il2cpp_codegen_add(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17)))));
		float L_18 = __this->___m1_5;
		__this->___m2_6 = L_18;
		float L_19 = __this->___m3_7;
		__this->___m1_5 = L_19;
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007c:
	{
		int32_t L_21 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = ___data0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0083:
	{
		V_2 = 0;
		goto IL_00b2;
	}

IL_0087:
	{
		float L_23 = __this->___m1_5;
		float L_24 = __this->___a1_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = ___data0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		float L_29 = __this->___m1_5;
		__this->___m1_5 = ((float)il2cpp_codegen_add(L_23, ((float)il2cpp_codegen_multiply(L_24, ((float)il2cpp_codegen_subtract(L_28, L_29))))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = ___data0;
		int32_t L_31 = V_2;
		float L_32 = __this->___m1_5;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (float)L_32);
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b2:
	{
		int32_t L_34 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = ___data0;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0087;
		}
	}
	{
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Filter::ApplyFilterInterp(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_ApplyFilterInterp_mB2F3358C71C10056E7FC51D79FB124596D015FB9 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___sampleRate1, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		double L_0 = __this->___cutOff_8;
		int32_t L_1 = ___sampleRate1;
		double L_2 = __this->___resonance_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3;
		L_3 = Filter_GenerateFilterCoeff_mCF0C50978D8E1A732A819D9448A87B5AC544DF03(__this, ((double)(L_0/((double)L_1))), L_2, NULL);
		V_0 = L_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = __this->___a1_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___data0;
		NullCheck(L_8);
		V_1 = ((float)(((float)il2cpp_codegen_subtract(L_6, L_7))/((float)((int32_t)(((RuntimeArray*)L_8)->max_length)))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = __this->___a2_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ___data0;
		NullCheck(L_13);
		V_2 = ((float)(((float)il2cpp_codegen_subtract(L_11, L_12))/((float)((int32_t)(((RuntimeArray*)L_13)->max_length)))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		float L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		float L_17 = __this->___b1_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = ___data0;
		NullCheck(L_18);
		V_3 = ((float)(((float)il2cpp_codegen_subtract(L_16, L_17))/((float)((int32_t)(((RuntimeArray*)L_18)->max_length)))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 3;
		float L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = __this->___b2_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___data0;
		NullCheck(L_23);
		V_4 = ((float)(((float)il2cpp_codegen_subtract(L_21, L_22))/((float)((int32_t)(((RuntimeArray*)L_23)->max_length)))));
		int32_t L_24 = __this->___filterType_0;
		V_5 = L_24;
		int32_t L_25 = V_5;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, 1))) > ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) == ((int32_t)3)))
		{
			goto IL_014e;
		}
	}
	{
		goto IL_01a0;
	}

IL_0073:
	{
		V_6 = 0;
		goto IL_011e;
	}

IL_007b:
	{
		float L_27 = __this->___a1_1;
		float L_28 = V_1;
		__this->___a1_1 = ((float)il2cpp_codegen_add(L_27, L_28));
		float L_29 = __this->___a2_2;
		float L_30 = V_2;
		__this->___a2_2 = ((float)il2cpp_codegen_add(L_29, L_30));
		float L_31 = __this->___b1_3;
		float L_32 = V_3;
		__this->___b1_3 = ((float)il2cpp_codegen_add(L_31, L_32));
		float L_33 = __this->___b2_4;
		float L_34 = V_4;
		__this->___b2_4 = ((float)il2cpp_codegen_add(L_33, L_34));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = ___data0;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		float L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		float L_39 = __this->___a1_1;
		float L_40 = __this->___m1_5;
		float L_41 = __this->___a2_2;
		float L_42 = __this->___m2_6;
		__this->___m3_7 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_38, ((float)il2cpp_codegen_multiply(L_39, L_40)))), ((float)il2cpp_codegen_multiply(L_41, L_42))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_43 = ___data0;
		int32_t L_44 = V_6;
		float L_45 = __this->___b2_4;
		float L_46 = __this->___m3_7;
		float L_47 = __this->___m2_6;
		float L_48 = __this->___b1_3;
		float L_49 = __this->___m1_5;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_45, ((float)il2cpp_codegen_add(L_46, L_47)))), ((float)il2cpp_codegen_multiply(L_48, L_49)))));
		float L_50 = __this->___m1_5;
		__this->___m2_6 = L_50;
		float L_51 = __this->___m3_7;
		__this->___m1_5 = L_51;
		int32_t L_52 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_011e:
	{
		int32_t L_53 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = ___data0;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_007b;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = V_0;
		NullCheck(L_55);
		int32_t L_56 = 0;
		float L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		__this->___a1_1 = L_57;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = V_0;
		NullCheck(L_58);
		int32_t L_59 = 1;
		float L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		__this->___a2_2 = L_60;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = 2;
		float L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		__this->___b1_3 = L_63;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = V_0;
		NullCheck(L_64);
		int32_t L_65 = 3;
		float L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		__this->___b2_4 = L_66;
		goto IL_01a0;
	}

IL_014e:
	{
		V_7 = 0;
		goto IL_0190;
	}

IL_0153:
	{
		float L_67 = __this->___a1_1;
		float L_68 = V_1;
		__this->___a1_1 = ((float)il2cpp_codegen_add(L_67, L_68));
		float L_69 = __this->___m1_5;
		float L_70 = __this->___a1_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_71 = ___data0;
		int32_t L_72 = V_7;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		float L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		float L_75 = __this->___m1_5;
		__this->___m1_5 = ((float)il2cpp_codegen_add(L_69, ((float)il2cpp_codegen_multiply(L_70, ((float)il2cpp_codegen_subtract(L_74, L_75))))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_76 = ___data0;
		int32_t L_77 = V_7;
		float L_78 = __this->___m1_5;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (float)L_78);
		int32_t L_79 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0190:
	{
		int32_t L_80 = V_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_81 = ___data0;
		NullCheck(L_81);
		if ((((int32_t)L_80) < ((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length)))))
		{
			goto IL_0153;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = V_0;
		NullCheck(L_82);
		int32_t L_83 = 0;
		float L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		__this->___a1_1 = L_84;
	}

IL_01a0:
	{
		__this->___coeffUpdateRequired_10 = (bool)0;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Filter::UpdateCoeff(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_UpdateCoeff_m9CA02971F1428D246636BAD543CB3F465377F6BD (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, int32_t ___sampleRate0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		double L_0 = __this->___cutOff_8;
		int32_t L_1 = ___sampleRate0;
		double L_2 = __this->___resonance_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3;
		L_3 = Filter_GenerateFilterCoeff_mCF0C50978D8E1A732A819D9448A87B5AC544DF03(__this, ((double)(L_0/((double)L_1))), L_2, NULL);
		V_0 = L_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___a1_1 = L_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___a2_2 = L_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		float L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->___b1_3 = L_12;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 3;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->___b2_4 = L_15;
		__this->___coeffUpdateRequired_10 = (bool)0;
		return;
	}
}
// System.String AudioSynthesis.Bank.Components.Filter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Filter_ToString_m69E052093A6D7C80AFC42E8A58BEEE8F000D85E4 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FilterTypeEnum_t692AA97999B34CB5F44B7D2EEE6B9213C544D794_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99CFB8847C7D5638284937E5B0B7965A8CBF4CB6);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Filter_get_Enabled_m2DC86F4F636A8127B4FA7AAEF82ACB1107952FC5(__this, NULL);
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1 = __this->___filterType_0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(FilterTypeEnum_t692AA97999B34CB5F44B7D2EEE6B9213C544D794_il2cpp_TypeInfo_var, &L_2);
		double L_4 = __this->___cutOff_8;
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_5);
		double L_7 = __this->___resonance_9;
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral99CFB8847C7D5638284937E5B0B7965A8CBF4CB6, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0034:
	{
		return _stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E;
	}
}
// System.Single[] AudioSynthesis.Bank.Components.Filter::GenerateFilterCoeff(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Filter_GenerateFilterCoeff_mCF0C50978D8E1A732A819D9448A87B5AC544DF03 (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, double ___fc0, double ___q1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	{
		double L_0 = ___fc0;
		double L_1;
		L_1 = SynthHelper_Clamp_mA2D08EBFACEF9535F8426FCAB02166F2FA985E75(L_0, (9.9999993504564039E-39), (0.48999999999999999), NULL);
		___fc0 = L_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_2;
		int32_t L_3 = __this->___filterType_0;
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00d7;
			}
			case 2:
			{
				goto IL_0185;
			}
		}
	}
	{
		goto IL_019f;
	}

IL_0041:
	{
		double L_5 = ___fc0;
		double L_6 = ((double)il2cpp_codegen_multiply((6.2831853071795862), L_5));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = cos(L_6);
		V_2 = L_7;
		double L_8;
		L_8 = sin(L_6);
		double L_9 = ___q1;
		V_3 = ((double)(L_8/((double)il2cpp_codegen_multiply((2.0), L_9))));
		double L_10 = V_3;
		V_4 = ((double)((1.0)/((double)il2cpp_codegen_add((1.0), L_10))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = V_0;
		double L_12 = V_2;
		double L_13 = V_4;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((-2.0), L_12)), L_13))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = V_0;
		double L_15 = V_3;
		double L_16 = V_4;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0), L_15)), L_16))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = V_0;
		double L_18 = V_2;
		double L_19 = V_4;
		double L_20 = ___q1;
		double L_21;
		L_21 = sqrt(L_20);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0), L_18)), L_19)), ((double)((1.0)/L_21))))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = V_0;
		float L_23 = __this->___b1_3;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)((float)il2cpp_codegen_multiply(L_23, (0.5f))));
		goto IL_019f;
	}

IL_00d7:
	{
		double L_24 = ___fc0;
		double L_25 = ((double)il2cpp_codegen_multiply((6.2831853071795862), L_24));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = cos(L_25);
		V_5 = L_26;
		double L_27;
		L_27 = sin(L_25);
		double L_28 = ___q1;
		V_6 = ((double)(L_27/((double)il2cpp_codegen_multiply((2.0), L_28))));
		double L_29 = V_6;
		V_7 = ((double)((1.0)/((double)il2cpp_codegen_add((1.0), L_29))));
		double L_30 = ___q1;
		double L_31;
		L_31 = sqrt(L_30);
		V_8 = ((double)((1.0)/L_31));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = V_0;
		double L_33 = V_5;
		double L_34 = V_7;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((-2.0), L_33)), L_34))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = V_0;
		double L_36 = V_6;
		double L_37 = V_7;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0), L_36)), L_37))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = V_0;
		double L_39 = V_5;
		double L_40 = V_7;
		double L_41 = V_8;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((-1.0), L_39)), L_40)), L_41))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = V_0;
		double L_43 = V_5;
		double L_44 = V_7;
		double L_45 = V_8;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)((float)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((1.0), L_43)), L_44)), L_45)), (0.5)))));
		goto IL_019f;
	}

IL_0185:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = V_0;
		double L_47 = ___fc0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_48;
		L_48 = exp(((double)il2cpp_codegen_multiply((-6.2831853071795862), L_47)));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_subtract((1.0f), ((float)L_48))));
	}

IL_019f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = V_0;
		return L_49;
	}
}
// System.Void AudioSynthesis.Bank.Components.Filter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter__ctor_m93B7927359AA0BEC204E28D9D604AFE4BF5CADAC (Filter_tBC492DDB739004974ACC69E2E4ECFFD1B8EC55E8* __this, const RuntimeMethod* method) 
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
// System.Double AudioSynthesis.Bank.Components.Lfo::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Lfo_get_Frequency_mDF49D834F0F836670AF59E684E4CA68E95398984 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___frequency_4;
		return L_0;
	}
}
// AudioSynthesis.Bank.Components.LfoStateEnum AudioSynthesis.Bank.Components.Lfo::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lfo_get_CurrentState_m54989D2EC62BA9784180024ADA860A83BE954ADB (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___lfoState_0;
		return L_0;
	}
}
// System.Double AudioSynthesis.Bank.Components.Lfo::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Lfo_get_Value_m75E933EB26C8F773CC40ECC8D88626132848EFF2 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___value_2;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Lfo::set_Value(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo_set_Value_m9779FF9ED3BB506B5DC239AD319ABAF8E26DEC24 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___value_2 = L_0;
		return;
	}
}
// System.Double AudioSynthesis.Bank.Components.Lfo::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Lfo_get_Depth_m1087C7AF3A4AFC386A9AAE706BC1D1A0409AA047 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___depth_5;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Lfo::set_Depth(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo_set_Depth_m218C4C15132E960A63C92CC6601F0005C4970B7C (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___depth_5 = L_0;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Lfo::QuickSetup(System.Int32,AudioSynthesis.Bank.Descriptors.LfoDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo_QuickSetup_m8E14308AA6F0AE2E77BBC83991B864F7F75BCB0E (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, int32_t ___sampleRate0, LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* ___lfoInfo1, const RuntimeMethod* method) 
{
	{
		LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* L_0 = ___lfoInfo1;
		NullCheck(L_0);
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_1 = L_0->___Generator_5;
		__this->___generator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___generator_7), (void*)L_1);
		int32_t L_2 = ___sampleRate0;
		LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* L_3 = ___lfoInfo1;
		NullCheck(L_3);
		float L_4 = L_3->___DelayTime_2;
		__this->___delayTime_6 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_2), L_4)));
		LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* L_5 = ___lfoInfo1;
		NullCheck(L_5);
		float L_6 = L_5->___Frequency_3;
		__this->___frequency_4 = ((double)L_6);
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_7 = __this->___generator_7;
		NullCheck(L_7);
		double L_8;
		L_8 = Generator_get_Period_mE96E0477662AB9B81BE2EB6348640137ED4DFCA5_inline(L_7, NULL);
		double L_9 = __this->___frequency_4;
		int32_t L_10 = ___sampleRate0;
		__this->___increment_3 = ((double)(((double)il2cpp_codegen_multiply(L_8, L_9))/((double)L_10)));
		LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* L_11 = ___lfoInfo1;
		NullCheck(L_11);
		float L_12 = L_11->___Depth_4;
		__this->___depth_5 = ((double)L_12);
		Lfo_Reset_m2512163F66419F8E774C9CBE597FA107521A6675(__this, NULL);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Lfo::Increment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo_Increment_m660CF62DB3C06A4E031751F7F56E8EF3A538A0D0 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___lfoState_0;
		if (L_0)
		{
			goto IL_006b;
		}
	}
	{
		double L_1 = __this->___phase_1;
		int32_t L_2 = ___amount0;
		__this->___phase_1 = ((double)il2cpp_codegen_subtract(L_1, ((double)L_2)));
		double L_3 = __this->___phase_1;
		if ((!(((double)L_3) <= ((double)(0.0)))))
		{
			goto IL_00e8;
		}
	}
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_4 = __this->___generator_7;
		NullCheck(L_4);
		double L_5;
		L_5 = Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15_inline(L_4, NULL);
		double L_6 = __this->___increment_3;
		double L_7 = __this->___phase_1;
		__this->___phase_1 = ((double)il2cpp_codegen_add(L_5, ((double)il2cpp_codegen_multiply(L_6, ((-L_7))))));
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_8 = __this->___generator_7;
		double L_9 = __this->___phase_1;
		NullCheck(L_8);
		float L_10;
		L_10 = VirtualFuncInvoker1< float, double >::Invoke(4 /* System.Single AudioSynthesis.Bank.Components.Generators.Generator::GetValue(System.Double) */, L_8, L_9);
		__this->___value_2 = ((double)L_10);
		__this->___lfoState_0 = 1;
		return;
	}

IL_006b:
	{
		double L_11 = __this->___phase_1;
		double L_12 = __this->___increment_3;
		int32_t L_13 = ___amount0;
		__this->___phase_1 = ((double)il2cpp_codegen_add(L_11, ((double)il2cpp_codegen_multiply(L_12, ((double)L_13)))));
		double L_14 = __this->___phase_1;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_15 = __this->___generator_7;
		NullCheck(L_15);
		double L_16;
		L_16 = Generator_get_LoopEndPhase_mD377463C1A76AD483551A7D2888A27B1D52094EA_inline(L_15, NULL);
		if ((!(((double)L_14) >= ((double)L_16))))
		{
			goto IL_00d0;
		}
	}
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_17 = __this->___generator_7;
		NullCheck(L_17);
		double L_18;
		L_18 = Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15_inline(L_17, NULL);
		double L_19 = __this->___phase_1;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_20 = __this->___generator_7;
		NullCheck(L_20);
		double L_21;
		L_21 = Generator_get_LoopEndPhase_mD377463C1A76AD483551A7D2888A27B1D52094EA_inline(L_20, NULL);
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_22 = __this->___generator_7;
		NullCheck(L_22);
		double L_23;
		L_23 = Generator_get_LoopEndPhase_mD377463C1A76AD483551A7D2888A27B1D52094EA_inline(L_22, NULL);
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_24 = __this->___generator_7;
		NullCheck(L_24);
		double L_25;
		L_25 = Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15_inline(L_24, NULL);
		__this->___phase_1 = ((double)il2cpp_codegen_add(L_18, (fmod(((double)il2cpp_codegen_subtract(L_19, L_21)), ((double)il2cpp_codegen_subtract(L_23, L_25))))));
	}

IL_00d0:
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_26 = __this->___generator_7;
		double L_27 = __this->___phase_1;
		NullCheck(L_26);
		float L_28;
		L_28 = VirtualFuncInvoker1< float, double >::Invoke(4 /* System.Single AudioSynthesis.Bank.Components.Generators.Generator::GetValue(System.Double) */, L_26, L_27);
		__this->___value_2 = ((double)L_28);
	}

IL_00e8:
	{
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Lfo::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo_Reset_m2512163F66419F8E774C9CBE597FA107521A6675 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) 
{
	{
		__this->___value_2 = (0.0);
		int32_t L_0 = __this->___delayTime_6;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = __this->___delayTime_6;
		__this->___phase_1 = ((double)L_1);
		__this->___lfoState_0 = 0;
		return;
	}

IL_002d:
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_2 = __this->___generator_7;
		NullCheck(L_2);
		double L_3;
		L_3 = Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15_inline(L_2, NULL);
		__this->___phase_1 = L_3;
		__this->___lfoState_0 = 1;
		return;
	}
}
// System.String AudioSynthesis.Bank.Components.Lfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lfo_ToString_mA6A9E08B02D1B5ACE785AD0A59DD191A7ABB997A (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LfoStateEnum_t4E4FBB4DED94B846AA4475006DA0653F7C42C3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3995DB1F55A07A166A1319A775266407055AD20);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___lfoState_0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(LfoStateEnum_t4E4FBB4DED94B846AA4475006DA0653F7C42C3D8_il2cpp_TypeInfo_var, &L_1);
		double L_3 = __this->___frequency_4;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		double L_6 = __this->___value_2;
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralF3995DB1F55A07A166A1319A775266407055AD20, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
// System.Void AudioSynthesis.Bank.Components.Lfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lfo__ctor_m386916DEEB7479C4A2999BD1D36C7AFE17C28BC6 (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) 
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
// AudioSynthesis.Bank.Components.LoopModeEnum AudioSynthesis.Bank.Components.Generators.Generator::get_LoopMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Generator_get_LoopMode_m2A6FEBE8FA2BF7AE184F53DD09D0EE65CE22B78F (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___loopMethod_4;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_LoopMode(AudioSynthesis.Bank.Components.LoopModeEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_LoopMode_m22DF1035141804C39A15A8BC3EF5292AE83F53C6 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___loopMethod_4 = L_0;
		return;
	}
}
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_LoopStartPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___loopStart_5;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_LoopStartPhase(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_LoopStartPhase_mA9A8CB7EEF8C762A55764CF046B5C131520F1B36 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___loopStart_5 = L_0;
		return;
	}
}
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_LoopEndPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Generator_get_LoopEndPhase_mD377463C1A76AD483551A7D2888A27B1D52094EA (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___loopEnd_6;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_LoopEndPhase(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_LoopEndPhase_mD0C92174EC43677F9A2834F19AA44B4A8B1A7330 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___loopEnd_6 = L_0;
		return;
	}
}
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_StartPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Generator_get_StartPhase_mBC857B423D6C030558ED348297C21191442769B3 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___start_7;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_StartPhase(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_StartPhase_m2F77A788760F3E576ECDA651879BBE1C82855D0E (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___start_7 = L_0;
		return;
	}
}
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_EndPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Generator_get_EndPhase_m0854116479A89E64191C51238E39FA83AF8DD761 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___end_8;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_EndPhase(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_EndPhase_mE354955B7B04CBF71A7BEC15F5F14EE51BD02A38 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___end_8 = L_0;
		return;
	}
}
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Generator_get_Offset_m238F00876E65A327B42A762AE8020AAC004E5B5B (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___startOffset_9;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_Offset(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_Offset_mDA7D6AC2E17EE80C9C575FCE21B92AA25C0F3F53 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___startOffset_9 = L_0;
		return;
	}
}
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_Period()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Generator_get_Period_mE96E0477662AB9B81BE2EB6348640137ED4DFCA5 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___genPeriod_10;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_Period(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_Period_m5053077B7B962DD50DD7306114CCE4948C01CEC8 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___genPeriod_10 = L_0;
		return;
	}
}
// System.Double AudioSynthesis.Bank.Components.Generators.Generator::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Generator_get_Frequency_m2F278EBA062D6F979568A827F191D8C6B8F32603 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___freq_11;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_Frequency_m0FF2A60A057EC88D4AFFA411618F0DDA30C4597F (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___freq_11 = L_0;
		return;
	}
}
// System.Int16 AudioSynthesis.Bank.Components.Generators.Generator::get_RootKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Generator_get_RootKey_mB5A496C415912B2040DCB17E68488BBEF9003CC2 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___root_12;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_RootKey(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_RootKey_mF94370A4650F190969356C16B679FFEBB97FACBA (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___value0;
		__this->___root_12 = L_0;
		return;
	}
}
// System.Int16 AudioSynthesis.Bank.Components.Generators.Generator::get_KeyTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Generator_get_KeyTrack_m4E36BCA8F09868079CE6430F2D236A9DBE9D94EC (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___noteTrack_13;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_KeyTrack(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_KeyTrack_mBEBB2F283FDCA735D535ECC7FDC4D330793DBC5E (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___value0;
		__this->___noteTrack_13 = L_0;
		return;
	}
}
// System.Int16 AudioSynthesis.Bank.Components.Generators.Generator::get_VelocityTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Generator_get_VelocityTrack_mC3D92B23D12CA556E860DC58AA98D7CC0395AF90 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___velTrack_14;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_VelocityTrack(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_VelocityTrack_m4E216311635EB86AE865238F24E8DFA2337FCDA5 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___value0;
		__this->___velTrack_14 = L_0;
		return;
	}
}
// System.Int16 AudioSynthesis.Bank.Components.Generators.Generator::get_Tune()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Generator_get_Tune_m380D9076A9BA75614E9FDC5C8D66CC8D4DAF4838 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___tuneCents_15;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::set_Tune(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_set_Tune_m7D6EF5093994E730BEEB598B6D2ABA6327057F97 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___value0;
		__this->___tuneCents_15 = L_0;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator__ctor_m3313B048E930DC072C9AEEA9DE0A12F183FE0473 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_0 = ___description0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___LoopMethod_2;
		__this->___loopMethod_4 = L_1;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_2 = ___description0;
		NullCheck(L_2);
		double L_3 = L_2->___LoopStartPhase_8;
		__this->___loopStart_5 = L_3;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_4 = ___description0;
		NullCheck(L_4);
		double L_5 = L_4->___LoopEndPhase_7;
		__this->___loopEnd_6 = L_5;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_6 = ___description0;
		NullCheck(L_6);
		double L_7 = L_6->___StartPhase_6;
		__this->___start_7 = L_7;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_8 = ___description0;
		NullCheck(L_8);
		double L_9 = L_8->___EndPhase_5;
		__this->___end_8 = L_9;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_10 = ___description0;
		NullCheck(L_10);
		double L_11 = L_10->___Offset_9;
		__this->___startOffset_9 = L_11;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_12 = ___description0;
		NullCheck(L_12);
		double L_13 = L_12->___Period_10;
		__this->___genPeriod_10 = L_13;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_14 = ___description0;
		NullCheck(L_14);
		int16_t L_15 = L_14->___Rootkey_11;
		__this->___root_12 = L_15;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_16 = ___description0;
		NullCheck(L_16);
		int16_t L_17 = L_16->___KeyTrack_12;
		__this->___noteTrack_13 = L_17;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_18 = ___description0;
		NullCheck(L_18);
		int16_t L_19 = L_18->___VelTrack_13;
		__this->___velTrack_14 = L_19;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_20 = ___description0;
		NullCheck(L_20);
		int16_t L_21 = L_20->___Tune_14;
		__this->___tuneCents_15 = L_21;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::Release(AudioSynthesis.Bank.Components.Generators.GeneratorParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator_Release_m7154F737699F53EDD2A18EFA1D2D6410DB3D795E (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* ___generatorParams0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___loopMethod_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0028;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_1 = ___generatorParams0;
		NullCheck(L_1);
		L_1->___currentState_3 = 2;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_2 = ___generatorParams0;
		double L_3 = __this->___start_7;
		NullCheck(L_2);
		L_2->___currentStart_1 = L_3;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_4 = ___generatorParams0;
		double L_5 = __this->___end_8;
		NullCheck(L_4);
		L_4->___currentEnd_2 = L_5;
	}

IL_0028:
	{
		return;
	}
}
// System.String AudioSynthesis.Bank.Components.Generators.Generator::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Generator_ToString_mCD8B9BEDD2AE540FE290A861676BD1D5E37B55F9 (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoopModeEnum_tA9D16CFCA909C691F62AC5154D4178F3854D77EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A69411449A9B4614D8ACE4727C4E7D33BED661);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___loopMethod_4;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(LoopModeEnum_tA9D16CFCA909C691F62AC5154D4178F3854D77EB_il2cpp_TypeInfo_var, &L_1);
		int16_t L_3 = __this->___root_12;
		int16_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_4);
		double L_6 = __this->___genPeriod_10;
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral43A69411449A9B4614D8ACE4727C4E7D33BED661, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
// AudioSynthesis.Bank.Components.WaveformEnum AudioSynthesis.Bank.Components.Generators.Generator::GetWaveformFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Generator_GetWaveformFromString_mA0EF1D2AA607F6E9B734A8587B23B384A39A646D (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E0549A4765B89BF168C0E22B892D3A200FFDD97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26F3519BA0E799C6E902BFAECA592B51547C2AE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53749BB024072974CA98CD1D4ED1EBC4DC13C60C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75988F756BCA11D27990566941F697F56045D8D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B6C281E4E4C23EE08784A13DA3618CE7E7EFD6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9464E6803D4CA748A54F5908D50D99EA9A45D949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97B71553CBE50703007E5C7830C07CC0067B297F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE007B17B06CB84F1B41E40F63F887BC77704FA27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8D604EA97ACA8EB403D281FB23304D3B2338E81);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_012f;
		}
	}
	{
		String_t* L_4 = V_0;
		uint32_t L_5;
		L_5 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF5D3E9C8845C573F909CCF6B26DBD06653FC39E7(L_4, NULL);
		V_1 = L_5;
		uint32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)1866820111)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)332553464)))))
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)84037765))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)332553464))))
		{
			goto IL_0099;
		}
	}
	{
		goto IL_012f;
	}

IL_0041:
	{
		uint32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)965535904))))
		{
			goto IL_0114;
		}
	}
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1866820111))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_012f;
	}

IL_005c:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)-1763474777)))))
		{
			goto IL_007c;
		}
	}
	{
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1874585903))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1763474777))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_012f;
	}

IL_007c:
	{
		uint32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1263136186))))
		{
			goto IL_00ab;
		}
	}
	{
		uint32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-755112452))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-685992854))))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_012f;
	}

IL_0099:
	{
		String_t* L_18 = V_0;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral7B6C281E4E4C23EE08784A13DA3618CE7E7EFD6F, NULL);
		if (L_19)
		{
			goto IL_0123;
		}
	}
	{
		goto IL_012f;
	}

IL_00ab:
	{
		String_t* L_20 = V_0;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralE8D604EA97ACA8EB403D281FB23304D3B2338E81, NULL);
		if (L_21)
		{
			goto IL_0125;
		}
	}
	{
		goto IL_012f;
	}

IL_00ba:
	{
		String_t* L_22 = V_0;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral75988F756BCA11D27990566941F697F56045D8D5, NULL);
		if (L_23)
		{
			goto IL_0127;
		}
	}
	{
		goto IL_012f;
	}

IL_00c9:
	{
		String_t* L_24 = V_0;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral53749BB024072974CA98CD1D4ED1EBC4DC13C60C, NULL);
		if (L_25)
		{
			goto IL_0127;
		}
	}
	{
		goto IL_012f;
	}

IL_00d8:
	{
		String_t* L_26 = V_0;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralE007B17B06CB84F1B41E40F63F887BC77704FA27, NULL);
		if (L_27)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012f;
	}

IL_00e7:
	{
		String_t* L_28 = V_0;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1E0549A4765B89BF168C0E22B892D3A200FFDD97, NULL);
		if (L_29)
		{
			goto IL_012b;
		}
	}
	{
		goto IL_012f;
	}

IL_00f6:
	{
		String_t* L_30 = V_0;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral97B71553CBE50703007E5C7830C07CC0067B297F, NULL);
		if (L_31)
		{
			goto IL_012b;
		}
	}
	{
		goto IL_012f;
	}

IL_0105:
	{
		String_t* L_32 = V_0;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral26F3519BA0E799C6E902BFAECA592B51547C2AE6, NULL);
		if (L_33)
		{
			goto IL_012d;
		}
	}
	{
		goto IL_012f;
	}

IL_0114:
	{
		String_t* L_34 = V_0;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral9464E6803D4CA748A54F5908D50D99EA9A45D949, NULL);
		if (L_35)
		{
			goto IL_012d;
		}
	}
	{
		goto IL_012f;
	}

IL_0123:
	{
		return (int32_t)(0);
	}

IL_0125:
	{
		return (int32_t)(1);
	}

IL_0127:
	{
		return (int32_t)(2);
	}

IL_0129:
	{
		return (int32_t)(3);
	}

IL_012b:
	{
		return (int32_t)(4);
	}

IL_012d:
	{
		return (int32_t)(5);
	}

IL_012f:
	{
		String_t* L_36 = ___value0;
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72D721749A61993094E0FBA1534288C6D2BC206C)), L_36, NULL);
		Exception_t* L_38 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_38);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_38, L_37, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Generator_GetWaveformFromString_mA0EF1D2AA607F6E9B734A8587B23B384A39A646D_RuntimeMethod_var)));
	}
}
// AudioSynthesis.Bank.Components.InterpolationEnum AudioSynthesis.Bank.Components.Generators.Generator::GetInterpolationFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Generator_GetInterpolationFromString_m6634FB75C6E3DE5C3BCC5B2BD985B4ABD105AE53 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A86CBBCE2260DF19FA3434F545D507101BEC041);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946C66BDF7790C4502BC0CE3B36FFE5731EF0E0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3EB129E803C790D1A6A54812F108FC137DDD3DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral946C66BDF7790C4502BC0CE3B36FFE5731EF0E0D, NULL);
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralF3EB129E803C790D1A6A54812F108FC137DDD3DA, NULL);
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral4A86CBBCE2260DF19FA3434F545D507101BEC041, NULL);
		if (L_10)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0048;
	}

IL_0040:
	{
		return (int32_t)(0);
	}

IL_0042:
	{
		return (int32_t)(1);
	}

IL_0044:
	{
		return (int32_t)(2);
	}

IL_0046:
	{
		return (int32_t)(3);
	}

IL_0048:
	{
		String_t* L_11 = ___value0;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B5621636841427FA307015FCDA5C2D284950EE4)), L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Generator_GetInterpolationFromString_m6634FB75C6E3DE5C3BCC5B2BD985B4ABD105AE53_RuntimeMethod_var)));
	}
}
// AudioSynthesis.Bank.Components.LoopModeEnum AudioSynthesis.Bank.Components.Generators.Generator::GetLoopModeFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Generator_GetLoopModeFromString_mE1CD369010064FFB9D12CA01E2AB3EAFC19A9140 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2164C309B189E1D59968BD1503C521033172FEA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D0776803EAB54D3571A885890D7D69F6A4DFFE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DBF075CA37C261045FF7DC9A458137CEE6C39BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AFB6DC3E62A90A45D0F193AED6DF17BE1748959);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral5DBF075CA37C261045FF7DC9A458137CEE6C39BB, NULL);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral6AFB6DC3E62A90A45D0F193AED6DF17BE1748959, NULL);
		if (L_8)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral2164C309B189E1D59968BD1503C521033172FEA6, NULL);
		if (L_10)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2D0776803EAB54D3571A885890D7D69F6A4DFFE3, NULL);
		if (L_12)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0055;
	}

IL_004d:
	{
		return (int32_t)(0);
	}

IL_004f:
	{
		return (int32_t)(1);
	}

IL_0051:
	{
		return (int32_t)(2);
	}

IL_0053:
	{
		return (int32_t)(3);
	}

IL_0055:
	{
		String_t* L_13 = ___value0;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1E8355B57CD722A6917A10DCB51F2D1288B8AFD9)), L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Generator_GetLoopModeFromString_mE1CD369010064FFB9D12CA01E2AB3EAFC19A9140_RuntimeMethod_var)));
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.Generator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator__cctor_m00A85868378C202F917C18BD21903FF59595F210 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_0 = (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280*)il2cpp_codegen_object_new(GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GeneratorDescriptor__ctor_m2A2A54506DFD4213E5A305FFE4E1BE7682E23FA2(L_0, NULL);
		SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* L_1 = (SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D*)il2cpp_codegen_object_new(SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SineGenerator__ctor_m6E89C7662634417B9495F94439ECE7E7D337CD9E(L_1, L_0, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSine_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSine_0), (void*)L_1);
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_2 = (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280*)il2cpp_codegen_object_new(GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GeneratorDescriptor__ctor_m2A2A54506DFD4213E5A305FFE4E1BE7682E23FA2(L_2, NULL);
		SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776* L_3 = (SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776*)il2cpp_codegen_object_new(SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SawGenerator__ctor_m63BB8E828DE4DB99F5A970AE312C64661E56A8D6(L_3, L_2, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSaw_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSaw_1), (void*)L_3);
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_4 = (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280*)il2cpp_codegen_object_new(GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GeneratorDescriptor__ctor_m2A2A54506DFD4213E5A305FFE4E1BE7682E23FA2(L_4, NULL);
		SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41* L_5 = (SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41*)il2cpp_codegen_object_new(SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SquareGenerator__ctor_mA64659B7E5DE316ED502B319980E6948921F921F(L_5, L_4, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSquare_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultSquare_2), (void*)L_5);
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_6 = (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280*)il2cpp_codegen_object_new(GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GeneratorDescriptor__ctor_m2A2A54506DFD4213E5A305FFE4E1BE7682E23FA2(L_6, NULL);
		TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0* L_7 = (TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0*)il2cpp_codegen_object_new(TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TriangleGenerator__ctor_m66DBC2E0329DBE7F530480F7C13CD558CB86E51C(L_7, L_6, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultTriangle_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Generator_tADF163794E3E90EE4A764830F2731836023B4A32_StaticFields*)il2cpp_codegen_static_fields_for(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var))->___DefaultTriangle_3), (void*)L_7);
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
// System.Void AudioSynthesis.Bank.Components.Generators.GeneratorParameters::QuickSetup(AudioSynthesis.Bank.Components.Generators.Generator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorParameters_QuickSetup_m9824AC08329C756A9794E53C9CA85BD800FA2149 (GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* __this, Generator_tADF163794E3E90EE4A764830F2731836023B4A32* ___generator0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_0 = ___generator0;
		NullCheck(L_0);
		double L_1;
		L_1 = Generator_get_StartPhase_mBC857B423D6C030558ED348297C21191442769B3_inline(L_0, NULL);
		__this->___currentStart_1 = L_1;
		double L_2 = __this->___currentStart_1;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_3 = ___generator0;
		NullCheck(L_3);
		double L_4;
		L_4 = Generator_get_Offset_m238F00876E65A327B42A762AE8020AAC004E5B5B_inline(L_3, NULL);
		__this->___phase_0 = ((double)il2cpp_codegen_add(L_2, L_4));
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_5 = ___generator0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Generator_get_LoopMode_m2A6FEBE8FA2BF7AE184F53DD09D0EE65CE22B78F_inline(L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 2))) <= ((uint32_t)1))))
		{
			goto IL_00a6;
		}
	}
	{
		double L_8 = __this->___phase_0;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_9 = ___generator0;
		NullCheck(L_9);
		double L_10;
		L_10 = Generator_get_EndPhase_m0854116479A89E64191C51238E39FA83AF8DD761_inline(L_9, NULL);
		if ((!(((double)L_8) >= ((double)L_10))))
		{
			goto IL_0042;
		}
	}
	{
		__this->___currentState_3 = 3;
		return;
	}

IL_0042:
	{
		double L_11 = __this->___phase_0;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_12 = ___generator0;
		NullCheck(L_12);
		double L_13;
		L_13 = Generator_get_LoopEndPhase_mD377463C1A76AD483551A7D2888A27B1D52094EA_inline(L_12, NULL);
		if ((!(((double)L_11) >= ((double)L_13))))
		{
			goto IL_0064;
		}
	}
	{
		__this->___currentState_3 = 2;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_14 = ___generator0;
		NullCheck(L_14);
		double L_15;
		L_15 = Generator_get_EndPhase_m0854116479A89E64191C51238E39FA83AF8DD761_inline(L_14, NULL);
		__this->___currentEnd_2 = L_15;
		return;
	}

IL_0064:
	{
		double L_16 = __this->___phase_0;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_17 = ___generator0;
		NullCheck(L_17);
		double L_18;
		L_18 = Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15_inline(L_17, NULL);
		if ((!(((double)L_16) >= ((double)L_18))))
		{
			goto IL_0092;
		}
	}
	{
		__this->___currentState_3 = 1;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_19 = ___generator0;
		NullCheck(L_19);
		double L_20;
		L_20 = Generator_get_LoopEndPhase_mD377463C1A76AD483551A7D2888A27B1D52094EA_inline(L_19, NULL);
		__this->___currentEnd_2 = L_20;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_21 = ___generator0;
		NullCheck(L_21);
		double L_22;
		L_22 = Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15_inline(L_21, NULL);
		__this->___currentStart_1 = L_22;
		return;
	}

IL_0092:
	{
		__this->___currentState_3 = 0;
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_23 = ___generator0;
		NullCheck(L_23);
		double L_24;
		L_24 = Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15_inline(L_23, NULL);
		__this->___currentEnd_2 = L_24;
		return;
	}

IL_00a6:
	{
		Generator_tADF163794E3E90EE4A764830F2731836023B4A32* L_25 = ___generator0;
		NullCheck(L_25);
		double L_26;
		L_26 = Generator_get_EndPhase_m0854116479A89E64191C51238E39FA83AF8DD761_inline(L_25, NULL);
		__this->___currentEnd_2 = L_26;
		double L_27 = __this->___phase_0;
		double L_28 = __this->___currentEnd_2;
		if ((!(((double)L_27) >= ((double)L_28))))
		{
			goto IL_00c8;
		}
	}
	{
		__this->___currentState_3 = 3;
		return;
	}

IL_00c8:
	{
		__this->___currentState_3 = 2;
		return;
	}
}
// System.String AudioSynthesis.Bank.Components.Generators.GeneratorParameters::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeneratorParameters_ToString_mD079F4BC0B8D8547D8AF0718169A971B76C06DCF (GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorStateEnum_t412ACB826544CF9E8894152D4D00E0E0A3DD3D0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FE212B2A65F41DA135B3E0ED1EE893F53A20A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___currentState_3;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(GeneratorStateEnum_t412ACB826544CF9E8894152D4D00E0E0A3DD3D0A_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		double L_6 = __this->___currentStart_1;
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		double L_10 = __this->___currentEnd_2;
		double L_11 = L_10;
		RuntimeObject* L_12 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		double L_14 = __this->___phase_0;
		double L_15 = L_14;
		RuntimeObject* L_16 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralE1FE212B2A65F41DA135B3E0ED1EE893F53A20A7, L_13, NULL);
		return L_17;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.GeneratorParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorParameters__ctor_mBD0A68CB4191631B326C423C69F485B26493321A (GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* __this, const RuntimeMethod* method) 
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
// AudioSynthesis.Wave.PcmData AudioSynthesis.Bank.Components.Generators.SampleGenerator::get_Samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PcmData_tB54EF39258C17586A65A55E564458B5441164E62* SampleGenerator_get_Samples_m98B3B362C7DA69B55503E3EB70513475C19A6003 (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* __this, const RuntimeMethod* method) 
{
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_0 = __this->___data_16;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.SampleGenerator::set_Samples(AudioSynthesis.Wave.PcmData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleGenerator_set_Samples_m2B1FBE65A2E859A7BFB0D340790A9B214CEA90EA (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* __this, PcmData_tB54EF39258C17586A65A55E564458B5441164E62* ___value0, const RuntimeMethod* method) 
{
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_0 = ___value0;
		__this->___data_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_16), (void*)L_0);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.SampleGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleGenerator__ctor_m4036B55710FE95B87D8F1E6219C02D5ADB7830DB (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_0 = (GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280*)il2cpp_codegen_object_new(GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GeneratorDescriptor__ctor_m2A2A54506DFD4213E5A305FFE4E1BE7682E23FA2(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		Generator__ctor_m3313B048E930DC072C9AEEA9DE0A12F183FE0473(__this, L_0, NULL);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.SampleGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor,AudioSynthesis.Bank.AssetManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleGenerator__ctor_mEC77F49216C38D5DA3B5F03C8DC6B688E7AD5ABB (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, AssetManager_tAB21564C528D6B60DD1BD654C6A9EA9220C69A77* ___assets1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* V_0 = NULL;
	{
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_0 = ___description0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		Generator__ctor_m3313B048E930DC072C9AEEA9DE0A12F183FE0473(__this, L_0, NULL);
		AssetManager_tAB21564C528D6B60DD1BD654C6A9EA9220C69A77* L_1 = ___assets1;
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_2 = ___description0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___AssetName_4;
		String_t* L_4;
		L_4 = IOHelper_GetFileNameWithoutExtension_m47B7421799777D3A4EEF813BAACCA86171D89BC8(L_3, NULL);
		NullCheck(L_1);
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_5;
		L_5 = AssetManager_FindSample_mE14A5C6FD5818E47E972E3104BEA8DD81F700491(L_1, L_4, NULL);
		V_0 = L_5;
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_6 = V_0;
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_7 = ___description0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___AssetName_4;
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF26B4D25DFC904CC895873A926FD57589C329C14)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)), NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SampleGenerator__ctor_mEC77F49216C38D5DA3B5F03C8DC6B688E7AD5ABB_RuntimeMethod_var)));
	}

IL_0037:
	{
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_11 = V_0;
		NullCheck(L_11);
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_12;
		L_12 = SampleDataAsset_get_SampleData_m9F5444819DE3FE56F38CE5F9136FAD5BE4B17AF5_inline(L_11, NULL);
		__this->___data_16 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_16), (void*)L_12);
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SampleDataAsset_get_SampleRate_mBC3EA51E2F4835C3FC3D4D0E1F4D8CEAAB7CF3ED_inline(L_13, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___freq_11 = ((double)L_14);
		double L_15 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		if ((!(((double)L_15) < ((double)(0.0)))))
		{
			goto IL_006d;
		}
	}
	{
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_16 = V_0;
		NullCheck(L_16);
		double L_17;
		L_17 = SampleDataAsset_get_End_m34C3BEE7193C5A014FC366E75878C18E8C9E91FC_inline(L_16, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8 = L_17;
	}

IL_006d:
	{
		double L_18 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		if ((!(((double)L_18) < ((double)(0.0)))))
		{
			goto IL_008a;
		}
	}
	{
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_19 = V_0;
		NullCheck(L_19);
		double L_20;
		L_20 = SampleDataAsset_get_Start_mABDCE9D65CF998DF2F3C57BFCC000FC510167514_inline(L_19, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7 = L_20;
	}

IL_008a:
	{
		double L_21 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		if ((!(((double)L_21) < ((double)(0.0)))))
		{
			goto IL_00c6;
		}
	}
	{
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_22 = V_0;
		NullCheck(L_22);
		double L_23;
		L_23 = SampleDataAsset_get_LoopEnd_mA61A6A62DCE7EB5619329A0EE7E3630454B9B6FE_inline(L_22, NULL);
		if ((!(((double)L_23) < ((double)(0.0)))))
		{
			goto IL_00ba;
		}
	}
	{
		double L_24 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6 = L_24;
		goto IL_00c6;
	}

IL_00ba:
	{
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_25 = V_0;
		NullCheck(L_25);
		double L_26;
		L_26 = SampleDataAsset_get_LoopEnd_mA61A6A62DCE7EB5619329A0EE7E3630454B9B6FE_inline(L_25, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6 = L_26;
	}

IL_00c6:
	{
		double L_27 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		if ((!(((double)L_27) < ((double)(0.0)))))
		{
			goto IL_0102;
		}
	}
	{
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_28 = V_0;
		NullCheck(L_28);
		double L_29;
		L_29 = SampleDataAsset_get_LoopStart_m9C733A08C95FE827F1571857B16A109CD697B171_inline(L_28, NULL);
		if ((!(((double)L_29) < ((double)(0.0)))))
		{
			goto IL_00f6;
		}
	}
	{
		double L_30 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5 = L_30;
		goto IL_0102;
	}

IL_00f6:
	{
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_31 = V_0;
		NullCheck(L_31);
		double L_32;
		L_32 = SampleDataAsset_get_LoopStart_m9C733A08C95FE827F1571857B16A109CD697B171_inline(L_31, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5 = L_32;
	}

IL_0102:
	{
		double L_33 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10;
		if ((!(((double)L_33) < ((double)(0.0)))))
		{
			goto IL_0122;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10 = (1.0);
	}

IL_0122:
	{
		int16_t L_34 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_014b;
		}
	}
	{
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_35 = V_0;
		NullCheck(L_35);
		int16_t L_36;
		L_36 = SampleDataAsset_get_RootKey_m1DB6F5B9F0EE68BF87683BFC7EF72DD1CFE15AED_inline(L_35, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12 = L_36;
		int16_t L_37 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___tuneCents_15;
		if (L_37)
		{
			goto IL_014b;
		}
	}
	{
		SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* L_38 = V_0;
		NullCheck(L_38);
		int16_t L_39;
		L_39 = SampleDataAsset_get_Tune_m53C9EFB741C0C0DECCE3514EB11F0E1D2A75015D_inline(L_38, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___tuneCents_15 = L_39;
	}

IL_014b:
	{
		double L_40 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_41 = __this->___data_16;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = PcmData_get_Length_m4E82710F2380143906E2619EB05910A0D366F44F_inline(L_41, NULL);
		if ((!(((double)L_40) > ((double)((double)L_42)))))
		{
			goto IL_0171;
		}
	}
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_43 = __this->___data_16;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = PcmData_get_Length_m4E82710F2380143906E2619EB05910A0D366F44F_inline(L_43, NULL);
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8 = ((double)L_44);
	}

IL_0171:
	{
		double L_45 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		double L_46 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		if ((!(((double)L_45) > ((double)L_46))))
		{
			goto IL_018b;
		}
	}
	{
		double L_47 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6 = L_47;
	}

IL_018b:
	{
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Generators.SampleGenerator::GetValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SampleGenerator_GetValue_m0D80FB937CCAB6A6B06C649242BDFDA8C7E06823 (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* __this, double ___phase0, const RuntimeMethod* method) 
{
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_0 = __this->___data_16;
		double L_1 = ___phase0;
		NullCheck(L_0);
		float L_2;
		L_2 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_0, il2cpp_codegen_cast_double_to_int<int32_t>(L_1));
		return L_2;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.SampleGenerator::GetValues(AudioSynthesis.Bank.Components.Generators.GeneratorParameters,System.Single[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleGenerator_GetValues_m824CF3DE060E34BE5F1C91E342656C398F750A0D (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* __this, GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* ___generatorParams0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___blockBuffer1, double ___increment2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_0 = ___generatorParams0;
		NullCheck(L_0);
		double L_1 = L_0->___currentEnd_2;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_2 = ___generatorParams0;
		NullCheck(L_2);
		double L_3 = L_2->___phase_0;
		double L_4 = ___increment2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = ceil(((double)(((double)il2cpp_codegen_subtract(L_1, L_3))/L_4)));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___blockBuffer1;
		NullCheck(L_7);
		int32_t L_8 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_002e;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_9 = ___generatorParams0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___blockBuffer1;
		double L_11 = ___increment2;
		int32_t L_12 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ___blockBuffer1;
		NullCheck(L_13);
		SampleGenerator_Interpolate_mB9F43686CE090C4624E4BD4F293EC7B8BF027CF0(__this, L_9, L_10, L_11, L_12, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		return;
	}

IL_002e:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_16 = ___generatorParams0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = ___blockBuffer1;
		double L_18 = ___increment2;
		int32_t L_19 = V_0;
		int32_t L_20 = V_2;
		SampleGenerator_Interpolate_mB9F43686CE090C4624E4BD4F293EC7B8BF027CF0(__this, L_16, L_17, L_18, L_19, L_20, NULL);
		int32_t L_21 = V_2;
		V_0 = L_21;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_22 = ___generatorParams0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___currentState_3;
		V_3 = L_23;
		int32_t L_24 = V_3;
		switch (L_24)
		{
			case 0:
			{
				goto IL_005a;
			}
			case 1:
			{
				goto IL_007b;
			}
			case 2:
			{
				goto IL_0097;
			}
		}
	}
	{
		goto IL_00b2;
	}

IL_005a:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_25 = ___generatorParams0;
		double L_26 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		NullCheck(L_25);
		L_25->___currentStart_1 = L_26;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_27 = ___generatorParams0;
		double L_28 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		NullCheck(L_27);
		L_27->___currentEnd_2 = L_28;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_29 = ___generatorParams0;
		NullCheck(L_29);
		L_29->___currentState_3 = 1;
		goto IL_00b2;
	}

IL_007b:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_30 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_31 = L_30;
		NullCheck(L_31);
		double L_32 = L_31->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_33 = ___generatorParams0;
		NullCheck(L_33);
		double L_34 = L_33->___currentStart_1;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_35 = ___generatorParams0;
		NullCheck(L_35);
		double L_36 = L_35->___currentEnd_2;
		NullCheck(L_31);
		L_31->___phase_0 = ((double)il2cpp_codegen_add(L_32, ((double)il2cpp_codegen_subtract(L_34, L_36))));
		goto IL_00b2;
	}

IL_0097:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_37 = ___generatorParams0;
		NullCheck(L_37);
		L_37->___currentState_3 = 3;
		goto IL_00ac;
	}

IL_00a0:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = ___blockBuffer1;
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (float)(0.0f));
	}

IL_00ac:
	{
		int32_t L_41 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = ___blockBuffer1;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_00a0;
		}
	}

IL_00b2:
	{
		int32_t L_43 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = ___blockBuffer1;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.SampleGenerator::Interpolate(AudioSynthesis.Bank.Components.Generators.GeneratorParameters,System.Single[],System.Double,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleGenerator_Interpolate_mB9F43686CE090C4624E4BD4F293EC7B8BF027CF0 (SampleGenerator_tB90FAA25E83FC963CE730264C27B2C7DF3C5D121* __this, GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* ___generatorParams0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___blockBuffer1, double ___increment2, int32_t ___start3, int32_t ___end4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_t843688EC8CDE0AC21C6EBB600F197D38F0A93554_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	double V_11 = 0.0;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	double G_B5_0 = 0.0;
	double G_B19_0 = 0.0;
	double G_B33_0 = 0.0;
	double G_B43_0 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(Synthesizer_t843688EC8CDE0AC21C6EBB600F197D38F0A93554_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Synthesizer_t843688EC8CDE0AC21C6EBB600F197D38F0A93554_StaticFields*)il2cpp_codegen_static_fields_for(Synthesizer_t843688EC8CDE0AC21C6EBB600F197D38F0A93554_il2cpp_TypeInfo_var))->___InterpolationMode_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0119;
			}
			case 2:
			{
				goto IL_0271;
			}
		}
	}
	{
		goto IL_0640;
	}

IL_001f:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_2 = ___generatorParams0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___currentState_3;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		double L_4 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		G_B5_0 = ((double)il2cpp_codegen_subtract(L_4, (1.0)));
		goto IL_004a;
	}

IL_003a:
	{
		double L_5 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		G_B5_0 = ((double)il2cpp_codegen_subtract(L_5, (1.0)));
	}

IL_004a:
	{
		V_1 = G_B5_0;
		goto IL_009e;
	}

IL_004d:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_6 = ___generatorParams0;
		NullCheck(L_6);
		double L_7 = L_6->___phase_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_7);
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_8 = __this->___data_16;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		float L_10;
		L_10 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_8, L_9);
		V_3 = L_10;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_11 = __this->___data_16;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		float L_13;
		L_13 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)));
		V_4 = L_13;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_14 = ___generatorParams0;
		NullCheck(L_14);
		double L_15 = L_14->___phase_0;
		int32_t L_16 = V_2;
		V_5 = ((float)((double)il2cpp_codegen_subtract(L_15, ((double)L_16))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = ___blockBuffer1;
		int32_t L_18 = ___start3;
		int32_t L_19 = L_18;
		___start3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		float L_20 = V_3;
		float L_21 = V_5;
		float L_22 = V_4;
		float L_23 = V_3;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (float)((float)il2cpp_codegen_add(L_20, ((float)il2cpp_codegen_multiply(L_21, ((float)il2cpp_codegen_subtract(L_22, L_23)))))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_24 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_25 = L_24;
		NullCheck(L_25);
		double L_26 = L_25->___phase_0;
		double L_27 = ___increment2;
		NullCheck(L_25);
		L_25->___phase_0 = ((double)il2cpp_codegen_add(L_26, L_27));
	}

IL_009e:
	{
		int32_t L_28 = ___start3;
		int32_t L_29 = ___end4;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_0112;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_30 = ___generatorParams0;
		NullCheck(L_30);
		double L_31 = L_30->___phase_0;
		double L_32 = V_1;
		if ((((double)L_31) < ((double)L_32)))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_0112;
	}

IL_00af:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_33 = ___generatorParams0;
		NullCheck(L_33);
		double L_34 = L_33->___phase_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_34);
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_35 = __this->___data_16;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		float L_37;
		L_37 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_35, L_36);
		V_3 = L_37;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_38 = ___generatorParams0;
		NullCheck(L_38);
		int32_t L_39 = L_38->___currentState_3;
		if ((!(((uint32_t)L_39) == ((uint32_t)1))))
		{
			goto IL_00e3;
		}
	}
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_40 = __this->___data_16;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_41 = ___generatorParams0;
		NullCheck(L_41);
		double L_42 = L_41->___currentStart_1;
		NullCheck(L_40);
		float L_43;
		L_43 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_40, il2cpp_codegen_cast_double_to_int<int32_t>(L_42));
		V_4 = L_43;
		goto IL_00e6;
	}

IL_00e3:
	{
		float L_44 = V_3;
		V_4 = L_44;
	}

IL_00e6:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_45 = ___generatorParams0;
		NullCheck(L_45);
		double L_46 = L_45->___phase_0;
		int32_t L_47 = V_2;
		V_5 = ((float)((double)il2cpp_codegen_subtract(L_46, ((double)L_47))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = ___blockBuffer1;
		int32_t L_49 = ___start3;
		int32_t L_50 = L_49;
		___start3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		float L_51 = V_3;
		float L_52 = V_5;
		float L_53 = V_4;
		float L_54 = V_3;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (float)((float)il2cpp_codegen_add(L_51, ((float)il2cpp_codegen_multiply(L_52, ((float)il2cpp_codegen_subtract(L_53, L_54)))))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_55 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_56 = L_55;
		NullCheck(L_56);
		double L_57 = L_56->___phase_0;
		double L_58 = ___increment2;
		NullCheck(L_56);
		L_56->___phase_0 = ((double)il2cpp_codegen_add(L_57, L_58));
	}

IL_0112:
	{
		int32_t L_59 = ___start3;
		int32_t L_60 = ___end4;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_00af;
		}
	}
	{
		return;
	}

IL_0119:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_61 = ___generatorParams0;
		NullCheck(L_61);
		int32_t L_62 = L_61->___currentState_3;
		if ((((int32_t)L_62) == ((int32_t)1)))
		{
			goto IL_0134;
		}
	}
	{
		double L_63 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		G_B19_0 = ((double)il2cpp_codegen_subtract(L_63, (1.0)));
		goto IL_0144;
	}

IL_0134:
	{
		double L_64 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		G_B19_0 = ((double)il2cpp_codegen_subtract(L_64, (1.0)));
	}

IL_0144:
	{
		V_6 = G_B19_0;
		goto IL_01c1;
	}

IL_0148:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_65 = ___generatorParams0;
		NullCheck(L_65);
		double L_66 = L_65->___phase_0;
		V_7 = il2cpp_codegen_cast_double_to_int<int32_t>(L_66);
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_67 = __this->___data_16;
		int32_t L_68 = V_7;
		NullCheck(L_67);
		float L_69;
		L_69 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_67, L_68);
		V_8 = L_69;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_70 = __this->___data_16;
		int32_t L_71 = V_7;
		NullCheck(L_70);
		float L_72;
		L_72 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_70, ((int32_t)il2cpp_codegen_add(L_71, 1)));
		V_9 = L_72;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_73 = ___generatorParams0;
		NullCheck(L_73);
		double L_74 = L_73->___phase_0;
		int32_t L_75 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_76;
		L_76 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_74, ((double)L_75))), (3.1415926535897931))));
		V_10 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), ((float)L_76))), (0.5f)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_77 = ___blockBuffer1;
		int32_t L_78 = ___start3;
		int32_t L_79 = L_78;
		___start3 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		float L_80 = V_8;
		float L_81 = V_10;
		float L_82 = V_9;
		float L_83 = V_10;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_80, ((float)il2cpp_codegen_subtract((1.0f), L_81)))), ((float)il2cpp_codegen_multiply(L_82, L_83)))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_84 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_85 = L_84;
		NullCheck(L_85);
		double L_86 = L_85->___phase_0;
		double L_87 = ___increment2;
		NullCheck(L_85);
		L_85->___phase_0 = ((double)il2cpp_codegen_add(L_86, L_87));
	}

IL_01c1:
	{
		int32_t L_88 = ___start3;
		int32_t L_89 = ___end4;
		if ((((int32_t)L_88) >= ((int32_t)L_89)))
		{
			goto IL_0267;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_90 = ___generatorParams0;
		NullCheck(L_90);
		double L_91 = L_90->___phase_0;
		double L_92 = V_6;
		if ((((double)L_91) < ((double)L_92)))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0267;
	}

IL_01dc:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_93 = ___generatorParams0;
		NullCheck(L_93);
		double L_94 = L_93->___phase_0;
		V_7 = il2cpp_codegen_cast_double_to_int<int32_t>(L_94);
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_95 = __this->___data_16;
		int32_t L_96 = V_7;
		NullCheck(L_95);
		float L_97;
		L_97 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_95, L_96);
		V_8 = L_97;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_98 = ___generatorParams0;
		NullCheck(L_98);
		int32_t L_99 = L_98->___currentState_3;
		if ((!(((uint32_t)L_99) == ((uint32_t)1))))
		{
			goto IL_0213;
		}
	}
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_100 = __this->___data_16;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_101 = ___generatorParams0;
		NullCheck(L_101);
		double L_102 = L_101->___currentStart_1;
		NullCheck(L_100);
		float L_103;
		L_103 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_100, il2cpp_codegen_cast_double_to_int<int32_t>(L_102));
		V_9 = L_103;
		goto IL_0217;
	}

IL_0213:
	{
		float L_104 = V_8;
		V_9 = L_104;
	}

IL_0217:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_105 = ___generatorParams0;
		NullCheck(L_105);
		double L_106 = L_105->___phase_0;
		int32_t L_107 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_108;
		L_108 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_106, ((double)L_107))), (3.1415926535897931))));
		V_10 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), ((float)L_108))), (0.5f)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_109 = ___blockBuffer1;
		int32_t L_110 = ___start3;
		int32_t L_111 = L_110;
		___start3 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		float L_112 = V_8;
		float L_113 = V_10;
		float L_114 = V_9;
		float L_115 = V_10;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_112, ((float)il2cpp_codegen_subtract((1.0f), L_113)))), ((float)il2cpp_codegen_multiply(L_114, L_115)))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_116 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_117 = L_116;
		NullCheck(L_117);
		double L_118 = L_117->___phase_0;
		double L_119 = ___increment2;
		NullCheck(L_117);
		L_117->___phase_0 = ((double)il2cpp_codegen_add(L_118, L_119));
	}

IL_0267:
	{
		int32_t L_120 = ___start3;
		int32_t L_121 = ___end4;
		if ((((int32_t)L_120) < ((int32_t)L_121)))
		{
			goto IL_01dc;
		}
	}
	{
		return;
	}

IL_0271:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_122 = ___generatorParams0;
		NullCheck(L_122);
		int32_t L_123 = L_122->___currentState_3;
		if ((((int32_t)L_123) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		double L_124 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		G_B33_0 = ((double)il2cpp_codegen_add(L_124, (1.0)));
		goto IL_029c;
	}

IL_028c:
	{
		double L_125 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		G_B33_0 = ((double)il2cpp_codegen_add(L_125, (1.0)));
	}

IL_029c:
	{
		V_11 = G_B33_0;
		goto IL_0399;
	}

IL_02a3:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_126 = ___generatorParams0;
		NullCheck(L_126);
		double L_127 = L_126->___phase_0;
		V_12 = il2cpp_codegen_cast_double_to_int<int32_t>(L_127);
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_128 = ___generatorParams0;
		NullCheck(L_128);
		int32_t L_129 = L_128->___currentState_3;
		if ((!(((uint32_t)L_129) == ((uint32_t)1))))
		{
			goto IL_02cd;
		}
	}
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_130 = __this->___data_16;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_131 = ___generatorParams0;
		NullCheck(L_131);
		double L_132 = L_131->___currentEnd_2;
		NullCheck(L_130);
		float L_133;
		L_133 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_130, ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_132), 1)));
		V_13 = L_133;
		goto IL_02dc;
	}

IL_02cd:
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_134 = __this->___data_16;
		int32_t L_135 = V_12;
		NullCheck(L_134);
		float L_136;
		L_136 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_134, L_135);
		V_13 = L_136;
	}

IL_02dc:
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_137 = __this->___data_16;
		int32_t L_138 = V_12;
		NullCheck(L_137);
		float L_139;
		L_139 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_137, L_138);
		V_14 = L_139;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_140 = __this->___data_16;
		int32_t L_141 = V_12;
		NullCheck(L_140);
		float L_142;
		L_142 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_140, ((int32_t)il2cpp_codegen_add(L_141, 1)));
		V_15 = L_142;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_143 = __this->___data_16;
		int32_t L_144 = V_12;
		NullCheck(L_143);
		float L_145;
		L_145 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_143, ((int32_t)il2cpp_codegen_add(L_144, 2)));
		V_16 = L_145;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_146 = ___generatorParams0;
		NullCheck(L_146);
		double L_147 = L_146->___phase_0;
		int32_t L_148 = V_12;
		V_17 = ((float)((double)il2cpp_codegen_subtract(L_147, ((double)L_148))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_149 = ___blockBuffer1;
		int32_t L_150 = ___start3;
		int32_t L_151 = L_150;
		___start3 = ((int32_t)il2cpp_codegen_add(L_151, 1));
		float L_152 = V_13;
		float L_153 = V_14;
		float L_154 = V_15;
		float L_155 = V_16;
		float L_156 = V_17;
		float L_157 = V_17;
		float L_158 = V_17;
		float L_159 = V_13;
		float L_160 = V_14;
		float L_161 = V_15;
		float L_162 = V_16;
		float L_163 = V_17;
		float L_164 = V_17;
		float L_165 = V_13;
		float L_166 = V_15;
		float L_167 = V_17;
		float L_168 = V_14;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_151), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-0.5f), L_152)), ((float)il2cpp_codegen_multiply((1.5f), L_153)))), ((float)il2cpp_codegen_multiply((1.5f), L_154)))), ((float)il2cpp_codegen_multiply((0.5f), L_155)))), L_156)), L_157)), L_158)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_159, ((float)il2cpp_codegen_multiply((2.5f), L_160)))), ((float)il2cpp_codegen_multiply((2.0f), L_161)))), ((float)il2cpp_codegen_multiply((0.5f), L_162)))), L_163)), L_164)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-0.5f), L_165)), ((float)il2cpp_codegen_multiply((0.5f), L_166)))), L_167)))), L_168)));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_169 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_170 = L_169;
		NullCheck(L_170);
		double L_171 = L_170->___phase_0;
		double L_172 = ___increment2;
		NullCheck(L_170);
		L_170->___phase_0 = ((double)il2cpp_codegen_add(L_171, L_172));
	}

IL_0399:
	{
		int32_t L_173 = ___start3;
		int32_t L_174 = ___end4;
		if ((((int32_t)L_173) >= ((int32_t)L_174)))
		{
			goto IL_03ac;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_175 = ___generatorParams0;
		NullCheck(L_175);
		double L_176 = L_175->___phase_0;
		double L_177 = V_11;
		if ((((double)L_176) < ((double)L_177)))
		{
			goto IL_02a3;
		}
	}

IL_03ac:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_178 = ___generatorParams0;
		NullCheck(L_178);
		int32_t L_179 = L_178->___currentState_3;
		if ((((int32_t)L_179) == ((int32_t)1)))
		{
			goto IL_03c7;
		}
	}
	{
		double L_180 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		G_B43_0 = ((double)il2cpp_codegen_subtract(L_180, (2.0)));
		goto IL_03d7;
	}

IL_03c7:
	{
		double L_181 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		G_B43_0 = ((double)il2cpp_codegen_subtract(L_181, (2.0)));
	}

IL_03d7:
	{
		V_11 = G_B43_0;
		goto IL_04b5;
	}

IL_03de:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_182 = ___generatorParams0;
		NullCheck(L_182);
		double L_183 = L_182->___phase_0;
		V_12 = il2cpp_codegen_cast_double_to_int<int32_t>(L_183);
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_184 = __this->___data_16;
		int32_t L_185 = V_12;
		NullCheck(L_184);
		float L_186;
		L_186 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_184, ((int32_t)il2cpp_codegen_subtract(L_185, 1)));
		V_13 = L_186;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_187 = __this->___data_16;
		int32_t L_188 = V_12;
		NullCheck(L_187);
		float L_189;
		L_189 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_187, L_188);
		V_14 = L_189;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_190 = __this->___data_16;
		int32_t L_191 = V_12;
		NullCheck(L_190);
		float L_192;
		L_192 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_190, ((int32_t)il2cpp_codegen_add(L_191, 1)));
		V_15 = L_192;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_193 = __this->___data_16;
		int32_t L_194 = V_12;
		NullCheck(L_193);
		float L_195;
		L_195 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_193, ((int32_t)il2cpp_codegen_add(L_194, 2)));
		V_16 = L_195;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_196 = ___generatorParams0;
		NullCheck(L_196);
		double L_197 = L_196->___phase_0;
		int32_t L_198 = V_12;
		V_17 = ((float)((double)il2cpp_codegen_subtract(L_197, ((double)L_198))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_199 = ___blockBuffer1;
		int32_t L_200 = ___start3;
		int32_t L_201 = L_200;
		___start3 = ((int32_t)il2cpp_codegen_add(L_201, 1));
		float L_202 = V_13;
		float L_203 = V_14;
		float L_204 = V_15;
		float L_205 = V_16;
		float L_206 = V_17;
		float L_207 = V_17;
		float L_208 = V_17;
		float L_209 = V_13;
		float L_210 = V_14;
		float L_211 = V_15;
		float L_212 = V_16;
		float L_213 = V_17;
		float L_214 = V_17;
		float L_215 = V_13;
		float L_216 = V_15;
		float L_217 = V_17;
		float L_218 = V_14;
		NullCheck(L_199);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(L_201), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-0.5f), L_202)), ((float)il2cpp_codegen_multiply((1.5f), L_203)))), ((float)il2cpp_codegen_multiply((1.5f), L_204)))), ((float)il2cpp_codegen_multiply((0.5f), L_205)))), L_206)), L_207)), L_208)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_209, ((float)il2cpp_codegen_multiply((2.5f), L_210)))), ((float)il2cpp_codegen_multiply((2.0f), L_211)))), ((float)il2cpp_codegen_multiply((0.5f), L_212)))), L_213)), L_214)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-0.5f), L_215)), ((float)il2cpp_codegen_multiply((0.5f), L_216)))), L_217)))), L_218)));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_219 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_220 = L_219;
		NullCheck(L_220);
		double L_221 = L_220->___phase_0;
		double L_222 = ___increment2;
		NullCheck(L_220);
		L_220->___phase_0 = ((double)il2cpp_codegen_add(L_221, L_222));
	}

IL_04b5:
	{
		int32_t L_223 = ___start3;
		int32_t L_224 = ___end4;
		if ((((int32_t)L_223) >= ((int32_t)L_224)))
		{
			goto IL_04c8;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_225 = ___generatorParams0;
		NullCheck(L_225);
		double L_226 = L_225->___phase_0;
		double L_227 = V_11;
		if ((((double)L_226) < ((double)L_227)))
		{
			goto IL_03de;
		}
	}

IL_04c8:
	{
		double L_228 = V_11;
		V_11 = ((double)il2cpp_codegen_add(L_228, (1.0)));
		goto IL_060d;
	}

IL_04db:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_229 = ___generatorParams0;
		NullCheck(L_229);
		double L_230 = L_229->___phase_0;
		V_12 = il2cpp_codegen_cast_double_to_int<int32_t>(L_230);
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_231 = __this->___data_16;
		int32_t L_232 = V_12;
		NullCheck(L_231);
		float L_233;
		L_233 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_231, ((int32_t)il2cpp_codegen_subtract(L_232, 1)));
		V_13 = L_233;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_234 = __this->___data_16;
		int32_t L_235 = V_12;
		NullCheck(L_234);
		float L_236;
		L_236 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_234, L_235);
		V_14 = L_236;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_237 = ___generatorParams0;
		NullCheck(L_237);
		double L_238 = L_237->___phase_0;
		double L_239 = V_11;
		if ((!(((double)L_238) < ((double)L_239))))
		{
			goto IL_0544;
		}
	}
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_240 = __this->___data_16;
		int32_t L_241 = V_12;
		NullCheck(L_240);
		float L_242;
		L_242 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_240, ((int32_t)il2cpp_codegen_add(L_241, 1)));
		V_15 = L_242;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_243 = ___generatorParams0;
		NullCheck(L_243);
		int32_t L_244 = L_243->___currentState_3;
		if ((!(((uint32_t)L_244) == ((uint32_t)1))))
		{
			goto IL_053e;
		}
	}
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_245 = __this->___data_16;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_246 = ___generatorParams0;
		NullCheck(L_246);
		double L_247 = L_246->___currentStart_1;
		NullCheck(L_245);
		float L_248;
		L_248 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_245, il2cpp_codegen_cast_double_to_int<int32_t>(L_247));
		V_16 = L_248;
		goto IL_0581;
	}

IL_053e:
	{
		float L_249 = V_15;
		V_16 = L_249;
		goto IL_0581;
	}

IL_0544:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_250 = ___generatorParams0;
		NullCheck(L_250);
		int32_t L_251 = L_250->___currentState_3;
		if ((!(((uint32_t)L_251) == ((uint32_t)1))))
		{
			goto IL_0579;
		}
	}
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_252 = __this->___data_16;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_253 = ___generatorParams0;
		NullCheck(L_253);
		double L_254 = L_253->___currentStart_1;
		NullCheck(L_252);
		float L_255;
		L_255 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_252, il2cpp_codegen_cast_double_to_int<int32_t>(L_254));
		V_15 = L_255;
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_256 = __this->___data_16;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_257 = ___generatorParams0;
		NullCheck(L_257);
		double L_258 = L_257->___currentStart_1;
		NullCheck(L_256);
		float L_259;
		L_259 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_256, ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_258), 1)));
		V_16 = L_259;
		goto IL_0581;
	}

IL_0579:
	{
		float L_260 = V_14;
		V_15 = L_260;
		float L_261 = V_14;
		V_16 = L_261;
	}

IL_0581:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_262 = ___generatorParams0;
		NullCheck(L_262);
		double L_263 = L_262->___phase_0;
		int32_t L_264 = V_12;
		V_17 = ((float)((double)il2cpp_codegen_subtract(L_263, ((double)L_264))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_265 = ___blockBuffer1;
		int32_t L_266 = ___start3;
		int32_t L_267 = L_266;
		___start3 = ((int32_t)il2cpp_codegen_add(L_267, 1));
		float L_268 = V_13;
		float L_269 = V_14;
		float L_270 = V_15;
		float L_271 = V_16;
		float L_272 = V_17;
		float L_273 = V_17;
		float L_274 = V_17;
		float L_275 = V_13;
		float L_276 = V_14;
		float L_277 = V_15;
		float L_278 = V_16;
		float L_279 = V_17;
		float L_280 = V_17;
		float L_281 = V_13;
		float L_282 = V_15;
		float L_283 = V_17;
		float L_284 = V_14;
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(L_267), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-0.5f), L_268)), ((float)il2cpp_codegen_multiply((1.5f), L_269)))), ((float)il2cpp_codegen_multiply((1.5f), L_270)))), ((float)il2cpp_codegen_multiply((0.5f), L_271)))), L_272)), L_273)), L_274)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_275, ((float)il2cpp_codegen_multiply((2.5f), L_276)))), ((float)il2cpp_codegen_multiply((2.0f), L_277)))), ((float)il2cpp_codegen_multiply((0.5f), L_278)))), L_279)), L_280)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-0.5f), L_281)), ((float)il2cpp_codegen_multiply((0.5f), L_282)))), L_283)))), L_284)));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_285 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_286 = L_285;
		NullCheck(L_286);
		double L_287 = L_286->___phase_0;
		double L_288 = ___increment2;
		NullCheck(L_286);
		L_286->___phase_0 = ((double)il2cpp_codegen_add(L_287, L_288));
	}

IL_060d:
	{
		int32_t L_289 = ___start3;
		int32_t L_290 = ___end4;
		if ((((int32_t)L_289) < ((int32_t)L_290)))
		{
			goto IL_04db;
		}
	}
	{
		return;
	}

IL_0617:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_291 = ___blockBuffer1;
		int32_t L_292 = ___start3;
		int32_t L_293 = L_292;
		___start3 = ((int32_t)il2cpp_codegen_add(L_293, 1));
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_294 = __this->___data_16;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_295 = ___generatorParams0;
		NullCheck(L_295);
		double L_296 = L_295->___phase_0;
		NullCheck(L_294);
		float L_297;
		L_297 = VirtualFuncInvoker1< float, int32_t >::Invoke(4 /* System.Single AudioSynthesis.Wave.PcmData::get_Item(System.Int32) */, L_294, il2cpp_codegen_cast_double_to_int<int32_t>(L_296));
		NullCheck(L_291);
		(L_291)->SetAt(static_cast<il2cpp_array_size_t>(L_293), (float)L_297);
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_298 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_299 = L_298;
		NullCheck(L_299);
		double L_300 = L_299->___phase_0;
		double L_301 = ___increment2;
		NullCheck(L_299);
		L_299->___phase_0 = ((double)il2cpp_codegen_add(L_300, L_301));
	}

IL_0640:
	{
		int32_t L_302 = ___start3;
		int32_t L_303 = ___end4;
		if ((((int32_t)L_302) < ((int32_t)L_303)))
		{
			goto IL_0617;
		}
	}
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
// System.Void AudioSynthesis.Bank.Components.Generators.SawGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SawGenerator__ctor_m63BB8E828DE4DB99F5A970AE312C64661E56A8D6 (SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_0 = ___description0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		Generator__ctor_m3313B048E930DC072C9AEEA9DE0A12F183FE0473(__this, L_0, NULL);
		double L_1 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0027;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8 = (1.0);
	}

IL_0027:
	{
		double L_2 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_0047;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7 = (0.0);
	}

IL_0047:
	{
		double L_3 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		if ((!(((double)L_3) < ((double)(0.0)))))
		{
			goto IL_0064;
		}
	}
	{
		double L_4 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6 = L_4;
	}

IL_0064:
	{
		double L_5 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		if ((!(((double)L_5) < ((double)(0.0)))))
		{
			goto IL_0081;
		}
	}
	{
		double L_6 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5 = L_6;
	}

IL_0081:
	{
		double L_7 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10;
		if ((!(((double)L_7) < ((double)(0.0)))))
		{
			goto IL_00a1;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10 = (1.0);
	}

IL_00a1:
	{
		int16_t L_8 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12 = (int16_t)((int32_t)69);
	}

IL_00b2:
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___freq_11 = (440.0);
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Generators.SawGenerator::GetValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SawGenerator_GetValue_m3D23E132AE4E9B081500DAB6C124128C933A854C (SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776* __this, double ___phase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___phase0;
		double L_1 = ___phase0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = floor(((double)il2cpp_codegen_add(L_1, (0.5))));
		return ((float)((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract(L_0, L_2)))));
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.SawGenerator::GetValues(AudioSynthesis.Bank.Components.Generators.GeneratorParameters,System.Single[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SawGenerator_GetValues_mA252DFD36F5B3A722F0DE22A360C50DFFC0FDA17 (SawGenerator_t5886714B28EABB39CFE1169D15EC9898FF0B3776* __this, GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* ___generatorParams0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___blockBuffer1, double ___increment2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_0 = ___generatorParams0;
		NullCheck(L_0);
		double L_1 = L_0->___currentEnd_2;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_2 = ___generatorParams0;
		NullCheck(L_2);
		double L_3 = L_2->___phase_0;
		double L_4 = ___increment2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = ceil(((double)(((double)il2cpp_codegen_subtract(L_1, L_3))/L_4)));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___blockBuffer1;
		NullCheck(L_7);
		int32_t L_8 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_0069;
		}
	}
	{
		goto IL_005e;
	}

IL_0022:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___blockBuffer1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_12 = ___generatorParams0;
		NullCheck(L_12);
		double L_13 = L_12->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_14 = ___generatorParams0;
		NullCheck(L_14);
		double L_15 = L_14->___phase_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = floor(((double)il2cpp_codegen_add(L_15, (0.5))));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract(L_13, L_16))))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_17 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_18 = L_17;
		NullCheck(L_18);
		double L_19 = L_18->___phase_0;
		double L_20 = ___increment2;
		NullCheck(L_18);
		L_18->___phase_0 = ((double)il2cpp_codegen_add(L_19, L_20));
	}

IL_005e:
	{
		int32_t L_21 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = ___blockBuffer1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0122;
	}

IL_0069:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		goto IL_00ab;
	}

IL_006f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = ___blockBuffer1;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_28 = ___generatorParams0;
		NullCheck(L_28);
		double L_29 = L_28->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_30 = ___generatorParams0;
		NullCheck(L_30);
		double L_31 = L_30->___phase_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = floor(((double)il2cpp_codegen_add(L_31, (0.5))));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (float)((float)((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract(L_29, L_32))))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_33 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_34 = L_33;
		NullCheck(L_34);
		double L_35 = L_34->___phase_0;
		double L_36 = ___increment2;
		NullCheck(L_34);
		L_34->___phase_0 = ((double)il2cpp_codegen_add(L_35, L_36));
	}

IL_00ab:
	{
		int32_t L_37 = V_0;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_006f;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_39 = ___generatorParams0;
		NullCheck(L_39);
		int32_t L_40 = L_39->___currentState_3;
		V_3 = L_40;
		int32_t L_41 = V_3;
		switch (L_41)
		{
			case 0:
			{
				goto IL_00ca;
			}
			case 1:
			{
				goto IL_00eb;
			}
			case 2:
			{
				goto IL_0107;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_00ca:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_42 = ___generatorParams0;
		double L_43 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		NullCheck(L_42);
		L_42->___currentStart_1 = L_43;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_44 = ___generatorParams0;
		double L_45 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		NullCheck(L_44);
		L_44->___currentEnd_2 = L_45;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_46 = ___generatorParams0;
		NullCheck(L_46);
		L_46->___currentState_3 = 1;
		goto IL_0122;
	}

IL_00eb:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_47 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_48 = L_47;
		NullCheck(L_48);
		double L_49 = L_48->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_50 = ___generatorParams0;
		NullCheck(L_50);
		double L_51 = L_50->___currentStart_1;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_52 = ___generatorParams0;
		NullCheck(L_52);
		double L_53 = L_52->___currentEnd_2;
		NullCheck(L_48);
		L_48->___phase_0 = ((double)il2cpp_codegen_add(L_49, ((double)il2cpp_codegen_subtract(L_51, L_53))));
		goto IL_0122;
	}

IL_0107:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_54 = ___generatorParams0;
		NullCheck(L_54);
		L_54->___currentState_3 = 3;
		goto IL_011c;
	}

IL_0110:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = ___blockBuffer1;
		int32_t L_56 = V_0;
		int32_t L_57 = L_56;
		V_0 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (float)(0.0f));
	}

IL_011c:
	{
		int32_t L_58 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = ___blockBuffer1;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)))))
		{
			goto IL_0110;
		}
	}

IL_0122:
	{
		int32_t L_60 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = ___blockBuffer1;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
		{
			goto IL_0002;
		}
	}
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
// System.Void AudioSynthesis.Bank.Components.Generators.SineGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SineGenerator__ctor_m6E89C7662634417B9495F94439ECE7E7D337CD9E (SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_0 = ___description0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		Generator__ctor_m3313B048E930DC072C9AEEA9DE0A12F183FE0473(__this, L_0, NULL);
		double L_1 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0027;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8 = (6.2831853071795862);
	}

IL_0027:
	{
		double L_2 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_0047;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7 = (0.0);
	}

IL_0047:
	{
		double L_3 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		if ((!(((double)L_3) < ((double)(0.0)))))
		{
			goto IL_0064;
		}
	}
	{
		double L_4 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6 = L_4;
	}

IL_0064:
	{
		double L_5 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		if ((!(((double)L_5) < ((double)(0.0)))))
		{
			goto IL_0081;
		}
	}
	{
		double L_6 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5 = L_6;
	}

IL_0081:
	{
		double L_7 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10;
		if ((!(((double)L_7) < ((double)(0.0)))))
		{
			goto IL_00a1;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10 = (6.2831853071795862);
	}

IL_00a1:
	{
		int16_t L_8 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12 = (int16_t)((int32_t)69);
	}

IL_00b2:
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___freq_11 = (440.0);
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Generators.SineGenerator::GetValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SineGenerator_GetValue_m28E00BF0AB69498558DDB2CB0553B6A1A9962B58 (SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* __this, double ___phase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___phase0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sin(L_0);
		return ((float)L_1);
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.SineGenerator::GetValues(AudioSynthesis.Bank.Components.Generators.GeneratorParameters,System.Single[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SineGenerator_GetValues_mCBA1AFC4D1C6A5FC62BF2963CED0319604173E3A (SineGenerator_tD55BE478D6F571674E7C70D039985329F7211C2D* __this, GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* ___generatorParams0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___blockBuffer1, double ___increment2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_0 = ___generatorParams0;
		NullCheck(L_0);
		double L_1 = L_0->___currentEnd_2;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_2 = ___generatorParams0;
		NullCheck(L_2);
		double L_3 = L_2->___phase_0;
		double L_4 = ___increment2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = ceil(((double)(((double)il2cpp_codegen_subtract(L_1, L_3))/L_4)));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___blockBuffer1;
		NullCheck(L_7);
		int32_t L_8 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0043;
	}

IL_0022:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___blockBuffer1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_12 = ___generatorParams0;
		NullCheck(L_12);
		double L_13 = L_12->___phase_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = sin(L_13);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)L_14));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_15 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_16 = L_15;
		NullCheck(L_16);
		double L_17 = L_16->___phase_0;
		double L_18 = ___increment2;
		NullCheck(L_16);
		L_16->___phase_0 = ((double)il2cpp_codegen_add(L_17, L_18));
	}

IL_0043:
	{
		int32_t L_19 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = ___blockBuffer1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_00ec;
	}

IL_004e:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		goto IL_0075;
	}

IL_0054:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___blockBuffer1;
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_26 = ___generatorParams0;
		NullCheck(L_26);
		double L_27 = L_26->___phase_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_28;
		L_28 = sin(L_27);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (float)((float)L_28));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_29 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_30 = L_29;
		NullCheck(L_30);
		double L_31 = L_30->___phase_0;
		double L_32 = ___increment2;
		NullCheck(L_30);
		L_30->___phase_0 = ((double)il2cpp_codegen_add(L_31, L_32));
	}

IL_0075:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0054;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_35 = ___generatorParams0;
		NullCheck(L_35);
		int32_t L_36 = L_35->___currentState_3;
		V_3 = L_36;
		int32_t L_37 = V_3;
		switch (L_37)
		{
			case 0:
			{
				goto IL_0094;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_00d1;
			}
		}
	}
	{
		goto IL_00ec;
	}

IL_0094:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_38 = ___generatorParams0;
		double L_39 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		NullCheck(L_38);
		L_38->___currentStart_1 = L_39;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_40 = ___generatorParams0;
		double L_41 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		NullCheck(L_40);
		L_40->___currentEnd_2 = L_41;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_42 = ___generatorParams0;
		NullCheck(L_42);
		L_42->___currentState_3 = 1;
		goto IL_00ec;
	}

IL_00b5:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_43 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_44 = L_43;
		NullCheck(L_44);
		double L_45 = L_44->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_46 = ___generatorParams0;
		NullCheck(L_46);
		double L_47 = L_46->___currentStart_1;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_48 = ___generatorParams0;
		NullCheck(L_48);
		double L_49 = L_48->___currentEnd_2;
		NullCheck(L_44);
		L_44->___phase_0 = ((double)il2cpp_codegen_add(L_45, ((double)il2cpp_codegen_subtract(L_47, L_49))));
		goto IL_00ec;
	}

IL_00d1:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_50 = ___generatorParams0;
		NullCheck(L_50);
		L_50->___currentState_3 = 3;
		goto IL_00e6;
	}

IL_00da:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = ___blockBuffer1;
		int32_t L_52 = V_0;
		int32_t L_53 = L_52;
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (float)(0.0f));
	}

IL_00e6:
	{
		int32_t L_54 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = ___blockBuffer1;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_00da;
		}
	}

IL_00ec:
	{
		int32_t L_56 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = ___blockBuffer1;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_0002;
		}
	}
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
// System.Void AudioSynthesis.Bank.Components.Generators.SquareGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareGenerator__ctor_mA64659B7E5DE316ED502B319980E6948921F921F (SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_0 = ___description0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		Generator__ctor_m3313B048E930DC072C9AEEA9DE0A12F183FE0473(__this, L_0, NULL);
		double L_1 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0027;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8 = (6.2831853071795862);
	}

IL_0027:
	{
		double L_2 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_0047;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7 = (0.0);
	}

IL_0047:
	{
		double L_3 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		if ((!(((double)L_3) < ((double)(0.0)))))
		{
			goto IL_0064;
		}
	}
	{
		double L_4 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6 = L_4;
	}

IL_0064:
	{
		double L_5 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		if ((!(((double)L_5) < ((double)(0.0)))))
		{
			goto IL_0081;
		}
	}
	{
		double L_6 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5 = L_6;
	}

IL_0081:
	{
		double L_7 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10;
		if ((!(((double)L_7) < ((double)(0.0)))))
		{
			goto IL_00a1;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10 = (6.2831853071795862);
	}

IL_00a1:
	{
		int16_t L_8 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12 = (int16_t)((int32_t)69);
	}

IL_00b2:
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___freq_11 = (440.0);
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Generators.SquareGenerator::GetValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SquareGenerator_GetValue_m43013FDFE5154AAA277F30B4A373BE0B27AA8CD8 (SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41* __this, double ___phase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___phase0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sin(L_0);
		int32_t L_2;
		L_2 = Math_Sign_m6E20753D72DE4B46CB1268023661DBE154294408(L_1, NULL);
		return ((float)L_2);
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.SquareGenerator::GetValues(AudioSynthesis.Bank.Components.Generators.GeneratorParameters,System.Single[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareGenerator_GetValues_m73ED192E84360087E97CB75E93860EC78F6E48C0 (SquareGenerator_tA28C3DFCA7F13D0677EA7BE949726D68C9822E41* __this, GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* ___generatorParams0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___blockBuffer1, double ___increment2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_0 = ___generatorParams0;
		NullCheck(L_0);
		double L_1 = L_0->___currentEnd_2;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_2 = ___generatorParams0;
		NullCheck(L_2);
		double L_3 = L_2->___phase_0;
		double L_4 = ___increment2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = ceil(((double)(((double)il2cpp_codegen_subtract(L_1, L_3))/L_4)));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___blockBuffer1;
		NullCheck(L_7);
		int32_t L_8 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0048;
	}

IL_0022:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___blockBuffer1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_12 = ___generatorParams0;
		NullCheck(L_12);
		double L_13 = L_12->___phase_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = sin(L_13);
		int32_t L_15;
		L_15 = Math_Sign_m6E20753D72DE4B46CB1268023661DBE154294408(L_14, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)L_15));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_16 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_17 = L_16;
		NullCheck(L_17);
		double L_18 = L_17->___phase_0;
		double L_19 = ___increment2;
		NullCheck(L_17);
		L_17->___phase_0 = ((double)il2cpp_codegen_add(L_18, L_19));
	}

IL_0048:
	{
		int32_t L_20 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = ___blockBuffer1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_00f6;
	}

IL_0053:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		goto IL_007f;
	}

IL_0059:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = ___blockBuffer1;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_27 = ___generatorParams0;
		NullCheck(L_27);
		double L_28 = L_27->___phase_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = sin(L_28);
		int32_t L_30;
		L_30 = Math_Sign_m6E20753D72DE4B46CB1268023661DBE154294408(L_29, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (float)((float)L_30));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_31 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_32 = L_31;
		NullCheck(L_32);
		double L_33 = L_32->___phase_0;
		double L_34 = ___increment2;
		NullCheck(L_32);
		L_32->___phase_0 = ((double)il2cpp_codegen_add(L_33, L_34));
	}

IL_007f:
	{
		int32_t L_35 = V_0;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0059;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_37 = ___generatorParams0;
		NullCheck(L_37);
		int32_t L_38 = L_37->___currentState_3;
		V_3 = L_38;
		int32_t L_39 = V_3;
		switch (L_39)
		{
			case 0:
			{
				goto IL_009e;
			}
			case 1:
			{
				goto IL_00bf;
			}
			case 2:
			{
				goto IL_00db;
			}
		}
	}
	{
		goto IL_00f6;
	}

IL_009e:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_40 = ___generatorParams0;
		double L_41 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		NullCheck(L_40);
		L_40->___currentStart_1 = L_41;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_42 = ___generatorParams0;
		double L_43 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		NullCheck(L_42);
		L_42->___currentEnd_2 = L_43;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_44 = ___generatorParams0;
		NullCheck(L_44);
		L_44->___currentState_3 = 1;
		goto IL_00f6;
	}

IL_00bf:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_45 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_46 = L_45;
		NullCheck(L_46);
		double L_47 = L_46->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_48 = ___generatorParams0;
		NullCheck(L_48);
		double L_49 = L_48->___currentStart_1;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_50 = ___generatorParams0;
		NullCheck(L_50);
		double L_51 = L_50->___currentEnd_2;
		NullCheck(L_46);
		L_46->___phase_0 = ((double)il2cpp_codegen_add(L_47, ((double)il2cpp_codegen_subtract(L_49, L_51))));
		goto IL_00f6;
	}

IL_00db:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_52 = ___generatorParams0;
		NullCheck(L_52);
		L_52->___currentState_3 = 3;
		goto IL_00f0;
	}

IL_00e4:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = ___blockBuffer1;
		int32_t L_54 = V_0;
		int32_t L_55 = L_54;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (float)(0.0f));
	}

IL_00f0:
	{
		int32_t L_56 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = ___blockBuffer1;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_00e4;
		}
	}

IL_00f6:
	{
		int32_t L_58 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = ___blockBuffer1;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)))))
		{
			goto IL_0002;
		}
	}
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
// System.Void AudioSynthesis.Bank.Components.Generators.TriangleGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleGenerator__ctor_m66DBC2E0329DBE7F530480F7C13CD558CB86E51C (TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_0 = ___description0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		Generator__ctor_m3313B048E930DC072C9AEEA9DE0A12F183FE0473(__this, L_0, NULL);
		double L_1 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0027;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8 = (1.25);
	}

IL_0027:
	{
		double L_2 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_0047;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7 = (0.25);
	}

IL_0047:
	{
		double L_3 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		if ((!(((double)L_3) < ((double)(0.0)))))
		{
			goto IL_0064;
		}
	}
	{
		double L_4 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6 = L_4;
	}

IL_0064:
	{
		double L_5 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		if ((!(((double)L_5) < ((double)(0.0)))))
		{
			goto IL_0081;
		}
	}
	{
		double L_6 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5 = L_6;
	}

IL_0081:
	{
		double L_7 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10;
		if ((!(((double)L_7) < ((double)(0.0)))))
		{
			goto IL_00a1;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10 = (1.0);
	}

IL_00a1:
	{
		int16_t L_8 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12 = (int16_t)((int32_t)69);
	}

IL_00b2:
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___freq_11 = (440.0);
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Generators.TriangleGenerator::GetValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TriangleGenerator_GetValue_m2ACF651D251CF85E373736325C674722C71E37D0 (TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0* __this, double ___phase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___phase0;
		double L_1 = ___phase0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = floor(((double)il2cpp_codegen_add(L_1, (0.5))));
		double L_3;
		L_3 = fabs(((double)il2cpp_codegen_subtract(L_0, L_2)));
		return ((float)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_3, (4.0))), (1.0))));
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.TriangleGenerator::GetValues(AudioSynthesis.Bank.Components.Generators.GeneratorParameters,System.Single[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleGenerator_GetValues_m01F4364D8CDD2513433728F129038040B313317D (TriangleGenerator_t53260713B3808EF1B0ED2ADC3FD50A3D5AD477A0* __this, GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* ___generatorParams0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___blockBuffer1, double ___increment2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_0 = ___generatorParams0;
		NullCheck(L_0);
		double L_1 = L_0->___currentEnd_2;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_2 = ___generatorParams0;
		NullCheck(L_2);
		double L_3 = L_2->___phase_0;
		double L_4 = ___increment2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = ceil(((double)(((double)il2cpp_codegen_subtract(L_1, L_3))/L_4)));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___blockBuffer1;
		NullCheck(L_7);
		int32_t L_8 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_006d;
	}

IL_0022:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___blockBuffer1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_12 = ___generatorParams0;
		NullCheck(L_12);
		double L_13 = L_12->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_14 = ___generatorParams0;
		NullCheck(L_14);
		double L_15 = L_14->___phase_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = floor(((double)il2cpp_codegen_add(L_15, (0.5))));
		double L_17;
		L_17 = fabs(((double)il2cpp_codegen_subtract(L_13, L_16)));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_17, (4.0))), (1.0)))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_18 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_19 = L_18;
		NullCheck(L_19);
		double L_20 = L_19->___phase_0;
		double L_21 = ___increment2;
		NullCheck(L_19);
		L_19->___phase_0 = ((double)il2cpp_codegen_add(L_20, L_21));
	}

IL_006d:
	{
		int32_t L_22 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___blockBuffer1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0140;
	}

IL_0078:
	{
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		goto IL_00c9;
	}

IL_007e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = ___blockBuffer1;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_29 = ___generatorParams0;
		NullCheck(L_29);
		double L_30 = L_29->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_31 = ___generatorParams0;
		NullCheck(L_31);
		double L_32 = L_31->___phase_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_33;
		L_33 = floor(((double)il2cpp_codegen_add(L_32, (0.5))));
		double L_34;
		L_34 = fabs(((double)il2cpp_codegen_subtract(L_30, L_33)));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (float)((float)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_34, (4.0))), (1.0)))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_35 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_36 = L_35;
		NullCheck(L_36);
		double L_37 = L_36->___phase_0;
		double L_38 = ___increment2;
		NullCheck(L_36);
		L_36->___phase_0 = ((double)il2cpp_codegen_add(L_37, L_38));
	}

IL_00c9:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_007e;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_41 = ___generatorParams0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___currentState_3;
		V_3 = L_42;
		int32_t L_43 = V_3;
		switch (L_43)
		{
			case 0:
			{
				goto IL_00e8;
			}
			case 1:
			{
				goto IL_0109;
			}
			case 2:
			{
				goto IL_0125;
			}
		}
	}
	{
		goto IL_0140;
	}

IL_00e8:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_44 = ___generatorParams0;
		double L_45 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		NullCheck(L_44);
		L_44->___currentStart_1 = L_45;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_46 = ___generatorParams0;
		double L_47 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		NullCheck(L_46);
		L_46->___currentEnd_2 = L_47;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_48 = ___generatorParams0;
		NullCheck(L_48);
		L_48->___currentState_3 = 1;
		goto IL_0140;
	}

IL_0109:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_49 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_50 = L_49;
		NullCheck(L_50);
		double L_51 = L_50->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_52 = ___generatorParams0;
		NullCheck(L_52);
		double L_53 = L_52->___currentStart_1;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_54 = ___generatorParams0;
		NullCheck(L_54);
		double L_55 = L_54->___currentEnd_2;
		NullCheck(L_50);
		L_50->___phase_0 = ((double)il2cpp_codegen_add(L_51, ((double)il2cpp_codegen_subtract(L_53, L_55))));
		goto IL_0140;
	}

IL_0125:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_56 = ___generatorParams0;
		NullCheck(L_56);
		L_56->___currentState_3 = 3;
		goto IL_013a;
	}

IL_012e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = ___blockBuffer1;
		int32_t L_58 = V_0;
		int32_t L_59 = L_58;
		V_0 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (float)(0.0f));
	}

IL_013a:
	{
		int32_t L_60 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = ___blockBuffer1;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
		{
			goto IL_012e;
		}
	}

IL_0140:
	{
		int32_t L_62 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = ___blockBuffer1;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_0002;
		}
	}
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
// System.Void AudioSynthesis.Bank.Components.Generators.WhiteNoiseGenerator::.ctor(AudioSynthesis.Bank.Descriptors.GeneratorDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteNoiseGenerator__ctor_m42C03D9F9BA2CFCC7F2C6942398FAB5FFC6DC306 (WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902* __this, GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeneratorDescriptor_tE758FCD4C00FD39B6F778125351181C7C11C8280* L_0 = ___description0;
		il2cpp_codegen_runtime_class_init_inline(Generator_tADF163794E3E90EE4A764830F2731836023B4A32_il2cpp_TypeInfo_var);
		Generator__ctor_m3313B048E930DC072C9AEEA9DE0A12F183FE0473(__this, L_0, NULL);
		double L_1 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0027;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8 = (1.0);
	}

IL_0027:
	{
		double L_2 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_0047;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7 = (0.0);
	}

IL_0047:
	{
		double L_3 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		if ((!(((double)L_3) < ((double)(0.0)))))
		{
			goto IL_0064;
		}
	}
	{
		double L_4 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___end_8;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6 = L_4;
	}

IL_0064:
	{
		double L_5 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		if ((!(((double)L_5) < ((double)(0.0)))))
		{
			goto IL_0081;
		}
	}
	{
		double L_6 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___start_7;
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5 = L_6;
	}

IL_0081:
	{
		double L_7 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10;
		if ((!(((double)L_7) < ((double)(0.0)))))
		{
			goto IL_00a1;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___genPeriod_10 = (1.0);
	}

IL_00a1:
	{
		int16_t L_8 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___root_12 = (int16_t)((int32_t)69);
	}

IL_00b2:
	{
		((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___freq_11 = (440.0);
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Generators.WhiteNoiseGenerator::GetValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WhiteNoiseGenerator_GetValue_m33C16F6778D5AC51B97819E5D519CA2926AE5F5E (WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902* __this, double ___phase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_StaticFields*)il2cpp_codegen_static_fields_for(WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var))->___random_16;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_0);
		return ((float)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1, (2.0))), (1.0))));
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.WhiteNoiseGenerator::GetValues(AudioSynthesis.Bank.Components.Generators.GeneratorParameters,System.Single[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteNoiseGenerator_GetValues_m0363539DB7EA9B3954ABD9ABD67C0ED185079A4A (WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902* __this, GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* ___generatorParams0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___blockBuffer1, double ___increment2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_0 = ___generatorParams0;
		NullCheck(L_0);
		double L_1 = L_0->___currentEnd_2;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_2 = ___generatorParams0;
		NullCheck(L_2);
		double L_3 = L_2->___phase_0;
		double L_4 = ___increment2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = ceil(((double)(((double)il2cpp_codegen_subtract(L_1, L_3))/L_4)));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___blockBuffer1;
		NullCheck(L_7);
		int32_t L_8 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0056;
	}

IL_0022:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___blockBuffer1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		il2cpp_codegen_runtime_class_init_inline(WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_12 = ((WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_StaticFields*)il2cpp_codegen_static_fields_for(WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var))->___random_16;
		NullCheck(L_12);
		double L_13;
		L_13 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_12);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_13, (2.0))), (1.0)))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_14 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_15 = L_14;
		NullCheck(L_15);
		double L_16 = L_15->___phase_0;
		double L_17 = ___increment2;
		NullCheck(L_15);
		L_15->___phase_0 = ((double)il2cpp_codegen_add(L_16, L_17));
	}

IL_0056:
	{
		int32_t L_18 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = ___blockBuffer1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0112;
	}

IL_0061:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		goto IL_009b;
	}

IL_0067:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = ___blockBuffer1;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		il2cpp_codegen_runtime_class_init_inline(WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_25 = ((WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_StaticFields*)il2cpp_codegen_static_fields_for(WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var))->___random_16;
		NullCheck(L_25);
		double L_26;
		L_26 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_25);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (float)((float)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_26, (2.0))), (1.0)))));
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_27 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_28 = L_27;
		NullCheck(L_28);
		double L_29 = L_28->___phase_0;
		double L_30 = ___increment2;
		NullCheck(L_28);
		L_28->___phase_0 = ((double)il2cpp_codegen_add(L_29, L_30));
	}

IL_009b:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_2;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0067;
		}
	}
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_33 = ___generatorParams0;
		NullCheck(L_33);
		int32_t L_34 = L_33->___currentState_3;
		V_3 = L_34;
		int32_t L_35 = V_3;
		switch (L_35)
		{
			case 0:
			{
				goto IL_00ba;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0112;
	}

IL_00ba:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_36 = ___generatorParams0;
		double L_37 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopStart_5;
		NullCheck(L_36);
		L_36->___currentStart_1 = L_37;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_38 = ___generatorParams0;
		double L_39 = ((Generator_tADF163794E3E90EE4A764830F2731836023B4A32*)__this)->___loopEnd_6;
		NullCheck(L_38);
		L_38->___currentEnd_2 = L_39;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_40 = ___generatorParams0;
		NullCheck(L_40);
		L_40->___currentState_3 = 1;
		goto IL_0112;
	}

IL_00db:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_41 = ___generatorParams0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_42 = L_41;
		NullCheck(L_42);
		double L_43 = L_42->___phase_0;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_44 = ___generatorParams0;
		NullCheck(L_44);
		double L_45 = L_44->___currentStart_1;
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_46 = ___generatorParams0;
		NullCheck(L_46);
		double L_47 = L_46->___currentEnd_2;
		NullCheck(L_42);
		L_42->___phase_0 = ((double)il2cpp_codegen_add(L_43, ((double)il2cpp_codegen_subtract(L_45, L_47))));
		goto IL_0112;
	}

IL_00f7:
	{
		GeneratorParameters_tFE72EFF8A55046CF232CA32FEB6C4E15DFEAB0AF* L_48 = ___generatorParams0;
		NullCheck(L_48);
		L_48->___currentState_3 = 3;
		goto IL_010c;
	}

IL_0100:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = ___blockBuffer1;
		int32_t L_50 = V_0;
		int32_t L_51 = L_50;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (float)(0.0f));
	}

IL_010c:
	{
		int32_t L_52 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = ___blockBuffer1;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_0100;
		}
	}

IL_0112:
	{
		int32_t L_54 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = ___blockBuffer1;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Generators.WhiteNoiseGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteNoiseGenerator__cctor_mAE676A445334ED89FE773E8DD96CEE8C0BF20787 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_StaticFields*)il2cpp_codegen_static_fields_for(WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var))->___random_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_StaticFields*)il2cpp_codegen_static_fields_for(WhiteNoiseGenerator_t3938A074260F3EA103BCB0AF3D5BBA963F16C902_il2cpp_TypeInfo_var))->___random_16), (void*)L_0);
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
// System.Void AudioSynthesis.Bank.Components.Effects.Chorus::.ctor(System.Int32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chorus__ctor_m002B2CED143304511FDE79BC15F9B89A8ED6FD7E (Chorus_t09D9FFA17123F18DDCA537E3242D025AE316F992* __this, int32_t ___sampleRate0, double ___minDelay1, double ___maxDelay2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___sampleRate0;
		double L_1 = ___minDelay1;
		double L_2 = ___maxDelay2;
		Flanger__ctor_m8E8D43691C7BF11D2BC033CC8594AE9A4B07BA66(__this, L_0, L_1, L_2, NULL);
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
// System.Void AudioSynthesis.Bank.Components.Effects.Delay::.ctor(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delay__ctor_m9A04F389A7EE0BE71D932EFD1A74E17B8FBEC27B (Delay_t6C14E1C1CF3FEDC6B1060C60F9BFB0A132CDA60D* __this, int32_t ___sampleRate0, double ___delay1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___sampleRate0;
		double L_1 = ___delay1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)L_0), L_1))));
		__this->___buffer1_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer1_0), (void*)L_2);
		__this->___position1_2 = 0;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Delay::.ctor(System.Int32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delay__ctor_mC9999C6E4B9F1832A37E50D82C5C33849E958CF8 (Delay_t6C14E1C1CF3FEDC6B1060C60F9BFB0A132CDA60D* __this, int32_t ___sampleRate0, double ___delay11, double ___delay22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___sampleRate0;
		double L_1 = ___delay11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)L_0), L_1))));
		__this->___buffer1_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer1_0), (void*)L_2);
		__this->___position1_2 = 0;
		int32_t L_3 = ___sampleRate0;
		double L_4 = ___delay22;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)L_3), L_4))));
		__this->___buffer2_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer2_1), (void*)L_5);
		__this->___position2_3 = 0;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Delay::ApplyEffect(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delay_ApplyEffect_m35FAA3A76F6C1E4B16701C4DA7DE61B836F8D4A2 (Delay_t6C14E1C1CF3FEDC6B1060C60F9BFB0A132CDA60D* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___source0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___buffer1_0;
		NullCheck(L_0);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_00b9;
	}

IL_0012:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___source0;
		NullCheck(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2))) < ((int32_t)L_3)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_004e;
	}

IL_001f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___buffer1_0;
		int32_t L_5 = __this->___position1_2;
		V_2 = L_5;
		int32_t L_6 = V_2;
		__this->___position1_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___source0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		float L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___source0;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___buffer1_0;
		int32_t L_16 = __this->___position1_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (float)L_18);
	}

IL_004e:
	{
		int32_t L_19 = __this->___position1_2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_001f;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___buffer1_0;
		int32_t L_22 = __this->___position1_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___source0;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (float)L_26);
		__this->___position1_2 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = ___source0;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = __this->___buffer1_0;
		int32_t L_31 = __this->___position1_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		float L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (float)L_33);
		goto IL_00b9;
	}

IL_0084:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = __this->___buffer1_0;
		int32_t L_35 = __this->___position1_2;
		V_2 = L_35;
		int32_t L_36 = V_2;
		__this->___position1_2 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = ___source0;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		float L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (float)L_41);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = ___source0;
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___buffer1_0;
		int32_t L_46 = __this->___position1_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (float)L_48);
	}

IL_00b3:
	{
		int32_t L_49 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = ___source0;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_0084;
		}
	}

IL_00b9:
	{
		int32_t L_51 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_52 = ___source0;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Delay::ApplyEffect(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delay_ApplyEffect_m35083B30E9BFF2786C2B3D7D69976C57A249E820 (Delay_t6C14E1C1CF3FEDC6B1060C60F9BFB0A132CDA60D* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___source10, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___source21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___buffer1_0;
		NullCheck(L_0);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_00b9;
	}

IL_0012:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___source10;
		NullCheck(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2))) < ((int32_t)L_3)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_004e;
	}

IL_001f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___buffer1_0;
		int32_t L_5 = __this->___position1_2;
		V_2 = L_5;
		int32_t L_6 = V_2;
		__this->___position1_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___source10;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		float L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___source10;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___buffer1_0;
		int32_t L_16 = __this->___position1_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (float)L_18);
	}

IL_004e:
	{
		int32_t L_19 = __this->___position1_2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_001f;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___buffer1_0;
		int32_t L_22 = __this->___position1_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___source10;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (float)L_26);
		__this->___position1_2 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = ___source10;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = __this->___buffer1_0;
		int32_t L_31 = __this->___position1_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		float L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (float)L_33);
		goto IL_00b9;
	}

IL_0084:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = __this->___buffer1_0;
		int32_t L_35 = __this->___position1_2;
		V_2 = L_35;
		int32_t L_36 = V_2;
		__this->___position1_2 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = ___source10;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		float L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (float)L_41);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = ___source10;
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___buffer1_0;
		int32_t L_46 = __this->___position1_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (float)L_48);
	}

IL_00b3:
	{
		int32_t L_49 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = ___source10;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_0084;
		}
	}

IL_00b9:
	{
		int32_t L_51 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_52 = ___source10;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = __this->___buffer2_1;
		NullCheck(L_53);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_53)->max_length)), 1));
		goto IL_017b;
	}

IL_00d4:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = ___source21;
		NullCheck(L_54);
		int32_t L_55 = V_0;
		int32_t L_56 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_54)->max_length)), L_55))) < ((int32_t)L_56)))
		{
			goto IL_0175;
		}
	}
	{
		goto IL_0110;
	}

IL_00e1:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = __this->___buffer2_1;
		int32_t L_58 = __this->___position2_3;
		V_2 = L_58;
		int32_t L_59 = V_2;
		__this->___position2_3 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		int32_t L_60 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = ___source21;
		int32_t L_62 = V_0;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		float L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (float)L_64);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_65 = ___source21;
		int32_t L_66 = V_0;
		int32_t L_67 = L_66;
		V_0 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_68 = __this->___buffer2_1;
		int32_t L_69 = __this->___position2_3;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		float L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (float)L_71);
	}

IL_0110:
	{
		int32_t L_72 = __this->___position2_3;
		int32_t L_73 = V_1;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00e1;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_74 = __this->___buffer2_1;
		int32_t L_75 = __this->___position2_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_76 = ___source21;
		int32_t L_77 = V_0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		float L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (float)L_79);
		__this->___position2_3 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_80 = ___source21;
		int32_t L_81 = V_0;
		int32_t L_82 = L_81;
		V_0 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_83 = __this->___buffer2_1;
		int32_t L_84 = __this->___position2_3;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		float L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (float)L_86);
		goto IL_017b;
	}

IL_0146:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_87 = __this->___buffer2_1;
		int32_t L_88 = __this->___position2_3;
		V_2 = L_88;
		int32_t L_89 = V_2;
		__this->___position2_3 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_91 = ___source21;
		int32_t L_92 = V_0;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		float L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (float)L_94);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_95 = ___source21;
		int32_t L_96 = V_0;
		int32_t L_97 = L_96;
		V_0 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_98 = __this->___buffer2_1;
		int32_t L_99 = __this->___position2_3;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		float L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (float)L_101);
	}

IL_0175:
	{
		int32_t L_102 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_103 = ___source21;
		NullCheck(L_103);
		if ((((int32_t)L_102) < ((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))))
		{
			goto IL_0146;
		}
	}

IL_017b:
	{
		int32_t L_104 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_105 = ___source21;
		NullCheck(L_105);
		if ((((int32_t)L_104) < ((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length)))))
		{
			goto IL_00d4;
		}
	}
	{
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Delay::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delay_Reset_m208C6523A8D5AEF0114C8D3484FA1B47547A6953 (Delay_t6C14E1C1CF3FEDC6B1060C60F9BFB0A132CDA60D* __this, const RuntimeMethod* method) 
{
	{
		__this->___position1_2 = 0;
		__this->___position2_3 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___buffer1_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___buffer1_0;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___buffer2_1;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___buffer2_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___buffer2_1;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
	}

IL_003e:
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
// AudioSynthesis.Bank.Components.Lfo AudioSynthesis.Bank.Components.Effects.Flanger::get_Lfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* Flanger_get_Lfo_mB4D5CB37121E61C718BE1AAFF945249F42F9671C (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, const RuntimeMethod* method) 
{
	{
		Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* L_0 = __this->___lfo_0;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Flanger::set_Lfo(AudioSynthesis.Bank.Components.Lfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flanger_set_Lfo_m3D780F9115B84A73808D6DDB91AE08E064539304 (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* ___value0, const RuntimeMethod* method) 
{
	{
		Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* L_0 = ___value0;
		__this->___lfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lfo_0), (void*)L_0);
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Effects.Flanger::get_FeedBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Flanger_get_FeedBack_mEA24A0892934153590F93FA8F83DBC8FB0961547 (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___fBack_1;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Flanger::set_FeedBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flanger_set_FeedBack_m0A4A73C7E2E3403DD5D048F8BF7CC9973962B9FB (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___fBack_1 = L_0;
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Effects.Flanger::get_WetMix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Flanger_get_WetMix_mA87134F671E3890C52AC8151954613D09052408F (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___wMix_2;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Flanger::set_WetMix(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flanger_set_WetMix_m3994CB73491F1F6CCCC8D466FB3A8A06634F0FF6 (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___wMix_2 = L_0;
		return;
	}
}
// System.Single AudioSynthesis.Bank.Components.Effects.Flanger::get_DryMix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Flanger_get_DryMix_m45F78571116E67A50CF0D35E17501F39E3E9729E (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___dMix_3;
		return L_0;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Flanger::set_DryMix(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flanger_set_DryMix_m94D2E45DA2C70E503B61B7987F795AFACF0EF59E (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___dMix_3 = L_0;
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Flanger::.ctor(System.Int32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flanger__ctor_m8E8D43691C7BF11D2BC033CC8594AE9A4B07BA66 (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, int32_t ___sampleRate0, double ___minDelay1, double ___maxDelay2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		double L_0 = ___minDelay1;
		double L_1 = ___maxDelay2;
		if ((!(((double)L_0) > ((double)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___minDelay1;
		double L_3 = ___maxDelay2;
		___minDelay1 = L_3;
		___maxDelay2 = L_2;
	}

IL_0010:
	{
		LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* L_4 = (LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B*)il2cpp_codegen_object_new(LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LfoDescriptor__ctor_mD9E326596F80BF9593C4B9802C9852C33C281C3F(L_4, NULL);
		V_0 = L_4;
		Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* L_5 = (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F*)il2cpp_codegen_object_new(Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Lfo__ctor_m386916DEEB7479C4A2999BD1D36C7AFE17C28BC6(L_5, NULL);
		__this->___lfo_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lfo_0), (void*)L_5);
		Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* L_6 = __this->___lfo_0;
		int32_t L_7 = ___sampleRate0;
		LfoDescriptor_t0E1E42DC078CBBAA5C73AACD4E16A550AF61498B* L_8 = V_0;
		NullCheck(L_6);
		Lfo_QuickSetup_m8E14308AA6F0AE2E77BBC83991B864F7F75BCB0E(L_6, L_7, L_8, NULL);
		int32_t L_9 = ___sampleRate0;
		double L_10 = ___maxDelay2;
		double L_11 = ___minDelay1;
		__this->___baseDelay_4 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)L_9), ((double)il2cpp_codegen_subtract(L_10, L_11)))));
		int32_t L_12 = ___sampleRate0;
		double L_13 = ___minDelay1;
		__this->___minDelay_5 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)L_12), L_13)));
		int32_t L_14 = ___sampleRate0;
		double L_15 = ___maxDelay2;
		V_1 = ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)L_14), L_15))), 1));
		int32_t L_16 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		__this->___inputBuffer1_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputBuffer1_6), (void*)L_17);
		int32_t L_18 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->___outputBuffer1_7 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputBuffer1_7), (void*)L_19);
		__this->___position1_8 = 0;
		int32_t L_20 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		__this->___inputBuffer2_9 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputBuffer2_9), (void*)L_21);
		int32_t L_22 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_22);
		__this->___outputBuffer2_10 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputBuffer2_10), (void*)L_23);
		__this->___position2_11 = 0;
		__this->___fBack_1 = (0.150000006f);
		__this->___wMix_2 = (0.5f);
		__this->___dMix_3 = (0.5f);
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Flanger::ApplyEffect(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flanger_ApplyEffect_mBF5B7DB1B35085EE3D8F51A68727917B26DDAB7C (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___source0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_00e1;
	}

IL_0007:
	{
		Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* L_0 = __this->___lfo_0;
		NullCheck(L_0);
		Lfo_Increment_m660CF62DB3C06A4E031751F7F56E8EF3A538A0D0(L_0, 1, NULL);
		int32_t L_1 = __this->___position1_8;
		int32_t L_2 = __this->___baseDelay_4;
		Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* L_3 = __this->___lfo_0;
		NullCheck(L_3);
		double L_4;
		L_4 = Lfo_get_Value_m75E933EB26C8F773CC40ECC8D88626132848EFF2_inline(L_3, NULL);
		int32_t L_5 = __this->___minDelay_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)L_2), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((0.5), L_4)), (0.5))))), ((double)L_5))))));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_7 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___inputBuffer1_6;
		NullCheck(L_8);
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
	}

IL_005a:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___inputBuffer1_6;
		int32_t L_10 = __this->___position1_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ___source0;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		float L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (float)L_14);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___outputBuffer1_7;
		int32_t L_16 = __this->___position1_8;
		float L_17 = __this->___dMix_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___inputBuffer1_6;
		int32_t L_19 = __this->___position1_8;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = __this->___wMix_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = __this->___inputBuffer1_6;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		float L_27 = __this->___fBack_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = __this->___outputBuffer1_7;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		float L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_21)), ((float)il2cpp_codegen_multiply(L_22, L_26)))), ((float)il2cpp_codegen_multiply(L_27, L_31)))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = ___source0;
		int32_t L_33 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = __this->___outputBuffer1_7;
		int32_t L_35 = __this->___position1_8;
		V_2 = L_35;
		int32_t L_36 = V_2;
		__this->___position1_8 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_2;
		NullCheck(L_34);
		int32_t L_38 = L_37;
		float L_39 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (float)L_39);
		int32_t L_40 = __this->___position1_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = __this->___inputBuffer1_6;
		NullCheck(L_41);
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_00dd;
		}
	}
	{
		__this->___position1_8 = 0;
	}

IL_00dd:
	{
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00e1:
	{
		int32_t L_43 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = ___source0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Flanger::ApplyEffect(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flanger_ApplyEffect_m52CFF691966CE76834072DC5220403165B134F3A (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___source10, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___source21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0199;
	}

IL_0007:
	{
		Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* L_0 = __this->___lfo_0;
		NullCheck(L_0);
		Lfo_Increment_m660CF62DB3C06A4E031751F7F56E8EF3A538A0D0(L_0, 1, NULL);
		Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* L_1 = __this->___lfo_0;
		NullCheck(L_1);
		double L_2;
		L_2 = Lfo_get_Value_m75E933EB26C8F773CC40ECC8D88626132848EFF2_inline(L_1, NULL);
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((0.5), L_2)), (0.5)));
		int32_t L_3 = __this->___position1_8;
		int32_t L_4 = __this->___baseDelay_4;
		double L_5 = V_2;
		int32_t L_6 = __this->___minDelay_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)L_4), L_5)), ((double)L_6))))));
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_8 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___inputBuffer1_6;
		NullCheck(L_9);
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
	}

IL_005c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___inputBuffer1_6;
		int32_t L_11 = __this->___position1_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___source10;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)L_15);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___outputBuffer1_7;
		int32_t L_17 = __this->___position1_8;
		float L_18 = __this->___dMix_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = __this->___inputBuffer1_6;
		int32_t L_20 = __this->___position1_8;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		float L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		float L_23 = __this->___wMix_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___inputBuffer1_6;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		float L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		float L_28 = __this->___fBack_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___outputBuffer1_7;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_18, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_27)))), ((float)il2cpp_codegen_multiply(L_28, L_32)))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = ___source10;
		int32_t L_34 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___outputBuffer1_7;
		int32_t L_36 = __this->___position1_8;
		V_3 = L_36;
		int32_t L_37 = V_3;
		__this->___position1_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_3;
		NullCheck(L_35);
		int32_t L_39 = L_38;
		float L_40 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (float)L_40);
		int32_t L_41 = __this->___position1_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___inputBuffer1_6;
		NullCheck(L_42);
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
		{
			goto IL_00df;
		}
	}
	{
		__this->___position1_8 = 0;
	}

IL_00df:
	{
		int32_t L_43 = __this->___position2_11;
		int32_t L_44 = __this->___baseDelay_4;
		double L_45 = V_2;
		int32_t L_46 = __this->___minDelay_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_43, il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)L_44), ((double)il2cpp_codegen_subtract((1.0), L_45)))), ((double)L_46))))));
		int32_t L_47 = V_1;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_48 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = __this->___inputBuffer2_9;
		NullCheck(L_49);
		V_1 = ((int32_t)il2cpp_codegen_add(L_48, ((int32_t)(((RuntimeArray*)L_49)->max_length))));
	}

IL_0112:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = __this->___inputBuffer2_9;
		int32_t L_51 = __this->___position2_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_52 = ___source21;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		float L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (float)L_55);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_56 = __this->___outputBuffer2_10;
		int32_t L_57 = __this->___position2_11;
		float L_58 = __this->___dMix_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = __this->___inputBuffer2_9;
		int32_t L_60 = __this->___position2_11;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		float L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		float L_63 = __this->___wMix_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = __this->___inputBuffer2_9;
		int32_t L_65 = V_1;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		float L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		float L_68 = __this->___fBack_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_69 = __this->___outputBuffer2_10;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		float L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_58, L_62)), ((float)il2cpp_codegen_multiply(L_63, L_67)))), ((float)il2cpp_codegen_multiply(L_68, L_72)))));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_73 = ___source21;
		int32_t L_74 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_75 = __this->___outputBuffer2_10;
		int32_t L_76 = __this->___position2_11;
		V_3 = L_76;
		int32_t L_77 = V_3;
		__this->___position2_11 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int32_t L_78 = V_3;
		NullCheck(L_75);
		int32_t L_79 = L_78;
		float L_80 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (float)L_80);
		int32_t L_81 = __this->___position2_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = __this->___inputBuffer2_9;
		NullCheck(L_82);
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)(((RuntimeArray*)L_82)->max_length))))))
		{
			goto IL_0195;
		}
	}
	{
		__this->___position2_11 = 0;
	}

IL_0195:
	{
		int32_t L_83 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0199:
	{
		int32_t L_84 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = ___source10;
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AudioSynthesis.Bank.Components.Effects.Flanger::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flanger_Reset_m397C289DC2D3A82AB7A290BC6DD4FF9BC1CB85B9 (Flanger_tC755EA5E99F73D19CDD11B9317C860FCDB1CA9E3* __this, const RuntimeMethod* method) 
{
	{
		Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* L_0 = __this->___lfo_0;
		NullCheck(L_0);
		Lfo_Reset_m2512163F66419F8E774C9CBE597FA107521A6675(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___inputBuffer1_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___inputBuffer1_6;
		NullCheck(L_2);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___outputBuffer1_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___outputBuffer1_7;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->___inputBuffer2_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___inputBuffer2_9;
		NullCheck(L_6);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___outputBuffer2_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___outputBuffer2_10;
		NullCheck(L_8);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		__this->___position1_8 = 0;
		__this->___position2_11 = 0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF5D3E9C8845C573F909CCF6B26DBD06653FC39E7 (String_t* ___s0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_Period_mE96E0477662AB9B81BE2EB6348640137ED4DFCA5_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___genPeriod_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_LoopStartPhase_mB0AD2433CD105A308C99CD8E5903625CDA53DD15_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___loopStart_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_LoopEndPhase_mD377463C1A76AD483551A7D2888A27B1D52094EA_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___loopEnd_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_StartPhase_mBC857B423D6C030558ED348297C21191442769B3_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___start_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_Offset_m238F00876E65A327B42A762AE8020AAC004E5B5B_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___startOffset_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Generator_get_LoopMode_m2A6FEBE8FA2BF7AE184F53DD09D0EE65CE22B78F_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___loopMethod_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Generator_get_EndPhase_m0854116479A89E64191C51238E39FA83AF8DD761_inline (Generator_tADF163794E3E90EE4A764830F2731836023B4A32* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___end_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PcmData_tB54EF39258C17586A65A55E564458B5441164E62* SampleDataAsset_get_SampleData_m9F5444819DE3FE56F38CE5F9136FAD5BE4B17AF5_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) 
{
	{
		PcmData_tB54EF39258C17586A65A55E564458B5441164E62* L_0 = __this->___sampleData_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SampleDataAsset_get_SampleRate_mBC3EA51E2F4835C3FC3D4D0E1F4D8CEAAB7CF3ED_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___sampleRate_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SampleDataAsset_get_End_m34C3BEE7193C5A014FC366E75878C18E8C9E91FC_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___end_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SampleDataAsset_get_Start_mABDCE9D65CF998DF2F3C57BFCC000FC510167514_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___start_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SampleDataAsset_get_LoopEnd_mA61A6A62DCE7EB5619329A0EE7E3630454B9B6FE_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___loopEnd_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SampleDataAsset_get_LoopStart_m9C733A08C95FE827F1571857B16A109CD697B171_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___loopStart_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t SampleDataAsset_get_RootKey_m1DB6F5B9F0EE68BF87683BFC7EF72DD1CFE15AED_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___rootKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t SampleDataAsset_get_Tune_m53C9EFB741C0C0DECCE3514EB11F0E1D2A75015D_inline (SampleDataAsset_t09D6DE9DB4C7A5EF3F8B48E4D350B68F6714834D* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___tune_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PcmData_get_Length_m4E82710F2380143906E2619EB05910A0D366F44F_inline (PcmData_tB54EF39258C17586A65A55E564458B5441164E62* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Lfo_get_Value_m75E933EB26C8F773CC40ECC8D88626132848EFF2_inline (Lfo_t212817BCC67D78DE1A5B0D9F92F90FB103FC291F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___value_2;
		return L_0;
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
