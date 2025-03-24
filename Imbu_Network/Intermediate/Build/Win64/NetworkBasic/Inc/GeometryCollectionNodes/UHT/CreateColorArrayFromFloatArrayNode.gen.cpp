// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/CreateColorArrayFromFloatArrayNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateColorArrayFromFloatArrayNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FCreateColorArrayFromFloatArrayDataflowNode
static_assert(std::is_polymorphic<FCreateColorArrayFromFloatArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCreateColorArrayFromFloatArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateColorArrayFromFloatArrayDataflowNode;
class UScriptStruct* FCreateColorArrayFromFloatArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateColorArrayFromFloatArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateColorArrayFromFloatArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CreateColorArrayFromFloatArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CreateColorArrayFromFloatArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCreateColorArrayFromFloatArrayDataflowNode>()
{
	return FCreateColorArrayFromFloatArrayDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Set the vertex color on the collection based on the normalized float array. */" },
		{ "ModuleRelativePath", "Public/Dataflow/CreateColorArrayFromFloatArrayNode.h" },
		{ "ToolTip", "Set the vertex color on the collection based on the normalized float array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[] = {
		{ "Comment", "/** Float array to use as a scalar for the color */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Float Array" },
		{ "ModuleRelativePath", "Public/Dataflow/CreateColorArrayFromFloatArrayNode.h" },
		{ "ToolTip", "Float array to use as a scalar for the color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorArray_MetaData[] = {
		{ "Comment", "/** Color array output */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Linear Color Array" },
		{ "ModuleRelativePath", "Public/Dataflow/CreateColorArrayFromFloatArrayNode.h" },
		{ "ToolTip", "Color array output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeInput_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Enable normalization of input array */" },
		{ "DisplayName", "Normalize Input" },
		{ "ModuleRelativePath", "Public/Dataflow/CreateColorArrayFromFloatArrayNode.h" },
		{ "ToolTip", "Enable normalization of input array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Base color for the normalized float array */" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/Dataflow/CreateColorArrayFromFloatArrayNode.h" },
		{ "ToolTip", "Base color for the normalized float array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorArray;
	static void NewProp_bNormalizeInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateColorArrayFromFloatArrayDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateColorArrayFromFloatArrayDataflowNode, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatArray_MetaData), NewProp_FloatArray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_ColorArray_Inner = { "ColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_ColorArray = { "ColorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateColorArrayFromFloatArrayDataflowNode, ColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorArray_MetaData), NewProp_ColorArray_MetaData) };
void Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_bNormalizeInput_SetBit(void* Obj)
{
	((FCreateColorArrayFromFloatArrayDataflowNode*)Obj)->bNormalizeInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_bNormalizeInput = { "bNormalizeInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateColorArrayFromFloatArrayDataflowNode), &Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_bNormalizeInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeInput_MetaData), NewProp_bNormalizeInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateColorArrayFromFloatArrayDataflowNode, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_FloatArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_FloatArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_ColorArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_ColorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_bNormalizeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"CreateColorArrayFromFloatArrayDataflowNode",
	Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::PropPointers),
	sizeof(FCreateColorArrayFromFloatArrayDataflowNode),
	alignof(FCreateColorArrayFromFloatArrayDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_CreateColorArrayFromFloatArrayDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateColorArrayFromFloatArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateColorArrayFromFloatArrayDataflowNode.InnerSingleton;
}
// End ScriptStruct FCreateColorArrayFromFloatArrayDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_CreateColorArrayFromFloatArrayNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCreateColorArrayFromFloatArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode_Statics::NewStructOps, TEXT("CreateColorArrayFromFloatArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_CreateColorArrayFromFloatArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateColorArrayFromFloatArrayDataflowNode), 1041834873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_CreateColorArrayFromFloatArrayNode_h_2730233491(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_CreateColorArrayFromFloatArrayNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_CreateColorArrayFromFloatArrayNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
