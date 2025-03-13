// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowMathNodes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowAnyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowMathNodes() {}

// Begin Cross Module References
DATAFLOWCORE_API UEnum* Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathAbsNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathAddNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathArcCosNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathArcSinNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathArcTan2Node();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathArcTanNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathCeilNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathConstantNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathCosNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathCubeNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathDegToRadNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathDivideNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathExpNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathFloorNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathFracNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathLogNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathLogXNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathMaximumNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathMinimumNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathMultiplyNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathNegateNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathOneMinusNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathPowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathRadToDegNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathReciprocalNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathRoundNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSignNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSinNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSquareNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSquareRootNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSubtractNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathTanNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathTruncNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNumericTypes();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowMathOneInputOperatorNode
static_assert(std::is_polymorphic<FDataflowMathOneInputOperatorNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowMathOneInputOperatorNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathOneInputOperatorNode;
class UScriptStruct* FDataflowMathOneInputOperatorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathOneInputOperatorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathOneInputOperatorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathOneInputOperatorNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathOneInputOperatorNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathOneInputOperatorNode>()
{
	return FDataflowMathOneInputOperatorNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** One input operators base class */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "One input operators base class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Operands" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathOneInputOperatorNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathOneInputOperatorNode, A), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathOneInputOperatorNode, Result), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowMathOneInputOperatorNode",
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::PropPointers),
	sizeof(FDataflowMathOneInputOperatorNode),
	alignof(FDataflowMathOneInputOperatorNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathOneInputOperatorNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathOneInputOperatorNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathOneInputOperatorNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathOneInputOperatorNode

// Begin ScriptStruct FDataflowMathTwoInputsOperatorNode
static_assert(std::is_polymorphic<FDataflowMathTwoInputsOperatorNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowMathTwoInputsOperatorNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathTwoInputsOperatorNode;
class UScriptStruct* FDataflowMathTwoInputsOperatorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathTwoInputsOperatorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathTwoInputsOperatorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathTwoInputsOperatorNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathTwoInputsOperatorNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathTwoInputsOperatorNode>()
{
	return FDataflowMathTwoInputsOperatorNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Two inputs operators base class */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Two inputs operators base class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Operands" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Operands" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathTwoInputsOperatorNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathTwoInputsOperatorNode, A), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathTwoInputsOperatorNode, B), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathTwoInputsOperatorNode, Result), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowMathTwoInputsOperatorNode",
	Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::PropPointers),
	sizeof(FDataflowMathTwoInputsOperatorNode),
	alignof(FDataflowMathTwoInputsOperatorNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathTwoInputsOperatorNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathTwoInputsOperatorNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathTwoInputsOperatorNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathTwoInputsOperatorNode

// Begin ScriptStruct FDataflowMathAddNode
static_assert(std::is_polymorphic<FDataflowMathAddNode>() == std::is_polymorphic<FDataflowMathTwoInputsOperatorNode>(), "USTRUCT FDataflowMathAddNode cannot be polymorphic unless super FDataflowMathTwoInputsOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathAddNode;
class UScriptStruct* FDataflowMathAddNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathAddNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathAddNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAddNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathAddNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathAddNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathAddNode>()
{
	return FDataflowMathAddNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathAddNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Addition (A + B) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Addition (A + B)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathAddNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathAddNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode,
	&NewStructOps,
	"DataflowMathAddNode",
	nullptr,
	0,
	sizeof(FDataflowMathAddNode),
	alignof(FDataflowMathAddNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathAddNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathAddNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathAddNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathAddNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathAddNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathAddNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathAddNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathAddNode

// Begin ScriptStruct FDataflowMathSubtractNode
static_assert(std::is_polymorphic<FDataflowMathSubtractNode>() == std::is_polymorphic<FDataflowMathTwoInputsOperatorNode>(), "USTRUCT FDataflowMathSubtractNode cannot be polymorphic unless super FDataflowMathTwoInputsOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathSubtractNode;
class UScriptStruct* FDataflowMathSubtractNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSubtractNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathSubtractNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSubtractNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathSubtractNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSubtractNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathSubtractNode>()
{
	return FDataflowMathSubtractNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathSubtractNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Subtraction (A - B) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Subtraction (A - B)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathSubtractNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathSubtractNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode,
	&NewStructOps,
	"DataflowMathSubtractNode",
	nullptr,
	0,
	sizeof(FDataflowMathSubtractNode),
	alignof(FDataflowMathSubtractNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathSubtractNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathSubtractNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSubtractNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSubtractNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathSubtractNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathSubtractNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSubtractNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathSubtractNode

// Begin ScriptStruct FDataflowMathMultiplyNode
static_assert(std::is_polymorphic<FDataflowMathMultiplyNode>() == std::is_polymorphic<FDataflowMathTwoInputsOperatorNode>(), "USTRUCT FDataflowMathMultiplyNode cannot be polymorphic unless super FDataflowMathTwoInputsOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathMultiplyNode;
class UScriptStruct* FDataflowMathMultiplyNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathMultiplyNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathMultiplyNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMultiplyNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathMultiplyNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathMultiplyNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathMultiplyNode>()
{
	return FDataflowMathMultiplyNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathMultiplyNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Multiplication (A * B) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Multiplication (A * B)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathMultiplyNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathMultiplyNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode,
	&NewStructOps,
	"DataflowMathMultiplyNode",
	nullptr,
	0,
	sizeof(FDataflowMathMultiplyNode),
	alignof(FDataflowMathMultiplyNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathMultiplyNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathMultiplyNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathMultiplyNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathMultiplyNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathMultiplyNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathMultiplyNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathMultiplyNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathMultiplyNode

// Begin ScriptStruct FDataflowMathDivideNode
static_assert(std::is_polymorphic<FDataflowMathDivideNode>() == std::is_polymorphic<FDataflowMathTwoInputsOperatorNode>(), "USTRUCT FDataflowMathDivideNode cannot be polymorphic unless super FDataflowMathTwoInputsOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathDivideNode;
class UScriptStruct* FDataflowMathDivideNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathDivideNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathDivideNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathDivideNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathDivideNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathDivideNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathDivideNode>()
{
	return FDataflowMathDivideNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Division (A / B)\n* if B is equal to 0, 0 is returned Fallback value\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Division (A / B)\nif B is equal to 0, 0 is returned Fallback value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fallback_MetaData[] = {
		{ "Category", "SafeDivide" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathDivideNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::NewProp_Fallback = { "Fallback", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathDivideNode, Fallback), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fallback_MetaData), NewProp_Fallback_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::NewProp_Fallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode,
	&NewStructOps,
	"DataflowMathDivideNode",
	Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::PropPointers),
	sizeof(FDataflowMathDivideNode),
	alignof(FDataflowMathDivideNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathDivideNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathDivideNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathDivideNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathDivideNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathDivideNode

// Begin ScriptStruct FDataflowMathMinimumNode
static_assert(std::is_polymorphic<FDataflowMathMinimumNode>() == std::is_polymorphic<FDataflowMathTwoInputsOperatorNode>(), "USTRUCT FDataflowMathMinimumNode cannot be polymorphic unless super FDataflowMathTwoInputsOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathMinimumNode;
class UScriptStruct* FDataflowMathMinimumNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathMinimumNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathMinimumNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMinimumNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathMinimumNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathMinimumNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathMinimumNode>()
{
	return FDataflowMathMinimumNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathMinimumNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Minimum ( Min(A, B) ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Minimum ( Min(A, B) )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathMinimumNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathMinimumNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode,
	&NewStructOps,
	"DataflowMathMinimumNode",
	nullptr,
	0,
	sizeof(FDataflowMathMinimumNode),
	alignof(FDataflowMathMinimumNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathMinimumNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathMinimumNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathMinimumNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathMinimumNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathMinimumNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathMinimumNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathMinimumNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathMinimumNode

// Begin ScriptStruct FDataflowMathMaximumNode
static_assert(std::is_polymorphic<FDataflowMathMaximumNode>() == std::is_polymorphic<FDataflowMathTwoInputsOperatorNode>(), "USTRUCT FDataflowMathMaximumNode cannot be polymorphic unless super FDataflowMathTwoInputsOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathMaximumNode;
class UScriptStruct* FDataflowMathMaximumNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathMaximumNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathMaximumNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMaximumNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathMaximumNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathMaximumNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathMaximumNode>()
{
	return FDataflowMathMaximumNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathMaximumNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Maximum ( Max(A, B) ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Maximum ( Max(A, B) )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathMaximumNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathMaximumNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode,
	&NewStructOps,
	"DataflowMathMaximumNode",
	nullptr,
	0,
	sizeof(FDataflowMathMaximumNode),
	alignof(FDataflowMathMaximumNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathMaximumNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathMaximumNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathMaximumNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathMaximumNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathMaximumNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathMaximumNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathMaximumNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathMaximumNode

// Begin ScriptStruct FDataflowMathReciprocalNode
static_assert(std::is_polymorphic<FDataflowMathReciprocalNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathReciprocalNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathReciprocalNode;
class UScriptStruct* FDataflowMathReciprocalNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathReciprocalNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathReciprocalNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathReciprocalNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathReciprocalNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathReciprocalNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathReciprocalNode>()
{
	return FDataflowMathReciprocalNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Reciprocal( 1 / A )\n* if A is equal to 0, returns Fallback\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Reciprocal( 1 / A )\nif A is equal to 0, returns Fallback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fallback_MetaData[] = {
		{ "Category", "SafeDivide" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathReciprocalNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::NewProp_Fallback = { "Fallback", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathReciprocalNode, Fallback), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fallback_MetaData), NewProp_Fallback_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::NewProp_Fallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathReciprocalNode",
	Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::PropPointers),
	sizeof(FDataflowMathReciprocalNode),
	alignof(FDataflowMathReciprocalNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathReciprocalNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathReciprocalNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathReciprocalNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathReciprocalNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathReciprocalNode

// Begin ScriptStruct FDataflowMathSquareNode
static_assert(std::is_polymorphic<FDataflowMathSquareNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathSquareNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathSquareNode;
class UScriptStruct* FDataflowMathSquareNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSquareNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathSquareNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSquareNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathSquareNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSquareNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathSquareNode>()
{
	return FDataflowMathSquareNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathSquareNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Square ( A * A ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Square ( A * A )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathSquareNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathSquareNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathSquareNode",
	nullptr,
	0,
	sizeof(FDataflowMathSquareNode),
	alignof(FDataflowMathSquareNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathSquareNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathSquareNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSquareNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSquareNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathSquareNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathSquareNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSquareNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathSquareNode

// Begin ScriptStruct FDataflowMathCubeNode
static_assert(std::is_polymorphic<FDataflowMathCubeNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathCubeNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathCubeNode;
class UScriptStruct* FDataflowMathCubeNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathCubeNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathCubeNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCubeNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathCubeNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathCubeNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathCubeNode>()
{
	return FDataflowMathCubeNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathCubeNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Cube ( A * A * A ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Cube ( A * A * A )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathCubeNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathCubeNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathCubeNode",
	nullptr,
	0,
	sizeof(FDataflowMathCubeNode),
	alignof(FDataflowMathCubeNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathCubeNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathCubeNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathCubeNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathCubeNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathCubeNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathCubeNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathCubeNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathCubeNode

// Begin ScriptStruct FDataflowMathSquareRootNode
static_assert(std::is_polymorphic<FDataflowMathSquareRootNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathSquareRootNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathSquareRootNode;
class UScriptStruct* FDataflowMathSquareRootNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSquareRootNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathSquareRootNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSquareRootNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathSquareRootNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSquareRootNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathSquareRootNode>()
{
	return FDataflowMathSquareRootNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathSquareRootNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Square Root ( sqrt(A) ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Square Root ( sqrt(A) )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathSquareRootNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathSquareRootNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathSquareRootNode",
	nullptr,
	0,
	sizeof(FDataflowMathSquareRootNode),
	alignof(FDataflowMathSquareRootNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathSquareRootNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathSquareRootNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSquareRootNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSquareRootNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathSquareRootNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathSquareRootNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSquareRootNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathSquareRootNode

// Begin ScriptStruct FDataflowMathInverseSquareRootNode
static_assert(std::is_polymorphic<FDataflowMathInverseSquareRootNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathInverseSquareRootNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathInverseSquareRootNode;
class UScriptStruct* FDataflowMathInverseSquareRootNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathInverseSquareRootNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathInverseSquareRootNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathInverseSquareRootNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathInverseSquareRootNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathInverseSquareRootNode>()
{
	return FDataflowMathInverseSquareRootNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Inverse Square Root ( 1 / sqrt(A) ) \n* if A is equal to 0, returns Fallback\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Inverse Square Root ( 1 / sqrt(A) )\nif A is equal to 0, returns Fallback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fallback_MetaData[] = {
		{ "Category", "SafeDivide" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathInverseSquareRootNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::NewProp_Fallback = { "Fallback", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathInverseSquareRootNode, Fallback), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fallback_MetaData), NewProp_Fallback_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::NewProp_Fallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathInverseSquareRootNode",
	Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::PropPointers),
	sizeof(FDataflowMathInverseSquareRootNode),
	alignof(FDataflowMathInverseSquareRootNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathInverseSquareRootNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathInverseSquareRootNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathInverseSquareRootNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathInverseSquareRootNode

// Begin ScriptStruct FDataflowMathNegateNode
static_assert(std::is_polymorphic<FDataflowMathNegateNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathNegateNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathNegateNode;
class UScriptStruct* FDataflowMathNegateNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathNegateNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathNegateNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathNegateNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathNegateNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathNegateNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathNegateNode>()
{
	return FDataflowMathNegateNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Negate ( -A ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Negate ( -A )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fallback_MetaData[] = {
		{ "Category", "SafeDivide" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathNegateNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::NewProp_Fallback = { "Fallback", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathNegateNode, Fallback), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fallback_MetaData), NewProp_Fallback_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::NewProp_Fallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathNegateNode",
	Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::PropPointers),
	sizeof(FDataflowMathNegateNode),
	alignof(FDataflowMathNegateNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathNegateNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathNegateNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathNegateNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathNegateNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathNegateNode

// Begin ScriptStruct FDataflowMathAbsNode
static_assert(std::is_polymorphic<FDataflowMathAbsNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathAbsNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathAbsNode;
class UScriptStruct* FDataflowMathAbsNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathAbsNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathAbsNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAbsNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathAbsNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathAbsNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathAbsNode>()
{
	return FDataflowMathAbsNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Absolute value ( |A| ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Absolute value ( |A| )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fallback_MetaData[] = {
		{ "Category", "SafeDivide" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathAbsNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::NewProp_Fallback = { "Fallback", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathAbsNode, Fallback), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fallback_MetaData), NewProp_Fallback_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::NewProp_Fallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathAbsNode",
	Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::PropPointers),
	sizeof(FDataflowMathAbsNode),
	alignof(FDataflowMathAbsNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathAbsNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathAbsNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathAbsNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathAbsNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathAbsNode

// Begin ScriptStruct FDataflowMathFloorNode
static_assert(std::is_polymorphic<FDataflowMathFloorNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathFloorNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathFloorNode;
class UScriptStruct* FDataflowMathFloorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathFloorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathFloorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathFloorNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathFloorNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathFloorNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathFloorNode>()
{
	return FDataflowMathFloorNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathFloorNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Floor ( 1.4 => 1.0 | 1.9 => 1.0 | -5.3 => -6.0 ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Floor ( 1.4 => 1.0 | 1.9 => 1.0 | -5.3 => -6.0 )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathFloorNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathFloorNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathFloorNode",
	nullptr,
	0,
	sizeof(FDataflowMathFloorNode),
	alignof(FDataflowMathFloorNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathFloorNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathFloorNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathFloorNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathFloorNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathFloorNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathFloorNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathFloorNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathFloorNode

// Begin ScriptStruct FDataflowMathCeilNode
static_assert(std::is_polymorphic<FDataflowMathCeilNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathCeilNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathCeilNode;
class UScriptStruct* FDataflowMathCeilNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathCeilNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathCeilNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCeilNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathCeilNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathCeilNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathCeilNode>()
{
	return FDataflowMathCeilNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathCeilNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Ceil ( 1.4 => 2.0 | 1.9 => 2.0 | -5.3 => -5.0) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Ceil ( 1.4 => 2.0 | 1.9 => 2.0 | -5.3 => -5.0)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathCeilNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathCeilNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathCeilNode",
	nullptr,
	0,
	sizeof(FDataflowMathCeilNode),
	alignof(FDataflowMathCeilNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathCeilNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathCeilNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathCeilNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathCeilNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathCeilNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathCeilNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathCeilNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathCeilNode

// Begin ScriptStruct FDataflowMathRoundNode
static_assert(std::is_polymorphic<FDataflowMathRoundNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathRoundNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathRoundNode;
class UScriptStruct* FDataflowMathRoundNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathRoundNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathRoundNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRoundNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathRoundNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathRoundNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathRoundNode>()
{
	return FDataflowMathRoundNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathRoundNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Round ( 1.4 => 1.0 | 1.9 => 2.0 | -5.3 => -5.0) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Round ( 1.4 => 1.0 | 1.9 => 2.0 | -5.3 => -5.0)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathRoundNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathRoundNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathRoundNode",
	nullptr,
	0,
	sizeof(FDataflowMathRoundNode),
	alignof(FDataflowMathRoundNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathRoundNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathRoundNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathRoundNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathRoundNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathRoundNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathRoundNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathRoundNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathRoundNode

// Begin ScriptStruct FDataflowMathTruncNode
static_assert(std::is_polymorphic<FDataflowMathTruncNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathTruncNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathTruncNode;
class UScriptStruct* FDataflowMathTruncNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathTruncNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathTruncNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTruncNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathTruncNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathTruncNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathTruncNode>()
{
	return FDataflowMathTruncNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathTruncNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Trunc ( 1.4 => 1.0 | 1.9 => 1.0 | -5.3 => -5.0) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Trunc ( 1.4 => 1.0 | 1.9 => 1.0 | -5.3 => -5.0)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathTruncNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathTruncNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathTruncNode",
	nullptr,
	0,
	sizeof(FDataflowMathTruncNode),
	alignof(FDataflowMathTruncNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathTruncNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathTruncNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathTruncNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathTruncNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathTruncNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathTruncNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathTruncNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathTruncNode

// Begin ScriptStruct FDataflowMathFracNode
static_assert(std::is_polymorphic<FDataflowMathFracNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathFracNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathFracNode;
class UScriptStruct* FDataflowMathFracNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathFracNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathFracNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathFracNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathFracNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathFracNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathFracNode>()
{
	return FDataflowMathFracNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathFracNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Frac ( 1.4 => 0.4 | 1.9 => 0.9 | -5.3 => 0.3 ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Frac ( 1.4 => 0.4 | 1.9 => 0.9 | -5.3 => 0.3 )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathFracNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathFracNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathFracNode",
	nullptr,
	0,
	sizeof(FDataflowMathFracNode),
	alignof(FDataflowMathFracNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathFracNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathFracNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathFracNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathFracNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathFracNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathFracNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathFracNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathFracNode

// Begin ScriptStruct FDataflowMathPowNode
static_assert(std::is_polymorphic<FDataflowMathPowNode>() == std::is_polymorphic<FDataflowMathTwoInputsOperatorNode>(), "USTRUCT FDataflowMathPowNode cannot be polymorphic unless super FDataflowMathTwoInputsOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathPowNode;
class UScriptStruct* FDataflowMathPowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathPowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathPowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathPowNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathPowNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathPowNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathPowNode>()
{
	return FDataflowMathPowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathPowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** power ( A ^ B) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "power ( A ^ B)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathPowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathPowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode,
	&NewStructOps,
	"DataflowMathPowNode",
	nullptr,
	0,
	sizeof(FDataflowMathPowNode),
	alignof(FDataflowMathPowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathPowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathPowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathPowNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathPowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathPowNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathPowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathPowNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathPowNode

// Begin ScriptStruct FDataflowMathLogXNode
static_assert(std::is_polymorphic<FDataflowMathLogXNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathLogXNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathLogXNode;
class UScriptStruct* FDataflowMathLogXNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathLogXNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathLogXNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathLogXNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathLogXNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathLogXNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathLogXNode>()
{
	return FDataflowMathLogXNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Log for a specific base ( Log[Base](A) ) \n* If base is negative or zero returns 0\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Log for a specific base ( Log[Base](A) )\nIf base is negative or zero returns 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "SafeDivide" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathLogXNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathLogXNode, Base), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::NewProp_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathLogXNode",
	Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::PropPointers),
	sizeof(FDataflowMathLogXNode),
	alignof(FDataflowMathLogXNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathLogXNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathLogXNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathLogXNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathLogXNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathLogXNode

// Begin ScriptStruct FDataflowMathLogNode
static_assert(std::is_polymorphic<FDataflowMathLogNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathLogNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathLogNode;
class UScriptStruct* FDataflowMathLogNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathLogNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathLogNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathLogNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathLogNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathLogNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathLogNode>()
{
	return FDataflowMathLogNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathLogNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Natural log ( Log(A) ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Natural log ( Log(A) )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathLogNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathLogNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathLogNode",
	nullptr,
	0,
	sizeof(FDataflowMathLogNode),
	alignof(FDataflowMathLogNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathLogNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathLogNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathLogNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathLogNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathLogNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathLogNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathLogNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathLogNode

// Begin ScriptStruct FDataflowMathExpNode
static_assert(std::is_polymorphic<FDataflowMathExpNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathExpNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathExpNode;
class UScriptStruct* FDataflowMathExpNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathExpNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathExpNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathExpNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathExpNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathExpNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathExpNode>()
{
	return FDataflowMathExpNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathExpNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Exponential ( Exp(A) ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Exponential ( Exp(A) )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathExpNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathExpNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathExpNode",
	nullptr,
	0,
	sizeof(FDataflowMathExpNode),
	alignof(FDataflowMathExpNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathExpNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathExpNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathExpNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathExpNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathExpNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathExpNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathExpNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathExpNode

// Begin ScriptStruct FDataflowMathSignNode
static_assert(std::is_polymorphic<FDataflowMathSignNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathSignNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathSignNode;
class UScriptStruct* FDataflowMathSignNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSignNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathSignNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSignNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathSignNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSignNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathSignNode>()
{
	return FDataflowMathSignNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathSignNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** return -1, 0, +1 whether the input is respectively negative, zero or positive ( Sign(A) ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "return -1, 0, +1 whether the input is respectively negative, zero or positive ( Sign(A) )" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathSignNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathSignNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathSignNode",
	nullptr,
	0,
	sizeof(FDataflowMathSignNode),
	alignof(FDataflowMathSignNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathSignNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathSignNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSignNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSignNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathSignNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathSignNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSignNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathSignNode

// Begin ScriptStruct FDataflowMathOneMinusNode
static_assert(std::is_polymorphic<FDataflowMathOneMinusNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathOneMinusNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathOneMinusNode;
class UScriptStruct* FDataflowMathOneMinusNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathOneMinusNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathOneMinusNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathOneMinusNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathOneMinusNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathOneMinusNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathOneMinusNode>()
{
	return FDataflowMathOneMinusNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathOneMinusNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** One minus (1 - A) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "One minus (1 - A)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathOneMinusNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathOneMinusNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathOneMinusNode",
	nullptr,
	0,
	sizeof(FDataflowMathOneMinusNode),
	alignof(FDataflowMathOneMinusNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathOneMinusNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathOneMinusNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathOneMinusNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathOneMinusNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathOneMinusNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathOneMinusNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathOneMinusNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathOneMinusNode

// Begin Enum EDataflowMathConstantsEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowMathConstantsEnum;
static UEnum* EDataflowMathConstantsEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("EDataflowMathConstantsEnum"));
	}
	return Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.OuterSingleton;
}
template<> DATAFLOWCORE_API UEnum* StaticEnum<EDataflowMathConstantsEnum>()
{
	return EDataflowMathConstantsEnum_StaticEnum();
}
struct Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Math_Constants_E.DisplayName", "e" },
		{ "Dataflow_Math_Constants_E.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_E" },
		{ "Dataflow_Math_Constants_FourPi.DisplayName", "FourPi" },
		{ "Dataflow_Math_Constants_FourPi.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_FourPi" },
		{ "Dataflow_Math_Constants_Gamma.DisplayName", "Gamma" },
		{ "Dataflow_Math_Constants_Gamma.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Gamma" },
		{ "Dataflow_Math_Constants_GoldenRatio.DisplayName", "GoldenRatio" },
		{ "Dataflow_Math_Constants_GoldenRatio.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_GoldenRatio" },
		{ "Dataflow_Math_Constants_HalfPi.DisplayName", "HalfPi" },
		{ "Dataflow_Math_Constants_HalfPi.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_HalfPi" },
		{ "Dataflow_Math_Constants_InvPi.DisplayName", "InvPi" },
		{ "Dataflow_Math_Constants_InvPi.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvPi" },
		{ "Dataflow_Math_Constants_InvSqrt2.DisplayName", "InvSqrt2" },
		{ "Dataflow_Math_Constants_InvSqrt2.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvSqrt2" },
		{ "Dataflow_Math_Constants_InvSqrt3.DisplayName", "InvSqrt3" },
		{ "Dataflow_Math_Constants_InvSqrt3.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvSqrt3" },
		{ "Dataflow_Math_Constants_InvTwoPi.DisplayName", "InvTwoPi" },
		{ "Dataflow_Math_Constants_InvTwoPi.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvTwoPi" },
		{ "Dataflow_Math_Constants_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Math_Constants_Max.Hidden", "" },
		{ "Dataflow_Math_Constants_Max.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Max" },
		{ "Dataflow_Math_Constants_Max.ToolTip", "256th entry" },
		{ "Dataflow_Math_Constants_Pi.DisplayName", "Pi" },
		{ "Dataflow_Math_Constants_Pi.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Pi" },
		{ "Dataflow_Math_Constants_Sqrt2.DisplayName", "Sqrt2" },
		{ "Dataflow_Math_Constants_Sqrt2.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Sqrt2" },
		{ "Dataflow_Math_Constants_Sqrt3.DisplayName", "Sqrt3" },
		{ "Dataflow_Math_Constants_Sqrt3.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Sqrt3" },
		{ "Dataflow_Math_Constants_TwoPi.DisplayName", "TwoPi" },
		{ "Dataflow_Math_Constants_TwoPi.Name", "EDataflowMathConstantsEnum::Dataflow_Math_Constants_TwoPi" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Pi", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_Pi },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_HalfPi", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_HalfPi },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_TwoPi", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_TwoPi },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_FourPi", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_FourPi },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvPi", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvPi },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvTwoPi", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvTwoPi },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Sqrt2", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_Sqrt2 },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvSqrt2", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvSqrt2 },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Sqrt3", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_Sqrt3 },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvSqrt3", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_InvSqrt3 },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_E", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_E },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Gamma", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_Gamma },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_GoldenRatio", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_GoldenRatio },
		{ "EDataflowMathConstantsEnum::Dataflow_Math_Constants_Max", (int64)EDataflowMathConstantsEnum::Dataflow_Math_Constants_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DataflowCore,
	nullptr,
	"EDataflowMathConstantsEnum",
	"EDataflowMathConstantsEnum",
	Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum()
{
	if (!Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.InnerSingleton, Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.InnerSingleton;
}
// End Enum EDataflowMathConstantsEnum

// Begin ScriptStruct FDataflowMathConstantNode
static_assert(std::is_polymorphic<FDataflowMathConstantNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowMathConstantNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathConstantNode;
class UScriptStruct* FDataflowMathConstantNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathConstantNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathConstantNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathConstantNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathConstantNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathConstantNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathConstantNode>()
{
	return FDataflowMathConstantNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Math constants ( see EDataflowMathConstantsEnum ) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Math constants ( see EDataflowMathConstantsEnum )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "Category", "Constants" },
		{ "Comment", "/** Math constant to output */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Math constant to output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Constant_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathConstantNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::NewProp_Constant_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathConstantNode, Constant), Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) }; // 852634840
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowMathConstantNode, Result), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::NewProp_Constant_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::NewProp_Constant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowMathConstantNode",
	Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::PropPointers),
	sizeof(FDataflowMathConstantNode),
	alignof(FDataflowMathConstantNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathConstantNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathConstantNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathConstantNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathConstantNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathConstantNode

// Begin ScriptStruct FDataflowMathSinNode
static_assert(std::is_polymorphic<FDataflowMathSinNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathSinNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathSinNode;
class UScriptStruct* FDataflowMathSinNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSinNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathSinNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSinNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathSinNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSinNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathSinNode>()
{
	return FDataflowMathSinNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathSinNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Sin(A) with A in radians  */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Sin(A) with A in radians" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathSinNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathSinNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathSinNode",
	nullptr,
	0,
	sizeof(FDataflowMathSinNode),
	alignof(FDataflowMathSinNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathSinNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathSinNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathSinNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathSinNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathSinNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathSinNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathSinNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathSinNode

// Begin ScriptStruct FDataflowMathCosNode
static_assert(std::is_polymorphic<FDataflowMathCosNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathCosNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathCosNode;
class UScriptStruct* FDataflowMathCosNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathCosNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathCosNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCosNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathCosNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathCosNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathCosNode>()
{
	return FDataflowMathCosNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathCosNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Cos(A) with A in radians  */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Cos(A) with A in radians" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathCosNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathCosNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathCosNode",
	nullptr,
	0,
	sizeof(FDataflowMathCosNode),
	alignof(FDataflowMathCosNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathCosNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathCosNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathCosNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathCosNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathCosNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathCosNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathCosNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathCosNode

// Begin ScriptStruct FDataflowMathTanNode
static_assert(std::is_polymorphic<FDataflowMathTanNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathTanNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathTanNode;
class UScriptStruct* FDataflowMathTanNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathTanNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathTanNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTanNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathTanNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathTanNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathTanNode>()
{
	return FDataflowMathTanNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathTanNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Tan(A) with A in radians  */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "Tan(A) with A in radians" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathTanNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathTanNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathTanNode",
	nullptr,
	0,
	sizeof(FDataflowMathTanNode),
	alignof(FDataflowMathTanNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathTanNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathTanNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathTanNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathTanNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathTanNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathTanNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathTanNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathTanNode

// Begin ScriptStruct FDataflowMathArcSinNode
static_assert(std::is_polymorphic<FDataflowMathArcSinNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathArcSinNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathArcSinNode;
class UScriptStruct* FDataflowMathArcSinNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathArcSinNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathArcSinNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcSinNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathArcSinNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathArcSinNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathArcSinNode>()
{
	return FDataflowMathArcSinNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathArcSinNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** ArcSin(A) returns a value in radians  */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "ArcSin(A) returns a value in radians" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathArcSinNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathArcSinNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathArcSinNode",
	nullptr,
	0,
	sizeof(FDataflowMathArcSinNode),
	alignof(FDataflowMathArcSinNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathArcSinNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathArcSinNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathArcSinNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathArcSinNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathArcSinNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathArcSinNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathArcSinNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathArcSinNode

// Begin ScriptStruct FDataflowMathArcCosNode
static_assert(std::is_polymorphic<FDataflowMathArcCosNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathArcCosNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathArcCosNode;
class UScriptStruct* FDataflowMathArcCosNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathArcCosNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathArcCosNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcCosNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathArcCosNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathArcCosNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathArcCosNode>()
{
	return FDataflowMathArcCosNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathArcCosNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** ArcCos(A) returns a value in radians  */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "ArcCos(A) returns a value in radians" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathArcCosNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathArcCosNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathArcCosNode",
	nullptr,
	0,
	sizeof(FDataflowMathArcCosNode),
	alignof(FDataflowMathArcCosNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathArcCosNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathArcCosNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathArcCosNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathArcCosNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathArcCosNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathArcCosNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathArcCosNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathArcCosNode

// Begin ScriptStruct FDataflowMathArcTanNode
static_assert(std::is_polymorphic<FDataflowMathArcTanNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathArcTanNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathArcTanNode;
class UScriptStruct* FDataflowMathArcTanNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathArcTanNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathArcTanNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcTanNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathArcTanNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathArcTanNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathArcTanNode>()
{
	return FDataflowMathArcTanNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathArcTanNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** ArcTan(A) returns a value in radians  */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "ArcTan(A) returns a value in radians" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathArcTanNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathArcTanNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathArcTanNode",
	nullptr,
	0,
	sizeof(FDataflowMathArcTanNode),
	alignof(FDataflowMathArcTanNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathArcTanNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathArcTanNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathArcTanNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathArcTanNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathArcTanNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathArcTanNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathArcTanNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathArcTanNode

// Begin ScriptStruct FDataflowMathArcTan2Node
static_assert(std::is_polymorphic<FDataflowMathArcTan2Node>() == std::is_polymorphic<FDataflowMathTwoInputsOperatorNode>(), "USTRUCT FDataflowMathArcTan2Node cannot be polymorphic unless super FDataflowMathTwoInputsOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathArcTan2Node;
class UScriptStruct* FDataflowMathArcTan2Node::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathArcTan2Node.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathArcTan2Node.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcTan2Node, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathArcTan2Node"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathArcTan2Node.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathArcTan2Node>()
{
	return FDataflowMathArcTan2Node::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathArcTan2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** ArcTan2(A, B) returns a value in radians  */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "ArcTan2(A, B) returns a value in radians" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathArcTan2Node>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathArcTan2Node_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode,
	&NewStructOps,
	"DataflowMathArcTan2Node",
	nullptr,
	0,
	sizeof(FDataflowMathArcTan2Node),
	alignof(FDataflowMathArcTan2Node),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathArcTan2Node_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathArcTan2Node_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathArcTan2Node()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathArcTan2Node.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathArcTan2Node.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathArcTan2Node_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathArcTan2Node.InnerSingleton;
}
// End ScriptStruct FDataflowMathArcTan2Node

// Begin ScriptStruct FDataflowMathDegToRadNode
static_assert(std::is_polymorphic<FDataflowMathDegToRadNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathDegToRadNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathDegToRadNode;
class UScriptStruct* FDataflowMathDegToRadNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathDegToRadNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathDegToRadNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathDegToRadNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathDegToRadNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathDegToRadNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathDegToRadNode>()
{
	return FDataflowMathDegToRadNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathDegToRadNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** DegToRad(A) convert degrees to radians */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "DegToRad(A) convert degrees to radians" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathDegToRadNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathDegToRadNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathDegToRadNode",
	nullptr,
	0,
	sizeof(FDataflowMathDegToRadNode),
	alignof(FDataflowMathDegToRadNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathDegToRadNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathDegToRadNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathDegToRadNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathDegToRadNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathDegToRadNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathDegToRadNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathDegToRadNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathDegToRadNode

// Begin ScriptStruct FDataflowMathRadToDegNode
static_assert(std::is_polymorphic<FDataflowMathRadToDegNode>() == std::is_polymorphic<FDataflowMathOneInputOperatorNode>(), "USTRUCT FDataflowMathRadToDegNode cannot be polymorphic unless super FDataflowMathOneInputOperatorNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMathRadToDegNode;
class UScriptStruct* FDataflowMathRadToDegNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathRadToDegNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMathRadToDegNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRadToDegNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMathRadToDegNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathRadToDegNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMathRadToDegNode>()
{
	return FDataflowMathRadToDegNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMathRadToDegNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** RadToDeg(A) convert radians to degrees */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowMathNodes.h" },
		{ "ToolTip", "RadToDeg(A) convert radians to degrees" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMathRadToDegNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMathRadToDegNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
	&NewStructOps,
	"DataflowMathRadToDegNode",
	nullptr,
	0,
	sizeof(FDataflowMathRadToDegNode),
	alignof(FDataflowMathRadToDegNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMathRadToDegNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMathRadToDegNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMathRadToDegNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMathRadToDegNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMathRadToDegNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMathRadToDegNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMathRadToDegNode.InnerSingleton;
}
// End ScriptStruct FDataflowMathRadToDegNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataflowMathConstantsEnum_StaticEnum, TEXT("EDataflowMathConstantsEnum"), &Z_Registration_Info_UEnum_EDataflowMathConstantsEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 852634840U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowMathOneInputOperatorNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::NewStructOps, TEXT("DataflowMathOneInputOperatorNode"), &Z_Registration_Info_UScriptStruct_DataflowMathOneInputOperatorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathOneInputOperatorNode), 1582921618U) },
		{ FDataflowMathTwoInputsOperatorNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::NewStructOps, TEXT("DataflowMathTwoInputsOperatorNode"), &Z_Registration_Info_UScriptStruct_DataflowMathTwoInputsOperatorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathTwoInputsOperatorNode), 3742865066U) },
		{ FDataflowMathAddNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathAddNode_Statics::NewStructOps, TEXT("DataflowMathAddNode"), &Z_Registration_Info_UScriptStruct_DataflowMathAddNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathAddNode), 124159008U) },
		{ FDataflowMathSubtractNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathSubtractNode_Statics::NewStructOps, TEXT("DataflowMathSubtractNode"), &Z_Registration_Info_UScriptStruct_DataflowMathSubtractNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathSubtractNode), 4196165098U) },
		{ FDataflowMathMultiplyNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathMultiplyNode_Statics::NewStructOps, TEXT("DataflowMathMultiplyNode"), &Z_Registration_Info_UScriptStruct_DataflowMathMultiplyNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathMultiplyNode), 2545554619U) },
		{ FDataflowMathDivideNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::NewStructOps, TEXT("DataflowMathDivideNode"), &Z_Registration_Info_UScriptStruct_DataflowMathDivideNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathDivideNode), 1692552215U) },
		{ FDataflowMathMinimumNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathMinimumNode_Statics::NewStructOps, TEXT("DataflowMathMinimumNode"), &Z_Registration_Info_UScriptStruct_DataflowMathMinimumNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathMinimumNode), 2660932798U) },
		{ FDataflowMathMaximumNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathMaximumNode_Statics::NewStructOps, TEXT("DataflowMathMaximumNode"), &Z_Registration_Info_UScriptStruct_DataflowMathMaximumNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathMaximumNode), 2785115344U) },
		{ FDataflowMathReciprocalNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::NewStructOps, TEXT("DataflowMathReciprocalNode"), &Z_Registration_Info_UScriptStruct_DataflowMathReciprocalNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathReciprocalNode), 2722931135U) },
		{ FDataflowMathSquareNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathSquareNode_Statics::NewStructOps, TEXT("DataflowMathSquareNode"), &Z_Registration_Info_UScriptStruct_DataflowMathSquareNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathSquareNode), 3192618409U) },
		{ FDataflowMathCubeNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathCubeNode_Statics::NewStructOps, TEXT("DataflowMathCubeNode"), &Z_Registration_Info_UScriptStruct_DataflowMathCubeNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathCubeNode), 3168407797U) },
		{ FDataflowMathSquareRootNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathSquareRootNode_Statics::NewStructOps, TEXT("DataflowMathSquareRootNode"), &Z_Registration_Info_UScriptStruct_DataflowMathSquareRootNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathSquareRootNode), 1570667183U) },
		{ FDataflowMathInverseSquareRootNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::NewStructOps, TEXT("DataflowMathInverseSquareRootNode"), &Z_Registration_Info_UScriptStruct_DataflowMathInverseSquareRootNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathInverseSquareRootNode), 1342026077U) },
		{ FDataflowMathNegateNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::NewStructOps, TEXT("DataflowMathNegateNode"), &Z_Registration_Info_UScriptStruct_DataflowMathNegateNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathNegateNode), 3696893938U) },
		{ FDataflowMathAbsNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::NewStructOps, TEXT("DataflowMathAbsNode"), &Z_Registration_Info_UScriptStruct_DataflowMathAbsNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathAbsNode), 1584151049U) },
		{ FDataflowMathFloorNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathFloorNode_Statics::NewStructOps, TEXT("DataflowMathFloorNode"), &Z_Registration_Info_UScriptStruct_DataflowMathFloorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathFloorNode), 3415571703U) },
		{ FDataflowMathCeilNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathCeilNode_Statics::NewStructOps, TEXT("DataflowMathCeilNode"), &Z_Registration_Info_UScriptStruct_DataflowMathCeilNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathCeilNode), 2085981589U) },
		{ FDataflowMathRoundNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathRoundNode_Statics::NewStructOps, TEXT("DataflowMathRoundNode"), &Z_Registration_Info_UScriptStruct_DataflowMathRoundNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathRoundNode), 4183276270U) },
		{ FDataflowMathTruncNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathTruncNode_Statics::NewStructOps, TEXT("DataflowMathTruncNode"), &Z_Registration_Info_UScriptStruct_DataflowMathTruncNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathTruncNode), 1174974392U) },
		{ FDataflowMathFracNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathFracNode_Statics::NewStructOps, TEXT("DataflowMathFracNode"), &Z_Registration_Info_UScriptStruct_DataflowMathFracNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathFracNode), 3765790844U) },
		{ FDataflowMathPowNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathPowNode_Statics::NewStructOps, TEXT("DataflowMathPowNode"), &Z_Registration_Info_UScriptStruct_DataflowMathPowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathPowNode), 1192528143U) },
		{ FDataflowMathLogXNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::NewStructOps, TEXT("DataflowMathLogXNode"), &Z_Registration_Info_UScriptStruct_DataflowMathLogXNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathLogXNode), 2097997216U) },
		{ FDataflowMathLogNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathLogNode_Statics::NewStructOps, TEXT("DataflowMathLogNode"), &Z_Registration_Info_UScriptStruct_DataflowMathLogNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathLogNode), 4172227426U) },
		{ FDataflowMathExpNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathExpNode_Statics::NewStructOps, TEXT("DataflowMathExpNode"), &Z_Registration_Info_UScriptStruct_DataflowMathExpNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathExpNode), 2829062697U) },
		{ FDataflowMathSignNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathSignNode_Statics::NewStructOps, TEXT("DataflowMathSignNode"), &Z_Registration_Info_UScriptStruct_DataflowMathSignNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathSignNode), 1322508191U) },
		{ FDataflowMathOneMinusNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathOneMinusNode_Statics::NewStructOps, TEXT("DataflowMathOneMinusNode"), &Z_Registration_Info_UScriptStruct_DataflowMathOneMinusNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathOneMinusNode), 530142437U) },
		{ FDataflowMathConstantNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::NewStructOps, TEXT("DataflowMathConstantNode"), &Z_Registration_Info_UScriptStruct_DataflowMathConstantNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathConstantNode), 1328016670U) },
		{ FDataflowMathSinNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathSinNode_Statics::NewStructOps, TEXT("DataflowMathSinNode"), &Z_Registration_Info_UScriptStruct_DataflowMathSinNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathSinNode), 1826153564U) },
		{ FDataflowMathCosNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathCosNode_Statics::NewStructOps, TEXT("DataflowMathCosNode"), &Z_Registration_Info_UScriptStruct_DataflowMathCosNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathCosNode), 480767182U) },
		{ FDataflowMathTanNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathTanNode_Statics::NewStructOps, TEXT("DataflowMathTanNode"), &Z_Registration_Info_UScriptStruct_DataflowMathTanNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathTanNode), 3385090368U) },
		{ FDataflowMathArcSinNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathArcSinNode_Statics::NewStructOps, TEXT("DataflowMathArcSinNode"), &Z_Registration_Info_UScriptStruct_DataflowMathArcSinNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathArcSinNode), 3837633308U) },
		{ FDataflowMathArcCosNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathArcCosNode_Statics::NewStructOps, TEXT("DataflowMathArcCosNode"), &Z_Registration_Info_UScriptStruct_DataflowMathArcCosNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathArcCosNode), 1799766472U) },
		{ FDataflowMathArcTanNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathArcTanNode_Statics::NewStructOps, TEXT("DataflowMathArcTanNode"), &Z_Registration_Info_UScriptStruct_DataflowMathArcTanNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathArcTanNode), 4228084225U) },
		{ FDataflowMathArcTan2Node::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathArcTan2Node_Statics::NewStructOps, TEXT("DataflowMathArcTan2Node"), &Z_Registration_Info_UScriptStruct_DataflowMathArcTan2Node, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathArcTan2Node), 335876375U) },
		{ FDataflowMathDegToRadNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathDegToRadNode_Statics::NewStructOps, TEXT("DataflowMathDegToRadNode"), &Z_Registration_Info_UScriptStruct_DataflowMathDegToRadNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathDegToRadNode), 2087478262U) },
		{ FDataflowMathRadToDegNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowMathRadToDegNode_Statics::NewStructOps, TEXT("DataflowMathRadToDegNode"), &Z_Registration_Info_UScriptStruct_DataflowMathRadToDegNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMathRadToDegNode), 204269831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h_3206564760(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
