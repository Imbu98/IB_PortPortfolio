// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionDepNodes/Private/Dataflow/SetVertexColorFromFloatArrayDepNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetVertexColorFromFloatArrayDepNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
GEOMETRYCOLLECTIONDEPNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
// End Cross Module References

// Begin ScriptStruct FSetVertexColorInCollectionFromFloatArrayDataflowNode
static_assert(std::is_polymorphic<FSetVertexColorInCollectionFromFloatArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVertexColorInCollectionFromFloatArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromFloatArrayDataflowNode;
class UScriptStruct* FSetVertexColorInCollectionFromFloatArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromFloatArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromFloatArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionDepNodes(), TEXT("SetVertexColorInCollectionFromFloatArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromFloatArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONDEPNODES_API UScriptStruct* StaticStruct<FSetVertexColorInCollectionFromFloatArrayDataflowNode>()
{
	return FSetVertexColorInCollectionFromFloatArrayDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Set collection color based on input float array */" },
		{ "Deprecated", "5.5" },
		{ "ModuleRelativePath", "Private/Dataflow/SetVertexColorFromFloatArrayDepNode.h" },
		{ "ToolTip", "Set collection color based on input float array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Private/Dataflow/SetVertexColorFromFloatArrayDepNode.h" },
		{ "ToolTip", "Collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Private/Dataflow/SetVertexColorFromFloatArrayDepNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Private/Dataflow/SetVertexColorFromFloatArrayDepNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVertexColorInCollectionFromFloatArrayDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorInCollectionFromFloatArrayDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorInCollectionFromFloatArrayDataflowNode, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatArray_MetaData), NewProp_FloatArray_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorInCollectionFromFloatArrayDataflowNode, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::NewProp_FloatArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::NewProp_FloatArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionDepNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SetVertexColorInCollectionFromFloatArrayDataflowNode",
	Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::PropPointers),
	sizeof(FSetVertexColorInCollectionFromFloatArrayDataflowNode),
	alignof(FSetVertexColorInCollectionFromFloatArrayDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromFloatArrayDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromFloatArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromFloatArrayDataflowNode.InnerSingleton;
}
// End ScriptStruct FSetVertexColorInCollectionFromFloatArrayDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_SetVertexColorFromFloatArrayDepNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSetVertexColorInCollectionFromFloatArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode_Statics::NewStructOps, TEXT("SetVertexColorInCollectionFromFloatArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromFloatArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVertexColorInCollectionFromFloatArrayDataflowNode), 3813634153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_SetVertexColorFromFloatArrayDepNode_h_2189953925(TEXT("/Script/GeometryCollectionDepNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_SetVertexColorFromFloatArrayDepNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_SetVertexColorFromFloatArrayDepNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
