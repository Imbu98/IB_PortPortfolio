// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDBufferTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionDBufferTexture_generated_h
#error "MaterialExpressionDBufferTexture.generated.h already included, missing '#pragma once' in MaterialExpressionDBufferTexture.h"
#endif
#define ENGINE_MaterialExpressionDBufferTexture_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDBufferTexture_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDBufferTexture(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDBufferTexture_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDBufferTexture, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDBufferTexture)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDBufferTexture_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDBufferTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDBufferTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDBufferTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDBufferTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionDBufferTexture(UMaterialExpressionDBufferTexture&&); \
	UMaterialExpressionDBufferTexture(const UMaterialExpressionDBufferTexture&); \
public: \
	NO_API virtual ~UMaterialExpressionDBufferTexture();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDBufferTexture_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDBufferTexture_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDBufferTexture_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDBufferTexture_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionDBufferTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDBufferTexture_h


#define FOREACH_ENUM_EDBUFFERTEXTUREID(op) \
	op(DBT_A) \
	op(DBT_B) \
	op(DBT_C) 

enum EDBufferTextureId : int;
template<> ENGINE_API UEnum* StaticEnum<EDBufferTextureId>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
