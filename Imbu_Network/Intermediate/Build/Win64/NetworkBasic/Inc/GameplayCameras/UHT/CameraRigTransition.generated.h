// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraRigTransition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_CameraRigTransition_generated_h
#error "CameraRigTransition.generated.h already included, missing '#pragma once' in CameraRigTransition.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigTransition_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigTransitionCondition(); \
	friend struct Z_Construct_UClass_UCameraRigTransitionCondition_Statics; \
public: \
	DECLARE_CLASS(UCameraRigTransitionCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UCameraRigTransitionCondition) \
	virtual UObject* _getUObject() const override { return const_cast<UCameraRigTransitionCondition*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraRigTransitionCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraRigTransitionCondition(UCameraRigTransitionCondition&&); \
	UCameraRigTransitionCondition(const UCameraRigTransitionCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraRigTransitionCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigTransitionCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigTransitionCondition) \
	GAMEPLAYCAMERAS_API virtual ~UCameraRigTransitionCondition();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_43_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UCameraRigTransitionCondition>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigTransition(); \
	friend struct Z_Construct_UClass_UCameraRigTransition_Statics; \
public: \
	DECLARE_CLASS(UCameraRigTransition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UCameraRigTransition) \
	virtual UObject* _getUObject() const override { return const_cast<UCameraRigTransition*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraRigTransition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraRigTransition(UCameraRigTransition&&); \
	UCameraRigTransition(const UCameraRigTransition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraRigTransition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigTransition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigTransition) \
	GAMEPLAYCAMERAS_API virtual ~UCameraRigTransition();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_133_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UCameraRigTransition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h


#define FOREACH_ENUM_ECAMERARIGINITIALORIENTATION(op) \
	op(ECameraRigInitialOrientation::None) \
	op(ECameraRigInitialOrientation::ContextYawPitch) \
	op(ECameraRigInitialOrientation::PreviousYawPitch) \
	op(ECameraRigInitialOrientation::PreviousAbsoluteTarget) \
	op(ECameraRigInitialOrientation::PreviousRelativeTarget) 

enum class ECameraRigInitialOrientation;
template<> struct TIsUEnumClass<ECameraRigInitialOrientation> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraRigInitialOrientation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
