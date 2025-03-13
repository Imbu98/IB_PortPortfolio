// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MeshReductionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReductionSettings() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshFeatureImportance();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMeshFeatureImportance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshFeatureImportance;
static UEnum* EMeshFeatureImportance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshFeatureImportance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshFeatureImportance"));
	}
	return Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMeshFeatureImportance::Type>()
{
	return EMeshFeatureImportance_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** The importance of a mesh feature when automatically generating mesh LODs. */" },
		{ "High.Name", "EMeshFeatureImportance::High" },
		{ "Highest.Name", "EMeshFeatureImportance::Highest" },
		{ "Low.Name", "EMeshFeatureImportance::Low" },
		{ "Lowest.Name", "EMeshFeatureImportance::Lowest" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "Normal.Name", "EMeshFeatureImportance::Normal" },
		{ "Off.Name", "EMeshFeatureImportance::Off" },
		{ "ToolTip", "The importance of a mesh feature when automatically generating mesh LODs." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshFeatureImportance::Off", (int64)EMeshFeatureImportance::Off },
		{ "EMeshFeatureImportance::Lowest", (int64)EMeshFeatureImportance::Lowest },
		{ "EMeshFeatureImportance::Low", (int64)EMeshFeatureImportance::Low },
		{ "EMeshFeatureImportance::Normal", (int64)EMeshFeatureImportance::Normal },
		{ "EMeshFeatureImportance::High", (int64)EMeshFeatureImportance::High },
		{ "EMeshFeatureImportance::Highest", (int64)EMeshFeatureImportance::Highest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMeshFeatureImportance",
	"EMeshFeatureImportance::Type",
	Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMeshFeatureImportance()
{
	if (!Z_Registration_Info_UEnum_EMeshFeatureImportance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshFeatureImportance.InnerSingleton, Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshFeatureImportance.InnerSingleton;
}
// End Enum EMeshFeatureImportance

// Begin Enum EStaticMeshReductionTerimationCriterion
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion;
static UEnum* EStaticMeshReductionTerimationCriterion_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStaticMeshReductionTerimationCriterion"));
	}
	return Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EStaticMeshReductionTerimationCriterion>()
{
	return EStaticMeshReductionTerimationCriterion_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "First Percent Satisfied" },
		{ "Any.Name", "EStaticMeshReductionTerimationCriterion::Any" },
		{ "Any.ToolTip", "Simplification will continue until either Triangle or Vertex count criteria is met." },
		{ "Comment", "/** Enum specifying the reduction type to use when simplifying static meshes with the engines internal tool */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Enum specifying the reduction type to use when simplifying static meshes with the engines internal tool" },
		{ "Triangles.DisplayName", "Triangles" },
		{ "Triangles.Name", "EStaticMeshReductionTerimationCriterion::Triangles" },
		{ "Triangles.ToolTip", "Triangle percent criterion will be used for simplification." },
		{ "Vertices.DisplayName", "Vertice" },
		{ "Vertices.Name", "EStaticMeshReductionTerimationCriterion::Vertices" },
		{ "Vertices.ToolTip", "Vertice percent criterion will be used for simplification." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStaticMeshReductionTerimationCriterion::Triangles", (int64)EStaticMeshReductionTerimationCriterion::Triangles },
		{ "EStaticMeshReductionTerimationCriterion::Vertices", (int64)EStaticMeshReductionTerimationCriterion::Vertices },
		{ "EStaticMeshReductionTerimationCriterion::Any", (int64)EStaticMeshReductionTerimationCriterion::Any },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EStaticMeshReductionTerimationCriterion",
	"EStaticMeshReductionTerimationCriterion",
	Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion()
{
	if (!Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.InnerSingleton, Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.InnerSingleton;
}
// End Enum EStaticMeshReductionTerimationCriterion

// Begin ScriptStruct FMeshReductionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshReductionSettings;
class UScriptStruct* FMeshReductionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshReductionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshReductionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshReductionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshReductionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshReductionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshReductionSettings>()
{
	return FMeshReductionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshReductionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings used to reduce a mesh. */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Settings used to reduce a mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentTriangles_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Percentage of triangles to keep. 1.0 = no reduction, 0.0 = no triangles. (Triangles criterion properties) */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Percentage of triangles to keep. 1.0 = no reduction, 0.0 = no triangles. (Triangles criterion properties)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfTriangles_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The maximum number of triangles to retain when using percentage termination criterion. (Triangles criterion properties) */" },
		{ "DisplayName", "Max Triangle Count" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of triangles to retain when using percentage termination criterion. (Triangles criterion properties)" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentVertices_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Percentage of vertices to keep. 1.0 = no reduction, 0.0 = no vertices. (Vertices criterion properties) */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Percentage of vertices to keep. 1.0 = no reduction, 0.0 = no vertices. (Vertices criterion properties)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfVerts_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The maximum number of vertices to retain when using percentage termination criterion. (Vertices criterion properties) */" },
		{ "DisplayName", "Max Vertex Count" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of vertices to retain when using percentage termination criterion. (Vertices criterion properties)" },
		{ "UIMin", "4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeviation_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** The maximum distance in object space by which the reduced mesh may deviate from the original mesh. */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "The maximum distance in object space by which the reduced mesh may deviate from the original mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelError_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** The amount of error in pixels allowed for this LOD. */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "The amount of error in pixels allowed for this LOD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Threshold in object space at which vertices are welded together. */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Threshold in object space at which vertices are welded together." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardAngleThreshold_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Angle at which a hard edge is introduced between faces. */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Angle at which a hard edge is introduced between faces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLODModel_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values minimize change to border edges. */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Higher values minimize change to border edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values reduce texture stretching. */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Higher values reduce texture stretching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values try to preserve normals better. */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Higher values try to preserve normals better." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalculateNormals_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateUniqueLightmapUVs_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepSymmetry_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibilityAided_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullOccluded_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminationCriterion_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** The method to use when optimizing static mesh LODs */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "The method to use when optimizing static mesh LODs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityAggressiveness_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values generates fewer samples*/" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Higher values generates fewer samples" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values minimize change to vertex color data. */" },
		{ "ModuleRelativePath", "Public/MeshReductionSettings.h" },
		{ "ToolTip", "Higher values minimize change to vertex color data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentTriangles;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfTriangles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentVertices;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfVerts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeviation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelError;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HardAngleThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseLODModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureImportance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingImportance;
	static void NewProp_bRecalculateNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalculateNormals;
	static void NewProp_bGenerateUniqueLightmapUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateUniqueLightmapUVs;
	static void NewProp_bKeepSymmetry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepSymmetry;
	static void NewProp_bVisibilityAided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibilityAided;
	static void NewProp_bCullOccluded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullOccluded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TerminationCriterion_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TerminationCriterion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisibilityAggressiveness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorImportance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshReductionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles = { "PercentTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, PercentTriangles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentTriangles_MetaData), NewProp_PercentTriangles_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfTriangles = { "MaxNumOfTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, MaxNumOfTriangles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumOfTriangles_MetaData), NewProp_MaxNumOfTriangles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices = { "PercentVertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, PercentVertices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentVertices_MetaData), NewProp_PercentVertices_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfVerts = { "MaxNumOfVerts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, MaxNumOfVerts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumOfVerts_MetaData), NewProp_MaxNumOfVerts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation = { "MaxDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, MaxDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeviation_MetaData), NewProp_MaxDeviation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError = { "PixelError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, PixelError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelError_MetaData), NewProp_PixelError_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, WeldingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeldingThreshold_MetaData), NewProp_WeldingThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold = { "HardAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, HardAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardAngleThreshold_MetaData), NewProp_HardAngleThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel = { "BaseLODModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, BaseLODModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLODModel_MetaData), NewProp_BaseLODModel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance = { "SilhouetteImportance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, SilhouetteImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SilhouetteImportance_MetaData), NewProp_SilhouetteImportance_MetaData) }; // 2889949799
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance = { "TextureImportance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, TextureImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureImportance_MetaData), NewProp_TextureImportance_MetaData) }; // 2889949799
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance = { "ShadingImportance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, ShadingImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingImportance_MetaData), NewProp_ShadingImportance_MetaData) }; // 2889949799
void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_SetBit(void* Obj)
{
	((FMeshReductionSettings*)Obj)->bRecalculateNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals = { "bRecalculateNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalculateNormals_MetaData), NewProp_bRecalculateNormals_MetaData) };
void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_SetBit(void* Obj)
{
	((FMeshReductionSettings*)Obj)->bGenerateUniqueLightmapUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs = { "bGenerateUniqueLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateUniqueLightmapUVs_MetaData), NewProp_bGenerateUniqueLightmapUVs_MetaData) };
void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_SetBit(void* Obj)
{
	((FMeshReductionSettings*)Obj)->bKeepSymmetry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry = { "bKeepSymmetry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepSymmetry_MetaData), NewProp_bKeepSymmetry_MetaData) };
void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_SetBit(void* Obj)
{
	((FMeshReductionSettings*)Obj)->bVisibilityAided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided = { "bVisibilityAided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibilityAided_MetaData), NewProp_bVisibilityAided_MetaData) };
void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_SetBit(void* Obj)
{
	((FMeshReductionSettings*)Obj)->bCullOccluded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded = { "bCullOccluded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullOccluded_MetaData), NewProp_bCullOccluded_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion = { "TerminationCriterion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, TerminationCriterion), Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminationCriterion_MetaData), NewProp_TerminationCriterion_MetaData) }; // 4161120779
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness = { "VisibilityAggressiveness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, VisibilityAggressiveness), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityAggressiveness_MetaData), NewProp_VisibilityAggressiveness_MetaData) }; // 2889949799
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance = { "VertexColorImportance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReductionSettings, VertexColorImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorImportance_MetaData), NewProp_VertexColorImportance_MetaData) }; // 2889949799
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfVerts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MeshReductionSettings",
	Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers),
	sizeof(FMeshReductionSettings),
	alignof(FMeshReductionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MeshReductionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshReductionSettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshReductionSettings.InnerSingleton;
}
// End ScriptStruct FMeshReductionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshFeatureImportance_StaticEnum, TEXT("EMeshFeatureImportance"), &Z_Registration_Info_UEnum_EMeshFeatureImportance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2889949799U) },
		{ EStaticMeshReductionTerimationCriterion_StaticEnum, TEXT("EStaticMeshReductionTerimationCriterion"), &Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4161120779U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeshReductionSettings::StaticStruct, Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewStructOps, TEXT("MeshReductionSettings"), &Z_Registration_Info_UScriptStruct_MeshReductionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshReductionSettings), 1166197734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h_2999122609(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
