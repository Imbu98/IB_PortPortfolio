// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialSlateTypes.h"
#include "AudioWidgets/Public/AudioWidgetsSlateTypes.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMaterialSlateTypes() {}

// Begin Cross Module References
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialButtonStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialKnobStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialMeterStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialSliderStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioTextBoxStyle();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin ScriptStruct FAudioMaterialWidgetStyle
static_assert(std::is_polymorphic<FAudioMaterialWidgetStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioMaterialWidgetStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMaterialWidgetStyle;
class UScriptStruct* FAudioMaterialWidgetStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialWidgetStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMaterialWidgetStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioMaterialWidgetStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialWidgetStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioMaterialWidgetStyle>()
{
	return FAudioMaterialWidgetStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Base for the appearance of an Audio Material Slates \n */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Base for the appearance of an Audio Material Slates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** Material used to render the Slate */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Material used to render the Slate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSize_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** Desired Draw size of the rendered material*/" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Desired Draw size of the rendered material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMaterialWidgetStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialWidgetStyle, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::NewProp_DesiredSize = { "DesiredSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialWidgetStyle, DesiredSize), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredSize_MetaData), NewProp_DesiredSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::NewProp_DesiredSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"AudioMaterialWidgetStyle",
	Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::PropPointers),
	sizeof(FAudioMaterialWidgetStyle),
	alignof(FAudioMaterialWidgetStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialWidgetStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMaterialWidgetStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialWidgetStyle.InnerSingleton;
}
// End ScriptStruct FAudioMaterialWidgetStyle

// Begin ScriptStruct FAudioMaterialButtonStyle
static_assert(std::is_polymorphic<FAudioMaterialButtonStyle>() == std::is_polymorphic<FAudioMaterialWidgetStyle>(), "USTRUCT FAudioMaterialButtonStyle cannot be polymorphic unless super FAudioMaterialWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMaterialButtonStyle;
class UScriptStruct* FAudioMaterialButtonStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialButtonStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMaterialButtonStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialButtonStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioMaterialButtonStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialButtonStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioMaterialButtonStyle>()
{
	return FAudioMaterialButtonStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Represents the appearance of an Audio Material Button \n */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Material Button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonMainColor_MetaData[] = {
		{ "Category", "Style | Button" },
		{ "Comment", "/** The button's Main color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The button's Main color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonMainColorTint_1_MetaData[] = {
		{ "Category", "Style | Button" },
		{ "Comment", "/** The button color's Tint value covering one half of the gradient. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The button color's Tint value covering one half of the gradient." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonMainColorTint_2_MetaData[] = {
		{ "Category", "Style | Button" },
		{ "Comment", "/** The button color's Tint value covering the other half of the gradient. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The button color's Tint value covering the other half of the gradient." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonAccentColor_MetaData[] = {
		{ "Category", "Style | Button" },
		{ "Comment", "/** The button's Accent color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The button's Accent color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonShadowColor_MetaData[] = {
		{ "Category", "Style | Button" },
		{ "Comment", "/** The button's Shadow color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The button's Shadow color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonUnpressedOutlineColor_MetaData[] = {
		{ "Category", "Style | Button" },
		{ "Comment", "/** The button's Outline color value when Unpressed. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The button's Outline color value when Unpressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPressedOutlineColor_MetaData[] = {
		{ "Category", "Style | Button" },
		{ "Comment", "/** The button's Outline color value when Pressed. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The button's Outline color value when Pressed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonMainColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonMainColorTint_1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonMainColorTint_2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonAccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonShadowColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonUnpressedOutlineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPressedOutlineColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMaterialButtonStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonMainColor = { "ButtonMainColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialButtonStyle, ButtonMainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonMainColor_MetaData), NewProp_ButtonMainColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonMainColorTint_1 = { "ButtonMainColorTint_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialButtonStyle, ButtonMainColorTint_1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonMainColorTint_1_MetaData), NewProp_ButtonMainColorTint_1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonMainColorTint_2 = { "ButtonMainColorTint_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialButtonStyle, ButtonMainColorTint_2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonMainColorTint_2_MetaData), NewProp_ButtonMainColorTint_2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonAccentColor = { "ButtonAccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialButtonStyle, ButtonAccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonAccentColor_MetaData), NewProp_ButtonAccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonShadowColor = { "ButtonShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialButtonStyle, ButtonShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonShadowColor_MetaData), NewProp_ButtonShadowColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonUnpressedOutlineColor = { "ButtonUnpressedOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialButtonStyle, ButtonUnpressedOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonUnpressedOutlineColor_MetaData), NewProp_ButtonUnpressedOutlineColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonPressedOutlineColor = { "ButtonPressedOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialButtonStyle, ButtonPressedOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonPressedOutlineColor_MetaData), NewProp_ButtonPressedOutlineColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonMainColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonMainColorTint_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonMainColorTint_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonAccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonUnpressedOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewProp_ButtonPressedOutlineColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle,
	&NewStructOps,
	"AudioMaterialButtonStyle",
	Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::PropPointers),
	sizeof(FAudioMaterialButtonStyle),
	alignof(FAudioMaterialButtonStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialButtonStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialButtonStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMaterialButtonStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialButtonStyle.InnerSingleton;
}
// End ScriptStruct FAudioMaterialButtonStyle

// Begin ScriptStruct FAudioMaterialSliderStyle
static_assert(std::is_polymorphic<FAudioMaterialSliderStyle>() == std::is_polymorphic<FAudioMaterialWidgetStyle>(), "USTRUCT FAudioMaterialSliderStyle cannot be polymorphic unless super FAudioMaterialWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMaterialSliderStyle;
class UScriptStruct* FAudioMaterialSliderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialSliderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMaterialSliderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialSliderStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioMaterialSliderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialSliderStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioMaterialSliderStyle>()
{
	return FAudioMaterialSliderStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Represents the appearance of an Audio Material Slider \n */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Material Slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBackgroundColor_MetaData[] = {
		{ "Category", "Style | Slider" },
		{ "Comment", "/** The slider Bar's Background color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The slider Bar's Background color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBackgroundAccentColor_MetaData[] = {
		{ "Category", "Style | Slider" },
		{ "Comment", "/** The slider Bar's Background Accent color value. Can be thought as the slider's Inner Shadow color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The slider Bar's Background Accent color value. Can be thought as the slider's Inner Shadow color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderValueMainColor_MetaData[] = {
		{ "Category", "Style | Slider" },
		{ "Comment", "/** The slider's Color value representing the slider's Output Value amount. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The slider's Color value representing the slider's Output Value amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderHandleMainColor_MetaData[] = {
		{ "Category", "Style | Slider" },
		{ "Comment", "/** The slider Handle's Main color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The slider Handle's Main color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderHandleOutlineColor_MetaData[] = {
		{ "Category", "Style | Slider" },
		{ "Comment", "/** The slider Handle's Outline color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The slider Handle's Outline color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBoxStyle_MetaData[] = {
		{ "Category", "Style | Label" },
		{ "Comment", "/** The style to use for the audio text box widget. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The style to use for the audio text box widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBackgroundAccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderValueMainColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderHandleMainColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderHandleOutlineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextBoxStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMaterialSliderStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderBackgroundColor = { "SliderBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialSliderStyle, SliderBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBackgroundColor_MetaData), NewProp_SliderBackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderBackgroundAccentColor = { "SliderBackgroundAccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialSliderStyle, SliderBackgroundAccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBackgroundAccentColor_MetaData), NewProp_SliderBackgroundAccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderValueMainColor = { "SliderValueMainColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialSliderStyle, SliderValueMainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderValueMainColor_MetaData), NewProp_SliderValueMainColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderHandleMainColor = { "SliderHandleMainColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialSliderStyle, SliderHandleMainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderHandleMainColor_MetaData), NewProp_SliderHandleMainColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderHandleOutlineColor = { "SliderHandleOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialSliderStyle, SliderHandleOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderHandleOutlineColor_MetaData), NewProp_SliderHandleOutlineColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_TextBoxStyle = { "TextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialSliderStyle, TextBoxStyle), Z_Construct_UScriptStruct_FAudioTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBoxStyle_MetaData), NewProp_TextBoxStyle_MetaData) }; // 3704101682
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderBackgroundAccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderValueMainColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderHandleMainColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_SliderHandleOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewProp_TextBoxStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle,
	&NewStructOps,
	"AudioMaterialSliderStyle",
	Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::PropPointers),
	sizeof(FAudioMaterialSliderStyle),
	alignof(FAudioMaterialSliderStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialSliderStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialSliderStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMaterialSliderStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialSliderStyle.InnerSingleton;
}
// End ScriptStruct FAudioMaterialSliderStyle

// Begin ScriptStruct FAudioMaterialKnobStyle
static_assert(std::is_polymorphic<FAudioMaterialKnobStyle>() == std::is_polymorphic<FAudioMaterialWidgetStyle>(), "USTRUCT FAudioMaterialKnobStyle cannot be polymorphic unless super FAudioMaterialWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMaterialKnobStyle;
class UScriptStruct* FAudioMaterialKnobStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialKnobStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMaterialKnobStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialKnobStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioMaterialKnobStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialKnobStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioMaterialKnobStyle>()
{
	return FAudioMaterialKnobStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Represents the appearance of an Audio Material Knob \n */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Material Knob" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobMainColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob's Main color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob's Main color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobAccentColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob's Accent color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob's Accent color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobShadowColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob's Shadow color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob's Shadow color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobSmoothBevelColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob's Smooth Bevel color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob's Smooth Bevel color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobIndicatorDotColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob's Indicator Dot color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob's Indicator Dot color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobEdgeFillColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/* The knob's Edge Fill color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob's Edge Fill color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobBarColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob Bar's Color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob Bar's Color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobBarShadowColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob Bar's Shadow color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob Bar's Shadow color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobBarFillMinColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob Bar's Fill color value representing the Starting section of the fill. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob Bar's Fill color value representing the Starting section of the fill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobBarFillMidColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob Bar's Fill color value representing the Middle section of the fill. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob Bar's Fill color value representing the Middle section of the fill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobBarFillMaxColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob Bar's Fill color value representing the Ending section of the fill. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob Bar's Fill color value representing the Ending section of the fill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobBarFillTintColor_MetaData[] = {
		{ "Category", "Style | Knob" },
		{ "Comment", "/** The knob Bar Fill color's Tint value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The knob Bar Fill color's Tint value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBoxStyle_MetaData[] = {
		{ "Category", "Style | Label" },
		{ "Comment", "/** The style to use for the audio text box widget. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The style to use for the audio text box widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobMainColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobAccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobShadowColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobSmoothBevelColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobIndicatorDotColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobEdgeFillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobBarColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobBarShadowColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobBarFillMinColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobBarFillMidColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobBarFillMaxColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnobBarFillTintColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextBoxStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMaterialKnobStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobMainColor = { "KnobMainColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobMainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobMainColor_MetaData), NewProp_KnobMainColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobAccentColor = { "KnobAccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobAccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobAccentColor_MetaData), NewProp_KnobAccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobShadowColor = { "KnobShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobShadowColor_MetaData), NewProp_KnobShadowColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobSmoothBevelColor = { "KnobSmoothBevelColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobSmoothBevelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobSmoothBevelColor_MetaData), NewProp_KnobSmoothBevelColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobIndicatorDotColor = { "KnobIndicatorDotColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobIndicatorDotColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobIndicatorDotColor_MetaData), NewProp_KnobIndicatorDotColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobEdgeFillColor = { "KnobEdgeFillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobEdgeFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobEdgeFillColor_MetaData), NewProp_KnobEdgeFillColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarColor = { "KnobBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobBarColor_MetaData), NewProp_KnobBarColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarShadowColor = { "KnobBarShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobBarShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobBarShadowColor_MetaData), NewProp_KnobBarShadowColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarFillMinColor = { "KnobBarFillMinColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobBarFillMinColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobBarFillMinColor_MetaData), NewProp_KnobBarFillMinColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarFillMidColor = { "KnobBarFillMidColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobBarFillMidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobBarFillMidColor_MetaData), NewProp_KnobBarFillMidColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarFillMaxColor = { "KnobBarFillMaxColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobBarFillMaxColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobBarFillMaxColor_MetaData), NewProp_KnobBarFillMaxColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarFillTintColor = { "KnobBarFillTintColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, KnobBarFillTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobBarFillTintColor_MetaData), NewProp_KnobBarFillTintColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_TextBoxStyle = { "TextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialKnobStyle, TextBoxStyle), Z_Construct_UScriptStruct_FAudioTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBoxStyle_MetaData), NewProp_TextBoxStyle_MetaData) }; // 3704101682
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobMainColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobAccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobSmoothBevelColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobIndicatorDotColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobEdgeFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarFillMinColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarFillMidColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarFillMaxColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_KnobBarFillTintColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewProp_TextBoxStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle,
	&NewStructOps,
	"AudioMaterialKnobStyle",
	Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::PropPointers),
	sizeof(FAudioMaterialKnobStyle),
	alignof(FAudioMaterialKnobStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialKnobStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialKnobStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMaterialKnobStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialKnobStyle.InnerSingleton;
}
// End ScriptStruct FAudioMaterialKnobStyle

// Begin ScriptStruct FAudioMaterialMeterStyle
static_assert(std::is_polymorphic<FAudioMaterialMeterStyle>() == std::is_polymorphic<FAudioMaterialWidgetStyle>(), "USTRUCT FAudioMaterialMeterStyle cannot be polymorphic unless super FAudioMaterialWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMaterialMeterStyle;
class UScriptStruct* FAudioMaterialMeterStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialMeterStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMaterialMeterStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialMeterStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioMaterialMeterStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialMeterStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioMaterialMeterStyle>()
{
	return FAudioMaterialMeterStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Represents the appearance of an Audio Material Meter\n */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Material Meter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterFillMinColor_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The meter's Fill color value representing the Starting section of the fill. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The meter's Fill color value representing the Starting section of the fill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterFillMidColor_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The meter's Fill color value representing the Middle section of the fill. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The meter's Fill color value representing the Middle section of the fill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterFillMaxColor_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The meter's Fill color value representing the Ending section of the fill. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The meter's Fill color value representing the Ending section of the fill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterFillBackgroundColor_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The meter's Background Fill color value. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The meter's Background Fill color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// How much padding to add around the meter\n" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "How much padding to add around the meter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueRangeDb_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// The minimum and maximum value to display in dB (values are clamped in this range)\n" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The minimum and maximum value to display in dB (values are clamped in this range)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowScale_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Whether or not to show the decibel scale alongside the meter\n" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Whether or not to show the decibel scale alongside the meter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleSide_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Which side to show the scale. If vertical, true means left side, false means right side. If horizontal, true means above, false means below.\n" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Which side to show the scale. If vertical, true means left side, false means right side. If horizontal, true means above, false means below." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleHashOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Offset for the hashes\n" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Offset for the hashes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleHashWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// The width of each hash mark\n" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The width of each hash mark" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleHashHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// The height of each hash mark\n" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "The height of each hash mark" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecibelsPerHash_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "3" },
		{ "Comment", "// How wide to draw the decibel scale, if it's enabled\n" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "How wide to draw the decibel scale, if it's enabled" },
		{ "UIMax", "10" },
		{ "UIMin", "3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font family and size to be used when displaying the meter scale. */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Font family and size to be used when displaying the meter scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeterFillMinColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeterFillMidColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeterFillMaxColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeterFillBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeterPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueRangeDb;
	static void NewProp_bShowScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowScale;
	static void NewProp_bScaleSide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleSide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleHashOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleHashWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleHashHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DecibelsPerHash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMaterialMeterStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterFillMinColor = { "MeterFillMinColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, MeterFillMinColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterFillMinColor_MetaData), NewProp_MeterFillMinColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterFillMidColor = { "MeterFillMidColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, MeterFillMidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterFillMidColor_MetaData), NewProp_MeterFillMidColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterFillMaxColor = { "MeterFillMaxColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, MeterFillMaxColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterFillMaxColor_MetaData), NewProp_MeterFillMaxColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterFillBackgroundColor = { "MeterFillBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, MeterFillBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterFillBackgroundColor_MetaData), NewProp_MeterFillBackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterPadding = { "MeterPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, MeterPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterPadding_MetaData), NewProp_MeterPadding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_ValueRangeDb = { "ValueRangeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, ValueRangeDb), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueRangeDb_MetaData), NewProp_ValueRangeDb_MetaData) };
void Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bShowScale_SetBit(void* Obj)
{
	((FAudioMaterialMeterStyle*)Obj)->bShowScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bShowScale = { "bShowScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAudioMaterialMeterStyle), &Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bShowScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowScale_MetaData), NewProp_bShowScale_MetaData) };
void Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bScaleSide_SetBit(void* Obj)
{
	((FAudioMaterialMeterStyle*)Obj)->bScaleSide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bScaleSide = { "bScaleSide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAudioMaterialMeterStyle), &Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bScaleSide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleSide_MetaData), NewProp_bScaleSide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_ScaleHashOffset = { "ScaleHashOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, ScaleHashOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleHashOffset_MetaData), NewProp_ScaleHashOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_ScaleHashWidth = { "ScaleHashWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, ScaleHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleHashWidth_MetaData), NewProp_ScaleHashWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_ScaleHashHeight = { "ScaleHashHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, ScaleHashHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleHashHeight_MetaData), NewProp_ScaleHashHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_DecibelsPerHash = { "DecibelsPerHash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, DecibelsPerHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecibelsPerHash_MetaData), NewProp_DecibelsPerHash_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialMeterStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) }; // 1633227880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterFillMinColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterFillMidColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterFillMaxColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterFillBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_MeterPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_ValueRangeDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bShowScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bScaleSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_ScaleHashOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_ScaleHashWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_ScaleHashHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_DecibelsPerHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_Font,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle,
	&NewStructOps,
	"AudioMaterialMeterStyle",
	Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::PropPointers),
	sizeof(FAudioMaterialMeterStyle),
	alignof(FAudioMaterialMeterStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialMeterStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialMeterStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMaterialMeterStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialMeterStyle.InnerSingleton;
}
// End ScriptStruct FAudioMaterialMeterStyle

// Begin ScriptStruct FAudioMaterialEnvelopeStyle
static_assert(std::is_polymorphic<FAudioMaterialEnvelopeStyle>() == std::is_polymorphic<FAudioMaterialWidgetStyle>(), "USTRUCT FAudioMaterialEnvelopeStyle cannot be polymorphic unless super FAudioMaterialWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeStyle;
class UScriptStruct* FAudioMaterialEnvelopeStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioMaterialEnvelopeStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioMaterialEnvelopeStyle>()
{
	return FAudioMaterialEnvelopeStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Represents the appearance of an Audio Material Envelope\n */" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Material Envelope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialSlateTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMaterialEnvelopeStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::NewProp_CurveColor = { "CurveColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeStyle, CurveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveColor_MetaData), NewProp_CurveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeStyle, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeStyle, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineColor_MetaData), NewProp_OutlineColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::NewProp_CurveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::NewProp_OutlineColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle,
	&NewStructOps,
	"AudioMaterialEnvelopeStyle",
	Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::PropPointers),
	sizeof(FAudioMaterialEnvelopeStyle),
	alignof(FAudioMaterialEnvelopeStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeStyle.InnerSingleton;
}
// End ScriptStruct FAudioMaterialEnvelopeStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlateTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioMaterialWidgetStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::NewStructOps, TEXT("AudioMaterialWidgetStyle"), &Z_Registration_Info_UScriptStruct_AudioMaterialWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMaterialWidgetStyle), 1618905615U) },
		{ FAudioMaterialButtonStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewStructOps, TEXT("AudioMaterialButtonStyle"), &Z_Registration_Info_UScriptStruct_AudioMaterialButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMaterialButtonStyle), 3937556863U) },
		{ FAudioMaterialSliderStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewStructOps, TEXT("AudioMaterialSliderStyle"), &Z_Registration_Info_UScriptStruct_AudioMaterialSliderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMaterialSliderStyle), 1346619873U) },
		{ FAudioMaterialKnobStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewStructOps, TEXT("AudioMaterialKnobStyle"), &Z_Registration_Info_UScriptStruct_AudioMaterialKnobStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMaterialKnobStyle), 4046162969U) },
		{ FAudioMaterialMeterStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewStructOps, TEXT("AudioMaterialMeterStyle"), &Z_Registration_Info_UScriptStruct_AudioMaterialMeterStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMaterialMeterStyle), 2650821703U) },
		{ FAudioMaterialEnvelopeStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::NewStructOps, TEXT("AudioMaterialEnvelopeStyle"), &Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMaterialEnvelopeStyle), 2972188298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlateTypes_h_3586642072(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlateTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlateTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
