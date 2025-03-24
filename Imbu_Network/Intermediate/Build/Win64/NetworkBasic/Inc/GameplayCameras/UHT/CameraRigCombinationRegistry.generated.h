// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraRigCombinationRegistry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_CameraRigCombinationRegistry_generated_h
#error "CameraRigCombinationRegistry.generated.h already included, missing '#pragma once' in CameraRigCombinationRegistry.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigCombinationRegistry_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombinedCameraRigsCameraNode(); \
	friend struct Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics; \
public: \
	DECLARE_CLASS(UCombinedCameraRigsCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UCombinedCameraRigsCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCombinedCameraRigsCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombinedCameraRigsCameraNode(UCombinedCameraRigsCameraNode&&); \
	UCombinedCameraRigsCameraNode(const UCombinedCameraRigsCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCombinedCameraRigsCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombinedCameraRigsCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombinedCameraRigsCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UCombinedCameraRigsCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_52_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UCombinedCameraRigsCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
