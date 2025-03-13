// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomDesc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomDesc() {}

// Begin Cross Module References
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupDesc();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin ScriptStruct FHairGroupDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupDesc;
class UScriptStruct* FHairGroupDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupDesc, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupDesc"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupDesc.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupDesc>()
{
	return FHairGroupDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairGroupDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Note: If a new field is added to this struct, think to update GroomComponentDestailsCustomization.cpp to handle override flags\n" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "ToolTip", "Note: If a new field is added to this struct, think to update GroomComponentDestailsCustomization.cpp to handle override flags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairLength_MetaData[] = {
		{ "Comment", "/** Length of the longest hair strands */" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "ToolTip", "Length of the longest hair strands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairWidth_MetaData[] = {
		{ "Category", "Groom" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Hair width (in centimeters) */" },
		{ "editcondition", "HairWidth_Override" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Hair width (in centimeters)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairWidth_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairRootScale_MetaData[] = {
		{ "Category", "Groom" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale the hair width at the root */" },
		{ "editcondition", "HairRootScale_Override" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Scale the hair width at the root" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairRootScale_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairTipScale_MetaData[] = {
		{ "Category", "Groom" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale the hair width at the tip */" },
		{ "editcondition", "HairTipScale_Override" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Scale the hair width at the tip" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairTipScale_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairShadowDensity_MetaData[] = {
		{ "Category", "Groom" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Override the hair shadow density factor (unit less). */" },
		{ "editcondition", "HairShadowDensity_Override" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Override the hair shadow density factor (unit less)." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairShadowDensity_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairRaytracingRadiusScale_MetaData[] = {
		{ "Category", "Groom" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale the hair geometry radius for ray tracing effects (e.g. shadow) */" },
		{ "editcondition", "HairRaytracingRadiusScale_Override" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Scale the hair geometry radius for ray tracing effects (e.g. shadow)" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairRaytracingRadiusScale_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHairRaytracingGeometry_MetaData[] = {
		{ "Category", "Groom" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Enable hair strands geomtry for raytracing */" },
		{ "editcondition", "bUseHairRaytracingGeometry_Override" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Enable hair strands geomtry for raytracing" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHairRaytracingGeometry_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "7.0" },
		{ "ClampMin", "-7.0" },
		{ "Comment", "/** Bias the selected LOD. A value >0 will progressively select lower detailed lods. Used when r.HairStrands.Cluster.Culling = 1. */" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "SliderExponent", "1" },
		{ "ToolTip", "Bias the selected LOD. A value >0 will progressively select lower detailed lods. Used when r.HairStrands.Cluster.Culling = 1." },
		{ "UIMax", "7.0" },
		{ "UIMin", "-7.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseStableRasterization_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Insure the hair does not alias. When enable, group of hairs might appear thicker. Isolated hair should remain thin. */" },
		{ "editcondition", "bUseStableRasterization_Override" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "ToolTip", "Insure the hair does not alias. When enable, group of hairs might appear thicker. Isolated hair should remain thin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseStableRasterization_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScatterSceneLighting_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Light hair with the scene color. This is used for vellus/short hair to bring light from the surrounding surface, like skin. */" },
		{ "editcondition", "bScatterSceneLighting_Override" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "ToolTip", "Light hair with the scene color. This is used for vellus/short hair to bring light from the surrounding surface, like skin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScatterSceneLighting_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportVoxelization_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportVoxelization_Override_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairLengthScale_MetaData[] = {
		{ "Category", "Groom" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** When enabled, Length Scale allow to scale the length of the hair. */" },
		{ "editcondition", "HairLengthScale_Override" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "SliderExponent", "1" },
		{ "ToolTip", "When enabled, Length Scale allow to scale the length of the hair." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairLengthScale_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomDesc.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairWidth;
	static void NewProp_HairWidth_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HairWidth_Override;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairRootScale;
	static void NewProp_HairRootScale_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HairRootScale_Override;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairTipScale;
	static void NewProp_HairTipScale_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HairTipScale_Override;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairShadowDensity;
	static void NewProp_HairShadowDensity_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HairShadowDensity_Override;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairRaytracingRadiusScale;
	static void NewProp_HairRaytracingRadiusScale_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HairRaytracingRadiusScale_Override;
	static void NewProp_bUseHairRaytracingGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHairRaytracingGeometry;
	static void NewProp_bUseHairRaytracingGeometry_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHairRaytracingGeometry_Override;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODBias;
	static void NewProp_bUseStableRasterization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStableRasterization;
	static void NewProp_bUseStableRasterization_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStableRasterization_Override;
	static void NewProp_bScatterSceneLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScatterSceneLighting;
	static void NewProp_bScatterSceneLighting_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScatterSceneLighting_Override;
	static void NewProp_bSupportVoxelization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportVoxelization;
	static void NewProp_bSupportVoxelization_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportVoxelization_Override;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairLengthScale;
	static void NewProp_HairLengthScale_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HairLengthScale_Override;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairLength = { "HairLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupDesc, HairLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairLength_MetaData), NewProp_HairLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairWidth = { "HairWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupDesc, HairWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairWidth_MetaData), NewProp_HairWidth_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairWidth_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->HairWidth_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairWidth_Override = { "HairWidth_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairWidth_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairWidth_Override_MetaData), NewProp_HairWidth_Override_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRootScale = { "HairRootScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupDesc, HairRootScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairRootScale_MetaData), NewProp_HairRootScale_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRootScale_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->HairRootScale_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRootScale_Override = { "HairRootScale_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRootScale_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairRootScale_Override_MetaData), NewProp_HairRootScale_Override_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairTipScale = { "HairTipScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupDesc, HairTipScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairTipScale_MetaData), NewProp_HairTipScale_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairTipScale_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->HairTipScale_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairTipScale_Override = { "HairTipScale_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairTipScale_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairTipScale_Override_MetaData), NewProp_HairTipScale_Override_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairShadowDensity = { "HairShadowDensity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupDesc, HairShadowDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairShadowDensity_MetaData), NewProp_HairShadowDensity_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairShadowDensity_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->HairShadowDensity_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairShadowDensity_Override = { "HairShadowDensity_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairShadowDensity_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairShadowDensity_Override_MetaData), NewProp_HairShadowDensity_Override_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRaytracingRadiusScale = { "HairRaytracingRadiusScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupDesc, HairRaytracingRadiusScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairRaytracingRadiusScale_MetaData), NewProp_HairRaytracingRadiusScale_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRaytracingRadiusScale_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->HairRaytracingRadiusScale_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRaytracingRadiusScale_Override = { "HairRaytracingRadiusScale_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRaytracingRadiusScale_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairRaytracingRadiusScale_Override_MetaData), NewProp_HairRaytracingRadiusScale_Override_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseHairRaytracingGeometry_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->bUseHairRaytracingGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseHairRaytracingGeometry = { "bUseHairRaytracingGeometry", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseHairRaytracingGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHairRaytracingGeometry_MetaData), NewProp_bUseHairRaytracingGeometry_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseHairRaytracingGeometry_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->bUseHairRaytracingGeometry_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseHairRaytracingGeometry_Override = { "bUseHairRaytracingGeometry_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseHairRaytracingGeometry_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHairRaytracingGeometry_Override_MetaData), NewProp_bUseHairRaytracingGeometry_Override_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupDesc, LODBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBias_MetaData), NewProp_LODBias_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseStableRasterization_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->bUseStableRasterization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseStableRasterization = { "bUseStableRasterization", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseStableRasterization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseStableRasterization_MetaData), NewProp_bUseStableRasterization_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseStableRasterization_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->bUseStableRasterization_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseStableRasterization_Override = { "bUseStableRasterization_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseStableRasterization_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseStableRasterization_Override_MetaData), NewProp_bUseStableRasterization_Override_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bScatterSceneLighting_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->bScatterSceneLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bScatterSceneLighting = { "bScatterSceneLighting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bScatterSceneLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScatterSceneLighting_MetaData), NewProp_bScatterSceneLighting_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bScatterSceneLighting_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->bScatterSceneLighting_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bScatterSceneLighting_Override = { "bScatterSceneLighting_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bScatterSceneLighting_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScatterSceneLighting_Override_MetaData), NewProp_bScatterSceneLighting_Override_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bSupportVoxelization_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->bSupportVoxelization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bSupportVoxelization = { "bSupportVoxelization", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bSupportVoxelization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportVoxelization_MetaData), NewProp_bSupportVoxelization_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bSupportVoxelization_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->bSupportVoxelization_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bSupportVoxelization_Override = { "bSupportVoxelization_Override", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bSupportVoxelization_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportVoxelization_Override_MetaData), NewProp_bSupportVoxelization_Override_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairLengthScale = { "HairLengthScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupDesc, HairLengthScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairLengthScale_MetaData), NewProp_HairLengthScale_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairLengthScale_Override_SetBit(void* Obj)
{
	((FHairGroupDesc*)Obj)->HairLengthScale_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairLengthScale_Override = { "HairLengthScale_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupDesc), &Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairLengthScale_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairLengthScale_Override_MetaData), NewProp_HairLengthScale_Override_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairWidth_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRootScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRootScale_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairTipScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairTipScale_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairShadowDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairShadowDensity_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRaytracingRadiusScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairRaytracingRadiusScale_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseHairRaytracingGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseHairRaytracingGeometry_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_LODBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseStableRasterization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bUseStableRasterization_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bScatterSceneLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bScatterSceneLighting_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bSupportVoxelization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_bSupportVoxelization_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairLengthScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewProp_HairLengthScale_Override,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairGroupDesc",
	Z_Construct_UScriptStruct_FHairGroupDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupDesc_Statics::PropPointers),
	sizeof(FHairGroupDesc),
	alignof(FHairGroupDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairGroupDesc()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupDesc.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairGroupDesc.InnerSingleton;
}
// End ScriptStruct FHairGroupDesc

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomDesc_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHairGroupDesc::StaticStruct, Z_Construct_UScriptStruct_FHairGroupDesc_Statics::NewStructOps, TEXT("HairGroupDesc"), &Z_Registration_Info_UScriptStruct_HairGroupDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupDesc), 1462074430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomDesc_h_2676365458(TEXT("/Script/HairStrandsCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomDesc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomDesc_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
