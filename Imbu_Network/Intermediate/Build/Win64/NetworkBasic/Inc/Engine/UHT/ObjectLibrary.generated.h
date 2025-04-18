// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ObjectLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ObjectLibrary_generated_h
#error "ObjectLibrary.generated.h already included, missing '#pragma once' in ObjectLibrary.h"
#endif
#define ENGINE_ObjectLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUObjectLibrary(); \
	friend struct Z_Construct_UClass_UObjectLibrary_Statics; \
public: \
	DECLARE_CLASS(UObjectLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UObjectLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UObjectLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UObjectLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectLibrary(UObjectLibrary&&); \
	UObjectLibrary(const UObjectLibrary&); \
public: \
	ENGINE_API virtual ~UObjectLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UObjectLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
