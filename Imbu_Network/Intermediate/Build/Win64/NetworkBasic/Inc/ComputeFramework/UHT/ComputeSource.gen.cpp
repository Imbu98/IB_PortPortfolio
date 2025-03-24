// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeSource() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References

// Begin Class UComputeSource
void UComputeSource::StaticRegisterNativesUComputeSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeSource);
UClass* Z_Construct_UClass_UComputeSource_NoRegister()
{
	return UComputeSource::StaticClass();
}
struct Z_Construct_UClass_UComputeSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Class representing some source for inclusion in a UComputeKernel.\n * We derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)\n */" },
		{ "IncludePath", "ComputeFramework/ComputeSource.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeSource.h" },
		{ "ToolTip", "Class representing some source for inclusion in a UComputeKernel.\nWe derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSources_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Array of additional source objects. This allows us to specify source dependencies. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeSource.h" },
		{ "ToolTip", "Array of additional source objects. This allows us to specify source dependencies." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalSources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSources;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources_Inner = { "AdditionalSources", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComputeSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources = { "AdditionalSources", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeSource, AdditionalSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSources_MetaData), NewProp_AdditionalSources_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComputeSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeSource_Statics::ClassParams = {
	&UComputeSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UComputeSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSource_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UComputeSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComputeSource()
{
	if (!Z_Registration_Info_UClass_UComputeSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeSource.OuterSingleton, Z_Construct_UClass_UComputeSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComputeSource.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeSource>()
{
	return UComputeSource::StaticClass();
}
UComputeSource::UComputeSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeSource);
UComputeSource::~UComputeSource() {}
// End Class UComputeSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComputeSource, UComputeSource::StaticClass, TEXT("UComputeSource"), &Z_Registration_Info_UClass_UComputeSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeSource), 2098676334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_3995303401(TEXT("/Script/ComputeFramework"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
