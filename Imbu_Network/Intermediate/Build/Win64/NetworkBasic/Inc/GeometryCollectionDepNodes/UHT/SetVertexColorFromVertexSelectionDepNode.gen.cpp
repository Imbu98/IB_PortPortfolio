// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionDepNodes/Private/Dataflow/SetVertexColorFromVertexSelectionDepNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetVertexColorFromVertexSelectionDepNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection();
GEOMETRYCOLLECTIONDEPNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
// End Cross Module References

// Begin ScriptStruct FSetVertexColorInCollectionFromVertexSelectionDataflowNode
static_assert(std::is_polymorphic<FSetVertexColorInCollectionFromVertexSelectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVertexColorInCollectionFromVertexSelectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromVertexSelectionDataflowNode;
class UScriptStruct* FSetVertexColorInCollectionFromVertexSelectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromVertexSelectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromVertexSelectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionDepNodes(), TEXT("SetVertexColorInCollectionFromVertexSelectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromVertexSelectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONDEPNODES_API UScriptStruct* StaticStruct<FSetVertexColorInCollectionFromVertexSelectionDataflowNode>()
{
	return FSetVertexColorInCollectionFromVertexSelectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Set the collections vertex color from the selection set. */" },
		{ "Deprecated", "5.5" },
		{ "ModuleRelativePath", "Private/Dataflow/SetVertexColorFromVertexSelectionDepNode.h" },
		{ "ToolTip", "Set the collections vertex color from the selection set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Private/Dataflow/SetVertexColorFromVertexSelectionDepNode.h" },
		{ "ToolTip", "Collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelection_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "VertexSelection" },
		{ "ModuleRelativePath", "Private/Dataflow/SetVertexColorFromVertexSelectionDepNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Private/Dataflow/SetVertexColorFromVertexSelectionDepNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonSelectedColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "NonSelected Color" },
		{ "ModuleRelativePath", "Private/Dataflow/SetVertexColorFromVertexSelectionDepNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NonSelectedColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVertexColorInCollectionFromVertexSelectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::NewProp_VertexSelection = { "VertexSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, VertexSelection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexSelection_MetaData), NewProp_VertexSelection_MetaData) }; // 1972966787
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::NewProp_SelectedColor = { "SelectedColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, SelectedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedColor_MetaData), NewProp_SelectedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::NewProp_NonSelectedColor = { "NonSelectedColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, NonSelectedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonSelectedColor_MetaData), NewProp_NonSelectedColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::NewProp_VertexSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::NewProp_SelectedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::NewProp_NonSelectedColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionDepNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SetVertexColorInCollectionFromVertexSelectionDataflowNode",
	Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::PropPointers),
	sizeof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode),
	alignof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromVertexSelectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromVertexSelectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromVertexSelectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FSetVertexColorInCollectionFromVertexSelectionDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_SetVertexColorFromVertexSelectionDepNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSetVertexColorInCollectionFromVertexSelectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode_Statics::NewStructOps, TEXT("SetVertexColorInCollectionFromVertexSelectionDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVertexColorInCollectionFromVertexSelectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode), 1807192433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_SetVertexColorFromVertexSelectionDepNode_h_3092277364(TEXT("/Script/GeometryCollectionDepNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_SetVertexColorFromVertexSelectionDepNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_SetVertexColorFromVertexSelectionDepNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
