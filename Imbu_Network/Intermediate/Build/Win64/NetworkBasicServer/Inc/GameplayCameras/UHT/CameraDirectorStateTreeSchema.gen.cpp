// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Directors/CameraDirectorStateTreeSchema.h"
#include "StateTreeModule/Public/StateTreeExecutionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirectorStateTreeSchema() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraDirectorStateTreeSchema();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraDirectorStateTreeSchema_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyAsset_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraDirectorStateTreeSchema
void UCameraDirectorStateTreeSchema::StaticRegisterNativesUCameraDirectorStateTreeSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraDirectorStateTreeSchema);
UClass* Z_Construct_UClass_UCameraDirectorStateTreeSchema_NoRegister()
{
	return UCameraDirectorStateTreeSchema::StaticClass();
}
struct Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The schema of the StateTree for a StateTree camera director.\n */" },
		{ "DisplayName", "Gameplay Camera Director" },
		{ "IncludePath", "Directors/CameraDirectorStateTreeSchema.h" },
		{ "ModuleRelativePath", "Public/Directors/CameraDirectorStateTreeSchema.h" },
		{ "ToolTip", "The schema of the StateTree for a StateTree camera director." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextDataDescs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Directors/CameraDirectorStateTreeSchema.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextDataDescs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextDataDescs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraDirectorStateTreeSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::NewProp_ContextDataDescs_Inner = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, METADATA_PARAMS(0, nullptr) }; // 1953451301
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::NewProp_ContextDataDescs = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraDirectorStateTreeSchema, ContextDataDescs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextDataDescs_MetaData), NewProp_ContextDataDescs_MetaData) }; // 1953451301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::NewProp_ContextDataDescs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::NewProp_ContextDataDescs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::ClassParams = {
	&UCameraDirectorStateTreeSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraDirectorStateTreeSchema()
{
	if (!Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.OuterSingleton, Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraDirectorStateTreeSchema>()
{
	return UCameraDirectorStateTreeSchema::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraDirectorStateTreeSchema);
UCameraDirectorStateTreeSchema::~UCameraDirectorStateTreeSchema() {}
// End Class UCameraDirectorStateTreeSchema

// Begin ScriptStruct FCameraDirectorStateTreeEvaluationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraDirectorStateTreeEvaluationData;
class UScriptStruct* FCameraDirectorStateTreeEvaluationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraDirectorStateTreeEvaluationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraDirectorStateTreeEvaluationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraDirectorStateTreeEvaluationData"));
	}
	return Z_Registration_Info_UScriptStruct_CameraDirectorStateTreeEvaluationData.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraDirectorStateTreeEvaluationData>()
{
	return FCameraDirectorStateTreeEvaluationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The evaluation data for the StateTree camera director. */" },
		{ "ModuleRelativePath", "Public/Directors/CameraDirectorStateTreeSchema.h" },
		{ "ToolTip", "The evaluation data for the StateTree camera director." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCameraRigs_MetaData[] = {
		{ "Comment", "/** Camera rigs activated during a StateTree's execution frame. */" },
		{ "ModuleRelativePath", "Public/Directors/CameraDirectorStateTreeSchema.h" },
		{ "ToolTip", "Camera rigs activated during a StateTree's execution frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCameraRigProxies_MetaData[] = {
		{ "Comment", "/** Camera rig proxies activated during a StateTree's execution frame. */" },
		{ "ModuleRelativePath", "Public/Directors/CameraDirectorStateTreeSchema.h" },
		{ "ToolTip", "Camera rig proxies activated during a StateTree's execution frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCameraRigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveCameraRigs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCameraRigProxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveCameraRigProxies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraDirectorStateTreeEvaluationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewProp_ActiveCameraRigs_Inner = { "ActiveCameraRigs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewProp_ActiveCameraRigs = { "ActiveCameraRigs", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDirectorStateTreeEvaluationData, ActiveCameraRigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCameraRigs_MetaData), NewProp_ActiveCameraRigs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewProp_ActiveCameraRigProxies_Inner = { "ActiveCameraRigProxies", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraRigProxyAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewProp_ActiveCameraRigProxies = { "ActiveCameraRigProxies", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDirectorStateTreeEvaluationData, ActiveCameraRigProxies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCameraRigProxies_MetaData), NewProp_ActiveCameraRigProxies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewProp_ActiveCameraRigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewProp_ActiveCameraRigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewProp_ActiveCameraRigProxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewProp_ActiveCameraRigProxies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraDirectorStateTreeEvaluationData",
	Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::PropPointers),
	sizeof(FCameraDirectorStateTreeEvaluationData),
	alignof(FCameraDirectorStateTreeEvaluationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData()
{
	if (!Z_Registration_Info_UScriptStruct_CameraDirectorStateTreeEvaluationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraDirectorStateTreeEvaluationData.InnerSingleton, Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraDirectorStateTreeEvaluationData.InnerSingleton;
}
// End ScriptStruct FCameraDirectorStateTreeEvaluationData

// Begin ScriptStruct FGameplayCamerasStateTreeTask
static_assert(std::is_polymorphic<FGameplayCamerasStateTreeTask>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FGameplayCamerasStateTreeTask cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeTask;
class UScriptStruct* FGameplayCamerasStateTreeTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("GameplayCamerasStateTreeTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeTask.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FGameplayCamerasStateTreeTask>()
{
	return FGameplayCamerasStateTreeTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base classs for camera director StateTree tasks. */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/Directors/CameraDirectorStateTreeSchema.h" },
		{ "ToolTip", "Base classs for camera director StateTree tasks." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCamerasStateTreeTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FStateTreeTaskBase,
	&NewStructOps,
	"GameplayCamerasStateTreeTask",
	nullptr,
	0,
	sizeof(FGameplayCamerasStateTreeTask),
	alignof(FGameplayCamerasStateTreeTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeTask.InnerSingleton;
}
// End ScriptStruct FGameplayCamerasStateTreeTask

// Begin ScriptStruct FGameplayCamerasStateTreeCondition
static_assert(std::is_polymorphic<FGameplayCamerasStateTreeCondition>() == std::is_polymorphic<FStateTreeConditionBase>(), "USTRUCT FGameplayCamerasStateTreeCondition cannot be polymorphic unless super FStateTreeConditionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeCondition;
class UScriptStruct* FGameplayCamerasStateTreeCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("GameplayCamerasStateTreeCondition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeCondition.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FGameplayCamerasStateTreeCondition>()
{
	return FGameplayCamerasStateTreeCondition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base classs for camera director StateTree conditions. */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/Directors/CameraDirectorStateTreeSchema.h" },
		{ "ToolTip", "Base classs for camera director StateTree conditions." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCamerasStateTreeCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FStateTreeConditionBase,
	&NewStructOps,
	"GameplayCamerasStateTreeCondition",
	nullptr,
	0,
	sizeof(FGameplayCamerasStateTreeCondition),
	alignof(FGameplayCamerasStateTreeCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeCondition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeCondition.InnerSingleton;
}
// End ScriptStruct FGameplayCamerasStateTreeCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraDirectorStateTreeEvaluationData::StaticStruct, Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewStructOps, TEXT("CameraDirectorStateTreeEvaluationData"), &Z_Registration_Info_UScriptStruct_CameraDirectorStateTreeEvaluationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraDirectorStateTreeEvaluationData), 877565608U) },
		{ FGameplayCamerasStateTreeTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics::NewStructOps, TEXT("GameplayCamerasStateTreeTask"), &Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCamerasStateTreeTask), 1711838173U) },
		{ FGameplayCamerasStateTreeCondition::StaticStruct, Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics::NewStructOps, TEXT("GameplayCamerasStateTreeCondition"), &Z_Registration_Info_UScriptStruct_GameplayCamerasStateTreeCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCamerasStateTreeCondition), 589642206U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraDirectorStateTreeSchema, UCameraDirectorStateTreeSchema::StaticClass, TEXT("UCameraDirectorStateTreeSchema"), &Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraDirectorStateTreeSchema), 3648150479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_1903158332(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
