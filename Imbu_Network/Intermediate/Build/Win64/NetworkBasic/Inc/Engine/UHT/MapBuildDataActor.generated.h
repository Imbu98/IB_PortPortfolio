// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/StaticLightingData/MapBuildDataActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MapBuildDataActor_generated_h
#error "MapBuildDataActor.generated.h already included, missing '#pragma once' in MapBuildDataActor.h"
#endif
#define ENGINE_MapBuildDataActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMapBuildDataActor(); \
	friend struct Z_Construct_UClass_AMapBuildDataActor_Statics; \
public: \
	DECLARE_CLASS(AMapBuildDataActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AMapBuildDataActor)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapBuildDataActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapBuildDataActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapBuildDataActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapBuildDataActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapBuildDataActor(AMapBuildDataActor&&); \
	AMapBuildDataActor(const AMapBuildDataActor&); \
public: \
	NO_API virtual ~AMapBuildDataActor();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AMapBuildDataActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
