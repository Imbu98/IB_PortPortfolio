// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MeshMerge/MeshProxySettings.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshProxySettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELandscapeCullingPrecision();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EProxyNormalComputationMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ELandscapeCullingPrecision
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeCullingPrecision;
static UEnum* ELandscapeCullingPrecision_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELandscapeCullingPrecision"));
	}
	return Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELandscapeCullingPrecision::Type>()
{
	return ELandscapeCullingPrecision_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "High.DisplayName", "High memory intensity and computation time" },
		{ "High.Name", "ELandscapeCullingPrecision::High" },
		{ "Low.DisplayName", "Low memory intensity and computation time" },
		{ "Low.Name", "ELandscapeCullingPrecision::Low" },
		{ "Medium.DisplayName", "Medium memory intensity and computation time" },
		{ "Medium.Name", "ELandscapeCullingPrecision::Medium" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeCullingPrecision::High", (int64)ELandscapeCullingPrecision::High },
		{ "ELandscapeCullingPrecision::Medium", (int64)ELandscapeCullingPrecision::Medium },
		{ "ELandscapeCullingPrecision::Low", (int64)ELandscapeCullingPrecision::Low },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELandscapeCullingPrecision",
	"ELandscapeCullingPrecision::Type",
	Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELandscapeCullingPrecision()
{
	if (!Z_Registration_Info_UEnum_ELandscapeCullingPrecision.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeCullingPrecision.InnerSingleton, Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeCullingPrecision.InnerSingleton;
}
// End Enum ELandscapeCullingPrecision

// Begin Enum EProxyNormalComputationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProxyNormalComputationMethod;
static UEnum* EProxyNormalComputationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EProxyNormalComputationMethod"));
	}
	return Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EProxyNormalComputationMethod::Type>()
{
	return EProxyNormalComputationMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AngleWeighted.DisplayName", "Angle Weighted" },
		{ "AngleWeighted.Name", "EProxyNormalComputationMethod::AngleWeighted" },
		{ "AreaWeighted.DisplayName", "Area  Weighted" },
		{ "AreaWeighted.Name", "EProxyNormalComputationMethod::AreaWeighted" },
		{ "EqualWeighted.DisplayName", "Equal Weighted" },
		{ "EqualWeighted.Name", "EProxyNormalComputationMethod::EqualWeighted" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProxyNormalComputationMethod::AngleWeighted", (int64)EProxyNormalComputationMethod::AngleWeighted },
		{ "EProxyNormalComputationMethod::AreaWeighted", (int64)EProxyNormalComputationMethod::AreaWeighted },
		{ "EProxyNormalComputationMethod::EqualWeighted", (int64)EProxyNormalComputationMethod::EqualWeighted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EProxyNormalComputationMethod",
	"EProxyNormalComputationMethod::Type",
	Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EProxyNormalComputationMethod()
{
	if (!Z_Registration_Info_UEnum_EProxyNormalComputationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProxyNormalComputationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProxyNormalComputationMethod.InnerSingleton;
}
// End Enum EProxyNormalComputationMethod

// Begin ScriptStruct FMeshProxySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshProxySettings;
class UScriptStruct* FMeshProxySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshProxySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshProxySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshProxySettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshProxySettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshProxySettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshProxySettings>()
{
	return FMeshProxySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshProxySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMax", "1200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Screen size of the resulting proxy mesh in pixels*/" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Screen size of the resulting proxy mesh in pixels" },
		{ "UIMax", "1200" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Override when converting multiple meshes for proxy LOD merging. Warning, large geometry with small sampling has very high memory costs*/" },
		{ "DisplayName", "Override Spatial Sampling Distance" },
		{ "EditCondition", "bOverrideVoxelSize" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Override when converting multiple meshes for proxy LOD merging. Warning, large geometry with small sampling has very high memory costs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Material simplification */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Material simplification" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportNormalMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMetallicMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportRoughnessMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportSpecularMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeVertexData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNaniteEnabledMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteProxyTrianglePercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeDistance_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Distance at which meshes should be merged together, this can close gaps like doors and windows in distant geometry */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Distance at which meshes should be merged together, this can close gaps like doors and windows in distant geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnresolvedGeometryColor_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Base color assigned to LOD geometry that can't be associated with the source geometry: e.g. doors and windows that have been closed by the Merge Distance */" },
		{ "DisplayName", "Unresolved Geometry Color" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Base color assigned to LOD geometry that can't be associated with the source geometry: e.g. doors and windows that have been closed by the Merge Distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRayCastDist_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Override search distance used when discovering texture values for simplified geometry. Useful when non-zero Merge Distance setting generates new geometry in concave corners.*/" },
		{ "DisplayName", "Transfer Distance Override" },
		{ "EditCondition", "bOverrideTransferDistance" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Override search distance used when discovering texture values for simplified geometry. Useful when non-zero Merge Distance setting generates new geometry in concave corners." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardAngleThreshold_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angle at which a hard edge is introduced between faces */" },
		{ "DisplayName", "Hard Edge Angle" },
		{ "EditCondition", "bUseHardAngleThreshold" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Angle at which a hard edge is introduced between faces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "32" },
		{ "Comment", "/** Lightmap resolution */" },
		{ "DisplayAfter", "NormalCalculationMethod" },
		{ "DisplayName", "Lightmap Resolution" },
		{ "EditCondition", "!bComputeLightMapResolution" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Lightmap resolution" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalCalculationMethod_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Controls the method used to calculate the normal for the simplified geometry */" },
		{ "DisplayName", "Normal Calculation Method" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Controls the method used to calculate the normal for the simplified geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeCullingPrecision_MetaData[] = {
		{ "Category", "LandscapeCulling" },
		{ "Comment", "/** Level of detail of the landscape that should be used for the culling */" },
		{ "DisplayAfter", "bUseLandscapeCulling" },
		{ "EditCondition", "bUseLandscapeCulling" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Level of detail of the landscape that should be used for the culling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateCorrectLODModel_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Determines whether or not the correct LOD models should be calculated given the source meshes and transition size */" },
		{ "DisplayAfter", "ScreenSize" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Determines whether or not the correct LOD models should be calculated given the source meshes and transition size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVoxelSize_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** If true, Spatial Sampling Distance will not be automatically computed based on geometry and you must set it directly */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "If true, Spatial Sampling Distance will not be automatically computed based on geometry and you must set it directly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTransferDistance_MetaData[] = {
		{ "Category", "MaxRayCastDist" },
		{ "Comment", "/** Enable an override for material transfer distance */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Enable an override for material transfer distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHardAngleThreshold_MetaData[] = {
		{ "Category", "HardAngleThreshold" },
		{ "Comment", "/** Enable the use of hard angle based vertex splitting */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Enable the use of hard angle based vertex splitting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeLightMapResolution_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** If ticked will compute the lightmap resolution by summing the dimensions for each mesh included for merging */" },
		{ "DisplayName", "Compute Lightmap Resolution" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "If ticked will compute the lightmap resolution by summing the dimensions for each mesh included for merging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalculateNormals_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether Simplygon should recalculate normals, otherwise the normals channel will be sampled from the original mesh */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Whether Simplygon should recalculate normals, otherwise the normals channel will be sampled from the original mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeCulling_MetaData[] = {
		{ "Category", "LandscapeCulling" },
		{ "Comment", "/** Whether or not to use available landscape geometry to cull away invisible triangles */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Whether or not to use available landscape geometry to cull away invisible triangles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDistanceField_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReuseMeshLightmapUVs_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupIdenticalMeshesForBaking_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Bake identical meshes (or mesh instances) only once. Can lead to discrepancies with the source mesh visual, especially for materials that are using world position or per instance data. However, this will result in better quality baked textures & greatly reduce baking time. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Bake identical meshes (or mesh instances) only once. Can lead to discrepancies with the source mesh visual, especially for materials that are using world position or per instance data. However, this will result in better quality baked textures & greatly reduce baking time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateCollision_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to generate collision for the merged mesh */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Whether to generate collision for the merged mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowVertexColors_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to allow vertex colors saved in the merged mesh */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Whether to allow vertex colors saved in the merged mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to generate lightmap uvs for the merged mesh */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Whether to generate lightmap uvs for the merged mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[] = {
		{ "Category", "NaniteSettings" },
		{ "Comment", "/** Settings related to building Nanite data. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshProxySettings.h" },
		{ "ToolTip", "Settings related to building Nanite data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureHeight;
	static void NewProp_bExportNormalMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportNormalMap;
	static void NewProp_bExportMetallicMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMetallicMap;
	static void NewProp_bExportRoughnessMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportRoughnessMap;
	static void NewProp_bExportSpecularMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSpecularMap;
	static void NewProp_bBakeVertexData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeVertexData;
	static void NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNaniteEnabledMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteProxyTrianglePercent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MergeDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnresolvedGeometryColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRayCastDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HardAngleThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NormalCalculationMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeCullingPrecision;
	static void NewProp_bCalculateCorrectLODModel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateCorrectLODModel;
	static void NewProp_bOverrideVoxelSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVoxelSize;
	static void NewProp_bOverrideTransferDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTransferDistance;
	static void NewProp_bUseHardAngleThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHardAngleThreshold;
	static void NewProp_bComputeLightMapResolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeLightMapResolution;
	static void NewProp_bRecalculateNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalculateNormals;
	static void NewProp_bUseLandscapeCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeCulling;
	static void NewProp_bSupportRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
	static void NewProp_bAllowDistanceField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDistanceField;
	static void NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseMeshLightmapUVs;
	static void NewProp_bGroupIdenticalMeshesForBaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupIdenticalMeshesForBaking;
	static void NewProp_bCreateCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
	static void NewProp_bAllowVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowVertexColors;
	static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshProxySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSettings_MetaData), NewProp_MaterialSettings_MetaData) }; // 2102831604
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth = { "TextureWidth", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, TextureWidth_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureWidth_MetaData), NewProp_TextureWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, TextureHeight_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureHeight_MetaData), NewProp_TextureHeight_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bExportNormalMap_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap = { "bExportNormalMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportNormalMap_MetaData), NewProp_bExportNormalMap_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bExportMetallicMap_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap = { "bExportMetallicMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMetallicMap_MetaData), NewProp_bExportMetallicMap_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bExportRoughnessMap_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap = { "bExportRoughnessMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportRoughnessMap_MetaData), NewProp_bExportRoughnessMap_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bExportSpecularMap_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap = { "bExportSpecularMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportSpecularMap_MetaData), NewProp_bExportSpecularMap_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bBakeVertexData_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData = { "bBakeVertexData", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeVertexData_MetaData), NewProp_bBakeVertexData_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bGenerateNaniteEnabledMesh_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh = { "bGenerateNaniteEnabledMesh", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateNaniteEnabledMesh_MetaData), NewProp_bGenerateNaniteEnabledMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteProxyTrianglePercent = { "NaniteProxyTrianglePercent", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, NaniteProxyTrianglePercent_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteProxyTrianglePercent_MetaData), NewProp_NaniteProxyTrianglePercent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance = { "MergeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, MergeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeDistance_MetaData), NewProp_MergeDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor = { "UnresolvedGeometryColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, UnresolvedGeometryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnresolvedGeometryColor_MetaData), NewProp_UnresolvedGeometryColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist = { "MaxRayCastDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, MaxRayCastDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRayCastDist_MetaData), NewProp_MaxRayCastDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold = { "HardAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, HardAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardAngleThreshold_MetaData), NewProp_HardAngleThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, LightMapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMapResolution_MetaData), NewProp_LightMapResolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod = { "NormalCalculationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, NormalCalculationMethod), Z_Construct_UEnum_Engine_EProxyNormalComputationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalCalculationMethod_MetaData), NewProp_NormalCalculationMethod_MetaData) }; // 2776919995
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision = { "LandscapeCullingPrecision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, LandscapeCullingPrecision), Z_Construct_UEnum_Engine_ELandscapeCullingPrecision, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeCullingPrecision_MetaData), NewProp_LandscapeCullingPrecision_MetaData) }; // 2686823767
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bCalculateCorrectLODModel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel = { "bCalculateCorrectLODModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCalculateCorrectLODModel_MetaData), NewProp_bCalculateCorrectLODModel_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bOverrideVoxelSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize = { "bOverrideVoxelSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideVoxelSize_MetaData), NewProp_bOverrideVoxelSize_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bOverrideTransferDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance = { "bOverrideTransferDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideTransferDistance_MetaData), NewProp_bOverrideTransferDistance_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bUseHardAngleThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold = { "bUseHardAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHardAngleThreshold_MetaData), NewProp_bUseHardAngleThreshold_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bComputeLightMapResolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution = { "bComputeLightMapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeLightMapResolution_MetaData), NewProp_bComputeLightMapResolution_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bRecalculateNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals = { "bRecalculateNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalculateNormals_MetaData), NewProp_bRecalculateNormals_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bUseLandscapeCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling = { "bUseLandscapeCulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLandscapeCulling_MetaData), NewProp_bUseLandscapeCulling_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bSupportRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportRayTracing_MetaData), NewProp_bSupportRayTracing_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bAllowDistanceField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField = { "bAllowDistanceField", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDistanceField_MetaData), NewProp_bAllowDistanceField_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bReuseMeshLightmapUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs = { "bReuseMeshLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReuseMeshLightmapUVs_MetaData), NewProp_bReuseMeshLightmapUVs_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bGroupIdenticalMeshesForBaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking = { "bGroupIdenticalMeshesForBaking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupIdenticalMeshesForBaking_MetaData), NewProp_bGroupIdenticalMeshesForBaking_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bCreateCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateCollision_MetaData), NewProp_bCreateCollision_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bAllowVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors = { "bAllowVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowVertexColors_MetaData), NewProp_bAllowVertexColors_MetaData) };
void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
{
	((FMeshProxySettings*)Obj)->bGenerateLightmapUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateLightmapUVs_MetaData), NewProp_bGenerateLightmapUVs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshProxySettings, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteSettings_MetaData), NewProp_NaniteSettings_MetaData) }; // 1518774984
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteProxyTrianglePercent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MeshProxySettings",
	Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers),
	sizeof(FMeshProxySettings),
	alignof(FMeshProxySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshProxySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings()
{
	if (!Z_Registration_Info_UScriptStruct_MeshProxySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshProxySettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshProxySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshProxySettings.InnerSingleton;
}
// End ScriptStruct FMeshProxySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeCullingPrecision_StaticEnum, TEXT("ELandscapeCullingPrecision"), &Z_Registration_Info_UEnum_ELandscapeCullingPrecision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2686823767U) },
		{ EProxyNormalComputationMethod_StaticEnum, TEXT("EProxyNormalComputationMethod"), &Z_Registration_Info_UEnum_EProxyNormalComputationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2776919995U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeshProxySettings::StaticStruct, Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewStructOps, TEXT("MeshProxySettings"), &Z_Registration_Info_UScriptStruct_MeshProxySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshProxySettings), 2921668227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h_2438368517(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
