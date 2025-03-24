// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraNodeEvaluatorFwd.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraNodeEvaluatorFwd() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FCameraNodeEvaluatorAllocationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraNodeEvaluatorAllocationInfo;
class UScriptStruct* FCameraNodeEvaluatorAllocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraNodeEvaluatorAllocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraNodeEvaluatorAllocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraNodeEvaluatorAllocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CameraNodeEvaluatorAllocationInfo.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraNodeEvaluatorAllocationInfo>()
{
	return FCameraNodeEvaluatorAllocationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Allocation information for an entire tree of node evaluators. */" },
		{ "ModuleRelativePath", "Public/Core/CameraNodeEvaluatorFwd.h" },
		{ "ToolTip", "Allocation information for an entire tree of node evaluators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalSizeof_MetaData[] = {
		{ "Comment", "/** Total required size for the node evaluators. */" },
		{ "ModuleRelativePath", "Public/Core/CameraNodeEvaluatorFwd.h" },
		{ "ToolTip", "Total required size for the node evaluators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAlignof_MetaData[] = {
		{ "Comment", "/** Maximum required alignment for the node evaluators. */" },
		{ "ModuleRelativePath", "Public/Core/CameraNodeEvaluatorFwd.h" },
		{ "ToolTip", "Maximum required alignment for the node evaluators." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt16PropertyParams NewProp_TotalSizeof;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_MaxAlignof;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraNodeEvaluatorAllocationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::NewProp_TotalSizeof = { "TotalSizeof", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraNodeEvaluatorAllocationInfo, TotalSizeof), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalSizeof_MetaData), NewProp_TotalSizeof_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::NewProp_MaxAlignof = { "MaxAlignof", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraNodeEvaluatorAllocationInfo, MaxAlignof), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAlignof_MetaData), NewProp_MaxAlignof_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::NewProp_TotalSizeof,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::NewProp_MaxAlignof,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraNodeEvaluatorAllocationInfo",
	Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::PropPointers),
	sizeof(FCameraNodeEvaluatorAllocationInfo),
	alignof(FCameraNodeEvaluatorAllocationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CameraNodeEvaluatorAllocationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraNodeEvaluatorAllocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraNodeEvaluatorAllocationInfo.InnerSingleton;
}
// End ScriptStruct FCameraNodeEvaluatorAllocationInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNodeEvaluatorFwd_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraNodeEvaluatorAllocationInfo::StaticStruct, Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::NewStructOps, TEXT("CameraNodeEvaluatorAllocationInfo"), &Z_Registration_Info_UScriptStruct_CameraNodeEvaluatorAllocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraNodeEvaluatorAllocationInfo), 3301974227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNodeEvaluatorFwd_h_3564949929(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNodeEvaluatorFwd_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNodeEvaluatorFwd_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
