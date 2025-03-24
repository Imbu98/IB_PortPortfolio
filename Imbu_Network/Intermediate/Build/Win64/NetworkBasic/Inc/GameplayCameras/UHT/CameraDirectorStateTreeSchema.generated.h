// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Directors/CameraDirectorStateTreeSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_CameraDirectorStateTreeSchema_generated_h
#error "CameraDirectorStateTreeSchema.generated.h already included, missing '#pragma once' in CameraDirectorStateTreeSchema.h"
#endif
#define GAMEPLAYCAMERAS_CameraDirectorStateTreeSchema_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraDirectorStateTreeSchema(); \
	friend struct Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics; \
public: \
	DECLARE_CLASS(UCameraDirectorStateTreeSchema, UStateTreeSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UCameraDirectorStateTreeSchema)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraDirectorStateTreeSchema(UCameraDirectorStateTreeSchema&&); \
	UCameraDirectorStateTreeSchema(const UCameraDirectorStateTreeSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraDirectorStateTreeSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraDirectorStateTreeSchema); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraDirectorStateTreeSchema) \
	NO_API virtual ~UCameraDirectorStateTreeSchema();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_32_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UCameraDirectorStateTreeSchema>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FCameraDirectorStateTreeEvaluationData>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeTaskBase Super;


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FGameplayCamerasStateTreeTask>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeConditionBase Super;


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FGameplayCamerasStateTreeCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
