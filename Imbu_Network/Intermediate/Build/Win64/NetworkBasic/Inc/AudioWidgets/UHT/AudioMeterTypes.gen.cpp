// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioMeterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMeterTypes() {}

// Begin Cross Module References
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FMeterChannelInfo();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin ScriptStruct FMeterChannelInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeterChannelInfo;
class UScriptStruct* FMeterChannelInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeterChannelInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeterChannelInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeterChannelInfo, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("MeterChannelInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MeterChannelInfo.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FMeterChannelInfo>()
{
	return FMeterChannelInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeterChannelInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AudioMeterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeterValue_MetaData[] = {
		{ "Category", "AudioMeter" },
		{ "ModuleRelativePath", "Public/AudioMeterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakValue_MetaData[] = {
		{ "Category", "AudioMeter" },
		{ "ModuleRelativePath", "Public/AudioMeterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClippingValue_MetaData[] = {
		{ "Category", "AudioMeter" },
		{ "ModuleRelativePath", "Public/AudioMeterTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeterValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeakValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClippingValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeterChannelInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::NewProp_MeterValue = { "MeterValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeterChannelInfo, MeterValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeterValue_MetaData), NewProp_MeterValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::NewProp_PeakValue = { "PeakValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeterChannelInfo, PeakValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakValue_MetaData), NewProp_PeakValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::NewProp_ClippingValue = { "ClippingValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeterChannelInfo, ClippingValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClippingValue_MetaData), NewProp_ClippingValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::NewProp_MeterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::NewProp_PeakValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::NewProp_ClippingValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	&NewStructOps,
	"MeterChannelInfo",
	Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::PropPointers),
	sizeof(FMeterChannelInfo),
	alignof(FMeterChannelInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeterChannelInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MeterChannelInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeterChannelInfo.InnerSingleton, Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeterChannelInfo.InnerSingleton;
}
// End ScriptStruct FMeterChannelInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeterChannelInfo::StaticStruct, Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::NewStructOps, TEXT("MeterChannelInfo"), &Z_Registration_Info_UScriptStruct_MeterChannelInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeterChannelInfo), 3797360045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterTypes_h_475972666(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
