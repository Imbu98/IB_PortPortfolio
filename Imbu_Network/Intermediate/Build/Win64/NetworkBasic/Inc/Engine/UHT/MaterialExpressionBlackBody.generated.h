// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBlackBody.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionBlackBody_generated_h
#error "MaterialExpressionBlackBody.generated.h already included, missing '#pragma once' in MaterialExpressionBlackBody.h"
#endif
#define ENGINE_MaterialExpressionBlackBody_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBlackBody(); \
	friend struct Z_Construct_UClass_UMaterialExpressionBlackBody_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionBlackBody, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionBlackBody)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBlackBody(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBlackBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBlackBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBlackBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionBlackBody(UMaterialExpressionBlackBody&&); \
	UMaterialExpressionBlackBody(const UMaterialExpressionBlackBody&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionBlackBody();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionBlackBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlackBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
