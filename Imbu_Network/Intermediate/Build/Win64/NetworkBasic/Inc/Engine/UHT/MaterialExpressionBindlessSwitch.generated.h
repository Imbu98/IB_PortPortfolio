// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBindlessSwitch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionBindlessSwitch_generated_h
#error "MaterialExpressionBindlessSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionBindlessSwitch.h"
#endif
#define ENGINE_MaterialExpressionBindlessSwitch_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBindlessSwitch(); \
	friend struct Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionBindlessSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionBindlessSwitch)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBindlessSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBindlessSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBindlessSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBindlessSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionBindlessSwitch(UMaterialExpressionBindlessSwitch&&); \
	UMaterialExpressionBindlessSwitch(const UMaterialExpressionBindlessSwitch&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionBindlessSwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionBindlessSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
