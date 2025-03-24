// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialMeter.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialSlateTypes.h"
#include "AudioWidgets/Public/AudioMeterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMaterialMeter() {}

// Begin Cross Module References
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialMeter();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialMeter_NoRegister();
AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialMeterStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FMeterChannelInfo();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Delegate FGetMeterChannelInfo
struct Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics
{
	struct AudioMaterialMeter_eventGetMeterChannelInfo_Parms
	{
		TArray<FMeterChannelInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialMeter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeterChannelInfo, METADATA_PARAMS(0, nullptr) }; // 3797360045
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialMeter_eventGetMeterChannelInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3797360045
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialMeter, nullptr, "GetMeterChannelInfo__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::AudioMaterialMeter_eventGetMeterChannelInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::AudioMaterialMeter_eventGetMeterChannelInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
TArray<FMeterChannelInfo> UAudioMaterialMeter::FGetMeterChannelInfo_DelegateWrapper(const FScriptDelegate& GetMeterChannelInfo)
{
	struct AudioMaterialMeter_eventGetMeterChannelInfo_Parms
	{
		TArray<FMeterChannelInfo> ReturnValue;
	};
	AudioMaterialMeter_eventGetMeterChannelInfo_Parms Parms;
	GetMeterChannelInfo.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetMeterChannelInfo

// Begin Class UAudioMaterialMeter Function GetMeterChannelInfo
struct Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics
{
	struct AudioMaterialMeter_eventGetMeterChannelInfo_Parms
	{
		TArray<FMeterChannelInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Meter" },
		{ "Comment", "/** Gets the current linear values of the meter. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialMeter.h" },
		{ "ToolTip", "Gets the current linear values of the meter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeterChannelInfo, METADATA_PARAMS(0, nullptr) }; // 3797360045
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialMeter_eventGetMeterChannelInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3797360045
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialMeter, nullptr, "GetMeterChannelInfo", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::AudioMaterialMeter_eventGetMeterChannelInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::AudioMaterialMeter_eventGetMeterChannelInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialMeter::execGetMeterChannelInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMeterChannelInfo>*)Z_Param__Result=P_THIS->GetMeterChannelInfo();
	P_NATIVE_END;
}
// End Class UAudioMaterialMeter Function GetMeterChannelInfo

// Begin Class UAudioMaterialMeter Function SetMeterChannelInfo
struct Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics
{
	struct AudioMaterialMeter_eventSetMeterChannelInfo_Parms
	{
		TArray<FMeterChannelInfo> InMeterChannelInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Meter" },
		{ "Comment", "/** Sets the current meter values. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialMeter.h" },
		{ "ToolTip", "Sets the current meter values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMeterChannelInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMeterChannelInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InMeterChannelInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo_Inner = { "InMeterChannelInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeterChannelInfo, METADATA_PARAMS(0, nullptr) }; // 3797360045
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo = { "InMeterChannelInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMaterialMeter_eventSetMeterChannelInfo_Parms, InMeterChannelInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMeterChannelInfo_MetaData), NewProp_InMeterChannelInfo_MetaData) }; // 3797360045
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialMeter, nullptr, "SetMeterChannelInfo", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::AudioMaterialMeter_eventSetMeterChannelInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::AudioMaterialMeter_eventSetMeterChannelInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialMeter::execSetMeterChannelInfo)
{
	P_GET_TARRAY_REF(FMeterChannelInfo,Z_Param_Out_InMeterChannelInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeterChannelInfo(Z_Param_Out_InMeterChannelInfo);
	P_NATIVE_END;
}
// End Class UAudioMaterialMeter Function SetMeterChannelInfo

// Begin Class UAudioMaterialMeter
void UAudioMaterialMeter::StaticRegisterNativesUAudioMaterialMeter()
{
	UClass* Class = UAudioMaterialMeter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMeterChannelInfo", &UAudioMaterialMeter::execGetMeterChannelInfo },
		{ "SetMeterChannelInfo", &UAudioMaterialMeter::execSetMeterChannelInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMaterialMeter);
UClass* Z_Construct_UClass_UAudioMaterialMeter_NoRegister()
{
	return UAudioMaterialMeter::StaticClass();
}
struct Z_Construct_UClass_UAudioMaterialMeter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Meter is rendered by using material instead of texture.\n *\n * * No Children\n */" },
		{ "IncludePath", "AudioMaterialSlate/AudioMaterialMeter.h" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialMeter.h" },
		{ "ToolTip", "Meter is rendered by using material instead of texture.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The meter's style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialMeter.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The meter's style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The Meter's orientation. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialMeter.h" },
		{ "ToolTip", "The Meter's orientation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterChannelInfoDelegate_MetaData[] = {
		{ "Comment", "///** A bindable delegate to allow logic to drive the value of the meter */\n" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialMeter.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the meter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterChannelInfo_MetaData[] = {
		{ "BlueprintGetter", "GetMeterChannelInfo" },
		{ "BlueprintSetter", "SetMeterChannelInfo" },
		{ "Category", "MeterValues" },
		{ "Comment", "/** The current meter value to display. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialMeter.h" },
		{ "ToolTip", "The current meter value to display." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_MeterChannelInfoDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeterChannelInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeterChannelInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo, "GetMeterChannelInfo" }, // 444166327
		{ &Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature, "GetMeterChannelInfo__DelegateSignature" }, // 3633353977
		{ &Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo, "SetMeterChannelInfo" }, // 1142967107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMaterialMeter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialMeter, WidgetStyle), Z_Construct_UScriptStruct_FAudioMaterialMeterStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 2650821703
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialMeter, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 349032367
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_MeterChannelInfoDelegate = { "MeterChannelInfoDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialMeter, MeterChannelInfoDelegate), Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterChannelInfoDelegate_MetaData), NewProp_MeterChannelInfoDelegate_MetaData) }; // 3633353977
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_MeterChannelInfo_Inner = { "MeterChannelInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeterChannelInfo, METADATA_PARAMS(0, nullptr) }; // 3797360045
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_MeterChannelInfo = { "MeterChannelInfo", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialMeter, MeterChannelInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterChannelInfo_MetaData), NewProp_MeterChannelInfo_MetaData) }; // 3797360045
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMaterialMeter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_MeterChannelInfoDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_MeterChannelInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialMeter_Statics::NewProp_MeterChannelInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialMeter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioMaterialMeter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialMeter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMaterialMeter_Statics::ClassParams = {
	&UAudioMaterialMeter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioMaterialMeter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialMeter_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialMeter_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMaterialMeter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioMaterialMeter()
{
	if (!Z_Registration_Info_UClass_UAudioMaterialMeter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMaterialMeter.OuterSingleton, Z_Construct_UClass_UAudioMaterialMeter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioMaterialMeter.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMaterialMeter>()
{
	return UAudioMaterialMeter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMaterialMeter);
UAudioMaterialMeter::~UAudioMaterialMeter() {}
// End Class UAudioMaterialMeter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMaterialMeter, UAudioMaterialMeter::StaticClass, TEXT("UAudioMaterialMeter"), &Z_Registration_Info_UClass_UAudioMaterialMeter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMaterialMeter), 136845920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_145809623(TEXT("/Script/AudioWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
