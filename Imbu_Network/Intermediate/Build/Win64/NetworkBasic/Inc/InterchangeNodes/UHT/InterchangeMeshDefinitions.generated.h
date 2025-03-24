// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshDefinitions.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGENODES_InterchangeMeshDefinitions_generated_h
#error "InterchangeMeshDefinitions.generated.h already included, missing '#pragma once' in InterchangeMeshDefinitions.h"
#endif
#define INTERCHANGENODES_InterchangeMeshDefinitions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshDefinitions_h


#define FOREACH_ENUM_EINTERCHANGEMESHCOLLISION(op) \
	op(EInterchangeMeshCollision::Box) \
	op(EInterchangeMeshCollision::Sphere) \
	op(EInterchangeMeshCollision::Capsule) \
	op(EInterchangeMeshCollision::Convex10DOP_X) \
	op(EInterchangeMeshCollision::Convex10DOP_Y) \
	op(EInterchangeMeshCollision::Convex10DOP_Z) \
	op(EInterchangeMeshCollision::Convex18DOP) \
	op(EInterchangeMeshCollision::Convex26DOP) \
	op(EInterchangeMeshCollision::None) 

enum class EInterchangeMeshCollision : uint8;
template<> struct TIsUEnumClass<EInterchangeMeshCollision> { enum { Value = true }; };
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeMeshCollision>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
