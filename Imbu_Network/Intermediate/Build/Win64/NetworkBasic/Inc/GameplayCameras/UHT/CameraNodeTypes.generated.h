// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/CameraNodeTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_CameraNodeTypes_generated_h
#error "CameraNodeTypes.generated.h already included, missing '#pragma once' in CameraNodeTypes.h"
#endif
#define GAMEPLAYCAMERAS_CameraNodeTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_CameraNodeTypes_h


#define FOREACH_ENUM_ECAMERANODEORIGINPOSITION(op) \
	op(ECameraNodeOriginPosition::CameraPose) \
	op(ECameraNodeOriginPosition::ActiveContext) \
	op(ECameraNodeOriginPosition::OwningContext) \
	op(ECameraNodeOriginPosition::Pivot) \
	op(ECameraNodeOriginPosition::Pawn) 

enum class ECameraNodeOriginPosition : uint8;
template<> struct TIsUEnumClass<ECameraNodeOriginPosition> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraNodeOriginPosition>();

#define FOREACH_ENUM_ECAMERANODESPACE(op) \
	op(ECameraNodeSpace::CameraPose) \
	op(ECameraNodeSpace::ActiveContext) \
	op(ECameraNodeSpace::OwningContext) \
	op(ECameraNodeSpace::Pivot) \
	op(ECameraNodeSpace::Pawn) \
	op(ECameraNodeSpace::World) 

enum class ECameraNodeSpace : uint8;
template<> struct TIsUEnumClass<ECameraNodeSpace> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraNodeSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
