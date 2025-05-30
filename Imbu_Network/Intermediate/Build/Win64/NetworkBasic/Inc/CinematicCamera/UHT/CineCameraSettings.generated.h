// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineCameraSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraSettings;
struct FCameraFilmbackSettings;
struct FCameraLensSettings;
struct FNamedFilmbackPreset;
struct FNamedLensPreset;
struct FNamedPlateCropPreset;
struct FPlateCropSettings;
#ifdef CINEMATICCAMERA_CineCameraSettings_generated_h
#error "CineCameraSettings.generated.h already included, missing '#pragma once' in CineCameraSettings.h"
#endif
#define CINEMATICCAMERA_CineCameraSettings_generated_h

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraFilmbackSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FNamedFilmbackPreset>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraLensSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraLensSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedLensPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FNamedLensPreset>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlateCropSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FPlateCropSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FNamedPlateCropPreset>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_208_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraTrackingFocusSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_232_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraFocusSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_285_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCropPresetNames); \
	DECLARE_FUNCTION(execGetFilmbackPresetNames); \
	DECLARE_FUNCTION(execGetLensPresetNames); \
	DECLARE_FUNCTION(execSetCropPresets); \
	DECLARE_FUNCTION(execSetDefaultCropPresetName); \
	DECLARE_FUNCTION(execSetFilmbackPresets); \
	DECLARE_FUNCTION(execSetDefaultFilmbackPreset); \
	DECLARE_FUNCTION(execSetLensPresets); \
	DECLARE_FUNCTION(execSetDefaultLensFStop); \
	DECLARE_FUNCTION(execSetDefaultLensFocalLength); \
	DECLARE_FUNCTION(execSetDefaultLensPresetName); \
	DECLARE_FUNCTION(execGetCineCameraSettings); \
	DECLARE_FUNCTION(execGetCropPresetByName); \
	DECLARE_FUNCTION(execGetFilmbackPresetByName); \
	DECLARE_FUNCTION(execGetLensPresetByName);


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_285_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineCameraSettings(); \
	friend struct Z_Construct_UClass_UCineCameraSettings_Statics; \
public: \
	DECLARE_CLASS(UCineCameraSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), CINEMATICCAMERA_API) \
	DECLARE_SERIALIZER(UCineCameraSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_285_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CINEMATICCAMERA_API UCineCameraSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCineCameraSettings(UCineCameraSettings&&); \
	UCineCameraSettings(const UCineCameraSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEMATICCAMERA_API, UCineCameraSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineCameraSettings) \
	CINEMATICCAMERA_API virtual ~UCineCameraSettings();


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_282_PROLOG
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_285_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_285_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_285_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_285_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERA_API UClass* StaticClass<class UCineCameraSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h


#define FOREACH_ENUM_ECAMERAFOCUSMETHOD(op) \
	op(ECameraFocusMethod::DoNotOverride) \
	op(ECameraFocusMethod::Manual) \
	op(ECameraFocusMethod::Tracking) \
	op(ECameraFocusMethod::Disable) 

enum class ECameraFocusMethod : uint8;
template<> struct TIsUEnumClass<ECameraFocusMethod> { enum { Value = true }; };
template<> CINEMATICCAMERA_API UEnum* StaticEnum<ECameraFocusMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
