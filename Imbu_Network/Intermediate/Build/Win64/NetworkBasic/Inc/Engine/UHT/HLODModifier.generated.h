// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODModifier_generated_h
#error "HLODModifier.generated.h already included, missing '#pragma once' in HLODModifier.h"
#endif
#define ENGINE_HLODModifier_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionHLODModifier(); \
	friend struct Z_Construct_UClass_UWorldPartitionHLODModifier_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionHLODModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionHLODModifier)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionHLODModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionHLODModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionHLODModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionHLODModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionHLODModifier(UWorldPartitionHLODModifier&&); \
	UWorldPartitionHLODModifier(const UWorldPartitionHLODModifier&); \
public: \
	ENGINE_API virtual ~UWorldPartitionHLODModifier();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionHLODModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
