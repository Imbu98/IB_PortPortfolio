// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Slate/ButtonStyleAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ButtonStyleAsset_generated_h
#error "ButtonStyleAsset.generated.h already included, missing '#pragma once' in ButtonStyleAsset.h"
#endif
#define ENGINE_ButtonStyleAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUButtonStyleAsset(); \
	friend struct Z_Construct_UClass_UButtonStyleAsset_Statics; \
public: \
	DECLARE_CLASS(UButtonStyleAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UButtonStyleAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UButtonStyleAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonStyleAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UButtonStyleAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonStyleAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UButtonStyleAsset(UButtonStyleAsset&&); \
	UButtonStyleAsset(const UButtonStyleAsset&); \
public: \
	ENGINE_API virtual ~UButtonStyleAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UButtonStyleAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
