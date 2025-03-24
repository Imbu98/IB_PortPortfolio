// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFloatToUInt.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionFloatToUInt_generated_h
#error "MaterialExpressionFloatToUInt.generated.h already included, missing '#pragma once' in MaterialExpressionFloatToUInt.h"
#endif
#define ENGINE_MaterialExpressionFloatToUInt_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFloatToUInt(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFloatToUInt, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFloatToUInt)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFloatToUInt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFloatToUInt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFloatToUInt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFloatToUInt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionFloatToUInt(UMaterialExpressionFloatToUInt&&); \
	UMaterialExpressionFloatToUInt(const UMaterialExpressionFloatToUInt&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionFloatToUInt();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionFloatToUInt>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionUIntToFloat(); \
	friend struct Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionUIntToFloat, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionUIntToFloat)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionUIntToFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionUIntToFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionUIntToFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionUIntToFloat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionUIntToFloat(UMaterialExpressionUIntToFloat&&); \
	UMaterialExpressionUIntToFloat(const UMaterialExpressionUIntToFloat&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionUIntToFloat();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_41_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_44_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionUIntToFloat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h


#define FOREACH_ENUM_EFLOATTOINTMODE(op) \
	op(EFloatToIntMode::Truncate) \
	op(EFloatToIntMode::Floor) \
	op(EFloatToIntMode::Round) \
	op(EFloatToIntMode::Ceil) 

enum class EFloatToIntMode : uint8;
template<> struct TIsUEnumClass<EFloatToIntMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EFloatToIntMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
