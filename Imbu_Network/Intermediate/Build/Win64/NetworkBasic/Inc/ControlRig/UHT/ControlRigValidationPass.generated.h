// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigValidationPass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ControlRigValidationPass_generated_h
#error "ControlRigValidationPass.generated.h already included, missing '#pragma once' in ControlRigValidationPass.h"
#endif
#define CONTROLRIG_ControlRigValidationPass_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigValidationContext_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigValidationContext>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigValidator(); \
	friend struct Z_Construct_UClass_UControlRigValidator_Statics; \
public: \
	DECLARE_CLASS(UControlRigValidator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigValidator)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigValidator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigValidator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigValidator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigValidator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigValidator(UControlRigValidator&&); \
	UControlRigValidator(const UControlRigValidator&); \
public: \
	NO_API virtual ~UControlRigValidator();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_47_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_50_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigValidator>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigValidationPass(); \
	friend struct Z_Construct_UClass_UControlRigValidationPass_Statics; \
public: \
	DECLARE_CLASS(UControlRigValidationPass, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigValidationPass)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigValidationPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigValidationPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigValidationPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigValidationPass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigValidationPass(UControlRigValidationPass&&); \
	UControlRigValidationPass(const UControlRigValidationPass&); \
public: \
	NO_API virtual ~UControlRigValidationPass();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_78_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_81_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigValidationPass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigValidationPass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
