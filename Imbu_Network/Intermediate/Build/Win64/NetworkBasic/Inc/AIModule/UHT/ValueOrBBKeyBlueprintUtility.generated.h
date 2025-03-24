// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/ValueOrBBKeyBlueprintUtility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviorTreeComponent;
class UObject;
struct FInstancedStruct;
struct FValueOrBBKey_Bool;
struct FValueOrBBKey_Class;
struct FValueOrBBKey_Enum;
struct FValueOrBBKey_Float;
struct FValueOrBBKey_Int32;
struct FValueOrBBKey_Name;
struct FValueOrBBKey_Object;
struct FValueOrBBKey_Rotator;
struct FValueOrBBKey_String;
struct FValueOrBBKey_Struct;
struct FValueOrBBKey_Vector;
#ifdef AIMODULE_ValueOrBBKeyBlueprintUtility_generated_h
#error "ValueOrBBKeyBlueprintUtility.generated.h already included, missing '#pragma once' in ValueOrBBKeyBlueprintUtility.h"
#endif
#define AIMODULE_ValueOrBBKeyBlueprintUtility_generated_h

#define FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStruct); \
	DECLARE_FUNCTION(execGetVector); \
	DECLARE_FUNCTION(execGetRotator); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetInt32); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetEnum); \
	DECLARE_FUNCTION(execGetClass); \
	DECLARE_FUNCTION(execGetBool);


#define FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUValueOrBBKeyBlueprintUtility(); \
	friend struct Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics; \
public: \
	DECLARE_CLASS(UValueOrBBKeyBlueprintUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UValueOrBBKeyBlueprintUtility)


#define FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UValueOrBBKeyBlueprintUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UValueOrBBKeyBlueprintUtility(UValueOrBBKeyBlueprintUtility&&); \
	UValueOrBBKeyBlueprintUtility(const UValueOrBBKeyBlueprintUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UValueOrBBKeyBlueprintUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UValueOrBBKeyBlueprintUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UValueOrBBKeyBlueprintUtility) \
	NO_API virtual ~UValueOrBBKeyBlueprintUtility();


#define FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_20_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UValueOrBBKeyBlueprintUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
