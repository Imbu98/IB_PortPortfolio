// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/WorldLocations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldLocations() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
IRISCORE_API UClass* Z_Construct_UClass_UWorldLocationsConfig();
IRISCORE_API UClass* Z_Construct_UClass_UWorldLocationsConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UWorldLocationsConfig
void UWorldLocationsConfig::StaticRegisterNativesUWorldLocationsConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldLocationsConfig);
UClass* Z_Construct_UClass_UWorldLocationsConfig_NoRegister()
{
	return UWorldLocationsConfig::StaticClass();
}
struct Z_Construct_UClass_UWorldLocationsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Common settings used to configure how the GridFilter behaves\n*/" },
		{ "IncludePath", "Iris/ReplicationSystem/WorldLocations.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/WorldLocations.h" },
		{ "ToolTip", "Common settings used to configure how the GridFilter behaves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPos_MetaData[] = {
		{ "Comment", "/** All world positions will be clamped to MinPos and MaxPos. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/WorldLocations.h" },
		{ "ToolTip", "All world positions will be clamped to MinPos and MaxPos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPos_MetaData[] = {
		{ "Comment", "/** All world positions will be clamped to MinPos and MaxPos. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/WorldLocations.h" },
		{ "ToolTip", "All world positions will be clamped to MinPos and MaxPos." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldLocationsConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldLocationsConfig_Statics::NewProp_MinPos = { "MinPos", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldLocationsConfig, MinPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPos_MetaData), NewProp_MinPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldLocationsConfig_Statics::NewProp_MaxPos = { "MaxPos", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldLocationsConfig, MaxPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPos_MetaData), NewProp_MaxPos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldLocationsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldLocationsConfig_Statics::NewProp_MinPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldLocationsConfig_Statics::NewProp_MaxPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldLocationsConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldLocationsConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldLocationsConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldLocationsConfig_Statics::ClassParams = {
	&UWorldLocationsConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldLocationsConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldLocationsConfig_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldLocationsConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldLocationsConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldLocationsConfig()
{
	if (!Z_Registration_Info_UClass_UWorldLocationsConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldLocationsConfig.OuterSingleton, Z_Construct_UClass_UWorldLocationsConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldLocationsConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UWorldLocationsConfig>()
{
	return UWorldLocationsConfig::StaticClass();
}
UWorldLocationsConfig::UWorldLocationsConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldLocationsConfig);
UWorldLocationsConfig::~UWorldLocationsConfig() {}
// End Class UWorldLocationsConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldLocationsConfig, UWorldLocationsConfig::StaticClass, TEXT("UWorldLocationsConfig"), &Z_Registration_Info_UClass_UWorldLocationsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldLocationsConfig), 1929594899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_2636580627(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_WorldLocations_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
