// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/SetVertexColorFromFloatArrayNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetVertexColorFromFloatArrayNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FSetVertexColorFromFloatArrayDataflowNode
static_assert(std::is_polymorphic<FSetVertexColorFromFloatArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVertexColorFromFloatArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVertexColorFromFloatArrayDataflowNode;
class UScriptStruct* FSetVertexColorFromFloatArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorFromFloatArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVertexColorFromFloatArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SetVertexColorFromFloatArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorFromFloatArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSetVertexColorFromFloatArrayDataflowNode>()
{
	return FSetVertexColorFromFloatArrayDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Set the vertex color on the collection based on the normalized float array. */" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromFloatArrayNode.h" },
		{ "ToolTip", "Set the vertex color on the collection based on the normalized float array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection Passthrough*/" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromFloatArrayNode.h" },
		{ "ToolTip", "Collection Passthrough" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[] = {
		{ "Comment", "/** Float array to use as a scalar for the color */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromFloatArrayNode.h" },
		{ "ToolTip", "Float array to use as a scalar for the color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeInput_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Enable normalization of input array */" },
		{ "DisplayName", "Normalize Input" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromFloatArrayNode.h" },
		{ "ToolTip", "Enable normalization of input array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Base color for the normalized float array */" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/Dataflow/SetVertexColorFromFloatArrayNode.h" },
		{ "ToolTip", "Base color for the normalized float array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
	static void NewProp_bNormalizeInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVertexColorFromFloatArrayDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorFromFloatArrayDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorFromFloatArrayDataflowNode, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatArray_MetaData), NewProp_FloatArray_MetaData) };
void Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_bNormalizeInput_SetBit(void* Obj)
{
	((FSetVertexColorFromFloatArrayDataflowNode*)Obj)->bNormalizeInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_bNormalizeInput = { "bNormalizeInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSetVertexColorFromFloatArrayDataflowNode), &Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_bNormalizeInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeInput_MetaData), NewProp_bNormalizeInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVertexColorFromFloatArrayDataflowNode, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_FloatArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_FloatArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_bNormalizeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SetVertexColorFromFloatArrayDataflowNode",
	Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::PropPointers),
	sizeof(FSetVertexColorFromFloatArrayDataflowNode),
	alignof(FSetVertexColorFromFloatArrayDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexColorFromFloatArrayDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVertexColorFromFloatArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SetVertexColorFromFloatArrayDataflowNode.InnerSingleton;
}
// End ScriptStruct FSetVertexColorFromFloatArrayDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromFloatArrayNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSetVertexColorFromFloatArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode_Statics::NewStructOps, TEXT("SetVertexColorFromFloatArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVertexColorFromFloatArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVertexColorFromFloatArrayDataflowNode), 182695677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromFloatArrayNode_h_1892301479(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromFloatArrayNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_SetVertexColorFromFloatArrayNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
