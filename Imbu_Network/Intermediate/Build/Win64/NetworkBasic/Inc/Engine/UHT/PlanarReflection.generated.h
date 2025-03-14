// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PlanarReflection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlanarReflection_generated_h
#error "PlanarReflection.generated.h already included, missing '#pragma once' in PlanarReflection.h"
#endif
#define ENGINE_PlanarReflection_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnInterpToggle);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPlanarReflection(); \
	friend struct Z_Construct_UClass_APlanarReflection_Statics; \
public: \
	DECLARE_CLASS(APlanarReflection, ASceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlanarReflection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APlanarReflection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanarReflection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlanarReflection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanarReflection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlanarReflection(APlanarReflection&&); \
	APlanarReflection(const APlanarReflection&); \
public: \
	ENGINE_API virtual ~APlanarReflection();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlanarReflection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
