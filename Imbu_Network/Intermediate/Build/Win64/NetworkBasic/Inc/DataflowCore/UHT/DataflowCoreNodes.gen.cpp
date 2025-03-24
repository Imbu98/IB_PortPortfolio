// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowCoreNodes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowAnyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowCoreNodes() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowAnyType();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowBranchNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowPrintNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowReRouteNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSelectNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowReRouteNode
static_assert(std::is_polymorphic<FDataflowReRouteNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowReRouteNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowReRouteNode;
class UScriptStruct* FDataflowReRouteNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowReRouteNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowReRouteNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowReRouteNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowReRouteNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowReRouteNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowReRouteNode>()
{
	return FDataflowReRouteNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Value" },
		{ "DisplayName", "Value" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowReRouteNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowReRouteNode, Value), Z_Construct_UScriptStruct_FDataflowAnyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1980332606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowReRouteNode",
	Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::PropPointers),
	sizeof(FDataflowReRouteNode),
	alignof(FDataflowReRouteNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowReRouteNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowReRouteNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowReRouteNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowReRouteNode.InnerSingleton;
}
// End ScriptStruct FDataflowReRouteNode

// Begin ScriptStruct FDataflowBranchNode
static_assert(std::is_polymorphic<FDataflowBranchNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowBranchNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowBranchNode;
class UScriptStruct* FDataflowBranchNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowBranchNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowBranchNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowBranchNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowBranchNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowBranchNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowBranchNode>()
{
	return FDataflowBranchNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowBranchNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Icon", "GraphEditor.Branch_16x" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrueValue_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "TrueValue" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalseValue_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "FalseValue" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCondition_MetaData[] = {
		{ "Category", "Condition" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Condition" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Result" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrueValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FalseValue;
	static void NewProp_bCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCondition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowBranchNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_TrueValue = { "TrueValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowBranchNode, TrueValue), Z_Construct_UScriptStruct_FDataflowAnyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrueValue_MetaData), NewProp_TrueValue_MetaData) }; // 1980332606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_FalseValue = { "FalseValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowBranchNode, FalseValue), Z_Construct_UScriptStruct_FDataflowAnyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalseValue_MetaData), NewProp_FalseValue_MetaData) }; // 1980332606
void Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_bCondition_SetBit(void* Obj)
{
	((FDataflowBranchNode*)Obj)->bCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataflowBranchNode), &Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCondition_MetaData), NewProp_bCondition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowBranchNode, Result), Z_Construct_UScriptStruct_FDataflowAnyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1980332606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_TrueValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_FalseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_bCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowBranchNode",
	Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::PropPointers),
	sizeof(FDataflowBranchNode),
	alignof(FDataflowBranchNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowBranchNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowBranchNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowBranchNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowBranchNode.InnerSingleton;
}
// End ScriptStruct FDataflowBranchNode

// Begin ScriptStruct FDataflowSelectNode
static_assert(std::is_polymorphic<FDataflowSelectNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowSelectNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSelectNode;
class UScriptStruct* FDataflowSelectNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSelectNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSelectNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelectNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowSelectNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSelectNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowSelectNode>()
{
	return FDataflowSelectNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowSelectNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Icon", "GraphEditor.Branch_16x" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedIndex_MetaData[] = {
		{ "Category", "Condition" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Inputs[0]" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSelectNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataflowAnyType, METADATA_PARAMS(0, nullptr) }; // 1980332606
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowSelectNode, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 1980332606
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewProp_SelectedIndex = { "SelectedIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowSelectNode, SelectedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedIndex_MetaData), NewProp_SelectedIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowSelectNode, Result), Z_Construct_UScriptStruct_FDataflowAnyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1980332606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewProp_SelectedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowSelectNode",
	Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::PropPointers),
	sizeof(FDataflowSelectNode),
	alignof(FDataflowSelectNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowSelectNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSelectNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSelectNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowSelectNode.InnerSingleton;
}
// End ScriptStruct FDataflowSelectNode

// Begin ScriptStruct FDataflowPrintNode
static_assert(std::is_polymorphic<FDataflowPrintNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowPrintNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowPrintNode;
class UScriptStruct* FDataflowPrintNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowPrintNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowPrintNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPrintNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowPrintNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowPrintNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowPrintNode>()
{
	return FDataflowPrintNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowPrintNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Print value in the log\n* Supports any type comnvertible to a string \n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
		{ "ToolTip", "Print value in the log\nSupports any type comnvertible to a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "Value" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCoreNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowPrintNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowPrintNode, Value), Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1301212012
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowPrintNode",
	Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::PropPointers),
	sizeof(FDataflowPrintNode),
	alignof(FDataflowPrintNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowPrintNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowPrintNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowPrintNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowPrintNode.InnerSingleton;
}
// End ScriptStruct FDataflowPrintNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowCoreNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowReRouteNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::NewStructOps, TEXT("DataflowReRouteNode"), &Z_Registration_Info_UScriptStruct_DataflowReRouteNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowReRouteNode), 2006733032U) },
		{ FDataflowBranchNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewStructOps, TEXT("DataflowBranchNode"), &Z_Registration_Info_UScriptStruct_DataflowBranchNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowBranchNode), 214203527U) },
		{ FDataflowSelectNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewStructOps, TEXT("DataflowSelectNode"), &Z_Registration_Info_UScriptStruct_DataflowSelectNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSelectNode), 2589353392U) },
		{ FDataflowPrintNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::NewStructOps, TEXT("DataflowPrintNode"), &Z_Registration_Info_UScriptStruct_DataflowPrintNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowPrintNode), 1585251775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowCoreNodes_h_372356377(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowCoreNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowCoreNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
