// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/SkeletalBodySetup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalBodySetup_generated_h
#error "SkeletalBodySetup.generated.h already included, missing '#pragma once' in SkeletalBodySetup.h"
#endif
#define ENGINE_SkeletalBodySetup_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicalAnimationProfile>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalBodySetup(); \
	friend struct Z_Construct_UClass_USkeletalBodySetup_Statics; \
public: \
	DECLARE_CLASS(USkeletalBodySetup, UBodySetup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalBodySetup)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletalBodySetup(USkeletalBodySetup&&); \
	USkeletalBodySetup(const USkeletalBodySetup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalBodySetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalBodySetup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalBodySetup) \
	ENGINE_API virtual ~USkeletalBodySetup();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalBodySetup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
