// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeAttenuation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeAttenuation_generated_h
#error "SoundNodeAttenuation.generated.h already included, missing '#pragma once' in SoundNodeAttenuation.h"
#endif
#define ENGINE_SoundNodeAttenuation_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeAttenuation(); \
	friend struct Z_Construct_UClass_USoundNodeAttenuation_Statics; \
public: \
	DECLARE_CLASS(USoundNodeAttenuation, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeAttenuation)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeAttenuation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeAttenuation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeAttenuation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeAttenuation(USoundNodeAttenuation&&); \
	USoundNodeAttenuation(const USoundNodeAttenuation&); \
public: \
	ENGINE_API virtual ~USoundNodeAttenuation();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeAttenuation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
