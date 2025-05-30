// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCurveCompressionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCurveCompressionSettings_generated_h
#error "AnimCurveCompressionSettings.generated.h already included, missing '#pragma once' in AnimCurveCompressionSettings.h"
#endif
#define ENGINE_AnimCurveCompressionSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCurveCompressionSettings(); \
	friend struct Z_Construct_UClass_UAnimCurveCompressionSettings_Statics; \
public: \
	DECLARE_CLASS(UAnimCurveCompressionSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimCurveCompressionSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCurveCompressionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCurveCompressionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCurveCompressionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCurveCompressionSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimCurveCompressionSettings(UAnimCurveCompressionSettings&&); \
	UAnimCurveCompressionSettings(const UAnimCurveCompressionSettings&); \
public: \
	ENGINE_API virtual ~UAnimCurveCompressionSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimCurveCompressionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
