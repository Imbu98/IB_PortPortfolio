// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VerseVM/VVMVerseStruct.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_VVMVerseStruct_generated_h
#error "VVMVerseStruct.generated.h already included, missing '#pragma once' in VVMVerseStruct.h"
#endif
#define COREUOBJECT_VVMVerseStruct_generated_h

#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerseStruct(); \
	friend struct Z_Construct_UClass_UVerseStruct_Statics; \
public: \
	DECLARE_CLASS(UVerseStruct, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), NO_API) \
	DECLARE_SERIALIZER(UVerseStruct)


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerseStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVerseStruct(UVerseStruct&&); \
	UVerseStruct(const UVerseStruct&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerseStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerseStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerseStruct) \
	NO_API virtual ~UVerseStruct();


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_18_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UVerseStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
