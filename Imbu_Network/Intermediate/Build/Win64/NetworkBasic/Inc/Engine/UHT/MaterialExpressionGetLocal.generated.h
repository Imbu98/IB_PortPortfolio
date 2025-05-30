// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionGetLocal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionGetLocal_generated_h
#error "MaterialExpressionGetLocal.generated.h already included, missing '#pragma once' in MaterialExpressionGetLocal.h"
#endif
#define ENGINE_MaterialExpressionGetLocal_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetLocal_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionGetLocal(); \
	friend struct Z_Construct_UClass_UMaterialExpressionGetLocal_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionGetLocal, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionGetLocal)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetLocal_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionGetLocal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionGetLocal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionGetLocal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionGetLocal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionGetLocal(UMaterialExpressionGetLocal&&); \
	UMaterialExpressionGetLocal(const UMaterialExpressionGetLocal&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionGetLocal();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetLocal_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetLocal_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetLocal_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetLocal_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionGetLocal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGetLocal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
