// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshReductionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshReductionSettings_generated_h
#error "MeshReductionSettings.generated.h already included, missing '#pragma once' in MeshReductionSettings.h"
#endif
#define ENGINE_MeshReductionSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshReductionSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshReductionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h


#define FOREACH_ENUM_EMESHFEATUREIMPORTANCE(op) \
	op(EMeshFeatureImportance::Off) \
	op(EMeshFeatureImportance::Lowest) \
	op(EMeshFeatureImportance::Low) \
	op(EMeshFeatureImportance::Normal) \
	op(EMeshFeatureImportance::High) \
	op(EMeshFeatureImportance::Highest) 

namespace EMeshFeatureImportance { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMeshFeatureImportance::Type>();

#define FOREACH_ENUM_ESTATICMESHREDUCTIONTERIMATIONCRITERION(op) \
	op(EStaticMeshReductionTerimationCriterion::Triangles) \
	op(EStaticMeshReductionTerimationCriterion::Vertices) \
	op(EStaticMeshReductionTerimationCriterion::Any) 

enum class EStaticMeshReductionTerimationCriterion : uint8;
template<> struct TIsUEnumClass<EStaticMeshReductionTerimationCriterion> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EStaticMeshReductionTerimationCriterion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
