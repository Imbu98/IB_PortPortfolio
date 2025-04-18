// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSetLocal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSetLocal_generated_h
#error "MaterialExpressionSetLocal.generated.h already included, missing '#pragma once' in MaterialExpressionSetLocal.h"
#endif
#define ENGINE_MaterialExpressionSetLocal_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetLocal_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSetLocal(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSetLocal_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSetLocal, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSetLocal)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetLocal_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSetLocal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSetLocal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSetLocal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSetLocal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSetLocal(UMaterialExpressionSetLocal&&); \
	UMaterialExpressionSetLocal(const UMaterialExpressionSetLocal&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSetLocal();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetLocal_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetLocal_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetLocal_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetLocal_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSetLocal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSetLocal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
