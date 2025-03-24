// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transitions/GameplayTagTransitionConditions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_GameplayTagTransitionConditions_generated_h
#error "GameplayTagTransitionConditions.generated.h already included, missing '#pragma once' in GameplayTagTransitionConditions.h"
#endif
#define GAMEPLAYCAMERAS_GameplayTagTransitionConditions_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagTransitionCondition(); \
	friend struct Z_Construct_UClass_UGameplayTagTransitionCondition_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagTransitionCondition, UCameraRigTransitionCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UGameplayTagTransitionCondition)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UGameplayTagTransitionCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayTagTransitionCondition(UGameplayTagTransitionCondition&&); \
	UGameplayTagTransitionCondition(const UGameplayTagTransitionCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UGameplayTagTransitionCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagTransitionCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagTransitionCondition) \
	GAMEPLAYCAMERAS_API virtual ~UGameplayTagTransitionCondition();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UGameplayTagTransitionCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
