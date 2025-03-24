// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCamerasSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_GameplayCamerasSettings_generated_h
#error "GameplayCamerasSettings.generated.h already included, missing '#pragma once' in GameplayCamerasSettings.h"
#endif
#define GAMEPLAYCAMERAS_GameplayCamerasSettings_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCamerasSettings(); \
	friend struct Z_Construct_UClass_UGameplayCamerasSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayCamerasSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UGameplayCamerasSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayCameras");} \



#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UGameplayCamerasSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayCamerasSettings(UGameplayCamerasSettings&&); \
	UGameplayCamerasSettings(const UGameplayCamerasSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UGameplayCamerasSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCamerasSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCamerasSettings) \
	GAMEPLAYCAMERAS_API virtual ~UGameplayCamerasSettings();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_15_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UGameplayCamerasSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameplayCamerasSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
