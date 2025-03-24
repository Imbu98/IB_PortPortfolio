// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/RuntimeHashSet/WorldPartitionRuntimeCellDataHashSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionRuntimeCellDataHashSet_generated_h
#error "WorldPartitionRuntimeCellDataHashSet.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeCellDataHashSet.h"
#endif
#define ENGINE_WorldPartitionRuntimeCellDataHashSet_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeCellDataHashSet(); \
	friend struct Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionRuntimeCellDataHashSet, UWorldPartitionRuntimeCellData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeCellDataHashSet) \
	DECLARE_WITHIN(UWorldPartitionRuntimeCell)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeCellDataHashSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeCellDataHashSet(UWorldPartitionRuntimeCellDataHashSet&&); \
	UWorldPartitionRuntimeCellDataHashSet(const UWorldPartitionRuntimeCellDataHashSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeCellDataHashSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeCellDataHashSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeCellDataHashSet) \
	ENGINE_API virtual ~UWorldPartitionRuntimeCellDataHashSet();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionRuntimeCellDataHashSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
