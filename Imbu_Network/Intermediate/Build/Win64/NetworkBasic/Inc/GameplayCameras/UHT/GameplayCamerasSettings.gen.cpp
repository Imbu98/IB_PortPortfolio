// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameplayCamerasSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCamerasSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCamerasSettings();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCamerasSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UGameplayCamerasSettings
void UGameplayCamerasSettings::StaticRegisterNativesUGameplayCamerasSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCamerasSettings);
UClass* Z_Construct_UClass_UGameplayCamerasSettings_NoRegister()
{
	return UGameplayCamerasSettings::StaticClass();
}
struct Z_Construct_UClass_UGameplayCamerasSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The settings for the Gameplay Cameras runtime.\n */" },
		{ "DisplayName", "Gameplay Cameras" },
		{ "IncludePath", "GameplayCamerasSettings.h" },
		{ "ModuleRelativePath", "Public/GameplayCamerasSettings.h" },
		{ "ToolTip", "The settings for the Gameplay Cameras runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSpawnCameraSystemActor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * Automatically spawn a camera system actor when any gameplay camera activates and no camera system\n\x09 * is found on the player controller's camera manager, or as a view target. This camera system actor\n\x09 * will be spawned and set as the view target automatically.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayCamerasSettings.h" },
		{ "ToolTip", "Automatically spawn a camera system actor when any gameplay camera activates and no camera system\nis found on the player controller's camera manager, or as a view target. This camera system actor\nwill be spawned and set as the view target automatically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSpawnCameraSystemActorSetsControlRotation_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * Whether the automatically spawned camera system actor should set the control rotation on the\n\x09 * associated player controller. This is useful if camera rigs are managing their own rotation, e.g.\n\x09 * by specifying input slots on boom arms instead of using the existing control rotation.\n\x09 * Do not mix handling control rotation via camera nodes, and handling control rotation by calling\n\x09 * methods like AddYawInput/AddPitchInput/AddRollInput, as this can lead to a feedback loop.\n\x09 */" },
		{ "EditCondition", "bAutoSpawnCameraSystemActor" },
		{ "ModuleRelativePath", "Public/GameplayCamerasSettings.h" },
		{ "ToolTip", "Whether the automatically spawned camera system actor should set the control rotation on the\nassociated player controller. This is useful if camera rigs are managing their own rotation, e.g.\nby specifying input slots on boom arms instead of using the existing control rotation.\nDo not mix handling control rotation via camera nodes, and handling control rotation by calling\nmethods like AddYawInput/AddPitchInput/AddRollInput, as this can lead to a feedback loop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedCameraRigNumThreshold_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * The number of camera rigs combined in one frame past which the camera system emits a warning.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayCamerasSettings.h" },
		{ "ToolTip", "The number of camera rigs combined in one frame past which the camera system emits a warning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIKAimingAngleTolerance_MetaData[] = {
		{ "Category", "IK Aiming" },
		{ "Comment", "/** The default angle tolerance to accept an aiming operation. */" },
		{ "ModuleRelativePath", "Public/GameplayCamerasSettings.h" },
		{ "ToolTip", "The default angle tolerance to accept an aiming operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIKAimingDistanceTolerance_MetaData[] = {
		{ "Category", "IK Aiming" },
		{ "Comment", "/** The default distance tolerance to accept an aiming operation. */" },
		{ "ModuleRelativePath", "Public/GameplayCamerasSettings.h" },
		{ "ToolTip", "The default distance tolerance to accept an aiming operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIKAimingMaxIterations_MetaData[] = {
		{ "Category", "IK Aiming" },
		{ "Comment", "/** The default number of iterations for an aiming operation. */" },
		{ "ModuleRelativePath", "Public/GameplayCamerasSettings.h" },
		{ "ToolTip", "The default number of iterations for an aiming operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIKAimingMinDistance_MetaData[] = {
		{ "Category", "IK Aiming" },
		{ "Comment", "/** The distance below which any IK aiming operation is disabled. */" },
		{ "ModuleRelativePath", "Public/GameplayCamerasSettings.h" },
		{ "ToolTip", "The distance below which any IK aiming operation is disabled." },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoSpawnCameraSystemActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSpawnCameraSystemActor;
	static void NewProp_bAutoSpawnCameraSystemActorSetsControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSpawnCameraSystemActorSetsControlRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CombinedCameraRigNumThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultIKAimingAngleTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultIKAimingDistanceTolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultIKAimingMaxIterations;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultIKAimingMinDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCamerasSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_bAutoSpawnCameraSystemActor_SetBit(void* Obj)
{
	((UGameplayCamerasSettings*)Obj)->bAutoSpawnCameraSystemActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_bAutoSpawnCameraSystemActor = { "bAutoSpawnCameraSystemActor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayCamerasSettings), &Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_bAutoSpawnCameraSystemActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSpawnCameraSystemActor_MetaData), NewProp_bAutoSpawnCameraSystemActor_MetaData) };
void Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_bAutoSpawnCameraSystemActorSetsControlRotation_SetBit(void* Obj)
{
	((UGameplayCamerasSettings*)Obj)->bAutoSpawnCameraSystemActorSetsControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_bAutoSpawnCameraSystemActorSetsControlRotation = { "bAutoSpawnCameraSystemActorSetsControlRotation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayCamerasSettings), &Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_bAutoSpawnCameraSystemActorSetsControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSpawnCameraSystemActorSetsControlRotation_MetaData), NewProp_bAutoSpawnCameraSystemActorSetsControlRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_CombinedCameraRigNumThreshold = { "CombinedCameraRigNumThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCamerasSettings, CombinedCameraRigNumThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedCameraRigNumThreshold_MetaData), NewProp_CombinedCameraRigNumThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_DefaultIKAimingAngleTolerance = { "DefaultIKAimingAngleTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCamerasSettings, DefaultIKAimingAngleTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIKAimingAngleTolerance_MetaData), NewProp_DefaultIKAimingAngleTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_DefaultIKAimingDistanceTolerance = { "DefaultIKAimingDistanceTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCamerasSettings, DefaultIKAimingDistanceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIKAimingDistanceTolerance_MetaData), NewProp_DefaultIKAimingDistanceTolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_DefaultIKAimingMaxIterations = { "DefaultIKAimingMaxIterations", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCamerasSettings, DefaultIKAimingMaxIterations), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIKAimingMaxIterations_MetaData), NewProp_DefaultIKAimingMaxIterations_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_DefaultIKAimingMinDistance = { "DefaultIKAimingMinDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCamerasSettings, DefaultIKAimingMinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIKAimingMinDistance_MetaData), NewProp_DefaultIKAimingMinDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCamerasSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_bAutoSpawnCameraSystemActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_bAutoSpawnCameraSystemActorSetsControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_CombinedCameraRigNumThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_DefaultIKAimingAngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_DefaultIKAimingDistanceTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_DefaultIKAimingMaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCamerasSettings_Statics::NewProp_DefaultIKAimingMinDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCamerasSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayCamerasSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCamerasSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCamerasSettings_Statics::ClassParams = {
	&UGameplayCamerasSettings::StaticClass,
	"GameplayCameras",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayCamerasSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCamerasSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCamerasSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCamerasSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCamerasSettings()
{
	if (!Z_Registration_Info_UClass_UGameplayCamerasSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCamerasSettings.OuterSingleton, Z_Construct_UClass_UGameplayCamerasSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCamerasSettings.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UGameplayCamerasSettings>()
{
	return UGameplayCamerasSettings::StaticClass();
}
UGameplayCamerasSettings::UGameplayCamerasSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCamerasSettings);
UGameplayCamerasSettings::~UGameplayCamerasSettings() {}
// End Class UGameplayCamerasSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCamerasSettings, UGameplayCamerasSettings::StaticClass, TEXT("UGameplayCamerasSettings"), &Z_Registration_Info_UClass_UGameplayCamerasSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCamerasSettings), 3811270642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_97432317(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
