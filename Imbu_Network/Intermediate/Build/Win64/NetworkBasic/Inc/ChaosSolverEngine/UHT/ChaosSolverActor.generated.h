// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosSolverActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSSOLVERENGINE_ChaosSolverActor_generated_h
#error "ChaosSolverActor.generated.h already included, missing '#pragma once' in ChaosSolverActor.h"
#endif
#define CHAOSSOLVERENGINE_ChaosSolverActor_generated_h

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics; \
	CHAOSSOLVERENGINE_API static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FChaosDebugSubstepControl>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataflowRigidSolverProxy_Statics; \
	CHAOSSOLVERENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowPhysicsSolverProxy Super;


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FDataflowRigidSolverProxy>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_109_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSolverActive); \
	DECLARE_FUNCTION(execSetAsCurrentWorldSolver);


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_109_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AChaosSolverActor, CHAOSSOLVERENGINE_API)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_109_INCLASS \
private: \
	static void StaticRegisterNativesAChaosSolverActor(); \
	friend struct Z_Construct_UClass_AChaosSolverActor_Statics; \
public: \
	DECLARE_CLASS(AChaosSolverActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), CHAOSSOLVERENGINE_API) \
	DECLARE_SERIALIZER(AChaosSolverActor) \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_109_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AChaosSolverActor*>(this); }


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSSOLVERENGINE_API AChaosSolverActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChaosSolverActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVERENGINE_API, AChaosSolverActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosSolverActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChaosSolverActor(AChaosSolverActor&&); \
	AChaosSolverActor(const AChaosSolverActor&); \
public: \
	CHAOSSOLVERENGINE_API virtual ~AChaosSolverActor();


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_106_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_109_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_109_INCLASS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSSOLVERENGINE_API UClass* StaticClass<class AChaosSolverActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h


#define FOREACH_ENUM_ECLUSTERCONNECTIONTYPEENUM(op) \
	op(EClusterConnectionTypeEnum::Chaos_PointImplicit) \
	op(EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation) \
	op(EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation) \
	op(EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay) \
	op(EClusterConnectionTypeEnum::Chaos_BoundsOverlapFilteredDelaunayTriangulation) \
	op(EClusterConnectionTypeEnum::Chaos_None) \
	op(EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max) 

enum class EClusterConnectionTypeEnum : uint8;
template<> struct TIsUEnumClass<EClusterConnectionTypeEnum> { enum { Value = true }; };
template<> CHAOSSOLVERENGINE_API UEnum* StaticEnum<EClusterConnectionTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
