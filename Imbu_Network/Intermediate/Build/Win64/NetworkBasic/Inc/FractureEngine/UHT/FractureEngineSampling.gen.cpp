// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FractureEngine/Public/FractureEngineSampling.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureEngineSampling() {}

// Begin Cross Module References
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode();
UPackage* Z_Construct_UPackage__Script_FractureEngine();
// End Cross Module References

// Begin Enum ENonUniformSamplingDistributionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode;
static UEnum* ENonUniformSamplingDistributionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode, (UObject*)Z_Construct_UPackage__Script_FractureEngine(), TEXT("ENonUniformSamplingDistributionMode"));
	}
	return Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.OuterSingleton;
}
template<> FRACTUREENGINE_API UEnum* StaticEnum<ENonUniformSamplingDistributionMode>()
{
	return ENonUniformSamplingDistributionMode_StaticEnum();
}
struct Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ENonUniformSamplingDistributionMode_Larger.Comment", "/** Distribution is weighted towards larger points */" },
		{ "ENonUniformSamplingDistributionMode_Larger.DisplayName", "Larger" },
		{ "ENonUniformSamplingDistributionMode_Larger.Name", "ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Larger" },
		{ "ENonUniformSamplingDistributionMode_Larger.ToolTip", "Distribution is weighted towards larger points" },
		{ "ENonUniformSamplingDistributionMode_Smaller.Comment", "/** Distribution is weighted towards smaller points */" },
		{ "ENonUniformSamplingDistributionMode_Smaller.DisplayName", "Smaller" },
		{ "ENonUniformSamplingDistributionMode_Smaller.Name", "ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Smaller" },
		{ "ENonUniformSamplingDistributionMode_Smaller.ToolTip", "Distribution is weighted towards smaller points" },
		{ "ENonUniformSamplingDistributionMode_Uniform.Comment", "/** Uniform distribution of sizes, ie all equally likely */" },
		{ "ENonUniformSamplingDistributionMode_Uniform.DisplayName", "Uniform" },
		{ "ENonUniformSamplingDistributionMode_Uniform.Name", "ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Uniform" },
		{ "ENonUniformSamplingDistributionMode_Uniform.ToolTip", "Uniform distribution of sizes, ie all equally likely" },
		{ "ModuleRelativePath", "Public/FractureEngineSampling.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Uniform", (int64)ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Uniform },
		{ "ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Smaller", (int64)ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Smaller },
		{ "ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Larger", (int64)ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Larger },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FractureEngine,
	nullptr,
	"ENonUniformSamplingDistributionMode",
	"ENonUniformSamplingDistributionMode",
	Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode()
{
	if (!Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.InnerSingleton, Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.InnerSingleton;
}
// End Enum ENonUniformSamplingDistributionMode

// Begin Enum ENonUniformSamplingWeightMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode;
static UEnum* ENonUniformSamplingWeightMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode, (UObject*)Z_Construct_UPackage__Script_FractureEngine(), TEXT("ENonUniformSamplingWeightMode"));
	}
	return Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.OuterSingleton;
}
template<> FRACTUREENGINE_API UEnum* StaticEnum<ENonUniformSamplingWeightMode>()
{
	return ENonUniformSamplingWeightMode_StaticEnum();
}
struct Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ENonUniformSamplingWeightMode_FilledWeightToRadius.Comment", "/**\n\x09 * Weights are clamped to [0,1] and used to interpolate Min/Max Radius, with decay, so that smaller-radius samples will infill between large ones.\n\x09 * So areas with large weight may still end up with some variable-radius samples, but areas with 0 weight will only ever have min-radius samples.\n\x09 */" },
		{ "ENonUniformSamplingWeightMode_FilledWeightToRadius.DisplayName", "Filled Weight To Radius" },
		{ "ENonUniformSamplingWeightMode_FilledWeightToRadius.Name", "ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_FilledWeightToRadius" },
		{ "ENonUniformSamplingWeightMode_FilledWeightToRadius.ToolTip", "Weights are clamped to [0,1] and used to interpolate Min/Max Radius, with decay, so that smaller-radius samples will infill between large ones.\nSo areas with large weight may still end up with some variable-radius samples, but areas with 0 weight will only ever have min-radius samples." },
		{ "ENonUniformSamplingWeightMode_WeightedRandom.Comment", "/**\n\x09 * Weight is used to create nonuniform random sampling, ie it nudges the random sample-radius distribution but does not directly control it.\n\x09 * So samples with any radius can still appear at any location, but if weight=1 then max-radius samples are more likely, etc.\n\x09 */" },
		{ "ENonUniformSamplingWeightMode_WeightedRandom.DisplayName", "Weighted Random" },
		{ "ENonUniformSamplingWeightMode_WeightedRandom.Name", "ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_WeightedRandom" },
		{ "ENonUniformSamplingWeightMode_WeightedRandom.ToolTip", "Weight is used to create nonuniform random sampling, ie it nudges the random sample-radius distribution but does not directly control it.\nSo samples with any radius can still appear at any location, but if weight=1 then max-radius samples are more likely, etc." },
		{ "ENonUniformSamplingWeightMode_WeightToRadius.Comment", "/**\n\x09 * Weights are clamped to [0,1] and used to interpolate Min/Max Radius. This is a \"hard constraint\", ie if the weight\n\x09 * at a point is 1, only a \"max radius\" sample may be placed there, otherwise no samples at all (so no \"filling in\" smaller samples between large ones)\n\x09 */" },
		{ "ENonUniformSamplingWeightMode_WeightToRadius.DisplayName", "Weight To Radius" },
		{ "ENonUniformSamplingWeightMode_WeightToRadius.Name", "ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_WeightToRadius" },
		{ "ENonUniformSamplingWeightMode_WeightToRadius.ToolTip", "Weights are clamped to [0,1] and used to interpolate Min/Max Radius. This is a \"hard constraint\", ie if the weight\nat a point is 1, only a \"max radius\" sample may be placed there, otherwise no samples at all (so no \"filling in\" smaller samples between large ones)" },
		{ "ModuleRelativePath", "Public/FractureEngineSampling.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_WeightToRadius", (int64)ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_WeightToRadius },
		{ "ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_FilledWeightToRadius", (int64)ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_FilledWeightToRadius },
		{ "ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_WeightedRandom", (int64)ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_WeightedRandom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FractureEngine,
	nullptr,
	"ENonUniformSamplingWeightMode",
	"ENonUniformSamplingWeightMode",
	Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode()
{
	if (!Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.InnerSingleton, Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.InnerSingleton;
}
// End Enum ENonUniformSamplingWeightMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineSampling_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENonUniformSamplingDistributionMode_StaticEnum, TEXT("ENonUniformSamplingDistributionMode"), &Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 423672639U) },
		{ ENonUniformSamplingWeightMode_StaticEnum, TEXT("ENonUniformSamplingWeightMode"), &Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 486303290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineSampling_h_2828304550(TEXT("/Script/FractureEngine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineSampling_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineSampling_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
