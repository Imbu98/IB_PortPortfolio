// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayDebuggerRenderingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerRenderingComponent_generated_h
#error "GameplayDebuggerRenderingComponent.generated.h already included, missing '#pragma once' in GameplayDebuggerRenderingComponent.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerRenderingComponent_generated_h

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerRenderingComponent(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerRenderingComponent_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerRenderingComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerRenderingComponent)


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerRenderingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerRenderingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerRenderingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayDebuggerRenderingComponent(UGameplayDebuggerRenderingComponent&&); \
	UGameplayDebuggerRenderingComponent(const UGameplayDebuggerRenderingComponent&); \
public: \
	NO_API virtual ~UGameplayDebuggerRenderingComponent();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_35_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_38_INCLASS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class UGameplayDebuggerRenderingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
