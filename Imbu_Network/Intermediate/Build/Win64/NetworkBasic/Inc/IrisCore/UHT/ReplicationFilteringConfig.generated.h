// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_ReplicationFilteringConfig_generated_h
#error "ReplicationFilteringConfig.generated.h already included, missing '#pragma once' in ReplicationFilteringConfig.h"
#endif
#define IRISCORE_ReplicationFilteringConfig_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


template<> IRISCORE_API UScriptStruct* StaticStruct<struct FObjectScopeHysteresisProfile>();

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationFilteringConfig(); \
	friend struct Z_Construct_UClass_UReplicationFilteringConfig_Statics; \
public: \
	DECLARE_CLASS(UReplicationFilteringConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), NO_API) \
	DECLARE_SERIALIZER(UReplicationFilteringConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicationFilteringConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReplicationFilteringConfig(UReplicationFilteringConfig&&); \
	UReplicationFilteringConfig(const UReplicationFilteringConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationFilteringConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationFilteringConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationFilteringConfig) \
	NO_API virtual ~UReplicationFilteringConfig();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_46_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UReplicationFilteringConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
