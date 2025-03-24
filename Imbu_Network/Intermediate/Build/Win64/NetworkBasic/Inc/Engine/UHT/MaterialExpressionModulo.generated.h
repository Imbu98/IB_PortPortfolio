// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionModulo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionModulo_generated_h
#error "MaterialExpressionModulo.generated.h already included, missing '#pragma once' in MaterialExpressionModulo.h"
#endif
#define ENGINE_MaterialExpressionModulo_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionModulo(); \
	friend struct Z_Construct_UClass_UMaterialExpressionModulo_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionModulo, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionModulo)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionModulo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionModulo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionModulo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionModulo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionModulo(UMaterialExpressionModulo&&); \
	UMaterialExpressionModulo(const UMaterialExpressionModulo&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionModulo();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionModulo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
