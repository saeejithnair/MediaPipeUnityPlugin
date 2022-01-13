#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Resources.ResourceManager System.SR::get_ResourceManager()
extern void SR_get_ResourceManager_m35089FA2396192EACA7426ACEF486AF620AA6E4C (void);
// 0x00000002 System.String System.SR::GetResourceString(System.String,System.String)
extern void SR_GetResourceString_m8149163083A77E4250A88797AA1CCDE47E24791B (void);
// 0x00000003 System.String System.SR::get_ArgumentException_BufferNotFromPool()
extern void SR_get_ArgumentException_BufferNotFromPool_m5736E93116C65F225E236DAFF2B4D10731898B7F (void);
// 0x00000004 System.Type System.SR::get_ResourceType()
extern void SR_get_ResourceType_mAC22AA335CB4C0DC26F42081A3EB5B6A7132BFDE (void);
// 0x00000005 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::get_Shared()
// 0x00000006 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::EnsureSharedCreated()
// 0x00000007 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::Create()
// 0x00000008 T[] System.Buffers.ArrayPool`1::Rent(System.Int32)
// 0x00000009 System.Void System.Buffers.ArrayPool`1::Return(T[],System.Boolean)
// 0x0000000A System.Void System.Buffers.ArrayPool`1::.ctor()
// 0x0000000B System.Void System.Buffers.ArrayPoolEventSource::.ctor()
extern void ArrayPoolEventSource__ctor_mE71F94613900A4F39DD777C5DA18ECC29DF9676E (void);
// 0x0000000C System.Void System.Buffers.ArrayPoolEventSource::.cctor()
extern void ArrayPoolEventSource__cctor_mB2ECD6C70A39B23FC430E40891D234D20B05C4F0 (void);
// 0x0000000D System.Void System.Buffers.DefaultArrayPool`1::.ctor()
// 0x0000000E System.Void System.Buffers.DefaultArrayPool`1::.ctor(System.Int32,System.Int32)
// 0x0000000F System.Int32 System.Buffers.DefaultArrayPool`1::get_Id()
// 0x00000010 T[] System.Buffers.DefaultArrayPool`1::Rent(System.Int32)
// 0x00000011 System.Void System.Buffers.DefaultArrayPool`1::Return(T[],System.Boolean)
// 0x00000012 System.Void System.Buffers.DefaultArrayPool`1/Bucket::.ctor(System.Int32,System.Int32,System.Int32)
// 0x00000013 T[] System.Buffers.DefaultArrayPool`1/Bucket::Rent()
// 0x00000014 System.Void System.Buffers.DefaultArrayPool`1/Bucket::Return(T[])
// 0x00000015 System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
extern void Utilities_SelectBucketIndex_m431ED4A12969830AD295AD48B6DCB5080A5998E6 (void);
// 0x00000016 System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
extern void Utilities_GetMaxSizeForBucket_m68F74F23084C60F9EB82CAC4153D56349F7F622C (void);
static Il2CppMethodPointer s_methodPointers[22] = 
{
	SR_get_ResourceManager_m35089FA2396192EACA7426ACEF486AF620AA6E4C,
	SR_GetResourceString_m8149163083A77E4250A88797AA1CCDE47E24791B,
	SR_get_ArgumentException_BufferNotFromPool_m5736E93116C65F225E236DAFF2B4D10731898B7F,
	SR_get_ResourceType_mAC22AA335CB4C0DC26F42081A3EB5B6A7132BFDE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ArrayPoolEventSource__ctor_mE71F94613900A4F39DD777C5DA18ECC29DF9676E,
	ArrayPoolEventSource__cctor_mB2ECD6C70A39B23FC430E40891D234D20B05C4F0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Utilities_SelectBucketIndex_m431ED4A12969830AD295AD48B6DCB5080A5998E6,
	Utilities_GetMaxSizeForBucket_m68F74F23084C60F9EB82CAC4153D56349F7F622C,
};
static const int32_t s_InvokerIndices[22] = 
{
	5579,
	4876,
	5579,
	5579,
	0,
	0,
	0,
	0,
	0,
	0,
	3655,
	5600,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5310,
	5310,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x02000004, { 0, 5 } },
	{ 0x02000006, { 5, 11 } },
	{ 0x02000007, { 16, 2 } },
};
extern const uint32_t g_rgctx_ArrayPool_1_tB27F07E510DA3841CFF56186C845D74A72D0A78B;
extern const uint32_t g_rgctx_ArrayPool_1_EnsureSharedCreated_mA0BA76BF0721EF5C9647D11B7BC5FFB4562FBA84;
extern const uint32_t g_rgctx_ArrayPool_1_Create_m00150B7D33A8F44CC6712725D78C14E596203904;
extern const uint32_t g_rgctx_DefaultArrayPool_1_t8087FE5BC6D9C983A9A8B41415E0A354B5E1AF8D;
extern const uint32_t g_rgctx_DefaultArrayPool_1__ctor_m66225884542CA2758CB08F6B493C11151863AA3C;
extern const uint32_t g_rgctx_DefaultArrayPool_1__ctor_mB03EB293F4FB71BA26BB0DF57552F2C6D454405D;
extern const uint32_t g_rgctx_ArrayPool_1__ctor_mFAD6360F4B54D2CEE1AD4F1EE1EB2D34195CA076;
extern const uint32_t g_rgctx_ArrayPool_1_t374E87600696E8B4458CD9D85C07E1C803406572;
extern const uint32_t g_rgctx_DefaultArrayPool_1_get_Id_mC2B64D5C3469B37D2FB2BEF2394F0B85AB3A37A7;
extern const uint32_t g_rgctx_BucketU5BU5D_t4E5CF19392D3124384BC115753B9F73850D2C92B;
extern const uint32_t g_rgctx_Bucket_tCE0B164B2D99F8C21F78B7AC2EC32AB6CB9A19D5;
extern const uint32_t g_rgctx_Bucket__ctor_mD40E6D17FE2E060073104E254B7468A6AB885314;
extern const uint32_t g_rgctx_DefaultArrayPool_1_t76BC099910CEDAB9E29537CFC5E7696C5C21C9E0;
extern const uint32_t g_rgctx_TU5BU5D_tA0642CA42808CC14849384389888ECF2161BA0C9;
extern const uint32_t g_rgctx_Bucket_Rent_m513D6E31A7D520220C5B63C2BD264C8E31DAD984;
extern const uint32_t g_rgctx_Bucket_Return_m4E89C547BA4E4BF760AB37830797618F4ACB9A6A;
extern const uint32_t g_rgctx_TU5BU5DU5BU5D_t5965733165638143B0C9B08778D65289C407B872;
extern const uint32_t g_rgctx_TU5BU5D_tD42F4351BC8F33E6CEE6F26FD3957B94F7C13190;
static const Il2CppRGCTXDefinition s_rgctxValues[18] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ArrayPool_1_tB27F07E510DA3841CFF56186C845D74A72D0A78B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ArrayPool_1_EnsureSharedCreated_mA0BA76BF0721EF5C9647D11B7BC5FFB4562FBA84 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ArrayPool_1_Create_m00150B7D33A8F44CC6712725D78C14E596203904 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DefaultArrayPool_1_t8087FE5BC6D9C983A9A8B41415E0A354B5E1AF8D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultArrayPool_1__ctor_m66225884542CA2758CB08F6B493C11151863AA3C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultArrayPool_1__ctor_mB03EB293F4FB71BA26BB0DF57552F2C6D454405D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ArrayPool_1__ctor_mFAD6360F4B54D2CEE1AD4F1EE1EB2D34195CA076 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ArrayPool_1_t374E87600696E8B4458CD9D85C07E1C803406572 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultArrayPool_1_get_Id_mC2B64D5C3469B37D2FB2BEF2394F0B85AB3A37A7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_BucketU5BU5D_t4E5CF19392D3124384BC115753B9F73850D2C92B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Bucket_tCE0B164B2D99F8C21F78B7AC2EC32AB6CB9A19D5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Bucket__ctor_mD40E6D17FE2E060073104E254B7468A6AB885314 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DefaultArrayPool_1_t76BC099910CEDAB9E29537CFC5E7696C5C21C9E0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_tA0642CA42808CC14849384389888ECF2161BA0C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Bucket_Rent_m513D6E31A7D520220C5B63C2BD264C8E31DAD984 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Bucket_Return_m4E89C547BA4E4BF760AB37830797618F4ACB9A6A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5DU5BU5D_t5965733165638143B0C9B08778D65289C407B872 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_tD42F4351BC8F33E6CEE6F26FD3957B94F7C13190 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Buffers_CodeGenModule;
const Il2CppCodeGenModule g_System_Buffers_CodeGenModule = 
{
	"System.Buffers.dll",
	22,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	18,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
