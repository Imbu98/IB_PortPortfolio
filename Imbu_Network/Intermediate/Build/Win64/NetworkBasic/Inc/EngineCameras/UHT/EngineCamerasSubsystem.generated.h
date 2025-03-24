// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EngineCamerasSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCameraAnimationSequence;
struct FCameraAnimationHandle;
struct FCameraAnimationParams;
#ifdef ENGINECAMERAS_EngineCamerasSubsystem_generated_h
#error "EngineCamerasSubsystem.generated.h already included, missing '#pragma once' in EngineCamerasSubsystem.h"
#endif
#define ENGINECAMERAS_EngineCamerasSubsystem_generated_h

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopAllCameraAnimations); \
	DECLARE_FUNCTION(execStopAllCameraAnimationsOf); \
	DECLARE_FUNCTION(execStopCameraAnimation); \
	DECLARE_FUNCTION(execIsCameraAnimationActive); \
	DECLARE_FUNCTION(execPlayCameraAnimation);


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineCamerasSubsystem(); \
	friend struct Z_Construct_UClass_UEngineCamerasSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEngineCamerasSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineCameras"), NO_API) \
	DECLARE_SERIALIZER(UEngineCamerasSubsystem)


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineCamerasSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEngineCamerasSubsystem(UEngineCamerasSubsystem&&); \
	UEngineCamerasSubsystem(const UEngineCamerasSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineCamerasSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineCamerasSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEngineCamerasSubsystem) \
	NO_API virtual ~UEngineCamerasSubsystem();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_15_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINECAMERAS_API UClass* StaticClass<class UEngineCamerasSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
