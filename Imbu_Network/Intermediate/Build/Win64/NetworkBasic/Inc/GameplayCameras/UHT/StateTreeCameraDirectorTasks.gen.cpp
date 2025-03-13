// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Directors/StateTreeCameraDirectorTasks.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeCameraDirectorTasks() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyAsset_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FGameplayCamerasActivateCameraRigTaskInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTaskInstanceData;
class UScriptStruct* FGameplayCamerasActivateCameraRigTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("GameplayCamerasActivateCameraRigTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTaskInstanceData.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FGameplayCamerasActivateCameraRigTaskInstanceData>()
{
	return FGameplayCamerasActivateCameraRigTaskInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Instance data for the \"Activate Camera Rig\" task. */" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirectorTasks.h" },
		{ "ToolTip", "Instance data for the \"Activate Camera Rig\" task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRig_MetaData[] = {
		{ "Category", "Cameras" },
		{ "Comment", "/** The camera rig to activate. */" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirectorTasks.h" },
		{ "ToolTip", "The camera rig to activate." },
		{ "UseCameraDirectorRigPicker", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCamerasActivateCameraRigTaskInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCamerasActivateCameraRigTaskInstanceData, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRig_MetaData), NewProp_CameraRig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::NewProp_CameraRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"GameplayCamerasActivateCameraRigTaskInstanceData",
	Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::PropPointers),
	sizeof(FGameplayCamerasActivateCameraRigTaskInstanceData),
	alignof(FGameplayCamerasActivateCameraRigTaskInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTaskInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTaskInstanceData.InnerSingleton;
}
// End ScriptStruct FGameplayCamerasActivateCameraRigTaskInstanceData

// Begin ScriptStruct FGameplayCamerasActivateCameraRigTask
static_assert(std::is_polymorphic<FGameplayCamerasActivateCameraRigTask>() == std::is_polymorphic<FGameplayCamerasStateTreeTask>(), "USTRUCT FGameplayCamerasActivateCameraRigTask cannot be polymorphic unless super FGameplayCamerasStateTreeTask is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTask;
class UScriptStruct* FGameplayCamerasActivateCameraRigTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("GameplayCamerasActivateCameraRigTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTask.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FGameplayCamerasActivateCameraRigTask>()
{
	return FGameplayCamerasActivateCameraRigTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Cameras" },
		{ "Comment", "/**\n * A task that activates a given camera rig inside a StateTreeCameraDirector.\n */" },
		{ "DisplayName", "Activate Camera Rig" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirectorTasks.h" },
		{ "ToolTip", "A task that activates a given camera rig inside a StateTreeCameraDirector." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunOnce_MetaData[] = {
		{ "Category", "State Tree" },
		{ "Comment", "/** If true, the task will complete immediately. If false, the task will run until a transition triggers. */" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirectorTasks.h" },
		{ "ToolTip", "If true, the task will complete immediately. If false, the task will run until a transition triggers." },
	};
#endif // WITH_METADATA
	static void NewProp_bRunOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunOnce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCamerasActivateCameraRigTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::NewProp_bRunOnce_SetBit(void* Obj)
{
	((FGameplayCamerasActivateCameraRigTask*)Obj)->bRunOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::NewProp_bRunOnce = { "bRunOnce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayCamerasActivateCameraRigTask), &Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::NewProp_bRunOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunOnce_MetaData), NewProp_bRunOnce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::NewProp_bRunOnce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask,
	&NewStructOps,
	"GameplayCamerasActivateCameraRigTask",
	Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::PropPointers),
	sizeof(FGameplayCamerasActivateCameraRigTask),
	alignof(FGameplayCamerasActivateCameraRigTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTask.InnerSingleton;
}
// End ScriptStruct FGameplayCamerasActivateCameraRigTask

// Begin ScriptStruct FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTaskInstanceData;
class UScriptStruct* FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("GameplayCamerasActivateCameraRigViaProxyTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTaskInstanceData.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>()
{
	return FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Instance data for the \"Activate Camera Rig via Proxy\" task. */" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirectorTasks.h" },
		{ "ToolTip", "Instance data for the \"Activate Camera Rig via Proxy\" task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRigProxy_MetaData[] = {
		{ "Category", "Cameras" },
		{ "Comment", "/** The camera rig proxy to activate. */" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirectorTasks.h" },
		{ "ToolTip", "The camera rig proxy to activate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigProxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::NewProp_CameraRigProxy = { "CameraRigProxy", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData, CameraRigProxy), Z_Construct_UClass_UCameraRigProxyAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRigProxy_MetaData), NewProp_CameraRigProxy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::NewProp_CameraRigProxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"GameplayCamerasActivateCameraRigViaProxyTaskInstanceData",
	Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::PropPointers),
	sizeof(FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData),
	alignof(FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTaskInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTaskInstanceData.InnerSingleton;
}
// End ScriptStruct FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData

// Begin ScriptStruct FGameplayCamerasActivateCameraRigViaProxyTask
static_assert(std::is_polymorphic<FGameplayCamerasActivateCameraRigViaProxyTask>() == std::is_polymorphic<FGameplayCamerasStateTreeTask>(), "USTRUCT FGameplayCamerasActivateCameraRigViaProxyTask cannot be polymorphic unless super FGameplayCamerasStateTreeTask is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTask;
class UScriptStruct* FGameplayCamerasActivateCameraRigViaProxyTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("GameplayCamerasActivateCameraRigViaProxyTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTask.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FGameplayCamerasActivateCameraRigViaProxyTask>()
{
	return FGameplayCamerasActivateCameraRigViaProxyTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Cameras" },
		{ "Comment", "/**\n * A task that activates a camera rig via the given camera rig proxy inside a\n * StateTreeCameraDirector. The given proxy must be mapped to an actual proxy\n * in each camera asset using this StateTree.\n */" },
		{ "DisplayName", "Activate Camera via Proxy" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirectorTasks.h" },
		{ "ToolTip", "A task that activates a camera rig via the given camera rig proxy inside a\nStateTreeCameraDirector. The given proxy must be mapped to an actual proxy\nin each camera asset using this StateTree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunOnce_MetaData[] = {
		{ "Category", "State Tree" },
		{ "Comment", "/** If true, the task will complete immediately. If false, the task will run until a transition triggers. */" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirectorTasks.h" },
		{ "ToolTip", "If true, the task will complete immediately. If false, the task will run until a transition triggers." },
	};
#endif // WITH_METADATA
	static void NewProp_bRunOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunOnce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCamerasActivateCameraRigViaProxyTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::NewProp_bRunOnce_SetBit(void* Obj)
{
	((FGameplayCamerasActivateCameraRigViaProxyTask*)Obj)->bRunOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::NewProp_bRunOnce = { "bRunOnce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayCamerasActivateCameraRigViaProxyTask), &Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::NewProp_bRunOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunOnce_MetaData), NewProp_bRunOnce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::NewProp_bRunOnce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask,
	&NewStructOps,
	"GameplayCamerasActivateCameraRigViaProxyTask",
	Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::PropPointers),
	sizeof(FGameplayCamerasActivateCameraRigViaProxyTask),
	alignof(FGameplayCamerasActivateCameraRigViaProxyTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTask.InnerSingleton;
}
// End ScriptStruct FGameplayCamerasActivateCameraRigViaProxyTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirectorTasks_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayCamerasActivateCameraRigTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::NewStructOps, TEXT("GameplayCamerasActivateCameraRigTaskInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCamerasActivateCameraRigTaskInstanceData), 1963058105U) },
		{ FGameplayCamerasActivateCameraRigTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::NewStructOps, TEXT("GameplayCamerasActivateCameraRigTask"), &Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCamerasActivateCameraRigTask), 1560070234U) },
		{ FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::NewStructOps, TEXT("GameplayCamerasActivateCameraRigViaProxyTaskInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData), 523557929U) },
		{ FGameplayCamerasActivateCameraRigViaProxyTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::NewStructOps, TEXT("GameplayCamerasActivateCameraRigViaProxyTask"), &Z_Registration_Info_UScriptStruct_GameplayCamerasActivateCameraRigViaProxyTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCamerasActivateCameraRigViaProxyTask), 4141534690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirectorTasks_h_231682553(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirectorTasks_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirectorTasks_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
