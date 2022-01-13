#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
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
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;

IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral727FAFFC692D108CBB9ED57B1C150923409C145B;
IL2CPP_EXTERN_C const RuntimeType* SR_t93D4D33C58CF83A46B0EB1D4ADB088848C8A8C63_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFBD7CC6B227933D4A3F28DB923CB63505ACE710B 
{
};
struct Il2CppArrayBounds;

// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// FxResources.System.Buffers.SR
struct SR_t93D4D33C58CF83A46B0EB1D4ADB088848C8A8C63  : public RuntimeObject
{
};

// System.SR
struct SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26  : public RuntimeObject
{
};

struct SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26_StaticFields
{
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager_0;
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

// System.Buffers.Utilities
struct Utilities_t51A9A910824154621E730D76A1F760BAD5185594  : public RuntimeObject
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

// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};

struct ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF_StaticFields
{
	// System.Buffers.ArrayPoolEventSource System.Buffers.ArrayPoolEventSource::Log
	ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF* ___Log_0;
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

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Type System.SR::get_ResourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SR_get_ResourceType_mAC22AA335CB4C0DC26F42081A3EB5B6A7132BFDE (const RuntimeMethod* method) ;
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___resourceSource0, const RuntimeMethod* method) ;
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m35089FA2396192EACA7426ACEF486AF620AA6E4C (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m8149163083A77E4250A88797AA1CCDE47E24791B (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_mE71F94613900A4F39DD777C5DA18ECC29DF9676E (ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF* __this, const RuntimeMethod* method) ;
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
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m35089FA2396192EACA7426ACEF486AF620AA6E4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26_StaticFields*)il2cpp_codegen_static_fields_for(SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26_il2cpp_TypeInfo_var))->___s_resourceManager_0;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		Type_t* L_2;
		L_2 = SR_get_ResourceType_mAC22AA335CB4C0DC26F42081A3EB5B6A7132BFDE(NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_3 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_3, L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = L_3;
		((SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26_StaticFields*)il2cpp_codegen_static_fields_for(SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26_il2cpp_TypeInfo_var))->___s_resourceManager_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26_StaticFields*)il2cpp_codegen_static_fields_for(SR_t580C97B00B8661BF9A64C340CA817F86E2AC1C26_il2cpp_TypeInfo_var))->___s_resourceManager_0), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m8149163083A77E4250A88797AA1CCDE47E24791B (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = SR_get_ResourceManager_m35089FA2396192EACA7426ACEF486AF620AA6E4C(NULL);
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
// System.String System.SR::get_ArgumentException_BufferNotFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ArgumentException_BufferNotFromPool_m5736E93116C65F225E236DAFF2B4D10731898B7F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral727FAFFC692D108CBB9ED57B1C150923409C145B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m8149163083A77E4250A88797AA1CCDE47E24791B(_stringLiteral727FAFFC692D108CBB9ED57B1C150923409C145B, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.Type System.SR::get_ResourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SR_get_ResourceType_mAC22AA335CB4C0DC26F42081A3EB5B6A7132BFDE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t93D4D33C58CF83A46B0EB1D4ADB088848C8A8C63_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (SR_t93D4D33C58CF83A46B0EB1D4ADB088848C8A8C63_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
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
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_mE71F94613900A4F39DD777C5DA18ECC29DF9676E (ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF* __this, const RuntimeMethod* method) 
{
	{
		EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC(__this, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__cctor_mB2ECD6C70A39B23FC430E40891D234D20B05C4F0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF* L_0 = (ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF*)il2cpp_codegen_object_new(ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayPoolEventSource__ctor_mE71F94613900A4F39DD777C5DA18ECC29DF9676E(L_0, NULL);
		((ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF_il2cpp_TypeInfo_var))->___Log_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tFA2C82EB37D709EBEDBA38C497E092E151AA8BAF_il2cpp_TypeInfo_var))->___Log_0), (void*)L_0);
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
// System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_SelectBucketIndex_m431ED4A12969830AD295AD48B6DCB5080A5998E6 (int32_t ___bufferSize0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___bufferSize0;
		V_0 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, 1))>>4));
		V_1 = 0;
		uint32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)((uint32_t)L_2>>((int32_t)16)));
		V_1 = ((int32_t)16);
	}

IL_0018:
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((uint32_t)L_4>>8));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
	}

IL_0028:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)15)))))
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_7 = V_0;
		V_0 = ((int32_t)((uint32_t)L_7>>4));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 4));
	}

IL_0035:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) > ((uint32_t)3))))
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)((uint32_t)L_10>>2));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 2));
	}

IL_0041:
	{
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) > ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_13 = V_0;
		V_0 = ((int32_t)((uint32_t)L_13>>1));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_15, (int32_t)L_16));
	}
}
// System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_GetMaxSizeForBucket_m68F74F23084C60F9EB82CAC4153D56349F7F622C (int32_t ___binIndex0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___binIndex0;
		V_0 = ((int32_t)(((int32_t)16)<<((int32_t)(L_0&((int32_t)31)))));
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
