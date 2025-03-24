// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangeGenericScenesPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericScenesPipeline() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline_NoRegister();
INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin Enum EInterchangeSceneHierarchyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType;
static UEnum* EInterchangeSceneHierarchyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeSceneHierarchyType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeSceneHierarchyType>()
{
	return EInterchangeSceneHierarchyType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CreateLevelActors.DisplayName", "Create level actors" },
		{ "CreateLevelActors.Name", "EInterchangeSceneHierarchyType::CreateLevelActors" },
		{ "CreateLevelActors.ToolTip", "Create actors in the current editor world for all scene nodes in the source hierarchy." },
		{ "CreateLevelInstanceActor.DisplayName", "Create a level instance actor" },
		{ "CreateLevelInstanceActor.Name", "EInterchangeSceneHierarchyType::CreateLevelInstanceActor" },
		{ "CreateLevelInstanceActor.ToolTip", "Create a world containing all scene nodes in the source hierarchy and reference the world has a level instance actor in the current editor world." },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeSceneHierarchyType::CreateLevelActors", (int64)EInterchangeSceneHierarchyType::CreateLevelActors },
		{ "EInterchangeSceneHierarchyType::CreateLevelInstanceActor", (int64)EInterchangeSceneHierarchyType::CreateLevelInstanceActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	"EInterchangeSceneHierarchyType",
	"EInterchangeSceneHierarchyType",
	Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.InnerSingleton;
}
// End Enum EInterchangeSceneHierarchyType

// Begin Class UInterchangeGenericLevelPipeline
void UInterchangeGenericLevelPipeline::StaticRegisterNativesUInterchangeGenericLevelPipeline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericLevelPipeline);
UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline_NoRegister()
{
	return UInterchangeGenericLevelPipeline::StaticClass();
}
struct Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericScenesPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PipelineDisplayName_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/** The name of the pipeline that will be display in the import dialog. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "PipelineInternalEditionData", "True" },
		{ "StandAlonePipelineProperty", "True" },
		{ "ToolTip", "The name of the pipeline that will be display in the import dialog." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportPropertyStrategy_MetaData[] = {
		{ "AdjustPipelineAndRefreshDetailOnChange", "True" },
		{ "Category", "Scene" },
		{ "Comment", "/* Set the reimport strategy when reimporting into the level. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Actors properties" },
		{ "ToolTip", "Set the reimport strategy when reimporting into the level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneHierarchyType_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/* Choose how you want to import the hierarchy. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "ToolTip", "Choose how you want to import the hierarchy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteMissingActors_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/* If enabled, deletes actors that were not part of the translation when reimporting into a level. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Reimport Actors" },
		{ "ToolTip", "If enabled, deletes actors that were not part of the translation when reimporting into a level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceReimportDeletedActors_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/* If enabled, respawns actors that were deleted in the editor prior to a reimport. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Reimport Actors" },
		{ "ToolTip", "If enabled, respawns actors that were deleted in the editor prior to a reimport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceReimportDeletedAssets_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/* If enabled, recreates assets that were deleted in the editor prior to reimporting into a level. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Reimport Assets" },
		{ "ToolTip", "If enabled, recreates assets that were deleted in the editor prior to reimporting into a level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteMissingAssets_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/* If enabled, deletes assets that were not part of the translation when reimporting into a level. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Reimport Assets" },
		{ "ToolTip", "If enabled, deletes assets that were not part of the translation when reimporting into a level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** Disable this option to not convert Standard(Perspective) to Physical Cameras*/" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "ToolTip", "Disable this option to not convert Standard(Perspective) to Physical Cameras" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PipelineDisplayName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReimportPropertyStrategy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReimportPropertyStrategy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneHierarchyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneHierarchyType;
	static void NewProp_bDeleteMissingActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteMissingActors;
	static void NewProp_bForceReimportDeletedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReimportDeletedActors;
	static void NewProp_bForceReimportDeletedAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReimportDeletedAssets;
	static void NewProp_bDeleteMissingAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteMissingAssets;
	static void NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericLevelPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_PipelineDisplayName = { "PipelineDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericLevelPipeline, PipelineDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PipelineDisplayName_MetaData), NewProp_PipelineDisplayName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy = { "ReimportPropertyStrategy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericLevelPipeline, ReimportPropertyStrategy), Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportPropertyStrategy_MetaData), NewProp_ReimportPropertyStrategy_MetaData) }; // 2417377604
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_SceneHierarchyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_SceneHierarchyType = { "SceneHierarchyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericLevelPipeline, SceneHierarchyType), Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneHierarchyType_MetaData), NewProp_SceneHierarchyType_MetaData) }; // 3910807887
void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors_SetBit(void* Obj)
{
	((UInterchangeGenericLevelPipeline*)Obj)->bDeleteMissingActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors = { "bDeleteMissingActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeleteMissingActors_MetaData), NewProp_bDeleteMissingActors_MetaData) };
void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors_SetBit(void* Obj)
{
	((UInterchangeGenericLevelPipeline*)Obj)->bForceReimportDeletedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors = { "bForceReimportDeletedActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceReimportDeletedActors_MetaData), NewProp_bForceReimportDeletedActors_MetaData) };
void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets_SetBit(void* Obj)
{
	((UInterchangeGenericLevelPipeline*)Obj)->bForceReimportDeletedAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets = { "bForceReimportDeletedAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceReimportDeletedAssets_MetaData), NewProp_bForceReimportDeletedAssets_MetaData) };
void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets_SetBit(void* Obj)
{
	((UInterchangeGenericLevelPipeline*)Obj)->bDeleteMissingAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets = { "bDeleteMissingAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeleteMissingAssets_MetaData), NewProp_bDeleteMissingAssets_MetaData) };
void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_SetBit(void* Obj)
{
	((UInterchangeGenericLevelPipeline*)Obj)->bUsePhysicalInsteadOfStandardPerspectiveCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera = { "bUsePhysicalInsteadOfStandardPerspectiveCamera", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_MetaData), NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_PipelineDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_SceneHierarchyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_SceneHierarchyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::ClassParams = {
	&UInterchangeGenericLevelPipeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline()
{
	if (!Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericLevelPipeline>()
{
	return UInterchangeGenericLevelPipeline::StaticClass();
}
UInterchangeGenericLevelPipeline::UInterchangeGenericLevelPipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericLevelPipeline);
UInterchangeGenericLevelPipeline::~UInterchangeGenericLevelPipeline() {}
// End Class UInterchangeGenericLevelPipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeSceneHierarchyType_StaticEnum, TEXT("EInterchangeSceneHierarchyType"), &Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3910807887U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericLevelPipeline, UInterchangeGenericLevelPipeline::StaticClass, TEXT("UInterchangeGenericLevelPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericLevelPipeline), 326297767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_608244408(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
