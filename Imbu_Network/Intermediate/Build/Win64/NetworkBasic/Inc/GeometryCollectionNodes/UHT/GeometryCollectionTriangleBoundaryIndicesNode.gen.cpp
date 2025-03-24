// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionTriangleBoundaryIndicesNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionTriangleBoundaryIndicesNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FTriangleBoundaryIndicesNode
static_assert(std::is_polymorphic<FTriangleBoundaryIndicesNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FTriangleBoundaryIndicesNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TriangleBoundaryIndicesNode;
class UScriptStruct* FTriangleBoundaryIndicesNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TriangleBoundaryIndicesNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TriangleBoundaryIndicesNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("TriangleBoundaryIndicesNode"));
	}
	return Z_Registration_Info_UScriptStruct_TriangleBoundaryIndicesNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FTriangleBoundaryIndicesNode>()
{
	return FTriangleBoundaryIndicesNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//Outputs boundary nodes of a triangle mesh\n" },
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTriangleBoundaryIndicesNode.h" },
		{ "ToolTip", "Outputs boundary nodes of a triangle mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTriangleBoundaryIndicesNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryIndicesOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "BoundaryIndices" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTriangleBoundaryIndicesNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoundaryIndicesOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundaryIndicesOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriangleBoundaryIndicesNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangleBoundaryIndicesNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::NewProp_BoundaryIndicesOut_Inner = { "BoundaryIndicesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::NewProp_BoundaryIndicesOut = { "BoundaryIndicesOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangleBoundaryIndicesNode, BoundaryIndicesOut), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryIndicesOut_MetaData), NewProp_BoundaryIndicesOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::NewProp_BoundaryIndicesOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::NewProp_BoundaryIndicesOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"TriangleBoundaryIndicesNode",
	Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::PropPointers),
	sizeof(FTriangleBoundaryIndicesNode),
	alignof(FTriangleBoundaryIndicesNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode()
{
	if (!Z_Registration_Info_UScriptStruct_TriangleBoundaryIndicesNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TriangleBoundaryIndicesNode.InnerSingleton, Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TriangleBoundaryIndicesNode.InnerSingleton;
}
// End ScriptStruct FTriangleBoundaryIndicesNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTriangleBoundaryIndicesNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTriangleBoundaryIndicesNode::StaticStruct, Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode_Statics::NewStructOps, TEXT("TriangleBoundaryIndicesNode"), &Z_Registration_Info_UScriptStruct_TriangleBoundaryIndicesNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriangleBoundaryIndicesNode), 2683694081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTriangleBoundaryIndicesNode_h_3608701040(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTriangleBoundaryIndicesNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTriangleBoundaryIndicesNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
