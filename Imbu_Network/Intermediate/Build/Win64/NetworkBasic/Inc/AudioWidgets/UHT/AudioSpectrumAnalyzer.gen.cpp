// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioSpectrumAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSpectrumAnalyzer() {}

// Begin Cross Module References
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Enum EAudioSpectrumAnalyzerBallistics
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics;
static UEnum* EAudioSpectrumAnalyzerBallistics_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioSpectrumAnalyzerBallistics"));
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioSpectrumAnalyzerBallistics>()
{
	return EAudioSpectrumAnalyzerBallistics_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Analog.Name", "EAudioSpectrumAnalyzerBallistics::Analog" },
		{ "BlueprintType", "true" },
		{ "Digital.Name", "EAudioSpectrumAnalyzerBallistics::Digital" },
		{ "ModuleRelativePath", "Public/AudioSpectrumAnalyzer.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioSpectrumAnalyzerBallistics::Analog", (int64)EAudioSpectrumAnalyzerBallistics::Analog },
		{ "EAudioSpectrumAnalyzerBallistics::Digital", (int64)EAudioSpectrumAnalyzerBallistics::Digital },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioSpectrumAnalyzerBallistics",
	"EAudioSpectrumAnalyzerBallistics",
	Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.InnerSingleton;
}
// End Enum EAudioSpectrumAnalyzerBallistics

// Begin Enum EAudioSpectrumAnalyzerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType;
static UEnum* EAudioSpectrumAnalyzerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioSpectrumAnalyzerType"));
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioSpectrumAnalyzerType>()
{
	return EAudioSpectrumAnalyzerType_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CQT.Name", "EAudioSpectrumAnalyzerType::CQT" },
		{ "CQT.ToolTip", "Constant-Q Transform" },
		{ "FFT.Name", "EAudioSpectrumAnalyzerType::FFT" },
		{ "FFT.ToolTip", "Fast Fourier Transform" },
		{ "ModuleRelativePath", "Public/AudioSpectrumAnalyzer.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioSpectrumAnalyzerType::FFT", (int64)EAudioSpectrumAnalyzerType::FFT },
		{ "EAudioSpectrumAnalyzerType::CQT", (int64)EAudioSpectrumAnalyzerType::CQT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioSpectrumAnalyzerType",
	"EAudioSpectrumAnalyzerType",
	Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.InnerSingleton;
}
// End Enum EAudioSpectrumAnalyzerType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioSpectrumAnalyzerBallistics_StaticEnum, TEXT("EAudioSpectrumAnalyzerBallistics"), &Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2271639113U) },
		{ EAudioSpectrumAnalyzerType_StaticEnum, TEXT("EAudioSpectrumAnalyzerType"), &Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 797875664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h_115840226(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
