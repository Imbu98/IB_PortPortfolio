// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Directors/BlueprintCameraDirector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCameraRigAsset;
class UCameraRigProxyAsset;
struct FBlueprintCameraDirectorActivateParams;
struct FBlueprintCameraDirectorDeactivateParams;
struct FBlueprintCameraDirectorEvaluationParams;
struct FBlueprintCameraPose;
struct FBlueprintCameraVariableTable;
#ifdef GAMEPLAYCAMERAS_BlueprintCameraDirector_generated_h
#error "BlueprintCameraDirector.generated.h already included, missing '#pragma once' in BlueprintCameraDirector.h"
#endif
#define GAMEPLAYCAMERAS_BlueprintCameraDirector_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FBlueprintCameraDirectorActivateParams>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FBlueprintCameraDirectorDeactivateParams>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FBlueprintCameraDirectorEvaluationParams>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInitialContextVariableTable); \
	DECLARE_FUNCTION(execSetInitialContextCameraPose); \
	DECLARE_FUNCTION(execGetInitialContextCameraPose); \
	DECLARE_FUNCTION(execFindEvaluationContextOwnerActor); \
	DECLARE_FUNCTION(execGetCameraRig); \
	DECLARE_FUNCTION(execActivateCameraRigPrefab); \
	DECLARE_FUNCTION(execActivateCameraRigViaProxy); \
	DECLARE_FUNCTION(execActivateCameraRig); \
	DECLARE_FUNCTION(execDeactivatePersistentVisualCameraRig); \
	DECLARE_FUNCTION(execDeactivatePersistentGlobalCameraRig); \
	DECLARE_FUNCTION(execDeactivatePersistentBaseCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentVisualCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentGlobalCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentBaseCameraRig);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_102_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraDirectorEvaluator(); \
	friend struct Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics; \
public: \
	DECLARE_CLASS(UBlueprintCameraDirectorEvaluator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UBlueprintCameraDirectorEvaluator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBlueprintCameraDirectorEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintCameraDirectorEvaluator(UBlueprintCameraDirectorEvaluator&&); \
	UBlueprintCameraDirectorEvaluator(const UBlueprintCameraDirectorEvaluator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlueprintCameraDirectorEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraDirectorEvaluator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraDirectorEvaluator) \
	GAMEPLAYCAMERAS_API virtual ~UBlueprintCameraDirectorEvaluator();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_99_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_102_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UBlueprintCameraDirectorEvaluator>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraDirector(); \
	friend struct Z_Construct_UClass_UBlueprintCameraDirector_Statics; \
public: \
	DECLARE_CLASS(UBlueprintCameraDirector, UCameraDirector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UBlueprintCameraDirector)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_245_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBlueprintCameraDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintCameraDirector(UBlueprintCameraDirector&&); \
	UBlueprintCameraDirector(const UBlueprintCameraDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlueprintCameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraDirector) \
	GAMEPLAYCAMERAS_API virtual ~UBlueprintCameraDirector();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_242_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_245_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_245_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UBlueprintCameraDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
