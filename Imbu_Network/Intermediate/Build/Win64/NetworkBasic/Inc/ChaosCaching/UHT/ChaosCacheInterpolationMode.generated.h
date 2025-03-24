// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosCacheInterpolationMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCACHING_ChaosCacheInterpolationMode_generated_h
#error "ChaosCacheInterpolationMode.generated.h already included, missing '#pragma once' in ChaosCacheInterpolationMode.h"
#endif
#define CHAOSCACHING_ChaosCacheInterpolationMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCacheInterpolationMode_h


#define FOREACH_ENUM_ECHAOSCACHEINTERPOLATIONMODE(op) \
	op(EChaosCacheInterpolationMode::QuatInterp) \
	op(EChaosCacheInterpolationMode::EulerInterp) \
	op(EChaosCacheInterpolationMode::DualQuatInterp) 

enum class EChaosCacheInterpolationMode : uint8;
template<> struct TIsUEnumClass<EChaosCacheInterpolationMode> { enum { Value = true }; };
template<> CHAOSCACHING_API UEnum* StaticEnum<EChaosCacheInterpolationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
