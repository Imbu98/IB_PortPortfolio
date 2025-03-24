// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoldoutCompositeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOLDOUTCOMPOSITE_HoldoutCompositeComponent_generated_h
#error "HoldoutCompositeComponent.generated.h already included, missing '#pragma once' in HoldoutCompositeComponent.h"
#endif
#define HOLDOUTCOMPOSITE_HoldoutCompositeComponent_generated_h

#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled);


#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHoldoutCompositeComponent(); \
	friend struct Z_Construct_UClass_UHoldoutCompositeComponent_Statics; \
public: \
	DECLARE_CLASS(UHoldoutCompositeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoldoutComposite"), HOLDOUTCOMPOSITE_API) \
	DECLARE_SERIALIZER(UHoldoutCompositeComponent)


#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOLDOUTCOMPOSITE_API UHoldoutCompositeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoldoutCompositeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOLDOUTCOMPOSITE_API, UHoldoutCompositeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoldoutCompositeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoldoutCompositeComponent(UHoldoutCompositeComponent&&); \
	UHoldoutCompositeComponent(const UHoldoutCompositeComponent&); \
public: \
	HOLDOUTCOMPOSITE_API virtual ~UHoldoutCompositeComponent();


#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_13_INCLASS \
	FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLDOUTCOMPOSITE_API UClass* StaticClass<class UHoldoutCompositeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
