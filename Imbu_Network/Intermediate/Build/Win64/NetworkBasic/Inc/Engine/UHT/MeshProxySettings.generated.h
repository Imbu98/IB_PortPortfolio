// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshMerge/MeshProxySettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshProxySettings_generated_h
#error "MeshProxySettings.generated.h already included, missing '#pragma once' in MeshProxySettings.h"
#endif
#define ENGINE_MeshProxySettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshProxySettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshProxySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h


#define FOREACH_ENUM_ELANDSCAPECULLINGPRECISION(op) \
	op(ELandscapeCullingPrecision::High) \
	op(ELandscapeCullingPrecision::Medium) \
	op(ELandscapeCullingPrecision::Low) 

namespace ELandscapeCullingPrecision { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ELandscapeCullingPrecision::Type>();

#define FOREACH_ENUM_EPROXYNORMALCOMPUTATIONMETHOD(op) \
	op(EProxyNormalComputationMethod::AngleWeighted) \
	op(EProxyNormalComputationMethod::AreaWeighted) \
	op(EProxyNormalComputationMethod::EqualWeighted) 

namespace EProxyNormalComputationMethod { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EProxyNormalComputationMethod::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
