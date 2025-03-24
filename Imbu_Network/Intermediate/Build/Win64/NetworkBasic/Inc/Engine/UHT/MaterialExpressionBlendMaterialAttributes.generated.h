// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBlendMaterialAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionBlendMaterialAttributes_generated_h
#error "MaterialExpressionBlendMaterialAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionBlendMaterialAttributes.h"
#endif
#define ENGINE_MaterialExpressionBlendMaterialAttributes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes(); \
	friend struct Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionBlendMaterialAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionBlendMaterialAttributes)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBlendMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBlendMaterialAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBlendMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBlendMaterialAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionBlendMaterialAttributes(UMaterialExpressionBlendMaterialAttributes&&); \
	UMaterialExpressionBlendMaterialAttributes(const UMaterialExpressionBlendMaterialAttributes&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionBlendMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_33_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionBlendMaterialAttributes>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLegacyBlendMaterialAttributes(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLegacyBlendMaterialAttributes_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLegacyBlendMaterialAttributes, UMaterialExpressionBlendMaterialAttributes, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLegacyBlendMaterialAttributes)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLegacyBlendMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLegacyBlendMaterialAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLegacyBlendMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLegacyBlendMaterialAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionLegacyBlendMaterialAttributes(UMaterialExpressionLegacyBlendMaterialAttributes&&); \
	UMaterialExpressionLegacyBlendMaterialAttributes(const UMaterialExpressionLegacyBlendMaterialAttributes&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionLegacyBlendMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_73_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_76_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionLegacyBlendMaterialAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBlendMaterialAttributes_h


#define FOREACH_ENUM_EMATERIALATTRIBUTEBLEND(op) \
	op(EMaterialAttributeBlend::Blend) \
	op(EMaterialAttributeBlend::UseA) \
	op(EMaterialAttributeBlend::UseB) 

namespace EMaterialAttributeBlend { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMaterialAttributeBlend::Type>();

#define FOREACH_ENUM_EMATERIALATTRIBUTEBLENDFUNCTION(op) \
	op(EMaterialAttributeBlendFunction::Horizontal) \
	op(EMaterialAttributeBlendFunction::Vertical) 

namespace EMaterialAttributeBlendFunction { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMaterialAttributeBlendFunction::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
