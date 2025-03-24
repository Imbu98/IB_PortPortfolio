// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Engine/Public/Dataflow/DataflowPreview.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowPreview() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
DATAFLOWENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowPreviewCacheParams();
UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References

// Begin ScriptStruct FDataflowPreviewCacheParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowPreviewCacheParams;
class UScriptStruct* FDataflowPreviewCacheParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowPreviewCacheParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowPreviewCacheParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPreviewCacheParams, (UObject*)Z_Construct_UPackage__Script_DataflowEngine(), TEXT("DataflowPreviewCacheParams"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowPreviewCacheParams.OuterSingleton;
}
template<> DATAFLOWENGINE_API UScriptStruct* StaticStruct<FDataflowPreviewCacheParams>()
{
	return FDataflowPreviewCacheParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Number of sampling frames per second for caching*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowPreview.h" },
		{ "ToolTip", "Number of sampling frames per second for caching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeRange_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Number of sampling frames per second for caching*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowPreview.h" },
		{ "ToolTip", "Number of sampling frames per second for caching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAsyncCaching_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Boolean to check if the caching will be done on an async thread (if yes no GT dependency) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowPreview.h" },
		{ "ToolTip", "Boolean to check if the caching will be done on an async thread (if yes no GT dependency)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeRange;
	static void NewProp_bAsyncCaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsyncCaching;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowPreviewCacheParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowPreviewCacheParams, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::NewProp_TimeRange = { "TimeRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowPreviewCacheParams, TimeRange), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeRange_MetaData), NewProp_TimeRange_MetaData) };
void Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::NewProp_bAsyncCaching_SetBit(void* Obj)
{
	((FDataflowPreviewCacheParams*)Obj)->bAsyncCaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::NewProp_bAsyncCaching = { "bAsyncCaching", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataflowPreviewCacheParams), &Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::NewProp_bAsyncCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAsyncCaching_MetaData), NewProp_bAsyncCaching_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::NewProp_TimeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::NewProp_bAsyncCaching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
	nullptr,
	&NewStructOps,
	"DataflowPreviewCacheParams",
	Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::PropPointers),
	sizeof(FDataflowPreviewCacheParams),
	alignof(FDataflowPreviewCacheParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowPreviewCacheParams()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowPreviewCacheParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowPreviewCacheParams.InnerSingleton, Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowPreviewCacheParams.InnerSingleton;
}
// End ScriptStruct FDataflowPreviewCacheParams

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowPreview_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowPreviewCacheParams::StaticStruct, Z_Construct_UScriptStruct_FDataflowPreviewCacheParams_Statics::NewStructOps, TEXT("DataflowPreviewCacheParams"), &Z_Registration_Info_UScriptStruct_DataflowPreviewCacheParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowPreviewCacheParams), 1085714360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowPreview_h_2189507984(TEXT("/Script/DataflowEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowPreview_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowPreview_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
