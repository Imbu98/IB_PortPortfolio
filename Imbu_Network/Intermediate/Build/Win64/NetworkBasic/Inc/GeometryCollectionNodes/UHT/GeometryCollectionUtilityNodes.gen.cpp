// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionUtilityNodes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionUtilityNodes() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGenerateConvexMethod();
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSphereCovering();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin Enum EConvexOverlapRemovalMethodEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum;
static UEnum* EConvexOverlapRemovalMethodEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EConvexOverlapRemovalMethodEnum"));
	}
	return Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EConvexOverlapRemovalMethodEnum>()
{
	return EConvexOverlapRemovalMethodEnum_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_EConvexOverlapRemovalMethod_All.DisplayName", "All" },
		{ "Dataflow_EConvexOverlapRemovalMethod_All.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All" },
		{ "Dataflow_EConvexOverlapRemovalMethod_None.DisplayName", "None" },
		{ "Dataflow_EConvexOverlapRemovalMethod_None.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClusters.DisplayName", "Only Clusters" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClusters.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters.DisplayName", "Only Clusters vs Clusters" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_Max", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"EConvexOverlapRemovalMethodEnum",
	"EConvexOverlapRemovalMethodEnum",
	Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum()
{
	if (!Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.InnerSingleton;
}
// End Enum EConvexOverlapRemovalMethodEnum

// Begin ScriptStruct FDataflowConvexDecompositionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings;
class UScriptStruct* FDataflowConvexDecompositionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("DataflowConvexDecompositionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FDataflowConvexDecompositionSettings>()
{
	return FDataflowConvexDecompositionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSizeToDecompose_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// If greater than zero, the minimum geometry size (cube root of volume) to consider for convex decomposition\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If greater than zero, the minimum geometry size (cube root of volume) to consider for convex decomposition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// If the geo volume / hull volume ratio is greater than this, do not consider convex decomposition\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If the geo volume / hull volume ratio is greater than this, do not consider convex decomposition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Stop splitting when hulls have error less than this (expressed in cm; will be cubed for volumetric error).\n// Note: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed.\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Stop splitting when hulls have error less than this (expressed in cm; will be cubed for volumetric error).\nNote: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHullsPerGeometry_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "-1" },
		{ "Comment", "// If greater than zero, maximum number of convex hulls to use in each convex decomposition.\n//Note: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed.\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If greater than zero, maximum number of convex hulls to use in each convex decomposition.\nNote: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinThicknessTolerance_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Optionally specify a minimum thickness (in cm) for convex parts; parts below this thickness will always be merged away. Overrides NumOutputHulls and ErrorTolerance when needed.\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optionally specify a minimum thickness (in cm) for convex parts; parts below this thickness will always be merged away. Overrides NumOutputHulls and ErrorTolerance when needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAdditionalSplits_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0" },
		{ "Comment", "// Control the search effort spent per convex decomposition: larger values will require more computation but may find better convex decompositions\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Control the search effort spent per convex decomposition: larger values will require more computation but may find better convex decompositions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSizeToDecompose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGeoToHullVolumeRatioToDecompose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullsPerGeometry;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinThicknessTolerance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAdditionalSplits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowConvexDecompositionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinSizeToDecompose = { "MinSizeToDecompose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, MinSizeToDecompose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSizeToDecompose_MetaData), NewProp_MinSizeToDecompose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose = { "MaxGeoToHullVolumeRatioToDecompose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, MaxGeoToHullVolumeRatioToDecompose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData), NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTolerance_MetaData), NewProp_ErrorTolerance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxHullsPerGeometry = { "MaxHullsPerGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, MaxHullsPerGeometry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHullsPerGeometry_MetaData), NewProp_MaxHullsPerGeometry_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinThicknessTolerance = { "MinThicknessTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, MinThicknessTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinThicknessTolerance_MetaData), NewProp_MinThicknessTolerance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_NumAdditionalSplits = { "NumAdditionalSplits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, NumAdditionalSplits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAdditionalSplits_MetaData), NewProp_NumAdditionalSplits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinSizeToDecompose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_ErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxHullsPerGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinThicknessTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_NumAdditionalSplits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	&NewStructOps,
	"DataflowConvexDecompositionSettings",
	Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::PropPointers),
	sizeof(FDataflowConvexDecompositionSettings),
	alignof(FDataflowConvexDecompositionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.InnerSingleton, Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.InnerSingleton;
}
// End ScriptStruct FDataflowConvexDecompositionSettings

// Begin ScriptStruct FMakeDataflowConvexDecompositionSettingsNode
static_assert(std::is_polymorphic<FMakeDataflowConvexDecompositionSettingsNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeDataflowConvexDecompositionSettingsNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode;
class UScriptStruct* FMakeDataflowConvexDecompositionSettingsNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeDataflowConvexDecompositionSettingsNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeDataflowConvexDecompositionSettingsNode>()
{
	return FMakeDataflowConvexDecompositionSettingsNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//~ TODO: Ideally this would be generated from the above FDataflowConvexDecompositionSettings struct\n// Provide settings for running convex decomposition of geometry\n" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Provide settings for running convex decomposition of geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSizeToDecompose_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// If greater than zero, the minimum geometry size (cube root of volume) to consider for convex decomposition\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If greater than zero, the minimum geometry size (cube root of volume) to consider for convex decomposition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// If the geo volume / hull volume ratio is greater than this, do not consider convex decomposition\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If the geo volume / hull volume ratio is greater than this, do not consider convex decomposition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Stop splitting when hulls have error less than this (expressed in cm; will be cubed for volumetric error).\n// Note: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed.\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Stop splitting when hulls have error less than this (expressed in cm; will be cubed for volumetric error).\nNote: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHullsPerGeometry_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "-1" },
		{ "Comment", "// If greater than zero, maximum number of convex hulls to use in each convex decomposition.\n//Note: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed.\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If greater than zero, maximum number of convex hulls to use in each convex decomposition.\nNote: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinThicknessTolerance_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Optionally specify a minimum thickness (in cm) for convex parts; parts below this thickness will always be merged away. Overrides NumOutputHulls and ErrorTolerance when needed.\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optionally specify a minimum thickness (in cm) for convex parts; parts below this thickness will always be merged away. Overrides NumOutputHulls and ErrorTolerance when needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAdditionalSplits_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0" },
		{ "Comment", "// Control the search effort spent per convex decomposition: larger values will require more computation but may find better convex decompositions\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Control the search effort spent per convex decomposition: larger values will require more computation but may find better convex decompositions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecompositionSettings_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSizeToDecompose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGeoToHullVolumeRatioToDecompose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullsPerGeometry;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinThicknessTolerance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAdditionalSplits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecompositionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeDataflowConvexDecompositionSettingsNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinSizeToDecompose = { "MinSizeToDecompose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, MinSizeToDecompose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSizeToDecompose_MetaData), NewProp_MinSizeToDecompose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose = { "MaxGeoToHullVolumeRatioToDecompose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, MaxGeoToHullVolumeRatioToDecompose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData), NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTolerance_MetaData), NewProp_ErrorTolerance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxHullsPerGeometry = { "MaxHullsPerGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, MaxHullsPerGeometry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHullsPerGeometry_MetaData), NewProp_MaxHullsPerGeometry_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinThicknessTolerance = { "MinThicknessTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, MinThicknessTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinThicknessTolerance_MetaData), NewProp_MinThicknessTolerance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_NumAdditionalSplits = { "NumAdditionalSplits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, NumAdditionalSplits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAdditionalSplits_MetaData), NewProp_NumAdditionalSplits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_DecompositionSettings = { "DecompositionSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, DecompositionSettings), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecompositionSettings_MetaData), NewProp_DecompositionSettings_MetaData) }; // 1174734109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinSizeToDecompose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_ErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxHullsPerGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinThicknessTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_NumAdditionalSplits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_DecompositionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeDataflowConvexDecompositionSettingsNode",
	Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::PropPointers),
	sizeof(FMakeDataflowConvexDecompositionSettingsNode),
	alignof(FMakeDataflowConvexDecompositionSettingsNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.InnerSingleton;
}
// End ScriptStruct FMakeDataflowConvexDecompositionSettingsNode

// Begin ScriptStruct FCreateLeafConvexHullsDataflowNode
static_assert(std::is_polymorphic<FCreateLeafConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCreateLeafConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode;
class UScriptStruct* FCreateLeafConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CreateLeafConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCreateLeafConvexHullsDataflowNode>()
{
	return FCreateLeafConvexHullsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute leaf hulls on -- if not provided, all leaf hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute leaf hulls on -- if not provided, all leaf hulls will be computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateMethod_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** How convex hulls are generated -- computed from geometry, imported from external collision shapes, or an intersection of both options. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "How convex hulls are generated -- computed from geometry, imported from external collision shapes, or an intersection of both options." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectIfComputedIsSmallerByFactor_MetaData[] = {
		{ "Category", "IntersectionFilters" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** If GenerateMethod is Intersect, only actually intersect when the volume of the Computed Hull is less than this fraction of the volume of the External Hull(s). */" },
		{ "EditCondition", "GenerateMethod == EGenerateConvexMethod::IntersectExternalWithComputed" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If GenerateMethod is Intersect, only actually intersect when the volume of the Computed Hull is less than this fraction of the volume of the External Hull(s)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinExternalVolumeToIntersect_MetaData[] = {
		{ "Category", "IntersectionFilters" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** If GenerateMethod is Intersect, only actually intersect if the volume of the External Hull(s) exceed this threshold. */" },
		{ "EditCondition", "GenerateMethod == EGenerateConvexMethod::IntersectExternalWithComputed" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If GenerateMethod is Intersect, only actually intersect if the volume of the External Hull(s) exceed this threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeIntersectionsBeforeHull_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Whether to compute the intersection before computing convex hulls. Typically should be enabled. */" },
		{ "EditCondition", "GenerateMethod == EGenerateConvexMethod::IntersectExternalWithComputed" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to compute the intersection before computing convex hulls. Typically should be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationDistanceThreshold_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Computed convex hulls are simplified to keep points spaced at least this far apart (except where needed to keep the hull from collapsing to zero volume). */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "GenerateMethod != EGenerateConvexMethod::ExternalCollision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Computed convex hulls are simplified to keep points spaced at least this far apart (except where needed to keep the hull from collapsing to zero volume)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexDecompositionSettings_MetaData[] = {
		{ "Category", "Convex" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerateMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerateMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntersectIfComputedIsSmallerByFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinExternalVolumeToIntersect;
	static void NewProp_bComputeIntersectionsBeforeHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeIntersectionsBeforeHull;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationDistanceThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexDecompositionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateLeafConvexHullsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalSelectionFilter_MetaData), NewProp_OptionalSelectionFilter_MetaData) }; // 2980507218
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod = { "GenerateMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, GenerateMethod), Z_Construct_UEnum_Chaos_EGenerateConvexMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateMethod_MetaData), NewProp_GenerateMethod_MetaData) }; // 256410834
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_IntersectIfComputedIsSmallerByFactor = { "IntersectIfComputedIsSmallerByFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, IntersectIfComputedIsSmallerByFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectIfComputedIsSmallerByFactor_MetaData), NewProp_IntersectIfComputedIsSmallerByFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_MinExternalVolumeToIntersect = { "MinExternalVolumeToIntersect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, MinExternalVolumeToIntersect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinExternalVolumeToIntersect_MetaData), NewProp_MinExternalVolumeToIntersect_MetaData) };
void Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_bComputeIntersectionsBeforeHull_SetBit(void* Obj)
{
	((FCreateLeafConvexHullsDataflowNode*)Obj)->bComputeIntersectionsBeforeHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_bComputeIntersectionsBeforeHull = { "bComputeIntersectionsBeforeHull", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLeafConvexHullsDataflowNode), &Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_bComputeIntersectionsBeforeHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeIntersectionsBeforeHull_MetaData), NewProp_bComputeIntersectionsBeforeHull_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold = { "SimplificationDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, SimplificationDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplificationDistanceThreshold_MetaData), NewProp_SimplificationDistanceThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_ConvexDecompositionSettings = { "ConvexDecompositionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, ConvexDecompositionSettings), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexDecompositionSettings_MetaData), NewProp_ConvexDecompositionSettings_MetaData) }; // 1174734109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_IntersectIfComputedIsSmallerByFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_MinExternalVolumeToIntersect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_bComputeIntersectionsBeforeHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_ConvexDecompositionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"CreateLeafConvexHullsDataflowNode",
	Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::PropPointers),
	sizeof(FCreateLeafConvexHullsDataflowNode),
	alignof(FCreateLeafConvexHullsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.InnerSingleton;
}
// End ScriptStruct FCreateLeafConvexHullsDataflowNode

// Begin ScriptStruct FSimplifyConvexHullsDataflowNode
static_assert(std::is_polymorphic<FSimplifyConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSimplifyConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode;
class UScriptStruct* FSimplifyConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SimplifyConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSimplifyConvexHullsDataflowNode>()
{
	return FSimplifyConvexHullsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute leaf hulls on -- if not provided, all leaf hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute leaf hulls on -- if not provided, all leaf hulls will be computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyMethod_MetaData[] = {
		{ "Category", "Convex" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationAngleThreshold_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Simplified hull should preserve angles larger than this (in degrees).  Used by the AngleTolerance simplification method. */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "SimplifyMethod == EConvexHullSimplifyMethod::AngleTolerance" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Simplified hull should preserve angles larger than this (in degrees).  Used by the AngleTolerance simplification method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationDistanceThreshold_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Simplified hull should stay within this distance of the initial convex hull. Used by the MeshQSlim simplification method. */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "SimplifyMethod == EConvexHullSimplifyMethod::MeshQSlim" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Simplified hull should stay within this distance of the initial convex hull. Used by the MeshQSlim simplification method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTargetTriangleCount_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The minimum number of faces to use for the convex hull. For MeshQSlim simplification, this is a triangle count, which may be further reduced on conversion back to a convex hull. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Min Target Face Count" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "The minimum number of faces to use for the convex hull. For MeshQSlim simplification, this is a triangle count, which may be further reduced on conversion back to a convex hull." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExistingVertices_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Whether to restrict the simplified hulls to only use vertices from the original hulls. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to restrict the simplified hulls to only use vertices from the original hulls." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SimplifyMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimplifyMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationAngleThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationDistanceThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinTargetTriangleCount;
	static void NewProp_bUseExistingVertices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExistingVertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimplifyConvexHullsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalSelectionFilter_MetaData), NewProp_OptionalSelectionFilter_MetaData) }; // 2980507218
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod = { "SimplifyMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, SimplifyMethod), Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplifyMethod_MetaData), NewProp_SimplifyMethod_MetaData) }; // 4045671767
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationAngleThreshold = { "SimplificationAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, SimplificationAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplificationAngleThreshold_MetaData), NewProp_SimplificationAngleThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold = { "SimplificationDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, SimplificationDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplificationDistanceThreshold_MetaData), NewProp_SimplificationDistanceThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_MinTargetTriangleCount = { "MinTargetTriangleCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, MinTargetTriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTargetTriangleCount_MetaData), NewProp_MinTargetTriangleCount_MetaData) };
void Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices_SetBit(void* Obj)
{
	((FSimplifyConvexHullsDataflowNode*)Obj)->bUseExistingVertices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices = { "bUseExistingVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimplifyConvexHullsDataflowNode), &Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExistingVertices_MetaData), NewProp_bUseExistingVertices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_MinTargetTriangleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SimplifyConvexHullsDataflowNode",
	Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::PropPointers),
	sizeof(FSimplifyConvexHullsDataflowNode),
	alignof(FSimplifyConvexHullsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.InnerSingleton;
}
// End ScriptStruct FSimplifyConvexHullsDataflowNode

// Begin ScriptStruct FCreateNonOverlappingConvexHullsDataflowNode
static_assert(std::is_polymorphic<FCreateNonOverlappingConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCreateNonOverlappingConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode;
class UScriptStruct* FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CreateNonOverlappingConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCreateNonOverlappingConvexHullsDataflowNode>()
{
	return FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates convex hull representation for the bones for simulation\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Generates convex hull representation for the bones for simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanExceedFraction_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Fraction (of geometry volume) by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Allow Larger Hull Fraction" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Fraction (of geometry volume) by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationDistanceThreshold_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Computed convex hulls are simplified to keep points spaced at least this far apart (except where needed to keep the hull from collapsing to zero volume) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Computed convex hulls are simplified to keep points spaced at least this far apart (except where needed to keep the hull from collapsing to zero volume)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRemovalMethod_MetaData[] = {
		{ "Category", "AutomaticOverlapRemoval" },
		{ "Comment", "/** Whether and in what cases to automatically cut away overlapping parts of the convex hulls, to avoid the simulation 'popping' to fix the overlaps */" },
		{ "DisplayName", "Remove Overlaps" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether and in what cases to automatically cut away overlapping parts of the convex hulls, to avoid the simulation 'popping' to fix the overlaps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRemovalShrinkPercent_MetaData[] = {
		{ "Category", "AutomaticOverlapRemoval" },
		{ "ClampMax", "99.900002" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Overlap removal will be computed as if convex hulls were this percentage smaller (in range 0-100) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Overlap removal will be computed as if convex hulls were this percentage smaller (in range 0-100)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanRemoveFraction_MetaData[] = {
		{ "Category", "AutomaticOverlapRemoval" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Fraction of the convex hulls for a cluster that we can remove before using the hulls of the children */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Max Removal Fraction" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Fraction of the convex hulls for a cluster that we can remove before using the hulls of the children" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CanExceedFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationDistanceThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapRemovalMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlapRemovalMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlapRemovalShrinkPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CanRemoveFraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateNonOverlappingConvexHullsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction = { "CanExceedFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, CanExceedFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanExceedFraction_MetaData), NewProp_CanExceedFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold = { "SimplificationDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, SimplificationDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplificationDistanceThreshold_MetaData), NewProp_SimplificationDistanceThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod = { "OverlapRemovalMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, OverlapRemovalMethod), Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapRemovalMethod_MetaData), NewProp_OverlapRemovalMethod_MetaData) }; // 2354843998
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent = { "OverlapRemovalShrinkPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, OverlapRemovalShrinkPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapRemovalShrinkPercent_MetaData), NewProp_OverlapRemovalShrinkPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction = { "CanRemoveFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, CanRemoveFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanRemoveFraction_MetaData), NewProp_CanRemoveFraction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"CreateNonOverlappingConvexHullsDataflowNode",
	Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers),
	sizeof(FCreateNonOverlappingConvexHullsDataflowNode),
	alignof(FCreateNonOverlappingConvexHullsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.InnerSingleton;
}
// End ScriptStruct FCreateNonOverlappingConvexHullsDataflowNode

// Begin ScriptStruct FDataflowSphereCovering
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSphereCovering;
class UScriptStruct* FDataflowSphereCovering::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSphereCovering.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSphereCovering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSphereCovering, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("DataflowSphereCovering"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSphereCovering.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FDataflowSphereCovering>()
{
	return FDataflowSphereCovering::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//~ Simple wrapper class to make the sphere covering data possible to pass via dataflow\n// A set of spheres generated to represent empty space when creating a minimal set of convex hulls, e.g. in one of the Generate Cluster Convex Hulls nodes\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "A set of spheres generated to represent empty space when creating a minimal set of convex hulls, e.g. in one of the Generate Cluster Convex Hulls nodes" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSphereCovering>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	&NewStructOps,
	"DataflowSphereCovering",
	nullptr,
	0,
	sizeof(FDataflowSphereCovering),
	alignof(FDataflowSphereCovering),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowSphereCovering()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSphereCovering.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSphereCovering.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowSphereCovering.InnerSingleton;
}
// End ScriptStruct FDataflowSphereCovering

// Begin Enum ENegativeSpaceSampleMethodDataflowEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENegativeSpaceSampleMethodDataflowEnum;
static UEnum* ENegativeSpaceSampleMethodDataflowEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENegativeSpaceSampleMethodDataflowEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENegativeSpaceSampleMethodDataflowEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ENegativeSpaceSampleMethodDataflowEnum"));
	}
	return Z_Registration_Info_UEnum_ENegativeSpaceSampleMethodDataflowEnum.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<ENegativeSpaceSampleMethodDataflowEnum>()
{
	return ENegativeSpaceSampleMethodDataflowEnum_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//~ Dataflow-specific copy of the negative space sampling method enum in ConvexDecomposition3.h,\n//~ so that it can be exposed as a UENUM\n// Method to distribute sampling spheres\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Method to distribute sampling spheres" },
		{ "Uniform.Comment", "// Place sample spheres in a uniform grid pattern\n" },
		{ "Uniform.Name", "ENegativeSpaceSampleMethodDataflowEnum::Uniform" },
		{ "Uniform.ToolTip", "Place sample spheres in a uniform grid pattern" },
		{ "VoxelSearch.Comment", "// Use voxel-based subtraction and offsetting methods to specifically target concavities\n" },
		{ "VoxelSearch.Name", "ENegativeSpaceSampleMethodDataflowEnum::VoxelSearch" },
		{ "VoxelSearch.ToolTip", "Use voxel-based subtraction and offsetting methods to specifically target concavities" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENegativeSpaceSampleMethodDataflowEnum::Uniform", (int64)ENegativeSpaceSampleMethodDataflowEnum::Uniform },
		{ "ENegativeSpaceSampleMethodDataflowEnum::VoxelSearch", (int64)ENegativeSpaceSampleMethodDataflowEnum::VoxelSearch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"ENegativeSpaceSampleMethodDataflowEnum",
	"ENegativeSpaceSampleMethodDataflowEnum",
	Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum()
{
	if (!Z_Registration_Info_UEnum_ENegativeSpaceSampleMethodDataflowEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENegativeSpaceSampleMethodDataflowEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENegativeSpaceSampleMethodDataflowEnum.InnerSingleton;
}
// End Enum ENegativeSpaceSampleMethodDataflowEnum

// Begin ScriptStruct FGenerateClusterConvexHullsFromLeafHullsDataflowNode
static_assert(std::is_polymorphic<FGenerateClusterConvexHullsFromLeafHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGenerateClusterConvexHullsFromLeafHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode;
class UScriptStruct* FGenerateClusterConvexHullsFromLeafHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GenerateClusterConvexHullsFromLeafHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGenerateClusterConvexHullsFromLeafHullsDataflowNode>()
{
	return FGenerateClusterConvexHullsFromLeafHullsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates cluster convex hulls for leafs hulls\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Generates cluster convex hulls for leafs hulls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCovering_MetaData[] = {
		{ "Comment", "// A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres.\n" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexCount_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Maximum number of convex to generate for a specific cluster. Will be ignored if error tolerance is used instead */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ErrorTolerance == 0" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Maximum number of convex to generate for a specific cluster. Will be ignored if error tolerance is used instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** \n\x09* Error tolerance to use to decide to merge leaf convex together. \n\x09* This is in centimeters and represents the side of a cube, the volume of which will be used as threshold\n\x09* to know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex\n\x09*/" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Error tolerance to use to decide to merge leaf convex together.\nThis is in centimeters and represents the side of a cube, the volume of which will be used as threshold\nto know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex" },
		{ "UIMax", "100." },
		{ "UIMin", "0" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferExternalCollisionShapes_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Whether to prefer available External (imported) collision shapes instead of the computed convex hulls on the Collection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to prefer available External (imported) collision shapes instead of the computed convex hulls on the Collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowMerges_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Method to determine which convex hull pairs can potentially be merged */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Method to determine which convex hull pairs can potentially be merged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProtectNegativeSpace_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to use a sphere cover to define negative space that should not be covered by convex hulls */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to use a sphere cover to define negative space that should not be covered by convex hulls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMethod_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Method to use to find and sample negative space */" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Method to use to find and sample negative space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireSearchSampleCoverage_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to require that all candidate locations identified by Voxel Search are covered by negative space samples, up to the specified Min Sample Spacing. Only applies to Voxel Search. */" },
		{ "EditCondition", "bProtectNegativeSpace && SampleMethod == ENegativeSpaceSampleMethodDataflowEnum::VoxelSearch" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to require that all candidate locations identified by Voxel Search are covered by negative space samples, up to the specified Min Sample Spacing. Only applies to Voxel Search." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyConnectedToHull_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** When performing Voxel Search, only look for negative space that is connected out to the convex hull. This removes inaccessable internal negative space from consideration. Only applies to Voxel Search. */" },
		{ "EditCondition", "bProtectNegativeSpace && SampleMethod == ENegativeSpaceSampleMethodDataflowEnum::VoxelSearch" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "When performing Voxel Search, only look for negative space that is connected out to the convex hull. This removes inaccessable internal negative space from consideration. Only applies to Voxel Search." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNumSamples_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Approximate number of spheres to consider when covering negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Approximate number of spheres to consider when covering negative space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSampleSpacing_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeSpaceTolerance_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Amount of space to leave between convex hulls and protected negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Amount of space to leave between convex hulls and protected negative space" },
		{ "UIMin", "0.100000" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Spheres smaller than this are not included in the negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Spheres smaller than this are not included in the negative space" },
		{ "Units", "cm" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCovering;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConvexCount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorTolerance;
	static void NewProp_bPreferExternalCollisionShapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferExternalCollisionShapes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowMerges_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowMerges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
	static void NewProp_bProtectNegativeSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProtectNegativeSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleMethod;
	static void NewProp_bRequireSearchSampleCoverage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireSearchSampleCoverage;
	static void NewProp_bOnlyConnectedToHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyConnectedToHull;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNumSamples;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSampleSpacing;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NegativeSpaceTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateClusterConvexHullsFromLeafHullsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SphereCovering = { "SphereCovering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, SphereCovering), Z_Construct_UScriptStruct_FDataflowSphereCovering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCovering_MetaData), NewProp_SphereCovering_MetaData) }; // 995249109
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ConvexCount = { "ConvexCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, ConvexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexCount_MetaData), NewProp_ConvexCount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTolerance_MetaData), NewProp_ErrorTolerance_MetaData) };
void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_SetBit(void* Obj)
{
	((FGenerateClusterConvexHullsFromLeafHullsDataflowNode*)Obj)->bPreferExternalCollisionShapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes = { "bPreferExternalCollisionShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferExternalCollisionShapes_MetaData), NewProp_bPreferExternalCollisionShapes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges = { "AllowMerges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, AllowMerges), Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowMerges_MetaData), NewProp_AllowMerges_MetaData) }; // 1133575748
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalSelectionFilter_MetaData), NewProp_OptionalSelectionFilter_MetaData) }; // 2980507218
void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit(void* Obj)
{
	((FGenerateClusterConvexHullsFromLeafHullsDataflowNode*)Obj)->bProtectNegativeSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace = { "bProtectNegativeSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProtectNegativeSpace_MetaData), NewProp_bProtectNegativeSpace_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SampleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SampleMethod = { "SampleMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, SampleMethod), Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMethod_MetaData), NewProp_SampleMethod_MetaData) }; // 4026483468
void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage_SetBit(void* Obj)
{
	((FGenerateClusterConvexHullsFromLeafHullsDataflowNode*)Obj)->bRequireSearchSampleCoverage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage = { "bRequireSearchSampleCoverage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireSearchSampleCoverage_MetaData), NewProp_bRequireSearchSampleCoverage_MetaData) };
void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull_SetBit(void* Obj)
{
	((FGenerateClusterConvexHullsFromLeafHullsDataflowNode*)Obj)->bOnlyConnectedToHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull = { "bOnlyConnectedToHull", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyConnectedToHull_MetaData), NewProp_bOnlyConnectedToHull_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_TargetNumSamples = { "TargetNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, TargetNumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNumSamples_MetaData), NewProp_TargetNumSamples_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinSampleSpacing = { "MinSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, MinSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSampleSpacing_MetaData), NewProp_MinSampleSpacing_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance = { "NegativeSpaceTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, NegativeSpaceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeSpaceTolerance_MetaData), NewProp_NegativeSpaceTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, MinRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRadius_MetaData), NewProp_MinRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SphereCovering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ConvexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SampleMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SampleMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_TargetNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinSampleSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GenerateClusterConvexHullsFromLeafHullsDataflowNode",
	Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::PropPointers),
	sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode),
	alignof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.InnerSingleton;
}
// End ScriptStruct FGenerateClusterConvexHullsFromLeafHullsDataflowNode

// Begin ScriptStruct FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
static_assert(std::is_polymorphic<FGenerateClusterConvexHullsFromChildrenHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGenerateClusterConvexHullsFromChildrenHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode;
class UScriptStruct* FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GenerateClusterConvexHullsFromChildrenHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGenerateClusterConvexHullsFromChildrenHullsDataflowNode>()
{
	return FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates cluster convex hulls for children hulls\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Generates cluster convex hulls for children hulls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCovering_MetaData[] = {
		{ "Comment", "// A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres.\n" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexCount_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Maximum number of convex to generate for a specific cluster. Will be ignored if error tolerance is used instead */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ErrorTolerance == 0" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Maximum number of convex to generate for a specific cluster. Will be ignored if error tolerance is used instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/**\n\x09* Error tolerance to use to decide to merge leaf convex together.\n\x09* This is in centimeters and represents the side of a cube, the volume of which will be used as threshold\n\x09* to know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex\n\x09*/" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Error tolerance to use to decide to merge leaf convex together.\nThis is in centimeters and represents the side of a cube, the volume of which will be used as threshold\nto know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex" },
		{ "UIMax", "100." },
		{ "UIMin", "0" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferExternalCollisionShapes_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Whether to prefer available External (imported) collision shapes instead of the computed convex hulls on the Collection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to prefer available External (imported) collision shapes instead of the computed convex hulls on the Collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProtectNegativeSpace_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to use a sphere cover to define negative space that should not be covered by convex hulls */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to use a sphere cover to define negative space that should not be covered by convex hulls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMethod_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Method to use to find and sample negative space */" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Method to use to find and sample negative space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireSearchSampleCoverage_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to require that all candidate locations identified by Voxel Search are covered by negative space samples, up to the specified Min Sample Spacing. Only applies to Voxel Search. */" },
		{ "EditCondition", "bProtectNegativeSpace && SampleMethod == ENegativeSpaceSampleMethodDataflowEnum::VoxelSearch" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to require that all candidate locations identified by Voxel Search are covered by negative space samples, up to the specified Min Sample Spacing. Only applies to Voxel Search." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyConnectedToHull_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** When performing Voxel Search, only look for negative space that is connected out to the convex hull. This removes inaccessable internal negative space from consideration. Only applies to Voxel Search. */" },
		{ "EditCondition", "bProtectNegativeSpace && SampleMethod == ENegativeSpaceSampleMethodDataflowEnum::VoxelSearch" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "When performing Voxel Search, only look for negative space that is connected out to the convex hull. This removes inaccessable internal negative space from consideration. Only applies to Voxel Search." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNumSamples_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Approximate number of spheres to consider when covering negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Approximate number of spheres to consider when covering negative space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSampleSpacing_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeSpaceTolerance_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Amount of space to leave between convex hulls and protected negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Amount of space to leave between convex hulls and protected negative space" },
		{ "UIMin", "0.100000" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Spheres smaller than this are not included in the negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Spheres smaller than this are not included in the negative space" },
		{ "Units", "cm" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCovering;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConvexCount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorTolerance;
	static void NewProp_bPreferExternalCollisionShapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferExternalCollisionShapes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
	static void NewProp_bProtectNegativeSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProtectNegativeSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleMethod;
	static void NewProp_bRequireSearchSampleCoverage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireSearchSampleCoverage;
	static void NewProp_bOnlyConnectedToHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyConnectedToHull;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNumSamples;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSampleSpacing;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NegativeSpaceTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateClusterConvexHullsFromChildrenHullsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SphereCovering = { "SphereCovering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, SphereCovering), Z_Construct_UScriptStruct_FDataflowSphereCovering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCovering_MetaData), NewProp_SphereCovering_MetaData) }; // 995249109
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ConvexCount = { "ConvexCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, ConvexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexCount_MetaData), NewProp_ConvexCount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTolerance_MetaData), NewProp_ErrorTolerance_MetaData) };
void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_SetBit(void* Obj)
{
	((FGenerateClusterConvexHullsFromChildrenHullsDataflowNode*)Obj)->bPreferExternalCollisionShapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes = { "bPreferExternalCollisionShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferExternalCollisionShapes_MetaData), NewProp_bPreferExternalCollisionShapes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalSelectionFilter_MetaData), NewProp_OptionalSelectionFilter_MetaData) }; // 2980507218
void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit(void* Obj)
{
	((FGenerateClusterConvexHullsFromChildrenHullsDataflowNode*)Obj)->bProtectNegativeSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace = { "bProtectNegativeSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProtectNegativeSpace_MetaData), NewProp_bProtectNegativeSpace_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SampleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SampleMethod = { "SampleMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, SampleMethod), Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMethod_MetaData), NewProp_SampleMethod_MetaData) }; // 4026483468
void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage_SetBit(void* Obj)
{
	((FGenerateClusterConvexHullsFromChildrenHullsDataflowNode*)Obj)->bRequireSearchSampleCoverage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage = { "bRequireSearchSampleCoverage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireSearchSampleCoverage_MetaData), NewProp_bRequireSearchSampleCoverage_MetaData) };
void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull_SetBit(void* Obj)
{
	((FGenerateClusterConvexHullsFromChildrenHullsDataflowNode*)Obj)->bOnlyConnectedToHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull = { "bOnlyConnectedToHull", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyConnectedToHull_MetaData), NewProp_bOnlyConnectedToHull_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_TargetNumSamples = { "TargetNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, TargetNumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNumSamples_MetaData), NewProp_TargetNumSamples_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinSampleSpacing = { "MinSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, MinSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSampleSpacing_MetaData), NewProp_MinSampleSpacing_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance = { "NegativeSpaceTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, NegativeSpaceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeSpaceTolerance_MetaData), NewProp_NegativeSpaceTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, MinRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRadius_MetaData), NewProp_MinRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SphereCovering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ConvexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SampleMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SampleMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_TargetNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinSampleSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GenerateClusterConvexHullsFromChildrenHullsDataflowNode",
	Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::PropPointers),
	sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode),
	alignof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.InnerSingleton;
}
// End ScriptStruct FGenerateClusterConvexHullsFromChildrenHullsDataflowNode

// Begin ScriptStruct FClearConvexHullsDataflowNode
static_assert(std::is_polymorphic<FClearConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClearConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClearConvexHullsDataflowNode;
class UScriptStruct* FClearConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClearConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClearConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClearConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClearConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClearConvexHullsDataflowNode>()
{
	return FClearConvexHullsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Clear convex hulls from a collection */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Clear convex hulls from a collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** [Optional] selection of transforms to clear convex on, if not set all the transform will be used */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "[Optional] selection of transforms to clear convex on, if not set all the transform will be used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClearConvexHullsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClearConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClearConvexHullsDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::NewProp_TransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ClearConvexHullsDataflowNode",
	Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::PropPointers),
	sizeof(FClearConvexHullsDataflowNode),
	alignof(FClearConvexHullsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ClearConvexHullsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClearConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClearConvexHullsDataflowNode.InnerSingleton;
}
// End ScriptStruct FClearConvexHullsDataflowNode

// Begin ScriptStruct FMergeConvexHullsDataflowNode
static_assert(std::is_polymorphic<FMergeConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMergeConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode;
class UScriptStruct* FMergeConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MergeConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMergeConvexHullsDataflowNode>()
{
	return FMergeConvexHullsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Merge convex hulls on transforms with multiple hulls */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Merge convex hulls on transforms with multiple hulls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCovering_MetaData[] = {
		{ "Comment", "// A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres.\n" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConvexCount_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Maximum number of convex to generate per transform. Ignored if < 0. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Maximum number of convex to generate per transform. Ignored if < 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Error tolerance to use to decide to merge leaf convex together.\n\x09* This is in centimeters and represents the side of a cube, the volume of which will be used as threshold\n\x09* to know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex\n\x09*/" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Error tolerance to use to decide to merge leaf convex together.\nThis is in centimeters and represents the side of a cube, the volume of which will be used as threshold\nto know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex" },
		{ "UIMax", "100." },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProtectNegativeSpace_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to use a sphere cover to define negative space that should not be covered by convex hulls */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to use a sphere cover to define negative space that should not be covered by convex hulls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeNegativeSpacePerBone_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to compute separate negative space for each bone. Otherwise, a single negative space will be computed once and re-used for all bones. */" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to compute separate negative space for each bone. Otherwise, a single negative space will be computed once and re-used for all bones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMethod_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Method to use to find and sample negative space */" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Method to use to find and sample negative space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireSearchSampleCoverage_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to require that all candidate locations identified by Voxel Search are covered by negative space samples, up to the specified Min Sample Spacing. Only applies to Voxel Search. */" },
		{ "EditCondition", "bProtectNegativeSpace && SampleMethod == ENegativeSpaceSampleMethodDataflowEnum::VoxelSearch" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to require that all candidate locations identified by Voxel Search are covered by negative space samples, up to the specified Min Sample Spacing. Only applies to Voxel Search." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyConnectedToHull_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** When performing Voxel Search, only look for negative space that is connected out to the convex hull. This removes inaccessable internal negative space from consideration. Only applies to Voxel Search. */" },
		{ "EditCondition", "bProtectNegativeSpace && SampleMethod == ENegativeSpaceSampleMethodDataflowEnum::VoxelSearch" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "When performing Voxel Search, only look for negative space that is connected out to the convex hull. This removes inaccessable internal negative space from consideration. Only applies to Voxel Search." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNumSamples_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Approximate number of spheres to consider when covering negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Approximate number of spheres to consider when covering negative space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSampleSpacing_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeSpaceTolerance_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Amount of space to leave between convex hulls and protected negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Amount of space to leave between convex hulls and protected negative space" },
		{ "UIMin", "0.100000" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Spheres smaller than this are not included in the negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Spheres smaller than this are not included in the negative space" },
		{ "Units", "cm" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCovering;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConvexCount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorTolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
	static void NewProp_bProtectNegativeSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProtectNegativeSpace;
	static void NewProp_bComputeNegativeSpacePerBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNegativeSpacePerBone;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleMethod;
	static void NewProp_bRequireSearchSampleCoverage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireSearchSampleCoverage;
	static void NewProp_bOnlyConnectedToHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyConnectedToHull;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNumSamples;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSampleSpacing;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NegativeSpaceTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMergeConvexHullsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SphereCovering = { "SphereCovering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, SphereCovering), Z_Construct_UScriptStruct_FDataflowSphereCovering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCovering_MetaData), NewProp_SphereCovering_MetaData) }; // 995249109
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MaxConvexCount = { "MaxConvexCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, MaxConvexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConvexCount_MetaData), NewProp_MaxConvexCount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTolerance_MetaData), NewProp_ErrorTolerance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalSelectionFilter_MetaData), NewProp_OptionalSelectionFilter_MetaData) }; // 2980507218
void Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit(void* Obj)
{
	((FMergeConvexHullsDataflowNode*)Obj)->bProtectNegativeSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace = { "bProtectNegativeSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMergeConvexHullsDataflowNode), &Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProtectNegativeSpace_MetaData), NewProp_bProtectNegativeSpace_MetaData) };
void Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bComputeNegativeSpacePerBone_SetBit(void* Obj)
{
	((FMergeConvexHullsDataflowNode*)Obj)->bComputeNegativeSpacePerBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bComputeNegativeSpacePerBone = { "bComputeNegativeSpacePerBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMergeConvexHullsDataflowNode), &Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bComputeNegativeSpacePerBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeNegativeSpacePerBone_MetaData), NewProp_bComputeNegativeSpacePerBone_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SampleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SampleMethod = { "SampleMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, SampleMethod), Z_Construct_UEnum_GeometryCollectionNodes_ENegativeSpaceSampleMethodDataflowEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMethod_MetaData), NewProp_SampleMethod_MetaData) }; // 4026483468
void Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage_SetBit(void* Obj)
{
	((FMergeConvexHullsDataflowNode*)Obj)->bRequireSearchSampleCoverage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage = { "bRequireSearchSampleCoverage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMergeConvexHullsDataflowNode), &Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireSearchSampleCoverage_MetaData), NewProp_bRequireSearchSampleCoverage_MetaData) };
void Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull_SetBit(void* Obj)
{
	((FMergeConvexHullsDataflowNode*)Obj)->bOnlyConnectedToHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull = { "bOnlyConnectedToHull", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMergeConvexHullsDataflowNode), &Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyConnectedToHull_MetaData), NewProp_bOnlyConnectedToHull_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_TargetNumSamples = { "TargetNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, TargetNumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNumSamples_MetaData), NewProp_TargetNumSamples_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinSampleSpacing = { "MinSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, MinSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSampleSpacing_MetaData), NewProp_MinSampleSpacing_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance = { "NegativeSpaceTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, NegativeSpaceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeSpaceTolerance_MetaData), NewProp_NegativeSpaceTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, MinRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRadius_MetaData), NewProp_MinRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SphereCovering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MaxConvexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_ErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bComputeNegativeSpacePerBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SampleMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SampleMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bRequireSearchSampleCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bOnlyConnectedToHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_TargetNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinSampleSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MergeConvexHullsDataflowNode",
	Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::PropPointers),
	sizeof(FMergeConvexHullsDataflowNode),
	alignof(FMergeConvexHullsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.InnerSingleton;
}
// End ScriptStruct FMergeConvexHullsDataflowNode

// Begin ScriptStruct FUpdateVolumeAttributesDataflowNode
static_assert(std::is_polymorphic<FUpdateVolumeAttributesDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUpdateVolumeAttributesDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode;
class UScriptStruct* FUpdateVolumeAttributesDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UpdateVolumeAttributesDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUpdateVolumeAttributesDataflowNode>()
{
	return FUpdateVolumeAttributesDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Update the Volume and Size attributes on the target Collection (and add them if they were not present)\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Update the Volume and Size attributes on the target Collection (and add them if they were not present)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateVolumeAttributesDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateVolumeAttributesDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"UpdateVolumeAttributesDataflowNode",
	Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::PropPointers),
	sizeof(FUpdateVolumeAttributesDataflowNode),
	alignof(FUpdateVolumeAttributesDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.InnerSingleton;
}
// End ScriptStruct FUpdateVolumeAttributesDataflowNode

// Begin ScriptStruct FGetConvexHullVolumeDataflowNode
static_assert(std::is_polymorphic<FGetConvexHullVolumeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetConvexHullVolumeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode;
class UScriptStruct* FGetConvexHullVolumeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetConvexHullVolumeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetConvexHullVolumeDataflowNode>()
{
	return FGetConvexHullVolumeDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get the sum of volumes of the convex hulls on the selected nodes\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Get the sum of volumes of the convex hulls on the selected nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** The transforms to consider */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "The transforms to consider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Comment", "/** Sum of convex hull volumes */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Sum of convex hull volumes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSumChildrenForClustersWithoutHulls_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** For any cluster transform that has no convex hulls, whether to fall back to the convex hulls of the cluster's children. Otherwise, the cluster will not add to the total volume sum. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "For any cluster transform that has no convex hulls, whether to fall back to the convex hulls of the cluster's children. Otherwise, the cluster will not add to the total volume sum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVolumeOfUnion_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to take the volume of the union of selected hulls, rather than the sum of each hull volume separately. This is more expensive but more accurate when hulls overlap. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to take the volume of the union of selected hulls, rather than the sum of each hull volume separately. This is more expensive but more accurate when hulls overlap." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static void NewProp_bSumChildrenForClustersWithoutHulls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSumChildrenForClustersWithoutHulls;
	static void NewProp_bVolumeOfUnion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVolumeOfUnion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetConvexHullVolumeDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetConvexHullVolumeDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetConvexHullVolumeDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetConvexHullVolumeDataflowNode, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
void Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls_SetBit(void* Obj)
{
	((FGetConvexHullVolumeDataflowNode*)Obj)->bSumChildrenForClustersWithoutHulls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls = { "bSumChildrenForClustersWithoutHulls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGetConvexHullVolumeDataflowNode), &Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSumChildrenForClustersWithoutHulls_MetaData), NewProp_bSumChildrenForClustersWithoutHulls_MetaData) };
void Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion_SetBit(void* Obj)
{
	((FGetConvexHullVolumeDataflowNode*)Obj)->bVolumeOfUnion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion = { "bVolumeOfUnion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGetConvexHullVolumeDataflowNode), &Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVolumeOfUnion_MetaData), NewProp_bVolumeOfUnion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GetConvexHullVolumeDataflowNode",
	Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::PropPointers),
	sizeof(FGetConvexHullVolumeDataflowNode),
	alignof(FGetConvexHullVolumeDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetConvexHullVolumeDataflowNode

// Begin ScriptStruct FFixTinyGeoDataflowNode
static_assert(std::is_polymorphic<FFixTinyGeoDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFixTinyGeoDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FixTinyGeoDataflowNode;
class UScriptStruct* FFixTinyGeoDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FixTinyGeoDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FixTinyGeoDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("FixTinyGeoDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FixTinyGeoDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FFixTinyGeoDataflowNode>()
{
	return FFixTinyGeoDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n * Editor Fracture Mode / Utilities / TinyGeo tool\n * Merge pieces of geometry onto their neighbors -- use it to, for example, clean up too small pieces of geometry.\n * \n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Utilities / TinyGeo tool\nMerge pieces of geometry onto their neighbors -- use it to, for example, clean up too small pieces of geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to use */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Collection to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** The selected pieces to use */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "The selected pieces to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeType_MetaData[] = {
		{ "Category", "Distribution" },
		{ "Comment", "/** Whether to merge small geometry, or small clusters */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to merge small geometry, or small clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnFractureLevel_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "/** Only consider bones at the current Fracture Level */" },
		{ "EditCondition", "!bFractureLevelIsAll && MergeType == EFixTinyGeoMergeType::MergeClusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Only consider bones at the current Fracture Level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyClusters_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "/** Only auto - consider clusters for merging.Note that leaf nodes can still be consider if manually selected. */" },
		{ "EditCondition", "!bFractureLevelIsAll && MergeType == EFixTinyGeoMergeType::MergeClusters && bOnFractureLevel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Only auto - consider clusters for merging.Note that leaf nodes can still be consider if manually selected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySameParent_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "/** Only merge to neighbors with the same parent in the hierarchy */" },
		{ "EditCondition", "MergeType == EFixTinyGeoMergeType::MergeClusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Only merge to neighbors with the same parent in the hierarchy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFractureLevelIsAll_MetaData[] = {
		{ "Comment", "/** Helper variable to let the EditConditions above check whether the Fracture Level is set to 'All' */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Helper variable to let the EditConditions above check whether the Fracture Level is set to 'All'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighborSelection_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "DisplayName", "Merge To" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyToConnected_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "/** Only merge pieces that are connected in the proximity graph.If unchecked, connected pieces will still be favored, but if none are available the closest disconnected piece can be merged. */" },
		{ "EditCondition", "MergeType == EFixTinyGeoMergeType::MergeClusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Only merge pieces that are connected in the proximity graph.If unchecked, connected pieces will still be favored, but if none are available the closest disconnected piece can be merged." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseBoneSelection_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "/** Options for using the current bone selection */" },
		{ "DisplayName", "Bone Selection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Options for using the current bone selection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVolumeCubeRoot_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ClampMin", ".00001" },
		{ "Comment", "/** If size (cube root of volume) is less than this value, geometry should be merged into neighbors -- i.e. a value of 2 merges geometry smaller than a 2x2x2 cube */" },
		{ "DisplayName", "MinSize" },
		{ "EditCondition", "SelectionMethod == EFixTinyGeoGeometrySelectionMethod::VolumeCubeRoot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If size (cube root of volume) is less than this value, geometry should be merged into neighbors -- i.e. a value of 2 merges geometry smaller than a 2x2x2 cube" },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeVolume_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If cube root of volume relative to the overall shape's cube root of volume is less than this, the geometry should be merged into its neighbors.\n\x09(Note: This is a bit different from the histogram viewer's \"Relative Size,\" which instead shows values relative to the largest rigid bone.) */" },
		{ "EditCondition", "SelectionMethod == EFixTinyGeoGeometrySelectionMethod::RelativeVolume" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If cube root of volume relative to the overall shape's cube root of volume is less than this, the geometry should be merged into its neighbors.\n      (Note: This is a bit different from the histogram viewer's \"Relative Size,\" which instead shows values relative to the largest rigid bone.)" },
		{ "UIMax", ".1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\n\x09 * These extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\x09 *\n\x09 * Note this is *only* useful for simulations that use particle-implicit collisions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\nThese extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\nNote this is *only* useful for simulations that use particle-implicit collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\n\x09 * Only used if Add Samples For Collision is enabled\n\x09 */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Point Spacing" },
		{ "EditCondition", "AddSamplesForCollision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\nOnly used if Add Samples For Collision is enabled" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MergeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeType;
	static void NewProp_bOnFractureLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnFractureLevel;
	static void NewProp_bOnlyClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyClusters;
	static void NewProp_bOnlySameParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySameParent;
	static void NewProp_bFractureLevelIsAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFractureLevelIsAll;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NeighborSelection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NeighborSelection;
	static void NewProp_bOnlyToConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyToConnected;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UseBoneSelection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UseBoneSelection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolumeCubeRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RelativeVolume;
	static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFixTinyGeoDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixTinyGeoDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixTinyGeoDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_MergeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_MergeType = { "MergeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixTinyGeoDataflowNode, MergeType), Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeType_MetaData), NewProp_MergeType_MetaData) }; // 615145477
void Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnFractureLevel_SetBit(void* Obj)
{
	((FFixTinyGeoDataflowNode*)Obj)->bOnFractureLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnFractureLevel = { "bOnFractureLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFixTinyGeoDataflowNode), &Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnFractureLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnFractureLevel_MetaData), NewProp_bOnFractureLevel_MetaData) };
void Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlyClusters_SetBit(void* Obj)
{
	((FFixTinyGeoDataflowNode*)Obj)->bOnlyClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlyClusters = { "bOnlyClusters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFixTinyGeoDataflowNode), &Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlyClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyClusters_MetaData), NewProp_bOnlyClusters_MetaData) };
void Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlySameParent_SetBit(void* Obj)
{
	((FFixTinyGeoDataflowNode*)Obj)->bOnlySameParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlySameParent = { "bOnlySameParent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFixTinyGeoDataflowNode), &Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlySameParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlySameParent_MetaData), NewProp_bOnlySameParent_MetaData) };
void Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bFractureLevelIsAll_SetBit(void* Obj)
{
	((FFixTinyGeoDataflowNode*)Obj)->bFractureLevelIsAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bFractureLevelIsAll = { "bFractureLevelIsAll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFixTinyGeoDataflowNode), &Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bFractureLevelIsAll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFractureLevelIsAll_MetaData), NewProp_bFractureLevelIsAll_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_NeighborSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_NeighborSelection = { "NeighborSelection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixTinyGeoDataflowNode, NeighborSelection), Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighborSelection_MetaData), NewProp_NeighborSelection_MetaData) }; // 1767557541
void Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlyToConnected_SetBit(void* Obj)
{
	((FFixTinyGeoDataflowNode*)Obj)->bOnlyToConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlyToConnected = { "bOnlyToConnected", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFixTinyGeoDataflowNode), &Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlyToConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyToConnected_MetaData), NewProp_bOnlyToConnected_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_UseBoneSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_UseBoneSelection = { "UseBoneSelection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixTinyGeoDataflowNode, UseBoneSelection), Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseBoneSelection_MetaData), NewProp_UseBoneSelection_MetaData) }; // 1462676408
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_SelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixTinyGeoDataflowNode, SelectionMethod), Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMethod_MetaData), NewProp_SelectionMethod_MetaData) }; // 2945303395
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_MinVolumeCubeRoot = { "MinVolumeCubeRoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixTinyGeoDataflowNode, MinVolumeCubeRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVolumeCubeRoot_MetaData), NewProp_MinVolumeCubeRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_RelativeVolume = { "RelativeVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixTinyGeoDataflowNode, RelativeVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeVolume_MetaData), NewProp_RelativeVolume_MetaData) };
void Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
{
	((FFixTinyGeoDataflowNode*)Obj)->AddSamplesForCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFixTinyGeoDataflowNode), &Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSamplesForCollision_MetaData), NewProp_AddSamplesForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixTinyGeoDataflowNode, CollisionSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleSpacing_MetaData), NewProp_CollisionSampleSpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_MergeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_MergeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnFractureLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlyClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlySameParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bFractureLevelIsAll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_NeighborSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_NeighborSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_bOnlyToConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_UseBoneSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_UseBoneSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_SelectionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_SelectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_MinVolumeCubeRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_RelativeVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_AddSamplesForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewProp_CollisionSampleSpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"FixTinyGeoDataflowNode",
	Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::PropPointers),
	sizeof(FFixTinyGeoDataflowNode),
	alignof(FFixTinyGeoDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_FixTinyGeoDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FixTinyGeoDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FixTinyGeoDataflowNode.InnerSingleton;
}
// End ScriptStruct FFixTinyGeoDataflowNode

// Begin ScriptStruct FRecomputeNormalsInGeometryCollectionDataflowNode
static_assert(std::is_polymorphic<FRecomputeNormalsInGeometryCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRecomputeNormalsInGeometryCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecomputeNormalsInGeometryCollectionDataflowNode;
class UScriptStruct* FRecomputeNormalsInGeometryCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecomputeNormalsInGeometryCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecomputeNormalsInGeometryCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("RecomputeNormalsInGeometryCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_RecomputeNormalsInGeometryCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FRecomputeNormalsInGeometryCollectionDataflowNode>()
{
	return FRecomputeNormalsInGeometryCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Editor Fracture Mode / Utilities / Normals tool\n * Recompute normals and tangents.\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Utilities / Normals tool\nRecompute normals and tangents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to use */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Collection to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** The selected pieces to use */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "The selected pieces to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyTangents_MetaData[] = {
		{ "Category", "RecomputeSettings" },
		{ "Comment", "/** Whether to only recompute tangents, and leave normals as they were */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to only recompute tangents, and leave normals as they were" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeSharpEdges_MetaData[] = {
		{ "Category", "RecomputeSettings" },
		{ "Comment", "/** If true, update where edges are 'sharp' by comparing adjacent triangle face normals vs the Sharp Edge Angle Threshold. */" },
		{ "EditCondition", "!bOnlyTangents" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If true, update where edges are 'sharp' by comparing adjacent triangle face normals vs the Sharp Edge Angle Threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharpEdgeAngleThreshold_MetaData[] = {
		{ "Category", "RecomputeSettings" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold on angle of change in face normals across an edge, above which we create a sharp edge if bRecomputeSharpEdges is true */" },
		{ "EditCondition", "bRecomputeSharpEdges && !bOnlyTangents" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Threshold on angle of change in face normals across an edge, above which we create a sharp edge if bRecomputeSharpEdges is true" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyInternalSurfaces_MetaData[] = {
		{ "Category", "RecomputeSettings" },
		{ "Comment", "/** Whether to only change internal surface normals / tangents */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to only change internal surface normals / tangents" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static void NewProp_bOnlyTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyTangents;
	static void NewProp_bRecomputeSharpEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeSharpEdges;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SharpEdgeAngleThreshold;
	static void NewProp_bOnlyInternalSurfaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyInternalSurfaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecomputeNormalsInGeometryCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecomputeNormalsInGeometryCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecomputeNormalsInGeometryCollectionDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
void Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bOnlyTangents_SetBit(void* Obj)
{
	((FRecomputeNormalsInGeometryCollectionDataflowNode*)Obj)->bOnlyTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bOnlyTangents = { "bOnlyTangents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRecomputeNormalsInGeometryCollectionDataflowNode), &Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bOnlyTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyTangents_MetaData), NewProp_bOnlyTangents_MetaData) };
void Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bRecomputeSharpEdges_SetBit(void* Obj)
{
	((FRecomputeNormalsInGeometryCollectionDataflowNode*)Obj)->bRecomputeSharpEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bRecomputeSharpEdges = { "bRecomputeSharpEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRecomputeNormalsInGeometryCollectionDataflowNode), &Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bRecomputeSharpEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecomputeSharpEdges_MetaData), NewProp_bRecomputeSharpEdges_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_SharpEdgeAngleThreshold = { "SharpEdgeAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecomputeNormalsInGeometryCollectionDataflowNode, SharpEdgeAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharpEdgeAngleThreshold_MetaData), NewProp_SharpEdgeAngleThreshold_MetaData) };
void Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bOnlyInternalSurfaces_SetBit(void* Obj)
{
	((FRecomputeNormalsInGeometryCollectionDataflowNode*)Obj)->bOnlyInternalSurfaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bOnlyInternalSurfaces = { "bOnlyInternalSurfaces", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRecomputeNormalsInGeometryCollectionDataflowNode), &Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bOnlyInternalSurfaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyInternalSurfaces_MetaData), NewProp_bOnlyInternalSurfaces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bOnlyTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bRecomputeSharpEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_SharpEdgeAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewProp_bOnlyInternalSurfaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"RecomputeNormalsInGeometryCollectionDataflowNode",
	Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::PropPointers),
	sizeof(FRecomputeNormalsInGeometryCollectionDataflowNode),
	alignof(FRecomputeNormalsInGeometryCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_RecomputeNormalsInGeometryCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecomputeNormalsInGeometryCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecomputeNormalsInGeometryCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FRecomputeNormalsInGeometryCollectionDataflowNode

// Begin ScriptStruct FResampleGeometryCollectionDataflowNode
static_assert(std::is_polymorphic<FResampleGeometryCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FResampleGeometryCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResampleGeometryCollectionDataflowNode;
class UScriptStruct* FResampleGeometryCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResampleGeometryCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResampleGeometryCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ResampleGeometryCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ResampleGeometryCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FResampleGeometryCollectionDataflowNode>()
{
	return FResampleGeometryCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Editor Fracture Mode / Utilities / Resample tool\n * Resample to add collision particles in large flat regions that otherwise might have poor collision response.\n * Only useful to help improve Particle - Implicit collisions.\n * \n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Utilities / Resample tool\nResample to add collision particles in large flat regions that otherwise might have poor collision response.\nOnly useful to help improve Particle - Implicit collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to use */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Collection to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** The selected pieces to use */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "The selected pieces to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\n\x09 * These extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\x09 *\n\x09 * Note this is *only* useful for simulations that use particle-implicit collisions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\nThese extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\nNote this is *only* useful for simulations that use particle-implicit collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\n\x09 * Only used if Add Samples For Collision is enabled\n\x09 */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Point Spacing" },
		{ "EditCondition", "AddSamplesForCollision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\nOnly used if Add Samples For Collision is enabled" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResampleGeometryCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResampleGeometryCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResampleGeometryCollectionDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
void Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
{
	((FResampleGeometryCollectionDataflowNode*)Obj)->AddSamplesForCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FResampleGeometryCollectionDataflowNode), &Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSamplesForCollision_MetaData), NewProp_AddSamplesForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResampleGeometryCollectionDataflowNode, CollisionSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleSpacing_MetaData), NewProp_CollisionSampleSpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_AddSamplesForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewProp_CollisionSampleSpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ResampleGeometryCollectionDataflowNode",
	Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::PropPointers),
	sizeof(FResampleGeometryCollectionDataflowNode),
	alignof(FResampleGeometryCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ResampleGeometryCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResampleGeometryCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ResampleGeometryCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FResampleGeometryCollectionDataflowNode

// Begin ScriptStruct FValidateGeometryCollectionDataflowNode
static_assert(std::is_polymorphic<FValidateGeometryCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FValidateGeometryCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValidateGeometryCollectionDataflowNode;
class UScriptStruct* FValidateGeometryCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValidateGeometryCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValidateGeometryCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ValidateGeometryCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ValidateGeometryCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FValidateGeometryCollectionDataflowNode>()
{
	return FValidateGeometryCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Editor Fracture Mode / Utilities / Validate tool\n * Ensures that geometrycollection is valid and clean.\n * \n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Utilities / Validate tool\nEnsures that geometrycollection is valid and clean." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to use */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Collection to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveUnreferencedGeometry_MetaData[] = {
		{ "Category", "CleanUnused" },
		{ "Comment", "/** Find and remove any unused geometry data */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Find and remove any unused geometry data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveClustersOfOne_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Whether to collapse any clusters with only a single child */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to collapse any clusters with only a single child" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDanglingClusters_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Remove dangling clusters -- Note this can invalidate caches */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Remove dangling clusters -- Note this can invalidate caches" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static void NewProp_bRemoveUnreferencedGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveUnreferencedGeometry;
	static void NewProp_bRemoveClustersOfOne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveClustersOfOne;
	static void NewProp_bRemoveDanglingClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDanglingClusters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValidateGeometryCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValidateGeometryCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
void Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveUnreferencedGeometry_SetBit(void* Obj)
{
	((FValidateGeometryCollectionDataflowNode*)Obj)->bRemoveUnreferencedGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveUnreferencedGeometry = { "bRemoveUnreferencedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FValidateGeometryCollectionDataflowNode), &Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveUnreferencedGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveUnreferencedGeometry_MetaData), NewProp_bRemoveUnreferencedGeometry_MetaData) };
void Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveClustersOfOne_SetBit(void* Obj)
{
	((FValidateGeometryCollectionDataflowNode*)Obj)->bRemoveClustersOfOne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveClustersOfOne = { "bRemoveClustersOfOne", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FValidateGeometryCollectionDataflowNode), &Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveClustersOfOne_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveClustersOfOne_MetaData), NewProp_bRemoveClustersOfOne_MetaData) };
void Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveDanglingClusters_SetBit(void* Obj)
{
	((FValidateGeometryCollectionDataflowNode*)Obj)->bRemoveDanglingClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveDanglingClusters = { "bRemoveDanglingClusters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FValidateGeometryCollectionDataflowNode), &Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveDanglingClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveDanglingClusters_MetaData), NewProp_bRemoveDanglingClusters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveUnreferencedGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveClustersOfOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewProp_bRemoveDanglingClusters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ValidateGeometryCollectionDataflowNode",
	Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::PropPointers),
	sizeof(FValidateGeometryCollectionDataflowNode),
	alignof(FValidateGeometryCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ValidateGeometryCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValidateGeometryCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValidateGeometryCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FValidateGeometryCollectionDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConvexOverlapRemovalMethodEnum_StaticEnum, TEXT("EConvexOverlapRemovalMethodEnum"), &Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2354843998U) },
		{ ENegativeSpaceSampleMethodDataflowEnum_StaticEnum, TEXT("ENegativeSpaceSampleMethodDataflowEnum"), &Z_Registration_Info_UEnum_ENegativeSpaceSampleMethodDataflowEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4026483468U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowConvexDecompositionSettings::StaticStruct, Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewStructOps, TEXT("DataflowConvexDecompositionSettings"), &Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowConvexDecompositionSettings), 1174734109U) },
		{ FMakeDataflowConvexDecompositionSettingsNode::StaticStruct, Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewStructOps, TEXT("MakeDataflowConvexDecompositionSettingsNode"), &Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeDataflowConvexDecompositionSettingsNode), 140429082U) },
		{ FCreateLeafConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewStructOps, TEXT("CreateLeafConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateLeafConvexHullsDataflowNode), 2392163507U) },
		{ FSimplifyConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewStructOps, TEXT("SimplifyConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimplifyConvexHullsDataflowNode), 2810588655U) },
		{ FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewStructOps, TEXT("CreateNonOverlappingConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateNonOverlappingConvexHullsDataflowNode), 1004786789U) },
		{ FDataflowSphereCovering::StaticStruct, Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::NewStructOps, TEXT("DataflowSphereCovering"), &Z_Registration_Info_UScriptStruct_DataflowSphereCovering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSphereCovering), 995249109U) },
		{ FGenerateClusterConvexHullsFromLeafHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewStructOps, TEXT("GenerateClusterConvexHullsFromLeafHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode), 2148783075U) },
		{ FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewStructOps, TEXT("GenerateClusterConvexHullsFromChildrenHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode), 1321567236U) },
		{ FClearConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClearConvexHullsDataflowNode_Statics::NewStructOps, TEXT("ClearConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_ClearConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClearConvexHullsDataflowNode), 1687935509U) },
		{ FMergeConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewStructOps, TEXT("MergeConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMergeConvexHullsDataflowNode), 2985087566U) },
		{ FUpdateVolumeAttributesDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewStructOps, TEXT("UpdateVolumeAttributesDataflowNode"), &Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateVolumeAttributesDataflowNode), 1648890509U) },
		{ FGetConvexHullVolumeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewStructOps, TEXT("GetConvexHullVolumeDataflowNode"), &Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetConvexHullVolumeDataflowNode), 624764342U) },
		{ FFixTinyGeoDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFixTinyGeoDataflowNode_Statics::NewStructOps, TEXT("FixTinyGeoDataflowNode"), &Z_Registration_Info_UScriptStruct_FixTinyGeoDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFixTinyGeoDataflowNode), 831067657U) },
		{ FRecomputeNormalsInGeometryCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FRecomputeNormalsInGeometryCollectionDataflowNode_Statics::NewStructOps, TEXT("RecomputeNormalsInGeometryCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_RecomputeNormalsInGeometryCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecomputeNormalsInGeometryCollectionDataflowNode), 837035997U) },
		{ FResampleGeometryCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FResampleGeometryCollectionDataflowNode_Statics::NewStructOps, TEXT("ResampleGeometryCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_ResampleGeometryCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResampleGeometryCollectionDataflowNode), 3120633516U) },
		{ FValidateGeometryCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FValidateGeometryCollectionDataflowNode_Statics::NewStructOps, TEXT("ValidateGeometryCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_ValidateGeometryCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValidateGeometryCollectionDataflowNode), 542537964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_3645359615(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
