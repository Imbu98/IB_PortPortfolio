// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLinearInterpolate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionLinearInterpolate_generated_h
#error "MaterialExpressionLinearInterpolate.generated.h already included, missing '#pragma once' in MaterialExpressionLinearInterpolate.h"
#endif
#define ENGINE_MaterialExpressionLinearInterpolate_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLinearInterpolate_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLinearInterpolate(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLinearInterpolate_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLinearInterpolate, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLinearInterpolate)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLinearInterpolate_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLinearInterpolate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLinearInterpolate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLinearInterpolate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLinearInterpolate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionLinearInterpolate(UMaterialExpressionLinearInterpolate&&); \
	UMaterialExpressionLinearInterpolate(const UMaterialExpressionLinearInterpolate&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionLinearInterpolate();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLinearInterpolate_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLinearInterpolate_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLinearInterpolate_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLinearInterpolate_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionLinearInterpolate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLinearInterpolate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
