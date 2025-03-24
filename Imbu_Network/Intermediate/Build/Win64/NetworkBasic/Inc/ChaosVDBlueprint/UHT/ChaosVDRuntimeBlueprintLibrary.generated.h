// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDRuntimeBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinearColor;
#ifdef CHAOSVDBLUEPRINT_ChaosVDRuntimeBlueprintLibrary_generated_h
#error "ChaosVDRuntimeBlueprintLibrary.generated.h already included, missing '#pragma once' in ChaosVDRuntimeBlueprintLibrary.h"
#endif
#define CHAOSVDBLUEPRINT_ChaosVDRuntimeBlueprintLibrary_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRecordDebugDrawSphere); \
	DECLARE_FUNCTION(execRecordDebugDrawVector); \
	DECLARE_FUNCTION(execRecordDebugDrawLine); \
	DECLARE_FUNCTION(execRecordDebugDrawBox);


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDRuntimeBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaosVDRuntimeBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVDBlueprint"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDRuntimeBlueprintLibrary)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDRuntimeBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDRuntimeBlueprintLibrary(UChaosVDRuntimeBlueprintLibrary&&); \
	UChaosVDRuntimeBlueprintLibrary(const UChaosVDRuntimeBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDRuntimeBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDRuntimeBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDRuntimeBlueprintLibrary) \
	NO_API virtual ~UChaosVDRuntimeBlueprintLibrary();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVDBLUEPRINT_API UClass* StaticClass<class UChaosVDRuntimeBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
