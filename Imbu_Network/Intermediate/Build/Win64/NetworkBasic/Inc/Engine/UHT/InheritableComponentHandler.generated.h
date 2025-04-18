// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InheritableComponentHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InheritableComponentHandler_generated_h
#error "InheritableComponentHandler.generated.h already included, missing '#pragma once' in InheritableComponentHandler.h"
#endif
#define ENGINE_InheritableComponentHandler_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentKey_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FComponentKey>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FComponentOverrideRecord>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInheritableComponentHandler, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInheritableComponentHandler(); \
	friend struct Z_Construct_UClass_UInheritableComponentHandler_Statics; \
public: \
	DECLARE_CLASS(UInheritableComponentHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInheritableComponentHandler) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInheritableComponentHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInheritableComponentHandler(UInheritableComponentHandler&&); \
	UInheritableComponentHandler(const UInheritableComponentHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInheritableComponentHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInheritableComponentHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInheritableComponentHandler) \
	ENGINE_API virtual ~UInheritableComponentHandler();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_91_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInheritableComponentHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InheritableComponentHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
