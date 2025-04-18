// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Brush.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Brush_generated_h
#error "Brush.generated.h already included, missing '#pragma once' in Brush.h"
#endif
#define ENGINE_Brush_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeomSelection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGeomSelection>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_79_INCLASS \
private: \
	static void StaticRegisterNativesABrush(); \
	friend struct Z_Construct_UClass_ABrush_Statics; \
public: \
	DECLARE_CLASS(ABrush, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ABrush)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ABrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrush) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ABrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrush); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABrush(ABrush&&); \
	ABrush(const ABrush&); \
public: \
	ENGINE_API virtual ~ABrush();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_75_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_79_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ABrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h


#define FOREACH_ENUM_ECSGOPER(op) \
	op(CSG_Active) \
	op(CSG_Add) \
	op(CSG_Subtract) \
	op(CSG_Intersect) \
	op(CSG_Deintersect) \
	op(CSG_None) 

enum ECsgOper : int;
template<> ENGINE_API UEnum* StaticEnum<ECsgOper>();

#define FOREACH_ENUM_EBRUSHTYPE(op) \
	op(Brush_Default) \
	op(Brush_Add) \
	op(Brush_Subtract) 

enum EBrushType : int;
template<> ENGINE_API UEnum* StaticEnum<EBrushType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
