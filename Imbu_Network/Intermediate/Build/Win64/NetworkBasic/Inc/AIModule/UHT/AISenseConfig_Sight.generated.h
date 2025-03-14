// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig_Sight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseConfig_Sight_generated_h
#error "AISenseConfig_Sight.generated.h already included, missing '#pragma once' in AISenseConfig_Sight.h"
#endif
#define AIMODULE_AISenseConfig_Sight_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Sight(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Sight_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig_Sight, UAISenseConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISenseConfig_Sight)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseConfig_Sight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Sight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig_Sight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Sight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISenseConfig_Sight(UAISenseConfig_Sight&&); \
	UAISenseConfig_Sight(const UAISenseConfig_Sight&); \
public: \
	AIMODULE_API virtual ~UAISenseConfig_Sight();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseConfig_Sight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
