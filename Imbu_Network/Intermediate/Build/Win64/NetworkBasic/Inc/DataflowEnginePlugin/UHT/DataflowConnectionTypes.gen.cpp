// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowEnginePlugin/Public/Dataflow/DataflowConnectionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowConnectionTypes() {}

// Begin Cross Module References
DATAFLOWENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionAttributeKey();
UPackage* Z_Construct_UPackage__Script_DataflowEnginePlugin();
// End Cross Module References

// Begin ScriptStruct FCollectionAttributeKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionAttributeKey;
class UScriptStruct* FCollectionAttributeKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionAttributeKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionAttributeKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionAttributeKey, (UObject*)Z_Construct_UPackage__Script_DataflowEnginePlugin(), TEXT("CollectionAttributeKey"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionAttributeKey.OuterSingleton;
}
template<> DATAFLOWENGINEPLUGIN_API UScriptStruct* StaticStruct<FCollectionAttributeKey>()
{
	return FCollectionAttributeKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowConnectionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Collection Key" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowConnectionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "Collection Key" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowConnectionTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Group;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionAttributeKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionAttributeKey, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionAttributeKey, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::NewProp_Group,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEnginePlugin,
	nullptr,
	&NewStructOps,
	"CollectionAttributeKey",
	Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::PropPointers),
	sizeof(FCollectionAttributeKey),
	alignof(FCollectionAttributeKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollectionAttributeKey()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionAttributeKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionAttributeKey.InnerSingleton, Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollectionAttributeKey.InnerSingleton;
}
// End ScriptStruct FCollectionAttributeKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowConnectionTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCollectionAttributeKey::StaticStruct, Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::NewStructOps, TEXT("CollectionAttributeKey"), &Z_Registration_Info_UScriptStruct_CollectionAttributeKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionAttributeKey), 2309444878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowConnectionTypes_h_3275355139(TEXT("/Script/DataflowEnginePlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowConnectionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowConnectionTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
