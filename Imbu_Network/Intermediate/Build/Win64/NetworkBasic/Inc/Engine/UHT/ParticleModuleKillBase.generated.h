// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Kill/ParticleModuleKillBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleKillBase_generated_h
#error "ParticleModuleKillBase.generated.h already included, missing '#pragma once' in ParticleModuleKillBase.h"
#endif
#define ENGINE_ParticleModuleKillBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleKillBase(); \
	friend struct Z_Construct_UClass_UParticleModuleKillBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleKillBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleKillBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleKillBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleKillBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleKillBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleKillBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleKillBase(UParticleModuleKillBase&&); \
	UParticleModuleKillBase(const UParticleModuleKillBase&); \
public: \
	NO_API virtual ~UParticleModuleKillBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleKillBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
