// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalTestingManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef FUNCTIONALTESTING_FunctionalTestingManager_generated_h
#error "FunctionalTestingManager.generated.h already included, missing '#pragma once' in FunctionalTestingManager.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestingManager_generated_h

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRunAllFunctionalTests);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUFunctionalTestingManager(); \
	friend struct Z_Construct_UClass_UFunctionalTestingManager_Statics; \
public: \
	DECLARE_CLASS(UFunctionalTestingManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(UFunctionalTestingManager)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API UFunctionalTestingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionalTestingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, UFunctionalTestingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionalTestingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFunctionalTestingManager(UFunctionalTestingManager&&); \
	UFunctionalTestingManager(const UFunctionalTestingManager&); \
public: \
	FUNCTIONALTESTING_API virtual ~UFunctionalTestingManager();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_21_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UFunctionalTestingManager>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_93_CALLBACK_WRAPPERS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhasedAutomationActorBase(); \
	friend struct Z_Construct_UClass_APhasedAutomationActorBase_Statics; \
public: \
	DECLARE_CLASS(APhasedAutomationActorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(APhasedAutomationActorBase)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API APhasedAutomationActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APhasedAutomationActorBase(APhasedAutomationActorBase&&); \
	APhasedAutomationActorBase(const APhasedAutomationActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, APhasedAutomationActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhasedAutomationActorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhasedAutomationActorBase) \
	FUNCTIONALTESTING_API virtual ~APhasedAutomationActorBase();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_90_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_93_CALLBACK_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class APhasedAutomationActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
