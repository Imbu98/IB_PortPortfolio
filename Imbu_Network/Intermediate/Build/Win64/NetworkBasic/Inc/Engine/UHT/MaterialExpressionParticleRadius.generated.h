// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParticleRadius.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionParticleRadius_generated_h
#error "MaterialExpressionParticleRadius.generated.h already included, missing '#pragma once' in MaterialExpressionParticleRadius.h"
#endif
#define ENGINE_MaterialExpressionParticleRadius_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParticleRadius(); \
	friend struct Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionParticleRadius, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleRadius)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleRadius(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleRadius) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleRadius); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleRadius); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionParticleRadius(UMaterialExpressionParticleRadius&&); \
	UMaterialExpressionParticleRadius(const UMaterialExpressionParticleRadius&); \
public: \
	NO_API virtual ~UMaterialExpressionParticleRadius();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionParticleRadius>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRadius_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
