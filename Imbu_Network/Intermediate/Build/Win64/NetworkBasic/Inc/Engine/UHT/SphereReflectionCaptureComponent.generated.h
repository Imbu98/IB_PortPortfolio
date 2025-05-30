// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SphereReflectionCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SphereReflectionCaptureComponent_generated_h
#error "SphereReflectionCaptureComponent.generated.h already included, missing '#pragma once' in SphereReflectionCaptureComponent.h"
#endif
#define ENGINE_SphereReflectionCaptureComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSphereReflectionCaptureComponent(); \
	friend struct Z_Construct_UClass_USphereReflectionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(USphereReflectionCaptureComponent, UReflectionCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USphereReflectionCaptureComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USphereReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USphereReflectionCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USphereReflectionCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereReflectionCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USphereReflectionCaptureComponent(USphereReflectionCaptureComponent&&); \
	USphereReflectionCaptureComponent(const USphereReflectionCaptureComponent&); \
public: \
	ENGINE_API virtual ~USphereReflectionCaptureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USphereReflectionCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SphereReflectionCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
