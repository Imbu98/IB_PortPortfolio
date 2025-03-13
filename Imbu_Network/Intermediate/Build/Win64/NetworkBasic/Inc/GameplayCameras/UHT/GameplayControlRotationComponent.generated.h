// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameplayControlRotationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef GAMEPLAYCAMERAS_GameplayControlRotationComponent_generated_h
#error "GameplayControlRotationComponent.generated.h already included, missing '#pragma once' in GameplayControlRotationComponent.h"
#endif
#define GAMEPLAYCAMERAS_GameplayControlRotationComponent_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeactivateControlRotationManagement); \
	DECLARE_FUNCTION(execActivateControlRotationManagementForPlayerController); \
	DECLARE_FUNCTION(execActivateControlRotationManagementForPlayerIndex);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayControlRotationComponent(); \
	friend struct Z_Construct_UClass_UGameplayControlRotationComponent_Statics; \
public: \
	DECLARE_CLASS(UGameplayControlRotationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UGameplayControlRotationComponent)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayControlRotationComponent(UGameplayControlRotationComponent&&); \
	UGameplayControlRotationComponent(const UGameplayControlRotationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UGameplayControlRotationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayControlRotationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayControlRotationComponent) \
	GAMEPLAYCAMERAS_API virtual ~UGameplayControlRotationComponent();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_25_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UGameplayControlRotationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
