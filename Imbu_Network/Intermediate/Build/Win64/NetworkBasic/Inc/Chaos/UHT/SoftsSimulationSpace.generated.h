// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/SoftsSimulationSpace.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOS_SoftsSimulationSpace_generated_h
#error "SoftsSimulationSpace.generated.h already included, missing '#pragma once' in SoftsSimulationSpace.h"
#endif
#define CHAOS_SoftsSimulationSpace_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_SoftsSimulationSpace_h


#define FOREACH_ENUM_ECHAOSSOFTSSIMULATIONSPACE(op) \
	op(EChaosSoftsSimulationSpace::WorldSpace) \
	op(EChaosSoftsSimulationSpace::ComponentSpace) \
	op(EChaosSoftsSimulationSpace::ReferenceBoneSpace) 

enum class EChaosSoftsSimulationSpace : uint8;
template<> struct TIsUEnumClass<EChaosSoftsSimulationSpace> { enum { Value = true }; };
template<> CHAOS_API UEnum* StaticEnum<EChaosSoftsSimulationSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
