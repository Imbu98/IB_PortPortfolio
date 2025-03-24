// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transitions/DefaultTransitionConditions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_DefaultTransitionConditions_generated_h
#error "DefaultTransitionConditions.generated.h already included, missing '#pragma once' in DefaultTransitionConditions.h"
#endif
#define GAMEPLAYCAMERAS_DefaultTransitionConditions_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsCameraRigTransitionCondition(); \
	friend struct Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics; \
public: \
	DECLARE_CLASS(UIsCameraRigTransitionCondition, UCameraRigTransitionCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UIsCameraRigTransitionCondition)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UIsCameraRigTransitionCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIsCameraRigTransitionCondition(UIsCameraRigTransitionCondition&&); \
	UIsCameraRigTransitionCondition(const UIsCameraRigTransitionCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UIsCameraRigTransitionCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsCameraRigTransitionCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsCameraRigTransitionCondition) \
	GAMEPLAYCAMERAS_API virtual ~UIsCameraRigTransitionCondition();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UIsCameraRigTransitionCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
