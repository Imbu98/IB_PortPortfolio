// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/CameraRigCameraNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_CameraRigCameraNode_generated_h
#error "CameraRigCameraNode.generated.h already included, missing '#pragma once' in CameraRigCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigCameraNode_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigCameraNode(); \
	friend struct Z_Construct_UClass_UCameraRigCameraNode_Statics; \
public: \
	DECLARE_CLASS(UCameraRigCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UCameraRigCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraRigCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraRigCameraNode(UCameraRigCameraNode&&); \
	UCameraRigCameraNode(const UCameraRigCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraRigCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UCameraRigCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UCameraRigCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
