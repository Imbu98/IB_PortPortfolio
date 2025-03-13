// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Directors/StateTreeCameraDirector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_StateTreeCameraDirector_generated_h
#error "StateTreeCameraDirector.generated.h already included, missing '#pragma once' in StateTreeCameraDirector.h"
#endif
#define GAMEPLAYCAMERAS_StateTreeCameraDirector_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeCameraDirector(); \
	friend struct Z_Construct_UClass_UStateTreeCameraDirector_Statics; \
public: \
	DECLARE_CLASS(UStateTreeCameraDirector, UCameraDirector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UStateTreeCameraDirector)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStateTreeCameraDirector(UStateTreeCameraDirector&&); \
	UStateTreeCameraDirector(const UStateTreeCameraDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UStateTreeCameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeCameraDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeCameraDirector) \
	GAMEPLAYCAMERAS_API virtual ~UStateTreeCameraDirector();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_17_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UStateTreeCameraDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
