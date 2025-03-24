// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMesh/LinkGenerationDebugFlags.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_LinkGenerationDebugFlags_generated_h
#error "LinkGenerationDebugFlags.generated.h already included, missing '#pragma once' in LinkGenerationDebugFlags.h"
#endif
#define NAVIGATIONSYSTEM_LinkGenerationDebugFlags_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationDebugFlags_h


#define FOREACH_ENUM_ELINKGENERATIONDEBUGFLAGS(op) \
	op(ELinkGenerationDebugFlags::WalkableSurface) \
	op(ELinkGenerationDebugFlags::WalkableBorders) \
	op(ELinkGenerationDebugFlags::SelectedEdge) \
	op(ELinkGenerationDebugFlags::SelectedEdgeTrajectory) \
	op(ELinkGenerationDebugFlags::SelectedEdgeLandingSamples) \
	op(ELinkGenerationDebugFlags::SelectedEdgeCollisions) \
	op(ELinkGenerationDebugFlags::Links) \
	op(ELinkGenerationDebugFlags::FilteredLinks) 

enum class ELinkGenerationDebugFlags : uint16;
template<> struct TIsUEnumClass<ELinkGenerationDebugFlags> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ELinkGenerationDebugFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
