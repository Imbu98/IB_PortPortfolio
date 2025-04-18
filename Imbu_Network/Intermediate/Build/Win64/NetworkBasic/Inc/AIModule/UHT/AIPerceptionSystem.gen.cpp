// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionSystem() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAIPerceptionSystem Function GetSenseClassForStimulus
struct Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics
{
	struct AIPerceptionSystem_eventGetSenseClassForStimulus_Parms
	{
		UObject* WorldContextObject;
		FAIStimulus Stimulus;
		TSubclassOf<UAISense> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stimulus_MetaData), NewProp_Stimulus_MetaData) }; // 177100813
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "GetSenseClassForStimulus", nullptr, nullptr, Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::AIPerceptionSystem_eventGetSenseClassForStimulus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::AIPerceptionSystem_eventGetSenseClassForStimulus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIPerceptionSystem::execGetSenseClassForStimulus)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FAIStimulus,Z_Param_Out_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UAISense>*)Z_Param__Result=UAIPerceptionSystem::GetSenseClassForStimulus(Z_Param_WorldContextObject,Z_Param_Out_Stimulus);
	P_NATIVE_END;
}
// End Class UAIPerceptionSystem Function GetSenseClassForStimulus

// Begin Class UAIPerceptionSystem Function OnPerceptionStimuliSourceEndPlay
struct Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics
{
	struct AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms
	{
		AActor* Actor;
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "OnPerceptionStimuliSourceEndPlay", nullptr, nullptr, Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIPerceptionSystem::execOnPerceptionStimuliSourceEndPlay)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionStimuliSourceEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
	P_NATIVE_END;
}
// End Class UAIPerceptionSystem Function OnPerceptionStimuliSourceEndPlay

// Begin Class UAIPerceptionSystem Function RegisterPerceptionStimuliSource
struct Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics
{
	struct AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UAISense> Sense;
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Sense;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Sense = { "Sense", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, Sense), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms), &Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Sense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "RegisterPerceptionStimuliSource", nullptr, nullptr, Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIPerceptionSystem::execRegisterPerceptionStimuliSource)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_Sense);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAIPerceptionSystem::RegisterPerceptionStimuliSource(Z_Param_WorldContextObject,Z_Param_Sense,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UAIPerceptionSystem Function RegisterPerceptionStimuliSource

// Begin Class UAIPerceptionSystem Function ReportEvent
struct Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics
{
	struct AIPerceptionSystem_eventReportEvent_Parms
	{
		UAISenseEvent* PerceptionEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::NewProp_PerceptionEvent = { "PerceptionEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventReportEvent_Parms, PerceptionEvent), Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::NewProp_PerceptionEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "ReportEvent", nullptr, nullptr, Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::AIPerceptionSystem_eventReportEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::AIPerceptionSystem_eventReportEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIPerceptionSystem::execReportEvent)
{
	P_GET_OBJECT(UAISenseEvent,Z_Param_PerceptionEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportEvent(Z_Param_PerceptionEvent);
	P_NATIVE_END;
}
// End Class UAIPerceptionSystem Function ReportEvent

// Begin Class UAIPerceptionSystem Function ReportPerceptionEvent
struct Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics
{
	struct AIPerceptionSystem_eventReportPerceptionEvent_Parms
	{
		UObject* WorldContextObject;
		UAISenseEvent* PerceptionEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventReportPerceptionEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_PerceptionEvent = { "PerceptionEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionSystem_eventReportPerceptionEvent_Parms, PerceptionEvent), Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_PerceptionEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "ReportPerceptionEvent", nullptr, nullptr, Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::AIPerceptionSystem_eventReportPerceptionEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::AIPerceptionSystem_eventReportPerceptionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIPerceptionSystem::execReportPerceptionEvent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAISenseEvent,Z_Param_PerceptionEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAIPerceptionSystem::ReportPerceptionEvent(Z_Param_WorldContextObject,Z_Param_PerceptionEvent);
	P_NATIVE_END;
}
// End Class UAIPerceptionSystem Function ReportPerceptionEvent

// Begin Class UAIPerceptionSystem
void UAIPerceptionSystem::StaticRegisterNativesUAIPerceptionSystem()
{
	UClass* Class = UAIPerceptionSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSenseClassForStimulus", &UAIPerceptionSystem::execGetSenseClassForStimulus },
		{ "OnPerceptionStimuliSourceEndPlay", &UAIPerceptionSystem::execOnPerceptionStimuliSourceEndPlay },
		{ "RegisterPerceptionStimuliSource", &UAIPerceptionSystem::execRegisterPerceptionStimuliSource },
		{ "ReportEvent", &UAIPerceptionSystem::execReportEvent },
		{ "ReportPerceptionEvent", &UAIPerceptionSystem::execReportPerceptionEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIPerceptionSystem);
UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister()
{
	return UAIPerceptionSystem::StaticClass();
}
struct Z_Construct_UClass_UAIPerceptionSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n *\x09""AI Subsystem managing AI Perception through registered AI Senses between Listeners and Stimuli Sources\n */" },
		{ "IncludePath", "Perception/AIPerceptionSystem.h" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AI Subsystem managing AI Perception through registered AI Senses between Listeners and Stimuli Sources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Senses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionAgingRate_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Senses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Senses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerceptionAgingRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus, "GetSenseClassForStimulus" }, // 2951162070
		{ &Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay, "OnPerceptionStimuliSourceEndPlay" }, // 2015701138
		{ &Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource, "RegisterPerceptionStimuliSource" }, // 1984981565
		{ &Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent, "ReportEvent" }, // 3853506522
		{ &Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent, "ReportPerceptionEvent" }, // 3286273600
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPerceptionSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_Inner = { "Senses", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses = { "Senses", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIPerceptionSystem, Senses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Senses_MetaData), NewProp_Senses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate = { "PerceptionAgingRate", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIPerceptionSystem, PerceptionAgingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionAgingRate_MetaData), NewProp_PerceptionAgingRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIPerceptionSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionSystem_Statics::ClassParams = {
	&UAIPerceptionSystem::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIPerceptionSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIPerceptionSystem()
{
	if (!Z_Registration_Info_UClass_UAIPerceptionSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIPerceptionSystem.OuterSingleton, Z_Construct_UClass_UAIPerceptionSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIPerceptionSystem.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIPerceptionSystem>()
{
	return UAIPerceptionSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionSystem);
UAIPerceptionSystem::~UAIPerceptionSystem() {}
// End Class UAIPerceptionSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIPerceptionSystem, UAIPerceptionSystem::StaticClass, TEXT("UAIPerceptionSystem"), &Z_Registration_Info_UClass_UAIPerceptionSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIPerceptionSystem), 1313522472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_3752739464(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
