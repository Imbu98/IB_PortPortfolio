// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialSlider.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialSlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMaterialSlider() {}

// Begin Cross Module References
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialSlider();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialSlider_NoRegister();
AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialSliderStyle();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Delegate FOnSliderFloatValueChangedEvent
struct Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics
{
	struct _Script_AudioWidgets_eventOnSliderFloatValueChangedEvent_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioWidgets_eventOnSliderFloatValueChangedEvent_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets, nullptr, "OnSliderFloatValueChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::_Script_AudioWidgets_eventOnSliderFloatValueChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::_Script_AudioWidgets_eventOnSliderFloatValueChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSliderFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSliderFloatValueChangedEvent, float Value)
{
	struct _Script_AudioWidgets_eventOnSliderFloatValueChangedEvent_Parms
	{
		float Value;
	};
	_Script_AudioWidgets_eventOnSliderFloatValueChangedEvent_Parms Parms;
	Parms.Value=Value;
	OnSliderFloatValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSliderFloatValueChangedEvent

// Begin Class UAudioMaterialSlider Function GetFineTuneSpeed
struct Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics
{
	struct AudioMaterialSlider_eventGetFineTuneSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Get slider fine-tune speed*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Get slider fine-tune speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialSlider_eventGetFineTuneSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "GetFineTuneSpeed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::AudioMaterialSlider_eventGetFineTuneSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::AudioMaterialSlider_eventGetFineTuneSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execGetFineTuneSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFineTuneSpeed();
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function GetFineTuneSpeed

// Begin Class UAudioMaterialSlider Function GetIsLocked
struct Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics
{
	struct AudioMaterialSlider_eventGetIsLocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Get whether the slider is interactive or fixed.*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Get whether the slider is interactive or fixed." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AudioMaterialSlider_eventGetIsLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialSlider_eventGetIsLocked_Parms), &Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "GetIsLocked", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::AudioMaterialSlider_eventGetIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::AudioMaterialSlider_eventGetIsLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execGetIsLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsLocked();
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function GetIsLocked

// Begin Class UAudioMaterialSlider Function GetMouseUsesStep
struct Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics
{
	struct AudioMaterialSlider_eventGetMouseUsesStep_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Get whether the slider uses steps when turning On Mouse move*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Get whether the slider uses steps when turning On Mouse move" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AudioMaterialSlider_eventGetMouseUsesStep_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialSlider_eventGetMouseUsesStep_Parms), &Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "GetMouseUsesStep", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::AudioMaterialSlider_eventGetMouseUsesStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::AudioMaterialSlider_eventGetMouseUsesStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execGetMouseUsesStep)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMouseUsesStep();
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function GetMouseUsesStep

// Begin Class UAudioMaterialSlider Function GetStepSize
struct Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics
{
	struct AudioMaterialSlider_eventGetStepSize_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Get Step Size*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Get Step Size" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialSlider_eventGetStepSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "GetStepSize", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::AudioMaterialSlider_eventGetStepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::AudioMaterialSlider_eventGetStepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execGetStepSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStepSize();
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function GetStepSize

// Begin Class UAudioMaterialSlider Function GetTuneSpeed
struct Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics
{
	struct AudioMaterialSlider_eventGetTuneSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Get slider tune speed*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Get slider tune speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialSlider_eventGetTuneSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "GetTuneSpeed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::AudioMaterialSlider_eventGetTuneSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::AudioMaterialSlider_eventGetTuneSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execGetTuneSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTuneSpeed();
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function GetTuneSpeed

// Begin Class UAudioMaterialSlider Function GetValue
struct Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics
{
	struct AudioMaterialSlider_eventGetValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Gets the current value of the slider.*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Gets the current value of the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialSlider_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::AudioMaterialSlider_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::AudioMaterialSlider_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function GetValue

// Begin Class UAudioMaterialSlider Function SetFineTuneSpeed
struct Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics
{
	struct AudioMaterialSlider_eventSetFineTuneSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Set the fine-tune speed of the slider. InValue is Clamped between 0.f - 1.f */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Set the fine-tune speed of the slider. InValue is Clamped between 0.f - 1.f" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialSlider_eventSetFineTuneSpeed_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "SetFineTuneSpeed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::AudioMaterialSlider_eventSetFineTuneSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::AudioMaterialSlider_eventSetFineTuneSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execSetFineTuneSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFineTuneSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function SetFineTuneSpeed

// Begin Class UAudioMaterialSlider Function SetLocked
struct Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics
{
	struct AudioMaterialSlider_eventSetLocked_Parms
	{
		bool bInLocked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Set the slider to be interactive or fixed */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Set the slider to be interactive or fixed" },
	};
#endif // WITH_METADATA
	static void NewProp_bInLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::NewProp_bInLocked_SetBit(void* Obj)
{
	((AudioMaterialSlider_eventSetLocked_Parms*)Obj)->bInLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::NewProp_bInLocked = { "bInLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialSlider_eventSetLocked_Parms), &Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::NewProp_bInLocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::NewProp_bInLocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "SetLocked", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::AudioMaterialSlider_eventSetLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::AudioMaterialSlider_eventSetLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_SetLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execSetLocked)
{
	P_GET_UBOOL(Z_Param_bInLocked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocked(Z_Param_bInLocked);
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function SetLocked

// Begin Class UAudioMaterialSlider Function SetMouseUsesStep
struct Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics
{
	struct AudioMaterialSlider_eventSetMouseUsesStep_Parms
	{
		bool bInUsesStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Sets the slider to use steps when turning On Mouse move */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Sets the slider to use steps when turning On Mouse move" },
	};
#endif // WITH_METADATA
	static void NewProp_bInUsesStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUsesStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::NewProp_bInUsesStep_SetBit(void* Obj)
{
	((AudioMaterialSlider_eventSetMouseUsesStep_Parms*)Obj)->bInUsesStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::NewProp_bInUsesStep = { "bInUsesStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialSlider_eventSetMouseUsesStep_Parms), &Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::NewProp_bInUsesStep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::NewProp_bInUsesStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "SetMouseUsesStep", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::AudioMaterialSlider_eventSetMouseUsesStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::AudioMaterialSlider_eventSetMouseUsesStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execSetMouseUsesStep)
{
	P_GET_UBOOL(Z_Param_bInUsesStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseUsesStep(Z_Param_bInUsesStep);
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function SetMouseUsesStep

// Begin Class UAudioMaterialSlider Function SetStepSize
struct Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics
{
	struct AudioMaterialSlider_eventSetStepSize_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Sets the amount to adjust the value when using steps*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Sets the amount to adjust the value when using steps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialSlider_eventSetStepSize_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "SetStepSize", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::AudioMaterialSlider_eventSetStepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::AudioMaterialSlider_eventSetStepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execSetStepSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStepSize(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function SetStepSize

// Begin Class UAudioMaterialSlider Function SetTuneSpeed
struct Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics
{
	struct AudioMaterialSlider_eventSetTuneSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Set the tune speed of the slider. InValue is Clamped between 0.f - 1.f */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Set the tune speed of the slider. InValue is Clamped between 0.f - 1.f" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialSlider_eventSetTuneSpeed_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "SetTuneSpeed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::AudioMaterialSlider_eventSetTuneSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::AudioMaterialSlider_eventSetTuneSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execSetTuneSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTuneSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function SetTuneSpeed

// Begin Class UAudioMaterialSlider Function SetValue
struct Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics
{
	struct AudioMaterialSlider_eventSetValue_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Slider" },
		{ "Comment", "/** Sets the current value of the slider. InValue is Clamped between 0.f - 1.f */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Sets the current value of the slider. InValue is Clamped between 0.f - 1.f" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialSlider_eventSetValue_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialSlider, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::AudioMaterialSlider_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::AudioMaterialSlider_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialSlider_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialSlider::execSetValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioMaterialSlider Function SetValue

// Begin Class UAudioMaterialSlider
void UAudioMaterialSlider::StaticRegisterNativesUAudioMaterialSlider()
{
	UClass* Class = UAudioMaterialSlider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFineTuneSpeed", &UAudioMaterialSlider::execGetFineTuneSpeed },
		{ "GetIsLocked", &UAudioMaterialSlider::execGetIsLocked },
		{ "GetMouseUsesStep", &UAudioMaterialSlider::execGetMouseUsesStep },
		{ "GetStepSize", &UAudioMaterialSlider::execGetStepSize },
		{ "GetTuneSpeed", &UAudioMaterialSlider::execGetTuneSpeed },
		{ "GetValue", &UAudioMaterialSlider::execGetValue },
		{ "SetFineTuneSpeed", &UAudioMaterialSlider::execSetFineTuneSpeed },
		{ "SetLocked", &UAudioMaterialSlider::execSetLocked },
		{ "SetMouseUsesStep", &UAudioMaterialSlider::execSetMouseUsesStep },
		{ "SetStepSize", &UAudioMaterialSlider::execSetStepSize },
		{ "SetTuneSpeed", &UAudioMaterialSlider::execSetTuneSpeed },
		{ "SetValue", &UAudioMaterialSlider::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMaterialSlider);
UClass* Z_Construct_UClass_UAudioMaterialSlider_NoRegister()
{
	return UAudioMaterialSlider::StaticClass();
}
struct Z_Construct_UClass_UAudioMaterialSlider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n * Slider is rendered by using material instead of texture.\n *\n * * No Children\n */" },
		{ "IncludePath", "AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\nSlider is rendered by using material instead of texture.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The slider's style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The slider's style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Called when the value is changed by slider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "BlueprintGetter", "GetValue" },
		{ "BlueprintSetter", "SetValue" },
		{ "Category", "Appearance" },
		{ "Comment", "/**Default Value of the slider*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Default Value of the slider" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**Orientation of the slider*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Orientation of the slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TuneSpeed_MetaData[] = {
		{ "BlueprintGetter", "GetTuneSpeed" },
		{ "BlueprintSetter", "SetTuneSpeed" },
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The tune speed of the slider On Mouse move */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "The tune speed of the slider On Mouse move" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FineTuneSpeed_MetaData[] = {
		{ "BlueprintGetter", "GetFineTuneSpeed" },
		{ "BlueprintSetter", "SetFineTuneSpeed" },
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The tune speed of the slider when fine-tuning the slider On Mouse move && Left-Shift pressed */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "The tune speed of the slider when fine-tuning the slider On Mouse move && Left-Shift pressed" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "BlueprintGetter", "GetIsLocked" },
		{ "BlueprintSetter", "SetLocked" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the slider is interactive or fixed. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Whether the slider is interactive or fixed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMouseUsesStep_MetaData[] = {
		{ "BlueprintGetter", "GetMouseUsesStep" },
		{ "BlueprintSetter", "SetMouseUsesStep" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets new value if mouse position is greater/less than half the step size. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "Sets new value if mouse position is greater/less than half the step size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "BlueprintGetter", "GetStepSize" },
		{ "BlueprintSetter", "SetStepSize" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount to adjust the value by, when using steps */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlider.h" },
		{ "ToolTip", "The amount to adjust the value by, when using steps" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
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
		{ &Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed, "GetFineTuneSpeed" }, // 56252909
		{ &Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked, "GetIsLocked" }, // 3439774026
		{ &Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep, "GetMouseUsesStep" }, // 356378089
		{ &Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize, "GetStepSize" }, // 1385242163
		{ &Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed, "GetTuneSpeed" }, // 2677429699
		{ &Z_Construct_UFunction_UAudioMaterialSlider_GetValue, "GetValue" }, // 2361361448
		{ &Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed, "SetFineTuneSpeed" }, // 2323110240
		{ &Z_Construct_UFunction_UAudioMaterialSlider_SetLocked, "SetLocked" }, // 2432553138
		{ &Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep, "SetMouseUsesStep" }, // 1075242396
		{ &Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize, "SetStepSize" }, // 992916757
		{ &Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed, "SetTuneSpeed" }, // 320540279
		{ &Z_Construct_UFunction_UAudioMaterialSlider_SetValue, "SetValue" }, // 2562879537
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMaterialSlider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialSlider, WidgetStyle), Z_Construct_UScriptStruct_FAudioMaterialSliderStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 1346619873
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialSlider, OnValueChanged), Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChanged_MetaData), NewProp_OnValueChanged_MetaData) }; // 878459428
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialSlider, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialSlider, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 349032367
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_TuneSpeed = { "TuneSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialSlider, TuneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TuneSpeed_MetaData), NewProp_TuneSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_FineTuneSpeed = { "FineTuneSpeed", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialSlider, FineTuneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FineTuneSpeed_MetaData), NewProp_FineTuneSpeed_MetaData) };
void Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((UAudioMaterialSlider*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioMaterialSlider), &Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
void Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bMouseUsesStep_SetBit(void* Obj)
{
	((UAudioMaterialSlider*)Obj)->bMouseUsesStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bMouseUsesStep = { "bMouseUsesStep", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioMaterialSlider), &Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bMouseUsesStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMouseUsesStep_MetaData), NewProp_bMouseUsesStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialSlider, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMaterialSlider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_OnValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_TuneSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_FineTuneSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bMouseUsesStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_StepSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialSlider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioMaterialSlider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialSlider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMaterialSlider_Statics::ClassParams = {
	&UAudioMaterialSlider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioMaterialSlider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialSlider_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialSlider_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMaterialSlider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioMaterialSlider()
{
	if (!Z_Registration_Info_UClass_UAudioMaterialSlider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMaterialSlider.OuterSingleton, Z_Construct_UClass_UAudioMaterialSlider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioMaterialSlider.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMaterialSlider>()
{
	return UAudioMaterialSlider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMaterialSlider);
UAudioMaterialSlider::~UAudioMaterialSlider() {}
// End Class UAudioMaterialSlider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMaterialSlider, UAudioMaterialSlider::StaticClass, TEXT("UAudioMaterialSlider"), &Z_Registration_Info_UClass_UAudioMaterialSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMaterialSlider), 3374763532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_2598575849(TEXT("/Script/AudioWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
