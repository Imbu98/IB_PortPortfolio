// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParticleDirection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionParticleDirection_generated_h
#error "MaterialExpressionParticleDirection.generated.h already included, missing '#pragma once' in MaterialExpressionParticleDirection.h"
#endif
#define ENGINE_MaterialExpressionParticleDirection_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleDirection_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParticleDirection(); \
	friend struct Z_Construct_UClass_UMaterialExpressionParticleDirection_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionParticleDirection, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleDirection)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleDirection_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleDirection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleDirection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleDirection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleDirection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionParticleDirection(UMaterialExpressionParticleDirection&&); \
	UMaterialExpressionParticleDirection(const UMaterialExpressionParticleDirection&); \
public: \
	NO_API virtual ~UMaterialExpressionParticleDirection();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleDirection_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleDirection_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleDirection_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleDirection_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionParticleDirection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleDirection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
