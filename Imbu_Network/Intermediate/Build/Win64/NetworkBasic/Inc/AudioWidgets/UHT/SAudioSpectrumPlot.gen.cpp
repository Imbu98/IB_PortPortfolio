// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/SAudioSpectrumPlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAudioSpectrumPlot() {}

// Begin Cross Module References
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Enum EAudioSpectrumPlotTilt
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt;
static UEnum* EAudioSpectrumPlotTilt_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioSpectrumPlotTilt"));
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioSpectrumPlotTilt>()
{
	return EAudioSpectrumPlotTilt_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAudioSpectrumPlot.h" },
		{ "NoTilt.Name", "EAudioSpectrumPlotTilt::NoTilt" },
		{ "NoTilt.ToolTip", "0 dB/octave slope (white noise is flat)." },
		{ "Plus1_5dBPerOctave.DisplayName", "1.5 dB/octave" },
		{ "Plus1_5dBPerOctave.Name", "EAudioSpectrumPlotTilt::Plus1_5dBPerOctave" },
		{ "Plus1_5dBPerOctave.ToolTip", "1.5 dB/octave slope." },
		{ "Plus3dBPerOctave.DisplayName", "3 dB/octave" },
		{ "Plus3dBPerOctave.Name", "EAudioSpectrumPlotTilt::Plus3dBPerOctave" },
		{ "Plus3dBPerOctave.ToolTip", "3 dB/octave slope (pink noise is flat)." },
		{ "Plus4_5dBPerOctave.DisplayName", "4.5 dB/octave" },
		{ "Plus4_5dBPerOctave.Name", "EAudioSpectrumPlotTilt::Plus4_5dBPerOctave" },
		{ "Plus4_5dBPerOctave.ToolTip", "4.5 dB/octave slope." },
		{ "Plus6dBPerOctave.DisplayName", "6 dB/octave" },
		{ "Plus6dBPerOctave.Name", "EAudioSpectrumPlotTilt::Plus6dBPerOctave" },
		{ "Plus6dBPerOctave.ToolTip", "6 dB/octave slope (Brownian noise is flat)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioSpectrumPlotTilt::NoTilt", (int64)EAudioSpectrumPlotTilt::NoTilt },
		{ "EAudioSpectrumPlotTilt::Plus1_5dBPerOctave", (int64)EAudioSpectrumPlotTilt::Plus1_5dBPerOctave },
		{ "EAudioSpectrumPlotTilt::Plus3dBPerOctave", (int64)EAudioSpectrumPlotTilt::Plus3dBPerOctave },
		{ "EAudioSpectrumPlotTilt::Plus4_5dBPerOctave", (int64)EAudioSpectrumPlotTilt::Plus4_5dBPerOctave },
		{ "EAudioSpectrumPlotTilt::Plus6dBPerOctave", (int64)EAudioSpectrumPlotTilt::Plus6dBPerOctave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioSpectrumPlotTilt",
	"EAudioSpectrumPlotTilt",
	Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.InnerSingleton;
}
// End Enum EAudioSpectrumPlotTilt

// Begin Enum EAudioSpectrumPlotFrequencyAxisScale
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale;
static UEnum* EAudioSpectrumPlotFrequencyAxisScale_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioSpectrumPlotFrequencyAxisScale"));
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioSpectrumPlotFrequencyAxisScale>()
{
	return EAudioSpectrumPlotFrequencyAxisScale_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Linear.Name", "EAudioSpectrumPlotFrequencyAxisScale::Linear" },
		{ "Logarithmic.Name", "EAudioSpectrumPlotFrequencyAxisScale::Logarithmic" },
		{ "ModuleRelativePath", "Public/SAudioSpectrumPlot.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioSpectrumPlotFrequencyAxisScale::Linear", (int64)EAudioSpectrumPlotFrequencyAxisScale::Linear },
		{ "EAudioSpectrumPlotFrequencyAxisScale::Logarithmic", (int64)EAudioSpectrumPlotFrequencyAxisScale::Logarithmic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioSpectrumPlotFrequencyAxisScale",
	"EAudioSpectrumPlotFrequencyAxisScale",
	Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.InnerSingleton;
}
// End Enum EAudioSpectrumPlotFrequencyAxisScale

// Begin Enum EAudioSpectrumPlotFrequencyAxisPixelBucketMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode;
static UEnum* EAudioSpectrumPlotFrequencyAxisPixelBucketMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioSpectrumPlotFrequencyAxisPixelBucketMode"));
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioSpectrumPlotFrequencyAxisPixelBucketMode>()
{
	return EAudioSpectrumPlotFrequencyAxisPixelBucketMode_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.Name", "EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Average" },
		{ "Average.ToolTip", "Plot the average of the data points in each frequency axis pixel bucket." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAudioSpectrumPlot.h" },
		{ "Peak.Name", "EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Peak" },
		{ "Peak.ToolTip", "Plot one data point per frequency axis pixel bucket only, choosing the data point with the highest sound level." },
		{ "Sample.Name", "EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Sample" },
		{ "Sample.ToolTip", "Plot one data point per frequency axis pixel bucket only, choosing the data point nearest the pixel center." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Sample", (int64)EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Sample },
		{ "EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Peak", (int64)EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Peak },
		{ "EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Average", (int64)EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Average },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioSpectrumPlotFrequencyAxisPixelBucketMode",
	"EAudioSpectrumPlotFrequencyAxisPixelBucketMode",
	Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.InnerSingleton;
}
// End Enum EAudioSpectrumPlotFrequencyAxisPixelBucketMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioSpectrumPlot_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioSpectrumPlotTilt_StaticEnum, TEXT("EAudioSpectrumPlotTilt"), &Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1006113310U) },
		{ EAudioSpectrumPlotFrequencyAxisScale_StaticEnum, TEXT("EAudioSpectrumPlotFrequencyAxisScale"), &Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1957151686U) },
		{ EAudioSpectrumPlotFrequencyAxisPixelBucketMode_StaticEnum, TEXT("EAudioSpectrumPlotFrequencyAxisPixelBucketMode"), &Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3948003277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioSpectrumPlot_h_2249273605(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioSpectrumPlot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioSpectrumPlot_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
