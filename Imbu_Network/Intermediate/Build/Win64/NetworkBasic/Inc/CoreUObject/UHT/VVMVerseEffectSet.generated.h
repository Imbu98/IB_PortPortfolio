// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VerseVM/VVMVerseEffectSet.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_VVMVerseEffectSet_generated_h
#error "VVMVerseEffectSet.generated.h already included, missing '#pragma once' in VVMVerseEffectSet.h"
#endif
#define COREUOBJECT_VVMVerseEffectSet_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEffectSet_h


#define FOREACH_ENUM_EVERSEEFFECTSET(op) \
	op(EVerseEffectSet::None) \
	op(EVerseEffectSet::Suspends) \
	op(EVerseEffectSet::Decides) \
	op(EVerseEffectSet::Diverges) \
	op(EVerseEffectSet::Reads) \
	op(EVerseEffectSet::Writes) \
	op(EVerseEffectSet::Allocates) \
	op(EVerseEffectSet::NoRollback) 

enum class EVerseEffectSet : uint8;
template<> struct TIsUEnumClass<EVerseEffectSet> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EVerseEffectSet>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
