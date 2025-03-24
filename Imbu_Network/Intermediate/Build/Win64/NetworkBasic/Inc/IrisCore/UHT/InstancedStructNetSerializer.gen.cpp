// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/InstancedStructNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStructNetSerializer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FInstancedStructNetSerializerConfig
static_assert(std::is_polymorphic<FInstancedStructNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FInstancedStructNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStructNetSerializerConfig;
class UScriptStruct* FInstancedStructNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStructNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStructNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("InstancedStructNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStructNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FInstancedStructNetSerializerConfig>()
{
	return FInstancedStructNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/InstancedStructNetSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedTypes_MetaData[] = {
		{ "Comment", "// The property is for serialization support. We store the supported types differently in the descriptor cache.\n" },
		{ "ModuleRelativePath", "Public/Iris/Serialization/InstancedStructNetSerializer.h" },
		{ "ToolTip", "The property is for serialization support. We store the supported types differently in the descriptor cache." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SupportedTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStructNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::NewProp_SupportedTypes_Inner = { "SupportedTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::NewProp_SupportedTypes = { "SupportedTypes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedStructNetSerializerConfig, SupportedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedTypes_MetaData), NewProp_SupportedTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::NewProp_SupportedTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::NewProp_SupportedTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"InstancedStructNetSerializerConfig",
	Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::PropPointers),
	sizeof(FInstancedStructNetSerializerConfig),
	alignof(FInstancedStructNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStructNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStructNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedStructNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FInstancedStructNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_InstancedStructNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInstancedStructNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::NewStructOps, TEXT("InstancedStructNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_InstancedStructNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStructNetSerializerConfig), 3357225784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_InstancedStructNetSerializer_h_3384608636(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_InstancedStructNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_InstancedStructNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
