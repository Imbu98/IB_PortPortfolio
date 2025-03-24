// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/FontFace.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontFace() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UFontFace();
ENGINE_API UClass* Z_Construct_UClass_UFontFace_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides();
SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontHinting();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLayoutMethod();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLoadingPolicy();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontRasterizationMode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FFontFacePlatformRasterizationOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FontFacePlatformRasterizationOverrides;
class UScriptStruct* FFontFacePlatformRasterizationOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FontFacePlatformRasterizationOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FontFacePlatformRasterizationOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FontFacePlatformRasterizationOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_FontFacePlatformRasterizationOverrides.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFontFacePlatformRasterizationOverrides>()
{
	return FFontFacePlatformRasterizationOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Remapping of rasterization modes */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Remapping of rasterization modes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MsdfOverride_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "Comment", "/** Rasterization mode to be used instead of Sharp (Multi-Channel SDF) */" },
		{ "DisplayName", "Override for Sharp" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Rasterization mode to be used instead of Sharp (Multi-Channel SDF)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SdfOverride_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "Comment", "/** Rasterization mode to be used instead of Smooth (Plain SDF) */" },
		{ "DisplayName", "Override for Smooth" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Rasterization mode to be used instead of Smooth (Plain SDF)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SdfApproximationOverride_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "Comment", "/** Rasterization mode to be used instead of Fast (Approximate SDF) */" },
		{ "DisplayName", "Override for Fast" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Rasterization mode to be used instead of Fast (Approximate SDF)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MsdfOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MsdfOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SdfOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SdfOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SdfApproximationOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SdfApproximationOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontFacePlatformRasterizationOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_MsdfOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_MsdfOverride = { "MsdfOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontFacePlatformRasterizationOverrides, MsdfOverride), Z_Construct_UEnum_SlateCore_EFontRasterizationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MsdfOverride_MetaData), NewProp_MsdfOverride_MetaData) }; // 2700192895
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_SdfOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_SdfOverride = { "SdfOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontFacePlatformRasterizationOverrides, SdfOverride), Z_Construct_UEnum_SlateCore_EFontRasterizationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SdfOverride_MetaData), NewProp_SdfOverride_MetaData) }; // 2700192895
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_SdfApproximationOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_SdfApproximationOverride = { "SdfApproximationOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontFacePlatformRasterizationOverrides, SdfApproximationOverride), Z_Construct_UEnum_SlateCore_EFontRasterizationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SdfApproximationOverride_MetaData), NewProp_SdfApproximationOverride_MetaData) }; // 2700192895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_MsdfOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_MsdfOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_SdfOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_SdfOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_SdfApproximationOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewProp_SdfApproximationOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"FontFacePlatformRasterizationOverrides",
	Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::PropPointers),
	sizeof(FFontFacePlatformRasterizationOverrides),
	alignof(FFontFacePlatformRasterizationOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_FontFacePlatformRasterizationOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FontFacePlatformRasterizationOverrides.InnerSingleton, Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FontFacePlatformRasterizationOverrides.InnerSingleton;
}
// End ScriptStruct FFontFacePlatformRasterizationOverrides

// Begin Class UFontFace
void UFontFace::StaticRegisterNativesUFontFace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontFace);
UClass* Z_Construct_UClass_UFontFace_NoRegister()
{
	return UFontFace::StaticClass();
}
struct Z_Construct_UClass_UFontFace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FontFace" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A font face asset contains the raw payload data for a source TTF/OTF file as used by FreeType.\n * During cook this asset type generates a \".ufont\" file containing the raw payload data (unless loaded \"Inline\").\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/FontFace.h" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "A font face asset contains the raw payload data for a source TTF/OTF file as used by FreeType.\nDuring cook this asset type generates a \".ufont\" file containing the raw payload data (unless loaded \"Inline\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilename_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** The filename of the font face we were created from. This may not always exist on disk, as we may have previously loaded and cached the font data inside this asset. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The filename of the font face we were created from. This may not always exist on disk, as we may have previously loaded and cached the font data inside this asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hinting_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** The hinting algorithm to use with the font face. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The hinting algorithm to use with the font face." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Enum controlling how this font face should be loaded at runtime. See the enum for more explanations of the options. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Enum controlling how this font face should be loaded at runtime. See the enum for more explanations of the options." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutMethod_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Which method should we use when laying out the font? Try changing this if you notice clipping or height issues with your font. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Which method should we use when laying out the font? Try changing this if you notice clipping or height issues with your font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AscendOverriddenValue_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ClampMax", "100" },
		{ "ClampMin", "-100" },
		{ "Comment", "/** The typographic ascender of the face, expressed in font units. */" },
		{ "EditCondition", "bIsAscendOverridden" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The typographic ascender of the face, expressed in font units." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAscendOverridden_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Activate this option to use the specified ascend value instead of the value from the font. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Activate this option to use the specified ascend value instead of the value from the font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescendOverriddenValue_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ClampMax", "100" },
		{ "ClampMin", "-100" },
		{ "Comment", "/** The typographic ascender of the face, expressed in font units. */" },
		{ "EditCondition", "bIsDescendOverridden" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The typographic ascender of the face, expressed in font units." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDescendOverridden_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Activate this option to use the specified descend value instead of the value from the font. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Activate this option to use the specified descend value instead of the value from the font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrikeBrushHeightPercentage_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The percentage of the font height to draw the strike brush at.\n\x09 * 0% is the bottom, 100% is the top.\n\x09 */" },
		{ "ForceUnits", "%" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The percentage of the font height to draw the strike brush at.\n0% is the bottom, 100% is the top." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontFaceData_MetaData[] = {
		{ "Comment", "/** The data associated with the font face. This should always be filled in providing the source filename is valid. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The data associated with the font face. This should always be filled in providing the source filename is valid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubFaces_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Transient cache of the sub-faces available within this face */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Transient cache of the sub-faces available within this face" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDistanceFieldRendering_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "Comment", "/** Enables distance field rendering for this face (otherwise only Bitmap rendering is used) */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Enables distance field rendering for this face (otherwise only Bitmap rendering is used)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceFieldPpem_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "ClampMax", "256" },
		{ "ClampMin", "8" },
		{ "Comment", "/** Single-channel distance field px/em resolution \"low\" quality value */" },
		{ "DisplayName", "Low Quality" },
		{ "EditCondition", "bEnableDistanceFieldRendering" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Single-channel distance field px/em resolution \"low\" quality value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidDistanceFieldPpem_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "ClampMax", "256" },
		{ "ClampMin", "8" },
		{ "Comment", "/** Single-channel distance field px/em resolution \"medium\" quality value */" },
		{ "DisplayName", "Medium Quality" },
		{ "EditCondition", "bEnableDistanceFieldRendering" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Single-channel distance field px/em resolution \"medium\" quality value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFieldPpem_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "ClampMax", "256" },
		{ "ClampMin", "8" },
		{ "Comment", "/** Single-channel distance field px/em resolution \"high\" quality value */" },
		{ "DisplayName", "High Quality" },
		{ "EditCondition", "bEnableDistanceFieldRendering" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Single-channel distance field px/em resolution \"high\" quality value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMultiDistanceFieldPpem_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "ClampMax", "256" },
		{ "ClampMin", "8" },
		{ "Comment", "/** Multi-channel distance field px/em resolution \"low\" quality value */" },
		{ "DisplayName", "Low Quality" },
		{ "EditCondition", "bEnableDistanceFieldRendering" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Multi-channel distance field px/em resolution \"low\" quality value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidMultiDistanceFieldPpem_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "ClampMax", "256" },
		{ "ClampMin", "8" },
		{ "Comment", "/** Multi-channel distance field px/em resolution \"medium\" quality value */" },
		{ "DisplayName", "Medium Quality" },
		{ "EditCondition", "bEnableDistanceFieldRendering" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Multi-channel distance field px/em resolution \"medium\" quality value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMultiDistanceFieldPpem_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "ClampMax", "256" },
		{ "ClampMin", "8" },
		{ "Comment", "/** Multi-channel distance field px/em resolution \"high\" quality value */" },
		{ "DisplayName", "High Quality" },
		{ "EditCondition", "bEnableDistanceFieldRendering" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Multi-channel distance field px/em resolution \"high\" quality value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformRasterizationModeOverrides_MetaData[] = {
		{ "Category", "DistanceFieldMode" },
		{ "ClampMax", "256" },
		{ "ClampMin", "8" },
		{ "Comment", "/** If set, allows to override distance field modes set in device profiles */" },
		{ "DisplayName", "Override Platform Rasterization Mode" },
		{ "EditCondition", "bEnableDistanceFieldRendering" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "If set, allows to override distance field modes set in device profiles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilename;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hinting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hinting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AscendOverriddenValue;
	static void NewProp_bIsAscendOverridden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAscendOverridden;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DescendOverriddenValue;
	static void NewProp_bIsDescendOverridden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDescendOverridden;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrikeBrushHeightPercentage;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FontFaceData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FontFaceData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SubFaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubFaces;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bEnableDistanceFieldRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDistanceFieldRendering;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDistanceFieldPpem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MidDistanceFieldPpem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDistanceFieldPpem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinMultiDistanceFieldPpem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MidMultiDistanceFieldPpem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMultiDistanceFieldPpem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformRasterizationModeOverrides_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_PlatformRasterizationModeOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontFace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_SourceFilename = { "SourceFilename", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, SourceFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilename_MetaData), NewProp_SourceFilename_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting = { "Hinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, Hinting), Z_Construct_UEnum_SlateCore_EFontHinting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hinting_MetaData), NewProp_Hinting_MetaData) }; // 209010877
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, LoadingPolicy), Z_Construct_UEnum_SlateCore_EFontLoadingPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingPolicy_MetaData), NewProp_LoadingPolicy_MetaData) }; // 2167930431
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod = { "LayoutMethod", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, LayoutMethod), Z_Construct_UEnum_SlateCore_EFontLayoutMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutMethod_MetaData), NewProp_LayoutMethod_MetaData) }; // 1950032659
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_AscendOverriddenValue = { "AscendOverriddenValue", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, AscendOverriddenValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AscendOverriddenValue_MetaData), NewProp_AscendOverriddenValue_MetaData) };
void Z_Construct_UClass_UFontFace_Statics::NewProp_bIsAscendOverridden_SetBit(void* Obj)
{
	((UFontFace*)Obj)->bIsAscendOverridden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_bIsAscendOverridden = { "bIsAscendOverridden", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFontFace), &Z_Construct_UClass_UFontFace_Statics::NewProp_bIsAscendOverridden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAscendOverridden_MetaData), NewProp_bIsAscendOverridden_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_DescendOverriddenValue = { "DescendOverriddenValue", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, DescendOverriddenValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescendOverriddenValue_MetaData), NewProp_DescendOverriddenValue_MetaData) };
void Z_Construct_UClass_UFontFace_Statics::NewProp_bIsDescendOverridden_SetBit(void* Obj)
{
	((UFontFace*)Obj)->bIsDescendOverridden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_bIsDescendOverridden = { "bIsDescendOverridden", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFontFace), &Z_Construct_UClass_UFontFace_Statics::NewProp_bIsDescendOverridden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDescendOverridden_MetaData), NewProp_bIsDescendOverridden_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_StrikeBrushHeightPercentage = { "StrikeBrushHeightPercentage", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, StrikeBrushHeightPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrikeBrushHeightPercentage_MetaData), NewProp_StrikeBrushHeightPercentage_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData_Inner = { "FontFaceData", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData = { "FontFaceData", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, FontFaceData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontFaceData_MetaData), NewProp_FontFaceData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces_Inner = { "SubFaces", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces = { "SubFaces", nullptr, (EPropertyFlags)0x0010040800022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, SubFaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubFaces_MetaData), NewProp_SubFaces_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UFontFace_Statics::NewProp_bEnableDistanceFieldRendering_SetBit(void* Obj)
{
	((UFontFace*)Obj)->bEnableDistanceFieldRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_bEnableDistanceFieldRendering = { "bEnableDistanceFieldRendering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFontFace), &Z_Construct_UClass_UFontFace_Statics::NewProp_bEnableDistanceFieldRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDistanceFieldRendering_MetaData), NewProp_bEnableDistanceFieldRendering_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_MinDistanceFieldPpem = { "MinDistanceFieldPpem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, MinDistanceFieldPpem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceFieldPpem_MetaData), NewProp_MinDistanceFieldPpem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_MidDistanceFieldPpem = { "MidDistanceFieldPpem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, MidDistanceFieldPpem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidDistanceFieldPpem_MetaData), NewProp_MidDistanceFieldPpem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_MaxDistanceFieldPpem = { "MaxDistanceFieldPpem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, MaxDistanceFieldPpem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceFieldPpem_MetaData), NewProp_MaxDistanceFieldPpem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_MinMultiDistanceFieldPpem = { "MinMultiDistanceFieldPpem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, MinMultiDistanceFieldPpem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMultiDistanceFieldPpem_MetaData), NewProp_MinMultiDistanceFieldPpem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_MidMultiDistanceFieldPpem = { "MidMultiDistanceFieldPpem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, MidMultiDistanceFieldPpem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidMultiDistanceFieldPpem_MetaData), NewProp_MidMultiDistanceFieldPpem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_MaxMultiDistanceFieldPpem = { "MaxMultiDistanceFieldPpem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, MaxMultiDistanceFieldPpem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMultiDistanceFieldPpem_MetaData), NewProp_MaxMultiDistanceFieldPpem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_PlatformRasterizationModeOverrides_Inner = { "PlatformRasterizationModeOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides, METADATA_PARAMS(0, nullptr) }; // 2668227413
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_PlatformRasterizationModeOverrides = { "PlatformRasterizationModeOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, PlatformRasterizationModeOverrides), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformRasterizationModeOverrides_MetaData), NewProp_PlatformRasterizationModeOverrides_MetaData) }; // 2668227413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFontFace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_SourceFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_AscendOverriddenValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_bIsAscendOverridden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_DescendOverriddenValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_bIsDescendOverridden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_StrikeBrushHeightPercentage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_bEnableDistanceFieldRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_MinDistanceFieldPpem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_MidDistanceFieldPpem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_MaxDistanceFieldPpem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_MinMultiDistanceFieldPpem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_MidMultiDistanceFieldPpem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_MaxMultiDistanceFieldPpem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_PlatformRasterizationModeOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_PlatformRasterizationModeOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFontFace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFontFace_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFontFaceInterface_NoRegister, (int32)VTABLE_OFFSET(UFontFace, IFontFaceInterface), false },  // 3232847445
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontFace_Statics::ClassParams = {
	&UFontFace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFontFace_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::Class_MetaDataParams), Z_Construct_UClass_UFontFace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFontFace()
{
	if (!Z_Registration_Info_UClass_UFontFace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontFace.OuterSingleton, Z_Construct_UClass_UFontFace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFontFace.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UFontFace>()
{
	return UFontFace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFontFace);
UFontFace::~UFontFace() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFontFace)
// End Class UFontFace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFontFacePlatformRasterizationOverrides::StaticStruct, Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics::NewStructOps, TEXT("FontFacePlatformRasterizationOverrides"), &Z_Registration_Info_UScriptStruct_FontFacePlatformRasterizationOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFontFacePlatformRasterizationOverrides), 2668227413U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFontFace, UFontFace::StaticClass, TEXT("UFontFace"), &Z_Registration_Info_UClass_UFontFace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontFace), 185639129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_94723188(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
