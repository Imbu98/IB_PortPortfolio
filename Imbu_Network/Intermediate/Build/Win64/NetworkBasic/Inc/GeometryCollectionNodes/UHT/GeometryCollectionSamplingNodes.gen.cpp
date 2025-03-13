// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionSamplingNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionSamplingNodes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FUniformPointSamplingDataflowNode
static_assert(std::is_polymorphic<FUniformPointSamplingDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUniformPointSamplingDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniformPointSamplingDataflowNode;
class UScriptStruct* FUniformPointSamplingDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniformPointSamplingDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniformPointSamplingDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UniformPointSamplingDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_UniformPointSamplingDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUniformPointSamplingDataflowNode>()
{
	return FUniformPointSamplingDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Uniform Sampling on a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Uniform Sampling on a DynamicMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
		{ "Comment", "/** Mesh to sample points on */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Mesh to sample points on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRadius_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Desired \"radius\" of sample points. Spacing between samples is at least 2x this value. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Desired \"radius\" of sample points. Spacing between samples is at least 2x this value." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumSamples_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Maximum number of samples requested. If 0 or default value, mesh will be maximally sampled */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Maximum number of samples requested. If 0 or default value, mesh will be maximally sampled" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSampleDensity_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Density of subsampling used in Poisson strategy. Larger numbers mean \"more accurate\" (but slower) results. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Density of subsampling used in Poisson strategy. Larger numbers mean \"more accurate\" (but slower) results." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Random Seed used to initialize sampling strategies */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Random Seed used to initialize sampling strategies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplePoints_MetaData[] = {
		{ "Comment", "/** Sampled positions on the mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Sampled positions on the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleTriangleIDs_MetaData[] = {
		{ "Comment", "/** Sampled triangleID */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Sampled triangleID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleBarycentricCoords_MetaData[] = {
		{ "Comment", "/** Barycentric Coordinates of each Sample Point in it's respective Triangle. */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Barycentric Coordinates of each Sample Point in it's respective Triangle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePoints_MetaData[] = {
		{ "Comment", "/** Number of Sampled positions on the mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Number of Sampled positions on the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplingRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumSamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubSampleDensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleTriangleIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleTriangleIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleBarycentricCoords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleBarycentricCoords;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniformPointSamplingDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformPointSamplingDataflowNode, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SamplingRadius = { "SamplingRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformPointSamplingDataflowNode, SamplingRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingRadius_MetaData), NewProp_SamplingRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_MaxNumSamples = { "MaxNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformPointSamplingDataflowNode, MaxNumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumSamples_MetaData), NewProp_MaxNumSamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SubSampleDensity = { "SubSampleDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformPointSamplingDataflowNode, SubSampleDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSampleDensity_MetaData), NewProp_SubSampleDensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformPointSamplingDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SamplePoints_Inner = { "SamplePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SamplePoints = { "SamplePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformPointSamplingDataflowNode, SamplePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplePoints_MetaData), NewProp_SamplePoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs_Inner = { "SampleTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs = { "SampleTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformPointSamplingDataflowNode, SampleTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleTriangleIDs_MetaData), NewProp_SampleTriangleIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords_Inner = { "SampleBarycentricCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords = { "SampleBarycentricCoords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformPointSamplingDataflowNode, SampleBarycentricCoords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleBarycentricCoords_MetaData), NewProp_SampleBarycentricCoords_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_NumSamplePoints = { "NumSamplePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformPointSamplingDataflowNode, NumSamplePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplePoints_MetaData), NewProp_NumSamplePoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_TargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SamplingRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_MaxNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SubSampleDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SamplePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SamplePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewProp_NumSamplePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"UniformPointSamplingDataflowNode",
	Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::PropPointers),
	sizeof(FUniformPointSamplingDataflowNode),
	alignof(FUniformPointSamplingDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_UniformPointSamplingDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniformPointSamplingDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniformPointSamplingDataflowNode.InnerSingleton;
}
// End ScriptStruct FUniformPointSamplingDataflowNode

// Begin ScriptStruct FNonUniformPointSamplingDataflowNode
static_assert(std::is_polymorphic<FNonUniformPointSamplingDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FNonUniformPointSamplingDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonUniformPointSamplingDataflowNode;
class UScriptStruct* FNonUniformPointSamplingDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonUniformPointSamplingDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonUniformPointSamplingDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("NonUniformPointSamplingDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_NonUniformPointSamplingDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FNonUniformPointSamplingDataflowNode>()
{
	return FNonUniformPointSamplingDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * NonUniform Sampling on a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "NonUniform Sampling on a DynamicMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
		{ "Comment", "/** Mesh to sample points on */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Mesh to sample points on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRadius_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Desired \"radius\" of sample points. Spacing between samples is at least 2x this value. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Desired \"radius\" of sample points. Spacing between samples is at least 2x this value." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumSamples_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Maximum number of samples requested. If 0 or default value, mesh will be maximally sampled */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Maximum number of samples requested. If 0 or default value, mesh will be maximally sampled" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSampleDensity_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Density of subsampling used in Poisson strategy. Larger numbers mean \"more accurate\" (but slower) results. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Density of subsampling used in Poisson strategy. Larger numbers mean \"more accurate\" (but slower) results." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Random Seed used to initialize sampling strategies */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Random Seed used to initialize sampling strategies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSamplingRadius_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If MaxSampleRadius > SampleRadius, then output sample radius will be in range [SampleRadius, MaxSampleRadius] */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "If MaxSampleRadius > SampleRadius, then output sample radius will be in range [SampleRadius, MaxSampleRadius]" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeDistribution_MetaData[] = {
		{ "Category", "Distribution" },
		{ "Comment", "/** SizeDistribution setting controls the distribution of sample radii */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "SizeDistribution setting controls the distribution of sample radii" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeDistributionPower_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** SizeDistributionPower is used to control how extreme the Size Distribution shift is. Valid range is [1,10] */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "SizeDistributionPower is used to control how extreme the Size Distribution shift is. Valid range is [1,10]" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplePoints_MetaData[] = {
		{ "Comment", "/** Sampled positions on the mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Sampled positions on the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRadii_MetaData[] = {
		{ "Comment", "/** Sampled radii */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Sampled radii" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleTriangleIDs_MetaData[] = {
		{ "Comment", "/** Sampled triangleID */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Sampled triangleID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleBarycentricCoords_MetaData[] = {
		{ "Comment", "/** Barycentric Coordinates of each Sample Point in it's respective Triangle. */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Barycentric Coordinates of each Sample Point in it's respective Triangle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePoints_MetaData[] = {
		{ "Comment", "/** Number of Sampled positions on the mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Number of Sampled positions on the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplingRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumSamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubSampleDensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSamplingRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SizeDistribution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeDistributionPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRadii_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleRadii;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleTriangleIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleTriangleIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleBarycentricCoords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleBarycentricCoords;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonUniformPointSamplingDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SamplingRadius = { "SamplingRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, SamplingRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingRadius_MetaData), NewProp_SamplingRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_MaxNumSamples = { "MaxNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, MaxNumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumSamples_MetaData), NewProp_MaxNumSamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SubSampleDensity = { "SubSampleDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, SubSampleDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSampleDensity_MetaData), NewProp_SubSampleDensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_MaxSamplingRadius = { "MaxSamplingRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, MaxSamplingRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSamplingRadius_MetaData), NewProp_MaxSamplingRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SizeDistribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SizeDistribution = { "SizeDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, SizeDistribution), Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeDistribution_MetaData), NewProp_SizeDistribution_MetaData) }; // 423672639
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SizeDistributionPower = { "SizeDistributionPower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, SizeDistributionPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeDistributionPower_MetaData), NewProp_SizeDistributionPower_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SamplePoints_Inner = { "SamplePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SamplePoints = { "SamplePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, SamplePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplePoints_MetaData), NewProp_SamplePoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleRadii_Inner = { "SampleRadii", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleRadii = { "SampleRadii", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, SampleRadii), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRadii_MetaData), NewProp_SampleRadii_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs_Inner = { "SampleTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs = { "SampleTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, SampleTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleTriangleIDs_MetaData), NewProp_SampleTriangleIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords_Inner = { "SampleBarycentricCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords = { "SampleBarycentricCoords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, SampleBarycentricCoords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleBarycentricCoords_MetaData), NewProp_SampleBarycentricCoords_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_NumSamplePoints = { "NumSamplePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonUniformPointSamplingDataflowNode, NumSamplePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplePoints_MetaData), NewProp_NumSamplePoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_TargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SamplingRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_MaxNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SubSampleDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_MaxSamplingRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SizeDistribution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SizeDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SizeDistributionPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SamplePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SamplePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleRadii_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleRadii,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewProp_NumSamplePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"NonUniformPointSamplingDataflowNode",
	Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::PropPointers),
	sizeof(FNonUniformPointSamplingDataflowNode),
	alignof(FNonUniformPointSamplingDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_NonUniformPointSamplingDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonUniformPointSamplingDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NonUniformPointSamplingDataflowNode.InnerSingleton;
}
// End ScriptStruct FNonUniformPointSamplingDataflowNode

// Begin ScriptStruct FVertexWeightedPointSamplingDataflowNode
static_assert(std::is_polymorphic<FVertexWeightedPointSamplingDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FVertexWeightedPointSamplingDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexWeightedPointSamplingDataflowNode;
class UScriptStruct* FVertexWeightedPointSamplingDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexWeightedPointSamplingDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexWeightedPointSamplingDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("VertexWeightedPointSamplingDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_VertexWeightedPointSamplingDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FVertexWeightedPointSamplingDataflowNode>()
{
	return FVertexWeightedPointSamplingDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * VertexWeighted Sampling on a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "VertexWeighted Sampling on a DynamicMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
		{ "Comment", "/** Mesh to sample points on */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Mesh to sample points on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexWeights_MetaData[] = {
		{ "Comment", "/** Weight array */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Weight array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRadius_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Desired \"radius\" of sample points. Spacing between samples is at least 2x this value. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Desired \"radius\" of sample points. Spacing between samples is at least 2x this value." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumSamples_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Maximum number of samples requested. If 0 or default value, mesh will be maximally sampled */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Maximum number of samples requested. If 0 or default value, mesh will be maximally sampled" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSampleDensity_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Density of subsampling used in Poisson strategy. Larger numbers mean \"more accurate\" (but slower) results. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Density of subsampling used in Poisson strategy. Larger numbers mean \"more accurate\" (but slower) results." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Random Seed used to initialize sampling strategies */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Random Seed used to initialize sampling strategies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSamplingRadius_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If MaxSampleRadius > SampleRadius, then output sample radius will be in range [SampleRadius, MaxSampleRadius] */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "If MaxSampleRadius > SampleRadius, then output sample radius will be in range [SampleRadius, MaxSampleRadius]" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeDistribution_MetaData[] = {
		{ "Category", "Distribution" },
		{ "Comment", "/** SizeDistribution setting controls the distribution of sample radii */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "SizeDistribution setting controls the distribution of sample radii" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeDistributionPower_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** SizeDistributionPower is used to control how extreme the Size Distribution shift is. Valid range is [1,10] */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "SizeDistributionPower is used to control how extreme the Size Distribution shift is. Valid range is [1,10]" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMode_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertWeights_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplePoints_MetaData[] = {
		{ "Comment", "/** Sampled positions on the mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Sampled positions on the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRadii_MetaData[] = {
		{ "Comment", "/** Sampled radii */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Sampled radii" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleTriangleIDs_MetaData[] = {
		{ "Comment", "/** Sampled triangleID */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Sampled triangleID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleBarycentricCoords_MetaData[] = {
		{ "Comment", "/** Barycentric Coordinates of each Sample Point in it's respective Triangle. */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Barycentric Coordinates of each Sample Point in it's respective Triangle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePoints_MetaData[] = {
		{ "Comment", "/** Number of Sampled positions on the mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSamplingNodes.h" },
		{ "ToolTip", "Number of Sampled positions on the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexWeights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplingRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumSamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubSampleDensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSamplingRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SizeDistribution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeDistributionPower;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightMode;
	static void NewProp_bInvertWeights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertWeights;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRadii_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleRadii;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleTriangleIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleTriangleIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleBarycentricCoords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleBarycentricCoords;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexWeightedPointSamplingDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_VertexWeights_Inner = { "VertexWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_VertexWeights = { "VertexWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, VertexWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexWeights_MetaData), NewProp_VertexWeights_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SamplingRadius = { "SamplingRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, SamplingRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingRadius_MetaData), NewProp_SamplingRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_MaxNumSamples = { "MaxNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, MaxNumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumSamples_MetaData), NewProp_MaxNumSamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SubSampleDensity = { "SubSampleDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, SubSampleDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSampleDensity_MetaData), NewProp_SubSampleDensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_MaxSamplingRadius = { "MaxSamplingRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, MaxSamplingRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSamplingRadius_MetaData), NewProp_MaxSamplingRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SizeDistribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SizeDistribution = { "SizeDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, SizeDistribution), Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeDistribution_MetaData), NewProp_SizeDistribution_MetaData) }; // 423672639
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SizeDistributionPower = { "SizeDistributionPower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, SizeDistributionPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeDistributionPower_MetaData), NewProp_SizeDistributionPower_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_WeightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_WeightMode = { "WeightMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, WeightMode), Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMode_MetaData), NewProp_WeightMode_MetaData) }; // 486303290
void Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_bInvertWeights_SetBit(void* Obj)
{
	((FVertexWeightedPointSamplingDataflowNode*)Obj)->bInvertWeights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_bInvertWeights = { "bInvertWeights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexWeightedPointSamplingDataflowNode), &Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_bInvertWeights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertWeights_MetaData), NewProp_bInvertWeights_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SamplePoints_Inner = { "SamplePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SamplePoints = { "SamplePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, SamplePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplePoints_MetaData), NewProp_SamplePoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleRadii_Inner = { "SampleRadii", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleRadii = { "SampleRadii", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, SampleRadii), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRadii_MetaData), NewProp_SampleRadii_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs_Inner = { "SampleTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs = { "SampleTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, SampleTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleTriangleIDs_MetaData), NewProp_SampleTriangleIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords_Inner = { "SampleBarycentricCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords = { "SampleBarycentricCoords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, SampleBarycentricCoords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleBarycentricCoords_MetaData), NewProp_SampleBarycentricCoords_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_NumSamplePoints = { "NumSamplePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexWeightedPointSamplingDataflowNode, NumSamplePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplePoints_MetaData), NewProp_NumSamplePoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_TargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_VertexWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_VertexWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SamplingRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_MaxNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SubSampleDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_MaxSamplingRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SizeDistribution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SizeDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SizeDistributionPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_WeightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_WeightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_bInvertWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SamplePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SamplePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleRadii_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleRadii,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleTriangleIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_SampleBarycentricCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewProp_NumSamplePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"VertexWeightedPointSamplingDataflowNode",
	Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::PropPointers),
	sizeof(FVertexWeightedPointSamplingDataflowNode),
	alignof(FVertexWeightedPointSamplingDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_VertexWeightedPointSamplingDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexWeightedPointSamplingDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VertexWeightedPointSamplingDataflowNode.InnerSingleton;
}
// End ScriptStruct FVertexWeightedPointSamplingDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSamplingNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUniformPointSamplingDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics::NewStructOps, TEXT("UniformPointSamplingDataflowNode"), &Z_Registration_Info_UScriptStruct_UniformPointSamplingDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniformPointSamplingDataflowNode), 4219482060U) },
		{ FNonUniformPointSamplingDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics::NewStructOps, TEXT("NonUniformPointSamplingDataflowNode"), &Z_Registration_Info_UScriptStruct_NonUniformPointSamplingDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonUniformPointSamplingDataflowNode), 4083291092U) },
		{ FVertexWeightedPointSamplingDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics::NewStructOps, TEXT("VertexWeightedPointSamplingDataflowNode"), &Z_Registration_Info_UScriptStruct_VertexWeightedPointSamplingDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexWeightedPointSamplingDataflowNode), 1355706836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSamplingNodes_h_3219921074(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSamplingNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSamplingNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
