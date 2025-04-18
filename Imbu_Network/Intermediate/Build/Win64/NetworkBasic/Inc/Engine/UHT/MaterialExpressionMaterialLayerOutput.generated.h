// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMaterialLayerOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionMaterialLayerOutput_generated_h
#error "MaterialExpressionMaterialLayerOutput.generated.h already included, missing '#pragma once' in MaterialExpressionMaterialLayerOutput.h"
#endif
#define ENGINE_MaterialExpressionMaterialLayerOutput_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialLayerOutput_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialLayerOutput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionMaterialLayerOutput, UMaterialExpressionFunctionOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialLayerOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialLayerOutput_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMaterialLayerOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialLayerOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMaterialLayerOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialLayerOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialLayerOutput(UMaterialExpressionMaterialLayerOutput&&); \
	UMaterialExpressionMaterialLayerOutput(const UMaterialExpressionMaterialLayerOutput&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionMaterialLayerOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialLayerOutput_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialLayerOutput_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialLayerOutput_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialLayerOutput_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionMaterialLayerOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialLayerOutput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
