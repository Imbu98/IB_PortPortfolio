// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttenuation() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttenuationDistanceModel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttenuationShape();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAttenuationDistanceModel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttenuationDistanceModel;
static UEnum* EAttenuationDistanceModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttenuationDistanceModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttenuationDistanceModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationDistanceModel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAttenuationDistanceModel"));
	}
	return Z_Registration_Info_UEnum_EAttenuationDistanceModel.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAttenuationDistanceModel>()
{
	return EAttenuationDistanceModel_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Name", "EAttenuationDistanceModel::Custom" },
		{ "Inverse.Name", "EAttenuationDistanceModel::Inverse" },
		{ "Linear.Name", "EAttenuationDistanceModel::Linear" },
		{ "Logarithmic.Name", "EAttenuationDistanceModel::Logarithmic" },
		{ "LogReverse.Name", "EAttenuationDistanceModel::LogReverse" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "NaturalSound.Name", "EAttenuationDistanceModel::NaturalSound" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttenuationDistanceModel::Linear", (int64)EAttenuationDistanceModel::Linear },
		{ "EAttenuationDistanceModel::Logarithmic", (int64)EAttenuationDistanceModel::Logarithmic },
		{ "EAttenuationDistanceModel::Inverse", (int64)EAttenuationDistanceModel::Inverse },
		{ "EAttenuationDistanceModel::LogReverse", (int64)EAttenuationDistanceModel::LogReverse },
		{ "EAttenuationDistanceModel::NaturalSound", (int64)EAttenuationDistanceModel::NaturalSound },
		{ "EAttenuationDistanceModel::Custom", (int64)EAttenuationDistanceModel::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAttenuationDistanceModel",
	"EAttenuationDistanceModel",
	Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAttenuationDistanceModel()
{
	if (!Z_Registration_Info_UEnum_EAttenuationDistanceModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttenuationDistanceModel.InnerSingleton, Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttenuationDistanceModel.InnerSingleton;
}
// End Enum EAttenuationDistanceModel

// Begin Enum EAttenuationShape
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttenuationShape;
static UEnum* EAttenuationShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttenuationShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttenuationShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationShape, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAttenuationShape"));
	}
	return Z_Registration_Info_UEnum_EAttenuationShape.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAttenuationShape::Type>()
{
	return EAttenuationShape_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAttenuationShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.Name", "EAttenuationShape::Box" },
		{ "Capsule.Name", "EAttenuationShape::Capsule" },
		{ "Cone.Name", "EAttenuationShape::Cone" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "Sphere.Name", "EAttenuationShape::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttenuationShape::Sphere", (int64)EAttenuationShape::Sphere },
		{ "EAttenuationShape::Capsule", (int64)EAttenuationShape::Capsule },
		{ "EAttenuationShape::Box", (int64)EAttenuationShape::Box },
		{ "EAttenuationShape::Cone", (int64)EAttenuationShape::Cone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAttenuationShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAttenuationShape",
	"EAttenuationShape::Type",
	Z_Construct_UEnum_Engine_EAttenuationShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAttenuationShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAttenuationShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAttenuationShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAttenuationShape()
{
	if (!Z_Registration_Info_UEnum_EAttenuationShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttenuationShape.InnerSingleton, Z_Construct_UEnum_Engine_EAttenuationShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttenuationShape.InnerSingleton;
}
// End Enum EAttenuationShape

// Begin Enum ENaturalSoundFalloffMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENaturalSoundFalloffMode;
static UEnum* ENaturalSoundFalloffMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENaturalSoundFalloffMode"));
	}
	return Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENaturalSoundFalloffMode>()
{
	return ENaturalSoundFalloffMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Continues.Comment", "// (Default) Continues attenuating pass falloff max using volume value\n// specified at the max falloff distance's bounds\n" },
		{ "Continues.Name", "ENaturalSoundFalloffMode::Continues" },
		{ "Continues.ToolTip", "(Default) Continues attenuating pass falloff max using volume value\nspecified at the max falloff distance's bounds" },
		{ "Hold.Comment", "// Holds the volume value specified at the shapes falloff bounds\n" },
		{ "Hold.Name", "ENaturalSoundFalloffMode::Hold" },
		{ "Hold.ToolTip", "Holds the volume value specified at the shapes falloff bounds" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "Silent.Comment", "// Sound goes silent upon leaving the shape\n" },
		{ "Silent.Name", "ENaturalSoundFalloffMode::Silent" },
		{ "Silent.ToolTip", "Sound goes silent upon leaving the shape" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENaturalSoundFalloffMode::Continues", (int64)ENaturalSoundFalloffMode::Continues },
		{ "ENaturalSoundFalloffMode::Silent", (int64)ENaturalSoundFalloffMode::Silent },
		{ "ENaturalSoundFalloffMode::Hold", (int64)ENaturalSoundFalloffMode::Hold },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENaturalSoundFalloffMode",
	"ENaturalSoundFalloffMode",
	Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode()
{
	if (!Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.InnerSingleton, Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.InnerSingleton;
}
// End Enum ENaturalSoundFalloffMode

// Begin ScriptStruct FBaseAttenuationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseAttenuationSettings;
class UScriptStruct* FBaseAttenuationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseAttenuationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseAttenuationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseAttenuationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BaseAttenuationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BaseAttenuationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBaseAttenuationSettings>()
{
	return FBaseAttenuationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Base class for attenuation settings.\n*/" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "* Base class for attenuation settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlgorithm_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The type of attenuation as a function of distance to use. */" },
		{ "DisplayName", "Attenuation Function" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The type of attenuation as a function of distance to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationShape_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The shape of the non-custom attenuation method. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The shape of the non-custom attenuation method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffMode_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "// Whether to continue attenuating, go silent, or hold last volume value when beyond falloff bounds and \n// 'Attenuation At Max (dB)' is set to a value greater than -60dB.\n// (Only for 'Natural Sound' Distance Algorithm). */\n" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "Whether to continue attenuating, go silent, or hold last volume value when beyond falloff bounds and\n'Attenuation At Max (dB)' is set to a value greater than -60dB.\n(Only for 'Natural Sound' Distance Algorithm). */" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dBAttenuationAtMax_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-60" },
		{ "Comment", "/* The attenuation volume at the falloff distance in decibels (Only for 'Natural Sound' Distance Algorithm). */" },
		{ "DisplayName", "Attenuation At Max (dB)" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The attenuation volume at the falloff distance in decibels (Only for 'Natural Sound' Distance Algorithm)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationShapeExtents_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The dimensions to use for the attenuation shape. Interpretation of the values differ per shape.\n\x09   Sphere  - X is Sphere Radius. Y and Z are unused\n\x09   Capsule - X is Capsule Half Height, Y is Capsule Radius, Z is unused\n\x09   Box     - X, Y, and Z are the Box's dimensions\n\x09   Cone    - X is Cone Radius, Y is Cone Angle, Z is Cone Falloff Angle\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The dimensions to use for the attenuation shape. Interpretation of the values differ per shape.\n         Sphere  - X is Sphere Radius. Y and Z are unused\n         Capsule - X is Capsule Half Height, Y is Capsule Radius, Z is unused\n         Box     - X, Y, and Z are the Box's dimensions\n         Cone    - X is Cone Radius, Y is Cone Angle, Z is Cone Falloff Angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeOffset_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The distance back from the sound's origin to begin the cone when using the cone attenuation shape. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The distance back from the sound's origin to begin the cone when using the cone attenuation shape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffDistance_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The distance over which volume attenuation occurs. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The distance over which volume attenuation occurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeSphereRadius_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "ClampMin", "0" },
		{ "Comment", "/* An optional attenuation radius (sphere) that extends from the cone origin. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "An optional attenuation radius (sphere) that extends from the cone origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeSphereFalloffDistance_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The distance over which volume attenuation occurs for the optional sphere shape. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The distance over which volume attenuation occurs for the optional sphere shape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomAttenuationCurve_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The custom volume attenuation curve to use. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The custom volume attenuation curve to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceAlgorithm_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceAlgorithm;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttenuationShape;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dBAttenuationAtMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationShapeExtents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeSphereRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeSphereFalloffDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomAttenuationCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseAttenuationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm = { "DistanceAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, DistanceAlgorithm), Z_Construct_UEnum_Engine_EAttenuationDistanceModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAlgorithm_MetaData), NewProp_DistanceAlgorithm_MetaData) }; // 3837648466
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShape = { "AttenuationShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, AttenuationShape), Z_Construct_UEnum_Engine_EAttenuationShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationShape_MetaData), NewProp_AttenuationShape_MetaData) }; // 3505866407
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode = { "FalloffMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, FalloffMode), Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffMode_MetaData), NewProp_FalloffMode_MetaData) }; // 2240404848
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_dBAttenuationAtMax = { "dBAttenuationAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, dBAttenuationAtMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dBAttenuationAtMax_MetaData), NewProp_dBAttenuationAtMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShapeExtents = { "AttenuationShapeExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, AttenuationShapeExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationShapeExtents_MetaData), NewProp_AttenuationShapeExtents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeOffset = { "ConeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, ConeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeOffset_MetaData), NewProp_ConeOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffDistance = { "FalloffDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, FalloffDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffDistance_MetaData), NewProp_FalloffDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeSphereRadius = { "ConeSphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, ConeSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeSphereRadius_MetaData), NewProp_ConeSphereRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeSphereFalloffDistance = { "ConeSphereFalloffDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, ConeSphereFalloffDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeSphereFalloffDistance_MetaData), NewProp_ConeSphereFalloffDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_CustomAttenuationCurve = { "CustomAttenuationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseAttenuationSettings, CustomAttenuationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomAttenuationCurve_MetaData), NewProp_CustomAttenuationCurve_MetaData) }; // 1495033350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_dBAttenuationAtMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShapeExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeSphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeSphereFalloffDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_CustomAttenuationCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BaseAttenuationSettings",
	Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::PropPointers),
	sizeof(FBaseAttenuationSettings),
	alignof(FBaseAttenuationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BaseAttenuationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseAttenuationSettings.InnerSingleton, Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BaseAttenuationSettings.InnerSingleton;
}
// End ScriptStruct FBaseAttenuationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttenuationDistanceModel_StaticEnum, TEXT("EAttenuationDistanceModel"), &Z_Registration_Info_UEnum_EAttenuationDistanceModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3837648466U) },
		{ EAttenuationShape_StaticEnum, TEXT("EAttenuationShape"), &Z_Registration_Info_UEnum_EAttenuationShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3505866407U) },
		{ ENaturalSoundFalloffMode_StaticEnum, TEXT("ENaturalSoundFalloffMode"), &Z_Registration_Info_UEnum_ENaturalSoundFalloffMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2240404848U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBaseAttenuationSettings::StaticStruct, Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewStructOps, TEXT("BaseAttenuationSettings"), &Z_Registration_Info_UScriptStruct_BaseAttenuationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseAttenuationSettings), 1131487114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h_2410285498(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
