// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/ClippingPlanesCameraNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_ClippingPlanesCameraNode_generated_h
#error "ClippingPlanesCameraNode.generated.h already included, missing '#pragma once' in ClippingPlanesCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_ClippingPlanesCameraNode_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClippingPlanesCameraNode(); \
	friend struct Z_Construct_UClass_UClippingPlanesCameraNode_Statics; \
public: \
	DECLARE_CLASS(UClippingPlanesCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UClippingPlanesCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UClippingPlanesCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClippingPlanesCameraNode(UClippingPlanesCameraNode&&); \
	UClippingPlanesCameraNode(const UClippingPlanesCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UClippingPlanesCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClippingPlanesCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClippingPlanesCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UClippingPlanesCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UClippingPlanesCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
