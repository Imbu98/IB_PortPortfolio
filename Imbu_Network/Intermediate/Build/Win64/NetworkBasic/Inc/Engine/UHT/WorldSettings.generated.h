// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/WorldSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldSettings_generated_h
#error "WorldSettings.generated.h already included, missing '#pragma once' in WorldSettings.h"
#endif
#define ENGINE_WorldSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLightmassWorldInfoSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetViewer_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetViewer>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_284_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNaniteSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNaniteSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_299_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBroadphaseSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBroadphaseSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_342_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_NaniteSettings); \
	DECLARE_FUNCTION(execOnRep_WorldGravityZ);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_342_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldSettings, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_342_INCLASS \
private: \
	static void StaticRegisterNativesAWorldSettings(); \
	friend struct Z_Construct_UClass_AWorldSettings_Statics; \
public: \
	DECLARE_CLASS(AWorldSettings, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AWorldSettings) \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_342_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AWorldSettings*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHighPriorityLoading=NETFIELD_REP_START, \
		WorldGravityZ, \
		NaniteSettings, \
		TimeDilation, \
		CinematicTimeDilation, \
		PauserPlayerState, \
		NETFIELD_REP_END=PauserPlayerState	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_342_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldSettings(AWorldSettings&&); \
	AWorldSettings(const AWorldSettings&); \
public: \
	ENGINE_API virtual ~AWorldSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_339_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_342_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_342_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_342_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_342_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h


#define FOREACH_ENUM_EVISIBILITYAGGRESSIVENESS(op) \
	op(VIS_LeastAggressive) \
	op(VIS_ModeratelyAggressive) \
	op(VIS_MostAggressive) \
	op(VIS_Max) 

enum EVisibilityAggressiveness : int;
template<> ENGINE_API UEnum* StaticEnum<EVisibilityAggressiveness>();

#define FOREACH_ENUM_EVOLUMELIGHTINGMETHOD(op) \
	op(VLM_VolumetricLightmap) \
	op(VLM_SparseVolumeLightingSamples) 

enum EVolumeLightingMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EVolumeLightingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
