// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODProviderInterface_generated_h
#error "HLODProviderInterface.generated.h already included, missing '#pragma once' in HLODProviderInterface.h"
#endif
#define ENGINE_HLODProviderInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionHLODProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionHLODProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionHLODProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionHLODProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionHLODProvider(UWorldPartitionHLODProvider&&); \
	UWorldPartitionHLODProvider(const UWorldPartitionHLODProvider&); \
public: \
	ENGINE_API virtual ~UWorldPartitionHLODProvider();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWorldPartitionHLODProvider(); \
	friend struct Z_Construct_UClass_UWorldPartitionHLODProvider_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionHLODProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionHLODProvider)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IWorldPartitionHLODProvider() {} \
public: \
	typedef UWorldPartitionHLODProvider UClassType; \
	typedef IWorldPartitionHLODProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionHLODProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
