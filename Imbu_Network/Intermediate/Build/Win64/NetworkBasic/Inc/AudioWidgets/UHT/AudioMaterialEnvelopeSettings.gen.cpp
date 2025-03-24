// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMaterialEnvelopeSettings() {}

// Begin Cross Module References
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Enum EAudioMaterialEnvelopeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType;
static UEnum* EAudioMaterialEnvelopeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioMaterialEnvelopeType"));
	}
	return Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioMaterialEnvelopeType>()
{
	return EAudioMaterialEnvelopeType_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AD.Name", "EAudioMaterialEnvelopeType::AD" },
		{ "ADSR.Name", "EAudioMaterialEnvelopeType::ADSR" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*Envelope curve types\n*A: Attack\n*D: Decay\n*S: Sustain\n*R: Release\n*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "Envelope curve types\nA: Attack\nD: Decay\nS: Sustain\nR: Release" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioMaterialEnvelopeType::AD", (int64)EAudioMaterialEnvelopeType::AD },
		{ "EAudioMaterialEnvelopeType::ADSR", (int64)EAudioMaterialEnvelopeType::ADSR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioMaterialEnvelopeType",
	"EAudioMaterialEnvelopeType",
	Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType()
{
	if (!Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.InnerSingleton;
}
// End Enum EAudioMaterialEnvelopeType

// Begin ScriptStruct FAudioMaterialEnvelopeSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeSettings;
class UScriptStruct* FAudioMaterialEnvelopeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioMaterialEnvelopeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeSettings.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioMaterialEnvelopeSettings>()
{
	return FAudioMaterialEnvelopeSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeType_MetaData[] = {
		{ "Category", "Envelope|Type" },
		{ "Comment", "/**\n\x09* The Type of the envelope curve.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "The Type of the envelope curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCurve_MetaData[] = {
		{ "Category", "Envelope|Attack" },
		{ "Comment", "/**\n\x09* Curve of the envelopes attack stage.\n\x09* Attack is the time taken for the rise of the level from zero to a given value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "Curve of the envelopes attack stage.\nAttack is the time taken for the rise of the level from zero to a given value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackValue_MetaData[] = {
		{ "Category", "Envelope|Attack" },
		{ "Comment", "/**\n\x09* Value of the envelopes attack stage.\n\x09* Attack is the time taken for the rise of the level from zero to a given value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "Value of the envelopes attack stage.\nAttack is the time taken for the rise of the level from zero to a given value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[] = {
		{ "Category", "Envelope|Attack" },
		{ "Comment", "/**\n\x09* Time the Value reaches the Attack stage.\n\x09* Attack is the time taken for the rise of the level from zero to a given value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "Time the Value reaches the Attack stage.\nAttack is the time taken for the rise of the level from zero to a given value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayCurve_MetaData[] = {
		{ "Category", "Envelope|Decay" },
		{ "Comment", "/**\n\x09* Curve of the envelopes Decay stage.\n\x09* Decay is the time taken for the level to reduce from the attack level to the sustain level.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "Curve of the envelopes Decay stage.\nDecay is the time taken for the level to reduce from the attack level to the sustain level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[] = {
		{ "Category", "Envelope|Decay" },
		{ "Comment", "/**\n\x09* Time that takes to reach the level of the Sustain stage.\n\x09* Decay is the time taken for the level to reduce from the attack level to the sustain level.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "Time that takes to reach the level of the Sustain stage.\nDecay is the time taken for the level to reduce from the attack level to the sustain level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SustainValue_MetaData[] = {
		{ "Category", "Envelope|Sustain" },
		{ "Comment", "/**\n\x09* Value of the envelopes Sustain stage.\n\x09* Sustain is the level maintained until release stage.\n\x09*/" },
		{ "EditCondition", "EnvelopeType==EAudioMaterialEnvelopeType::ADSR" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "Value of the envelopes Sustain stage.\nSustain is the level maintained until release stage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseCurve_MetaData[] = {
		{ "Category", "Envelope|Release" },
		{ "Comment", "/**\n\x09* Curve of the envelopes Release stage.\n\x09* Release is the time taken for the level to decay from sustain to zero.\n\x09*/" },
		{ "EditCondition", "EnvelopeType==EAudioMaterialEnvelopeType::ADSR" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "Curve of the envelopes Release stage.\nRelease is the time taken for the level to decay from sustain to zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "Envelope|Release" },
		{ "Comment", "/**\n\x09* Time that takes to reach zero level\n\x09* Release is the time taken for the level to decay from sustain to zero.\n\x09*/" },
		{ "EditCondition", "EnvelopeType==EAudioMaterialEnvelopeType::ADSR" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioMaterialSlate/AudioMaterialEnvelopeSettings.h" },
		{ "ToolTip", "Time that takes to reach zero level\nRelease is the time taken for the level to decay from sustain to zero." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnvelopeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnvelopeType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SustainValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMaterialEnvelopeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_EnvelopeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_EnvelopeType = { "EnvelopeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeSettings, EnvelopeType), Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeType_MetaData), NewProp_EnvelopeType_MetaData) }; // 3898170009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_AttackCurve = { "AttackCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeSettings, AttackCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCurve_MetaData), NewProp_AttackCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_AttackValue = { "AttackValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeSettings, AttackValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackValue_MetaData), NewProp_AttackValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeSettings, AttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTime_MetaData), NewProp_AttackTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_DecayCurve = { "DecayCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeSettings, DecayCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayCurve_MetaData), NewProp_DecayCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeSettings, DecayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayTime_MetaData), NewProp_DecayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_SustainValue = { "SustainValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeSettings, SustainValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SustainValue_MetaData), NewProp_SustainValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_ReleaseCurve = { "ReleaseCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeSettings, ReleaseCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseCurve_MetaData), NewProp_ReleaseCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioMaterialEnvelopeSettings, ReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseTime_MetaData), NewProp_ReleaseTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_EnvelopeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_EnvelopeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_AttackCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_AttackValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_AttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_DecayCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_DecayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_SustainValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_ReleaseCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewProp_ReleaseTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	&NewStructOps,
	"AudioMaterialEnvelopeSettings",
	Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::PropPointers),
	sizeof(FAudioMaterialEnvelopeSettings),
	alignof(FAudioMaterialEnvelopeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeSettings.InnerSingleton, Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeSettings.InnerSingleton;
}
// End ScriptStruct FAudioMaterialEnvelopeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioMaterialEnvelopeType_StaticEnum, TEXT("EAudioMaterialEnvelopeType"), &Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3898170009U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioMaterialEnvelopeSettings::StaticStruct, Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewStructOps, TEXT("AudioMaterialEnvelopeSettings"), &Z_Registration_Info_UScriptStruct_AudioMaterialEnvelopeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMaterialEnvelopeSettings), 4140642188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h_3063951956(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
