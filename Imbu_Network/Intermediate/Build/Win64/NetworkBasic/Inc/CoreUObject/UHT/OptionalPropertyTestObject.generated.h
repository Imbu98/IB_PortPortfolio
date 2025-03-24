// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/OptionalPropertyTestObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_OptionalPropertyTestObject_generated_h
#error "OptionalPropertyTestObject.generated.h already included, missing '#pragma once' in OptionalPropertyTestObject.h"
#endif
#define COREUOBJECT_OptionalPropertyTestObject_generated_h

#define FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptionalPropertyTestObject(); \
	friend struct Z_Construct_UClass_UOptionalPropertyTestObject_Statics; \
public: \
	DECLARE_CLASS(UOptionalPropertyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), NO_API) \
	DECLARE_SERIALIZER(UOptionalPropertyTestObject)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptionalPropertyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptionalPropertyTestObject(UOptionalPropertyTestObject&&); \
	UOptionalPropertyTestObject(const UOptionalPropertyTestObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionalPropertyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionalPropertyTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionalPropertyTestObject) \
	NO_API virtual ~UOptionalPropertyTestObject();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_7_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UOptionalPropertyTestObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
