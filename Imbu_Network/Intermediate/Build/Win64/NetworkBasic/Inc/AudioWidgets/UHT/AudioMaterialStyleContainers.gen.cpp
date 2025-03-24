// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialStyleContainers.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialSlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMaterialStyleContainers() {}

// Begin Cross Module References
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialButtonWidgetStyle();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_NoRegister();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialKnobWidgetStyle();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_NoRegister();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialMeterWidgetStyle();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_NoRegister();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialSliderWidgetStyle();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_NoRegister();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialButtonStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialKnobStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialMeterStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialSliderStyle();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Class UAudioMaterialKnobWidgetStyle
void UAudioMaterialKnobWidgetStyle::StaticRegisterNativesUAudioMaterialKnobWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMaterialKnobWidgetStyle);
UClass* Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_NoRegister()
{
	return UAudioMaterialKnobWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AudioMaterialSlate/AudioMaterialStyleContainers.h" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialStyleContainers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the AudioMaterialKnob appearance. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialStyleContainers.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the AudioMaterialKnob appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMaterialKnobWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::NewProp_KnobStyle = { "KnobStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialKnobWidgetStyle, KnobStyle), Z_Construct_UScriptStruct_FAudioMaterialKnobStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobStyle_MetaData), NewProp_KnobStyle_MetaData) }; // 4046162969
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::NewProp_KnobStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::ClassParams = {
	&UAudioMaterialKnobWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioMaterialKnobWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.OuterSingleton, Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMaterialKnobWidgetStyle>()
{
	return UAudioMaterialKnobWidgetStyle::StaticClass();
}
UAudioMaterialKnobWidgetStyle::UAudioMaterialKnobWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMaterialKnobWidgetStyle);
UAudioMaterialKnobWidgetStyle::~UAudioMaterialKnobWidgetStyle() {}
// End Class UAudioMaterialKnobWidgetStyle

// Begin Class UAudioMaterialMeterWidgetStyle
void UAudioMaterialMeterWidgetStyle::StaticRegisterNativesUAudioMaterialMeterWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMaterialMeterWidgetStyle);
UClass* Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_NoRegister()
{
	return UAudioMaterialMeterWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AudioMaterialSlate/AudioMaterialStyleContainers.h" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialStyleContainers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the AudioMaterialMeter appearance. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialStyleContainers.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the AudioMaterialMeter appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeterStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMaterialMeterWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::NewProp_MeterStyle = { "MeterStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialMeterWidgetStyle, MeterStyle), Z_Construct_UScriptStruct_FAudioMaterialMeterStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterStyle_MetaData), NewProp_MeterStyle_MetaData) }; // 2650821703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::NewProp_MeterStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::ClassParams = {
	&UAudioMaterialMeterWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioMaterialMeterWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.OuterSingleton, Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMaterialMeterWidgetStyle>()
{
	return UAudioMaterialMeterWidgetStyle::StaticClass();
}
UAudioMaterialMeterWidgetStyle::UAudioMaterialMeterWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMaterialMeterWidgetStyle);
UAudioMaterialMeterWidgetStyle::~UAudioMaterialMeterWidgetStyle() {}
// End Class UAudioMaterialMeterWidgetStyle

// Begin Class UAudioMaterialButtonWidgetStyle
void UAudioMaterialButtonWidgetStyle::StaticRegisterNativesUAudioMaterialButtonWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMaterialButtonWidgetStyle);
UClass* Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_NoRegister()
{
	return UAudioMaterialButtonWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AudioMaterialSlate/AudioMaterialStyleContainers.h" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialStyleContainers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the AudioMaterialButton appearance. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialStyleContainers.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the AudioMaterialButton appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMaterialButtonWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialButtonWidgetStyle, ButtonStyle), Z_Construct_UScriptStruct_FAudioMaterialButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyle_MetaData), NewProp_ButtonStyle_MetaData) }; // 3937556863
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::NewProp_ButtonStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::ClassParams = {
	&UAudioMaterialButtonWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioMaterialButtonWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.OuterSingleton, Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMaterialButtonWidgetStyle>()
{
	return UAudioMaterialButtonWidgetStyle::StaticClass();
}
UAudioMaterialButtonWidgetStyle::UAudioMaterialButtonWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMaterialButtonWidgetStyle);
UAudioMaterialButtonWidgetStyle::~UAudioMaterialButtonWidgetStyle() {}
// End Class UAudioMaterialButtonWidgetStyle

// Begin Class UAudioMaterialSliderWidgetStyle
void UAudioMaterialSliderWidgetStyle::StaticRegisterNativesUAudioMaterialSliderWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMaterialSliderWidgetStyle);
UClass* Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_NoRegister()
{
	return UAudioMaterialSliderWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AudioMaterialSlate/AudioMaterialStyleContainers.h" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialStyleContainers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the AudioMaterialSlider appearance. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialStyleContainers.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the AudioMaterialSlider appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMaterialSliderWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::NewProp_SliderStyle = { "SliderStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialSliderWidgetStyle, SliderStyle), Z_Construct_UScriptStruct_FAudioMaterialSliderStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderStyle_MetaData), NewProp_SliderStyle_MetaData) }; // 1346619873
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::NewProp_SliderStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::ClassParams = {
	&UAudioMaterialSliderWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioMaterialSliderWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.OuterSingleton, Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMaterialSliderWidgetStyle>()
{
	return UAudioMaterialSliderWidgetStyle::StaticClass();
}
UAudioMaterialSliderWidgetStyle::UAudioMaterialSliderWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMaterialSliderWidgetStyle);
UAudioMaterialSliderWidgetStyle::~UAudioMaterialSliderWidgetStyle() {}
// End Class UAudioMaterialSliderWidgetStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialStyleContainers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMaterialKnobWidgetStyle, UAudioMaterialKnobWidgetStyle::StaticClass, TEXT("UAudioMaterialKnobWidgetStyle"), &Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMaterialKnobWidgetStyle), 623881541U) },
		{ Z_Construct_UClass_UAudioMaterialMeterWidgetStyle, UAudioMaterialMeterWidgetStyle::StaticClass, TEXT("UAudioMaterialMeterWidgetStyle"), &Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMaterialMeterWidgetStyle), 34138278U) },
		{ Z_Construct_UClass_UAudioMaterialButtonWidgetStyle, UAudioMaterialButtonWidgetStyle::StaticClass, TEXT("UAudioMaterialButtonWidgetStyle"), &Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMaterialButtonWidgetStyle), 3404991009U) },
		{ Z_Construct_UClass_UAudioMaterialSliderWidgetStyle, UAudioMaterialSliderWidgetStyle::StaticClass, TEXT("UAudioMaterialSliderWidgetStyle"), &Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMaterialSliderWidgetStyle), 4121887680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialStyleContainers_h_2799327301(TEXT("/Script/AudioWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialStyleContainers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialStyleContainers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
