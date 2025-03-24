// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/GeneratedNavLinksProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef AIMODULE_GeneratedNavLinksProxy_generated_h
#error "GeneratedNavLinksProxy.generated.h already included, missing '#pragma once' in GeneratedNavLinksProxy.h"
#endif
#define AIMODULE_GeneratedNavLinksProxy_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_11_DELEGATE \
AIMODULE_API void FLinkReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& LinkReachedSignature, AActor* MovingActor, const FVector DestinationPoint);


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGeneratedNavLinksProxy(); \
	friend struct Z_Construct_UClass_UGeneratedNavLinksProxy_Statics; \
public: \
	DECLARE_CLASS(UGeneratedNavLinksProxy, UBaseGeneratedNavLinksProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UGeneratedNavLinksProxy)


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UGeneratedNavLinksProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratedNavLinksProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UGeneratedNavLinksProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratedNavLinksProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeneratedNavLinksProxy(UGeneratedNavLinksProxy&&); \
	UGeneratedNavLinksProxy(const UGeneratedNavLinksProxy&); \
public: \
	AIMODULE_API virtual ~UGeneratedNavLinksProxy();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_20_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UGeneratedNavLinksProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
