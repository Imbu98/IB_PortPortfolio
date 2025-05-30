// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Public/Quartz/QuartzSubsystem.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuartzSubsystem() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzClockHandle_NoRegister();
AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzSubsystem();
AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzSubsystem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzCommandQuantization();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzClockSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzTransportTimeStamp();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin Class UQuartzSubsystem Function CreateNewClock
struct Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics
{
	struct QuartzSubsystem_eventCreateNewClock_Parms
	{
		const UObject* WorldContextObject;
		FName ClockName;
		FQuartzClockSettings InSettings;
		bool bOverrideSettingsIfClockExists;
		bool bUseAudioEngineClockManager;
		UQuartzClockHandle* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUseAudioEngineClockManager" },
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Clock Creation\n// create a new clock (or return handle if clock already exists)\n" },
		{ "CPP_Default_bOverrideSettingsIfClockExists", "false" },
		{ "CPP_Default_bUseAudioEngineClockManager", "true" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "Clock Creation\ncreate a new clock (or return handle if clock already exists)" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClockName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static void NewProp_bOverrideSettingsIfClockExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSettingsIfClockExists;
	static void NewProp_bUseAudioEngineClockManager_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAudioEngineClockManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, ClockName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, InSettings), Z_Construct_UScriptStruct_FQuartzClockSettings, METADATA_PARAMS(0, nullptr) }; // 401001092
void Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists_SetBit(void* Obj)
{
	((QuartzSubsystem_eventCreateNewClock_Parms*)Obj)->bOverrideSettingsIfClockExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists = { "bOverrideSettingsIfClockExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuartzSubsystem_eventCreateNewClock_Parms), &Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bUseAudioEngineClockManager_SetBit(void* Obj)
{
	((QuartzSubsystem_eventCreateNewClock_Parms*)Obj)->bUseAudioEngineClockManager = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bUseAudioEngineClockManager = { "bUseAudioEngineClockManager", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuartzSubsystem_eventCreateNewClock_Parms), &Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bUseAudioEngineClockManager_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, ReturnValue), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_InSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bUseAudioEngineClockManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "CreateNewClock", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::QuartzSubsystem_eventCreateNewClock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::QuartzSubsystem_eventCreateNewClock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execCreateNewClock)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
	P_GET_STRUCT(FQuartzClockSettings,Z_Param_InSettings);
	P_GET_UBOOL(Z_Param_bOverrideSettingsIfClockExists);
	P_GET_UBOOL(Z_Param_bUseAudioEngineClockManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuartzClockHandle**)Z_Param__Result=P_THIS->CreateNewClock(Z_Param_WorldContextObject,Z_Param_ClockName,Z_Param_InSettings,Z_Param_bOverrideSettingsIfClockExists,Z_Param_bUseAudioEngineClockManager);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function CreateNewClock

// Begin Class UQuartzSubsystem Function DeleteClockByHandle
struct Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics
{
	struct QuartzSubsystem_eventDeleteClockByHandle_Parms
	{
		const UObject* WorldContextObject;
		UQuartzClockHandle* InClockHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// delete an existing clock given its clock handle\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "delete an existing clock given its clock handle" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InClockHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventDeleteClockByHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_InClockHandle = { "InClockHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventDeleteClockByHandle_Parms, InClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_InClockHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "DeleteClockByHandle", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::QuartzSubsystem_eventDeleteClockByHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::QuartzSubsystem_eventDeleteClockByHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execDeleteClockByHandle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_InClockHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteClockByHandle(Z_Param_WorldContextObject,P_ARG_GC_BARRIER(Z_Param_Out_InClockHandle));
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function DeleteClockByHandle

// Begin Class UQuartzSubsystem Function DeleteClockByName
struct Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics
{
	struct QuartzSubsystem_eventDeleteClockByName_Parms
	{
		const UObject* WorldContextObject;
		FName ClockName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// delete an existing clock given its name\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "delete an existing clock given its name" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClockName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventDeleteClockByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventDeleteClockByName_Parms, ClockName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_ClockName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "DeleteClockByName", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::QuartzSubsystem_eventDeleteClockByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::QuartzSubsystem_eventDeleteClockByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execDeleteClockByName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteClockByName(Z_Param_WorldContextObject,Z_Param_ClockName);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function DeleteClockByName

// Begin Class UQuartzSubsystem Function DoesClockExist
struct Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics
{
	struct QuartzSubsystem_eventDoesClockExist_Parms
	{
		const UObject* WorldContextObject;
		FName ClockName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// returns true if the clock exists\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "returns true if the clock exists" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClockName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventDoesClockExist_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventDoesClockExist_Parms, ClockName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuartzSubsystem_eventDoesClockExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuartzSubsystem_eventDoesClockExist_Parms), &Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "DoesClockExist", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::QuartzSubsystem_eventDoesClockExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::QuartzSubsystem_eventDoesClockExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execDoesClockExist)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesClockExist(Z_Param_WorldContextObject,Z_Param_ClockName);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function DoesClockExist

// Begin Class UQuartzSubsystem Function GetAudioRenderThreadToGameThreadAverageLatency
struct Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics
{
	struct QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "Comment", "// latency data (Audio Render Thread -> Game thread)\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "latency data (Audio Render Thread -> Game thread)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetAudioRenderThreadToGameThreadAverageLatency", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetAudioRenderThreadToGameThreadAverageLatency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAudioRenderThreadToGameThreadAverageLatency();
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetAudioRenderThreadToGameThreadAverageLatency

// Begin Class UQuartzSubsystem Function GetAudioRenderThreadToGameThreadMaxLatency
struct Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics
{
	struct QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetAudioRenderThreadToGameThreadMaxLatency", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMaxLatency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAudioRenderThreadToGameThreadMaxLatency();
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetAudioRenderThreadToGameThreadMaxLatency

// Begin Class UQuartzSubsystem Function GetAudioRenderThreadToGameThreadMinLatency
struct Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics
{
	struct QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetAudioRenderThreadToGameThreadMinLatency", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMinLatency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAudioRenderThreadToGameThreadMinLatency();
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetAudioRenderThreadToGameThreadMinLatency

// Begin Class UQuartzSubsystem Function GetCurrentClockTimestamp
struct Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics
{
	struct QuartzSubsystem_eventGetCurrentClockTimestamp_Parms
	{
		const UObject* WorldContextObject;
		FName InClockName;
		FQuartzTransportTimeStamp ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Retrieves a timestamp for the clock\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "Retrieves a timestamp for the clock" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InClockName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InClockName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetCurrentClockTimestamp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_InClockName = { "InClockName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetCurrentClockTimestamp_Parms, InClockName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InClockName_MetaData), NewProp_InClockName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetCurrentClockTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuartzTransportTimeStamp, METADATA_PARAMS(0, nullptr) }; // 3304665849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_InClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetCurrentClockTimestamp", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::QuartzSubsystem_eventGetCurrentClockTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::QuartzSubsystem_eventGetCurrentClockTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetCurrentClockTimestamp)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InClockName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuartzTransportTimeStamp*)Z_Param__Result=P_THIS->GetCurrentClockTimestamp(Z_Param_WorldContextObject,Z_Param_Out_InClockName);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetCurrentClockTimestamp

// Begin Class UQuartzSubsystem Function GetDurationOfQuantizationTypeInSeconds
struct Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics
{
	struct QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms
	{
		const UObject* WorldContextObject;
		FName ClockName;
		EQuartzCommandQuantization QuantizationType;
		float Multiplier;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Returns the duration in seconds of the given Quantization Type\n" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "Returns the duration in seconds of the given Quantization Type" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClockName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuantizationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuantizationType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, ClockName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType = { "QuantizationType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, QuantizationType), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizationType_MetaData), NewProp_QuantizationType_MetaData) }; // 3792817337
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetDurationOfQuantizationTypeInSeconds", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetDurationOfQuantizationTypeInSeconds)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
	P_GET_ENUM_REF(EQuartzCommandQuantization,Z_Param_Out_QuantizationType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDurationOfQuantizationTypeInSeconds(Z_Param_WorldContextObject,Z_Param_ClockName,(EQuartzCommandQuantization&)(Z_Param_Out_QuantizationType),Z_Param_Multiplier);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetDurationOfQuantizationTypeInSeconds

// Begin Class UQuartzSubsystem Function GetEstimatedClockRunTime
struct Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics
{
	struct QuartzSubsystem_eventGetEstimatedClockRunTime_Parms
	{
		const UObject* WorldContextObject;
		FName InClockName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InClockName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InClockName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetEstimatedClockRunTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_InClockName = { "InClockName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetEstimatedClockRunTime_Parms, InClockName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InClockName_MetaData), NewProp_InClockName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetEstimatedClockRunTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_InClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetEstimatedClockRunTime", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::QuartzSubsystem_eventGetEstimatedClockRunTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::QuartzSubsystem_eventGetEstimatedClockRunTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetEstimatedClockRunTime)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InClockName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEstimatedClockRunTime(Z_Param_WorldContextObject,Z_Param_Out_InClockName);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetEstimatedClockRunTime

// Begin Class UQuartzSubsystem Function GetGameThreadToAudioRenderThreadAverageLatency
struct Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics
{
	struct QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "Comment", "// latency data (Game thread -> Audio Render Thread)\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "latency data (Game thread -> Audio Render Thread)" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetGameThreadToAudioRenderThreadAverageLatency", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetGameThreadToAudioRenderThreadAverageLatency)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameThreadToAudioRenderThreadAverageLatency(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetGameThreadToAudioRenderThreadAverageLatency

// Begin Class UQuartzSubsystem Function GetGameThreadToAudioRenderThreadMaxLatency
struct Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics
{
	struct QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetGameThreadToAudioRenderThreadMaxLatency", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMaxLatency)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameThreadToAudioRenderThreadMaxLatency(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetGameThreadToAudioRenderThreadMaxLatency

// Begin Class UQuartzSubsystem Function GetGameThreadToAudioRenderThreadMinLatency
struct Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics
{
	struct QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetGameThreadToAudioRenderThreadMinLatency", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMinLatency)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameThreadToAudioRenderThreadMinLatency(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetGameThreadToAudioRenderThreadMinLatency

// Begin Class UQuartzSubsystem Function GetHandleForClock
struct Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics
{
	struct QuartzSubsystem_eventGetHandleForClock_Parms
	{
		const UObject* WorldContextObject;
		FName ClockName;
		UQuartzClockHandle* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// get handle for existing clock\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "get handle for existing clock" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClockName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetHandleForClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetHandleForClock_Parms, ClockName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetHandleForClock_Parms, ReturnValue), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetHandleForClock", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::QuartzSubsystem_eventGetHandleForClock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::QuartzSubsystem_eventGetHandleForClock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetHandleForClock)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuartzClockHandle**)Z_Param__Result=P_THIS->GetHandleForClock(Z_Param_WorldContextObject,Z_Param_ClockName);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetHandleForClock

// Begin Class UQuartzSubsystem Function GetRoundTripAverageLatency
struct Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics
{
	struct QuartzSubsystem_eventGetRoundTripAverageLatency_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "Comment", "// latency data (Round trip)\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "latency data (Round trip)" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripAverageLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripAverageLatency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetRoundTripAverageLatency", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::QuartzSubsystem_eventGetRoundTripAverageLatency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::QuartzSubsystem_eventGetRoundTripAverageLatency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetRoundTripAverageLatency)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRoundTripAverageLatency(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetRoundTripAverageLatency

// Begin Class UQuartzSubsystem Function GetRoundTripMaxLatency
struct Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics
{
	struct QuartzSubsystem_eventGetRoundTripMaxLatency_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMaxLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMaxLatency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetRoundTripMaxLatency", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::QuartzSubsystem_eventGetRoundTripMaxLatency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::QuartzSubsystem_eventGetRoundTripMaxLatency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetRoundTripMaxLatency)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRoundTripMaxLatency(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetRoundTripMaxLatency

// Begin Class UQuartzSubsystem Function GetRoundTripMinLatency
struct Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics
{
	struct QuartzSubsystem_eventGetRoundTripMinLatency_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMinLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMinLatency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetRoundTripMinLatency", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::QuartzSubsystem_eventGetRoundTripMinLatency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::QuartzSubsystem_eventGetRoundTripMinLatency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execGetRoundTripMinLatency)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRoundTripMinLatency(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function GetRoundTripMinLatency

// Begin Class UQuartzSubsystem Function IsClockRunning
struct Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics
{
	struct QuartzSubsystem_eventIsClockRunning_Parms
	{
		const UObject* WorldContextObject;
		FName ClockName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// returns true if the clock is running\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "returns true if the clock is running" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClockName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventIsClockRunning_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuartzSubsystem_eventIsClockRunning_Parms, ClockName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuartzSubsystem_eventIsClockRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuartzSubsystem_eventIsClockRunning_Parms), &Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "IsClockRunning", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::QuartzSubsystem_eventIsClockRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::QuartzSubsystem_eventIsClockRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execIsClockRunning)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClockRunning(Z_Param_WorldContextObject,Z_Param_ClockName);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function IsClockRunning

// Begin Class UQuartzSubsystem Function IsQuartzEnabled
struct Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics
{
	struct QuartzSubsystem_eventIsQuartzEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuartzSubsystem_eventIsQuartzEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuartzSubsystem_eventIsQuartzEnabled_Parms), &Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "IsQuartzEnabled", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::QuartzSubsystem_eventIsQuartzEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::QuartzSubsystem_eventIsQuartzEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execIsQuartzEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsQuartzEnabled();
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function IsQuartzEnabled

// Begin Class UQuartzSubsystem Function SetQuartzSubsystemTickableWhenPaused
struct Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics
{
	struct QuartzSubsystem_eventSetQuartzSubsystemTickableWhenPaused_Parms
	{
		bool bInTickableWhenPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInTickableWhenPaused_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInTickableWhenPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInTickableWhenPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::NewProp_bInTickableWhenPaused_SetBit(void* Obj)
{
	((QuartzSubsystem_eventSetQuartzSubsystemTickableWhenPaused_Parms*)Obj)->bInTickableWhenPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::NewProp_bInTickableWhenPaused = { "bInTickableWhenPaused", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuartzSubsystem_eventSetQuartzSubsystemTickableWhenPaused_Parms), &Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::NewProp_bInTickableWhenPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInTickableWhenPaused_MetaData), NewProp_bInTickableWhenPaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::NewProp_bInTickableWhenPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "SetQuartzSubsystemTickableWhenPaused", nullptr, nullptr, Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::QuartzSubsystem_eventSetQuartzSubsystemTickableWhenPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::QuartzSubsystem_eventSetQuartzSubsystemTickableWhenPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuartzSubsystem::execSetQuartzSubsystemTickableWhenPaused)
{
	P_GET_UBOOL(Z_Param_bInTickableWhenPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuartzSubsystemTickableWhenPaused(Z_Param_bInTickableWhenPaused);
	P_NATIVE_END;
}
// End Class UQuartzSubsystem Function SetQuartzSubsystemTickableWhenPaused

// Begin Class UQuartzSubsystem
void UQuartzSubsystem::StaticRegisterNativesUQuartzSubsystem()
{
	UClass* Class = UQuartzSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateNewClock", &UQuartzSubsystem::execCreateNewClock },
		{ "DeleteClockByHandle", &UQuartzSubsystem::execDeleteClockByHandle },
		{ "DeleteClockByName", &UQuartzSubsystem::execDeleteClockByName },
		{ "DoesClockExist", &UQuartzSubsystem::execDoesClockExist },
		{ "GetAudioRenderThreadToGameThreadAverageLatency", &UQuartzSubsystem::execGetAudioRenderThreadToGameThreadAverageLatency },
		{ "GetAudioRenderThreadToGameThreadMaxLatency", &UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMaxLatency },
		{ "GetAudioRenderThreadToGameThreadMinLatency", &UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMinLatency },
		{ "GetCurrentClockTimestamp", &UQuartzSubsystem::execGetCurrentClockTimestamp },
		{ "GetDurationOfQuantizationTypeInSeconds", &UQuartzSubsystem::execGetDurationOfQuantizationTypeInSeconds },
		{ "GetEstimatedClockRunTime", &UQuartzSubsystem::execGetEstimatedClockRunTime },
		{ "GetGameThreadToAudioRenderThreadAverageLatency", &UQuartzSubsystem::execGetGameThreadToAudioRenderThreadAverageLatency },
		{ "GetGameThreadToAudioRenderThreadMaxLatency", &UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMaxLatency },
		{ "GetGameThreadToAudioRenderThreadMinLatency", &UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMinLatency },
		{ "GetHandleForClock", &UQuartzSubsystem::execGetHandleForClock },
		{ "GetRoundTripAverageLatency", &UQuartzSubsystem::execGetRoundTripAverageLatency },
		{ "GetRoundTripMaxLatency", &UQuartzSubsystem::execGetRoundTripMaxLatency },
		{ "GetRoundTripMinLatency", &UQuartzSubsystem::execGetRoundTripMinLatency },
		{ "IsClockRunning", &UQuartzSubsystem::execIsClockRunning },
		{ "IsQuartzEnabled", &UQuartzSubsystem::execIsQuartzEnabled },
		{ "SetQuartzSubsystemTickableWhenPaused", &UQuartzSubsystem::execSetQuartzSubsystemTickableWhenPaused },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuartzSubsystem);
UClass* Z_Construct_UClass_UQuartzSubsystem_NoRegister()
{
	return UQuartzSubsystem::StaticClass();
}
struct Z_Construct_UClass_UQuartzSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Quartz" },
		{ "IncludePath", "Quartz/QuartzSubsystem.h" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock, "CreateNewClock" }, // 3691987516
		{ &Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle, "DeleteClockByHandle" }, // 3700850992
		{ &Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName, "DeleteClockByName" }, // 2051654140
		{ &Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist, "DoesClockExist" }, // 1607384987
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency, "GetAudioRenderThreadToGameThreadAverageLatency" }, // 4161705089
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency, "GetAudioRenderThreadToGameThreadMaxLatency" }, // 1494102273
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency, "GetAudioRenderThreadToGameThreadMinLatency" }, // 3639953176
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp, "GetCurrentClockTimestamp" }, // 237762918
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds, "GetDurationOfQuantizationTypeInSeconds" }, // 3775192541
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime, "GetEstimatedClockRunTime" }, // 1353624976
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency, "GetGameThreadToAudioRenderThreadAverageLatency" }, // 2296801728
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency, "GetGameThreadToAudioRenderThreadMaxLatency" }, // 2839183182
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency, "GetGameThreadToAudioRenderThreadMinLatency" }, // 2309567596
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock, "GetHandleForClock" }, // 3342194801
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency, "GetRoundTripAverageLatency" }, // 2103061372
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency, "GetRoundTripMaxLatency" }, // 2320729701
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency, "GetRoundTripMinLatency" }, // 2662860087
		{ &Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning, "IsClockRunning" }, // 2055315092
		{ &Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled, "IsQuartzEnabled" }, // 738515591
		{ &Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused, "SetQuartzSubsystemTickableWhenPaused" }, // 1885207305
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuartzSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuartzSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuartzSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuartzSubsystem_Statics::ClassParams = {
	&UQuartzSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuartzSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuartzSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuartzSubsystem()
{
	if (!Z_Registration_Info_UClass_UQuartzSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuartzSubsystem.OuterSingleton, Z_Construct_UClass_UQuartzSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuartzSubsystem.OuterSingleton;
}
template<> AUDIOMIXER_API UClass* StaticClass<UQuartzSubsystem>()
{
	return UQuartzSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuartzSubsystem);
// End Class UQuartzSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuartzSubsystem, UQuartzSubsystem::StaticClass, TEXT("UQuartzSubsystem"), &Z_Registration_Info_UClass_UQuartzSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuartzSubsystem), 797500835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_3221159330(TEXT("/Script/AudioMixer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
