// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialEnvelope.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialSlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMaterialEnvelope() {}

// Begin Cross Module References
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialEnvelope();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialEnvelope_NoRegister();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Class UAudioMaterialEnvelope
void UAudioMaterialEnvelope::StaticRegisterNativesUAudioMaterialEnvelope()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMaterialEnvelope);
UClass* Z_Construct_UClass_UAudioMaterialEnvelope_NoRegister()
{
	return UAudioMaterialEnvelope::StaticClass();
}
struct Z_Construct_UClass_UAudioMaterialEnvelope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a envelope curve Depending on given AudioMaterialEnvelopeSetings\n * Rendered by using material instead of texture.\n *\n * * No Children\n */" },
		{ "IncludePath", "AudioMaterialSlate/AudioMaterialEnvelope.h" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelope.h" },
		{ "ToolTip", "A simple widget that shows a envelope curve Depending on given AudioMaterialEnvelopeSetings\nRendered by using material instead of texture.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The Envelope's style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelope.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Envelope's style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeSettings_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**Envelope settings*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelope.h" },
		{ "ToolTip", "Envelope settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvelopeSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMaterialEnvelope>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialEnvelope_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialEnvelope, WidgetStyle), Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 2972188298
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMaterialEnvelope_Statics::NewProp_EnvelopeSettings = { "EnvelopeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMaterialEnvelope, EnvelopeSettings), Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeSettings_MetaData), NewProp_EnvelopeSettings_MetaData) }; // 4140642188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMaterialEnvelope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialEnvelope_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMaterialEnvelope_Statics::NewProp_EnvelopeSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialEnvelope_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioMaterialEnvelope_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialEnvelope_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMaterialEnvelope_Statics::ClassParams = {
	&UAudioMaterialEnvelope::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioMaterialEnvelope_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialEnvelope_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMaterialEnvelope_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMaterialEnvelope_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioMaterialEnvelope()
{
	if (!Z_Registration_Info_UClass_UAudioMaterialEnvelope.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMaterialEnvelope.OuterSingleton, Z_Construct_UClass_UAudioMaterialEnvelope_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioMaterialEnvelope.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMaterialEnvelope>()
{
	return UAudioMaterialEnvelope::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMaterialEnvelope);
UAudioMaterialEnvelope::~UAudioMaterialEnvelope() {}
// End Class UAudioMaterialEnvelope

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMaterialEnvelope, UAudioMaterialEnvelope::StaticClass, TEXT("UAudioMaterialEnvelope"), &Z_Registration_Info_UClass_UAudioMaterialEnvelope, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMaterialEnvelope), 2805539105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_3342669526(TEXT("/Script/AudioWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
