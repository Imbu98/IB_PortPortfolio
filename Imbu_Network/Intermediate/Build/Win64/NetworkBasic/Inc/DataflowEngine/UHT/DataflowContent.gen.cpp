// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Engine/Public/Dataflow/DataflowContent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowContent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBaseContent();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBaseContent_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowContentOwner();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowContentOwner_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowContextObject();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowSkeletalContent();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowSkeletalContent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References

// Begin Interface UDataflowContentOwner
void UDataflowContentOwner::StaticRegisterNativesUDataflowContentOwner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowContentOwner);
UClass* Z_Construct_UClass_UDataflowContentOwner_NoRegister()
{
	return UDataflowContentOwner::StaticClass();
}
struct Z_Construct_UClass_UDataflowContentOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataflowContentOwner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowContentOwner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowContentOwner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowContentOwner_Statics::ClassParams = {
	&UDataflowContentOwner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowContentOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowContentOwner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowContentOwner()
{
	if (!Z_Registration_Info_UClass_UDataflowContentOwner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowContentOwner.OuterSingleton, Z_Construct_UClass_UDataflowContentOwner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowContentOwner.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowContentOwner>()
{
	return UDataflowContentOwner::StaticClass();
}
UDataflowContentOwner::UDataflowContentOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowContentOwner);
UDataflowContentOwner::~UDataflowContentOwner() {}
// End Interface UDataflowContentOwner

// Begin Class UDataflowBaseContent
void UDataflowBaseContent::StaticRegisterNativesUDataflowBaseContent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowBaseContent);
UClass* Z_Construct_UClass_UDataflowBaseContent_NoRegister()
{
	return UDataflowBaseContent::StaticClass();
}
struct Z_Construct_UClass_UDataflowBaseContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Dataflow content owning dataflow asset that that will be used to evaluate the graph\n */" },
		{ "IncludePath", "Dataflow/DataflowContent.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Dataflow content owning dataflow asset that that will be used to evaluate the graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataflowTerminal_MetaData[] = {
		{ "Comment", "/** Data flow terminal path for evaluation */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Data flow terminal path for evaluation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalAsset_MetaData[] = {
		{ "Comment", "/** Data flow terminal path for evaluation */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Data flow terminal path for evaluation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsConstructionDirty_MetaData[] = {
		{ "Comment", "/** Dirty flag to trigger rendering. Do we need that? since when accessing the member by non const ref we will not dirty it */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Dirty flag to trigger rendering. Do we need that? since when accessing the member by non const ref we will not dirty it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSimulationDirty_MetaData[] = {
		{ "Comment", "/** Dirty flag to reset the simulation if necessary */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Dirty flag to reset the simulation if necessary" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataflowTerminal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerminalAsset;
	static void NewProp_bIsConstructionDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConstructionDirty;
	static void NewProp_bIsSimulationDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSimulationDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowBaseContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_DataflowTerminal = { "DataflowTerminal", nullptr, (EPropertyFlags)0x00a0080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowBaseContent, DataflowTerminal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataflowTerminal_MetaData), NewProp_DataflowTerminal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_TerminalAsset = { "TerminalAsset", nullptr, (EPropertyFlags)0x01a4080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowBaseContent, TerminalAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalAsset_MetaData), NewProp_TerminalAsset_MetaData) };
void Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_bIsConstructionDirty_SetBit(void* Obj)
{
	((UDataflowBaseContent*)Obj)->bIsConstructionDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_bIsConstructionDirty = { "bIsConstructionDirty", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataflowBaseContent), &Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_bIsConstructionDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsConstructionDirty_MetaData), NewProp_bIsConstructionDirty_MetaData) };
void Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_bIsSimulationDirty_SetBit(void* Obj)
{
	((UDataflowBaseContent*)Obj)->bIsSimulationDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_bIsSimulationDirty = { "bIsSimulationDirty", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataflowBaseContent), &Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_bIsSimulationDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSimulationDirty_MetaData), NewProp_bIsSimulationDirty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflowBaseContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_DataflowTerminal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_TerminalAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_bIsConstructionDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_bIsSimulationDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBaseContent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataflowBaseContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataflowContextObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBaseContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowBaseContent_Statics::ClassParams = {
	&UDataflowBaseContent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataflowBaseContent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBaseContent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBaseContent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowBaseContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowBaseContent()
{
	if (!Z_Registration_Info_UClass_UDataflowBaseContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowBaseContent.OuterSingleton, Z_Construct_UClass_UDataflowBaseContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowBaseContent.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowBaseContent>()
{
	return UDataflowBaseContent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowBaseContent);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflowBaseContent)
// End Class UDataflowBaseContent

// Begin Class UDataflowSkeletalContent
void UDataflowSkeletalContent::StaticRegisterNativesUDataflowSkeletalContent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowSkeletalContent);
UClass* Z_Construct_UClass_UDataflowSkeletalContent_NoRegister()
{
	return UDataflowSkeletalContent::StaticClass();
}
struct Z_Construct_UClass_UDataflowSkeletalContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Dataflow content owning dataflow and skelmesh assets that that will be used to evaluate the graph\n */" },
		{ "IncludePath", "Dataflow/DataflowContent.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Dataflow content owning dataflow and skelmesh assets that that will be used to evaluate the graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Data flow skeletal mesh*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Data flow skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAsset_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Animation asset to be used to preview simulation */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Animation asset to be used to preview simulation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowSkeletalContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x01a4080000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowSkeletalContent, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x01a4080000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowSkeletalContent, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationAsset_MetaData), NewProp_AnimationAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflowSkeletalContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_AnimationAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSkeletalContent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataflowSkeletalContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataflowBaseContent,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSkeletalContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowSkeletalContent_Statics::ClassParams = {
	&UDataflowSkeletalContent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataflowSkeletalContent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSkeletalContent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSkeletalContent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowSkeletalContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowSkeletalContent()
{
	if (!Z_Registration_Info_UClass_UDataflowSkeletalContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowSkeletalContent.OuterSingleton, Z_Construct_UClass_UDataflowSkeletalContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowSkeletalContent.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowSkeletalContent>()
{
	return UDataflowSkeletalContent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowSkeletalContent);
// End Class UDataflowSkeletalContent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowContentOwner, UDataflowContentOwner::StaticClass, TEXT("UDataflowContentOwner"), &Z_Registration_Info_UClass_UDataflowContentOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowContentOwner), 875460216U) },
		{ Z_Construct_UClass_UDataflowBaseContent, UDataflowBaseContent::StaticClass, TEXT("UDataflowBaseContent"), &Z_Registration_Info_UClass_UDataflowBaseContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowBaseContent), 2662035841U) },
		{ Z_Construct_UClass_UDataflowSkeletalContent, UDataflowSkeletalContent::StaticClass, TEXT("UDataflowSkeletalContent"), &Z_Registration_Info_UClass_UDataflowSkeletalContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowSkeletalContent), 3426854622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_3507681474(TEXT("/Script/DataflowEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
