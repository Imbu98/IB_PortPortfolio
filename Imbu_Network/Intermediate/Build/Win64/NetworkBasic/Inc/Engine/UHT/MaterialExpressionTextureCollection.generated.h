// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureCollection_generated_h
#error "MaterialExpressionTextureCollection.generated.h already included, missing '#pragma once' in MaterialExpressionTextureCollection.h"
#endif
#define ENGINE_MaterialExpressionTextureCollection_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollection_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureCollection(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureCollection_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureCollection, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureCollection)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollection_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureCollection(UMaterialExpressionTextureCollection&&); \
	UMaterialExpressionTextureCollection(const UMaterialExpressionTextureCollection&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTextureCollection();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollection_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollection_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollection_h_12_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollection_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
