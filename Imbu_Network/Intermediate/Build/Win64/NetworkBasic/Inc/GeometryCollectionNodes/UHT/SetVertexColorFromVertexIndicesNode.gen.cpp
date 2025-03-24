// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/SetVertexColorFromVertexIndicesNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetVertexColorFromVertexIndicesNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FSetVertexColorFromVertexIndicesDataflowNode
static_assert(std::is_polymorphic<FSetVertexColorFromVertexIndicesDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVertexColorFromVertexIndicesDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexIndicesDataflowNode;
class UScriptStruct* FSetVertexColorFromVertexIndicesDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexIndicesDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexIndicesDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SetVertexColorFromVertexIndicesDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexIndicesDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSetVertexColorFromVertexIndicesDataflowNode>()
{
	return FSetVertexColorFromVertexIndicesDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Set the vertex color of the collection based on the selection set. */" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromVertexIndicesNode.h" },
		{ "ToolTip", "Set the vertex color of the collection based on the selection set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection Passthrough*/" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromVertexIndicesNode.h" },
		{ "ToolTip", "Collection Passthrough" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndicesIn_MetaData[] = {
		{ "Category", "Vertices" },
		{ "Comment", "/** Vertex indices set */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "VertexIndices" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromVertexIndicesNode.h" },
		{ "ToolTip", "Vertex indices set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Selected vertex color */" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromVertexIndicesNode.h" },
		{ "ToolTip", "Selected vertex color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndicesIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexIndicesIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVertexColorFromVertexIndicesDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorFromVertexIndicesDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::NewProp_VertexIndicesIn_Inner = { "VertexIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::NewProp_VertexIndicesIn = { "VertexIndicesIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorFromVertexIndicesDataflowNode, VertexIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexIndicesIn_MetaData), NewProp_VertexIndicesIn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::NewProp_SelectedColor = { "SelectedColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorFromVertexIndicesDataflowNode, SelectedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedColor_MetaData), NewProp_SelectedColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::NewProp_VertexIndicesIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::NewProp_VertexIndicesIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::NewProp_SelectedColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SetVertexColorFromVertexIndicesDataflowNode",
	Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::PropPointers),
	sizeof(FSetVertexColorFromVertexIndicesDataflowNode),
	alignof(FSetVertexColorFromVertexIndicesDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexIndicesDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexIndicesDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexIndicesDataflowNode.InnerSingleton;
}
// End ScriptStruct FSetVertexColorFromVertexIndicesDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromVertexIndicesNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSetVertexColorFromVertexIndicesDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode_Statics::NewStructOps, TEXT("SetVertexColorFromVertexIndicesDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexIndicesDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVertexColorFromVertexIndicesDataflowNode), 1277533095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromVertexIndicesNode_h_2810636423(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromVertexIndicesNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromVertexIndicesNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
