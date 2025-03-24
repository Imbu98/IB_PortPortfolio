// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/StringNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNameAsNetTokenNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNameNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStringNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FNameNetSerializerConfig
static_assert(std::is_polymorphic<FNameNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FNameNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameNetSerializerConfig;
class UScriptStruct* FNameNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NameNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNameNetSerializerConfig>()
{
	return FNameNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/StringNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"NameNetSerializerConfig",
	nullptr,
	0,
	sizeof(FNameNetSerializerConfig),
	alignof(FNameNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNameNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FNameNetSerializerConfig

// Begin ScriptStruct FNameAsNetTokenNetSerializerConfig
static_assert(std::is_polymorphic<FNameAsNetTokenNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FNameAsNetTokenNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameAsNetTokenNetSerializerConfig;
class UScriptStruct* FNameAsNetTokenNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameAsNetTokenNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameAsNetTokenNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameAsNetTokenNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NameAsNetTokenNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NameAsNetTokenNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNameAsNetTokenNetSerializerConfig>()
{
	return FNameAsNetTokenNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNameAsNetTokenNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/StringNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameAsNetTokenNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameAsNetTokenNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"NameAsNetTokenNetSerializerConfig",
	nullptr,
	0,
	sizeof(FNameAsNetTokenNetSerializerConfig),
	alignof(FNameAsNetTokenNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameAsNetTokenNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameAsNetTokenNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNameAsNetTokenNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_NameAsNetTokenNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameAsNetTokenNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FNameAsNetTokenNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NameAsNetTokenNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FNameAsNetTokenNetSerializerConfig

// Begin ScriptStruct FStringNetSerializerConfig
static_assert(std::is_polymorphic<FStringNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FStringNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringNetSerializerConfig;
class UScriptStruct* FStringNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("StringNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FStringNetSerializerConfig>()
{
	return FStringNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/StringNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"StringNetSerializerConfig",
	nullptr,
	0,
	sizeof(FStringNetSerializerConfig),
	alignof(FStringNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStringNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FStringNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_StringNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNameNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::NewStructOps, TEXT("NameNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_NameNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameNetSerializerConfig), 2316589365U) },
		{ FNameAsNetTokenNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FNameAsNetTokenNetSerializerConfig_Statics::NewStructOps, TEXT("NameAsNetTokenNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_NameAsNetTokenNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameAsNetTokenNetSerializerConfig), 3766506673U) },
		{ FStringNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::NewStructOps, TEXT("StringNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_StringNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringNetSerializerConfig), 1820163507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_StringNetSerializers_h_56207039(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_StringNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_StringNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
