// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionSkeletalMeshToCollectionNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionSkeletalMeshToCollectionNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FSkeletalMeshToCollectionDataflowNode
static_assert(std::is_polymorphic<FSkeletalMeshToCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSkeletalMeshToCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshToCollectionDataflowNode;
class UScriptStruct* FSkeletalMeshToCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshToCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshToCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SkeletalMeshToCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshToCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSkeletalMeshToCollectionDataflowNode>()
{
	return FSkeletalMeshToCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSkeletalMeshToCollectionNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSkeletalMeshToCollectionNode.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSkeletalMeshToCollectionNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportTransformOnly_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DisplayName", "Transforms Only" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSkeletalMeshToCollectionNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static void NewProp_bImportTransformOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportTransformOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshToCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshToCollectionDataflowNode, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshToCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
void Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::NewProp_bImportTransformOnly_SetBit(void* Obj)
{
	((FSkeletalMeshToCollectionDataflowNode*)Obj)->bImportTransformOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::NewProp_bImportTransformOnly = { "bImportTransformOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkeletalMeshToCollectionDataflowNode), &Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::NewProp_bImportTransformOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportTransformOnly_MetaData), NewProp_bImportTransformOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::NewProp_bImportTransformOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SkeletalMeshToCollectionDataflowNode",
	Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::PropPointers),
	sizeof(FSkeletalMeshToCollectionDataflowNode),
	alignof(FSkeletalMeshToCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshToCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshToCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshToCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshToCollectionDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSkeletalMeshToCollectionNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkeletalMeshToCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode_Statics::NewStructOps, TEXT("SkeletalMeshToCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_SkeletalMeshToCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshToCollectionDataflowNode), 3679541242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSkeletalMeshToCollectionNode_h_173549090(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSkeletalMeshToCollectionNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSkeletalMeshToCollectionNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
