// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationDestination() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModulationDestination();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModulationRouting();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EModulationRouting
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModulationRouting;
static UEnum* EModulationRouting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModulationRouting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModulationRouting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EModulationRouting, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EModulationRouting"));
	}
	return Z_Registration_Info_UEnum_EModulationRouting.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EModulationRouting>()
{
	return EModulationRouting_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EModulationRouting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disable.Comment", "/* Disables modulation routing */" },
		{ "Disable.Name", "EModulationRouting::Disable" },
		{ "Disable.ToolTip", "Disables modulation routing" },
		{ "Inherit.Comment", "/* Inherits modulation routing (AudioComponent inherits from Sound, Sound inherits from SoundClass) */" },
		{ "Inherit.Name", "EModulationRouting::Inherit" },
		{ "Inherit.ToolTip", "Inherits modulation routing (AudioComponent inherits from Sound, Sound inherits from SoundClass)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "Override.Comment", "/* Ignores inherited settings and uses modulation settings on this object */" },
		{ "Override.Name", "EModulationRouting::Override" },
		{ "Override.ToolTip", "Ignores inherited settings and uses modulation settings on this object" },
		{ "Union.Comment", "/* Performs set union on local modulation sources with those inherited (AudioComponent inherits from Sound, Sound inherits from SoundClass) */" },
		{ "Union.Name", "EModulationRouting::Union" },
		{ "Union.ToolTip", "Performs set union on local modulation sources with those inherited (AudioComponent inherits from Sound, Sound inherits from SoundClass)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModulationRouting::Disable", (int64)EModulationRouting::Disable },
		{ "EModulationRouting::Inherit", (int64)EModulationRouting::Inherit },
		{ "EModulationRouting::Override", (int64)EModulationRouting::Override },
		{ "EModulationRouting::Union", (int64)EModulationRouting::Union },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EModulationRouting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EModulationRouting",
	"EModulationRouting",
	Z_Construct_UEnum_Engine_EModulationRouting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModulationRouting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModulationRouting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EModulationRouting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EModulationRouting()
{
	if (!Z_Registration_Info_UEnum_EModulationRouting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModulationRouting.InnerSingleton, Z_Construct_UEnum_Engine_EModulationRouting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModulationRouting.InnerSingleton;
}
// End Enum EModulationRouting

// Begin Enum EModulationDestination
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModulationDestination;
static UEnum* EModulationDestination_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EModulationDestination, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EModulationDestination"));
	}
	return Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EModulationDestination>()
{
	return EModulationDestination_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EModulationDestination_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EModulationDestination::Count" },
		{ "Highpass.Comment", "/* Cutoff Frequency of a highpass filter */" },
		{ "Highpass.Name", "EModulationDestination::Highpass" },
		{ "Highpass.ToolTip", "Cutoff Frequency of a highpass filter" },
		{ "Lowpass.Comment", "/* Cutoff Frequency of a lowpass filter */" },
		{ "Lowpass.Name", "EModulationDestination::Lowpass" },
		{ "Lowpass.ToolTip", "Cutoff Frequency of a lowpass filter" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "Pitch.Comment", "/* Pitch modulation */" },
		{ "Pitch.Name", "EModulationDestination::Pitch" },
		{ "Pitch.ToolTip", "Pitch modulation" },
		{ "Volume.Comment", "/* Volume modulation */" },
		{ "Volume.Name", "EModulationDestination::Volume" },
		{ "Volume.ToolTip", "Volume modulation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModulationDestination::Volume", (int64)EModulationDestination::Volume },
		{ "EModulationDestination::Pitch", (int64)EModulationDestination::Pitch },
		{ "EModulationDestination::Lowpass", (int64)EModulationDestination::Lowpass },
		{ "EModulationDestination::Highpass", (int64)EModulationDestination::Highpass },
		{ "EModulationDestination::Count", (int64)EModulationDestination::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EModulationDestination_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EModulationDestination",
	"EModulationDestination",
	Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EModulationDestination()
{
	if (!Z_Registration_Info_UEnum_EModulationDestination.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModulationDestination.InnerSingleton, Z_Construct_UEnum_Engine_EModulationDestination_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModulationDestination.InnerSingleton;
}
// End Enum EModulationDestination

// Begin ScriptStruct FSoundModulationDestinationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundModulationDestinationSettings;
class UScriptStruct* FSoundModulationDestinationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationDestinationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundModulationDestinationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundModulationDestinationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationDestinationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundModulationDestinationSettings>()
{
	return FSoundModulationDestinationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameter destination settings allowing modulation control override for parameter destinations opting in to the Modulation System. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Parameter destination settings allowing modulation control override for parameter destinations opting in to the Modulation System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Base value of parameter */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Base value of parameter" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableModulation_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Whether or not to enable modulation */" },
		{ "DisplayName", "Modulate" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Whether or not to enable modulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Set of modulation sources, which provides values to mix with base value. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Set of modulation sources, which provides values to mix with base value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_EDITORONLY_DATA
	static void NewProp_bEnableModulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableModulation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationDestinationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDestinationSettings, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation_SetBit(void* Obj)
{
	((FSoundModulationDestinationSettings*)Obj)->bEnableModulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation = { "bEnableModulation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundModulationDestinationSettings), &Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableModulation_MetaData), NewProp_bEnableModulation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDestinationSettings, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulator_MetaData), NewProp_Modulator_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDestinationSettings, Modulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulators_MetaData), NewProp_Modulators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Value,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulator,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundModulationDestinationSettings",
	Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::PropPointers),
	sizeof(FSoundModulationDestinationSettings),
	alignof(FSoundModulationDestinationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationDestinationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundModulationDestinationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationDestinationSettings.InnerSingleton;
}
// End ScriptStruct FSoundModulationDestinationSettings

// Begin ScriptStruct FSoundModulationDefaultSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundModulationDefaultSettings;
class UScriptStruct* FSoundModulationDefaultSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationDefaultSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundModulationDefaultSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundModulationDefaultSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationDefaultSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundModulationDefaultSettings>()
{
	return FSoundModulationDefaultSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Default parameter destination settings for source audio object. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Default parameter destination settings for source audio object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationDestination_MetaData[] = {
		{ "AudioParam", "Volume" },
		{ "AudioParamClass", "SoundModulationParameterVolume" },
		{ "Category", "Modulation" },
		{ "Comment", "/** Volume modulation */" },
		{ "DisplayName", "Volume" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Volume modulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchModulationDestination_MetaData[] = {
		{ "AudioParam", "Pitch" },
		{ "AudioParamClass", "SoundModulationParameterBipolar" },
		{ "Category", "Modulation" },
		{ "Comment", "/** Pitch modulation */" },
		{ "DisplayName", "Pitch" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Pitch modulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighpassModulationDestination_MetaData[] = {
		{ "AudioParam", "HPFCutoffFrequency" },
		{ "AudioParamClass", "SoundModulationParameterHPFFrequency" },
		{ "Category", "Modulation" },
		{ "Comment", "/** Highpass modulation */" },
		{ "DisplayName", "Highpass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Highpass modulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowpassModulationDestination_MetaData[] = {
		{ "AudioParam", "LPFCutoffFrequency" },
		{ "AudioParamClass", "SoundModulationParameterLPFFrequency" },
		{ "Category", "Modulation" },
		{ "Comment", "/** Lowpass modulation */" },
		{ "DisplayName", "Lowpass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Lowpass modulation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeModulationDestination;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchModulationDestination;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighpassModulationDestination;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowpassModulationDestination;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationDefaultSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_VolumeModulationDestination = { "VolumeModulationDestination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDefaultSettings, VolumeModulationDestination), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeModulationDestination_MetaData), NewProp_VolumeModulationDestination_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_PitchModulationDestination = { "PitchModulationDestination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDefaultSettings, PitchModulationDestination), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchModulationDestination_MetaData), NewProp_PitchModulationDestination_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_HighpassModulationDestination = { "HighpassModulationDestination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDefaultSettings, HighpassModulationDestination), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighpassModulationDestination_MetaData), NewProp_HighpassModulationDestination_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_LowpassModulationDestination = { "LowpassModulationDestination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDefaultSettings, LowpassModulationDestination), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowpassModulationDestination_MetaData), NewProp_LowpassModulationDestination_MetaData) }; // 4199692720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_VolumeModulationDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_PitchModulationDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_HighpassModulationDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_LowpassModulationDestination,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundModulationDefaultSettings",
	Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::PropPointers),
	sizeof(FSoundModulationDefaultSettings),
	alignof(FSoundModulationDefaultSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationDefaultSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundModulationDefaultSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationDefaultSettings.InnerSingleton;
}
// End ScriptStruct FSoundModulationDefaultSettings

// Begin ScriptStruct FSoundModulationDefaultRoutingSettings
static_assert(std::is_polymorphic<FSoundModulationDefaultRoutingSettings>() == std::is_polymorphic<FSoundModulationDefaultSettings>(), "USTRUCT FSoundModulationDefaultRoutingSettings cannot be polymorphic unless super FSoundModulationDefaultSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundModulationDefaultRoutingSettings;
class UScriptStruct* FSoundModulationDefaultRoutingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationDefaultRoutingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundModulationDefaultRoutingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundModulationDefaultRoutingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationDefaultRoutingSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundModulationDefaultRoutingSettings>()
{
	return FSoundModulationDefaultRoutingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Default parameter destination settings for source audio object. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Default parameter destination settings for source audio object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What volume modulation settings to use */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "What volume modulation settings to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What pitch modulation settings to use */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "What pitch modulation settings to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighpassRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What high-pass modulation settings to use */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "What high-pass modulation settings to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowpassRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What low-pass modulation settings to use */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "What low-pass modulation settings to use" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_VolumeRouting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VolumeRouting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PitchRouting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PitchRouting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighpassRouting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighpassRouting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LowpassRouting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LowpassRouting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationDefaultRoutingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting = { "VolumeRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDefaultRoutingSettings, VolumeRouting), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeRouting_MetaData), NewProp_VolumeRouting_MetaData) }; // 4117981061
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting = { "PitchRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDefaultRoutingSettings, PitchRouting), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRouting_MetaData), NewProp_PitchRouting_MetaData) }; // 4117981061
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting = { "HighpassRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDefaultRoutingSettings, HighpassRouting), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighpassRouting_MetaData), NewProp_HighpassRouting_MetaData) }; // 4117981061
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting = { "LowpassRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundModulationDefaultRoutingSettings, LowpassRouting), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowpassRouting_MetaData), NewProp_LowpassRouting_MetaData) }; // 4117981061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FSoundModulationDefaultSettings,
	&NewStructOps,
	"SoundModulationDefaultRoutingSettings",
	Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::PropPointers),
	sizeof(FSoundModulationDefaultRoutingSettings),
	alignof(FSoundModulationDefaultRoutingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationDefaultRoutingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundModulationDefaultRoutingSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationDefaultRoutingSettings.InnerSingleton;
}
// End ScriptStruct FSoundModulationDefaultRoutingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModulationRouting_StaticEnum, TEXT("EModulationRouting"), &Z_Registration_Info_UEnum_EModulationRouting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4117981061U) },
		{ EModulationDestination_StaticEnum, TEXT("EModulationDestination"), &Z_Registration_Info_UEnum_EModulationDestination, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3084830839U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundModulationDestinationSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewStructOps, TEXT("SoundModulationDestinationSettings"), &Z_Registration_Info_UScriptStruct_SoundModulationDestinationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundModulationDestinationSettings), 4199692720U) },
		{ FSoundModulationDefaultSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewStructOps, TEXT("SoundModulationDefaultSettings"), &Z_Registration_Info_UScriptStruct_SoundModulationDefaultSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundModulationDefaultSettings), 176483245U) },
		{ FSoundModulationDefaultRoutingSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewStructOps, TEXT("SoundModulationDefaultRoutingSettings"), &Z_Registration_Info_UScriptStruct_SoundModulationDefaultRoutingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundModulationDefaultRoutingSettings), 584551341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_2961752058(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
