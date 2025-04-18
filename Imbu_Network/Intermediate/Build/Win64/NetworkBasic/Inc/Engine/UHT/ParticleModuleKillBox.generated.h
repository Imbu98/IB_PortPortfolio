// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Kill/ParticleModuleKillBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleKillBox_generated_h
#error "ParticleModuleKillBox.generated.h already included, missing '#pragma once' in ParticleModuleKillBox.h"
#endif
#define ENGINE_ParticleModuleKillBox_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleKillBox(); \
	friend struct Z_Construct_UClass_UParticleModuleKillBox_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleKillBox, UParticleModuleKillBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleKillBox)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleKillBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleKillBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleKillBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleKillBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleKillBox(UParticleModuleKillBox&&); \
	UParticleModuleKillBox(const UParticleModuleKillBox&); \
public: \
	NO_API virtual ~UParticleModuleKillBox();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleKillBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
