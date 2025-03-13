// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowVectorNodes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowAnyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowVectorNodes() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNumericTypes();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorAddNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorBreakNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorDistanceNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorDotProductNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorLengthNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorNormalize();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorScaleNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorSubtractNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorTypes();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowVectorMakeVec2Node
static_assert(std::is_polymorphic<FDataflowVectorMakeVec2Node>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorMakeVec2Node cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec2Node;
class UScriptStruct* FDataflowVectorMakeVec2Node::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec2Node.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec2Node.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorMakeVec2Node"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec2Node.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorMakeVec2Node>()
{
	return FDataflowVectorMakeVec2Node::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Make a 2D Vector */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Make a 2D Vector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** X component */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "X component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Y component */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Y component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector2D_MetaData[] = {
		{ "Comment", "/** 2D Vector {X, Y} */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "2D Vector {X, Y}" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_X;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorMakeVec2Node>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec2Node, X), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec2Node, Y), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::NewProp_Vector2D = { "Vector2D", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec2Node, Vector2D), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector2D_MetaData), NewProp_Vector2D_MetaData) }; // 3064604349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::NewProp_Vector2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorMakeVec2Node",
	Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::PropPointers),
	sizeof(FDataflowVectorMakeVec2Node),
	alignof(FDataflowVectorMakeVec2Node),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec2Node.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec2Node.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec2Node.InnerSingleton;
}
// End ScriptStruct FDataflowVectorMakeVec2Node

// Begin ScriptStruct FDataflowVectorMakeVec3Node
static_assert(std::is_polymorphic<FDataflowVectorMakeVec3Node>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorMakeVec3Node cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec3Node;
class UScriptStruct* FDataflowVectorMakeVec3Node::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec3Node.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec3Node.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorMakeVec3Node"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec3Node.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorMakeVec3Node>()
{
	return FDataflowVectorMakeVec3Node::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Make a 3D Vector */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Make a 3D Vector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** X component */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "X component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Y component */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Y component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Z component */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Z component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector3D_MetaData[] = {
		{ "Comment", "/** 3D Vector {X, Y, Z} */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "3D Vector {X, Y, Z}" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_X;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector3D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorMakeVec3Node>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec3Node, X), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec3Node, Y), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec3Node, Z), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewProp_Vector3D = { "Vector3D", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec3Node, Vector3D), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector3D_MetaData), NewProp_Vector3D_MetaData) }; // 3064604349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewProp_Vector3D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorMakeVec3Node",
	Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::PropPointers),
	sizeof(FDataflowVectorMakeVec3Node),
	alignof(FDataflowVectorMakeVec3Node),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec3Node.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec3Node.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec3Node.InnerSingleton;
}
// End ScriptStruct FDataflowVectorMakeVec3Node

// Begin ScriptStruct FDataflowVectorMakeVec4Node
static_assert(std::is_polymorphic<FDataflowVectorMakeVec4Node>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorMakeVec4Node cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec4Node;
class UScriptStruct* FDataflowVectorMakeVec4Node::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec4Node.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec4Node.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorMakeVec4Node"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec4Node.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorMakeVec4Node>()
{
	return FDataflowVectorMakeVec4Node::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Make a 4D Vector */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Make a 4D Vector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** X component */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "X component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Y component */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Y component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Z component */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Z component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** W component */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "W component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector4D_MetaData[] = {
		{ "Comment", "/** 4D Vector {X, Y, Z, W} */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "4D Vector {X, Y, Z, W}" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_X;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_W;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorMakeVec4Node>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec4Node, X), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec4Node, Y), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec4Node, Z), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec4Node, W), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W_MetaData), NewProp_W_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_Vector4D = { "Vector4D", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorMakeVec4Node, Vector4D), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector4D_MetaData), NewProp_Vector4D_MetaData) }; // 3064604349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_W,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewProp_Vector4D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorMakeVec4Node",
	Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::PropPointers),
	sizeof(FDataflowVectorMakeVec4Node),
	alignof(FDataflowVectorMakeVec4Node),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec4Node.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec4Node.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec4Node.InnerSingleton;
}
// End ScriptStruct FDataflowVectorMakeVec4Node

// Begin ScriptStruct FDataflowVectorBreakNode
static_assert(std::is_polymorphic<FDataflowVectorBreakNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorBreakNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorBreakNode;
class UScriptStruct* FDataflowVectorBreakNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorBreakNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorBreakNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorBreakNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorBreakNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorBreakNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorBreakNode>()
{
	return FDataflowVectorBreakNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Break a vector in 4 components\n* if the input vector is of a lower dimension than 4, the remaining components will be set to zero\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Break a vector in 4 components\nif the input vector is of a lower dimension than 4, the remaining components will be set to zero" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Vector to break into components */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Vector to break into components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Comment", "/** X component */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "X component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Comment", "/** Y component */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Y component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Comment", "/** Z component */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Z component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
		{ "Comment", "/** W component */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "W component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_X;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_W;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorBreakNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorBreakNode, V), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorBreakNode, X), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorBreakNode, Y), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorBreakNode, Z), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorBreakNode, W), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W_MetaData), NewProp_W_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewProp_W,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorBreakNode",
	Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::PropPointers),
	sizeof(FDataflowVectorBreakNode),
	alignof(FDataflowVectorBreakNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorBreakNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorBreakNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorBreakNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorBreakNode.InnerSingleton;
}
// End ScriptStruct FDataflowVectorBreakNode

// Begin ScriptStruct FDataflowVectorAddNode
static_assert(std::is_polymorphic<FDataflowVectorAddNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorAddNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorAddNode;
class UScriptStruct* FDataflowVectorAddNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorAddNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorAddNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorAddNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorAddNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorAddNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorAddNode>()
{
	return FDataflowVectorAddNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Add two vectors component wise : V = (A + B)*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Add two vectors component wise : V = (A + B)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** A Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "A Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** B Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "B Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Comment", "/** Add result V=A+B */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Add result V=A+B" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorAddNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorAddNode, A), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorAddNode, B), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorAddNode, V), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) }; // 3064604349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::NewProp_V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorAddNode",
	Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::PropPointers),
	sizeof(FDataflowVectorAddNode),
	alignof(FDataflowVectorAddNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorAddNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorAddNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorAddNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorAddNode.InnerSingleton;
}
// End ScriptStruct FDataflowVectorAddNode

// Begin ScriptStruct FDataflowVectorSubtractNode
static_assert(std::is_polymorphic<FDataflowVectorSubtractNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorSubtractNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorSubtractNode;
class UScriptStruct* FDataflowVectorSubtractNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorSubtractNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorSubtractNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorSubtractNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorSubtractNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorSubtractNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorSubtractNode>()
{
	return FDataflowVectorSubtractNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Subtract two vectors component wise: V = (A - B) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Subtract two vectors component wise: V = (A - B)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** A Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "A Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** B Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "B Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Comment", "/** Add result V=A-B */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Add result V=A-B" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorSubtractNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorSubtractNode, A), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorSubtractNode, B), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorSubtractNode, V), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) }; // 3064604349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::NewProp_V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorSubtractNode",
	Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::PropPointers),
	sizeof(FDataflowVectorSubtractNode),
	alignof(FDataflowVectorSubtractNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorSubtractNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorSubtractNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorSubtractNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorSubtractNode.InnerSingleton;
}
// End ScriptStruct FDataflowVectorSubtractNode

// Begin ScriptStruct FDataflowVectorDotProductNode
static_assert(std::is_polymorphic<FDataflowVectorDotProductNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorDotProductNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorDotProductNode;
class UScriptStruct* FDataflowVectorDotProductNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorDotProductNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorDotProductNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorDotProductNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorDotProductNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorDotProductNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorDotProductNode>()
{
	return FDataflowVectorDotProductNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Compute the dot product between two vectors : DotProduct = A.B */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Compute the dot product between two vectors : DotProduct = A.B" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** A Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "A Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** B Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "B Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotProduct_MetaData[] = {
		{ "Comment", "/** Resulting dot product : DotProduct=A.B  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Resulting dot product : DotProduct=A.B" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DotProduct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorDotProductNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorDotProductNode, A), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorDotProductNode, B), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::NewProp_DotProduct = { "DotProduct", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorDotProductNode, DotProduct), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotProduct_MetaData), NewProp_DotProduct_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::NewProp_DotProduct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorDotProductNode",
	Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::PropPointers),
	sizeof(FDataflowVectorDotProductNode),
	alignof(FDataflowVectorDotProductNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorDotProductNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorDotProductNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorDotProductNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorDotProductNode.InnerSingleton;
}
// End ScriptStruct FDataflowVectorDotProductNode

// Begin ScriptStruct FDataflowVectorLengthNode
static_assert(std::is_polymorphic<FDataflowVectorLengthNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorLengthNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorLengthNode;
class UScriptStruct* FDataflowVectorLengthNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorLengthNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorLengthNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorLengthNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorLengthNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorLengthNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorLengthNode>()
{
	return FDataflowVectorLengthNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Compute the Length of a vector : Length = |V| */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Compute the Length of a vector : Length = |V|" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Vector to get length from */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Vector to get length from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Comment", "/** Length of the input vector : Length=|V| */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Length of the input vector : Length=|V|" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorLengthNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorLengthNode, V), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorLengthNode, Length), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorLengthNode",
	Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::PropPointers),
	sizeof(FDataflowVectorLengthNode),
	alignof(FDataflowVectorLengthNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorLengthNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorLengthNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorLengthNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorLengthNode.InnerSingleton;
}
// End ScriptStruct FDataflowVectorLengthNode

// Begin ScriptStruct FDataflowVectorSquaredLengthNode
static_assert(std::is_polymorphic<FDataflowVectorSquaredLengthNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorSquaredLengthNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorSquaredLengthNode;
class UScriptStruct* FDataflowVectorSquaredLengthNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorSquaredLengthNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorSquaredLengthNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorSquaredLengthNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorSquaredLengthNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorSquaredLengthNode>()
{
	return FDataflowVectorSquaredLengthNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Compute the Squared length of a vector : Length = |V||V| */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Compute the Squared length of a vector : Length = |V||V|" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Vector to get squared length from */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Vector to get squared length from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquaredLength_MetaData[] = {
		{ "Comment", "/** Length of the input vector : SquaredLength = |V||V| */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Length of the input vector : SquaredLength = |V||V|" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SquaredLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorSquaredLengthNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorSquaredLengthNode, V), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::NewProp_SquaredLength = { "SquaredLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorSquaredLengthNode, SquaredLength), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquaredLength_MetaData), NewProp_SquaredLength_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::NewProp_SquaredLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorSquaredLengthNode",
	Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::PropPointers),
	sizeof(FDataflowVectorSquaredLengthNode),
	alignof(FDataflowVectorSquaredLengthNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorSquaredLengthNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorSquaredLengthNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorSquaredLengthNode.InnerSingleton;
}
// End ScriptStruct FDataflowVectorSquaredLengthNode

// Begin ScriptStruct FDataflowVectorDistanceNode
static_assert(std::is_polymorphic<FDataflowVectorDistanceNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorDistanceNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorDistanceNode;
class UScriptStruct* FDataflowVectorDistanceNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorDistanceNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorDistanceNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorDistanceNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorDistanceNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorDistanceNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorDistanceNode>()
{
	return FDataflowVectorDistanceNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Compute the distance between two vectors : Distance = |B-A| */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Compute the distance between two vectors : Distance = |B-A|" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** A Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "A Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** B Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "B Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Comment", "/** Distance between A and B : Distance=|B-A| */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Distance between A and B : Distance=|B-A|" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorDistanceNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorDistanceNode, A), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorDistanceNode, B), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorDistanceNode, Distance), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) }; // 1453963107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorDistanceNode",
	Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::PropPointers),
	sizeof(FDataflowVectorDistanceNode),
	alignof(FDataflowVectorDistanceNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorDistanceNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorDistanceNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorDistanceNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorDistanceNode.InnerSingleton;
}
// End ScriptStruct FDataflowVectorDistanceNode

// Begin ScriptStruct FDataflowVectorCrossProductNode
static_assert(std::is_polymorphic<FDataflowVectorCrossProductNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorCrossProductNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorCrossProductNode;
class UScriptStruct* FDataflowVectorCrossProductNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorCrossProductNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorCrossProductNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorCrossProductNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorCrossProductNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorCrossProductNode>()
{
	return FDataflowVectorCrossProductNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Compute the cross product of two vectors :  CrossProduct = B^A \n* This node only operates in 3 dimensions, inputs will be converted to a 3D vector internally and result will be a vector with a zero W component\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Compute the cross product of two vectors :  CrossProduct = B^A\nThis node only operates in 3 dimensions, inputs will be converted to a 3D vector internally and result will be a vector with a zero W component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** A Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "A Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** B Vector operand */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "B Vector operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossProduct_MetaData[] = {
		{ "Comment", "/** Resulting cross product of A and B : CrossProduct=B^A */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Resulting cross product of A and B : CrossProduct=B^A" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrossProduct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorCrossProductNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorCrossProductNode, A), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorCrossProductNode, B), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::NewProp_CrossProduct = { "CrossProduct", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorCrossProductNode, CrossProduct), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossProduct_MetaData), NewProp_CrossProduct_MetaData) }; // 3064604349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::NewProp_CrossProduct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorCrossProductNode",
	Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::PropPointers),
	sizeof(FDataflowVectorCrossProductNode),
	alignof(FDataflowVectorCrossProductNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorCrossProductNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorCrossProductNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorCrossProductNode.InnerSingleton;
}
// End ScriptStruct FDataflowVectorCrossProductNode

// Begin ScriptStruct FDataflowVectorScaleNode
static_assert(std::is_polymorphic<FDataflowVectorScaleNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorScaleNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorScaleNode;
class UScriptStruct* FDataflowVectorScaleNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorScaleNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorScaleNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorScaleNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorScaleNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorScaleNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorScaleNode>()
{
	return FDataflowVectorScaleNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Scale a vector by a scalar : Scaled = (V * Scale) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Scale a vector by a scalar : Scaled = (V * Scale)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Vector to scale */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Vector to scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Scale factor */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Scale factor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scaled_MetaData[] = {
		{ "Comment", "/** Scaled vector : Scaled=(V * Scale) */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Scaled vector : Scaled=(V * Scale)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scaled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorScaleNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorScaleNode, V), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorScaleNode, Scale), Z_Construct_UScriptStruct_FDataflowNumericTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) }; // 1453963107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::NewProp_Scaled = { "Scaled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorScaleNode, Scaled), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scaled_MetaData), NewProp_Scaled_MetaData) }; // 3064604349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::NewProp_Scaled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorScaleNode",
	Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::PropPointers),
	sizeof(FDataflowVectorScaleNode),
	alignof(FDataflowVectorScaleNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorScaleNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorScaleNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorScaleNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorScaleNode.InnerSingleton;
}
// End ScriptStruct FDataflowVectorScaleNode

// Begin ScriptStruct FDataflowVectorNormalize
static_assert(std::is_polymorphic<FDataflowVectorNormalize>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowVectorNormalize cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorNormalize;
class UScriptStruct* FDataflowVectorNormalize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorNormalize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorNormalize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorNormalize, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorNormalize"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorNormalize.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorNormalize>()
{
	return FDataflowVectorNormalize::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Normalize a vector : Normalized = V/|V| */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Normalize a vector : Normalized = V/|V|" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Category", "Operands" },
		{ "Comment", "/** Vector to normalize */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Vector to normalize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normalized_MetaData[] = {
		{ "Comment", "/** Normalized vector : Normalized=V/|V| */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowVectorNodes.h" },
		{ "ToolTip", "Normalized vector : Normalized=V/|V|" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normalized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorNormalize>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorNormalize, V), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) }; // 3064604349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::NewProp_Normalized = { "Normalized", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorNormalize, Normalized), Z_Construct_UScriptStruct_FDataflowVectorTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normalized_MetaData), NewProp_Normalized_MetaData) }; // 3064604349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::NewProp_Normalized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowVectorNormalize",
	Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::PropPointers),
	sizeof(FDataflowVectorNormalize),
	alignof(FDataflowVectorNormalize),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorNormalize()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorNormalize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorNormalize.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorNormalize.InnerSingleton;
}
// End ScriptStruct FDataflowVectorNormalize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowVectorNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowVectorMakeVec2Node::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::NewStructOps, TEXT("DataflowVectorMakeVec2Node"), &Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec2Node, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorMakeVec2Node), 3924979742U) },
		{ FDataflowVectorMakeVec3Node::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewStructOps, TEXT("DataflowVectorMakeVec3Node"), &Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec3Node, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorMakeVec3Node), 1668568566U) },
		{ FDataflowVectorMakeVec4Node::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewStructOps, TEXT("DataflowVectorMakeVec4Node"), &Z_Registration_Info_UScriptStruct_DataflowVectorMakeVec4Node, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorMakeVec4Node), 234346638U) },
		{ FDataflowVectorBreakNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewStructOps, TEXT("DataflowVectorBreakNode"), &Z_Registration_Info_UScriptStruct_DataflowVectorBreakNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorBreakNode), 3490914181U) },
		{ FDataflowVectorAddNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::NewStructOps, TEXT("DataflowVectorAddNode"), &Z_Registration_Info_UScriptStruct_DataflowVectorAddNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorAddNode), 1458973440U) },
		{ FDataflowVectorSubtractNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::NewStructOps, TEXT("DataflowVectorSubtractNode"), &Z_Registration_Info_UScriptStruct_DataflowVectorSubtractNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorSubtractNode), 2588249381U) },
		{ FDataflowVectorDotProductNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::NewStructOps, TEXT("DataflowVectorDotProductNode"), &Z_Registration_Info_UScriptStruct_DataflowVectorDotProductNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorDotProductNode), 3681961536U) },
		{ FDataflowVectorLengthNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::NewStructOps, TEXT("DataflowVectorLengthNode"), &Z_Registration_Info_UScriptStruct_DataflowVectorLengthNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorLengthNode), 717730854U) },
		{ FDataflowVectorSquaredLengthNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::NewStructOps, TEXT("DataflowVectorSquaredLengthNode"), &Z_Registration_Info_UScriptStruct_DataflowVectorSquaredLengthNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorSquaredLengthNode), 1738378401U) },
		{ FDataflowVectorDistanceNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::NewStructOps, TEXT("DataflowVectorDistanceNode"), &Z_Registration_Info_UScriptStruct_DataflowVectorDistanceNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorDistanceNode), 3032715652U) },
		{ FDataflowVectorCrossProductNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::NewStructOps, TEXT("DataflowVectorCrossProductNode"), &Z_Registration_Info_UScriptStruct_DataflowVectorCrossProductNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorCrossProductNode), 987256061U) },
		{ FDataflowVectorScaleNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::NewStructOps, TEXT("DataflowVectorScaleNode"), &Z_Registration_Info_UScriptStruct_DataflowVectorScaleNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorScaleNode), 645465485U) },
		{ FDataflowVectorNormalize::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::NewStructOps, TEXT("DataflowVectorNormalize"), &Z_Registration_Info_UScriptStruct_DataflowVectorNormalize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorNormalize), 3974870640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowVectorNodes_h_3418980765(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowVectorNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowVectorNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
