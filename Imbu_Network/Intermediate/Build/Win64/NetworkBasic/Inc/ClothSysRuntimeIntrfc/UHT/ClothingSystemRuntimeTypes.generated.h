// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothingSystemRuntimeTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingSystemRuntimeTypes_generated_h
#error "ClothingSystemRuntimeTypes.generated.h already included, missing '#pragma once' in ClothingSystemRuntimeTypes.h"
#endif
#define CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingSystemRuntimeTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSystemRuntimeTypes_h


#define FOREACH_ENUM_ECLOTHINGTELEPORTMODE(op) \
	op(EClothingTeleportMode::None) \
	op(EClothingTeleportMode::Teleport) \
	op(EClothingTeleportMode::TeleportAndReset) \
	op(EClothingTeleportMode::HardReset) 

enum class EClothingTeleportMode : uint8;
template<> struct TIsUEnumClass<EClothingTeleportMode> { enum { Value = true }; };
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UEnum* StaticEnum<EClothingTeleportMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
