// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/BlueprintCameraPose.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class UCineCameraComponent;
struct FBlueprintCameraPose;
#ifdef GAMEPLAYCAMERAS_BlueprintCameraPose_generated_h
#error "BlueprintCameraPose.generated.h already included, missing '#pragma once' in BlueprintCameraPose.h"
#endif
#define GAMEPLAYCAMERAS_BlueprintCameraPose_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FBlueprintCameraPose>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeCameraPoseFromCineCameraComponent); \
	DECLARE_FUNCTION(execMakeCameraPoseFromCameraComponent); \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execGetTargetAtDistance); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execGetAimDir); \
	DECLARE_FUNCTION(execGetAimRay); \
	DECLARE_FUNCTION(execGetSensorAspectRatio); \
	DECLARE_FUNCTION(execGetEffectiveFieldOfView); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execSetFocalLength); \
	DECLARE_FUNCTION(execSetFieldOfView); \
	DECLARE_FUNCTION(execSetTargetDistance); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execGetFocalLength); \
	DECLARE_FUNCTION(execGetFieldOfView); \
	DECLARE_FUNCTION(execGetTargetDistance); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execGetLocation);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraPoseFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintCameraPoseFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintCameraPoseFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintCameraPoseFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintCameraPoseFunctionLibrary(UBlueprintCameraPoseFunctionLibrary&&); \
	UBlueprintCameraPoseFunctionLibrary(const UBlueprintCameraPoseFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintCameraPoseFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraPoseFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraPoseFunctionLibrary) \
	NO_API virtual ~UBlueprintCameraPoseFunctionLibrary();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_126_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UBlueprintCameraPoseFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
