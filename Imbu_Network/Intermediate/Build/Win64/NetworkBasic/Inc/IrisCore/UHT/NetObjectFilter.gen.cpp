// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectFilter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UNetObjectFilterConfig
void UNetObjectFilterConfig::StaticRegisterNativesUNetObjectFilterConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectFilterConfig);
UClass* Z_Construct_UClass_UNetObjectFilterConfig_NoRegister()
{
	return UNetObjectFilterConfig::StaticClass();
}
struct Z_Construct_UClass_UNetObjectFilterConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for filter specific configuration.\n * @see FNetObjectFilterDefinition\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ToolTip", "Base class for filter specific configuration.\n@see FNetObjectFilterDefinition" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectFilterConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectFilterConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectFilterConfig_Statics::ClassParams = {
	&UNetObjectFilterConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectFilterConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectFilterConfig()
{
	if (!Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton, Z_Construct_UClass_UNetObjectFilterConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectFilterConfig>()
{
	return UNetObjectFilterConfig::StaticClass();
}
UNetObjectFilterConfig::UNetObjectFilterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectFilterConfig);
UNetObjectFilterConfig::~UNetObjectFilterConfig() {}
// End Class UNetObjectFilterConfig

// Begin Class UNetObjectFilter
void UNetObjectFilter::StaticRegisterNativesUNetObjectFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectFilter);
UClass* Z_Construct_UClass_UNetObjectFilter_NoRegister()
{
	return UNetObjectFilter::StaticClass();
}
struct Z_Construct_UClass_UNetObjectFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectFilter_Statics::ClassParams = {
	&UNetObjectFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectFilter()
{
	if (!Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton, Z_Construct_UClass_UNetObjectFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectFilter>()
{
	return UNetObjectFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectFilter);
UNetObjectFilter::~UNetObjectFilter() {}
// End Class UNetObjectFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectFilterConfig, UNetObjectFilterConfig::StaticClass, TEXT("UNetObjectFilterConfig"), &Z_Registration_Info_UClass_UNetObjectFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectFilterConfig), 45208720U) },
		{ Z_Construct_UClass_UNetObjectFilter, UNetObjectFilter::StaticClass, TEXT("UNetObjectFilter"), &Z_Registration_Info_UClass_UNetObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectFilter), 442213051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_3156360899(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
