// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioOscilloscopeUMG.h"
#include "AudioWidgets/Public/AudioOscilloscopePanelStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioOscilloscopeUMG() {}

// Begin Cross Module References
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioOscilloscope();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioOscilloscope_NoRegister();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit();
AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle();
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Delegate FGetOscilloscopeAudioSamples
struct Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics
{
	struct AudioOscilloscope_eventGetOscilloscopeAudioSamples_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioOscilloscope_eventGetOscilloscopeAudioSamples_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioOscilloscope, nullptr, "GetOscilloscopeAudioSamples__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::AudioOscilloscope_eventGetOscilloscopeAudioSamples_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::AudioOscilloscope_eventGetOscilloscopeAudioSamples_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
TArray<float> UAudioOscilloscope::FGetOscilloscopeAudioSamples_DelegateWrapper(const FScriptDelegate& GetOscilloscopeAudioSamples)
{
	struct AudioOscilloscope_eventGetOscilloscopeAudioSamples_Parms
	{
		TArray<float> ReturnValue;
	};
	AudioOscilloscope_eventGetOscilloscopeAudioSamples_Parms Parms;
	GetOscilloscopeAudioSamples.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetOscilloscopeAudioSamples

// Begin Class UAudioOscilloscope Function CanTriggeringBeSet
struct Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics
{
	struct AudioOscilloscope_eventCanTriggeringBeSet_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AudioOscilloscope_eventCanTriggeringBeSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioOscilloscope_eventCanTriggeringBeSet_Parms), &Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioOscilloscope, nullptr, "CanTriggeringBeSet", nullptr, nullptr, Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::AudioOscilloscope_eventCanTriggeringBeSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::AudioOscilloscope_eventCanTriggeringBeSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioOscilloscope::execCanTriggeringBeSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanTriggeringBeSet();
	P_NATIVE_END;
}
// End Class UAudioOscilloscope Function CanTriggeringBeSet

// Begin Class UAudioOscilloscope Function StartProcessing
struct Z_Construct_UFunction_UAudioOscilloscope_StartProcessing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Oscilloscope" },
		{ "Comment", "/** Starts the oscilloscope processing. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "Starts the oscilloscope processing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioOscilloscope_StartProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioOscilloscope, nullptr, "StartProcessing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioOscilloscope_StartProcessing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioOscilloscope_StartProcessing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioOscilloscope_StartProcessing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioOscilloscope_StartProcessing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioOscilloscope::execStartProcessing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartProcessing();
	P_NATIVE_END;
}
// End Class UAudioOscilloscope Function StartProcessing

// Begin Class UAudioOscilloscope Function StopProcessing
struct Z_Construct_UFunction_UAudioOscilloscope_StopProcessing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Oscilloscope" },
		{ "Comment", "/** Stops the oscilloscope processing. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "Stops the oscilloscope processing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioOscilloscope_StopProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioOscilloscope, nullptr, "StopProcessing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioOscilloscope_StopProcessing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioOscilloscope_StopProcessing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioOscilloscope_StopProcessing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioOscilloscope_StopProcessing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioOscilloscope::execStopProcessing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopProcessing();
	P_NATIVE_END;
}
// End Class UAudioOscilloscope Function StopProcessing

// Begin Class UAudioOscilloscope
void UAudioOscilloscope::StaticRegisterNativesUAudioOscilloscope()
{
	UClass* Class = UAudioOscilloscope::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanTriggeringBeSet", &UAudioOscilloscope::execCanTriggeringBeSet },
		{ "StartProcessing", &UAudioOscilloscope::execStartProcessing },
		{ "StopProcessing", &UAudioOscilloscope::execStopProcessing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioOscilloscope);
UClass* Z_Construct_UClass_UAudioOscilloscope_NoRegister()
{
	return UAudioOscilloscope::StaticClass();
}
struct Z_Construct_UClass_UAudioOscilloscope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An oscilloscope UMG widget.\n *\n * Supports displaying waveforms from incoming audio samples.\n * \n */" },
		{ "IncludePath", "AudioOscilloscopeUMG.h" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "An oscilloscope UMG widget.\n\nSupports displaying waveforms from incoming audio samples." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OscilloscopeStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The oscilloscope panel style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "The oscilloscope panel style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "Comment", "/** The audio bus used to obtain audio samples for the oscilloscope */" },
		{ "DesignerRebuild", "True" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "The audio bus used to obtain audio samples for the oscilloscope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeWindowMs_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "ClampMax", "5000.000000" },
		{ "ClampMin", "10.000000" },
		{ "Comment", "/** The max time window in milliseconds. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "The max time window in milliseconds." },
		{ "UIMax", "5000.000000" },
		{ "UIMin", "10.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWindowMs_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "ClampMin", "10.000000" },
		{ "Comment", "/** The time window in milliseconds. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "The time window in milliseconds." },
		{ "UIMin", "10.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPeriodMs_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "10" },
		{ "Comment", "/** The analysis period in milliseconds. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "The analysis period in milliseconds." },
		{ "UIMax", "1000" },
		{ "UIMin", "10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTimeGrid_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "Comment", "/** Show/Hide the time grid. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "Show/Hide the time grid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeGridLabelsUnit_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "Comment", "/** Define the time grid labels unit. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "Define the time grid labels unit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowAmplitudeGrid_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "Comment", "/** Show/Hide the amplitude grid. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "Show/Hide the amplitude grid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowAmplitudeLabels_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "Comment", "/** Show/Hide the amplitude labels. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "Show/Hide the amplitude labels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeGridLabelsUnit_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "Comment", "/** Define the amplitude grid labels unit. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "Define the amplitude grid labels unit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerMode_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "Comment", "/** The trigger detection behavior. */" },
		{ "EditCondition", "CanTriggeringBeSet()" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "The trigger detection behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerThreshold_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** The trigger threshold position in the Y axis. */" },
		{ "EditCondition", "CanTriggeringBeSet() && TriggerMode != EAudioOscilloscopeTriggerMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "The trigger threshold position in the Y axis." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelLayoutType_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "Comment", "/** Show/Hide advanced panel layout. */" },
		{ "DesignerRebuild", "True" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "Show/Hide advanced panel layout." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelToAnalyze_MetaData[] = {
		{ "Category", "Oscilloscope Values" },
		{ "Comment", "/** The channel to analyze with the oscilloscope (only available if PanelLayoutType is set to \"Advanced\"). */" },
		{ "EditCondition", "PanelLayoutType == EAudioPanelLayoutType::Advanced" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeUMG.h" },
		{ "ToolTip", "The channel to analyze with the oscilloscope (only available if PanelLayoutType is set to \"Advanced\")." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OscilloscopeStyle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeWindowMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeWindowMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalysisPeriodMs;
	static void NewProp_bShowTimeGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTimeGrid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeGridLabelsUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeGridLabelsUnit;
	static void NewProp_bShowAmplitudeGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAmplitudeGrid;
	static void NewProp_bShowAmplitudeLabels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAmplitudeLabels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmplitudeGridLabelsUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmplitudeGridLabelsUnit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PanelLayoutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PanelLayoutType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelToAnalyze;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet, "CanTriggeringBeSet" }, // 2511308445
		{ &Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature, "GetOscilloscopeAudioSamples__DelegateSignature" }, // 59527869
		{ &Z_Construct_UFunction_UAudioOscilloscope_StartProcessing, "StartProcessing" }, // 3516473191
		{ &Z_Construct_UFunction_UAudioOscilloscope_StopProcessing, "StopProcessing" }, // 3061705072
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioOscilloscope>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_OscilloscopeStyle = { "OscilloscopeStyle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, OscilloscopeStyle), Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OscilloscopeStyle_MetaData), NewProp_OscilloscopeStyle_MetaData) }; // 2182610292
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBus_MetaData), NewProp_AudioBus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_MaxTimeWindowMs = { "MaxTimeWindowMs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, MaxTimeWindowMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeWindowMs_MetaData), NewProp_MaxTimeWindowMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TimeWindowMs = { "TimeWindowMs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, TimeWindowMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWindowMs_MetaData), NewProp_TimeWindowMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_AnalysisPeriodMs = { "AnalysisPeriodMs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, AnalysisPeriodMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalysisPeriodMs_MetaData), NewProp_AnalysisPeriodMs_MetaData) };
void Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowTimeGrid_SetBit(void* Obj)
{
	((UAudioOscilloscope*)Obj)->bShowTimeGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowTimeGrid = { "bShowTimeGrid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioOscilloscope), &Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowTimeGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTimeGrid_MetaData), NewProp_bShowTimeGrid_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TimeGridLabelsUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TimeGridLabelsUnit = { "TimeGridLabelsUnit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, TimeGridLabelsUnit), Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeGridLabelsUnit_MetaData), NewProp_TimeGridLabelsUnit_MetaData) }; // 605374246
void Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeGrid_SetBit(void* Obj)
{
	((UAudioOscilloscope*)Obj)->bShowAmplitudeGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeGrid = { "bShowAmplitudeGrid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioOscilloscope), &Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowAmplitudeGrid_MetaData), NewProp_bShowAmplitudeGrid_MetaData) };
void Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeLabels_SetBit(void* Obj)
{
	((UAudioOscilloscope*)Obj)->bShowAmplitudeLabels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeLabels = { "bShowAmplitudeLabels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioOscilloscope), &Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeLabels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowAmplitudeLabels_MetaData), NewProp_bShowAmplitudeLabels_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_AmplitudeGridLabelsUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_AmplitudeGridLabelsUnit = { "AmplitudeGridLabelsUnit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, AmplitudeGridLabelsUnit), Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmplitudeGridLabelsUnit_MetaData), NewProp_AmplitudeGridLabelsUnit_MetaData) }; // 3468123400
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TriggerMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TriggerMode = { "TriggerMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, TriggerMode), Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerMode_MetaData), NewProp_TriggerMode_MetaData) }; // 3154934635
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TriggerThreshold = { "TriggerThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, TriggerThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerThreshold_MetaData), NewProp_TriggerThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_PanelLayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_PanelLayoutType = { "PanelLayoutType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, PanelLayoutType), Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelLayoutType_MetaData), NewProp_PanelLayoutType_MetaData) }; // 227856546
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_ChannelToAnalyze = { "ChannelToAnalyze", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioOscilloscope, ChannelToAnalyze), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelToAnalyze_MetaData), NewProp_ChannelToAnalyze_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioOscilloscope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_OscilloscopeStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_AudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_MaxTimeWindowMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TimeWindowMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_AnalysisPeriodMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowTimeGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TimeGridLabelsUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TimeGridLabelsUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_AmplitudeGridLabelsUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_AmplitudeGridLabelsUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TriggerMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TriggerMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_TriggerThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_PanelLayoutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_PanelLayoutType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_ChannelToAnalyze,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOscilloscope_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioOscilloscope_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOscilloscope_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioOscilloscope_Statics::ClassParams = {
	&UAudioOscilloscope::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioOscilloscope_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOscilloscope_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOscilloscope_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioOscilloscope_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioOscilloscope()
{
	if (!Z_Registration_Info_UClass_UAudioOscilloscope.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioOscilloscope.OuterSingleton, Z_Construct_UClass_UAudioOscilloscope_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioOscilloscope.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioOscilloscope>()
{
	return UAudioOscilloscope::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioOscilloscope);
UAudioOscilloscope::~UAudioOscilloscope() {}
// End Class UAudioOscilloscope

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioOscilloscope, UAudioOscilloscope::StaticClass, TEXT("UAudioOscilloscope"), &Z_Registration_Info_UClass_UAudioOscilloscope, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioOscilloscope), 422286637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_1845014340(TEXT("/Script/AudioWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
