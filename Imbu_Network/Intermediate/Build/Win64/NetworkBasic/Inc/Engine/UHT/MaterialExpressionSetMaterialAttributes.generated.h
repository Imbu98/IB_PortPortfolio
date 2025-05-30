// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSetMaterialAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSetMaterialAttributes_generated_h
#error "MaterialExpressionSetMaterialAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionSetMaterialAttributes.h"
#endif
#define ENGINE_MaterialExpressionSetMaterialAttributes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSetMaterialAttributes(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSetMaterialAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSetMaterialAttributes)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSetMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSetMaterialAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSetMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSetMaterialAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSetMaterialAttributes(UMaterialExpressionSetMaterialAttributes&&); \
	UMaterialExpressionSetMaterialAttributes(const UMaterialExpressionSetMaterialAttributes&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSetMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSetMaterialAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetMaterialAttributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
