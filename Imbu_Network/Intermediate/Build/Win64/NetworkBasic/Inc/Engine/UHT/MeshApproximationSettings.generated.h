// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshMerge/MeshApproximationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshApproximationSettings_generated_h
#error "MeshApproximationSettings.generated.h already included, missing '#pragma once' in MeshApproximationSettings.h"
#endif
#define ENGINE_MeshApproximationSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshApproximationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h


#define FOREACH_ENUM_EMESHAPPROXIMATIONTYPE(op) \
	op(EMeshApproximationType::MeshAndMaterials) \
	op(EMeshApproximationType::MeshShapeOnly) 

enum class EMeshApproximationType : uint8;
template<> struct TIsUEnumClass<EMeshApproximationType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationType>();

#define FOREACH_ENUM_EMESHAPPROXIMATIONBASECAPPINGTYPE(op) \
	op(EMeshApproximationBaseCappingType::NoBaseCapping) \
	op(EMeshApproximationBaseCappingType::ConvexPolygon) \
	op(EMeshApproximationBaseCappingType::ConvexSolid) 

enum class EMeshApproximationBaseCappingType : uint8;
template<> struct TIsUEnumClass<EMeshApproximationBaseCappingType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationBaseCappingType>();

#define FOREACH_ENUM_EOCCLUDEDGEOMETRYFILTERINGPOLICY(op) \
	op(EOccludedGeometryFilteringPolicy::NoOcclusionFiltering) \
	op(EOccludedGeometryFilteringPolicy::VisibilityBasedFiltering) 

enum class EOccludedGeometryFilteringPolicy : uint8;
template<> struct TIsUEnumClass<EOccludedGeometryFilteringPolicy> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EOccludedGeometryFilteringPolicy>();

#define FOREACH_ENUM_EMESHAPPROXIMATIONSIMPLIFICATIONPOLICY(op) \
	op(EMeshApproximationSimplificationPolicy::FixedTriangleCount) \
	op(EMeshApproximationSimplificationPolicy::TrianglesPerArea) \
	op(EMeshApproximationSimplificationPolicy::GeometricTolerance) 

enum class EMeshApproximationSimplificationPolicy : uint8;
template<> struct TIsUEnumClass<EMeshApproximationSimplificationPolicy> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationSimplificationPolicy>();

#define FOREACH_ENUM_EMESHAPPROXIMATIONGROUNDPLANECLIPPINGPOLICY(op) \
	op(EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping) \
	op(EMeshApproximationGroundPlaneClippingPolicy::DiscardWithZPlane) \
	op(EMeshApproximationGroundPlaneClippingPolicy::CutWithZPlane) \
	op(EMeshApproximationGroundPlaneClippingPolicy::CutAndFillWithZPlane) 

enum class EMeshApproximationGroundPlaneClippingPolicy : uint8;
template<> struct TIsUEnumClass<EMeshApproximationGroundPlaneClippingPolicy> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationGroundPlaneClippingPolicy>();

#define FOREACH_ENUM_EMESHAPPROXIMATIONUVGENERATIONPOLICY(op) \
	op(EMeshApproximationUVGenerationPolicy::PreferUVAtlas) \
	op(EMeshApproximationUVGenerationPolicy::PreferXAtlas) \
	op(EMeshApproximationUVGenerationPolicy::PreferPatchBuilder) 

enum class EMeshApproximationUVGenerationPolicy : uint8;
template<> struct TIsUEnumClass<EMeshApproximationUVGenerationPolicy> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationUVGenerationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
