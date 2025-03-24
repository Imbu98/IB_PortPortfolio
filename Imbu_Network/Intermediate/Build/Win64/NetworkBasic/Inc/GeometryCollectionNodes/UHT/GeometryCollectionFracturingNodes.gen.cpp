// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionFracturingNodes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionFracturingNodes() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FBrickCutterDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FExplodedViewDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshCutterDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneCutterDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSliceCutterDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FUniformScatterPointsDataflowNode
static_assert(std::is_polymorphic<FUniformScatterPointsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUniformScatterPointsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode;
class UScriptStruct* FUniformScatterPointsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UniformScatterPointsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUniformScatterPointsDataflowNode>()
{
	return FUniformScatterPointsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "Deprecated", "5.5" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinNumberOfPoints_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfPoints_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinNumberOfPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniformScatterPointsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MinNumberOfPoints = { "MinNumberOfPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, MinNumberOfPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinNumberOfPoints_MetaData), NewProp_MinNumberOfPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MaxNumberOfPoints = { "MaxNumberOfPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, MaxNumberOfPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfPoints_MetaData), NewProp_MaxNumberOfPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MinNumberOfPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MaxNumberOfPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"UniformScatterPointsDataflowNode",
	Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::PropPointers),
	sizeof(FUniformScatterPointsDataflowNode),
	alignof(FUniformScatterPointsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.InnerSingleton;
}
// End ScriptStruct FUniformScatterPointsDataflowNode

// Begin ScriptStruct FUniformScatterPointsDataflowNode_v2
static_assert(std::is_polymorphic<FUniformScatterPointsDataflowNode_v2>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUniformScatterPointsDataflowNode_v2 cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode_v2;
class UScriptStruct* FUniformScatterPointsDataflowNode_v2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode_v2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode_v2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UniformScatterPointsDataflowNode_v2"));
	}
	return Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode_v2.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUniformScatterPointsDataflowNode_v2>()
{
	return FUniformScatterPointsDataflowNode_v2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinNumberOfPoints_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Minimum for the random range */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Minimum for the random range" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfPoints_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Maximum for the random range */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Maximum for the random range" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Seed for random */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Seed for random" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "Comment", "/** BoundingBox to generate points inside of */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "BoundingBox to generate points inside of" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Comment", "/** Generated points */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Generated points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinNumberOfPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniformScatterPointsDataflowNode_v2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_MinNumberOfPoints = { "MinNumberOfPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode_v2, MinNumberOfPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinNumberOfPoints_MetaData), NewProp_MinNumberOfPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_MaxNumberOfPoints = { "MaxNumberOfPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode_v2, MaxNumberOfPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfPoints_MetaData), NewProp_MaxNumberOfPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode_v2, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode_v2, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniformScatterPointsDataflowNode_v2, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_MinNumberOfPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_MaxNumberOfPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"UniformScatterPointsDataflowNode_v2",
	Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::PropPointers),
	sizeof(FUniformScatterPointsDataflowNode_v2),
	alignof(FUniformScatterPointsDataflowNode_v2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2()
{
	if (!Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode_v2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode_v2.InnerSingleton, Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode_v2.InnerSingleton;
}
// End ScriptStruct FUniformScatterPointsDataflowNode_v2

// Begin ScriptStruct FRadialScatterPointsDataflowNode
static_assert(std::is_polymorphic<FRadialScatterPointsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRadialScatterPointsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode;
class UScriptStruct* FRadialScatterPointsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("RadialScatterPointsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FRadialScatterPointsDataflowNode>()
{
	return FRadialScatterPointsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "Deprecated", "5.5" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularSteps_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMax", "50" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialSteps_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMax", "50" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleOffset_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variability_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AngularSteps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadialSteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Variability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialScatterPointsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngularSteps = { "AngularSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, AngularSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularSteps_MetaData), NewProp_AngularSteps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RadialSteps = { "RadialSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, RadialSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialSteps_MetaData), NewProp_RadialSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngleOffset = { "AngleOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, AngleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleOffset_MetaData), NewProp_AngleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Variability = { "Variability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Variability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variability_MetaData), NewProp_Variability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngularSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RadialSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Variability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"RadialScatterPointsDataflowNode",
	Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::PropPointers),
	sizeof(FRadialScatterPointsDataflowNode),
	alignof(FRadialScatterPointsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.InnerSingleton;
}
// End ScriptStruct FRadialScatterPointsDataflowNode

// Begin ScriptStruct FRadialScatterPointsDataflowNode_v2
static_assert(std::is_polymorphic<FRadialScatterPointsDataflowNode_v2>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRadialScatterPointsDataflowNode_v2 cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode_v2;
class UScriptStruct* FRadialScatterPointsDataflowNode_v2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode_v2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode_v2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("RadialScatterPointsDataflowNode_v2"));
	}
	return Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode_v2.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FRadialScatterPointsDataflowNode_v2>()
{
	return FRadialScatterPointsDataflowNode_v2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "Comment", "/** BoundingBox to generate points inside of */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "BoundingBox to generate points inside of" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Center of generated pattern */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Center of generated pattern" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Normal to plane in which sites are generated */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Normal to plane in which sites are generated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Seed for random */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Seed for random" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularSteps_MetaData[] = {
		{ "Category", "Scatter" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of angular steps */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of angular steps" },
		{ "UIMax", "50" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleOffset_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Angle offset at each radial step (in degrees) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Angle offset at each radial step (in degrees)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularNoise_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Amount of global variation to apply to each angular step (in degrees) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Amount of global variation to apply to each angular step (in degrees)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Scatter" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Pattern radius (in cm) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Pattern radius (in cm)" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialSteps_MetaData[] = {
		{ "Category", "Scatter" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of radial steps */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of radial steps" },
		{ "UIMax", "50" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialStepExponent_MetaData[] = {
		{ "Category", "Scatter" },
		{ "ClampMax", "20" },
		{ "ClampMin", ".01" },
		{ "Comment", "/** Radial steps will follow a distribution based on this exponent, i.e., Pow(distance from center, RadialStepExponent) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Radial steps will follow a distribution based on this exponent, i.e., Pow(distance from center, RadialStepExponent)" },
		{ "UIMax", "10" },
		{ "UIMin", ".01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialMinStep_MetaData[] = {
		{ "Category", "Scatter" },
		{ "ClampMin", ".01" },
		{ "Comment", "/** Minimum radial separation between any two voronoi points (in cm) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Minimum radial separation between any two voronoi points (in cm)" },
		{ "UIMin", ".25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialNoise_MetaData[] = {
		{ "Category", "Scatter" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amount of global variation to apply to each radial step (in cm) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Amount of global variation to apply to each radial step (in cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialVariability_MetaData[] = {
		{ "Category", "Per Point Variability" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to randomly displace each Voronoi site radially (in cm) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Amount to randomly displace each Voronoi site radially (in cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVariability_MetaData[] = {
		{ "Category", "Per Point Variability" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to randomly displace each Voronoi site in angle (in degrees) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Amount to randomly displace each Voronoi site in angle (in degrees)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxialVariability_MetaData[] = {
		{ "Category", "Per Point Variability" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to randomly displace each Voronoi site in the direction of the rotation axis (in cm) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Amount to randomly displace each Voronoi site in the direction of the rotation axis (in cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Comment", "/** Generated points */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Generated points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AngularSteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularNoise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadialSteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialStepExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialMinStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialNoise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialVariability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVariability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxialVariability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialScatterPointsDataflowNode_v2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AngularSteps = { "AngularSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, AngularSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularSteps_MetaData), NewProp_AngularSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AngleOffset = { "AngleOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, AngleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleOffset_MetaData), NewProp_AngleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AngularNoise = { "AngularNoise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, AngularNoise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularNoise_MetaData), NewProp_AngularNoise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialSteps = { "RadialSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, RadialSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialSteps_MetaData), NewProp_RadialSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialStepExponent = { "RadialStepExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, RadialStepExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialStepExponent_MetaData), NewProp_RadialStepExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialMinStep = { "RadialMinStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, RadialMinStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialMinStep_MetaData), NewProp_RadialMinStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialNoise = { "RadialNoise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, RadialNoise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialNoise_MetaData), NewProp_RadialNoise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialVariability = { "RadialVariability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, RadialVariability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialVariability_MetaData), NewProp_RadialVariability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AngularVariability = { "AngularVariability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, AngularVariability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVariability_MetaData), NewProp_AngularVariability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AxialVariability = { "AxialVariability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, AxialVariability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxialVariability_MetaData), NewProp_AxialVariability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialScatterPointsDataflowNode_v2, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AngularSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AngleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AngularNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialStepExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialMinStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_RadialVariability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AngularVariability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_AxialVariability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"RadialScatterPointsDataflowNode_v2",
	Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::PropPointers),
	sizeof(FRadialScatterPointsDataflowNode_v2),
	alignof(FRadialScatterPointsDataflowNode_v2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2()
{
	if (!Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode_v2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode_v2.InnerSingleton, Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode_v2.InnerSingleton;
}
// End ScriptStruct FRadialScatterPointsDataflowNode_v2

// Begin ScriptStruct FGridScatterPointsDataflowNode
static_assert(std::is_polymorphic<FGridScatterPointsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGridScatterPointsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridScatterPointsDataflowNode;
class UScriptStruct* FGridScatterPointsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridScatterPointsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridScatterPointsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GridScatterPointsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GridScatterPointsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGridScatterPointsDataflowNode>()
{
	return FGridScatterPointsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPointsInX_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Number of points in X direction */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of points in X direction" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPointsInY_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Number of points in Y direction */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of points in Y direction" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPointsInZ_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Number of points in Z direction */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of points in Z direction" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Seed for random */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Seed for random" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRandomDisplacementX_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Random displacement in X direction will be in the range (-MaxRandomDisplacementX, MaxRandomDisplacementX) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Random displacement in X direction will be in the range (-MaxRandomDisplacementX, MaxRandomDisplacementX)" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRandomDisplacementY_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Random displacement in Y direction will be in the range (-MaxRandomDisplacementY, MaxRandomDisplacementY) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Random displacement in Y direction will be in the range (-MaxRandomDisplacementY, MaxRandomDisplacementY)" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRandomDisplacementZ_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "/** Random displacement in Z direction will be in the range (-MaxRandomDisplacementZ, MaxRandomDisplacementZ) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Random displacement in Z direction will be in the range (-MaxRandomDisplacementZ, MaxRandomDisplacementZ)" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "Comment", "/** BoundingBox to generate points inside of */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "BoundingBox to generate points inside of" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Comment", "/** Generated points */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Generated points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPointsInX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPointsInY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPointsInZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRandomDisplacementX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRandomDisplacementY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRandomDisplacementZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridScatterPointsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_NumberOfPointsInX = { "NumberOfPointsInX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridScatterPointsDataflowNode, NumberOfPointsInX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPointsInX_MetaData), NewProp_NumberOfPointsInX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_NumberOfPointsInY = { "NumberOfPointsInY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridScatterPointsDataflowNode, NumberOfPointsInY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPointsInY_MetaData), NewProp_NumberOfPointsInY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_NumberOfPointsInZ = { "NumberOfPointsInZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridScatterPointsDataflowNode, NumberOfPointsInZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPointsInZ_MetaData), NewProp_NumberOfPointsInZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridScatterPointsDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_MaxRandomDisplacementX = { "MaxRandomDisplacementX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridScatterPointsDataflowNode, MaxRandomDisplacementX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRandomDisplacementX_MetaData), NewProp_MaxRandomDisplacementX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_MaxRandomDisplacementY = { "MaxRandomDisplacementY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridScatterPointsDataflowNode, MaxRandomDisplacementY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRandomDisplacementY_MetaData), NewProp_MaxRandomDisplacementY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_MaxRandomDisplacementZ = { "MaxRandomDisplacementZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridScatterPointsDataflowNode, MaxRandomDisplacementZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRandomDisplacementZ_MetaData), NewProp_MaxRandomDisplacementZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridScatterPointsDataflowNode, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridScatterPointsDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_NumberOfPointsInX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_NumberOfPointsInY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_NumberOfPointsInZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_MaxRandomDisplacementX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_MaxRandomDisplacementY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_MaxRandomDisplacementZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GridScatterPointsDataflowNode",
	Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::PropPointers),
	sizeof(FGridScatterPointsDataflowNode),
	alignof(FGridScatterPointsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GridScatterPointsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridScatterPointsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridScatterPointsDataflowNode.InnerSingleton;
}
// End ScriptStruct FGridScatterPointsDataflowNode

// Begin ScriptStruct FVoronoiFractureDataflowNode
static_assert(std::is_polymorphic<FVoronoiFractureDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FVoronoiFractureDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode;
class UScriptStruct* FVoronoiFractureDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("VoronoiFractureDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FVoronoiFractureDataflowNode>()
{
	return FVoronoiFractureDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Editor Fracture Mode / Fracture / Uniform tool\n * Fracture using a Voronoi diagram with a uniform random pattern, creating fracture pieces of similar volume across the shape.\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "Deprecated", "5.5" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Fracture / Uniform tool\nFracture using a Voronoi diagram with a uniform random pattern, creating fracture pieces of similar volume across the shape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/**   */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToFracture_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupFracture_MetaData[] = {
		{ "Category", "Fracture" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grout_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000010" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctaveNumber_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToFracture;
	static void NewProp_GroupFracture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GroupFracture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Grout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OctaveNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
	static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoronoiFractureDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_ChanceToFracture = { "ChanceToFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, ChanceToFracture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToFracture_MetaData), NewProp_ChanceToFracture_MetaData) };
void Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture_SetBit(void* Obj)
{
	((FVoronoiFractureDataflowNode*)Obj)->GroupFracture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture = { "GroupFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoronoiFractureDataflowNode), &Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupFracture_MetaData), NewProp_GroupFracture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Grout = { "Grout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Grout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grout_MetaData), NewProp_Grout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Persistence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Persistence_MetaData), NewProp_Persistence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Lacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lacunarity_MetaData), NewProp_Lacunarity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_OctaveNumber = { "OctaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, OctaveNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctaveNumber_MetaData), NewProp_OctaveNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, PointSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointSpacing_MetaData), NewProp_PointSpacing_MetaData) };
void Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
{
	((FVoronoiFractureDataflowNode*)Obj)->AddSamplesForCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoronoiFractureDataflowNode), &Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSamplesForCollision_MetaData), NewProp_AddSamplesForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode, CollisionSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleSpacing_MetaData), NewProp_CollisionSampleSpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_ChanceToFracture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Grout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Persistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_OctaveNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_PointSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_CollisionSampleSpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"VoronoiFractureDataflowNode",
	Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::PropPointers),
	sizeof(FVoronoiFractureDataflowNode),
	alignof(FVoronoiFractureDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.InnerSingleton;
}
// End ScriptStruct FVoronoiFractureDataflowNode

// Begin ScriptStruct FVoronoiFractureDataflowNode_v2
static_assert(std::is_polymorphic<FVoronoiFractureDataflowNode_v2>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FVoronoiFractureDataflowNode_v2 cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode_v2;
class UScriptStruct* FVoronoiFractureDataflowNode_v2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode_v2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode_v2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("VoronoiFractureDataflowNode_v2"));
	}
	return Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode_v2.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FVoronoiFractureDataflowNode_v2>()
{
	return FVoronoiFractureDataflowNode_v2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Editor Fracture Mode / Fracture / Uniform tool\n * Fracture using a Voronoi diagram with a uniform random pattern, creating fracture pieces of similar volume across the shape.\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Fracture / Uniform tool\nFracture using a Voronoi diagram with a uniform random pattern, creating fracture pieces of similar volume across the shape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to fracture */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Collection to fracture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Comment", "/** Voronoi source points */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Voronoi source points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Pieces to fracture */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Pieces to fracture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform to apply to cut planes */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Transform to apply to cut planes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Comment", "/** Seed for random */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Seed for random" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToFracture_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIslands_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Whether to split the fractured mesh pieces based on geometric connectivity after fracturing */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Whether to split the fractured mesh pieces based on geometric connectivity after fracturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grout_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Amount of space to leave between cut pieces */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Amount of space to leave between cut pieces" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Size of the Perlin noise displacement (in cm). If 0, no noise will be applied */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Size of the Perlin noise displacement (in cm). If 0, no noise will be applied" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Period of the Perlin noise.  Smaller values will create a smoother noise pattern */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Period of the Perlin noise.  Smaller values will create a smoother noise pattern" },
		{ "UIMin", "0.000010" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctaveNumber_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/**\n\x09 * Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\n\x09 * Smaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains\n\x09 */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\nSmaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\n\x09 * These extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\x09 *\n\x09 * Note this is *only* useful for simulations that use particle-implicit collisions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\nThese extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\nNote this is *only* useful for simulations that use particle-implicit collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\n\x09 * Only used if Add Samples For Collision is enabled\n\x09 */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "AddSamplesForCollision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\nOnly used if Add Samples For Collision is enabled" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGeometryTransformSelection_MetaData[] = {
		{ "Comment", "/** Fractured Pieces */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "FracturedTransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Fractured Pieces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToFracture;
	static void NewProp_SplitIslands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SplitIslands;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Grout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OctaveNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
	static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGeometryTransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoronoiFractureDataflowNode_v2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_ChanceToFracture = { "ChanceToFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, ChanceToFracture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToFracture_MetaData), NewProp_ChanceToFracture_MetaData) };
void Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_SplitIslands_SetBit(void* Obj)
{
	((FVoronoiFractureDataflowNode_v2*)Obj)->SplitIslands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_SplitIslands = { "SplitIslands", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoronoiFractureDataflowNode_v2), &Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_SplitIslands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIslands_MetaData), NewProp_SplitIslands_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Grout = { "Grout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, Grout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grout_MetaData), NewProp_Grout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, Persistence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Persistence_MetaData), NewProp_Persistence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, Lacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lacunarity_MetaData), NewProp_Lacunarity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_OctaveNumber = { "OctaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, OctaveNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctaveNumber_MetaData), NewProp_OctaveNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, PointSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointSpacing_MetaData), NewProp_PointSpacing_MetaData) };
void Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
{
	((FVoronoiFractureDataflowNode_v2*)Obj)->AddSamplesForCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoronoiFractureDataflowNode_v2), &Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSamplesForCollision_MetaData), NewProp_AddSamplesForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, CollisionSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleSpacing_MetaData), NewProp_CollisionSampleSpacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_NewGeometryTransformSelection = { "NewGeometryTransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoronoiFractureDataflowNode_v2, NewGeometryTransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGeometryTransformSelection_MetaData), NewProp_NewGeometryTransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_ChanceToFracture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_SplitIslands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Grout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Persistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_Lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_OctaveNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_PointSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_AddSamplesForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_CollisionSampleSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewProp_NewGeometryTransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"VoronoiFractureDataflowNode_v2",
	Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::PropPointers),
	sizeof(FVoronoiFractureDataflowNode_v2),
	alignof(FVoronoiFractureDataflowNode_v2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2()
{
	if (!Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode_v2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode_v2.InnerSingleton, Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode_v2.InnerSingleton;
}
// End ScriptStruct FVoronoiFractureDataflowNode_v2

// Begin ScriptStruct FPlaneCutterDataflowNode
static_assert(std::is_polymorphic<FPlaneCutterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FPlaneCutterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode;
class UScriptStruct* FPlaneCutterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("PlaneCutterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FPlaneCutterDataflowNode>()
{
	return FPlaneCutterDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Editor Fracture Mode / Fracture / Planar tool\n * Fracture using a set of noised up planes.\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "Deprecated", "5.5" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Fracture / Planar tool\nFracture using a set of noised up planes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/**   */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPlanes_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grout_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000010" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctaveNumber_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlanes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Grout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OctaveNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
	static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneCutterDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_NumPlanes = { "NumPlanes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, NumPlanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPlanes_MetaData), NewProp_NumPlanes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Grout = { "Grout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, Grout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grout_MetaData), NewProp_Grout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, Persistence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Persistence_MetaData), NewProp_Persistence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, Lacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lacunarity_MetaData), NewProp_Lacunarity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_OctaveNumber = { "OctaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, OctaveNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctaveNumber_MetaData), NewProp_OctaveNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, PointSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointSpacing_MetaData), NewProp_PointSpacing_MetaData) };
void Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
{
	((FPlaneCutterDataflowNode*)Obj)->AddSamplesForCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlaneCutterDataflowNode), &Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSamplesForCollision_MetaData), NewProp_AddSamplesForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode, CollisionSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleSpacing_MetaData), NewProp_CollisionSampleSpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_NumPlanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Grout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Persistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_OctaveNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_PointSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"PlaneCutterDataflowNode",
	Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::PropPointers),
	sizeof(FPlaneCutterDataflowNode),
	alignof(FPlaneCutterDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlaneCutterDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.InnerSingleton;
}
// End ScriptStruct FPlaneCutterDataflowNode

// Begin ScriptStruct FPlaneCutterDataflowNode_v2
static_assert(std::is_polymorphic<FPlaneCutterDataflowNode_v2>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FPlaneCutterDataflowNode_v2 cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode_v2;
class UScriptStruct* FPlaneCutterDataflowNode_v2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode_v2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode_v2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("PlaneCutterDataflowNode_v2"));
	}
	return Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode_v2.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FPlaneCutterDataflowNode_v2>()
{
	return FPlaneCutterDataflowNode_v2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Editor Fracture Mode / Fracture / Planar tool\n * Fracture using a set of noised up planes.\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Fracture / Planar tool\nFracture using a set of noised up planes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to fracture */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Collection to fracture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "Comment", "/** Bound for plane centers */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Bound for plane centers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Pieces to cut */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Pieces to cut" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform to apply to cut planes */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Transform to apply to cut planes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPlanes_MetaData[] = {
		{ "Category", "Plane Cut" },
		{ "Comment", "/** Number of cutting planes */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Number of Cuts" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of cutting planes" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Seed for random */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Seed for random" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToFracture_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Chance To Fracture Per Bone" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIslands_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Whether to split the fractured mesh pieces based on geometric connectivity after fracturing */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Whether to split the fractured mesh pieces based on geometric connectivity after fracturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grout_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Amount of space to leave between cut pieces */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Amount of space to leave between cut pieces" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Size of the Perlin noise displacement (in cm). If 0, no noise will be applied */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Size of the Perlin noise displacement (in cm). If 0, no noise will be applied" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Period of the Perlin noise.  Smaller values will create a smoother noise pattern */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Period of the Perlin noise.  Smaller values will create a smoother noise pattern" },
		{ "UIMin", "0.000010" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctaveNumber_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/**\n\x09 * Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\n\x09 * Smaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains\n\x09 */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\nSmaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\n\x09 * These extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\x09 *\n\x09 * Note this is *only* useful for simulations that use particle-implicit collisions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\nThese extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\nNote this is *only* useful for simulations that use particle-implicit collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\n\x09 * Only used if Add Samples For Collision is enabled\n\x09 */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "AddSamplesForCollision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\nOnly used if Add Samples For Collision is enabled" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGeometryTransformSelection_MetaData[] = {
		{ "Comment", "/** Fractured Pieces */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "FracturedTransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Fractured Pieces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlanes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToFracture;
	static void NewProp_SplitIslands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SplitIslands;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Grout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OctaveNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
	static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGeometryTransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneCutterDataflowNode_v2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_NumPlanes = { "NumPlanes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, NumPlanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPlanes_MetaData), NewProp_NumPlanes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_ChanceToFracture = { "ChanceToFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, ChanceToFracture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToFracture_MetaData), NewProp_ChanceToFracture_MetaData) };
void Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_SplitIslands_SetBit(void* Obj)
{
	((FPlaneCutterDataflowNode_v2*)Obj)->SplitIslands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_SplitIslands = { "SplitIslands", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlaneCutterDataflowNode_v2), &Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_SplitIslands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIslands_MetaData), NewProp_SplitIslands_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Grout = { "Grout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, Grout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grout_MetaData), NewProp_Grout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, Persistence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Persistence_MetaData), NewProp_Persistence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, Lacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lacunarity_MetaData), NewProp_Lacunarity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_OctaveNumber = { "OctaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, OctaveNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctaveNumber_MetaData), NewProp_OctaveNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, PointSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointSpacing_MetaData), NewProp_PointSpacing_MetaData) };
void Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
{
	((FPlaneCutterDataflowNode_v2*)Obj)->AddSamplesForCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlaneCutterDataflowNode_v2), &Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSamplesForCollision_MetaData), NewProp_AddSamplesForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, CollisionSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleSpacing_MetaData), NewProp_CollisionSampleSpacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_NewGeometryTransformSelection = { "NewGeometryTransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneCutterDataflowNode_v2, NewGeometryTransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGeometryTransformSelection_MetaData), NewProp_NewGeometryTransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_NumPlanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_ChanceToFracture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_SplitIslands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Grout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Persistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_Lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_OctaveNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_PointSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_AddSamplesForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_CollisionSampleSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewProp_NewGeometryTransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"PlaneCutterDataflowNode_v2",
	Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::PropPointers),
	sizeof(FPlaneCutterDataflowNode_v2),
	alignof(FPlaneCutterDataflowNode_v2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode_v2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode_v2.InnerSingleton, Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode_v2.InnerSingleton;
}
// End ScriptStruct FPlaneCutterDataflowNode_v2

// Begin ScriptStruct FExplodedViewDataflowNode
static_assert(std::is_polymorphic<FExplodedViewDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FExplodedViewDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode;
class UScriptStruct* FExplodedViewDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExplodedViewDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ExplodedViewDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FExplodedViewDataflowNode>()
{
	return FExplodedViewDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * \"Explodes\" the pieces from the Collection for better visualization\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "\"Explodes\" the pieces from the Collection for better visualization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to explode */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Collection to explode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniformScale_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Scale amount to expand the pieces uniformly in all directions */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Scale amount to expand the pieces uniformly in all directions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Scale amounts to expand the pieces in all 3 directions */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Scale amounts to expand the pieces in all 3 directions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UniformScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExplodedViewDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExplodedViewDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_UniformScale = { "UniformScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExplodedViewDataflowNode, UniformScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniformScale_MetaData), NewProp_UniformScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExplodedViewDataflowNode, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_UniformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ExplodedViewDataflowNode",
	Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::PropPointers),
	sizeof(FExplodedViewDataflowNode),
	alignof(FExplodedViewDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExplodedViewDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.InnerSingleton;
}
// End ScriptStruct FExplodedViewDataflowNode

// Begin ScriptStruct FSliceCutterDataflowNode
static_assert(std::is_polymorphic<FSliceCutterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSliceCutterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SliceCutterDataflowNode;
class UScriptStruct* FSliceCutterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SliceCutterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SliceCutterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSliceCutterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SliceCutterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SliceCutterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSliceCutterDataflowNode>()
{
	return FSliceCutterDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Editor Fracture Mode / Fracture / Slice tool\n * Fracture with a grid of X, Y, and Z slices, with optional random variation in angle and offset.\n * \n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Fracture / Slice tool\nFracture with a grid of X, Y, and Z slices, with optional random variation in angle and offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to fracture */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Collection to fracture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** The selected pieces to cut */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "The selected pieces to cut" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlicesX_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Number of slices along the X axis */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of slices along the X axis" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlicesY_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Number of slices along the Y axis */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of slices along the Y axis" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlicesZ_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Number of slices along the Z axis */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of slices along the Z axis" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliceAngleVariation_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Maximum angle (in degrees) to randomly rotate each slicing plane */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Random Angle Variation" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Maximum angle (in degrees) to randomly rotate each slicing plane" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliceOffsetVariation_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "/** Maximum distance (in cm) to randomly shift each slicing plane */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Random Offset Variation" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Maximum distance (in cm) to randomly shift each slicing plane" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Seed for random */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Seed for random" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToFracture_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIslands_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Whether to split the fractured mesh pieces based on geometric connectivity after fracturing */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Whether to split the fractured mesh pieces based on geometric connectivity after fracturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grout_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Amount of space to leave between cut pieces */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Amount of space to leave between cut pieces" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Size of the Perlin noise displacement (in cm). If 0, no noise will be applied */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Size of the Perlin noise displacement (in cm). If 0, no noise will be applied" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Period of the Perlin noise.  Smaller values will create a smoother noise pattern */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Period of the Perlin noise.  Smaller values will create a smoother noise pattern" },
		{ "UIMin", "0.000010" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctaveNumber_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/**\n\x09 * Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\n\x09 * Smaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains\n\x09 */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\nSmaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\n\x09 * These extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\x09 *\n\x09 * Note this is *only* useful for simulations that use particle-implicit collisions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\nThese extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\nNote this is *only* useful for simulations that use particle-implicit collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\n\x09 * Only used if Add Samples For Collision is enabled\n\x09 */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "AddSamplesForCollision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\nOnly used if Add Samples For Collision is enabled" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGeometryTransformSelection_MetaData[] = {
		{ "Comment", "/** Fractured Pieces */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "FracturedTransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Fractured Pieces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlicesX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlicesY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlicesZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SliceAngleVariation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SliceOffsetVariation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToFracture;
	static void NewProp_SplitIslands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SplitIslands;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Grout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OctaveNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
	static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGeometryTransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSliceCutterDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SlicesX = { "SlicesX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, SlicesX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlicesX_MetaData), NewProp_SlicesX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SlicesY = { "SlicesY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, SlicesY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlicesY_MetaData), NewProp_SlicesY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SlicesZ = { "SlicesZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, SlicesZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlicesZ_MetaData), NewProp_SlicesZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SliceAngleVariation = { "SliceAngleVariation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, SliceAngleVariation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliceAngleVariation_MetaData), NewProp_SliceAngleVariation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SliceOffsetVariation = { "SliceOffsetVariation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, SliceOffsetVariation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliceOffsetVariation_MetaData), NewProp_SliceOffsetVariation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_ChanceToFracture = { "ChanceToFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, ChanceToFracture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToFracture_MetaData), NewProp_ChanceToFracture_MetaData) };
void Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SplitIslands_SetBit(void* Obj)
{
	((FSliceCutterDataflowNode*)Obj)->SplitIslands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SplitIslands = { "SplitIslands", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSliceCutterDataflowNode), &Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SplitIslands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIslands_MetaData), NewProp_SplitIslands_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Grout = { "Grout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, Grout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grout_MetaData), NewProp_Grout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, Persistence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Persistence_MetaData), NewProp_Persistence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, Lacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lacunarity_MetaData), NewProp_Lacunarity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_OctaveNumber = { "OctaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, OctaveNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctaveNumber_MetaData), NewProp_OctaveNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, PointSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointSpacing_MetaData), NewProp_PointSpacing_MetaData) };
void Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
{
	((FSliceCutterDataflowNode*)Obj)->AddSamplesForCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSliceCutterDataflowNode), &Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSamplesForCollision_MetaData), NewProp_AddSamplesForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, CollisionSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleSpacing_MetaData), NewProp_CollisionSampleSpacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_NewGeometryTransformSelection = { "NewGeometryTransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceCutterDataflowNode, NewGeometryTransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGeometryTransformSelection_MetaData), NewProp_NewGeometryTransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SlicesX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SlicesY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SlicesZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SliceAngleVariation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SliceOffsetVariation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_ChanceToFracture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_SplitIslands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Grout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Persistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_Lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_OctaveNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_PointSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_AddSamplesForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewProp_NewGeometryTransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SliceCutterDataflowNode",
	Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::PropPointers),
	sizeof(FSliceCutterDataflowNode),
	alignof(FSliceCutterDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSliceCutterDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SliceCutterDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SliceCutterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SliceCutterDataflowNode.InnerSingleton;
}
// End ScriptStruct FSliceCutterDataflowNode

// Begin ScriptStruct FBrickCutterDataflowNode
static_assert(std::is_polymorphic<FBrickCutterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FBrickCutterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrickCutterDataflowNode;
class UScriptStruct* FBrickCutterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrickCutterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrickCutterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrickCutterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("BrickCutterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_BrickCutterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FBrickCutterDataflowNode>()
{
	return FBrickCutterDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n * Editor Fracture Mode / Fracture / Brick tool\n * Fracture with a customizable brick pattern. \n * Note: Currently only supports fracturing with at least some (non-zero) Grout.\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Fracture / Brick tool\nFracture with a customizable brick pattern.\nNote: Currently only supports fracturing with at least some (non-zero) Grout." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to cut */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Collection to cut" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "Comment", "/** Boundingbox to create the cutting planes in */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Boundingbox to create the cutting planes in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** The selected pieces to cut */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "The selected pieces to cut" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform to apply to cut planes */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Transform to apply to cut planes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bond_MetaData[] = {
		{ "Category", "Brick" },
		{ "Comment", "/** The brick bond pattern defines how the bricks are arranged */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "The brick bond pattern defines how the bricks are arranged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrickLength_MetaData[] = {
		{ "Category", "Brick" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Brick length (in cm) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Brick length (in cm)" },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrickHeight_MetaData[] = {
		{ "Category", "Brick" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Brick height (in cm) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Brick height (in cm)" },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrickDepth_MetaData[] = {
		{ "Category", "Brick" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Brick depth (in cm) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Brick depth (in cm)" },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Seed for random */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Seed for random" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToFracture_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIslands_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Whether to split the fractured mesh pieces based on geometric connectivity after fracturing */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Whether to split the fractured mesh pieces based on geometric connectivity after fracturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grout_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Amount of space to leave between cut pieces */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Amount of space to leave between cut pieces" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Size of the Perlin noise displacement (in cm). If 0, no noise will be applied */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Size of the Perlin noise displacement (in cm). If 0, no noise will be applied" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Period of the Perlin noise.  Smaller values will create a smoother noise pattern */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Period of the Perlin noise.  Smaller values will create a smoother noise pattern" },
		{ "UIMin", "0.000010" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctaveNumber_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/**\n\x09 * Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\n\x09 * Smaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains\n\x09 */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\nSmaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\n\x09 * These extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\x09 *\n\x09 * Note this is *only* useful for simulations that use particle-implicit collisions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\nThese extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\nNote this is *only* useful for simulations that use particle-implicit collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\n\x09 * Only used if Add Samples For Collision is enabled\n\x09 */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "AddSamplesForCollision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\nOnly used if Add Samples For Collision is enabled" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGeometryTransformSelection_MetaData[] = {
		{ "Comment", "/** Fractured Pieces */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "FracturedTransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Fractured Pieces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bond_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrickLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrickHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrickDepth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToFracture;
	static void NewProp_SplitIslands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SplitIslands;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Grout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OctaveNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
	static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGeometryTransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrickCutterDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Bond_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Bond = { "Bond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, Bond), Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bond_MetaData), NewProp_Bond_MetaData) }; // 151219521
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_BrickLength = { "BrickLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, BrickLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrickLength_MetaData), NewProp_BrickLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_BrickHeight = { "BrickHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, BrickHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrickHeight_MetaData), NewProp_BrickHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_BrickDepth = { "BrickDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, BrickDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrickDepth_MetaData), NewProp_BrickDepth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_ChanceToFracture = { "ChanceToFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, ChanceToFracture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToFracture_MetaData), NewProp_ChanceToFracture_MetaData) };
void Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_SplitIslands_SetBit(void* Obj)
{
	((FBrickCutterDataflowNode*)Obj)->SplitIslands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_SplitIslands = { "SplitIslands", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBrickCutterDataflowNode), &Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_SplitIslands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIslands_MetaData), NewProp_SplitIslands_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Grout = { "Grout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, Grout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grout_MetaData), NewProp_Grout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, Persistence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Persistence_MetaData), NewProp_Persistence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, Lacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lacunarity_MetaData), NewProp_Lacunarity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_OctaveNumber = { "OctaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, OctaveNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctaveNumber_MetaData), NewProp_OctaveNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, PointSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointSpacing_MetaData), NewProp_PointSpacing_MetaData) };
void Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
{
	((FBrickCutterDataflowNode*)Obj)->AddSamplesForCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBrickCutterDataflowNode), &Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSamplesForCollision_MetaData), NewProp_AddSamplesForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, CollisionSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleSpacing_MetaData), NewProp_CollisionSampleSpacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_NewGeometryTransformSelection = { "NewGeometryTransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrickCutterDataflowNode, NewGeometryTransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGeometryTransformSelection_MetaData), NewProp_NewGeometryTransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Bond_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Bond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_BrickLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_BrickHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_BrickDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_ChanceToFracture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_SplitIslands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Grout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Persistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_Lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_OctaveNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_PointSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_AddSamplesForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewProp_NewGeometryTransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"BrickCutterDataflowNode",
	Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::PropPointers),
	sizeof(FBrickCutterDataflowNode),
	alignof(FBrickCutterDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBrickCutterDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_BrickCutterDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrickCutterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BrickCutterDataflowNode.InnerSingleton;
}
// End ScriptStruct FBrickCutterDataflowNode

// Begin ScriptStruct FMeshCutterDataflowNode
static_assert(std::is_polymorphic<FMeshCutterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshCutterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshCutterDataflowNode;
class UScriptStruct* FMeshCutterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshCutterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshCutterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshCutterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshCutterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshCutterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshCutterDataflowNode>()
{
	return FMeshCutterDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n * Editor Fracture Mode / Fracture / Mesh tool\n * Fracture using the shape of a chosen static mesh\n * \n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Editor Fracture Mode / Fracture / Mesh tool\nFracture using the shape of a chosen static mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to cut */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Collection to cut" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "Comment", "/** Boundingbox to create the cutting planes in */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Boundingbox to create the cutting planes in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** The selected pieces to cut */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "The selected pieces to cut" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform to apply to cut planes */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Transform to apply to cut planes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CuttingStaticMesh_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Mesh to cut with */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Mesh to cut with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHiRes_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Output the HiRes representation, if set to true and HiRes doesn't exist it will output empty mesh */" },
		{ "DisplayName", "Use HiRes" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Output the HiRes representation, if set to true and HiRes doesn't exist it will output empty mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Specifies the LOD level to use */" },
		{ "DisplayName", "LOD Level" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Specifies the LOD level to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutDistribution_MetaData[] = {
		{ "Category", "Distribution" },
		{ "Comment", "/** How to arrange the mesh cuts in space */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "How to arrange the mesh cuts in space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberToScatter_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of meshes to random scatter */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "CutDistribution == EMeshCutterCutDistribution::UniformRandom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of meshes to random scatter" },
		{ "UIMax", "5000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridX_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of meshes to add to grid in X */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Grid Width" },
		{ "EditCondition", "CutDistribution == EMeshCutterCutDistribution::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of meshes to add to grid in X" },
		{ "UIMax", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridY_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of meshes to add to grid in Y */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Grid Depth" },
		{ "EditCondition", "CutDistribution == EMeshCutterCutDistribution::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of meshes to add to grid in Y" },
		{ "UIMax", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridZ_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of meshes to add to grid in Z */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Grid Height" },
		{ "EditCondition", "CutDistribution == EMeshCutterCutDistribution::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Number of meshes to add to grid in Z" },
		{ "UIMax", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variability_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Magnitude of random displacement to cutting meshes */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Variability" },
		{ "EditCondition", "CutDistribution == EMeshCutterCutDistribution::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Magnitude of random displacement to cutting meshes" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScaleFactor_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Minimum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "CutDistribution != EMeshCutterCutDistribution::SingleCut" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Minimum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleFactor_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Maximum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "CutDistribution != EMeshCutterCutDistribution::SingleCut" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Maximum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomOrientation_MetaData[] = {
		{ "Category", "Distribution" },
		{ "Comment", "/** Whether to randomly vary the orientation of the cutting meshes */" },
		{ "EditCondition", "CutDistribution != EMeshCutterCutDistribution::SingleCut" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Whether to randomly vary the orientation of the cutting meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollRange_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Roll will be chosen between -Range and +Range */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "+/- Roll Range" },
		{ "EditCondition", "CutDistribution != EMeshCutterCutDistribution::SingleCut && bRandomOrientation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Roll will be chosen between -Range and +Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Pitch will be chosen between -Range and +Range */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "+/- Pitch Range" },
		{ "EditCondition", "CutDistribution != EMeshCutterCutDistribution::SingleCut && bRandomOrientation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Pitch will be chosen between -Range and +Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawRange_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Yaw will be chosen between -Range and +Range */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "+/- Yaw Range" },
		{ "EditCondition", "CutDistribution != EMeshCutterCutDistribution::SingleCut && bRandomOrientation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Yaw will be chosen between -Range and +Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Seed for random */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Seed for random" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToFracture_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIslands_MetaData[] = {
		{ "Category", "Common Fracture" },
		{ "Comment", "/** Whether to split the fractured mesh pieces based on geometric connectivity after fracturing */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Whether to split the fractured mesh pieces based on geometric connectivity after fracturing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\n\x09 * These extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\x09 *\n\x09 * Note this is *only* useful for simulations that use particle-implicit collisions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\nThese extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\nNote this is *only* useful for simulations that use particle-implicit collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\n\x09 * Only used if Add Samples For Collision is enabled\n\x09 */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Point Spacing" },
		{ "EditCondition", "AddSamplesForCollision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\nOnly used if Add Samples For Collision is enabled" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGeometryTransformSelection_MetaData[] = {
		{ "Comment", "/** Fractured Pieces */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "FracturedTransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Fractured Pieces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CuttingStaticMesh;
	static void NewProp_bUseHiRes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHiRes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CutDistribution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CutDistribution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberToScatter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Variability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScaleFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaleFactor;
	static void NewProp_bRandomOrientation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomOrientation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToFracture;
	static void NewProp_SplitIslands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SplitIslands;
	static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGeometryTransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshCutterDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_CuttingStaticMesh = { "CuttingStaticMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, CuttingStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CuttingStaticMesh_MetaData), NewProp_CuttingStaticMesh_MetaData) };
void Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_bUseHiRes_SetBit(void* Obj)
{
	((FMeshCutterDataflowNode*)Obj)->bUseHiRes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_bUseHiRes = { "bUseHiRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshCutterDataflowNode), &Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_bUseHiRes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHiRes_MetaData), NewProp_bUseHiRes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, LODLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODLevel_MetaData), NewProp_LODLevel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_CutDistribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_CutDistribution = { "CutDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, CutDistribution), Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutDistribution_MetaData), NewProp_CutDistribution_MetaData) }; // 8896957
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_NumberToScatter = { "NumberToScatter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, NumberToScatter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberToScatter_MetaData), NewProp_NumberToScatter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, GridX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridX_MetaData), NewProp_GridX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, GridY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridY_MetaData), NewProp_GridY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_GridZ = { "GridZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, GridZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridZ_MetaData), NewProp_GridZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_Variability = { "Variability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, Variability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variability_MetaData), NewProp_Variability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_MinScaleFactor = { "MinScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, MinScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScaleFactor_MetaData), NewProp_MinScaleFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_MaxScaleFactor = { "MaxScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, MaxScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScaleFactor_MetaData), NewProp_MaxScaleFactor_MetaData) };
void Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_bRandomOrientation_SetBit(void* Obj)
{
	((FMeshCutterDataflowNode*)Obj)->bRandomOrientation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_bRandomOrientation = { "bRandomOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshCutterDataflowNode), &Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_bRandomOrientation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomOrientation_MetaData), NewProp_bRandomOrientation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_RollRange = { "RollRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, RollRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollRange_MetaData), NewProp_RollRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, PitchRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRange_MetaData), NewProp_PitchRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_YawRange = { "YawRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, YawRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawRange_MetaData), NewProp_YawRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_ChanceToFracture = { "ChanceToFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, ChanceToFracture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToFracture_MetaData), NewProp_ChanceToFracture_MetaData) };
void Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_SplitIslands_SetBit(void* Obj)
{
	((FMeshCutterDataflowNode*)Obj)->SplitIslands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_SplitIslands = { "SplitIslands", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshCutterDataflowNode), &Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_SplitIslands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIslands_MetaData), NewProp_SplitIslands_MetaData) };
void Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
{
	((FMeshCutterDataflowNode*)Obj)->AddSamplesForCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshCutterDataflowNode), &Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSamplesForCollision_MetaData), NewProp_AddSamplesForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, CollisionSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleSpacing_MetaData), NewProp_CollisionSampleSpacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_NewGeometryTransformSelection = { "NewGeometryTransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCutterDataflowNode, NewGeometryTransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGeometryTransformSelection_MetaData), NewProp_NewGeometryTransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_CuttingStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_bUseHiRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_LODLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_CutDistribution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_CutDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_NumberToScatter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_GridZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_Variability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_MinScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_MaxScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_bRandomOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_RollRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_PitchRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_YawRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_ChanceToFracture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_SplitIslands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_AddSamplesForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewProp_NewGeometryTransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MeshCutterDataflowNode",
	Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::PropPointers),
	sizeof(FMeshCutterDataflowNode),
	alignof(FMeshCutterDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshCutterDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MeshCutterDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshCutterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshCutterDataflowNode.InnerSingleton;
}
// End ScriptStruct FMeshCutterDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFracturingNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUniformScatterPointsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewStructOps, TEXT("UniformScatterPointsDataflowNode"), &Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniformScatterPointsDataflowNode), 1531979546U) },
		{ FUniformScatterPointsDataflowNode_v2::StaticStruct, Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_v2_Statics::NewStructOps, TEXT("UniformScatterPointsDataflowNode_v2"), &Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode_v2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniformScatterPointsDataflowNode_v2), 2561764969U) },
		{ FRadialScatterPointsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewStructOps, TEXT("RadialScatterPointsDataflowNode"), &Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialScatterPointsDataflowNode), 326924615U) },
		{ FRadialScatterPointsDataflowNode_v2::StaticStruct, Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2_Statics::NewStructOps, TEXT("RadialScatterPointsDataflowNode_v2"), &Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode_v2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialScatterPointsDataflowNode_v2), 2017040924U) },
		{ FGridScatterPointsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGridScatterPointsDataflowNode_Statics::NewStructOps, TEXT("GridScatterPointsDataflowNode"), &Z_Registration_Info_UScriptStruct_GridScatterPointsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridScatterPointsDataflowNode), 950254928U) },
		{ FVoronoiFractureDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewStructOps, TEXT("VoronoiFractureDataflowNode"), &Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoronoiFractureDataflowNode), 576654058U) },
		{ FVoronoiFractureDataflowNode_v2::StaticStruct, Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_v2_Statics::NewStructOps, TEXT("VoronoiFractureDataflowNode_v2"), &Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode_v2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoronoiFractureDataflowNode_v2), 3899963048U) },
		{ FPlaneCutterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewStructOps, TEXT("PlaneCutterDataflowNode"), &Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneCutterDataflowNode), 1381114724U) },
		{ FPlaneCutterDataflowNode_v2::StaticStruct, Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_v2_Statics::NewStructOps, TEXT("PlaneCutterDataflowNode_v2"), &Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode_v2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneCutterDataflowNode_v2), 3750133746U) },
		{ FExplodedViewDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewStructOps, TEXT("ExplodedViewDataflowNode"), &Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExplodedViewDataflowNode), 3603355406U) },
		{ FSliceCutterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSliceCutterDataflowNode_Statics::NewStructOps, TEXT("SliceCutterDataflowNode"), &Z_Registration_Info_UScriptStruct_SliceCutterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSliceCutterDataflowNode), 1212872739U) },
		{ FBrickCutterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FBrickCutterDataflowNode_Statics::NewStructOps, TEXT("BrickCutterDataflowNode"), &Z_Registration_Info_UScriptStruct_BrickCutterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrickCutterDataflowNode), 3796367901U) },
		{ FMeshCutterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshCutterDataflowNode_Statics::NewStructOps, TEXT("MeshCutterDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshCutterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshCutterDataflowNode), 917835151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFracturingNodes_h_2912975223(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFracturingNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFracturingNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
