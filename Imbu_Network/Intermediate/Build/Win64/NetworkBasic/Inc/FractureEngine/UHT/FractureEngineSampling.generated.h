// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureEngineSampling.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREENGINE_FractureEngineSampling_generated_h
#error "FractureEngineSampling.generated.h already included, missing '#pragma once' in FractureEngineSampling.h"
#endif
#define FRACTUREENGINE_FractureEngineSampling_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineSampling_h


#define FOREACH_ENUM_ENONUNIFORMSAMPLINGDISTRIBUTIONMODE(op) \
	op(ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Uniform) \
	op(ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Smaller) \
	op(ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Larger) 

enum class ENonUniformSamplingDistributionMode : uint8;
template<> struct TIsUEnumClass<ENonUniformSamplingDistributionMode> { enum { Value = true }; };
template<> FRACTUREENGINE_API UEnum* StaticEnum<ENonUniformSamplingDistributionMode>();

#define FOREACH_ENUM_ENONUNIFORMSAMPLINGWEIGHTMODE(op) \
	op(ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_WeightToRadius) \
	op(ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_FilledWeightToRadius) \
	op(ENonUniformSamplingWeightMode::ENonUniformSamplingWeightMode_WeightedRandom) 

enum class ENonUniformSamplingWeightMode : uint8;
template<> struct TIsUEnumClass<ENonUniformSamplingWeightMode> { enum { Value = true }; };
template<> FRACTUREENGINE_API UEnum* StaticEnum<ENonUniformSamplingWeightMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
