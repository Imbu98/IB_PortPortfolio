// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h"
#include "DataflowEnginePlugin/Public/Dataflow/DataflowConnectionTypes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionTransferVertexAttributeNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection();
DATAFLOWENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionAttributeKey();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin Enum EDataflowTransferVertexAttributeNodeFalloff
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeFalloff;
static UEnum* EDataflowTransferVertexAttributeNodeFalloff_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeFalloff.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeFalloff.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EDataflowTransferVertexAttributeNodeFalloff"));
	}
	return Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeFalloff.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeFalloff>()
{
	return EDataflowTransferVertexAttributeNodeFalloff_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EDataflowTransferVertexAttributeNodeFalloff::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "Linear.Comment", "/** Linear falloff based on distance from triangle*/" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "EDataflowTransferVertexAttributeNodeFalloff::Linear" },
		{ "Linear.ToolTip", "Linear falloff based on distance from triangle" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "None.Comment", "/** No distance falloff */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDataflowTransferVertexAttributeNodeFalloff::None" },
		{ "None.ToolTip", "No distance falloff" },
		{ "Squared.Comment", "/** Squared falloff based on distance from triangle*/" },
		{ "Squared.DisplayName", "Squared" },
		{ "Squared.Name", "EDataflowTransferVertexAttributeNodeFalloff::Squared" },
		{ "Squared.ToolTip", "Squared falloff based on distance from triangle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataflowTransferVertexAttributeNodeFalloff::Squared", (int64)EDataflowTransferVertexAttributeNodeFalloff::Squared },
		{ "EDataflowTransferVertexAttributeNodeFalloff::Linear", (int64)EDataflowTransferVertexAttributeNodeFalloff::Linear },
		{ "EDataflowTransferVertexAttributeNodeFalloff::None", (int64)EDataflowTransferVertexAttributeNodeFalloff::None },
		{ "EDataflowTransferVertexAttributeNodeFalloff::Dataflow_Max", (int64)EDataflowTransferVertexAttributeNodeFalloff::Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"EDataflowTransferVertexAttributeNodeFalloff",
	"EDataflowTransferVertexAttributeNodeFalloff",
	Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeFalloff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeFalloff.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeFalloff.InnerSingleton;
}
// End Enum EDataflowTransferVertexAttributeNodeFalloff

// Begin Enum EDataflowTransferVertexAttributeNodeSourceScale
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeSourceScale;
static UEnum* EDataflowTransferVertexAttributeNodeSourceScale_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeSourceScale.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeSourceScale.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EDataflowTransferVertexAttributeNodeSourceScale"));
	}
	return Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeSourceScale.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeSourceScale>()
{
	return EDataflowTransferVertexAttributeNodeSourceScale_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Asset_Bound.Comment", "/** Bounding volume hierarchy cell size based on max length of the bounding box of the whole asset*/" },
		{ "Asset_Bound.DisplayName", "Asset Max Bound" },
		{ "Asset_Bound.Name", "EDataflowTransferVertexAttributeNodeSourceScale::Asset_Bound" },
		{ "Asset_Bound.ToolTip", "Bounding volume hierarchy cell size based on max length of the bounding box of the whole asset" },
		{ "Asset_Edge.Comment", "/** Bounding volume hierarchy cell size based on max edge length of the whole asset*/" },
		{ "Asset_Edge.DisplayName", "Asset Max Edge" },
		{ "Asset_Edge.Name", "EDataflowTransferVertexAttributeNodeSourceScale::Asset_Edge" },
		{ "Asset_Edge.ToolTip", "Bounding volume hierarchy cell size based on max edge length of the whole asset" },
		{ "BlueprintType", "true" },
		{ "Component_Edge.Comment", "/** Bounding volume hierarchy cell size based on max edge length of each geometry group*/" },
		{ "Component_Edge.DisplayName", "Component Max Edge" },
		{ "Component_Edge.Name", "EDataflowTransferVertexAttributeNodeSourceScale::Component_Edge" },
		{ "Component_Edge.ToolTip", "Bounding volume hierarchy cell size based on max edge length of each geometry group" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EDataflowTransferVertexAttributeNodeSourceScale::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataflowTransferVertexAttributeNodeSourceScale::Component_Edge", (int64)EDataflowTransferVertexAttributeNodeSourceScale::Component_Edge },
		{ "EDataflowTransferVertexAttributeNodeSourceScale::Asset_Edge", (int64)EDataflowTransferVertexAttributeNodeSourceScale::Asset_Edge },
		{ "EDataflowTransferVertexAttributeNodeSourceScale::Asset_Bound", (int64)EDataflowTransferVertexAttributeNodeSourceScale::Asset_Bound },
		{ "EDataflowTransferVertexAttributeNodeSourceScale::Dataflow_Max", (int64)EDataflowTransferVertexAttributeNodeSourceScale::Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"EDataflowTransferVertexAttributeNodeSourceScale",
	"EDataflowTransferVertexAttributeNodeSourceScale",
	Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeSourceScale.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeSourceScale.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeSourceScale.InnerSingleton;
}
// End Enum EDataflowTransferVertexAttributeNodeSourceScale

// Begin Enum EDataflowTransferVertexAttributeNodeBoundingVolume
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeBoundingVolume;
static UEnum* EDataflowTransferVertexAttributeNodeBoundingVolume_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeBoundingVolume.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeBoundingVolume.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EDataflowTransferVertexAttributeNodeBoundingVolume"));
	}
	return Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeBoundingVolume.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeBoundingVolume>()
{
	return EDataflowTransferVertexAttributeNodeBoundingVolume_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EDataflowTransferVertexAttributeNodeBoundingVolume::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "Triangle.Comment", "/** Bounding volume on triangles of the source triangle mesh*/" },
		{ "Triangle.DisplayName", "Triangle" },
		{ "Triangle.Name", "EDataflowTransferVertexAttributeNodeBoundingVolume::Triangle" },
		{ "Triangle.ToolTip", "Bounding volume on triangles of the source triangle mesh" },
		{ "Vertex.Comment", "/** Bounding volume on vertices of the source triangle mesh*/" },
		{ "Vertex.DisplayName", "Vertex" },
		{ "Vertex.Name", "EDataflowTransferVertexAttributeNodeBoundingVolume::Vertex" },
		{ "Vertex.ToolTip", "Bounding volume on vertices of the source triangle mesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataflowTransferVertexAttributeNodeBoundingVolume::Vertex", (int64)EDataflowTransferVertexAttributeNodeBoundingVolume::Vertex },
		{ "EDataflowTransferVertexAttributeNodeBoundingVolume::Triangle", (int64)EDataflowTransferVertexAttributeNodeBoundingVolume::Triangle },
		{ "EDataflowTransferVertexAttributeNodeBoundingVolume::Dataflow_Max", (int64)EDataflowTransferVertexAttributeNodeBoundingVolume::Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"EDataflowTransferVertexAttributeNodeBoundingVolume",
	"EDataflowTransferVertexAttributeNodeBoundingVolume",
	Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeBoundingVolume.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeBoundingVolume.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeBoundingVolume.InnerSingleton;
}
// End Enum EDataflowTransferVertexAttributeNodeBoundingVolume

// Begin ScriptStruct FGeometryCollectionTransferVertexAttributeNode
static_assert(std::is_polymorphic<FGeometryCollectionTransferVertexAttributeNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGeometryCollectionTransferVertexAttributeNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexAttributeNode;
class UScriptStruct* FGeometryCollectionTransferVertexAttributeNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexAttributeNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexAttributeNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GeometryCollectionTransferVertexAttributeNode"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexAttributeNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGeometryCollectionTransferVertexAttributeNode>()
{
	return FGeometryCollectionTransferVertexAttributeNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Transfer float properties from a source collection to a target collection.\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Transfer float properties from a source collection to a target collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/* Target collection to transfer vertex attribute to. */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Target collection to transfer vertex attribute to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromCollection_MetaData[] = {
		{ "Comment", "/* Source collection to transfer vertex attribute from. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "FromCollection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Source collection to transfer vertex attribute from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeKey_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "/* The name of the vertex attribute to generate indices from. */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "AttributeKey" },
		{ "DisplayName", "AttributeKey" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "The name of the vertex attribute to generate indices from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingVolumeType_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Bounding volume type for source assets[default: Triangle] */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Bounding volume type for source assets[default: Triangle]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceScale_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Bounding volume hierarchy cell size for neighboring vertices to transfer into[default: Asset] */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Bounding volume hierarchy cell size for neighboring vertices to transfer into[default: Asset]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Falloff of source value based on distance from source triangle[default: Squared] */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Falloff of source value based on distance from source triangle[default: Squared]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Threshold based on distance from source triangle.Values past the threshold will falloff.[Defaults to 1 percent of triangle size(0.01)] */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Threshold based on distance from source triangle.Values past the threshold will falloff.[Defaults to 1 percent of triangle size(0.01)]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMultiplier_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Edge multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius. */" },
		{ "EditCondition", "SourceScale == EDataflowTransferVertexAttributeNodeSourceScale::Asset_Edge || SourceScale == EDataflowTransferVertexAttributeNodeSourceScale::Component_Edge" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Edge multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundMultiplier_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Max bound multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius. */" },
		{ "EditCondition", "SourceScale == EDataflowTransferVertexAttributeNodeSourceScale::Asset_Bound" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Max bound multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundingVolumeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundingVolumeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceScale_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionTransferVertexAttributeNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexAttributeNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_FromCollection = { "FromCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexAttributeNode, FromCollection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromCollection_MetaData), NewProp_FromCollection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_AttributeKey = { "AttributeKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexAttributeNode, AttributeKey), Z_Construct_UScriptStruct_FCollectionAttributeKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeKey_MetaData), NewProp_AttributeKey_MetaData) }; // 2309444878
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_BoundingVolumeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_BoundingVolumeType = { "BoundingVolumeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexAttributeNode, BoundingVolumeType), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingVolumeType_MetaData), NewProp_BoundingVolumeType_MetaData) }; // 1050481220
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_SourceScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_SourceScale = { "SourceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexAttributeNode, SourceScale), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceScale_MetaData), NewProp_SourceScale_MetaData) }; // 73878002
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_Falloff_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexAttributeNode, Falloff), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 3488529535
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_FalloffThreshold = { "FalloffThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexAttributeNode, FalloffThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffThreshold_MetaData), NewProp_FalloffThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_EdgeMultiplier = { "EdgeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexAttributeNode, EdgeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMultiplier_MetaData), NewProp_EdgeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_BoundMultiplier = { "BoundMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexAttributeNode, BoundMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundMultiplier_MetaData), NewProp_BoundMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_FromCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_AttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_BoundingVolumeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_BoundingVolumeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_SourceScale_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_SourceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_Falloff_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_FalloffThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_EdgeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewProp_BoundMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GeometryCollectionTransferVertexAttributeNode",
	Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::PropPointers),
	sizeof(FGeometryCollectionTransferVertexAttributeNode),
	alignof(FGeometryCollectionTransferVertexAttributeNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexAttributeNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexAttributeNode.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexAttributeNode.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionTransferVertexAttributeNode

// Begin ScriptStruct FGeometryCollectionTransferVertexSkinWeightsNode
static_assert(std::is_polymorphic<FGeometryCollectionTransferVertexSkinWeightsNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGeometryCollectionTransferVertexSkinWeightsNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexSkinWeightsNode;
class UScriptStruct* FGeometryCollectionTransferVertexSkinWeightsNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexSkinWeightsNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexSkinWeightsNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GeometryCollectionTransferVertexSkinWeightsNode"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexSkinWeightsNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGeometryCollectionTransferVertexSkinWeightsNode>()
{
	return FGeometryCollectionTransferVertexSkinWeightsNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Transfer skin weights from a source collection to a target collection.\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Transfer skin weights from a source collection to a target collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/* Target collection to transfer vertex attribute to. */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Target collection to transfer vertex attribute to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromCollection_MetaData[] = {
		{ "Comment", "/* Source collection to transfer vertex attribute from. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "FromCollection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Source collection to transfer vertex attribute from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingVolumeType_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Bounding volume type for source assets[default: Triangle] */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Bounding volume type for source assets[default: Triangle]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceScale_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Bounding volume hierarchy cell size for neighboring vertices to transfer into[default: Asset] */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Bounding volume hierarchy cell size for neighboring vertices to transfer into[default: Asset]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Falloff of source value based on distance from source triangle[default: Squared] */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Falloff of source value based on distance from source triangle[default: Squared]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Threshold based on distance from source triangle.Values past the threshold will falloff.[Defaults to 1 percent of triangle size(0.01)] */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Threshold based on distance from source triangle.Values past the threshold will falloff.[Defaults to 1 percent of triangle size(0.01)]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMultiplier_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Edge multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius. */" },
		{ "EditCondition", "SourceScale == EDataflowTransferVertexAttributeNodeSourceScale::Asset_Edge || SourceScale == EDataflowTransferVertexAttributeNodeSourceScale::Component_Edge" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Edge multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundMultiplier_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Max bound multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius. */" },
		{ "EditCondition", "SourceScale == EDataflowTransferVertexAttributeNodeSourceScale::Asset_Bound" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Max bound multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromCollection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundingVolumeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundingVolumeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceScale_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionTransferVertexSkinWeightsNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexSkinWeightsNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_FromCollection = { "FromCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexSkinWeightsNode, FromCollection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromCollection_MetaData), NewProp_FromCollection_MetaData) }; // 3814783873
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_BoundingVolumeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_BoundingVolumeType = { "BoundingVolumeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexSkinWeightsNode, BoundingVolumeType), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeBoundingVolume, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingVolumeType_MetaData), NewProp_BoundingVolumeType_MetaData) }; // 1050481220
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_SourceScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_SourceScale = { "SourceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexSkinWeightsNode, SourceScale), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeSourceScale, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceScale_MetaData), NewProp_SourceScale_MetaData) }; // 73878002
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_Falloff_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexSkinWeightsNode, Falloff), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowTransferVertexAttributeNodeFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 3488529535
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_FalloffThreshold = { "FalloffThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexSkinWeightsNode, FalloffThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffThreshold_MetaData), NewProp_FalloffThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_EdgeMultiplier = { "EdgeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexSkinWeightsNode, EdgeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMultiplier_MetaData), NewProp_EdgeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_BoundMultiplier = { "BoundMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexSkinWeightsNode, BoundMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundMultiplier_MetaData), NewProp_BoundMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_FromCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_BoundingVolumeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_BoundingVolumeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_SourceScale_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_SourceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_Falloff_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_FalloffThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_EdgeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewProp_BoundMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GeometryCollectionTransferVertexSkinWeightsNode",
	Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::PropPointers),
	sizeof(FGeometryCollectionTransferVertexSkinWeightsNode),
	alignof(FGeometryCollectionTransferVertexSkinWeightsNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexSkinWeightsNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexSkinWeightsNode.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexSkinWeightsNode.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionTransferVertexSkinWeightsNode

// Begin ScriptStruct FGeometryCollectionSetKinematicVertexSelectionNode
static_assert(std::is_polymorphic<FGeometryCollectionSetKinematicVertexSelectionNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGeometryCollectionSetKinematicVertexSelectionNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionSetKinematicVertexSelectionNode;
class UScriptStruct* FGeometryCollectionSetKinematicVertexSelectionNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSetKinematicVertexSelectionNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionSetKinematicVertexSelectionNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GeometryCollectionSetKinematicVertexSelectionNode"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionSetKinematicVertexSelectionNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGeometryCollectionSetKinematicVertexSelectionNode>()
{
	return FGeometryCollectionSetKinematicVertexSelectionNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set VertexSelection to be kinematic. Note that kinematic particles need skin weights.\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Set VertexSelection to be kinematic. Note that kinematic particles need skin weights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelection_MetaData[] = {
		{ "Comment", "/** Vertex Selection set to be kinematic */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "VertexSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTransferVertexAttributeNode.h" },
		{ "ToolTip", "Vertex Selection set to be kinematic" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionSetKinematicVertexSelectionNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSetKinematicVertexSelectionNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::NewProp_VertexSelection = { "VertexSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSetKinematicVertexSelectionNode, VertexSelection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexSelection_MetaData), NewProp_VertexSelection_MetaData) }; // 1972966787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::NewProp_VertexSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GeometryCollectionSetKinematicVertexSelectionNode",
	Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::PropPointers),
	sizeof(FGeometryCollectionSetKinematicVertexSelectionNode),
	alignof(FGeometryCollectionSetKinematicVertexSelectionNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSetKinematicVertexSelectionNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionSetKinematicVertexSelectionNode.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionSetKinematicVertexSelectionNode.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionSetKinematicVertexSelectionNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataflowTransferVertexAttributeNodeFalloff_StaticEnum, TEXT("EDataflowTransferVertexAttributeNodeFalloff"), &Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeFalloff, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3488529535U) },
		{ EDataflowTransferVertexAttributeNodeSourceScale_StaticEnum, TEXT("EDataflowTransferVertexAttributeNodeSourceScale"), &Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeSourceScale, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 73878002U) },
		{ EDataflowTransferVertexAttributeNodeBoundingVolume_StaticEnum, TEXT("EDataflowTransferVertexAttributeNodeBoundingVolume"), &Z_Registration_Info_UEnum_EDataflowTransferVertexAttributeNodeBoundingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1050481220U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeometryCollectionTransferVertexAttributeNode::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics::NewStructOps, TEXT("GeometryCollectionTransferVertexAttributeNode"), &Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexAttributeNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionTransferVertexAttributeNode), 3311833642U) },
		{ FGeometryCollectionTransferVertexSkinWeightsNode::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics::NewStructOps, TEXT("GeometryCollectionTransferVertexSkinWeightsNode"), &Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexSkinWeightsNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionTransferVertexSkinWeightsNode), 4064342846U) },
		{ FGeometryCollectionSetKinematicVertexSelectionNode::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics::NewStructOps, TEXT("GeometryCollectionSetKinematicVertexSelectionNode"), &Z_Registration_Info_UScriptStruct_GeometryCollectionSetKinematicVertexSelectionNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionSetKinematicVertexSelectionNode), 1688795265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_3306643909(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
