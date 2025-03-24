// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMaterialSample.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionMaterialSample_generated_h
#error "MaterialExpressionMaterialSample.generated.h already included, missing '#pragma once' in MaterialExpressionMaterialSample.h"
#endif
#define ENGINE_MaterialExpressionMaterialSample_generated_h

#define FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialSample(); \
	friend struct Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionMaterialSample, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialSample)


#define FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMaterialSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMaterialSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialSample); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialSample(UMaterialExpressionMaterialSample&&); \
	UMaterialExpressionMaterialSample(const UMaterialExpressionMaterialSample&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionMaterialSample();


#define FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionMaterialSample>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
