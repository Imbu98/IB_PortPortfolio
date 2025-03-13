// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLocalPosition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionLocalPosition_generated_h
#error "MaterialExpressionLocalPosition.generated.h already included, missing '#pragma once' in MaterialExpressionLocalPosition.h"
#endif
#define ENGINE_MaterialExpressionLocalPosition_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLocalPosition(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLocalPosition, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLocalPosition)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLocalPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLocalPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLocalPosition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLocalPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionLocalPosition(UMaterialExpressionLocalPosition&&); \
	UMaterialExpressionLocalPosition(const UMaterialExpressionLocalPosition&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionLocalPosition();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionLocalPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h


#define FOREACH_ENUM_EPOSITIONINCLUDEDOFFSETS(op) \
	op(EPositionIncludedOffsets::IncludeOffsets) \
	op(EPositionIncludedOffsets::ExcludeOffsets) 

enum class EPositionIncludedOffsets;
template<> struct TIsUEnumClass<EPositionIncludedOffsets> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPositionIncludedOffsets>();

#define FOREACH_ENUM_ELOCALPOSITIONORIGIN(op) \
	op(ELocalPositionOrigin::Instance) \
	op(ELocalPositionOrigin::InstancePreSkinning) \
	op(ELocalPositionOrigin::Primitive) 

enum class ELocalPositionOrigin;
template<> struct TIsUEnumClass<ELocalPositionOrigin> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELocalPositionOrigin>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
