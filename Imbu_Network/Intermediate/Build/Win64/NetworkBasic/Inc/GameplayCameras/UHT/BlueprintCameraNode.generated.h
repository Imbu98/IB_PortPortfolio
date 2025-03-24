// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Utility/BlueprintCameraNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GAMEPLAYCAMERAS_BlueprintCameraNode_generated_h
#error "BlueprintCameraNode.generated.h already included, missing '#pragma once' in BlueprintCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_BlueprintCameraNode_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindEvaluationContextOwnerActor);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_29_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraNodeEvaluator(); \
	friend struct Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics; \
public: \
	DECLARE_CLASS(UBlueprintCameraNodeEvaluator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UBlueprintCameraNodeEvaluator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBlueprintCameraNodeEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintCameraNodeEvaluator(UBlueprintCameraNodeEvaluator&&); \
	UBlueprintCameraNodeEvaluator(const UBlueprintCameraNodeEvaluator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlueprintCameraNodeEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraNodeEvaluator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraNodeEvaluator) \
	GAMEPLAYCAMERAS_API virtual ~UBlueprintCameraNodeEvaluator();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_26_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UBlueprintCameraNodeEvaluator>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraNode(); \
	friend struct Z_Construct_UClass_UBlueprintCameraNode_Statics; \
public: \
	DECLARE_CLASS(UBlueprintCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UBlueprintCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBlueprintCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintCameraNode(UBlueprintCameraNode&&); \
	UBlueprintCameraNode(const UBlueprintCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlueprintCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UBlueprintCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_83_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UBlueprintCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
