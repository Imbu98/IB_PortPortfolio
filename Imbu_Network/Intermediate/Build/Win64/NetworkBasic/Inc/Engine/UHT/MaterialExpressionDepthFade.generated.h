// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDepthFade.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionDepthFade_generated_h
#error "MaterialExpressionDepthFade.generated.h already included, missing '#pragma once' in MaterialExpressionDepthFade.h"
#endif
#define ENGINE_MaterialExpressionDepthFade_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthFade_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDepthFade(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDepthFade_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDepthFade, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDepthFade)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthFade_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDepthFade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDepthFade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDepthFade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDepthFade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionDepthFade(UMaterialExpressionDepthFade&&); \
	UMaterialExpressionDepthFade(const UMaterialExpressionDepthFade&); \
public: \
	NO_API virtual ~UMaterialExpressionDepthFade();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthFade_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthFade_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthFade_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthFade_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionDepthFade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDepthFade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
