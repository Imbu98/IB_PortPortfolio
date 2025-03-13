// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoldoutCompositeSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef HOLDOUTCOMPOSITE_HoldoutCompositeSubsystem_generated_h
#error "HoldoutCompositeSubsystem.generated.h already included, missing '#pragma once' in HoldoutCompositeSubsystem.h"
#endif
#define HOLDOUTCOMPOSITE_HoldoutCompositeSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterPrimitive); \
	DECLARE_FUNCTION(execRegisterPrimitive);


#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoldoutCompositeSubsystem(); \
	friend struct Z_Construct_UClass_UHoldoutCompositeSubsystem_Statics; \
public: \
	DECLARE_CLASS(UHoldoutCompositeSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HoldoutComposite"), NO_API) \
	DECLARE_SERIALIZER(UHoldoutCompositeSubsystem)


#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoldoutCompositeSubsystem(UHoldoutCompositeSubsystem&&); \
	UHoldoutCompositeSubsystem(const UHoldoutCompositeSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoldoutCompositeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoldoutCompositeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoldoutCompositeSubsystem) \
	NO_API virtual ~UHoldoutCompositeSubsystem();


#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLDOUTCOMPOSITE_API UClass* StaticClass<class UHoldoutCompositeSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
