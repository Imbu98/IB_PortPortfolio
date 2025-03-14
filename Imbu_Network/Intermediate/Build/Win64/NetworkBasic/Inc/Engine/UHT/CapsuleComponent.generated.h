// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CapsuleComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CapsuleComponent_generated_h
#error "CapsuleComponent.generated.h already included, missing '#pragma once' in CapsuleComponent.h"
#endif
#define ENGINE_CapsuleComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetShapeScale); \
	DECLARE_FUNCTION(execGetUnscaledCapsuleSize_WithoutHemisphere); \
	DECLARE_FUNCTION(execGetUnscaledCapsuleSize); \
	DECLARE_FUNCTION(execGetUnscaledCapsuleHalfHeight_WithoutHemisphere); \
	DECLARE_FUNCTION(execGetUnscaledCapsuleHalfHeight); \
	DECLARE_FUNCTION(execGetUnscaledCapsuleRadius); \
	DECLARE_FUNCTION(execGetScaledCapsuleSize_WithoutHemisphere); \
	DECLARE_FUNCTION(execGetScaledCapsuleSize); \
	DECLARE_FUNCTION(execGetScaledCapsuleHalfHeight_WithoutHemisphere); \
	DECLARE_FUNCTION(execGetScaledCapsuleHalfHeight); \
	DECLARE_FUNCTION(execGetScaledCapsuleRadius); \
	DECLARE_FUNCTION(execSetCapsuleHalfHeight); \
	DECLARE_FUNCTION(execSetCapsuleRadius); \
	DECLARE_FUNCTION(execSetCapsuleSize);


#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCapsuleComponent, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCapsuleComponent(); \
	friend struct Z_Construct_UClass_UCapsuleComponent_Statics; \
public: \
	DECLARE_CLASS(UCapsuleComponent, UShapeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCapsuleComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCapsuleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCapsuleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCapsuleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCapsuleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCapsuleComponent(UCapsuleComponent&&); \
	UCapsuleComponent(const UCapsuleComponent&); \
public: \
	ENGINE_API virtual ~UCapsuleComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCapsuleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
