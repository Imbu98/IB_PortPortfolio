// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FractureEngine/Public/FractureEngineFracturing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureEngineFracturing() {}

// Begin Cross Module References
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution();
UPackage* Z_Construct_UPackage__Script_FractureEngine();
// End Cross Module References

// Begin Enum EFractureBrickBondEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFractureBrickBondEnum;
static UEnum* EFractureBrickBondEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFractureBrickBondEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFractureBrickBondEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum, (UObject*)Z_Construct_UPackage__Script_FractureEngine(), TEXT("EFractureBrickBondEnum"));
	}
	return Z_Registration_Info_UEnum_EFractureBrickBondEnum.OuterSingleton;
}
template<> FRACTUREENGINE_API UEnum* StaticEnum<EFractureBrickBondEnum>()
{
	return EFractureBrickBondEnum_StaticEnum();
}
struct Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_FractureBrickBond_English.DisplayName", "English" },
		{ "Dataflow_FractureBrickBond_English.Name", "EFractureBrickBondEnum::Dataflow_FractureBrickBond_English" },
		{ "Dataflow_FractureBrickBond_Flemish.DisplayName", "Flemish" },
		{ "Dataflow_FractureBrickBond_Flemish.Name", "EFractureBrickBondEnum::Dataflow_FractureBrickBond_Flemish" },
		{ "Dataflow_FractureBrickBond_Header.DisplayName", "Header" },
		{ "Dataflow_FractureBrickBond_Header.Name", "EFractureBrickBondEnum::Dataflow_FractureBrickBond_Header" },
		{ "Dataflow_FractureBrickBond_Stack.DisplayName", "Stack" },
		{ "Dataflow_FractureBrickBond_Stack.Name", "EFractureBrickBondEnum::Dataflow_FractureBrickBond_Stack" },
		{ "Dataflow_FractureBrickBond_Stretcher.DisplayName", "Stretcher" },
		{ "Dataflow_FractureBrickBond_Stretcher.Name", "EFractureBrickBondEnum::Dataflow_FractureBrickBond_Stretcher" },
		{ "ModuleRelativePath", "Public/FractureEngineFracturing.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFractureBrickBondEnum::Dataflow_FractureBrickBond_Stretcher", (int64)EFractureBrickBondEnum::Dataflow_FractureBrickBond_Stretcher },
		{ "EFractureBrickBondEnum::Dataflow_FractureBrickBond_Stack", (int64)EFractureBrickBondEnum::Dataflow_FractureBrickBond_Stack },
		{ "EFractureBrickBondEnum::Dataflow_FractureBrickBond_English", (int64)EFractureBrickBondEnum::Dataflow_FractureBrickBond_English },
		{ "EFractureBrickBondEnum::Dataflow_FractureBrickBond_Header", (int64)EFractureBrickBondEnum::Dataflow_FractureBrickBond_Header },
		{ "EFractureBrickBondEnum::Dataflow_FractureBrickBond_Flemish", (int64)EFractureBrickBondEnum::Dataflow_FractureBrickBond_Flemish },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FractureEngine,
	nullptr,
	"EFractureBrickBondEnum",
	"EFractureBrickBondEnum",
	Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum()
{
	if (!Z_Registration_Info_UEnum_EFractureBrickBondEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFractureBrickBondEnum.InnerSingleton, Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFractureBrickBondEnum.InnerSingleton;
}
// End Enum EFractureBrickBondEnum

// Begin Enum EMeshCutterCutDistribution
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshCutterCutDistribution;
static UEnum* EMeshCutterCutDistribution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshCutterCutDistribution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshCutterCutDistribution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution, (UObject*)Z_Construct_UPackage__Script_FractureEngine(), TEXT("EMeshCutterCutDistribution"));
	}
	return Z_Registration_Info_UEnum_EMeshCutterCutDistribution.OuterSingleton;
}
template<> FRACTUREENGINE_API UEnum* StaticEnum<EMeshCutterCutDistribution>()
{
	return EMeshCutterCutDistribution_StaticEnum();
}
struct Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Grid.Comment", "// Arrange the cutting mesh in a regular grid pattern\n" },
		{ "Grid.DisplayName", "Grid" },
		{ "Grid.Name", "EMeshCutterCutDistribution::Grid" },
		{ "Grid.ToolTip", "Arrange the cutting mesh in a regular grid pattern" },
		{ "ModuleRelativePath", "Public/FractureEngineFracturing.h" },
		{ "SingleCut.Comment", "// Cut only once, at the cutting mesh's current location in the level\n" },
		{ "SingleCut.DisplayName", "Single Cut" },
		{ "SingleCut.Name", "EMeshCutterCutDistribution::SingleCut" },
		{ "SingleCut.ToolTip", "Cut only once, at the cutting mesh's current location in the level" },
		{ "UniformRandom.Comment", "// Scatter the cutting mesh in a uniform random distribution around the geometry bounding box\n" },
		{ "UniformRandom.DisplayName", "Uniform Random" },
		{ "UniformRandom.Name", "EMeshCutterCutDistribution::UniformRandom" },
		{ "UniformRandom.ToolTip", "Scatter the cutting mesh in a uniform random distribution around the geometry bounding box" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshCutterCutDistribution::SingleCut", (int64)EMeshCutterCutDistribution::SingleCut },
		{ "EMeshCutterCutDistribution::UniformRandom", (int64)EMeshCutterCutDistribution::UniformRandom },
		{ "EMeshCutterCutDistribution::Grid", (int64)EMeshCutterCutDistribution::Grid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FractureEngine,
	nullptr,
	"EMeshCutterCutDistribution",
	"EMeshCutterCutDistribution",
	Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution()
{
	if (!Z_Registration_Info_UEnum_EMeshCutterCutDistribution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshCutterCutDistribution.InnerSingleton, Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshCutterCutDistribution.InnerSingleton;
}
// End Enum EMeshCutterCutDistribution

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineFracturing_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFractureBrickBondEnum_StaticEnum, TEXT("EFractureBrickBondEnum"), &Z_Registration_Info_UEnum_EFractureBrickBondEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 151219521U) },
		{ EMeshCutterCutDistribution_StaticEnum, TEXT("EMeshCutterCutDistribution"), &Z_Registration_Info_UEnum_EMeshCutterCutDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 8896957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineFracturing_h_3704832068(TEXT("/Script/FractureEngine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineFracturing_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineFracturing_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
