#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Pinnable`1<System.Byte>
struct Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230;
// System.Pinnable`1<System.Char>
struct Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t6999FF86BCB538E701A0C84C6A371E1C490F7739;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t10D25A0F9E4797A0F9FDC3559106928A71D8D628;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t8671310D56806D72E00ADA85C5140CF28734C839;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_tDD4F9889AA2A9F72F75075582C675BC10EBFF054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t3BD7F54282B99C57412F05E962C2EB1C35583BDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5;
IL2CPP_EXTERN_C String_t* _stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F;
IL2CPP_EXTERN_C String_t* _stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEC09E7EC948CE8E4EB86BC21F77A4FD13083100D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC9584A7F4C1780F9FBBA1D4E313F6FCFAF2D280E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA29E4FDF4DA2A2907E617212A9954B265FD6F7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58AA283D85956A08BC7FFE1666160922F96DCC4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1__ctor_mC2832A5C31F61ED2D139F6F0BAE691FAD968AAE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_TryGetString_m067786542E26F664B794B393FE1A28F091ED5F29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mD606174A6A53935EE8983A98E5B8A1621B42AE0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_DestinationTooShort_m0EA4D6073B1FFED65583D3F93F7D8D775D94963A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentNullException_m01D88E809D8DCE52DAC781C509B25C8BDA7C17AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_mD2A02185E9083850106BE3DA7D3862BA909786D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArrayTypeMismatchException_mA52C15A256F1FCE98B1A372E2ADFA2CFC201D442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowIndexOutOfRangeException_m46AF5939C05FD5C1B41793773BB5AD23228DC4C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_m113714A60F0D33A4A350B790158086B955B6F810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_op_Equality_m9157C65E2C79AB237B54D7F96CAC98F347DACBDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_op_Inequality_m7C2EEFD78E76EDF9D64973D64D52ACD97408DEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t510CDEE66C1993DDE190E6BAC3DFEB9BFE65E925_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t33F27EDF787343ABABDD8CD513A8ED67439CA89C 
{
};

// System.Pinnable`1<System.Char>
struct Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1  : public RuntimeObject
{
	// T System.Pinnable`1::Data
	Il2CppChar ___Data_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Buffers.Binary.BinaryPrimitives
struct BinaryPrimitives_tB595A22A5FF1282D299292638B000312CD86486F  : public RuntimeObject
{
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.Buffers.BuffersExtensions
struct BuffersExtensions_tA7E6AAEFED27060F451B16359E8A9C79E638A66A  : public RuntimeObject
{
};

// System.Numerics.Hashing.HashHelpers
struct HashHelpers_t3BD7F54282B99C57412F05E962C2EB1C35583BDE  : public RuntimeObject
{
};

struct HashHelpers_t3BD7F54282B99C57412F05E962C2EB1C35583BDE_StaticFields
{
	// System.Int32 System.Numerics.Hashing.HashHelpers::RandomSeed
	int32_t ___RandomSeed_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Runtime.InteropServices.MemoryMarshal
struct MemoryMarshal_t79A76DC6BEDB4E0ABD72DE3B283E0F5EC1D5A58B  : public RuntimeObject
{
};

// System.Buffers.ReadOnlySequence
struct ReadOnlySequence_t166CB3F1D814F47DB400DFF84936721EB369D413  : public RuntimeObject
{
};

// FxResources.System.Memory.SR
struct SR_t510CDEE66C1993DDE190E6BAC3DFEB9BFE65E925  : public RuntimeObject
{
};

// System.SR
struct SR_t2E64B8FA78922251E27B3BE267F44AC64632F678  : public RuntimeObject
{
};

struct SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_StaticFields
{
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager_0;
	// System.Type System.SR::<ResourceType>k__BackingField
	Type_t* ___U3CResourceTypeU3Ek__BackingField_1;
};

// System.Runtime.InteropServices.SequenceMarshal
struct SequenceMarshal_t5356C627DCC768D890C8A594846B164748826A11  : public RuntimeObject
{
};

// System.SpanHelpers
struct SpanHelpers_tD556F2151DD0FEC3B3984FED9F6BEAB918294480  : public RuntimeObject
{
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

// System.ThrowHelper
struct ThrowHelper_tA4703250A48ABDDF77EC4D7A221E62FB63D451B1  : public RuntimeObject
{
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

// System.ReadOnlyMemory`1<System.Char>
struct ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tECB96A29CA825588587B4EFB97BF9B96EDBA42B8_marshaled_pinvoke_define
#define ReadOnlyMemory_1_tECB96A29CA825588587B4EFB97BF9B96EDBA42B8_marshaled_pinvoke_define
struct ReadOnlyMemory_1_tECB96A29CA825588587B4EFB97BF9B96EDBA42B8_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tECB96A29CA825588587B4EFB97BF9B96EDBA42B8_marshaled_com_define
#define ReadOnlyMemory_1_tECB96A29CA825588587B4EFB97BF9B96EDBA42B8_marshaled_com_define
struct ReadOnlyMemory_1_tECB96A29CA825588587B4EFB97BF9B96EDBA42B8_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t6999FF86BCB538E701A0C84C6A371E1C490F7739  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t10D25A0F9E4797A0F9FDC3559106928A71D8D628  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t8671310D56806D72E00ADA85C5140CF28734C839  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.NUInt
struct NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 
{
	// System.Void* System.NUInt::_value
	void* ____value_0;
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// System.SequencePosition
struct SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 
{
	// System.Object System.SequencePosition::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;
};
// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
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

// System.Buffers.ReadOnlySequence`1<System.Char>
struct ReadOnlySequence_1_tE2437E4FC08B29D9E89B2938AA18B2B013278BA4 
{
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceStart
	SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 ____sequenceStart_0;
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceEnd
	SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 ____sequenceEnd_1;
};

struct ReadOnlySequence_1_tE2437E4FC08B29D9E89B2938AA18B2B013278BA4_StaticFields
{
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_tE2437E4FC08B29D9E89B2938AA18B2B013278BA4 ___Empty_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A 
{
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3 
{
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1* ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;
};

// System.Span`1<System.Byte>
struct Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 
{
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;
};

// System.Numerics.Vector`1<System.Byte>
struct Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___s_allOnes_4;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
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

// System.ExceptionArgument
struct ExceptionArgument_tDD4F9889AA2A9F72F75075582C675BC10EBFF054 
{
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;
};

// System.MemoryExtensions
struct MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D  : public RuntimeObject
{
};

struct MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D_StaticFields
{
	// System.IntPtr System.MemoryExtensions::StringAdjustment
	intptr_t ___StringAdjustment_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.StringComparison
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;
};

// System.Resources.UltimateResourceFallbackLocation
struct UltimateResourceFallbackLocation_tFA91547D7BF4CEF1101A7C391ECB7B73EE073AB6 
{
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;
};

// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t* ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t* ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t* ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t* ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;
};

struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t* ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
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


// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD606174A6A53935EE8983A98E5B8A1621B42AE0F_gshared_inline (ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3* __this, Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1* ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ReadOnlyMemory`1<System.Char>::.ctor(System.Object,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_mC2832A5C31F61ED2D139F6F0BAE691FAD968AAE0_gshared_inline (ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Vector`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Inequality(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m7C2EEFD78E76EDF9D64973D64D52ACD97408DEE9_gshared_inline (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___left0, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Equality(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_m9157C65E2C79AB237B54D7F96CAC98F347DACBDF_gshared_inline (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___left0, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Char>::TryGetString(System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySequence_1_TryGetString_m067786542E26F664B794B393FE1A28F091ED5F29_gshared (ReadOnlySequence_1_tE2437E4FC08B29D9E89B2938AA18B2B013278BA4* __this, String_t** ___text0, int32_t* ___start1, int32_t* ___length2, const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt64>(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC9584A7F4C1780F9FBBA1D4E313F6FCFAF2D280E_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.UInt32>(System.Span`1<System.Byte>,T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA29E4FDF4DA2A2907E617212A9954B265FD6F7D9_gshared_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___destination0, uint32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.UInt64>(System.Span`1<System.Byte>,T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58AA283D85956A08BC7FFE1666160922F96DCC4D_gshared_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___destination0, uint64_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector`1<System.Byte>::Equals(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m4E0057D1AD47E2694EB1F4A2E922E38E8C331A7F_gshared (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00* __this, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___other0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEC09E7EC948CE8E4EB86BC21F77A4FD13083100D_gshared (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___span0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_gshared_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49_gshared (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___span0, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.SequencePosition::.ctor(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_mB0A57DB282A49304336E93B16D75694916874306 (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, RuntimeObject* ___object0, int32_t ___integer1, const RuntimeMethod* method) ;
// System.Object System.SequencePosition::GetObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m2CC7429B07B6EF4290824E4974402A3DC451C8C3_inline (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, const RuntimeMethod* method) ;
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mD3C6C1F6A9ED3C9AC421A5189C51253D3BCB38EE_inline (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Boolean System.SequencePosition::Equals(System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_mD0CC178572C2F3EE85B8E495717205EDDF647AFF (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 ___other0, const RuntimeMethod* method) ;
// System.Boolean System.SequencePosition::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m8D996E70EAABE5831C4E1534171B6A0E70BC1817 (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m1530E549D02D8A69DEEEA59E40B934B394ECD468 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method) ;
// System.Int32 System.SequencePosition::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetHashCode_mD3E6DBFDB3D9D66BD0DE726E077DFB72478B2F36 (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, const RuntimeMethod* method) ;
// System.Exception System.ThrowHelper::CreateArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentNullException_mE51C54BE6B1A8818827DDAF55D4323F5B862557E (int32_t ___argument0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArrayTypeMismatchException_m029C9273EC3C46E595935C617FB086048A917374 (const RuntimeMethod* method) ;
// System.Void System.ArrayTypeMismatchException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayTypeMismatchException__ctor_mD1BAAE9B73BA9E5948655553019ED8DE4F306D8B (ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* __this, const RuntimeMethod* method) ;
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_mDB6651ED26DCE920C4496D1F33BFBB0D875A61E4 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_mB63FAA3F7BE546638DBA80DD28D5BCCA26B54623 (const RuntimeMethod* method) ;
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m1FD27969BA1E368A8B57141778CD5C68D7BB339B (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentException_DestinationTooShort_m4509E0C326A74F91B7746749147AE7AFD67DD135 (const RuntimeMethod* method) ;
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_m7346823D2923079883B1745EED28EFFFD391AE12 (const RuntimeMethod* method) ;
// System.Exception System.ThrowHelper::CreateIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateIndexOutOfRangeException_mA41D425CFDE851475D80E87C8DB6CE5654DCB622 (const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_mEFADA3A96266CA114F3999FA5D9B042C5F80992C (const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_m6E6CD14826453D6DB001F7045C634BA90122C749 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Exception System.ThrowHelper::CreateInvalidOperationException_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m51D9918A582B87F6B7CD78C753A09B4D2A06B31A (const RuntimeMethod* method) ;
// System.String System.SR::get_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_EndPositionNotReached_mE66B9AE07ADE5770A9ED4987E70D0C5F3BD75BA1 (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void ReadOnlySpan_1__ctor_mD606174A6A53935EE8983A98E5B8A1621B42AE0F_inline (ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3* __this, Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1* ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3*, Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1*, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD606174A6A53935EE8983A98E5B8A1621B42AE0F_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlyMemory`1<System.Char>::.ctor(System.Object,System.Int32,System.Int32)
inline void ReadOnlyMemory_1__ctor_mC2832A5C31F61ED2D139F6F0BAE691FAD968AAE0_inline (ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))ReadOnlyMemory_1__ctor_mC2832A5C31F61ED2D139F6F0BAE691FAD968AAE0_gshared_inline)(__this, ___obj0, ___start1, ___length2, method);
}
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460 (const RuntimeMethod* method) ;
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m3A6CF92BE0FC24B88E9A2F8AF14DE361ABC455D5 (const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void* System.NUInt::op_Explicit(System.NUInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_m57FDA8569E6BB8AA477C8B99B014B756CD8E221C_inline (NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector::get_IsHardwareAccelerated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m4165001054E20A7304F843AE29C33C47D814185D (const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Vector`1<System.Byte>::get_Count()
inline int32_t Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_gshared_inline)(method);
}
// System.IntPtr System.IntPtr::op_Subtraction(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Subtraction_mB90083473B35014437EC01BE5DE3770FB9720F4C (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Inequality(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
inline bool Vector_1_op_Inequality_m7C2EEFD78E76EDF9D64973D64D52ACD97408DEE9_inline (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___left0, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___right1, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00, const RuntimeMethod*))Vector_1_op_Inequality_m7C2EEFD78E76EDF9D64973D64D52ACD97408DEE9_gshared_inline)(___left0, ___right1, method);
}
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Equality(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
inline bool Vector_1_op_Equality_m9157C65E2C79AB237B54D7F96CAC98F347DACBDF_inline (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___left0, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___right1, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00, const RuntimeMethod*))Vector_1_op_Equality_m9157C65E2C79AB237B54D7F96CAC98F347DACBDF_gshared_inline)(___left0, ___right1, method);
}
// System.Boolean System.UIntPtr::op_Inequality(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Inequality_m79A9D54C1741C223DC0F7B47688F9E604C35EDF6 (uintptr_t ___value10, uintptr_t ___value21, const RuntimeMethod* method) ;
// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Equality_mF066AE7DFD7017C2A999AAE1B9B4D6DFBCD0E973 (uintptr_t ___value10, uintptr_t ___value21, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_m3162A4F48AE683C74A9419644E40C05595BA41E7 (Type_t* ___nullableType0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m211A1AFB582534C04CBF34730DA23A8F73CF704C (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.NUInt::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mCC4289521ED0CBFB9307611B4FD61081D10AB5DD (NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.NUInt::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_m00898F889B1873CF96DE6EB519EB40B276DDB9BC (NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Type System.SR::get_ResourceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SR_get_ResourceType_mC4E3E1108243B342A2876E409D397D7B9EDD9022_inline (const RuntimeMethod* method) ;
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___resourceSource0, const RuntimeMethod* method) ;
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m4227D4C31EF93569658795D055ED22803359859D (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m495EBBC7C471B37E6CC2F79EF1AE3E569A87900A (const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mECA40A7DE4809FEFAD4C00CC074EF5473D658135 (String_t* ___separator0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m65AC2E7D82F43B5DC91C120F8DDD95B0FE17FF11 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Char>::TryGetString(System.String&,System.Int32&,System.Int32&)
inline bool ReadOnlySequence_1_TryGetString_m067786542E26F664B794B393FE1A28F091ED5F29 (ReadOnlySequence_1_tE2437E4FC08B29D9E89B2938AA18B2B013278BA4* __this, String_t** ___text0, int32_t* ___start1, int32_t* ___length2, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySequence_1_tE2437E4FC08B29D9E89B2938AA18B2B013278BA4*, String_t**, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlySequence_1_TryGetString_m067786542E26F664B794B393FE1A28F091ED5F29_gshared)(__this, ___text0, ___start1, ___length2, method);
}
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m372B50FF95E30EFCBBD92F1AE57B70C426764E9E_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt64>(System.ReadOnlySpan`1<System.Byte>)
inline uint64_t MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC9584A7F4C1780F9FBBA1D4E313F6FCFAF2D280E_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___source0, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, const RuntimeMethod*))MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC9584A7F4C1780F9FBBA1D4E313F6FCFAF2D280E_gshared_inline)(___source0, method);
}
// System.UInt64 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_m4B53AE176DE21D1DE41FEE1AEA9F4FB67884B525_inline (uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.UInt32>(System.Span`1<System.Byte>,T&)
inline void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA29E4FDF4DA2A2907E617212A9954B265FD6F7D9_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___destination0, uint32_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01, uint32_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA29E4FDF4DA2A2907E617212A9954B265FD6F7D9_gshared_inline)(___destination0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.UInt64>(System.Span`1<System.Byte>,T&)
inline void MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58AA283D85956A08BC7FFE1666160922F96DCC4D_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___destination0, uint64_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01, uint64_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58AA283D85956A08BC7FFE1666160922F96DCC4D_gshared_inline)(___destination0, ___value1, method);
}
// System.Boolean System.Numerics.Vector`1<System.Byte>::Equals(System.Numerics.Vector`1<T>)
inline bool Vector_1_Equals_m4E0057D1AD47E2694EB1F4A2E922E38E8C331A7F (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00* __this, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00*, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00, const RuntimeMethod*))Vector_1_Equals_m4E0057D1AD47E2694EB1F4A2E922E38E8C331A7F_gshared)(__this, ___other0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_gshared_inline)(__this, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEC09E7EC948CE8E4EB86BC21F77A4FD13083100D (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEC09E7EC948CE8E4EB86BC21F77A4FD13083100D_gshared)(___span0, method);
}
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01*, const RuntimeMethod*))Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_gshared_inline)(__this, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49 (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49_gshared)(___span0, method);
}
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mB5F1CAC5D0D45F13EAB94F7598BE6F8076D2567E (EmbeddedAttribute_t6999FF86BCB538E701A0C84C6A371E1C490F7739* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m3C820C091B3C3C302CA7000CC546AE9687179186 (IsReadOnlyAttribute_t8671310D56806D72E00ADA85C5140CF28734C839* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsByRefLikeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_m64CED73AB476BF387C0A8CF6D771AE8E43246322 (IsByRefLikeAttribute_t10D25A0F9E4797A0F9FDC3559106928A71D8D628* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// Conversion methods for marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshal_pinvoke(const SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581& unmarshaled, SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____object_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____object_0))
		{
			marshaled.____object_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____object_0));
			(marshaled.____object_0)->AddRef();
		}
		else
		{
			marshaled.____object_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____object_0);
		}
	}
	else
	{
		marshaled.____object_0 = NULL;
	}
	marshaled.____integer_1 = unmarshaled.____integer_1;
}
IL2CPP_EXTERN_C void SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshal_pinvoke_back(const SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshaled_pinvoke& marshaled, SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____object_0 != NULL)
	{
		unmarshaled.____object_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____object_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____object_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____object_0), Il2CppIUnknown::IID, marshaled.____object_0);
		}
	}
	else
	{
		unmarshaled.____object_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____object_0), (void*)NULL);
	}
	int32_t unmarshaled_integer_temp_1 = 0;
	unmarshaled_integer_temp_1 = marshaled.____integer_1;
	unmarshaled.____integer_1 = unmarshaled_integer_temp_1;
}
// Conversion method for clean up from marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshal_pinvoke_cleanup(SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshaled_pinvoke& marshaled)
{
	if (marshaled.____object_0 != NULL)
	{
		(marshaled.____object_0)->Release();
		marshaled.____object_0 = NULL;
	}
}
// Conversion methods for marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshal_com(const SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581& unmarshaled, SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshaled_com& marshaled)
{
	if (unmarshaled.____object_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____object_0))
		{
			marshaled.____object_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____object_0));
			(marshaled.____object_0)->AddRef();
		}
		else
		{
			marshaled.____object_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____object_0);
		}
	}
	else
	{
		marshaled.____object_0 = NULL;
	}
	marshaled.____integer_1 = unmarshaled.____integer_1;
}
IL2CPP_EXTERN_C void SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshal_com_back(const SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshaled_com& marshaled, SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____object_0 != NULL)
	{
		unmarshaled.____object_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____object_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____object_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____object_0), Il2CppIUnknown::IID, marshaled.____object_0);
		}
	}
	else
	{
		unmarshaled.____object_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____object_0), (void*)NULL);
	}
	int32_t unmarshaled_integer_temp_1 = 0;
	unmarshaled_integer_temp_1 = marshaled.____integer_1;
	unmarshaled.____integer_1 = unmarshaled_integer_temp_1;
}
// Conversion method for clean up from marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshal_com_cleanup(SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_marshaled_com& marshaled)
{
	if (marshaled.____object_0 != NULL)
	{
		(marshaled.____object_0)->Release();
		marshaled.____object_0 = NULL;
	}
}
// System.Void System.SequencePosition::.ctor(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_mB0A57DB282A49304336E93B16D75694916874306 (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, RuntimeObject* ___object0, int32_t ___integer1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___object0;
		__this->____object_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)L_0);
		int32_t L_1 = ___integer1;
		__this->____integer_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void SequencePosition__ctor_mB0A57DB282A49304336E93B16D75694916874306_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___object0, int32_t ___integer1, const RuntimeMethod* method)
{
	SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581*>(__this + _offset);
	SequencePosition__ctor_mB0A57DB282A49304336E93B16D75694916874306(_thisAdjusted, ___object0, ___integer1, method);
}
// System.Object System.SequencePosition::GetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m2CC7429B07B6EF4290824E4974402A3DC451C8C3 (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____object_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* SequencePosition_GetObject_m2CC7429B07B6EF4290824E4974402A3DC451C8C3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = SequencePosition_GetObject_m2CC7429B07B6EF4290824E4974402A3DC451C8C3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mD3C6C1F6A9ED3C9AC421A5189C51253D3BCB38EE (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____integer_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SequencePosition_GetInteger_mD3C6C1F6A9ED3C9AC421A5189C51253D3BCB38EE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SequencePosition_GetInteger_mD3C6C1F6A9ED3C9AC421A5189C51253D3BCB38EE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.SequencePosition::Equals(System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_mD0CC178572C2F3EE85B8E495717205EDDF647AFF (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 ___other0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____integer_1;
		SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 L_1 = ___other0;
		int32_t L_2 = L_1.____integer_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_3 = __this->____object_0;
		SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 L_4 = ___other0;
		RuntimeObject* L_5 = L_4.____object_0;
		bool L_6;
		L_6 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_3, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SequencePosition_Equals_mD0CC178572C2F3EE85B8E495717205EDDF647AFF_AdjustorThunk (RuntimeObject* __this, SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 ___other0, const RuntimeMethod* method)
{
	SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581*>(__this + _offset);
	bool _returnValue;
	_returnValue = SequencePosition_Equals_mD0CC178572C2F3EE85B8E495717205EDDF647AFF(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.SequencePosition::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m8D996E70EAABE5831C4E1534171B6A0E70BC1817 (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		RuntimeObject* L_1 = L_0;
		V_1 = L_1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		V_0 = ((*(SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581*)((SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581*)(SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581*)UnBox(L_2, SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581_il2cpp_TypeInfo_var))));
		SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581 L_3 = V_0;
		bool L_4;
		L_4 = SequencePosition_Equals_mD0CC178572C2F3EE85B8E495717205EDDF647AFF(__this, L_3, NULL);
		return L_4;
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SequencePosition_Equals_m8D996E70EAABE5831C4E1534171B6A0E70BC1817_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581*>(__this + _offset);
	bool _returnValue;
	_returnValue = SequencePosition_Equals_m8D996E70EAABE5831C4E1534171B6A0E70BC1817(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 System.SequencePosition::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetHashCode_mD3E6DBFDB3D9D66BD0DE726E077DFB72478B2F36 (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t3BD7F54282B99C57412F05E962C2EB1C35583BDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____object_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		int32_t L_3 = __this->____integer_1;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t3BD7F54282B99C57412F05E962C2EB1C35583BDE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = HashHelpers_Combine_m1530E549D02D8A69DEEEA59E40B934B394ECD468(G_B3_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t SequencePosition_GetHashCode_mD3E6DBFDB3D9D66BD0DE726E077DFB72478B2F36_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SequencePosition_GetHashCode_mD3E6DBFDB3D9D66BD0DE726E077DFB72478B2F36(_thisAdjusted, method);
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
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m01D88E809D8DCE52DAC781C509B25C8BDA7C17AA (int32_t ___argument0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___argument0;
		Exception_t* L_1;
		L_1 = ThrowHelper_CreateArgumentNullException_mE51C54BE6B1A8818827DDAF55D4323F5B862557E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentNullException_m01D88E809D8DCE52DAC781C509B25C8BDA7C17AA_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentNullException_mE51C54BE6B1A8818827DDAF55D4323F5B862557E (int32_t ___argument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_tDD4F9889AA2A9F72F75075582C675BC10EBFF054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_tDD4F9889AA2A9F72F75075582C675BC10EBFF054_il2cpp_TypeInfo_var, (&___argument0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mA52C15A256F1FCE98B1A372E2ADFA2CFC201D442 (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateArrayTypeMismatchException_m029C9273EC3C46E595935C617FB086048A917374(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArrayTypeMismatchException_mA52C15A256F1FCE98B1A372E2ADFA2CFC201D442_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArrayTypeMismatchException_m029C9273EC3C46E595935C617FB086048A917374 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_0 = (ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)il2cpp_codegen_object_new(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayTypeMismatchException__ctor_mD1BAAE9B73BA9E5948655553019ED8DE4F306D8B(L_0, NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07 (Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___type0;
		Exception_t* L_1;
		L_1 = ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_mDB6651ED26DCE920C4496D1F33BFBB0D875A61E4(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_mDB6651ED26DCE920C4496D1F33BFBB0D875A61E4 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_InvalidTypeWithPointersNotSupported_mB63FAA3F7BE546638DBA80DD28D5BCCA26B54623(NULL);
		Type_t* L_1 = ___type0;
		String_t* L_2;
		L_2 = SR_Format_m1FD27969BA1E368A8B57141778CD5C68D7BB339B(L_0, L_1, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m0EA4D6073B1FFED65583D3F93F7D8D775D94963A (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateArgumentException_DestinationTooShort_m4509E0C326A74F91B7746749147AE7AFD67DD135(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_DestinationTooShort_m0EA4D6073B1FFED65583D3F93F7D8D775D94963A_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentException_DestinationTooShort_m4509E0C326A74F91B7746749147AE7AFD67DD135 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_DestinationTooShort_m7346823D2923079883B1745EED28EFFFD391AE12(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m46AF5939C05FD5C1B41793773BB5AD23228DC4C0 (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateIndexOutOfRangeException_mA41D425CFDE851475D80E87C8DB6CE5654DCB622(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowIndexOutOfRangeException_m46AF5939C05FD5C1B41793773BB5AD23228DC4C0_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateIndexOutOfRangeException_mA41D425CFDE851475D80E87C8DB6CE5654DCB622 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_0 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_0, NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD2A02185E9083850106BE3DA7D3862BA909786D9 (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateArgumentOutOfRangeException_mEFADA3A96266CA114F3999FA5D9B042C5F80992C(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_mD2A02185E9083850106BE3DA7D3862BA909786D9_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_mEFADA3A96266CA114F3999FA5D9B042C5F80992C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_0 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_0, NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5 (int32_t ___argument0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___argument0;
		Exception_t* L_1;
		L_1 = ThrowHelper_CreateArgumentOutOfRangeException_m6E6CD14826453D6DB001F7045C634BA90122C749(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_m6E6CD14826453D6DB001F7045C634BA90122C749 (int32_t ___argument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_tDD4F9889AA2A9F72F75075582C675BC10EBFF054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_tDD4F9889AA2A9F72F75075582C675BC10EBFF054_il2cpp_TypeInfo_var, (&___argument0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void System.ThrowHelper::ThrowInvalidOperationException_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_m113714A60F0D33A4A350B790158086B955B6F810 (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m51D9918A582B87F6B7CD78C753A09B4D2A06B31A(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_m113714A60F0D33A4A350B790158086B955B6F810_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateInvalidOperationException_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m51D9918A582B87F6B7CD78C753A09B4D2A06B31A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_EndPositionNotReached_mE66B9AE07ADE5770A9ED4987E70D0C5F3BD75BA1(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
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
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3 MemoryExtensions_AsSpan_mB60EA2A18776ABBD9F983D1020F2262906E8505F (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mD606174A6A53935EE8983A98E5B8A1621B42AE0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3));
		ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___text0;
		Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1* L_3;
		L_3 = il2cpp_unsafe_as<Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1*>(L_2);
		il2cpp_codegen_runtime_class_init_inline(MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D_il2cpp_TypeInfo_var))->___StringAdjustment_0;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_mD606174A6A53935EE8983A98E5B8A1621B42AE0F_inline((&L_7), L_3, L_4, L_6, /*hidden argument*/ReadOnlySpan_1__ctor_mD606174A6A53935EE8983A98E5B8A1621B42AE0F_RuntimeMethod_var);
		return L_7;
	}
}
// System.ReadOnlyMemory`1<System.Char> System.MemoryExtensions::AsMemory(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE MemoryExtensions_AsMemory_m9ABE5833FD6D3FE43CDF9BFBDEC315F28DBBEDEC (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1__ctor_mC2832A5C31F61ED2D139F6F0BAE691FAD968AAE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5(1, NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE));
		ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		int32_t L_4 = ___start1;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = ___length2;
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = ___start1;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5(1, NULL);
	}

IL_0033:
	{
		String_t* L_11 = ___text0;
		int32_t L_12 = ___start1;
		int32_t L_13 = ___length2;
		ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE L_14;
		memset((&L_14), 0, sizeof(L_14));
		ReadOnlyMemory_1__ctor_mC2832A5C31F61ED2D139F6F0BAE691FAD968AAE0_inline((&L_14), L_11, L_12, L_13, /*hidden argument*/ReadOnlyMemory_1__ctor_mC2832A5C31F61ED2D139F6F0BAE691FAD968AAE0_RuntimeMethod_var);
		return L_14;
	}
}
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m3A6CF92BE0FC24B88E9A2F8AF14DE361ABC455D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		V_0 = _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
		String_t* L_0 = V_0;
		V_2 = L_0;
		String_t* L_1 = V_2;
		V_1 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar* L_3 = V_1;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460(NULL);
		V_1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, L_4));
	}

IL_0016:
	{
		String_t* L_5 = V_0;
		Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1* L_6;
		L_6 = il2cpp_unsafe_as<Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1*>(L_5);
		NullCheck(L_6);
		Il2CppChar* L_7 = (&L_6->___Data_0);
		Il2CppChar* L_8 = V_1;
		Il2CppChar* L_9;
		L_9 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)L_8);
		intptr_t L_10;
		L_10 = il2cpp_unsafe_byte_offset(L_7, L_9);
		return L_10;
	}
}
// System.Void System.MemoryExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryExtensions__cctor_mD6169E4731C5ED3B6AC9E3B71A2B84A9399213DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = MemoryExtensions_MeasureStringAdjustment_m3A6CF92BE0FC24B88E9A2F8AF14DE361ABC455D5(NULL);
		((MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_t13EF10C3D832BFF1966A33A86BF444CEF504365D_il2cpp_TypeInfo_var))->___StringAdjustment_0 = L_0;
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
// System.Boolean System.SpanHelpers::SequenceEqual(System.Byte&,System.Byte&,System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_mBC06FFBCF04ED749ED06F0F4D2C8A5D9B6D59987 (uint8_t* ___first0, uint8_t* ___second1, NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_op_Equality_m9157C65E2C79AB237B54D7F96CAC98F347DACBDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_op_Inequality_m7C2EEFD78E76EDF9D64973D64D52ACD97408DEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t* L_0 = ___first0;
		uint8_t* L_1 = ___second1;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_013d;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_3;
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_4 = ___length2;
		void* L_5;
		L_5 = NUInt_op_Explicit_m57FDA8569E6BB8AA477C8B99B014B756CD8E221C_inline(L_4, NULL);
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_5, NULL);
		V_1 = L_6;
		bool L_7;
		L_7 = Vector_get_IsHardwareAccelerated_m4165001054E20A7304F843AE29C33C47D814185D(NULL);
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_8 = V_1;
		void* L_9;
		L_9 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_inline(Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_RuntimeMethod_var);
		if ((!(((uintptr_t)L_9) >= ((uintptr_t)((intptr_t)L_10)))))
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_inline(Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_RuntimeMethod_var);
		intptr_t L_13;
		L_13 = IntPtr_op_Subtraction_mB90083473B35014437EC01BE5DE3770FB9720F4C(L_11, L_12, NULL);
		V_1 = L_13;
		goto IL_0070;
	}

IL_0042:
	{
		uint8_t* L_14 = ___first0;
		intptr_t L_15 = V_0;
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_14, L_15);
		Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 L_17;
		L_17 = il2cpp_unsafe_read_unaligned<Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00>(L_16);
		uint8_t* L_18 = ___second1;
		intptr_t L_19 = V_0;
		uint8_t* L_20;
		L_20 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_18, L_19);
		Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 L_21;
		L_21 = il2cpp_unsafe_read_unaligned<Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00>(L_20);
		il2cpp_codegen_runtime_class_init_inline(Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Vector_1_op_Inequality_m7C2EEFD78E76EDF9D64973D64D52ACD97408DEE9_inline(L_17, L_21, Vector_1_op_Inequality_m7C2EEFD78E76EDF9D64973D64D52ACD97408DEE9_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_inline(Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_RuntimeMethod_var);
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_23, L_24, NULL);
		V_0 = L_25;
	}

IL_0070:
	{
		intptr_t L_26 = V_1;
		void* L_27;
		L_27 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_26, NULL);
		intptr_t L_28 = V_0;
		void* L_29;
		L_29 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_28, NULL);
		if ((!(((uintptr_t)L_27) <= ((uintptr_t)L_29))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_30 = ___first0;
		intptr_t L_31 = V_1;
		uint8_t* L_32;
		L_32 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_30, L_31);
		Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 L_33;
		L_33 = il2cpp_unsafe_read_unaligned<Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00>(L_32);
		uint8_t* L_34 = ___second1;
		intptr_t L_35 = V_1;
		uint8_t* L_36;
		L_36 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_34, L_35);
		Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 L_37;
		L_37 = il2cpp_unsafe_read_unaligned<Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00>(L_36);
		il2cpp_codegen_runtime_class_init_inline(Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Vector_1_op_Equality_m9157C65E2C79AB237B54D7F96CAC98F347DACBDF_inline(L_33, L_37, Vector_1_op_Equality_m9157C65E2C79AB237B54D7F96CAC98F347DACBDF_RuntimeMethod_var);
		return L_38;
	}

IL_009c:
	{
		intptr_t L_39 = V_1;
		void* L_40;
		L_40 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_39, NULL);
		uint32_t L_41 = sizeof(uintptr_t);
		if ((!(((uintptr_t)L_40) >= ((uintptr_t)((intptr_t)L_41)))))
		{
			goto IL_012f;
		}
	}
	{
		intptr_t L_42 = V_1;
		uint32_t L_43 = sizeof(uintptr_t);
		intptr_t L_44;
		L_44 = IntPtr_op_Subtraction_mB90083473B35014437EC01BE5DE3770FB9720F4C(L_42, L_43, NULL);
		V_1 = L_44;
		goto IL_00e9;
	}

IL_00bd:
	{
		uint8_t* L_45 = ___first0;
		intptr_t L_46 = V_0;
		uint8_t* L_47;
		L_47 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_45, L_46);
		uintptr_t L_48;
		L_48 = il2cpp_unsafe_read_unaligned<uintptr_t>(L_47);
		uint8_t* L_49 = ___second1;
		intptr_t L_50 = V_0;
		uint8_t* L_51;
		L_51 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_49, L_50);
		uintptr_t L_52;
		L_52 = il2cpp_unsafe_read_unaligned<uintptr_t>(L_51);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = UIntPtr_op_Inequality_m79A9D54C1741C223DC0F7B47688F9E604C35EDF6(L_48, L_52, NULL);
		if (L_53)
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_54 = V_0;
		uint32_t L_55 = sizeof(uintptr_t);
		intptr_t L_56;
		L_56 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_54, L_55, NULL);
		V_0 = L_56;
	}

IL_00e9:
	{
		intptr_t L_57 = V_1;
		void* L_58;
		L_58 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_57, NULL);
		intptr_t L_59 = V_0;
		void* L_60;
		L_60 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_59, NULL);
		if ((!(((uintptr_t)L_58) <= ((uintptr_t)L_60))))
		{
			goto IL_00bd;
		}
	}
	{
		uint8_t* L_61 = ___first0;
		intptr_t L_62 = V_1;
		uint8_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_61, L_62);
		uintptr_t L_64;
		L_64 = il2cpp_unsafe_read_unaligned<uintptr_t>(L_63);
		uint8_t* L_65 = ___second1;
		intptr_t L_66 = V_1;
		uint8_t* L_67;
		L_67 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_65, L_66);
		uintptr_t L_68;
		L_68 = il2cpp_unsafe_read_unaligned<uintptr_t>(L_67);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = UIntPtr_op_Equality_mF066AE7DFD7017C2A999AAE1B9B4D6DFBCD0E973(L_64, L_68, NULL);
		return L_69;
	}

IL_0115:
	{
		uint8_t* L_70 = ___first0;
		intptr_t L_71 = V_0;
		uint8_t* L_72;
		L_72 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_70, L_71);
		int32_t L_73 = *((uint8_t*)L_72);
		uint8_t* L_74 = ___second1;
		intptr_t L_75 = V_0;
		uint8_t* L_76;
		L_76 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_74, L_75);
		int32_t L_77 = *((uint8_t*)L_76);
		if ((!(((uint32_t)L_73) == ((uint32_t)L_77))))
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_78, 1, NULL);
		V_0 = L_79;
	}

IL_012f:
	{
		intptr_t L_80 = V_1;
		void* L_81;
		L_81 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_80, NULL);
		intptr_t L_82 = V_0;
		void* L_83;
		L_83 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_82, NULL);
		if ((!(((uintptr_t)L_81) <= ((uintptr_t)L_83))))
		{
			goto IL_0115;
		}
	}

IL_013d:
	{
		return (bool)1;
	}

IL_013f:
	{
		return (bool)0;
	}
}
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m211A1AFB582534C04CBF34730DA23A8F73CF704C (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldInfo_t* V_2 = NULL;
	bool V_3 = false;
	{
		Type_t* L_0 = ___type0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		Type_t* L_3 = ___type0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_4;
		L_4 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		Type_t* L_6 = ___type0;
		Type_t* L_7;
		L_7 = Nullable_GetUnderlyingType_m3162A4F48AE683C74A9419644E40C05595BA41E7(L_6, NULL);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_8, (Type_t*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		Type_t* L_10 = V_0;
		___type0 = L_10;
	}

IL_0031:
	{
		Type_t* L_11 = ___type0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_12;
		L_12 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_11, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, L_12);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		Type_t* L_14 = ___type0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_15;
		L_15 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_14, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(127 /* System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> System.Reflection.TypeInfo::get_DeclaredFields() */, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1_il2cpp_TypeInfo_var, L_16);
		V_1 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_1;
					if (!L_18)
					{
						goto IL_0086;
					}
				}
				{
					RuntimeObject* L_19 = V_1;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_20 = V_1;
				NullCheck(L_20);
				FieldInfo_t* L_21;
				L_21 = InterfaceFuncInvoker0< FieldInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991_il2cpp_TypeInfo_var, L_20);
				V_2 = L_21;
				FieldInfo_t* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_22, NULL);
				if (L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				FieldInfo_t* L_24 = V_2;
				NullCheck(L_24);
				Type_t* L_25;
				L_25 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_24);
				bool L_26;
				L_26 = SpanHelpers_IsReferenceOrContainsReferencesCore_m211A1AFB582534C04CBF34730DA23A8F73CF704C(L_25, NULL);
				if (!L_26)
				{
					goto IL_0073_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_0089;
			}

IL_0073_1:
			{
				RuntimeObject* L_27 = V_1;
				NullCheck(L_27);
				bool L_28;
				L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
				if (L_28)
				{
					goto IL_0053_1;
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
		return (bool)0;
	}

IL_0089:
	{
		bool L_29 = V_3;
		return L_29;
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
// System.Void System.NUInt::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mCC4289521ED0CBFB9307611B4FD61081D10AB5DD (NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->____value_0 = (void*)((uintptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_mCC4289521ED0CBFB9307611B4FD61081D10AB5DD_AdjustorThunk (RuntimeObject* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483*>(__this + _offset);
	NUInt__ctor_mCC4289521ED0CBFB9307611B4FD61081D10AB5DD(_thisAdjusted, ___value0, method);
}
// System.Void System.NUInt::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_m00898F889B1873CF96DE6EB519EB40B276DDB9BC (NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->____value_0 = (void*)((uintptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_m00898F889B1873CF96DE6EB519EB40B276DDB9BC_AdjustorThunk (RuntimeObject* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483*>(__this + _offset);
	NUInt__ctor_m00898F889B1873CF96DE6EB519EB40B276DDB9BC(_thisAdjusted, ___value0, method);
}
// System.NUInt System.NUInt::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 NUInt_op_Explicit_m0E0B28EECC3ED95C44AC67EE091830924166839C (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NUInt__ctor_mCC4289521ED0CBFB9307611B4FD61081D10AB5DD((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void* System.NUInt::op_Explicit(System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_m57FDA8569E6BB8AA477C8B99B014B756CD8E221C (NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 ___value0, const RuntimeMethod* method) 
{
	{
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_0 = ___value0;
		void* L_1 = L_0.____value_0;
		return L_1;
	}
}
// System.NUInt System.NUInt::op_Multiply(System.NUInt,System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 NUInt_op_Multiply_m351591221C70334F9156BD616515D52299C3E610 (NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 ___left0, NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 ___right1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_1 = ___left0;
		void* L_2 = L_1.____value_0;
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_3 = ___right1;
		void* L_4 = L_3.____value_0;
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_5;
		memset((&L_5), 0, sizeof(L_5));
		NUInt__ctor_m00898F889B1873CF96DE6EB519EB40B276DDB9BC((&L_5), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)(intptr_t)L_2), ((int64_t)(uint64_t)(intptr_t)L_4))), /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_6 = ___left0;
		void* L_7 = L_6.____value_0;
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_8 = ___right1;
		void* L_9 = L_8.____value_0;
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_10;
		memset((&L_10), 0, sizeof(L_10));
		NUInt__ctor_mCC4289521ED0CBFB9307611B4FD61081D10AB5DD((&L_10), ((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)(intptr_t)L_7), ((int32_t)(uint32_t)(intptr_t)L_9))), /*hidden argument*/NULL);
		return L_10;
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
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m4227D4C31EF93569658795D055ED22803359859D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_StaticFields*)il2cpp_codegen_static_fields_for(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var))->___s_resourceManager_0;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = SR_get_ResourceType_mC4E3E1108243B342A2876E409D397D7B9EDD9022_inline(NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_3 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_3, L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = L_3;
		((SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_StaticFields*)il2cpp_codegen_static_fields_for(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var))->___s_resourceManager_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_StaticFields*)il2cpp_codegen_static_fields_for(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var))->___s_resourceManager_0), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m495EBBC7C471B37E6CC2F79EF1AE3E569A87900A (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m65AC2E7D82F43B5DC91C120F8DDD95B0FE17FF11 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = SR_get_ResourceManager_m4227D4C31EF93569658795D055ED22803359859D(NULL);
		String_t* L_1 = ___resourceKey0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0013;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	}// end catch (depth: 1)

IL_0013:
	{
		String_t* L_3 = ___defaultString1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = ___resourceKey0;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_4, L_5, 4, NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_7 = ___defaultString1;
		return L_7;
	}

IL_0022:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m1FD27969BA1E368A8B57141778CD5C68D7BB339B (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m495EBBC7C471B37E6CC2F79EF1AE3E569A87900A(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = String_Join_mECA40A7DE4809FEFAD4C00CC074EF5473D658135(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___resourceFormat0;
		RuntimeObject* L_8 = ___p11;
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(L_7, L_8, NULL);
		return L_9;
	}
}
// System.Type System.SR::get_ResourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SR_get_ResourceType_mC4E3E1108243B342A2876E409D397D7B9EDD9022 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		Type_t* L_0 = ((SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_StaticFields*)il2cpp_codegen_static_fields_for(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallEqualsOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallEqualsOnSpan_mDA55BD945B6990207787590FA72A260C87E4972D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m65AC2E7D82F43B5DC91C120F8DDD95B0FE17FF11(_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallGetHashCodeOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallGetHashCodeOnSpan_m68FF8C136A8AF68B2F4F911A14C1FB14F2EF582A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m65AC2E7D82F43B5DC91C120F8DDD95B0FE17FF11(_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_mB63FAA3F7BE546638DBA80DD28D5BCCA26B54623 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m65AC2E7D82F43B5DC91C120F8DDD95B0FE17FF11(_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_m7346823D2923079883B1745EED28EFFFD391AE12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m65AC2E7D82F43B5DC91C120F8DDD95B0FE17FF11(_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_EndPositionNotReached_mE66B9AE07ADE5770A9ED4987E70D0C5F3BD75BA1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m65AC2E7D82F43B5DC91C120F8DDD95B0FE17FF11(_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_mF5B88033A1B52B90CB365F5CE5C1DBA62395CBC6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t510CDEE66C1993DDE190E6BAC3DFEB9BFE65E925_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (SR_t510CDEE66C1993DDE190E6BAC3DFEB9BFE65E925_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		((SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_StaticFields*)il2cpp_codegen_static_fields_for(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_StaticFields*)il2cpp_codegen_static_fields_for(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField_1), (void*)L_1);
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
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m1530E549D02D8A69DEEEA59E40B934B394ECD468 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___h10;
		int32_t L_1 = ___h10;
		V_0 = ((int32_t)(((int32_t)(L_0<<5))|((int32_t)((uint32_t)L_1>>((int32_t)27)))));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___h10;
		int32_t L_4 = ___h21;
		return ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_2, L_3))^L_4));
	}
}
// System.Void System.Numerics.Hashing.HashHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashHelpers__cctor_mA41143BD623E50636573BFCF87DF394B55FB5F5C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t3BD7F54282B99C57412F05E962C2EB1C35583BDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&V_0), NULL);
		((HashHelpers_t3BD7F54282B99C57412F05E962C2EB1C35583BDE_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t3BD7F54282B99C57412F05E962C2EB1C35583BDE_il2cpp_TypeInfo_var))->___RandomSeed_0 = L_1;
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
// System.Boolean System.Runtime.InteropServices.SequenceMarshal::TryGetString(System.Buffers.ReadOnlySequence`1<System.Char>,System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceMarshal_TryGetString_m955741D86A0E0B2347F716E3C0A16791C329A1F5 (ReadOnlySequence_1_tE2437E4FC08B29D9E89B2938AA18B2B013278BA4 ___sequence0, String_t** ___text1, int32_t* ___start2, int32_t* ___length3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_TryGetString_m067786542E26F664B794B393FE1A28F091ED5F29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t** L_0 = ___text1;
		int32_t* L_1 = ___start2;
		int32_t* L_2 = ___length3;
		bool L_3;
		L_3 = ReadOnlySequence_1_TryGetString_m067786542E26F664B794B393FE1A28F091ED5F29((&___sequence0), L_0, L_1, L_2, ReadOnlySequence_1_TryGetString_m067786542E26F664B794B393FE1A28F091ED5F29_RuntimeMethod_var);
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
// System.Int32 System.Buffers.ReadOnlySequence::ArrayToSequenceStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceStart_mCBC75C3DC3D507D213211358ACCA8B031B77A180 (int32_t ___startIndex0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___startIndex0;
		return ((int32_t)(L_0|0));
	}
}
// System.Int32 System.Buffers.ReadOnlySequence::ArrayToSequenceEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceEnd_mF10C4067E73AEF2A138E5146A77BE32C71D2BFCA (int32_t ___endIndex0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___endIndex0;
		return ((int32_t)(L_0|((int32_t)-2147483648LL)));
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
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m372B50FF95E30EFCBBD92F1AE57B70C426764E9E (uint32_t ___value0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
// System.UInt64 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_m4B53AE176DE21D1DE41FEE1AEA9F4FB67884B525 (uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m372B50FF95E30EFCBBD92F1AE57B70C426764E9E_inline(((int32_t)(uint32_t)L_0), NULL);
		uint64_t L_2 = ___value0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m372B50FF95E30EFCBBD92F1AE57B70C426764E9E_inline(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), NULL);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_1)<<((int32_t)32))), ((int64_t)(uint64_t)L_3)));
	}
}
// System.UInt64 System.Buffers.Binary.BinaryPrimitives::ReadUInt64LittleEndian(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReadUInt64LittleEndian_m36C5357BA028881BB7DF3A1E065DC5B59139E37C (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC9584A7F4C1780F9FBBA1D4E313F6FCFAF2D280E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_0 = ___source0;
		uint64_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC9584A7F4C1780F9FBBA1D4E313F6FCFAF2D280E_inline(L_0, MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC9584A7F4C1780F9FBBA1D4E313F6FCFAF2D280E_RuntimeMethod_var);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_2 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_3 = V_0;
		uint64_t L_4;
		L_4 = BinaryPrimitives_ReverseEndianness_m4B53AE176DE21D1DE41FEE1AEA9F4FB67884B525_inline(L_3, NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		uint64_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Buffers.Binary.BinaryPrimitives::WriteUInt32LittleEndian(System.Span`1<System.Byte>,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt32LittleEndian_mBBEB978DEF458E2AA3CEA81D443BA26ED7055CF1 (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___destination0, uint32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA29E4FDF4DA2A2907E617212A9954B265FD6F7D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_1 = ___value1;
		uint32_t L_2;
		L_2 = BinaryPrimitives_ReverseEndianness_m372B50FF95E30EFCBBD92F1AE57B70C426764E9E_inline(L_1, NULL);
		___value1 = L_2;
	}

IL_000f:
	{
		Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 L_3 = ___destination0;
		MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA29E4FDF4DA2A2907E617212A9954B265FD6F7D9_inline(L_3, (&___value1), MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA29E4FDF4DA2A2907E617212A9954B265FD6F7D9_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Buffers.Binary.BinaryPrimitives::WriteUInt64LittleEndian(System.Span`1<System.Byte>,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt64LittleEndian_m590531E85CE925354E45B91E63F560AF0E2D97E0 (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___destination0, uint64_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58AA283D85956A08BC7FFE1666160922F96DCC4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		uint64_t L_1 = ___value1;
		uint64_t L_2;
		L_2 = BinaryPrimitives_ReverseEndianness_m4B53AE176DE21D1DE41FEE1AEA9F4FB67884B525_inline(L_1, NULL);
		___value1 = L_2;
	}

IL_000f:
	{
		Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 L_3 = ___destination0;
		MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58AA283D85956A08BC7FFE1666160922F96DCC4D_inline(L_3, (&___value1), MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58AA283D85956A08BC7FFE1666160922F96DCC4D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m2CC7429B07B6EF4290824E4974402A3DC451C8C3_inline (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____object_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mD3C6C1F6A9ED3C9AC421A5189C51253D3BCB38EE_inline (SequencePosition_tA2CEDB8606A2A6BB024316EE9A046B3266783581* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____integer_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_m57FDA8569E6BB8AA477C8B99B014B756CD8E221C_inline (NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 ___value0, const RuntimeMethod* method) 
{
	{
		NUInt_t3E219DC27C999AA290BE4FEF9F2C381BD2B9F483 L_0 = ___value0;
		void* L_1 = L_0.____value_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SR_get_ResourceType_mC4E3E1108243B342A2876E409D397D7B9EDD9022_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var);
		Type_t* L_0 = ((SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_StaticFields*)il2cpp_codegen_static_fields_for(SR_t2E64B8FA78922251E27B3BE267F44AC64632F678_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m372B50FF95E30EFCBBD92F1AE57B70C426764E9E_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_m4B53AE176DE21D1DE41FEE1AEA9F4FB67884B525_inline (uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m372B50FF95E30EFCBBD92F1AE57B70C426764E9E_inline(((int32_t)(uint32_t)L_0), NULL);
		uint64_t L_2 = ___value0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m372B50FF95E30EFCBBD92F1AE57B70C426764E9E_inline(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), NULL);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_1)<<((int32_t)32))), ((int64_t)(uint64_t)L_3)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD606174A6A53935EE8983A98E5B8A1621B42AE0F_gshared_inline (ReadOnlySpan_1_t0846CD1BEF355AE12F9A41FFB292AA4A85F072F3* __this, Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1* ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___length2;
		__this->____length_2 = L_0;
		Pinnable_1_tC515403748FF7DBD69D99D2774764EDCD1DEBAD1* L_1 = ___pinnable0;
		__this->____pinnable_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable_0), (void*)L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->____byteOffset_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_mC2832A5C31F61ED2D139F6F0BAE691FAD968AAE0_gshared_inline (ReadOnlyMemory_1_t6CFD85526DCF8C3DC0F5CA54DAC056F4C6DABADE* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		__this->____object_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)L_0);
		int32_t L_1 = ___start1;
		__this->____index_1 = L_1;
		int32_t L_2 = ___length2;
		__this->____length_2 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m31FF104C7BA599393BA93CFEE610FE1CE65BE397_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_0 = ((Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___s_count_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m7C2EEFD78E76EDF9D64973D64D52ACD97408DEE9_gshared_inline (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___left0, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___right1, const RuntimeMethod* method) 
{
	{
		Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 L_0 = ___left0;
		Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_m9157C65E2C79AB237B54D7F96CAC98F347DACBDF_gshared_inline (Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___left0, Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 ___right1, const RuntimeMethod* method) 
{
	{
		Vector_1_tB76CBCFEEC288157E6B55E0A1E2F34E6877FEC00 L_0 = ___right1;
		bool L_1;
		L_1 = Vector_1_Equals_m4E0057D1AD47E2694EB1F4A2E922E38E8C331A7F((&___left0), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC9584A7F4C1780F9FBBA1D4E313F6FCFAF2D280E_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEC09E7EC948CE8E4EB86BC21F77A4FD13083100D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = il2cpp_unsafe_sizeof<uint64_t>();
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___source0), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5((int32_t)0, NULL);
	}

IL_002a:
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_5 = ___source0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEC09E7EC948CE8E4EB86BC21F77A4FD13083100D(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEC09E7EC948CE8E4EB86BC21F77A4FD13083100D_RuntimeMethod_var);
		uint64_t L_7;
		L_7 = il2cpp_unsafe_read_unaligned<uint64_t>(L_6);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA29E4FDF4DA2A2907E617212A9954B265FD6F7D9_gshared_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___destination0, uint32_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_4;
		L_4 = Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_inline((&___destination0), Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5((int32_t)0, NULL);
	}

IL_002a:
	{
		Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 L_5 = ___destination0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49_RuntimeMethod_var);
		uint32_t* L_7 = ___value1;
		uint32_t L_8 = (*(uint32_t*)L_7);
		il2cpp_unsafe_write_unaligned(L_6, L_8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58AA283D85956A08BC7FFE1666160922F96DCC4D_gshared_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___destination0, uint64_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = il2cpp_unsafe_sizeof<uint64_t>();
		int32_t L_4;
		L_4 = Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_inline((&___destination0), Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5((int32_t)0, NULL);
	}

IL_002a:
	{
		Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 L_5 = ___destination0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA8650E4F904E5C014269AEE38BEB47C5C437B49_RuntimeMethod_var);
		uint64_t* L_7 = ___value1;
		uint64_t L_8 = (*(uint64_t*)L_7);
		il2cpp_unsafe_write_unaligned(L_6, L_8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_gshared_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		return L_0;
	}
}
