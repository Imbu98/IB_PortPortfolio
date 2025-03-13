// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Attach/AttachToPlayerPawnCameraNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_AttachToPlayerPawnCameraNode_generated_h
#error "AttachToPlayerPawnCameraNode.generated.h already included, missing '#pragma once' in AttachToPlayerPawnCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_AttachToPlayerPawnCameraNode_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttachToPlayerPawnCameraNode(); \
	friend struct Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics; \
public: \
	DECLARE_CLASS(UAttachToPlayerPawnCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UAttachToPlayerPawnCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UAttachToPlayerPawnCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttachToPlayerPawnCameraNode(UAttachToPlayerPawnCameraNode&&); \
	UAttachToPlayerPawnCameraNode(const UAttachToPlayerPawnCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UAttachToPlayerPawnCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttachToPlayerPawnCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttachToPlayerPawnCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UAttachToPlayerPawnCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UAttachToPlayerPawnCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
