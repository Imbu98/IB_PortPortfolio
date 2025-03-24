// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VerseVM/VVMPackageTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_VVMPackageTypes_generated_h
#error "VVMPackageTypes.generated.h already included, missing '#pragma once' in VVMPackageTypes.h"
#endif
#define COREUOBJECT_VVMPackageTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMPackageTypes_h


#define FOREACH_ENUM_EVERSEPACKAGESCOPE(op) \
	op(EVersePackageScope::PublicAPI) \
	op(EVersePackageScope::InternalAPI) \
	op(EVersePackageScope::PublicUser) \
	op(EVersePackageScope::InternalUser) 

enum class EVersePackageScope : uint8;
template<> struct TIsUEnumClass<EVersePackageScope> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EVersePackageScope>();

#define FOREACH_ENUM_EVERSEPACKAGETYPE(op) \
	op(EVersePackageType::VNI) \
	op(EVersePackageType::Content) \
	op(EVersePackageType::PublishedContent) \
	op(EVersePackageType::Assets) 

enum class EVersePackageType : uint8;
template<> struct TIsUEnumClass<EVersePackageType> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EVersePackageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
