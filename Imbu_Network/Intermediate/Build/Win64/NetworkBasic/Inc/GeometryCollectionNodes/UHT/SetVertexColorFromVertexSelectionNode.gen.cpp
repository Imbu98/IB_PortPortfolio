// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/SetVertexColorFromVertexSelectionNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetVertexColorFromVertexSelectionNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FSetVertexColorFromVertexSelectionDataflowNode
static_assert(std::is_polymorphic<FSetVertexColorFromVertexSelectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVertexColorFromVertexSelectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexSelectionDataflowNode;
class UScriptStruct* FSetVertexColorFromVertexSelectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexSelectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexSelectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SetVertexColorFromVertexSelectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexSelectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSetVertexColorFromVertexSelectionDataflowNode>()
{
	return FSetVertexColorFromVertexSelectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Set the vertex color of the collection based on the selection set. */" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromVertexSelectionNode.h" },
		{ "ToolTip", "Set the vertex color of the collection based on the selection set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection Passthrough*/" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromVertexSelectionNode.h" },
		{ "ToolTip", "Collection Passthrough" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelection_MetaData[] = {
		{ "Comment", "/** Vertex selection set */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "VertexSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromVertexSelectionNode.h" },
		{ "ToolTip", "Vertex selection set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Selected vertex color */" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromVertexSelectionNode.h" },
		{ "ToolTip", "Selected vertex color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVertexColorFromVertexSelectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorFromVertexSelectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::NewProp_VertexSelection = { "VertexSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorFromVertexSelectionDataflowNode, VertexSelection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexSelection_MetaData), NewProp_VertexSelection_MetaData) }; // 1972966787
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::NewProp_SelectedColor = { "SelectedColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorFromVertexSelectionDataflowNode, SelectedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedColor_MetaData), NewProp_SelectedColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::NewProp_VertexSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::NewProp_SelectedColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SetVertexColorFromVertexSelectionDataflowNode",
	Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::PropPointers),
	sizeof(FSetVertexColorFromVertexSelectionDataflowNode),
	alignof(FSetVertexColorFromVertexSelectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexSelectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexSelectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexSelectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FSetVertexColorFromVertexSelectionDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromVertexSelectionNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSetVertexColorFromVertexSelectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode_Statics::NewStructOps, TEXT("SetVertexColorFromVertexSelectionDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVertexColorFromVertexSelectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVertexColorFromVertexSelectionDataflowNode), 1105013276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromVertexSelectionNode_h_1413845490(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromVertexSelectionNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromVertexSelectionNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
