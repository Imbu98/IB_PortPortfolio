// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFeatureLevelSwitch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionFeatureLevelSwitch_generated_h
#error "MaterialExpressionFeatureLevelSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionFeatureLevelSwitch.h"
#endif
#define ENGINE_MaterialExpressionFeatureLevelSwitch_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_17_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionFeatureLevelSwitch, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFeatureLevelSwitch(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFeatureLevelSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFeatureLevelSwitch) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFeatureLevelSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFeatureLevelSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFeatureLevelSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFeatureLevelSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionFeatureLevelSwitch(UMaterialExpressionFeatureLevelSwitch&&); \
	UMaterialExpressionFeatureLevelSwitch(const UMaterialExpressionFeatureLevelSwitch&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionFeatureLevelSwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionFeatureLevelSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
