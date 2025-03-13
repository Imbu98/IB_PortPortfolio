// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeGraph() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface_NoRegister();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph_NoRegister();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernel_NoRegister();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphEdge();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References

// Begin ScriptStruct FComputeGraphEdge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeGraphEdge;
class UScriptStruct* FComputeGraphEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeGraphEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeGraphEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeGraphEdge, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeGraphEdge"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeGraphEdge.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeGraphEdge>()
{
	return FComputeGraphEdge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComputeGraphEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Description of a single edge in a UComputeGraph. \n * todo[CF]: Consider better storage for graph data structure that is easier to interrogate efficiently.\n */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Description of a single edge in a UComputeGraph.\ntodo[CF]: Consider better storage for graph data structure that is easier to interrogate efficiently." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelBindingIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceBindingIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKernelInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingFunctionNameOverride_MetaData[] = {
		{ "Comment", "// Optional name to use for the proxy generation function, in case the kernel expects\n// something other than the interface's bind name. Leave empty to go with the default. \n" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Optional name to use for the proxy generation function, in case the kernel expects\nsomething other than the interface's bind name. Leave empty to go with the default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingFunctionNamespace_MetaData[] = {
		{ "Comment", "// Optional namespace to wrap the binding function in. A blank mean global namespace.\n" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Optional namespace to wrap the binding function in. A blank mean global namespace." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_KernelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KernelBindingIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataInterfaceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataInterfaceBindingIndex;
	static void NewProp_bKernelInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKernelInput;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BindingFunctionNameOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BindingFunctionNamespace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeGraphEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelIndex = { "KernelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeGraphEdge, KernelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelIndex_MetaData), NewProp_KernelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelBindingIndex = { "KernelBindingIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeGraphEdge, KernelBindingIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelBindingIndex_MetaData), NewProp_KernelBindingIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceIndex = { "DataInterfaceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeGraphEdge, DataInterfaceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfaceIndex_MetaData), NewProp_DataInterfaceIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceBindingIndex = { "DataInterfaceBindingIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeGraphEdge, DataInterfaceBindingIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfaceBindingIndex_MetaData), NewProp_DataInterfaceBindingIndex_MetaData) };
void Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput_SetBit(void* Obj)
{
	((FComputeGraphEdge*)Obj)->bKernelInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput = { "bKernelInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComputeGraphEdge), &Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKernelInput_MetaData), NewProp_bKernelInput_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNameOverride = { "BindingFunctionNameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeGraphEdge, BindingFunctionNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingFunctionNameOverride_MetaData), NewProp_BindingFunctionNameOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNamespace = { "BindingFunctionNamespace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeGraphEdge, BindingFunctionNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingFunctionNamespace_MetaData), NewProp_BindingFunctionNamespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelBindingIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceBindingIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNameOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNamespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ComputeGraphEdge",
	Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::PropPointers),
	sizeof(FComputeGraphEdge),
	alignof(FComputeGraphEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphEdge()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeGraphEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeGraphEdge.InnerSingleton, Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComputeGraphEdge.InnerSingleton;
}
// End ScriptStruct FComputeGraphEdge

// Begin Class UComputeGraph
void UComputeGraph::StaticRegisterNativesUComputeGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeGraph);
UClass* Z_Construct_UClass_UComputeGraph_NoRegister()
{
	return UComputeGraph::StaticClass();
}
struct Z_Construct_UClass_UComputeGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Class representing a Compute Graph.\n * This holds the basic topology of the graph and is responsible for linking Kernels with Data Interfaces and compiling the resulting shader code.\n * Multiple Compute Graph asset types can derive from this to specialize the graph creation process. \n * For example the Animation Deformer system provides a UI for creating UComputeGraph assets.\n */" },
		{ "IncludePath", "ComputeFramework/ComputeGraph.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class representing a Compute Graph.\nThis holds the basic topology of the graph and is responsible for linking Kernels with Data Interfaces and compiling the resulting shader code.\nMultiple Compute Graph asset types can derive from this to specialize the graph creation process.\nFor example the Animation Deformer system provides a UI for creating UComputeGraph assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelInvocations_MetaData[] = {
		{ "Comment", "/** Kernels in the graph. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Kernels in the graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaces_MetaData[] = {
		{ "Comment", "/** Data interfaces in the graph. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Data interfaces in the graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEdges_MetaData[] = {
		{ "Comment", "/** Edges in the graph between kernels and data interfaces. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Edges in the graph between kernels and data interfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[] = {
		{ "Comment", "/** Registered binding object class types. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Registered binding object class types." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceToBinding_MetaData[] = {
		{ "Comment", "/** Mapping of DataInterfaces array index to Bindings index. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Mapping of DataInterfaces array index to Bindings index." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KernelInvocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KernelInvocations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataInterfaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataInterfaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphEdges;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Bindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataInterfaceToBinding_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataInterfaceToBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations_Inner = { "KernelInvocations", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComputeKernel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations = { "KernelInvocations", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeGraph, KernelInvocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelInvocations_MetaData), NewProp_KernelInvocations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces_Inner = { "DataInterfaces", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComputeDataInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces = { "DataInterfaces", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeGraph, DataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfaces_MetaData), NewProp_DataInterfaces_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges_Inner = { "GraphEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComputeGraphEdge, METADATA_PARAMS(0, nullptr) }; // 3835223275
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges = { "GraphEdges", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeGraph, GraphEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEdges_MetaData), NewProp_GraphEdges_MetaData) }; // 3835223275
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeGraph, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bindings_MetaData), NewProp_Bindings_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding_Inner = { "DataInterfaceToBinding", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding = { "DataInterfaceToBinding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeGraph, DataInterfaceToBinding), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfaceToBinding_MetaData), NewProp_DataInterfaceToBinding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComputeGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeGraph_Statics::ClassParams = {
	&UComputeGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UComputeGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UComputeGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComputeGraph()
{
	if (!Z_Registration_Info_UClass_UComputeGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeGraph.OuterSingleton, Z_Construct_UClass_UComputeGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComputeGraph.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeGraph>()
{
	return UComputeGraph::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UComputeGraph)
// End Class UComputeGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FComputeGraphEdge::StaticStruct, Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewStructOps, TEXT("ComputeGraphEdge"), &Z_Registration_Info_UScriptStruct_ComputeGraphEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeGraphEdge), 3835223275U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComputeGraph, UComputeGraph::StaticClass, TEXT("UComputeGraph"), &Z_Registration_Info_UClass_UComputeGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeGraph), 893594256U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_3398182893(TEXT("/Script/ComputeFramework"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
