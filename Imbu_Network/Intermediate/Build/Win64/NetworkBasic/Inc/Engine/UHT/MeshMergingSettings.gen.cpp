// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MeshMerge/MeshMergingSettings.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMergingSettings() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshLODSelectionType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshMergeType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EUVOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMeshLODSelectionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshLODSelectionType;
static UEnum* EMeshLODSelectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshLODSelectionType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshLODSelectionType"));
	}
	return Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMeshLODSelectionType>()
{
	return EMeshLODSelectionType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllLODs.Comment", "// Whether or not to export all of the LODs found in the source meshes\n" },
		{ "AllLODs.DisplayName", "Use all LOD levels" },
		{ "AllLODs.Name", "EMeshLODSelectionType::AllLODs" },
		{ "AllLODs.ToolTip", "Whether or not to export all of the LODs found in the source meshes" },
		{ "CalculateLOD.Comment", "// Whether or not to calculate the appropriate LOD model for the given screen size\n" },
		{ "CalculateLOD.DisplayName", "Calculate correct LOD level" },
		{ "CalculateLOD.Name", "EMeshLODSelectionType::CalculateLOD" },
		{ "CalculateLOD.ToolTip", "Whether or not to calculate the appropriate LOD model for the given screen size" },
		{ "LowestDetailLOD.Comment", "// Whether or not to use the lowest-detail LOD\n" },
		{ "LowestDetailLOD.DisplayName", "Always use the lowest-detail LOD (i.e. the highest LOD index)" },
		{ "LowestDetailLOD.Name", "EMeshLODSelectionType::LowestDetailLOD" },
		{ "LowestDetailLOD.ToolTip", "Whether or not to use the lowest-detail LOD" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "SpecificLOD.Comment", "// Whether or not to export all of the LODs found in the source meshes\n" },
		{ "SpecificLOD.DisplayName", "Use specific LOD level" },
		{ "SpecificLOD.Name", "EMeshLODSelectionType::SpecificLOD" },
		{ "SpecificLOD.ToolTip", "Whether or not to export all of the LODs found in the source meshes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshLODSelectionType::AllLODs", (int64)EMeshLODSelectionType::AllLODs },
		{ "EMeshLODSelectionType::SpecificLOD", (int64)EMeshLODSelectionType::SpecificLOD },
		{ "EMeshLODSelectionType::CalculateLOD", (int64)EMeshLODSelectionType::CalculateLOD },
		{ "EMeshLODSelectionType::LowestDetailLOD", (int64)EMeshLODSelectionType::LowestDetailLOD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMeshLODSelectionType",
	"EMeshLODSelectionType",
	Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMeshLODSelectionType()
{
	if (!Z_Registration_Info_UEnum_EMeshLODSelectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshLODSelectionType.InnerSingleton, Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshLODSelectionType.InnerSingleton;
}
// End Enum EMeshLODSelectionType

// Begin Enum EMeshMergeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshMergeType;
static UEnum* EMeshMergeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshMergeType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshMergeType"));
	}
	return Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMeshMergeType>()
{
	return EMeshMergeType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMeshMergeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MeshMergeType_Default.Name", "EMeshMergeType::MeshMergeType_Default" },
		{ "MeshMergeType_MergeActor.Name", "EMeshMergeType::MeshMergeType_MergeActor" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshMergeType::MeshMergeType_Default", (int64)EMeshMergeType::MeshMergeType_Default },
		{ "EMeshMergeType::MeshMergeType_MergeActor", (int64)EMeshMergeType::MeshMergeType_MergeActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshMergeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMeshMergeType",
	"EMeshMergeType",
	Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMeshMergeType()
{
	if (!Z_Registration_Info_UEnum_EMeshMergeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshMergeType.InnerSingleton, Z_Construct_UEnum_Engine_EMeshMergeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshMergeType.InnerSingleton;
}
// End Enum EMeshMergeType

// Begin Enum EUVOutput
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVOutput;
static UEnum* EUVOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUVOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUVOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EUVOutput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EUVOutput"));
	}
	return Z_Registration_Info_UEnum_EUVOutput.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EUVOutput>()
{
	return EUVOutput_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EUVOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** As UHT doesnt allow arrays of bools, we need this binary enum :( */" },
		{ "DoNotOutputChannel.Name", "EUVOutput::DoNotOutputChannel" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "OutputChannel.Name", "EUVOutput::OutputChannel" },
		{ "ToolTip", "As UHT doesnt allow arrays of bools, we need this binary enum :(" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUVOutput::DoNotOutputChannel", (int64)EUVOutput::DoNotOutputChannel },
		{ "EUVOutput::OutputChannel", (int64)EUVOutput::OutputChannel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EUVOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EUVOutput",
	"EUVOutput",
	Z_Construct_UEnum_Engine_EUVOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EUVOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EUVOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EUVOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EUVOutput()
{
	if (!Z_Registration_Info_UEnum_EUVOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVOutput.InnerSingleton, Z_Construct_UEnum_Engine_EUVOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUVOutput.InnerSingleton;
}
// End Enum EUVOutput

// Begin ScriptStruct FMeshMergingSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshMergingSettings;
class UScriptStruct* FMeshMergingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshMergingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshMergingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshMergingSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshMergingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshMergingSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshMergingSettings>()
{
	return FMeshMergingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshMergingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Mesh merging settings\n*/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Mesh merging settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLightMapResolution_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMax", "4096" },
		{ "Comment", "/** The lightmap resolution used both for generating lightmap UV coordinates, and also set on the generated static mesh */" },
		{ "DisplayAfter", "bGenerateLightMapUV" },
		{ "DisplayName", "Target Lightmap Resolution" },
		{ "EditCondition", "!bComputedLightMapResolution" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "The lightmap resolution used both for generating lightmap UV coordinates, and also set on the generated static mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputUVs_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to output the specified UV channels into the merged mesh (only if the source meshes contain valid UVs for the specified channel) */" },
		{ "DisplayAfter", "bBakeVertexDataToMesh" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether to output the specified UV channels into the merged mesh (only if the source meshes contain valid UVs for the specified channel)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Material simplification */" },
		{ "DisplayAfter", "bMergeMaterials" },
		{ "EditCondition", "bMergeMaterials" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Material simplification" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GutterSize_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** The gutter (in texels) to add to each sub-chart for our baked-out material for the top mip level */" },
		{ "DisplayAfter", "MaterialSettings" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "The gutter (in texels) to add to each sub-chart for our baked-out material for the top mip level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODSelectionType_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Which selection mode should be used when generating the merged static mesh */" },
		{ "DisplayAfter", "bBakeVertexDataToMesh" },
		{ "DisplayName", "LOD Selection Type" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Which selection mode should be used when generating the merged static mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificLOD_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A given LOD level to export from the source meshes, used if LOD Selection Type is set to SpecificLOD */" },
		{ "DisplayAfter", "LODSelectionType" },
		{ "EditCondition", "LODSelectionType == EMeshLODSelectionType::SpecificLOD" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "A given LOD level to export from the source meshes, used if LOD Selection Type is set to SpecificLOD" },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightMapUV_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to generate lightmap UVs for a merged mesh*/" },
		{ "DisplayName", "Generate Lightmap UV" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether to generate lightmap UVs for a merged mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputedLightMapResolution_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether or not the lightmap resolution should be computed by summing the lightmap resolutions for the input Mesh Components */" },
		{ "DisplayName", "Computed Lightmap Resolution" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether or not the lightmap resolution should be computed by summing the lightmap resolutions for the input Mesh Components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPivotPointAtZero_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether merged mesh should have pivot at world origin, or at first merged component otherwise */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether merged mesh should have pivot at world origin, or at first merged component otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergePhysicsData_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to merge physics data (collision primitives)*/" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether to merge physics data (collision primitives)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMeshSockets_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to merge sockets */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether to merge sockets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMaterials_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether to merge source materials into one flat material, ONLY available when LOD Selection Type is set to LowestDetailLOD */" },
		{ "EditCondition", "LODSelectionType == EMeshLODSelectionType::LowestDetailLOD || LODSelectionType == EMeshLODSelectionType::SpecificLOD" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether to merge source materials into one flat material, ONLY available when LOD Selection Type is set to LowestDetailLOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeVertexDataToMesh_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether or not vertex data such as vertex colours should be baked into the resulting mesh */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether or not vertex data such as vertex colours should be baked into the resulting mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVertexDataForBakingMaterial_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether or not vertex data such as vertex colours should be used when baking out materials */" },
		{ "EditCondition", "bMergeMaterials" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether or not vertex data such as vertex colours should be used when baking out materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTextureBinning_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether or not to calculate varying output texture sizes according to their importance in the final atlas texture */" },
		{ "EditCondition", "bMergeMaterials" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether or not to calculate varying output texture sizes according to their importance in the final atlas texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReuseMeshLightmapUVs_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeEquivalentMaterials_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether to attempt to merge materials that are deemed equivalent. This can cause artifacts in the merged mesh if world position/actor position etc. is used to determine output color. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether to attempt to merge materials that are deemed equivalent. This can cause artifacts in the merged mesh if world position/actor position etc. is used to determine output color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeCulling_MetaData[] = {
		{ "Category", "LandscapeCulling" },
		{ "Comment", "/** Whether or not to use available landscape geometry to cull away invisible triangles */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether or not to use available landscape geometry to cull away invisible triangles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeImposters_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether or not to include any imposter LODs that are part of the source static meshes */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether or not to include any imposter LODs that are part of the source static meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDistanceField_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[] = {
		{ "Category", "NaniteSettings" },
		{ "Comment", "/** Settings related to building Nanite data. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
		{ "ToolTip", "Settings related to building Nanite data." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateCorrectLODModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportNormalMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMetallicMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportRoughnessMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportSpecularMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMergedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergedMaterialAtlasResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportSpecificLOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNaniteEnabledMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteFallbackTrianglePercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshMergingSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetLightMapResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputUVs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputUVs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GutterSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LODSelectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LODSelectionType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpecificLOD;
	static void NewProp_bGenerateLightMapUV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightMapUV;
	static void NewProp_bComputedLightMapResolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputedLightMapResolution;
	static void NewProp_bPivotPointAtZero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotPointAtZero;
	static void NewProp_bMergePhysicsData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergePhysicsData;
	static void NewProp_bMergeMeshSockets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMeshSockets;
	static void NewProp_bMergeMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMaterials;
	static void NewProp_bBakeVertexDataToMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeVertexDataToMesh;
	static void NewProp_bUseVertexDataForBakingMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVertexDataForBakingMaterial;
	static void NewProp_bUseTextureBinning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTextureBinning;
	static void NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseMeshLightmapUVs;
	static void NewProp_bMergeEquivalentMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeEquivalentMaterials;
	static void NewProp_bUseLandscapeCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeCulling;
	static void NewProp_bIncludeImposters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeImposters;
	static void NewProp_bSupportRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
	static void NewProp_bAllowDistanceField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDistanceField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
#if WITH_EDITORONLY_DATA
	static void NewProp_bImportVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVertexColors;
	static void NewProp_bCalculateCorrectLODModel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateCorrectLODModel;
	static void NewProp_bExportNormalMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportNormalMap;
	static void NewProp_bExportMetallicMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMetallicMap;
	static void NewProp_bExportRoughnessMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportRoughnessMap;
	static void NewProp_bExportSpecularMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSpecularMap;
	static void NewProp_bCreateMergedMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMergedMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MergedMaterialAtlasResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExportSpecificLOD;
	static void NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNaniteEnabledMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteFallbackTrianglePercent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshMergingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution = { "TargetLightMapResolution", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshMergingSettings, TargetLightMapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLightMapResolution_MetaData), NewProp_TargetLightMapResolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs = { "OutputUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(OutputUVs, FMeshMergingSettings), STRUCT_OFFSET(FMeshMergingSettings, OutputUVs), Z_Construct_UEnum_Engine_EUVOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputUVs_MetaData), NewProp_OutputUVs_MetaData) }; // 277265232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshMergingSettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSettings_MetaData), NewProp_MaterialSettings_MetaData) }; // 2102831604
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize = { "GutterSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshMergingSettings, GutterSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GutterSize_MetaData), NewProp_GutterSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType = { "LODSelectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshMergingSettings, LODSelectionType), Z_Construct_UEnum_Engine_EMeshLODSelectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODSelectionType_MetaData), NewProp_LODSelectionType_MetaData) }; // 3105315292
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD = { "SpecificLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshMergingSettings, SpecificLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificLOD_MetaData), NewProp_SpecificLOD_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bGenerateLightMapUV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV = { "bGenerateLightMapUV", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateLightMapUV_MetaData), NewProp_bGenerateLightMapUV_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bComputedLightMapResolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution = { "bComputedLightMapResolution", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputedLightMapResolution_MetaData), NewProp_bComputedLightMapResolution_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bPivotPointAtZero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero = { "bPivotPointAtZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPivotPointAtZero_MetaData), NewProp_bPivotPointAtZero_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bMergePhysicsData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData = { "bMergePhysicsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergePhysicsData_MetaData), NewProp_bMergePhysicsData_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bMergeMeshSockets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets = { "bMergeMeshSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeMeshSockets_MetaData), NewProp_bMergeMeshSockets_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bMergeMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials = { "bMergeMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeMaterials_MetaData), NewProp_bMergeMaterials_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bBakeVertexDataToMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh = { "bBakeVertexDataToMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeVertexDataToMesh_MetaData), NewProp_bBakeVertexDataToMesh_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bUseVertexDataForBakingMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial = { "bUseVertexDataForBakingMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVertexDataForBakingMaterial_MetaData), NewProp_bUseVertexDataForBakingMaterial_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bUseTextureBinning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning = { "bUseTextureBinning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTextureBinning_MetaData), NewProp_bUseTextureBinning_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bReuseMeshLightmapUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs = { "bReuseMeshLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReuseMeshLightmapUVs_MetaData), NewProp_bReuseMeshLightmapUVs_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bMergeEquivalentMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials = { "bMergeEquivalentMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeEquivalentMaterials_MetaData), NewProp_bMergeEquivalentMaterials_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bUseLandscapeCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling = { "bUseLandscapeCulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLandscapeCulling_MetaData), NewProp_bUseLandscapeCulling_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bIncludeImposters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters = { "bIncludeImposters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeImposters_MetaData), NewProp_bIncludeImposters_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bSupportRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportRayTracing_MetaData), NewProp_bSupportRayTracing_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bAllowDistanceField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField = { "bAllowDistanceField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDistanceField_MetaData), NewProp_bAllowDistanceField_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshMergingSettings, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteSettings_MetaData), NewProp_NaniteSettings_MetaData) }; // 1518774984
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bImportVertexColors_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors = { "bImportVertexColors", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportVertexColors_MetaData), NewProp_bImportVertexColors_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bCalculateCorrectLODModel_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel = { "bCalculateCorrectLODModel", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCalculateCorrectLODModel_MetaData), NewProp_bCalculateCorrectLODModel_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bExportNormalMap_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap = { "bExportNormalMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportNormalMap_MetaData), NewProp_bExportNormalMap_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bExportMetallicMap_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap = { "bExportMetallicMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMetallicMap_MetaData), NewProp_bExportMetallicMap_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bExportRoughnessMap_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap = { "bExportRoughnessMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportRoughnessMap_MetaData), NewProp_bExportRoughnessMap_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bExportSpecularMap_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap = { "bExportSpecularMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportSpecularMap_MetaData), NewProp_bExportSpecularMap_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bCreateMergedMaterial_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial = { "bCreateMergedMaterial", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMergedMaterial_MetaData), NewProp_bCreateMergedMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution = { "MergedMaterialAtlasResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshMergingSettings, MergedMaterialAtlasResolution_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergedMaterialAtlasResolution_MetaData), NewProp_MergedMaterialAtlasResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD = { "ExportSpecificLOD", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshMergingSettings, ExportSpecificLOD_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportSpecificLOD_MetaData), NewProp_ExportSpecificLOD_MetaData) };
void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj)
{
	((FMeshMergingSettings*)Obj)->bGenerateNaniteEnabledMesh_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh = { "bGenerateNaniteEnabledMesh", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateNaniteEnabledMesh_MetaData), NewProp_bGenerateNaniteEnabledMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteFallbackTrianglePercent = { "NaniteFallbackTrianglePercent", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshMergingSettings, NaniteFallbackTrianglePercent_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteFallbackTrianglePercent_MetaData), NewProp_NaniteFallbackTrianglePercent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteSettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteFallbackTrianglePercent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MeshMergingSettings",
	Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers),
	sizeof(FMeshMergingSettings),
	alignof(FMeshMergingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MeshMergingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshMergingSettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshMergingSettings.InnerSingleton;
}
// End ScriptStruct FMeshMergingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshLODSelectionType_StaticEnum, TEXT("EMeshLODSelectionType"), &Z_Registration_Info_UEnum_EMeshLODSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3105315292U) },
		{ EMeshMergeType_StaticEnum, TEXT("EMeshMergeType"), &Z_Registration_Info_UEnum_EMeshMergeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2516279402U) },
		{ EUVOutput_StaticEnum, TEXT("EUVOutput"), &Z_Registration_Info_UEnum_EUVOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 277265232U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeshMergingSettings::StaticStruct, Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewStructOps, TEXT("MeshMergingSettings"), &Z_Registration_Info_UScriptStruct_MeshMergingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshMergingSettings), 779269260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h_2527662420(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
