// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFloor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionFloor_generated_h
#error "MaterialExpressionFloor.generated.h already included, missing '#pragma once' in MaterialExpressionFloor.h"
#endif
#define ENGINE_MaterialExpressionFloor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFloor(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFloor_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFloor, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFloor)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFloor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFloor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFloor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFloor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionFloor(UMaterialExpressionFloor&&); \
	UMaterialExpressionFloor(const UMaterialExpressionFloor&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionFloor();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionFloor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
