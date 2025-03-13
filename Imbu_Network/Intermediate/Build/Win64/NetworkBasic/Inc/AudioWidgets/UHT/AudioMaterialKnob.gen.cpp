// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialKnob.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialSlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMaterialKnob() {}

// Begin Cross Module References
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialKnob();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialKnob_NoRegister();
AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialKnobStyle();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Delegate FOnKnobValueChangedEvent
struct Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics
{
	struct _Script_AudioWidgets_eventOnKnobValueChangedEvent_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioWidgets_eventOnKnobValueChangedEvent_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets, nullptr, "OnKnobValueChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::_Script_AudioWidgets_eventOnKnobValueChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::_Script_AudioWidgets_eventOnKnobValueChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnKnobValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnKnobValueChangedEvent, float Value)
{
	struct _Script_AudioWidgets_eventOnKnobValueChangedEvent_Parms
	{
		float Value;
	};
	_Script_AudioWidgets_eventOnKnobValueChangedEvent_Parms Parms;
	Parms.Value=Value;
	OnKnobValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnKnobValueChangedEvent

// Begin Class UAudioMaterialKnob Function GetFineTuneSpeed
struct Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics
{
	struct AudioMaterialKnob_eventGetFineTuneSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Get the Knobs fine-tune speed*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Get the Knobs fine-tune speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialKnob_eventGetFineTuneSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "GetFineTuneSpeed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::AudioMaterialKnob_eventGetFineTuneSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::AudioMaterialKnob_eventGetFineTuneSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execGetFineTuneSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFineTuneSpeed();
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function GetFineTuneSpeed

// Begin Class UAudioMaterialKnob Function GetIsLocked
struct Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics
{
	struct AudioMaterialKnob_eventGetIsLocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Get whether the knob is interactive or fixed.*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Get whether the knob is interactive or fixed." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AudioMaterialKnob_eventGetIsLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialKnob_eventGetIsLocked_Parms), &Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "GetIsLocked", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::AudioMaterialKnob_eventGetIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::AudioMaterialKnob_eventGetIsLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execGetIsLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsLocked();
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function GetIsLocked

// Begin Class UAudioMaterialKnob Function GetMouseUsesStep
struct Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics
{
	struct AudioMaterialKnob_eventGetMouseUsesStep_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Get whether the knob uses steps when tuning On Mouse move*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Get whether the knob uses steps when tuning On Mouse move" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AudioMaterialKnob_eventGetMouseUsesStep_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialKnob_eventGetMouseUsesStep_Parms), &Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "GetMouseUsesStep", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::AudioMaterialKnob_eventGetMouseUsesStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::AudioMaterialKnob_eventGetMouseUsesStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execGetMouseUsesStep)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMouseUsesStep();
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function GetMouseUsesStep

// Begin Class UAudioMaterialKnob Function GetStepSize
struct Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics
{
	struct AudioMaterialKnob_eventGetStepSize_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Get Step Size*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Get Step Size" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialKnob_eventGetStepSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "GetStepSize", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::AudioMaterialKnob_eventGetStepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::AudioMaterialKnob_eventGetStepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execGetStepSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStepSize();
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function GetStepSize

// Begin Class UAudioMaterialKnob Function GetTuneSpeed
struct Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics
{
	struct AudioMaterialKnob_eventGetTuneSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Get the Knobs tune speed*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Get the Knobs tune speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialKnob_eventGetTuneSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "GetTuneSpeed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::AudioMaterialKnob_eventGetTuneSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::AudioMaterialKnob_eventGetTuneSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execGetTuneSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTuneSpeed();
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function GetTuneSpeed

// Begin Class UAudioMaterialKnob Function GetValue
struct Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics
{
	struct AudioMaterialKnob_eventGetValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Get the current value of the knob.*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Get the current value of the knob." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialKnob_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::AudioMaterialKnob_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::AudioMaterialKnob_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function GetValue

// Begin Class UAudioMaterialKnob Function SetFineTuneSpeed
struct Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics
{
	struct AudioMaterialKnob_eventSetFineTuneSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Set the knobs fine-tune speed. InValue is Clamped between 0.f - 1.f */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Set the knobs fine-tune speed. InValue is Clamped between 0.f - 1.f" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialKnob_eventSetFineTuneSpeed_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "SetFineTuneSpeed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::AudioMaterialKnob_eventSetFineTuneSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::AudioMaterialKnob_eventSetFineTuneSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execSetFineTuneSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFineTuneSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function SetFineTuneSpeed

// Begin Class UAudioMaterialKnob Function SetLocked
struct Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics
{
	struct AudioMaterialKnob_eventSetLocked_Parms
	{
		bool InLocked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Set the knob to be interactive or fixed */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Set the knob to be interactive or fixed" },
	};
#endif // WITH_METADATA
	static void NewProp_InLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InLocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::NewProp_InLocked_SetBit(void* Obj)
{
	((AudioMaterialKnob_eventSetLocked_Parms*)Obj)->InLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::NewProp_InLocked = { "InLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialKnob_eventSetLocked_Parms), &Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::NewProp_InLocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::NewProp_InLocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "SetLocked", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::AudioMaterialKnob_eventSetLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::AudioMaterialKnob_eventSetLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_SetLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execSetLocked)
{
	P_GET_UBOOL(Z_Param_InLocked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocked(Z_Param_InLocked);
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function SetLocked

// Begin Class UAudioMaterialKnob Function SetMouseUsesStep
struct Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics
{
	struct AudioMaterialKnob_eventSetMouseUsesStep_Parms
	{
		bool InUsesStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Set the knob to use steps when turning On Mouse move */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Set the knob to use steps when turning On Mouse move" },
	};
#endif // WITH_METADATA
	static void NewProp_InUsesStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InUsesStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::NewProp_InUsesStep_SetBit(void* Obj)
{
	((AudioMaterialKnob_eventSetMouseUsesStep_Parms*)Obj)->InUsesStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::NewProp_InUsesStep = { "InUsesStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialKnob_eventSetMouseUsesStep_Parms), &Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::NewProp_InUsesStep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::NewProp_InUsesStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "SetMouseUsesStep", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::AudioMaterialKnob_eventSetMouseUsesStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::AudioMaterialKnob_eventSetMouseUsesStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execSetMouseUsesStep)
{
	P_GET_UBOOL(Z_Param_InUsesStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseUsesStep(Z_Param_InUsesStep);
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function SetMouseUsesStep

// Begin Class UAudioMaterialKnob Function SetStepSize
struct Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics
{
	struct AudioMaterialKnob_eventSetStepSize_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Set the amount to adjust the value when using steps*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Set the amount to adjust the value when using steps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialKnob_eventSetStepSize_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "SetStepSize", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::AudioMaterialKnob_eventSetStepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::AudioMaterialKnob_eventSetStepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execSetStepSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStepSize(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function SetStepSize

// Begin Class UAudioMaterialKnob Function SetTuneSpeed
struct Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics
{
	struct AudioMaterialKnob_eventSetTuneSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Set the knobs tune speed. InValue is Clamped between 0.f - 1.f */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Set the knobs tune speed. InValue is Clamped between 0.f - 1.f" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialKnob_eventSetTuneSpeed_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "SetTuneSpeed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::AudioMaterialKnob_eventSetTuneSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::AudioMaterialKnob_eventSetTuneSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execSetTuneSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTuneSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function SetTuneSpeed

// Begin Class UAudioMaterialKnob Function SetValue
struct Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics
{
	struct AudioMaterialKnob_eventSetValue_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Knob" },
		{ "Comment", "/** Set the current value of the knob. InValue is Clamped between 0.f - 1.f */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Set the current value of the knob. InValue is Clamped between 0.f - 1.f" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialKnob_eventSetValue_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialKnob, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::AudioMaterialKnob_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::AudioMaterialKnob_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialKnob_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialKnob::execSetValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioMaterialKnob Function SetValue

// Begin Class UAudioMaterialKnob
void UAudioMaterialKnob::StaticRegisterNativesUAudioMaterialKnob()
{
	UClass* Class = UAudioMaterialKnob::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFineTuneSpeed", &UAudioMaterialKnob::execGetFineTuneSpeed },
		{ "GetIsLocked", &UAudioMaterialKnob::execGetIsLocked },
		{ "GetMouseUsesStep", &UAudioMaterialKnob::execGetMouseUsesStep },
		{ "GetStepSize", &UAudioMaterialKnob::execGetStepSize },
		{ "GetTuneSpeed", &UAudioMaterialKnob::execGetTuneSpeed },
		{ "GetValue", &UAudioMaterialKnob::execGetValue },
		{ "SetFineTuneSpeed", &UAudioMaterialKnob::execSetFineTuneSpeed },
		{ "SetLocked", &UAudioMaterialKnob::execSetLocked },
		{ "SetMouseUsesStep", &UAudioMaterialKnob::execSetMouseUsesStep },
		{ "SetStepSize", &UAudioMaterialKnob::execSetStepSize },
		{ "SetTuneSpeed", &UAudioMaterialKnob::execSetTuneSpeed },
		{ "SetValue", &UAudioMaterialKnob::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMaterialKnob);
UClass* Z_Construct_UClass_UAudioMaterialKnob_NoRegister()
{
	return UAudioMaterialKnob::StaticClass();
}
struct Z_Construct_UClass_UAudioMaterialKnob_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a turning Knob that allows you to control the value between 0..1.\n * Knob is rendered by using material instead of texture.\n *\n * * No Children\n */" },
		{ "IncludePath", "AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A simple widget that shows a turning Knob that allows you to control the value between 0..1.\nKnob is rendered by using material instead of texture.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The button's style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The button's style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKnobValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by knob. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Called when the value is changed by knob." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "BlueprintGetter", "GetValue" },
		{ "BlueprintSetter", "SetValue" },
		{ "Category", "Appearance" },
		{ "Comment", "/**Default Value of the Knob*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Default Value of the Knob" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TuneSpeed_MetaData[] = {
		{ "BlueprintGetter", "GetTuneSpeed" },
		{ "BlueprintSetter", "SetTuneSpeed" },
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The tune speed of the knob */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "The tune speed of the knob" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FineTuneSpeed_MetaData[] = {
		{ "BlueprintGetter", "GetFineTuneSpeed" },
		{ "BlueprintSetter", "SetFineTuneSpeed" },
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The tune speed when fine-tuning the knob */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "The tune speed when fine-tuning the knob" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "BlueprintGetter", "GetIsLocked" },
		{ "BlueprintSetter", "SetLocked" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the knob is interactive or fixed. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Whether the knob is interactive or fixed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMouseUsesStep_MetaData[] = {
		{ "BlueprintGetter", "GetMouseUsesStep" },
		{ "BlueprintSetter", "SetMouseUsesStep" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets new value if mouse position is greater/less than half the step size. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "Sets new value if mouse position is greater/less than half the step size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "BlueprintGetter", "GetStepSize" },
		{ "BlueprintSetter", "SetStepSize" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount to adjust the value by, when using steps */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialKnob.h" },
		{ "ToolTip", "The amount to adjust the value by, when using steps" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKnobValueChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TuneSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FineTuneSpeed;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static void NewProp_bMouseUsesStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMouseUsesStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed, "GetFineTuneSpeed" }, // 1569202404
		{ &Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked, "GetIsLocked" }, // 4283999129
		{ &Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep, "GetMouseUsesStep" }, // 2255748260
		{ &Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize, "GetStepSize" }, // 1591839308
		{ &Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed, "GetTuneSpeed" }, // 4041412734
		{ &Z_Construct_UFunction_UAudioMaterialKnob_GetValue, "GetValue" }, // 1402239466
		{ &Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed, "SetFineTuneSpeed" }, // 1305206558
		{ &Z_Construct_UFunction_UAudioMaterialKnob_SetLocked, "SetLocked" }, // 3471407279
		{ &Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep, "SetMouseUsesStep" }, // 587991680
		{ &Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize, "SetStepSize" }, // 606282281
		{ &Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed, "SetTuneSpeed" }, // 2307237758
		{ &Z_Construct_UFunction_UAudioMaterialKnob_SetValue, "SetValue" }, // 3113317478
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMaterialKnob>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialKnob, WidgetStyle), Z_Construct_UScriptStruct_FAudioMaterialKnobStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 4046162969
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_OnKnobValueChanged = { "OnKnobValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialKnob, OnKnobValueChanged), Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKnobValueChanged_MetaData), NewProp_OnKnobValueChanged_MetaData) }; // 4127318136
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialKnob, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_TuneSpeed = { "TuneSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialKnob, TuneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TuneSpeed_MetaData), NewProp_TuneSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_FineTuneSpeed = { "FineTuneSpeed", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialKnob, FineTuneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FineTuneSpeed_MetaData), NewProp_FineTuneSpeed_MetaData) };
void Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((UAudioMaterialKnob*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioMaterialKnob), &Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
void Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bMouseUsesStep_SetBit(void* Obj)
{
	((UAudioMaterialKnob*)Obj)->bMouseUsesStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bMouseUsesStep = { "bMouseUsesStep", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioMaterialKnob), &Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bMouseUsesStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMouseUsesStep_MetaData), NewProp_bMouseUsesStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialKnob, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMaterialKnob_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_OnKnobValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_TuneSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_FineTuneSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bMouseUsesStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_StepSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialKnob_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioMaterialKnob_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialKnob_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMaterialKnob_Statics::ClassParams = {
	&UAudioMaterialKnob::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioMaterialKnob_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialKnob_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialKnob_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMaterialKnob_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioMaterialKnob()
{
	if (!Z_Registration_Info_UClass_UAudioMaterialKnob.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMaterialKnob.OuterSingleton, Z_Construct_UClass_UAudioMaterialKnob_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioMaterialKnob.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMaterialKnob>()
{
	return UAudioMaterialKnob::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMaterialKnob);
UAudioMaterialKnob::~UAudioMaterialKnob() {}
// End Class UAudioMaterialKnob

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMaterialKnob, UAudioMaterialKnob::StaticClass, TEXT("UAudioMaterialKnob"), &Z_Registration_Info_UClass_UAudioMaterialKnob, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMaterialKnob), 1372484858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_137839358(TEXT("/Script/AudioWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
