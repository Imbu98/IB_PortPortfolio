// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockAI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AITESTSUITE_MockAI_generated_h
#error "MockAI.generated.h already included, missing '#pragma once' in MockAI.h"
#endif
#define AITESTSUITE_MockAI_generated_h

#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMockAI(); \
	friend struct Z_Construct_UClass_UMockAI_Statics; \
public: \
	DECLARE_CLASS(UMockAI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), NO_API) \
	DECLARE_SERIALIZER(UMockAI)


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockAI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMockAI(UMockAI&&); \
	UMockAI(const UMockAI&); \
public:


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_29_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_INCLASS \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AITESTSUITE_API UClass* StaticClass<class UMockAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
