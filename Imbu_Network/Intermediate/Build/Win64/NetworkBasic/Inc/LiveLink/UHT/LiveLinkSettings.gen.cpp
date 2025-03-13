// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSettings();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSettings_NoRegister();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkUserSettings();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkUserSettings_NoRegister();
LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin ScriptStruct FLiveLinkRoleProjectSetting
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting;
class UScriptStruct* FLiveLinkRoleProjectSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("LiveLinkRoleProjectSetting"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.OuterSingleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FLiveLinkRoleProjectSetting>()
{
	return FLiveLinkRoleProjectSetting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLinkRole.\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Settings for LiveLinkRole." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The role of the current setting. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The role of the current setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingClass_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The settings class to use for the subject. If null, LiveLinkSubjectSettings will be used by default. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The settings class to use for the subject. If null, LiveLinkSubjectSettings will be used by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameInterpolationProcessor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The interpolation to use for the subject. If null, no interpolation will be performed. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The interpolation to use for the subject. If null, no interpolation will be performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramePreProcessors_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The pre processors to use for the subject. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The pre processors to use for the subject." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SettingClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FrameInterpolationProcessor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FramePreProcessors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FramePreProcessors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRoleProjectSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass = { "SettingClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, SettingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingClass_MetaData), NewProp_SettingClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor = { "FrameInterpolationProcessor", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameInterpolationProcessor_MetaData), NewProp_FrameInterpolationProcessor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_Inner = { "FramePreProcessors", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors = { "FramePreProcessors", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, FramePreProcessors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramePreProcessors_MetaData), NewProp_FramePreProcessors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	nullptr,
	&NewStructOps,
	"LiveLinkRoleProjectSetting",
	Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers),
	sizeof(FLiveLinkRoleProjectSetting),
	alignof(FLiveLinkRoleProjectSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.InnerSingleton;
}
// End ScriptStruct FLiveLinkRoleProjectSetting

// Begin Class ULiveLinkUserSettings
void ULiveLinkUserSettings::StaticRegisterNativesULiveLinkUserSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkUserSettings);
UClass* Z_Construct_UClass_ULiveLinkUserSettings_NoRegister()
{
	return ULiveLinkUserSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetSaveDir_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The default location in which to save LiveLink presets */" },
		{ "DisplayName", "Preset Save Location" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The default location in which to save LiveLink presets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetSaveDir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkUserSettings_Statics::NewProp_PresetSaveDir = { "PresetSaveDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkUserSettings, PresetSaveDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetSaveDir_MetaData), NewProp_PresetSaveDir_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkUserSettings_Statics::NewProp_PresetSaveDir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkUserSettings_Statics::ClassParams = {
	&ULiveLinkUserSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkUserSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkUserSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkUserSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkUserSettings.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkUserSettings>()
{
	return ULiveLinkUserSettings::StaticClass();
}
ULiveLinkUserSettings::ULiveLinkUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkUserSettings);
ULiveLinkUserSettings::~ULiveLinkUserSettings() {}
// End Class ULiveLinkUserSettings

// Begin Class ULiveLinkSettings
void ULiveLinkSettings::StaticRegisterNativesULiveLinkSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSettings);
UClass* Z_Construct_UClass_ULiveLinkSettings_NoRegister()
{
	return ULiveLinkSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLink.\n */" },
		{ "IncludePath", "LiveLinkSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Settings for LiveLink." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRoleSettings_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSettingsClass_MetaData[] = {
		{ "Comment", "/** When a settings class is not speficied for a role, this settings class will be used. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "When a settings class is not speficied for a role, this settings class will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameInterpolationProcessor_MetaData[] = {
		{ "Comment", "/** The interpolation class to use for new Subjects if no specific settings we set for the Subject's role. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The interpolation class to use for new Subjects if no specific settings we set for the Subject's role." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLiveLinkPreset_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The default preset that should be applied */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The default preset that should be applied" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetSaveDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClockOffsetCorrectionStep_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Continuous clock offset correction step */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Continuous clock offset correction step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMessageBusSourceMode_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The default evaluation mode a source connected via the message bus should start with. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The default evaluation mode a source connected via the message bus should start with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageBusPingRequestFrequency_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The refresh frequency of the list of message bus provider (when discovery is requested). */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The refresh frequency of the list of message bus provider (when discovery is requested)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageBusHeartbeatFrequency_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The refresh frequency of the heartbeat when a provider didn't send us an updated. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The refresh frequency of the heartbeat when a provider didn't send us an updated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageBusHeartbeatTimeout_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** How long we should wait before a provider become unresponsive. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "How long we should wait before a provider become unresponsive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageBusTimeBeforeRemovingInactiveSource_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Subjects will be removed when their source has been unresponsive for this long. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Subjects will be removed when their source has been unresponsive for this long." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreProcessRebroadcastFrames_MetaData[] = {
		{ "Comment", "/** Whether to Preprocess frames before rebroadcasting them. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Whether to Preprocess frames before rebroadcasting them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateRebroadcastFrames_MetaData[] = {
		{ "Comment", "/** Whether to translate frames before rebroadcasting them. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Whether to translate frames before rebroadcasting them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData[] = {
		{ "Category", "LiveLink|UI" },
		{ "Comment", "/**\n\x09 * A source may still exist but does not send frames for a subject.\n\x09 * Time before considering the subject as \"invalid\".\n\x09 * The subject still exists and can still be evaluated.\n\x09 * An invalid subject is shown as yellow in the LiveLink UI.\n\x09 */" },
		{ "DisplayName", "Time Without Frame to be Considered as Invalid" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "A source may still exist but does not send frames for a subject.\nTime before considering the subject as \"invalid\".\nThe subject still exists and can still be evaluated.\nAn invalid subject is shown as yellow in the LiveLink UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidColor_MetaData[] = {
		{ "Category", "LiveLink|UI" },
		{ "Comment", "/** Color for active Subjects receiving data from their Source. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Color for active Subjects receiving data from their Source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidColor_MetaData[] = {
		{ "Category", "LiveLink|UI" },
		{ "Comment", "/** Color for Subjects that have not received data from their Source for TimeWithoutFrameToBeConsiderAsInvalid. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Color for Subjects that have not received data from their Source for TimeWithoutFrameToBeConsiderAsInvalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextSizeSource_MetaData[] = {
		{ "Category", "LiveLink|UI|Debug" },
		{ "Comment", "/** Font size of Source names shown in LiveLink Debug View. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Font size of Source names shown in LiveLink Debug View." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextSizeSubject_MetaData[] = {
		{ "Category", "LiveLink|UI|Debug" },
		{ "Comment", "/** Font size of Subject names shown in LiveLink Debug View. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Font size of Subject names shown in LiveLink Debug View." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultRoleSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultRoleSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSettingsClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FrameInterpolationProcessor;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLiveLinkPreset;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetSaveDir;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClockOffsetCorrectionStep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMessageBusSourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultMessageBusSourceMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MessageBusPingRequestFrequency;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MessageBusHeartbeatFrequency;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MessageBusHeartbeatTimeout;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MessageBusTimeBeforeRemovingInactiveSource;
	static void NewProp_bPreProcessRebroadcastFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreProcessRebroadcastFrames;
	static void NewProp_bTranslateRebroadcastFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateRebroadcastFrames;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeWithoutFrameToBeConsiderAsInvalid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextSizeSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextSizeSubject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_Inner = { "DefaultRoleSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting, METADATA_PARAMS(0, nullptr) }; // 4060501782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings = { "DefaultRoleSettings", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, DefaultRoleSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRoleSettings_MetaData), NewProp_DefaultRoleSettings_MetaData) }; // 4060501782
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultSettingsClass = { "DefaultSettingsClass", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, DefaultSettingsClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSettingsClass_MetaData), NewProp_DefaultSettingsClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_FrameInterpolationProcessor = { "FrameInterpolationProcessor", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, FrameInterpolationProcessor), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameInterpolationProcessor_MetaData), NewProp_FrameInterpolationProcessor_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultLiveLinkPreset = { "DefaultLiveLinkPreset", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, DefaultLiveLinkPreset), Z_Construct_UClass_ULiveLinkPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLiveLinkPreset_MetaData), NewProp_DefaultLiveLinkPreset_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir = { "PresetSaveDir", nullptr, (EPropertyFlags)0x0010000820004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, PresetSaveDir_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetSaveDir_MetaData), NewProp_PresetSaveDir_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ClockOffsetCorrectionStep = { "ClockOffsetCorrectionStep", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, ClockOffsetCorrectionStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClockOffsetCorrectionStep_MetaData), NewProp_ClockOffsetCorrectionStep_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode = { "DefaultMessageBusSourceMode", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, DefaultMessageBusSourceMode), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMessageBusSourceMode_MetaData), NewProp_DefaultMessageBusSourceMode_MetaData) }; // 1781673180
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency = { "MessageBusPingRequestFrequency", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, MessageBusPingRequestFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageBusPingRequestFrequency_MetaData), NewProp_MessageBusPingRequestFrequency_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency = { "MessageBusHeartbeatFrequency", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, MessageBusHeartbeatFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageBusHeartbeatFrequency_MetaData), NewProp_MessageBusHeartbeatFrequency_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout = { "MessageBusHeartbeatTimeout", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, MessageBusHeartbeatTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageBusHeartbeatTimeout_MetaData), NewProp_MessageBusHeartbeatTimeout_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusTimeBeforeRemovingInactiveSource = { "MessageBusTimeBeforeRemovingInactiveSource", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, MessageBusTimeBeforeRemovingInactiveSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageBusTimeBeforeRemovingInactiveSource_MetaData), NewProp_MessageBusTimeBeforeRemovingInactiveSource_MetaData) };
void Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bPreProcessRebroadcastFrames_SetBit(void* Obj)
{
	((ULiveLinkSettings*)Obj)->bPreProcessRebroadcastFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bPreProcessRebroadcastFrames = { "bPreProcessRebroadcastFrames", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkSettings), &Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bPreProcessRebroadcastFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreProcessRebroadcastFrames_MetaData), NewProp_bPreProcessRebroadcastFrames_MetaData) };
void Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bTranslateRebroadcastFrames_SetBit(void* Obj)
{
	((ULiveLinkSettings*)Obj)->bTranslateRebroadcastFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bTranslateRebroadcastFrames = { "bTranslateRebroadcastFrames", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkSettings), &Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bTranslateRebroadcastFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTranslateRebroadcastFrames_MetaData), NewProp_bTranslateRebroadcastFrames_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid = { "TimeWithoutFrameToBeConsiderAsInvalid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, TimeWithoutFrameToBeConsiderAsInvalid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData), NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor = { "ValidColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, ValidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidColor_MetaData), NewProp_ValidColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor = { "InvalidColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, InvalidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidColor_MetaData), NewProp_InvalidColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSource = { "TextSizeSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, TextSizeSource), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextSizeSource_MetaData), NewProp_TextSizeSource_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSubject = { "TextSizeSubject", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSettings, TextSizeSubject), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextSizeSubject_MetaData), NewProp_TextSizeSubject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultSettingsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_FrameInterpolationProcessor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultLiveLinkPreset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ClockOffsetCorrectionStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusTimeBeforeRemovingInactiveSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bPreProcessRebroadcastFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bTranslateRebroadcastFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSubject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSettings_Statics::ClassParams = {
	&ULiveLinkSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkSettings.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkSettings>()
{
	return ULiveLinkSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSettings);
ULiveLinkSettings::~ULiveLinkSettings() {}
// End Class ULiveLinkSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkRoleProjectSetting::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewStructOps, TEXT("LiveLinkRoleProjectSetting"), &Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkRoleProjectSetting), 4060501782U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkUserSettings, ULiveLinkUserSettings::StaticClass, TEXT("ULiveLinkUserSettings"), &Z_Registration_Info_UClass_ULiveLinkUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkUserSettings), 138303419U) },
		{ Z_Construct_UClass_ULiveLinkSettings, ULiveLinkSettings::StaticClass, TEXT("ULiveLinkSettings"), &Z_Registration_Info_UClass_ULiveLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSettings), 126963226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_1366552521(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
