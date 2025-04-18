// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSquareRoot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSquareRoot_generated_h
#error "MaterialExpressionSquareRoot.generated.h already included, missing '#pragma once' in MaterialExpressionSquareRoot.h"
#endif
#define ENGINE_MaterialExpressionSquareRoot_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSquareRoot(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSquareRoot_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSquareRoot, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSquareRoot)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSquareRoot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSquareRoot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSquareRoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSquareRoot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSquareRoot(UMaterialExpressionSquareRoot&&); \
	UMaterialExpressionSquareRoot(const UMaterialExpressionSquareRoot&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSquareRoot();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSquareRoot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSquareRoot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
