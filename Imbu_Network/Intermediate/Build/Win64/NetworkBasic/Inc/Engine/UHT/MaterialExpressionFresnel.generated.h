// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFresnel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionFresnel_generated_h
#error "MaterialExpressionFresnel.generated.h already included, missing '#pragma once' in MaterialExpressionFresnel.h"
#endif
#define ENGINE_MaterialExpressionFresnel_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFresnel(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFresnel_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFresnel, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFresnel)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFresnel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFresnel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFresnel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFresnel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionFresnel(UMaterialExpressionFresnel&&); \
	UMaterialExpressionFresnel(const UMaterialExpressionFresnel&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionFresnel();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionFresnel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFresnel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
