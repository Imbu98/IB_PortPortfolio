// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Components/SkeletalMeshComponentInstanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshComponentInstanceData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSkeletalMeshComponentInstanceData
static_assert(std::is_polymorphic<FSkeletalMeshComponentInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FSkeletalMeshComponentInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshComponentInstanceData;
class UScriptStruct* FSkeletalMeshComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshComponentInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshComponentInstanceData>()
{
	return FSkeletalMeshComponentInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Saves internal SkeletalMesh (transient) state that gets lost at reconstruction for Blueprint created components. */" },
		{ "ModuleRelativePath", "Private/Components/SkeletalMeshComponentInstanceData.h" },
		{ "ToolTip", "Saves internal SkeletalMesh (transient) state that gets lost at reconstruction for Blueprint created components." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshComponentInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FSceneComponentInstanceData,
	&NewStructOps,
	"SkeletalMeshComponentInstanceData",
	nullptr,
	0,
	sizeof(FSkeletalMeshComponentInstanceData),
	alignof(FSkeletalMeshComponentInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshComponentInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshComponentInstanceData.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshComponentInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Components_SkeletalMeshComponentInstanceData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkeletalMeshComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData_Statics::NewStructOps, TEXT("SkeletalMeshComponentInstanceData"), &Z_Registration_Info_UScriptStruct_SkeletalMeshComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshComponentInstanceData), 3852829921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Components_SkeletalMeshComponentInstanceData_h_1408629811(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Components_SkeletalMeshComponentInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Components_SkeletalMeshComponentInstanceData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
