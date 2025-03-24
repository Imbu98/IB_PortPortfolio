// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/GeneratedBlueprintDelegateBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GeneratedBlueprintDelegateBinding_generated_h
#error "GeneratedBlueprintDelegateBinding.generated.h already included, missing '#pragma once' in GeneratedBlueprintDelegateBinding.h"
#endif
#define ENGINE_GeneratedBlueprintDelegateBinding_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGeneratedBlueprintDelegateBinding>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneratedBlueprintBinding(); \
	friend struct Z_Construct_UClass_UGeneratedBlueprintBinding_Statics; \
public: \
	DECLARE_CLASS(UGeneratedBlueprintBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UGeneratedBlueprintBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UGeneratedBlueprintBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeneratedBlueprintBinding(UGeneratedBlueprintBinding&&); \
	UGeneratedBlueprintBinding(const UGeneratedBlueprintBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGeneratedBlueprintBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratedBlueprintBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratedBlueprintBinding) \
	ENGINE_API virtual ~UGeneratedBlueprintBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_41_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGeneratedBlueprintBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
