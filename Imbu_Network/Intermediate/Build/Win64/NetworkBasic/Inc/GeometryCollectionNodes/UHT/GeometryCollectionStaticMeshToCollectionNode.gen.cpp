// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionStaticMeshToCollectionNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FStaticMeshToCollectionDataflowNode
static_assert(std::is_polymorphic<FStaticMeshToCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FStaticMeshToCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode;
class UScriptStruct* FStaticMeshToCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("StaticMeshToCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FStaticMeshToCollectionDataflowNode>()
{
	return FStaticMeshToCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Create a geometry collection from a UStaticMesh\n */" },
		{ "DataflowContext", "GeometryCollection" },
		{ "DataflowGeometryCollection", "" },
		{ "DataflowTerminal", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h" },
		{ "ToolTip", "Create a geometry collection from a UStaticMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/** Asset input */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "StaticMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h" },
		{ "ToolTip", "Asset input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshTransform_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/** Transform to apply to the mesh before converting it to a collection */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h" },
		{ "ToolTip", "Transform to apply to the mesh before converting it to a collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetInternalFromMaterialIndex_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/** Set the internal faces from material index */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h" },
		{ "ToolTip", "Set the internal faces from material index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitComponents_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/** Split components */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h" },
		{ "ToolTip", "Split components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Geometry collection newly created */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h" },
		{ "ToolTip", "Geometry collection newly created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array to use for this asset */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h" },
		{ "ToolTip", "Materials array to use for this asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[] = {
		{ "Comment", "/** Material instances array from the static mesh */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "MaterialInstances" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h" },
		{ "ToolTip", "Material instances array from the static mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshes_MetaData[] = {
		{ "Comment", "/** Array of instanced meshes*/" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "InstancedMeshes" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionStaticMeshToCollectionNode.h" },
		{ "ToolTip", "Array of instanced meshes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshTransform;
	static void NewProp_bSetInternalFromMaterialIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetInternalFromMaterialIndex;
	static void NewProp_bSplitComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshToCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_MeshTransform = { "MeshTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, MeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshTransform_MetaData), NewProp_MeshTransform_MetaData) };
void Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSetInternalFromMaterialIndex_SetBit(void* Obj)
{
	((FStaticMeshToCollectionDataflowNode*)Obj)->bSetInternalFromMaterialIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSetInternalFromMaterialIndex = { "bSetInternalFromMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticMeshToCollectionDataflowNode), &Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSetInternalFromMaterialIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetInternalFromMaterialIndex_MetaData), NewProp_bSetInternalFromMaterialIndex_MetaData) };
void Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSplitComponents_SetBit(void* Obj)
{
	((FStaticMeshToCollectionDataflowNode*)Obj)->bSplitComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSplitComponents = { "bSplitComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticMeshToCollectionDataflowNode), &Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSplitComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitComponents_MetaData), NewProp_bSplitComponents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstances_MetaData), NewProp_MaterialInstances_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_InstancedMeshes_Inner = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, METADATA_PARAMS(0, nullptr) }; // 472253674
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_InstancedMeshes = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, InstancedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshes_MetaData), NewProp_InstancedMeshes_MetaData) }; // 472253674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_MeshTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSetInternalFromMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSplitComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_MaterialInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_MaterialInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_InstancedMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_InstancedMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"StaticMeshToCollectionDataflowNode",
	Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::PropPointers),
	sizeof(FStaticMeshToCollectionDataflowNode),
	alignof(FStaticMeshToCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FStaticMeshToCollectionDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionStaticMeshToCollectionNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStaticMeshToCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewStructOps, TEXT("StaticMeshToCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshToCollectionDataflowNode), 3907086092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionStaticMeshToCollectionNode_h_465461842(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionStaticMeshToCollectionNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionStaticMeshToCollectionNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
