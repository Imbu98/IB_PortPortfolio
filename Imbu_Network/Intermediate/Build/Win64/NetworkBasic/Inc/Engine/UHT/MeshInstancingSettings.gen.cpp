// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MeshMerge/MeshInstancingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshInstancingSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInstancingSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FMeshInstancingSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshInstancingSettings;
class UScriptStruct* FMeshInstancingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInstancingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshInstancingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInstancingSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshInstancingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshInstancingSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshInstancingSettings>()
{
	return FMeshInstancingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Mesh instance-replacement settings */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshInstancingSettings.h" },
		{ "ToolTip", "Mesh instance-replacement settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassToUse_MetaData[] = {
		{ "Category", "Instancing" },
		{ "Comment", "/** The actor class to attach new instance static mesh components to */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshInstancingSettings.h" },
		{ "ToolTip", "The actor class to attach new instance static mesh components to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceReplacementThreshold_MetaData[] = {
		{ "Category", "Instancing" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of static mesh instances needed before a mesh is replaced with an instanced version */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshInstancingSettings.h" },
		{ "ToolTip", "The number of static mesh instances needed before a mesh is replaced with an instanced version" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipMeshesWithVertexColors_MetaData[] = {
		{ "Category", "Instancing" },
		{ "Comment", "/**\n\x09 * Whether to skip the conversion to an instanced static mesh for meshes with vertex colors.\n\x09 * Instanced static meshes do not support vertex colors per-instance, so conversion will lose\n\x09 * this data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshInstancingSettings.h" },
		{ "ToolTip", "Whether to skip the conversion to an instanced static mesh for meshes with vertex colors.\nInstanced static meshes do not support vertex colors per-instance, so conversion will lose\nthis data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHLODVolumes_MetaData[] = {
		{ "Category", "Instancing" },
		{ "Comment", "/**\n\x09 * Whether split up instanced static mesh components based on their intersection with HLOD volumes\n\x09 */" },
		{ "DisplayName", "Use HLOD Volumes" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshInstancingSettings.h" },
		{ "ToolTip", "Whether split up instanced static mesh components based on their intersection with HLOD volumes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMComponentToUse_MetaData[] = {
		{ "Category", "Instancing" },
		{ "Comment", "/**\n\x09 * Whether to use the Instanced Static Mesh Compoment or the Hierarchical Instanced Static Mesh Compoment\n\x09 */" },
		{ "DisallowedClasses", "/Script/Foliage.FoliageInstancedStaticMeshComponent" },
		{ "DisplayName", "Select the type of Instanced Component" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshInstancingSettings.h" },
		{ "ToolTip", "Whether to use the Instanced Static Mesh Compoment or the Hierarchical Instanced Static Mesh Compoment" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassToUse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceReplacementThreshold;
	static void NewProp_bSkipMeshesWithVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipMeshesWithVertexColors;
	static void NewProp_bUseHLODVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHLODVolumes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ISMComponentToUse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInstancingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse = { "ActorClassToUse", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInstancingSettings, ActorClassToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClassToUse_MetaData), NewProp_ActorClassToUse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold = { "InstanceReplacementThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInstancingSettings, InstanceReplacementThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceReplacementThreshold_MetaData), NewProp_InstanceReplacementThreshold_MetaData) };
void Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_SetBit(void* Obj)
{
	((FMeshInstancingSettings*)Obj)->bSkipMeshesWithVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors = { "bSkipMeshesWithVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshInstancingSettings), &Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipMeshesWithVertexColors_MetaData), NewProp_bSkipMeshesWithVertexColors_MetaData) };
void Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_SetBit(void* Obj)
{
	((FMeshInstancingSettings*)Obj)->bUseHLODVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes = { "bUseHLODVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshInstancingSettings), &Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHLODVolumes_MetaData), NewProp_bUseHLODVolumes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ISMComponentToUse = { "ISMComponentToUse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInstancingSettings, ISMComponentToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMComponentToUse_MetaData), NewProp_ISMComponentToUse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ISMComponentToUse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MeshInstancingSettings",
	Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers),
	sizeof(FMeshInstancingSettings),
	alignof(FMeshInstancingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshInstancingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInstancingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshInstancingSettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshInstancingSettings.InnerSingleton;
}
// End ScriptStruct FMeshInstancingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshInstancingSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeshInstancingSettings::StaticStruct, Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewStructOps, TEXT("MeshInstancingSettings"), &Z_Registration_Info_UScriptStruct_MeshInstancingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshInstancingSettings), 1532924129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshInstancingSettings_h_3624633478(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshInstancingSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshInstancingSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
