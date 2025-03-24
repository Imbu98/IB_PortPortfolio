// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowNodes/Public/Dataflow/DataflowCollectionAttributeKeyNodes.h"
#include "DataflowEnginePlugin/Public/Dataflow/DataflowConnectionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowCollectionAttributeKeyNodes() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionAttributeKey();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode();
UPackage* Z_Construct_UPackage__Script_DataflowNodes();
// End Cross Module References

// Begin ScriptStruct FMakeAttributeKeyDataflowNode
static_assert(std::is_polymorphic<FMakeAttributeKeyDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeAttributeKeyDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeAttributeKeyDataflowNode;
class UScriptStruct* FMakeAttributeKeyDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeAttributeKeyDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeAttributeKeyDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("MakeAttributeKeyDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeAttributeKeyDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FMakeAttributeKeyDataflowNode>()
{
	return FMakeAttributeKeyDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Dataflow", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAttributeKeyNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupIn_MetaData[] = {
		{ "Category", "Collection Key" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAttributeKeyNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIn_MetaData[] = {
		{ "Category", "Collection Key" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Attribute" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAttributeKeyNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeKeyOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "AttributeKey" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAttributeKeyNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupIn;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeKeyOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeAttributeKeyDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::NewProp_GroupIn = { "GroupIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeAttributeKeyDataflowNode, GroupIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupIn_MetaData), NewProp_GroupIn_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::NewProp_AttributeIn = { "AttributeIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeAttributeKeyDataflowNode, AttributeIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeIn_MetaData), NewProp_AttributeIn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::NewProp_AttributeKeyOut = { "AttributeKeyOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeAttributeKeyDataflowNode, AttributeKeyOut), Z_Construct_UScriptStruct_FCollectionAttributeKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeKeyOut_MetaData), NewProp_AttributeKeyOut_MetaData) }; // 2309444878
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::NewProp_GroupIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::NewProp_AttributeIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::NewProp_AttributeKeyOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeAttributeKeyDataflowNode",
	Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::PropPointers),
	sizeof(FMakeAttributeKeyDataflowNode),
	alignof(FMakeAttributeKeyDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeAttributeKeyDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeAttributeKeyDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeAttributeKeyDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeAttributeKeyDataflowNode

// Begin ScriptStruct FBreakAttributeKeyDataflowNode
static_assert(std::is_polymorphic<FBreakAttributeKeyDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FBreakAttributeKeyDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BreakAttributeKeyDataflowNode;
class UScriptStruct* FBreakAttributeKeyDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BreakAttributeKeyDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BreakAttributeKeyDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("BreakAttributeKeyDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_BreakAttributeKeyDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FBreakAttributeKeyDataflowNode>()
{
	return FBreakAttributeKeyDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAttributeKeyNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeKeyIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "AttributeKey" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAttributeKeyNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeOut_MetaData[] = {
		{ "Category", "Attribute Key" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Attribute" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAttributeKeyNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupOut_MetaData[] = {
		{ "Category", "Attribute Key" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAttributeKeyNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeKeyIn;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeOut;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBreakAttributeKeyDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::NewProp_AttributeKeyIn = { "AttributeKeyIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakAttributeKeyDataflowNode, AttributeKeyIn), Z_Construct_UScriptStruct_FCollectionAttributeKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeKeyIn_MetaData), NewProp_AttributeKeyIn_MetaData) }; // 2309444878
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::NewProp_AttributeOut = { "AttributeOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakAttributeKeyDataflowNode, AttributeOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeOut_MetaData), NewProp_AttributeOut_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::NewProp_GroupOut = { "GroupOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakAttributeKeyDataflowNode, GroupOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupOut_MetaData), NewProp_GroupOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::NewProp_AttributeKeyIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::NewProp_AttributeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::NewProp_GroupOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"BreakAttributeKeyDataflowNode",
	Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::PropPointers),
	sizeof(FBreakAttributeKeyDataflowNode),
	alignof(FBreakAttributeKeyDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_BreakAttributeKeyDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BreakAttributeKeyDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BreakAttributeKeyDataflowNode.InnerSingleton;
}
// End ScriptStruct FBreakAttributeKeyDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAttributeKeyNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMakeAttributeKeyDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode_Statics::NewStructOps, TEXT("MakeAttributeKeyDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeAttributeKeyDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeAttributeKeyDataflowNode), 3280636923U) },
		{ FBreakAttributeKeyDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode_Statics::NewStructOps, TEXT("BreakAttributeKeyDataflowNode"), &Z_Registration_Info_UScriptStruct_BreakAttributeKeyDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBreakAttributeKeyDataflowNode), 809308026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAttributeKeyNodes_h_3132371553(TEXT("/Script/DataflowNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAttributeKeyNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAttributeKeyNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
