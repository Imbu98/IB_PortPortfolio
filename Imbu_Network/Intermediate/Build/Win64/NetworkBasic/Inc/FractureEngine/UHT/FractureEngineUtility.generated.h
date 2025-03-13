// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureEngineUtility.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREENGINE_FractureEngineUtility_generated_h
#error "FractureEngineUtility.generated.h already included, missing '#pragma once' in FractureEngineUtility.h"
#endif
#define FRACTUREENGINE_FractureEngineUtility_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineUtility_h


#define FOREACH_ENUM_EFIXTINYGEOMERGETYPE(op) \
	op(EFixTinyGeoMergeType::MergeGeometry) \
	op(EFixTinyGeoMergeType::MergeClusters) 

enum class EFixTinyGeoMergeType : uint8;
template<> struct TIsUEnumClass<EFixTinyGeoMergeType> { enum { Value = true }; };
template<> FRACTUREENGINE_API UEnum* StaticEnum<EFixTinyGeoMergeType>();

#define FOREACH_ENUM_EFIXTINYGEONEIGHBORSELECTIONMETHOD(op) \
	op(EFixTinyGeoNeighborSelectionMethod::LargestNeighbor) \
	op(EFixTinyGeoNeighborSelectionMethod::NearestCenter) 

enum class EFixTinyGeoNeighborSelectionMethod : uint8;
template<> struct TIsUEnumClass<EFixTinyGeoNeighborSelectionMethod> { enum { Value = true }; };
template<> FRACTUREENGINE_API UEnum* StaticEnum<EFixTinyGeoNeighborSelectionMethod>();

#define FOREACH_ENUM_EFIXTINYGEOUSEBONESELECTION(op) \
	op(EFixTinyGeoUseBoneSelection::NoEffect) \
	op(EFixTinyGeoUseBoneSelection::AlsoMergeSelected) \
	op(EFixTinyGeoUseBoneSelection::OnlyMergeSelected) 

enum class EFixTinyGeoUseBoneSelection : uint8;
template<> struct TIsUEnumClass<EFixTinyGeoUseBoneSelection> { enum { Value = true }; };
template<> FRACTUREENGINE_API UEnum* StaticEnum<EFixTinyGeoUseBoneSelection>();

#define FOREACH_ENUM_EFIXTINYGEOGEOMETRYSELECTIONMETHOD(op) \
	op(EFixTinyGeoGeometrySelectionMethod::VolumeCubeRoot) \
	op(EFixTinyGeoGeometrySelectionMethod::RelativeVolume) 

enum class EFixTinyGeoGeometrySelectionMethod : uint8;
template<> struct TIsUEnumClass<EFixTinyGeoGeometrySelectionMethod> { enum { Value = true }; };
template<> FRACTUREENGINE_API UEnum* StaticEnum<EFixTinyGeoGeometrySelectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
