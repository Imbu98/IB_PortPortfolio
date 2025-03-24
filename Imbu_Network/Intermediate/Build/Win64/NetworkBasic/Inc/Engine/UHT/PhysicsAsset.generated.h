// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConstraintInstanceAccessor;
#ifdef ENGINE_PhysicsAsset_generated_h
#error "PhysicsAsset.generated.h already included, missing '#pragma once' in PhysicsAsset.h"
#endif
#define ENGINE_PhysicsAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicsAssetSolverSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSolverIterations_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSolverIterations>();

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execGetConstraints); \
	DECLARE_FUNCTION(execGetConstraintByBoneNames); \
	DECLARE_FUNCTION(execGetConstraintByName);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsAsset, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAsset(); \
	friend struct Z_Construct_UClass_UPhysicsAsset_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAsset, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsAsset*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsAsset(UPhysicsAsset&&); \
	UPhysicsAsset(const UPhysicsAsset&); \
public: \
	ENGINE_API virtual ~UPhysicsAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_169_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_172_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h


#define FOREACH_ENUM_EPHYSICSASSETSOLVERTYPE(op) \
	op(EPhysicsAssetSolverType::RBAN) \
	op(EPhysicsAssetSolverType::World) 

enum class EPhysicsAssetSolverType : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetSolverType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPhysicsAssetSolverType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
