// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionDepNodes/Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h"
#include "DataflowEnginePlugin/Public/Dataflow/DataflowConnectionTypes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionTransferVertexScalarAttributeDepNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionAttributeKey();
GEOMETRYCOLLECTIONDEPNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume();
GEOMETRYCOLLECTIONDEPNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff();
GEOMETRYCOLLECTIONDEPNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale();
GEOMETRYCOLLECTIONDEPNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
// End Cross Module References

// Begin Enum EDataflowTransferNodeFalloff
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowTransferNodeFalloff;
static UEnum* EDataflowTransferNodeFalloff_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferNodeFalloff.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataflowTransferNodeFalloff.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionDepNodes(), TEXT("EDataflowTransferNodeFalloff"));
	}
	return Z_Registration_Info_UEnum_EDataflowTransferNodeFalloff.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONDEPNODES_API UEnum* StaticEnum<EDataflowTransferNodeFalloff>()
{
	return EDataflowTransferNodeFalloff_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Transfer_Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Transfer_Dataflow_Max.Hidden", "" },
		{ "Dataflow_Transfer_Dataflow_Max.Name", "EDataflowTransferNodeFalloff::Dataflow_Transfer_Dataflow_Max" },
		{ "Dataflow_Transfer_Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_Transfer_Linear.Comment", "/** Linear falloff based on distance from triangle*/" },
		{ "Dataflow_Transfer_Linear.DisplayName", "Linear" },
		{ "Dataflow_Transfer_Linear.Name", "EDataflowTransferNodeFalloff::Dataflow_Transfer_Linear" },
		{ "Dataflow_Transfer_Linear.ToolTip", "Linear falloff based on distance from triangle" },
		{ "Dataflow_Transfer_None.Comment", "/** No distance falloff */" },
		{ "Dataflow_Transfer_None.DisplayName", "None" },
		{ "Dataflow_Transfer_None.Name", "EDataflowTransferNodeFalloff::Dataflow_Transfer_None" },
		{ "Dataflow_Transfer_None.ToolTip", "No distance falloff" },
		{ "Dataflow_Transfer_Squared.Comment", "/** Squared falloff based on distance from triangle*/" },
		{ "Dataflow_Transfer_Squared.DisplayName", "Squared" },
		{ "Dataflow_Transfer_Squared.Name", "EDataflowTransferNodeFalloff::Dataflow_Transfer_Squared" },
		{ "Dataflow_Transfer_Squared.ToolTip", "Squared falloff based on distance from triangle" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataflowTransferNodeFalloff::Dataflow_Transfer_Squared", (int64)EDataflowTransferNodeFalloff::Dataflow_Transfer_Squared },
		{ "EDataflowTransferNodeFalloff::Dataflow_Transfer_Linear", (int64)EDataflowTransferNodeFalloff::Dataflow_Transfer_Linear },
		{ "EDataflowTransferNodeFalloff::Dataflow_Transfer_None", (int64)EDataflowTransferNodeFalloff::Dataflow_Transfer_None },
		{ "EDataflowTransferNodeFalloff::Dataflow_Transfer_Dataflow_Max", (int64)EDataflowTransferNodeFalloff::Dataflow_Transfer_Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionDepNodes,
	nullptr,
	"EDataflowTransferNodeFalloff",
	"EDataflowTransferNodeFalloff",
	Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferNodeFalloff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowTransferNodeFalloff.InnerSingleton, Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataflowTransferNodeFalloff.InnerSingleton;
}
// End Enum EDataflowTransferNodeFalloff

// Begin Enum EDataflowTransferNodeSampleScale
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowTransferNodeSampleScale;
static UEnum* EDataflowTransferNodeSampleScale_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferNodeSampleScale.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataflowTransferNodeSampleScale.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionDepNodes(), TEXT("EDataflowTransferNodeSampleScale"));
	}
	return Z_Registration_Info_UEnum_EDataflowTransferNodeSampleScale.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONDEPNODES_API UEnum* StaticEnum<EDataflowTransferNodeSampleScale>()
{
	return EDataflowTransferNodeSampleScale_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Transfer_Asset_Bound.Comment", "/** Bounding volume hierarchy cell size based on max length of the bounding box of the whole asset*/" },
		{ "Dataflow_Transfer_Asset_Bound.DisplayName", "Asset Max Bound" },
		{ "Dataflow_Transfer_Asset_Bound.Name", "EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Bound" },
		{ "Dataflow_Transfer_Asset_Bound.ToolTip", "Bounding volume hierarchy cell size based on max length of the bounding box of the whole asset" },
		{ "Dataflow_Transfer_Asset_Edge.Comment", "/** Bounding volume hierarchy cell size based on max edge length of the whole asset*/" },
		{ "Dataflow_Transfer_Asset_Edge.DisplayName", "Asset Max Edge" },
		{ "Dataflow_Transfer_Asset_Edge.Name", "EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Edge" },
		{ "Dataflow_Transfer_Asset_Edge.ToolTip", "Bounding volume hierarchy cell size based on max edge length of the whole asset" },
		{ "Dataflow_Transfer_Component_Edge.Comment", "/** Bounding volume hierarchy cell size based on max edge length of each geometry group*/" },
		{ "Dataflow_Transfer_Component_Edge.DisplayName", "Component Max Edge" },
		{ "Dataflow_Transfer_Component_Edge.Name", "EDataflowTransferNodeSampleScale::Dataflow_Transfer_Component_Edge" },
		{ "Dataflow_Transfer_Component_Edge.ToolTip", "Bounding volume hierarchy cell size based on max edge length of each geometry group" },
		{ "Dataflow_Transfer_Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Transfer_Dataflow_Max.Hidden", "" },
		{ "Dataflow_Transfer_Dataflow_Max.Name", "EDataflowTransferNodeSampleScale::Dataflow_Transfer_Dataflow_Max" },
		{ "Dataflow_Transfer_Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataflowTransferNodeSampleScale::Dataflow_Transfer_Component_Edge", (int64)EDataflowTransferNodeSampleScale::Dataflow_Transfer_Component_Edge },
		{ "EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Edge", (int64)EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Edge },
		{ "EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Bound", (int64)EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Bound },
		{ "EDataflowTransferNodeSampleScale::Dataflow_Transfer_Dataflow_Max", (int64)EDataflowTransferNodeSampleScale::Dataflow_Transfer_Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionDepNodes,
	nullptr,
	"EDataflowTransferNodeSampleScale",
	"EDataflowTransferNodeSampleScale",
	Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferNodeSampleScale.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowTransferNodeSampleScale.InnerSingleton, Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataflowTransferNodeSampleScale.InnerSingleton;
}
// End Enum EDataflowTransferNodeSampleScale

// Begin Enum EDataflowTransferNodeBoundingVolume
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowTransferNodeBoundingVolume;
static UEnum* EDataflowTransferNodeBoundingVolume_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferNodeBoundingVolume.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataflowTransferNodeBoundingVolume.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionDepNodes(), TEXT("EDataflowTransferNodeBoundingVolume"));
	}
	return Z_Registration_Info_UEnum_EDataflowTransferNodeBoundingVolume.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONDEPNODES_API UEnum* StaticEnum<EDataflowTransferNodeBoundingVolume>()
{
	return EDataflowTransferNodeBoundingVolume_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Transfer_Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Transfer_Dataflow_Max.Hidden", "" },
		{ "Dataflow_Transfer_Dataflow_Max.Name", "EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Dataflow_Max" },
		{ "Dataflow_Transfer_Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_Transfer_Triangle.Comment", "/** Bounding volume on triangles of the source triangle mesh*/" },
		{ "Dataflow_Transfer_Triangle.DisplayName", "Triangle" },
		{ "Dataflow_Transfer_Triangle.Name", "EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Triangle" },
		{ "Dataflow_Transfer_Triangle.ToolTip", "Bounding volume on triangles of the source triangle mesh" },
		{ "Dataflow_Transfer_Vertex.Comment", "/** Bounding volume on vertices of the source triangle mesh*/" },
		{ "Dataflow_Transfer_Vertex.DisplayName", "Vertex" },
		{ "Dataflow_Transfer_Vertex.Name", "EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Vertex" },
		{ "Dataflow_Transfer_Vertex.ToolTip", "Bounding volume on vertices of the source triangle mesh" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Vertex", (int64)EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Vertex },
		{ "EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Triangle", (int64)EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Triangle },
		{ "EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Dataflow_Max", (int64)EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionDepNodes,
	nullptr,
	"EDataflowTransferNodeBoundingVolume",
	"EDataflowTransferNodeBoundingVolume",
	Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume()
{
	if (!Z_Registration_Info_UEnum_EDataflowTransferNodeBoundingVolume.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowTransferNodeBoundingVolume.InnerSingleton, Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataflowTransferNodeBoundingVolume.InnerSingleton;
}
// End Enum EDataflowTransferNodeBoundingVolume

// Begin ScriptStruct FGeometryCollectionTransferVertexScalarAttributeNode
static_assert(std::is_polymorphic<FGeometryCollectionTransferVertexScalarAttributeNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGeometryCollectionTransferVertexScalarAttributeNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexScalarAttributeNode;
class UScriptStruct* FGeometryCollectionTransferVertexScalarAttributeNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexScalarAttributeNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexScalarAttributeNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionDepNodes(), TEXT("GeometryCollectionTransferVertexScalarAttributeNode"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexScalarAttributeNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONDEPNODES_API UScriptStruct* StaticStruct<FGeometryCollectionTransferVertexScalarAttributeNode>()
{
	return FGeometryCollectionTransferVertexScalarAttributeNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Transfer float properties from a sample collection to a target collection. \n */" },
		{ "Deprecated", "5.5" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "Transfer float properties from a sample collection to a target collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/* Target collection to transfer vertex float attribute to. */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "Target collection to transfer vertex float attribute to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromCollection_MetaData[] = {
		{ "Comment", "/* Sample collection to transfer vertex float attribute from. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "FromCollection" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "Sample collection to transfer vertex float attribute from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeKey_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "/* The name of the vertex attribute to generate indices from. */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "AttributeKey" },
		{ "DisplayName", "AttributeKey" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "The name of the vertex attribute to generate indices from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingVolumeType_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Bounding volume type for source assets[default: Triangle] */" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "Bounding volume type for source assets[default: Triangle]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleScale_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Bounding volume hierarchy cell size for neighboring vertices to transfer into[default: Asset] */" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "Bounding volume hierarchy cell size for neighboring vertices to transfer into[default: Asset]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Falloff of sample value based on distance from sample triangle[default: Squared] */" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "Falloff of sample value based on distance from sample triangle[default: Squared]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffThreshold_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Threshold based on distance from sample triangle.Values sampled past the threshold will falloff.[Defaults to 1 percent of triangle size(0.01)] */" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "Threshold based on distance from sample triangle.Values sampled past the threshold will falloff.[Defaults to 1 percent of triangle size(0.01)]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMultiplier_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Edge multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius. */" },
		{ "EditCondition", "SampleScale == EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Edge || SampleScale == EDataflowTransferNodeSampleScale::Dataflow_Transfer_Component_Edge" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "Edge multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundMultiplier_MetaData[] = {
		{ "Category", "Thresholds" },
		{ "Comment", "/* Max bound multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius. */" },
		{ "EditCondition", "SampleScale == EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Bound" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h" },
		{ "ToolTip", "Max bound multiplier for the Bounding Volume Hierarchy(BVH) target's particle search radius." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundingVolumeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundingVolumeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleScale_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionTransferVertexScalarAttributeNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexScalarAttributeNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_FromCollection = { "FromCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexScalarAttributeNode, FromCollection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromCollection_MetaData), NewProp_FromCollection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_AttributeKey = { "AttributeKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexScalarAttributeNode, AttributeKey), Z_Construct_UScriptStruct_FCollectionAttributeKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeKey_MetaData), NewProp_AttributeKey_MetaData) }; // 2309444878
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_BoundingVolumeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_BoundingVolumeType = { "BoundingVolumeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexScalarAttributeNode, BoundingVolumeType), Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeBoundingVolume, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingVolumeType_MetaData), NewProp_BoundingVolumeType_MetaData) }; // 1598568620
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_SampleScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_SampleScale = { "SampleScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexScalarAttributeNode, SampleScale), Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeSampleScale, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleScale_MetaData), NewProp_SampleScale_MetaData) }; // 3401781428
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_Falloff_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexScalarAttributeNode, Falloff), Z_Construct_UEnum_GeometryCollectionDepNodes_EDataflowTransferNodeFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 520751009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_FalloffThreshold = { "FalloffThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexScalarAttributeNode, FalloffThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffThreshold_MetaData), NewProp_FalloffThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_EdgeMultiplier = { "EdgeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexScalarAttributeNode, EdgeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMultiplier_MetaData), NewProp_EdgeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_BoundMultiplier = { "BoundMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTransferVertexScalarAttributeNode, BoundMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundMultiplier_MetaData), NewProp_BoundMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_FromCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_AttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_BoundingVolumeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_BoundingVolumeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_SampleScale_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_SampleScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_Falloff_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_FalloffThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_EdgeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewProp_BoundMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionDepNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GeometryCollectionTransferVertexScalarAttributeNode",
	Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::PropPointers),
	sizeof(FGeometryCollectionTransferVertexScalarAttributeNode),
	alignof(FGeometryCollectionTransferVertexScalarAttributeNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexScalarAttributeNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexScalarAttributeNode.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexScalarAttributeNode.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionTransferVertexScalarAttributeNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_GeometryCollectionTransferVertexScalarAttributeDepNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataflowTransferNodeFalloff_StaticEnum, TEXT("EDataflowTransferNodeFalloff"), &Z_Registration_Info_UEnum_EDataflowTransferNodeFalloff, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 520751009U) },
		{ EDataflowTransferNodeSampleScale_StaticEnum, TEXT("EDataflowTransferNodeSampleScale"), &Z_Registration_Info_UEnum_EDataflowTransferNodeSampleScale, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3401781428U) },
		{ EDataflowTransferNodeBoundingVolume_StaticEnum, TEXT("EDataflowTransferNodeBoundingVolume"), &Z_Registration_Info_UEnum_EDataflowTransferNodeBoundingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1598568620U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeometryCollectionTransferVertexScalarAttributeNode::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics::NewStructOps, TEXT("GeometryCollectionTransferVertexScalarAttributeNode"), &Z_Registration_Info_UScriptStruct_GeometryCollectionTransferVertexScalarAttributeNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionTransferVertexScalarAttributeNode), 3087582581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_GeometryCollectionTransferVertexScalarAttributeDepNode_h_2245441569(TEXT("/Script/GeometryCollectionDepNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_GeometryCollectionTransferVertexScalarAttributeDepNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_GeometryCollectionTransferVertexScalarAttributeDepNode_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_GeometryCollectionTransferVertexScalarAttributeDepNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_GeometryCollectionTransferVertexScalarAttributeDepNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
