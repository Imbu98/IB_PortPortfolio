// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructUtils/UserDefinedStructEditorUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_UserDefinedStructEditorUtils_generated_h
#error "UserDefinedStructEditorUtils.generated.h already included, missing '#pragma once' in UserDefinedStructEditorUtils.h"
#endif
#define COREUOBJECT_UserDefinedStructEditorUtils_generated_h

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedStructEditorDataBase(); \
	friend struct Z_Construct_UClass_UUserDefinedStructEditorDataBase_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedStructEditorDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoreUObject"), COREUOBJECT_API) \
	DECLARE_SERIALIZER(UUserDefinedStructEditorDataBase)


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UUserDefinedStructEditorDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUserDefinedStructEditorDataBase(UUserDefinedStructEditorDataBase&&); \
	UUserDefinedStructEditorDataBase(const UUserDefinedStructEditorDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UUserDefinedStructEditorDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedStructEditorDataBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedStructEditorDataBase) \
	COREUOBJECT_API virtual ~UUserDefinedStructEditorDataBase();


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_9_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UUserDefinedStructEditorDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
