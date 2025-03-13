// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AdvancedWidgets/Public/Styling/ColorGradingSpinBoxStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorGradingSpinBoxStyle() {}

// Begin Cross Module References
ADVANCEDWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
UPackage* Z_Construct_UPackage__Script_AdvancedWidgets();
// End Cross Module References

// Begin ScriptStruct FColorGradingSpinBoxStyle
static_assert(std::is_polymorphic<FColorGradingSpinBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FColorGradingSpinBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColorGradingSpinBoxStyle;
class UScriptStruct* FColorGradingSpinBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColorGradingSpinBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColorGradingSpinBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle, (UObject*)Z_Construct_UPackage__Script_AdvancedWidgets(), TEXT("ColorGradingSpinBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ColorGradingSpinBoxStyle.OuterSingleton;
}
template<> ADVANCEDWIDGETS_API UScriptStruct* StaticStruct<FColorGradingSpinBoxStyle>()
{
	return FColorGradingSpinBoxStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a color grading spin box\n */" },
		{ "ModuleRelativePath", "Public/Styling/ColorGradingSpinBoxStyle.h" },
		{ "ToolTip", "Represents the appearance of a color grading spin box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the border of the spinbox */" },
		{ "ModuleRelativePath", "Public/Styling/ColorGradingSpinBoxStyle.h" },
		{ "ToolTip", "Brush used to draw the border of the spinbox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the border of the spinbox when it's in active use by the user */" },
		{ "ModuleRelativePath", "Public/Styling/ColorGradingSpinBoxStyle.h" },
		{ "ToolTip", "Brush used to draw the border of the spinbox when it's in active use by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the border of the spinbox when it's hovered over */" },
		{ "ModuleRelativePath", "Public/Styling/ColorGradingSpinBoxStyle.h" },
		{ "ToolTip", "Brush used to draw the border of the spinbox when it's hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the selector indicating the current value */" },
		{ "ModuleRelativePath", "Public/Styling/ColorGradingSpinBoxStyle.h" },
		{ "ToolTip", "Brush used to draw the selector indicating the current value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Width of the selector */" },
		{ "ModuleRelativePath", "Public/Styling/ColorGradingSpinBoxStyle.h" },
		{ "ToolTip", "Width of the selector" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveBorderBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBorderBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorBrush;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectorWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorGradingSpinBoxStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_BorderBrush = { "BorderBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorGradingSpinBoxStyle, BorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBrush_MetaData), NewProp_BorderBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_ActiveBorderBrush = { "ActiveBorderBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorGradingSpinBoxStyle, ActiveBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBorderBrush_MetaData), NewProp_ActiveBorderBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_HoveredBorderBrush = { "HoveredBorderBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorGradingSpinBoxStyle, HoveredBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBorderBrush_MetaData), NewProp_HoveredBorderBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_SelectorBrush = { "SelectorBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorGradingSpinBoxStyle, SelectorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorBrush_MetaData), NewProp_SelectorBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_SelectorWidth = { "SelectorWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorGradingSpinBoxStyle, SelectorWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorWidth_MetaData), NewProp_SelectorWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_BorderBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_ActiveBorderBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_HoveredBorderBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_SelectorBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewProp_SelectorWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ColorGradingSpinBoxStyle",
	Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::PropPointers),
	sizeof(FColorGradingSpinBoxStyle),
	alignof(FColorGradingSpinBoxStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ColorGradingSpinBoxStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColorGradingSpinBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ColorGradingSpinBoxStyle.InnerSingleton;
}
// End ScriptStruct FColorGradingSpinBoxStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Styling_ColorGradingSpinBoxStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FColorGradingSpinBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewStructOps, TEXT("ColorGradingSpinBoxStyle"), &Z_Registration_Info_UScriptStruct_ColorGradingSpinBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColorGradingSpinBoxStyle), 2111650710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Styling_ColorGradingSpinBoxStyle_h_2772226737(TEXT("/Script/AdvancedWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Styling_ColorGradingSpinBoxStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Styling_ColorGradingSpinBoxStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
