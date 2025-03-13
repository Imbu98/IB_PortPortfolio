// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_CameraNode_generated_h
#error "CameraNode.generated.h already included, missing '#pragma once' in CameraNode.h"
#endif
#define GAMEPLAYCAMERAS_CameraNode_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraNode(); \
	friend struct Z_Construct_UClass_UCameraNode_Statics; \
public: \
	DECLARE_CLASS(UCameraNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UCameraNode) \
	virtual UObject* _getUObject() const override { return const_cast<UCameraNode*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraNode(UCameraNode&&); \
	UCameraNode(const UCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraNode) \
	NO_API virtual ~UCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_25_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
