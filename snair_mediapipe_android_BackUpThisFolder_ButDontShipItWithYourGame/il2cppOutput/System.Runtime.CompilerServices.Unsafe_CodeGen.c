#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000002 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Byte&,T)
// 0x00000003 System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x00000004 System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_m810AA28A9EC4137C5110715EF891D57E671E3A0E (void);
// 0x00000005 T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x00000006 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x00000007 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000008 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x00000009 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x0000000A T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000000B System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x0000000C System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame(T&,T&)
// 0x0000000D System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m0ADAC9DE3EE89069011DA00E4AF296F598A6B91E (void);
static Il2CppMethodPointer s_methodPointers[13] = 
{
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlock_m810AA28A9EC4137C5110715EF891D57E671E3A0E,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m0ADAC9DE3EE89069011DA00E4AF296F598A6B91E,
};
static const int32_t s_InvokerIndices[13] = 
{
	0,
	0,
	0,
	4633,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3655,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000003, { 0, 1 } },
	{ 0x06000008, { 1, 1 } },
	{ 0x06000009, { 2, 1 } },
};
extern const uint32_t g_rgctx_T_t09D32D3BE99B8664D9FD46B148710486A42ABCA5;
extern const uint32_t g_rgctx_T_t0751EA185D309022CCF4CB3F8B442D74ECBF47AB;
extern const uint32_t g_rgctx_T_t4F225CF7BE98D9ABD2BF4216CC897B8665745ED5;
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t09D32D3BE99B8664D9FD46B148710486A42ABCA5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t0751EA185D309022CCF4CB3F8B442D74ECBF47AB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t4F225CF7BE98D9ABD2BF4216CC897B8665745ED5 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	13,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
