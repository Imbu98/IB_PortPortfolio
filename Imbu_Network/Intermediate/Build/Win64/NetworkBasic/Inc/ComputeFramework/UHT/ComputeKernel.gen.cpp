// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeKernel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernel() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernel();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernel_NoRegister();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSource_NoRegister();
COMPUTEFRAMEWORK_API UEnum* Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References

// Begin Enum EComputeKernelFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComputeKernelFlags;
static UEnum* EComputeKernelFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EComputeKernelFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EComputeKernelFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("EComputeKernelFlags"));
	}
	return Z_Registration_Info_UEnum_EComputeKernelFlags.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EComputeKernelFlags>()
{
	return EComputeKernelFlags_StaticEnum();
}
struct Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Comment", "/** Flags that convey kernel behavior to aid compilation/optimizations. */" },
		{ "IsDefaultKernel.Comment", "/*\n\x09 * Default implies that this kernel must be compiled before the system is functional.\n\x09 * It also implies that this will be compiled synchronously. Other than a pass\n\x09 * through kernel, default shouldn't be used.\n\x09 */" },
		{ "IsDefaultKernel.Name", "EComputeKernelFlags::IsDefaultKernel" },
		{ "IsDefaultKernel.ToolTip", "* Default implies that this kernel must be compiled before the system is functional.\n* It also implies that this will be compiled synchronously. Other than a pass\n* through kernel, default shouldn't be used." },
		{ "IsolatedMemoryWrites.Comment", "/*\n\x09 * Promise from the author that all memory writes will be unique per shader\n\x09 * dispatch thread. i.e. ThreadX will be the only thread to write to MemoryY,\n\x09 * thus no synchronization is necessary by the compute graph.\n\x09 */" },
		{ "IsolatedMemoryWrites.Name", "EComputeKernelFlags::IsolatedMemoryWrites" },
		{ "IsolatedMemoryWrites.ToolTip", "* Promise from the author that all memory writes will be unique per shader\n* dispatch thread. i.e. ThreadX will be the only thread to write to MemoryY,\n* thus no synchronization is necessary by the compute graph." },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernel.h" },
		{ "ToolTip", "Flags that convey kernel behavior to aid compilation/optimizations." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EComputeKernelFlags::IsDefaultKernel", (int64)EComputeKernelFlags::IsDefaultKernel },
		{ "EComputeKernelFlags::IsolatedMemoryWrites", (int64)EComputeKernelFlags::IsolatedMemoryWrites },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	"EComputeKernelFlags",
	"EComputeKernelFlags",
	Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags()
{
	if (!Z_Registration_Info_UEnum_EComputeKernelFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComputeKernelFlags.InnerSingleton, Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EComputeKernelFlags.InnerSingleton;
}
// End Enum EComputeKernelFlags

// Begin Class UComputeKernel
void UComputeKernel::StaticRegisterNativesUComputeKernel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeKernel);
UClass* Z_Construct_UClass_UComputeKernel_NoRegister()
{
	return UComputeKernel::StaticClass();
}
struct Z_Construct_UClass_UComputeKernel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base class representing a kernel that will be run as a shader on the GPU. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ComputeFramework/ComputeKernel.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernel.h" },
		{ "ToolTip", "Base class representing a kernel that will be run as a shader on the GPU." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelSource_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** \n\x09 * The compute kernel source asset.\n\x09 * A kernel's source may be authored by different mechanisms; e.g. HLSL text, VPL graph, ML Meta Lang, etc\n\x09 */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernel.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The compute kernel source asset.\nA kernel's source may be authored by different mechanisms; e.g. HLSL text, VPL graph, ML Meta Lang, etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ComputeFramework.EComputeKernelFlags" },
		{ "Category", "Kernel" },
		{ "Comment", "/** Specifying certain memory access flags allows for optimizations such as kernel fusing. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernel.h" },
		{ "ToolTip", "Specifying certain memory access flags allows for optimizations such as kernel fusing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KernelSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KernelFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeKernel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComputeKernel_Statics::NewProp_KernelSource = { "KernelSource", nullptr, (EPropertyFlags)0x0114010000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeKernel, KernelSource), Z_Construct_UClass_UComputeKernelSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelSource_MetaData), NewProp_KernelSource_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UComputeKernel_Statics::NewProp_KernelFlags = { "KernelFlags", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeKernel, KernelFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelFlags_MetaData), NewProp_KernelFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeKernel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernel_Statics::NewProp_KernelSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernel_Statics::NewProp_KernelFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComputeKernel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeKernel_Statics::ClassParams = {
	&UComputeKernel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UComputeKernel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernel_Statics::Class_MetaDataParams), Z_Construct_UClass_UComputeKernel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComputeKernel()
{
	if (!Z_Registration_Info_UClass_UComputeKernel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeKernel.OuterSingleton, Z_Construct_UClass_UComputeKernel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComputeKernel.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeKernel>()
{
	return UComputeKernel::StaticClass();
}
UComputeKernel::UComputeKernel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeKernel);
UComputeKernel::~UComputeKernel() {}
// End Class UComputeKernel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EComputeKernelFlags_StaticEnum, TEXT("EComputeKernelFlags"), &Z_Registration_Info_UEnum_EComputeKernelFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 278020653U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComputeKernel, UComputeKernel::StaticClass, TEXT("UComputeKernel"), &Z_Registration_Info_UClass_UComputeKernel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeKernel), 3585536567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_517161619(TEXT("/Script/ComputeFramework"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
