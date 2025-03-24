// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/CameraRigParameterInterop.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraRigAsset;
struct FBlueprintCameraVariableTable;
#ifdef GAMEPLAYCAMERAS_CameraRigParameterInterop_generated_h
#error "CameraRigParameterInterop.generated.h already included, missing '#pragma once' in CameraRigParameterInterop.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigParameterInterop_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTransformParameter); \
	DECLARE_FUNCTION(execSetRotatorParameter); \
	DECLARE_FUNCTION(execSetVector4Parameter); \
	DECLARE_FUNCTION(execSetVector3Parameter); \
	DECLARE_FUNCTION(execSetVector2Parameter); \
	DECLARE_FUNCTION(execSetDoubleParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntegerParameter); \
	DECLARE_FUNCTION(execSetBooleanParameter);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigParameterInterop(); \
	friend struct Z_Construct_UClass_UCameraRigParameterInterop_Statics; \
public: \
	DECLARE_CLASS(UCameraRigParameterInterop, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UCameraRigParameterInterop)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraRigParameterInterop(UCameraRigParameterInterop&&); \
	UCameraRigParameterInterop(const UCameraRigParameterInterop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraRigParameterInterop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigParameterInterop); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigParameterInterop) \
	GAMEPLAYCAMERAS_API virtual ~UCameraRigParameterInterop();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_23_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UCameraRigParameterInterop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
