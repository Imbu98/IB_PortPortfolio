// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundConcurrency() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMaxConcurrentResolutionRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule;
static UEnum* EMaxConcurrentResolutionRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaxConcurrentResolutionRule"));
	}
	return Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaxConcurrentResolutionRule::Type>()
{
	return EMaxConcurrentResolutionRule_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Count.Hidden", "" },
		{ "Count.Name", "EMaxConcurrentResolutionRule::Count" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "PreventNew.Comment", "/** When Max Concurrent sounds are active do not start a new sound. */" },
		{ "PreventNew.Name", "EMaxConcurrentResolutionRule::PreventNew" },
		{ "PreventNew.ToolTip", "When Max Concurrent sounds are active do not start a new sound." },
		{ "StopFarthestThenOldest.Comment", "/** When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then stop the oldest. */" },
		{ "StopFarthestThenOldest.Name", "EMaxConcurrentResolutionRule::StopFarthestThenOldest" },
		{ "StopFarthestThenOldest.ToolTip", "When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then stop the oldest." },
		{ "StopFarthestThenPreventNew.Comment", "/** When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then do not start a new sound. */" },
		{ "StopFarthestThenPreventNew.Name", "EMaxConcurrentResolutionRule::StopFarthestThenPreventNew" },
		{ "StopFarthestThenPreventNew.ToolTip", "When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then do not start a new sound." },
		{ "StopLowestPriority.Comment", "/** Stop the lowest priority sound in the group. If all sounds are the same priority, then it will stop the oldest sound in the group. */" },
		{ "StopLowestPriority.Name", "EMaxConcurrentResolutionRule::StopLowestPriority" },
		{ "StopLowestPriority.ToolTip", "Stop the lowest priority sound in the group. If all sounds are the same priority, then it will stop the oldest sound in the group." },
		{ "StopLowestPriorityThenPreventNew.Comment", "/** Stop the lowest priority sound in the group. If all sounds are the same priority, then it won't play a new sound. */" },
		{ "StopLowestPriorityThenPreventNew.Name", "EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew" },
		{ "StopLowestPriorityThenPreventNew.ToolTip", "Stop the lowest priority sound in the group. If all sounds are the same priority, then it won't play a new sound." },
		{ "StopOldest.Comment", "/** When Max Concurrent sounds are active stop the oldest and start a new one. */" },
		{ "StopOldest.Name", "EMaxConcurrentResolutionRule::StopOldest" },
		{ "StopOldest.ToolTip", "When Max Concurrent sounds are active stop the oldest and start a new one." },
		{ "StopQuietest.Comment", "/** Stop the sound that is quietest in the group. */" },
		{ "StopQuietest.Name", "EMaxConcurrentResolutionRule::StopQuietest" },
		{ "StopQuietest.ToolTip", "Stop the sound that is quietest in the group." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMaxConcurrentResolutionRule::PreventNew", (int64)EMaxConcurrentResolutionRule::PreventNew },
		{ "EMaxConcurrentResolutionRule::StopOldest", (int64)EMaxConcurrentResolutionRule::StopOldest },
		{ "EMaxConcurrentResolutionRule::StopFarthestThenPreventNew", (int64)EMaxConcurrentResolutionRule::StopFarthestThenPreventNew },
		{ "EMaxConcurrentResolutionRule::StopFarthestThenOldest", (int64)EMaxConcurrentResolutionRule::StopFarthestThenOldest },
		{ "EMaxConcurrentResolutionRule::StopLowestPriority", (int64)EMaxConcurrentResolutionRule::StopLowestPriority },
		{ "EMaxConcurrentResolutionRule::StopQuietest", (int64)EMaxConcurrentResolutionRule::StopQuietest },
		{ "EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew", (int64)EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew },
		{ "EMaxConcurrentResolutionRule::Count", (int64)EMaxConcurrentResolutionRule::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaxConcurrentResolutionRule",
	"EMaxConcurrentResolutionRule::Type",
	Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule()
{
	if (!Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.InnerSingleton, Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.InnerSingleton;
}
// End Enum EMaxConcurrentResolutionRule

// Begin Enum EConcurrencyVolumeScaleMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode;
static UEnum* EConcurrencyVolumeScaleMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EConcurrencyVolumeScaleMode"));
	}
	return Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EConcurrencyVolumeScaleMode>()
{
	return EConcurrencyVolumeScaleMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Comment", "/* Scales volume of older sounds more than newer sounds (default) */" },
		{ "Default.Name", "EConcurrencyVolumeScaleMode::Default" },
		{ "Default.ToolTip", "Scales volume of older sounds more than newer sounds (default)" },
		{ "Distance.Comment", "/* Scales distant sounds by volume scalar more than closer sounds */" },
		{ "Distance.Name", "EConcurrencyVolumeScaleMode::Distance" },
		{ "Distance.ToolTip", "Scales distant sounds by volume scalar more than closer sounds" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "Priority.Comment", "/* Scales lower priority sounds by volume scalar more than closer sounds */" },
		{ "Priority.Name", "EConcurrencyVolumeScaleMode::Priority" },
		{ "Priority.ToolTip", "Scales lower priority sounds by volume scalar more than closer sounds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConcurrencyVolumeScaleMode::Default", (int64)EConcurrencyVolumeScaleMode::Default },
		{ "EConcurrencyVolumeScaleMode::Distance", (int64)EConcurrencyVolumeScaleMode::Distance },
		{ "EConcurrencyVolumeScaleMode::Priority", (int64)EConcurrencyVolumeScaleMode::Priority },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EConcurrencyVolumeScaleMode",
	"EConcurrencyVolumeScaleMode",
	Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode()
{
	if (!Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.InnerSingleton, Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.InnerSingleton;
}
// End Enum EConcurrencyVolumeScaleMode

// Begin ScriptStruct FSoundConcurrencySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundConcurrencySettings;
class UScriptStruct* FSoundConcurrencySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundConcurrencySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundConcurrencySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundConcurrencySettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundConcurrencySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundConcurrencySettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundConcurrencySettings>()
{
	return FSoundConcurrencySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The max number of allowable concurrent active voices for voices playing in this concurrency group. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "The max number of allowable concurrent active voices for voices playing in this concurrency group." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitToOwner_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/* Whether or not to limit the concurrency to per sound owner (i.e. the actor that plays the sound). If the sound doesn't have an owner, it falls back to global concurrency. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Whether or not to limit the concurrency to per sound owner (i.e. the actor that plays the sound). If the sound doesn't have an owner, it falls back to global concurrency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVolumeScaleCanRelease_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "Comment", "/**\n\x09 * Whether or not volume scaling can recover volume ducking behavior when concurrency group sounds stop (default scale mode only).\n\x09 */" },
		{ "DisplayName", "Can Recover" },
		{ "EditCondition", "VolumeScaleMode == EConcurrencyVolumeScaleMode::Default" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Whether or not volume scaling can recover volume ducking behavior when concurrency group sounds stop (default scale mode only)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionRule_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** Which concurrency resolution policy to use if max voice count is reached. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Which concurrency resolution policy to use if max voice count is reached." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetriggerTime_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of time to wait (in seconds) between different sounds which play with this concurrency. Sounds rejected from this will ignore virtualization settings. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Amount of time to wait (in seconds) between different sounds which play with this concurrency. Sounds rejected from this will ignore virtualization settings." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeScale_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Ducking factor to apply per older voice instance (generation), which compounds based on scaling mode\n\x09 * and (optionally) revives them as they stop according to the provided attack/release times.\n\x09 * \n\x09 * Note: This is not applied until after StopQuietest rules are evaluated, in order to avoid thrashing sounds.\n\x09 *\n\x09 * AppliedVolumeScale = Math.Pow(DuckingScale, VoiceGeneration)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Ducking factor to apply per older voice instance (generation), which compounds based on scaling mode\nand (optionally) revives them as they stop according to the provided attack/release times.\n\nNote: This is not applied until after StopQuietest rules are evaluated, in order to avoid thrashing sounds.\n\nAppliedVolumeScale = Math.Pow(DuckingScale, VoiceGeneration)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeScaleMode_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "Comment", "/** Volume Scale mode designating how to scale voice volume based on number of member sounds active in group. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Volume Scale mode designating how to scale voice volume based on number of member sounds active in group." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeScaleAttackTime_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Time taken to apply duck using volume scalar.\n\x09 */" },
		{ "DisplayName", "Duck Time" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Time taken to apply duck using volume scalar." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeScaleReleaseTime_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Time taken to recover volume scalar duck.\n\x09 */" },
		{ "DisplayName", "Recover Time" },
		{ "EditCondition", "bVolumeScaleCanRelease && VolumeScaleMode == EConcurrencyVolumeScaleMode::Default" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Time taken to recover volume scalar duck." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceStealReleaseTime_MetaData[] = {
		{ "Category", "Voice Stealing" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Time taken to fade out if voice is evicted or culled due to another voice in the group starting.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Time taken to fade out if voice is evicted or culled due to another voice in the group starting." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
	static void NewProp_bLimitToOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitToOwner;
	static void NewProp_bVolumeScaleCanRelease_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVolumeScaleCanRelease;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResolutionRule;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RetriggerTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeScaleMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VolumeScaleMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeScaleAttackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeScaleReleaseTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceStealReleaseTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundConcurrencySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundConcurrencySettings, MaxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCount_MetaData), NewProp_MaxCount_MetaData) };
void Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner_SetBit(void* Obj)
{
	((FSoundConcurrencySettings*)Obj)->bLimitToOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner = { "bLimitToOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundConcurrencySettings), &Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitToOwner_MetaData), NewProp_bLimitToOwner_MetaData) };
void Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_SetBit(void* Obj)
{
	((FSoundConcurrencySettings*)Obj)->bVolumeScaleCanRelease = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease = { "bVolumeScaleCanRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundConcurrencySettings), &Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVolumeScaleCanRelease_MetaData), NewProp_bVolumeScaleCanRelease_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_ResolutionRule = { "ResolutionRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundConcurrencySettings, ResolutionRule), Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionRule_MetaData), NewProp_ResolutionRule_MetaData) }; // 236880771
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_RetriggerTime = { "RetriggerTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundConcurrencySettings, RetriggerTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetriggerTime_MetaData), NewProp_RetriggerTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScale = { "VolumeScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeScale_MetaData), NewProp_VolumeScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode = { "VolumeScaleMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScaleMode), Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeScaleMode_MetaData), NewProp_VolumeScaleMode_MetaData) }; // 4204038379
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime = { "VolumeScaleAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScaleAttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeScaleAttackTime_MetaData), NewProp_VolumeScaleAttackTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime = { "VolumeScaleReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScaleReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeScaleReleaseTime_MetaData), NewProp_VolumeScaleReleaseTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime = { "VoiceStealReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VoiceStealReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceStealReleaseTime_MetaData), NewProp_VoiceStealReleaseTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_MaxCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_ResolutionRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_RetriggerTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundConcurrencySettings",
	Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::PropPointers),
	sizeof(FSoundConcurrencySettings),
	alignof(FSoundConcurrencySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundConcurrencySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundConcurrencySettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundConcurrencySettings.InnerSingleton;
}
// End ScriptStruct FSoundConcurrencySettings

// Begin Class USoundConcurrency
void USoundConcurrency::StaticRegisterNativesUSoundConcurrency()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundConcurrency);
UClass* Z_Construct_UClass_USoundConcurrency_NoRegister()
{
	return USoundConcurrency::StaticClass();
}
struct Z_Construct_UClass_USoundConcurrency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundConcurrency.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Concurrency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundConcurrency>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundConcurrency_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundConcurrency, Concurrency), Z_Construct_UScriptStruct_FSoundConcurrencySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Concurrency_MetaData), NewProp_Concurrency_MetaData) }; // 1059097620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundConcurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundConcurrency_Statics::NewProp_Concurrency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundConcurrency_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundConcurrency_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundConcurrency_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundConcurrency_Statics::ClassParams = {
	&USoundConcurrency::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundConcurrency_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundConcurrency_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundConcurrency_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundConcurrency_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundConcurrency()
{
	if (!Z_Registration_Info_UClass_USoundConcurrency.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundConcurrency.OuterSingleton, Z_Construct_UClass_USoundConcurrency_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundConcurrency.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundConcurrency>()
{
	return USoundConcurrency::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundConcurrency);
USoundConcurrency::~USoundConcurrency() {}
// End Class USoundConcurrency

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaxConcurrentResolutionRule_StaticEnum, TEXT("EMaxConcurrentResolutionRule"), &Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 236880771U) },
		{ EConcurrencyVolumeScaleMode_StaticEnum, TEXT("EConcurrencyVolumeScaleMode"), &Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4204038379U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundConcurrencySettings::StaticStruct, Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewStructOps, TEXT("SoundConcurrencySettings"), &Z_Registration_Info_UScriptStruct_SoundConcurrencySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundConcurrencySettings), 1059097620U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundConcurrency, USoundConcurrency::StaticClass, TEXT("USoundConcurrency"), &Z_Registration_Info_UClass_USoundConcurrency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundConcurrency), 2031605285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_3237230295(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
