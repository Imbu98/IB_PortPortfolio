// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFontSample.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionFontSample_generated_h
#error "MaterialExpressionFontSample.generated.h already included, missing '#pragma once' in MaterialExpressionFontSample.h"
#endif
#define ENGINE_MaterialExpressionFontSample_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFontSample(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFontSample_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFontSample, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFontSample)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFontSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFontSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFontSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFontSample); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionFontSample(UMaterialExpressionFontSample&&); \
	UMaterialExpressionFontSample(const UMaterialExpressionFontSample&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionFontSample();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionFontSample>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSample_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
