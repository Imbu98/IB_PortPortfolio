// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraVariableTableFwd.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_CameraVariableTableFwd_generated_h
#error "CameraVariableTableFwd.generated.h already included, missing '#pragma once' in CameraVariableTableFwd.h"
#endif
#define GAMEPLAYCAMERAS_CameraVariableTableFwd_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraVariableID_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FCameraVariableID>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FCameraVariableDefinition>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FCameraVariableTableAllocationInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h


#define FOREACH_ENUM_ECAMERAVARIABLETYPE(op) \
	op(ECameraVariableType::Boolean) \
	op(ECameraVariableType::Integer32) \
	op(ECameraVariableType::Float) \
	op(ECameraVariableType::Double) \
	op(ECameraVariableType::Vector2f) \
	op(ECameraVariableType::Vector2d) \
	op(ECameraVariableType::Vector3f) \
	op(ECameraVariableType::Vector3d) \
	op(ECameraVariableType::Vector4f) \
	op(ECameraVariableType::Vector4d) \
	op(ECameraVariableType::Rotator3f) \
	op(ECameraVariableType::Rotator3d) \
	op(ECameraVariableType::Transform3f) \
	op(ECameraVariableType::Transform3d) 

enum class ECameraVariableType;
template<> struct TIsUEnumClass<ECameraVariableType> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraVariableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
