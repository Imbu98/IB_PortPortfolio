// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCosine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionCosine_generated_h
#error "MaterialExpressionCosine.generated.h already included, missing '#pragma once' in MaterialExpressionCosine.h"
#endif
#define ENGINE_MaterialExpressionCosine_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCosine(); \
	friend struct Z_Construct_UClass_UMaterialExpressionCosine_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionCosine, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionCosine)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCosine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCosine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCosine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCosine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionCosine(UMaterialExpressionCosine&&); \
	UMaterialExpressionCosine(const UMaterialExpressionCosine&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionCosine();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionCosine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCosine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
