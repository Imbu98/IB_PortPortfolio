// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialButton.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialSlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMaterialButton() {}

// Begin Cross Module References
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialButton();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialButton_NoRegister();
AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialButtonStyle();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Delegate FOnButtonPressedChangedEvent
struct Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics
{
	struct _Script_AudioWidgets_eventOnButtonPressedChangedEvent_Parms
	{
		bool bIsPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialButton.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::NewProp_bIsPressed_SetBit(void* Obj)
{
	((_Script_AudioWidgets_eventOnButtonPressedChangedEvent_Parms*)Obj)->bIsPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AudioWidgets_eventOnButtonPressedChangedEvent_Parms), &Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::NewProp_bIsPressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::NewProp_bIsPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets, nullptr, "OnButtonPressedChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::_Script_AudioWidgets_eventOnButtonPressedChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::_Script_AudioWidgets_eventOnButtonPressedChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonPressedChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonPressedChangedEvent, bool bIsPressed)
{
	struct _Script_AudioWidgets_eventOnButtonPressedChangedEvent_Parms
	{
		bool bIsPressed;
	};
	_Script_AudioWidgets_eventOnButtonPressedChangedEvent_Parms Parms;
	Parms.bIsPressed=bIsPressed ? true : false;
	OnButtonPressedChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnButtonPressedChangedEvent

// Begin Class UAudioMaterialButton Function GetIsPressed
struct Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics
{
	struct AudioMaterialButton_eventGetIsPressed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Button" },
		{ "Comment", "/** Gets the current value of the slider.*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialButton.h" },
		{ "ToolTip", "Gets the current value of the slider." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AudioMaterialButton_eventGetIsPressed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialButton_eventGetIsPressed_Parms), &Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialButton, nullptr, "GetIsPressed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::AudioMaterialButton_eventGetIsPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::AudioMaterialButton_eventGetIsPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialButton::execGetIsPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsPressed();
	P_NATIVE_END;
}
// End Class UAudioMaterialButton Function GetIsPressed

// Begin Class UAudioMaterialButton Function SetIsPressed
struct Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics
{
	struct AudioMaterialButton_eventSetIsPressed_Parms
	{
		bool InPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Widgets| Audio Material Button" },
		{ "Comment", "/** Sets the current value of the slider. InValue is Clamped between 0.f - 1.f */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialButton.h" },
		{ "ToolTip", "Sets the current value of the slider. InValue is Clamped between 0.f - 1.f" },
	};
#endif // WITH_METADATA
	static void NewProp_InPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::NewProp_InPressed_SetBit(void* Obj)
{
	((AudioMaterialButton_eventSetIsPressed_Parms*)Obj)->InPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::NewProp_InPressed = { "InPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMaterialButton_eventSetIsPressed_Parms), &Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::NewProp_InPressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::NewProp_InPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMaterialButton, nullptr, "SetIsPressed", nullptr, nullptr, Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::AudioMaterialButton_eventSetIsPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::AudioMaterialButton_eventSetIsPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioMaterialButton::execSetIsPressed)
{
	P_GET_UBOOL(Z_Param_InPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsPressed(Z_Param_InPressed);
	P_NATIVE_END;
}
// End Class UAudioMaterialButton Function SetIsPressed

// Begin Class UAudioMaterialButton
void UAudioMaterialButton::StaticRegisterNativesUAudioMaterialButton()
{
	UClass* Class = UAudioMaterialButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIsPressed", &UAudioMaterialButton::execGetIsPressed },
		{ "SetIsPressed", &UAudioMaterialButton::execSetIsPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMaterialButton);
UClass* Z_Construct_UClass_UAudioMaterialButton_NoRegister()
{
	return UAudioMaterialButton::StaticClass();
}
struct Z_Construct_UClass_UAudioMaterialButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a button\n * Button is rendered by using material instead of texture.\n *\n * * No Children\n */" },
		{ "IncludePath", "AudioMaterialSlate/AudioMaterialButton.h" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialButton.h" },
		{ "ToolTip", "A simple widget that shows a button\nButton is rendered by using material instead of texture.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The button's style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialButton.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The button's style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonPressedChangedEvent_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by button. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialButton.h" },
		{ "ToolTip", "Called when the value is changed by button." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPressed_MetaData[] = {
		{ "BlueprintGetter", "GetIsPressed" },
		{ "BlueprintSetter", "SetIsPressed" },
		{ "Category", "Appearance" },
		{ "Comment", "/**Default Value of the button*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialButton.h" },
		{ "ToolTip", "Default Value of the button" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonPressedChangedEvent;
	static void NewProp_bIsPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed, "GetIsPressed" }, // 1114973395
		{ &Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed, "SetIsPressed" }, // 2163527341
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMaterialButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialButton_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialButton, WidgetStyle), Z_Construct_UScriptStruct_FAudioMaterialButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 3937556863
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioMaterialButton_Statics::NewProp_OnButtonPressedChangedEvent = { "OnButtonPressedChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialButton, OnButtonPressedChangedEvent), Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonPressedChangedEvent_MetaData), NewProp_OnButtonPressedChangedEvent_MetaData) }; // 2033178515
void Z_Construct_UClass_UAudioMaterialButton_Statics::NewProp_bIsPressed_SetBit(void* Obj)
{
	((UAudioMaterialButton*)Obj)->bIsPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioMaterialButton_Statics::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioMaterialButton), &Z_Construct_UClass_UAudioMaterialButton_Statics::NewProp_bIsPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPressed_MetaData), NewProp_bIsPressed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMaterialButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialButton_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialButton_Statics::NewProp_OnButtonPressedChangedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialButton_Statics::NewProp_bIsPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioMaterialButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMaterialButton_Statics::ClassParams = {
	&UAudioMaterialButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioMaterialButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMaterialButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioMaterialButton()
{
	if (!Z_Registration_Info_UClass_UAudioMaterialButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMaterialButton.OuterSingleton, Z_Construct_UClass_UAudioMaterialButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioMaterialButton.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMaterialButton>()
{
	return UAudioMaterialButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMaterialButton);
UAudioMaterialButton::~UAudioMaterialButton() {}
// End Class UAudioMaterialButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMaterialButton, UAudioMaterialButton::StaticClass, TEXT("UAudioMaterialButton"), &Z_Registration_Info_UClass_UAudioMaterialButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMaterialButton), 1355561068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_1353646250(TEXT("/Script/AudioWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
