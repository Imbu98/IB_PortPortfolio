// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSceneTexelSize.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSceneTexelSize_generated_h
#error "MaterialExpressionSceneTexelSize.generated.h already included, missing '#pragma once' in MaterialExpressionSceneTexelSize.h"
#endif
#define ENGINE_MaterialExpressionSceneTexelSize_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneTexelSize(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSceneTexelSize, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneTexelSize)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneTexelSize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneTexelSize) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneTexelSize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneTexelSize); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSceneTexelSize(UMaterialExpressionSceneTexelSize&&); \
	UMaterialExpressionSceneTexelSize(const UMaterialExpressionSceneTexelSize&); \
public: \
	NO_API virtual ~UMaterialExpressionSceneTexelSize();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSceneTexelSize>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneTexelSize_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
