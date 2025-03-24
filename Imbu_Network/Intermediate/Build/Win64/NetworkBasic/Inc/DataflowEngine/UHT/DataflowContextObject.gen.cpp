// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Engine/Public/Dataflow/DataflowContextObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowContextObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowContextObject();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowContextObject_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowEdNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References

// Begin Class UDataflowContextObject
void UDataflowContextObject::StaticRegisterNativesUDataflowContextObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowContextObject);
UClass* Z_Construct_UClass_UDataflowContextObject_NoRegister()
{
	return UDataflowContextObject::StaticClass();
}
struct Z_Construct_UClass_UDataflowContextObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Context object used for selection/rendering \n */" },
		{ "IncludePath", "Dataflow/DataflowContextObject.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextObject.h" },
		{ "ToolTip", "Context object used for selection/rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNode_MetaData[] = {
		{ "Comment", "/** Node that is selected in the graph */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextObject.h" },
		{ "ToolTip", "Node that is selected in the graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataflowGraph_MetaData[] = {
		{ "Comment", "/** Dataflow graph for evaluation */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextObject.h" },
		{ "ToolTip", "Dataflow graph for evaluation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataflowGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowContextObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflowContextObject_Statics::NewProp_SelectedNode = { "SelectedNode", nullptr, (EPropertyFlags)0x01a4080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowContextObject, SelectedNode), Z_Construct_UClass_UDataflowEdNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedNode_MetaData), NewProp_SelectedNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflowContextObject_Statics::NewProp_DataflowGraph = { "DataflowGraph", nullptr, (EPropertyFlags)0x01a4080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowContextObject, DataflowGraph), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataflowGraph_MetaData), NewProp_DataflowGraph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflowContextObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowContextObject_Statics::NewProp_SelectedNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowContextObject_Statics::NewProp_DataflowGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowContextObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataflowContextObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowContextObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowContextObject_Statics::ClassParams = {
	&UDataflowContextObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataflowContextObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowContextObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowContextObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowContextObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowContextObject()
{
	if (!Z_Registration_Info_UClass_UDataflowContextObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowContextObject.OuterSingleton, Z_Construct_UClass_UDataflowContextObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowContextObject.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowContextObject>()
{
	return UDataflowContextObject::StaticClass();
}
UDataflowContextObject::UDataflowContextObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowContextObject);
UDataflowContextObject::~UDataflowContextObject() {}
// End Class UDataflowContextObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowContextObject, UDataflowContextObject::StaticClass, TEXT("UDataflowContextObject"), &Z_Registration_Info_UClass_UDataflowContextObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowContextObject), 1738935557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_1445516507(TEXT("/Script/DataflowEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
