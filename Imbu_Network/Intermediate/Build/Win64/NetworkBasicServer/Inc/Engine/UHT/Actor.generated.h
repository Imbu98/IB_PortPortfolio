// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/Actor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APawn;
class APlayerController;
class UActorComponent;
class UChildActorComponent;
class UDamageType;
class UInputComponent;
class UInterface;
class ULevel;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
enum class EAttachmentRule : uint8;
enum class EDetachmentRule : uint8;
enum class EPhysicsReplicationMode : uint8;
struct FHitResult;
struct FKey;
#ifdef ENGINE_Actor_generated_h
#error "Actor.generated.h already included, missing '#pragma once' in Actor.h"
#endif
#define ENGINE_Actor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_146_DELEGATE \
ENGINE_API void FTakeAnyDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakeAnyDamageSignature, AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_147_DELEGATE \
ENGINE_API void FTakePointDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakePointDamageSignature, AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_148_DELEGATE \
ENGINE_API void FTakeRadialDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakeRadialDamageSignature, AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy, AActor* DamageCauser);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_149_DELEGATE \
ENGINE_API void FActorBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginOverlapSignature, AActor* OverlappedActor, AActor* OtherActor);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_150_DELEGATE \
ENGINE_API void FActorEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndOverlapSignature, AActor* OverlappedActor, AActor* OtherActor);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_151_DELEGATE \
ENGINE_API void FActorHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorHitSignature, AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult const& Hit);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_153_DELEGATE \
ENGINE_API void FActorBeginCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginCursorOverSignature, AActor* TouchedActor);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_154_DELEGATE \
ENGINE_API void FActorEndCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndCursorOverSignature, AActor* TouchedActor);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_155_DELEGATE \
ENGINE_API void FActorOnClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnClickedSignature, AActor* TouchedActor, FKey ButtonPressed);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_156_DELEGATE \
ENGINE_API void FActorOnReleasedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnReleasedSignature, AActor* TouchedActor, FKey ButtonReleased);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_157_DELEGATE \
ENGINE_API void FActorOnInputTouchBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnInputTouchBeginSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_158_DELEGATE \
ENGINE_API void FActorOnInputTouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnInputTouchEndSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_159_DELEGATE \
ENGINE_API void FActorBeginTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginTouchOverSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_160_DELEGATE \
ENGINE_API void FActorEndTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndTouchOverSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_162_DELEGATE \
ENGINE_API void FActorDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorDestroyedSignature, AActor* DestroyedActor);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_163_DELEGATE \
ENGINE_API void FActorEndPlaySignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndPlaySignature, AActor* Actor, EEndPlayReason::Type EndPlayReason);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNetCullDistanceSquared); \
	DECLARE_FUNCTION(execSetNetCullDistanceSquared); \
	DECLARE_FUNCTION(execGetMinNetUpdateFrequency); \
	DECLARE_FUNCTION(execSetMinNetUpdateFrequency); \
	DECLARE_FUNCTION(execGetNetUpdateFrequency); \
	DECLARE_FUNCTION(execSetNetUpdateFrequency); \
	DECLARE_FUNCTION(execMakeNoise); \
	DECLARE_FUNCTION(execGetComponentsByInterface); \
	DECLARE_FUNCTION(execGetComponentsByTag); \
	DECLARE_FUNCTION(execFindComponentByTag); \
	DECLARE_FUNCTION(execK2_GetComponentsByClass); \
	DECLARE_FUNCTION(execGetComponentByClass); \
	DECLARE_FUNCTION(execGetActorEyesViewPoint); \
	DECLARE_FUNCTION(execPrestreamTextures); \
	DECLARE_FUNCTION(execForceNetUpdate); \
	DECLARE_FUNCTION(execWasRecentlyRendered); \
	DECLARE_FUNCTION(execSetTickGroup); \
	DECLARE_FUNCTION(execGetAttachedActors); \
	DECLARE_FUNCTION(execGetAttachParentSocketName); \
	DECLARE_FUNCTION(execGetAttachParentActor); \
	DECLARE_FUNCTION(execGetLevelTransform); \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execK2_TeleportTo); \
	DECLARE_FUNCTION(execGetParentActor); \
	DECLARE_FUNCTION(execGetParentComponent); \
	DECLARE_FUNCTION(execGetAllChildActors); \
	DECLARE_FUNCTION(execIsChildActor); \
	DECLARE_FUNCTION(execFlushNetDormancy); \
	DECLARE_FUNCTION(execSetNetDormancy); \
	DECLARE_FUNCTION(execIsOverlappingActor); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execSetOwner); \
	DECLARE_FUNCTION(execOnRep_ReplicatedMovement); \
	DECLARE_FUNCTION(execGetActorTickInterval); \
	DECLARE_FUNCTION(execSetActorTickInterval); \
	DECLARE_FUNCTION(execIsActorTickEnabled); \
	DECLARE_FUNCTION(execSetActorTickEnabled); \
	DECLARE_FUNCTION(execGetLifeSpan); \
	DECLARE_FUNCTION(execSetLifeSpan); \
	DECLARE_FUNCTION(execGetOverlappingComponents); \
	DECLARE_FUNCTION(execGetOverlappingActors); \
	DECLARE_FUNCTION(execIsActorBeingDestroyed); \
	DECLARE_FUNCTION(execGetGameTimeSinceCreation); \
	DECLARE_FUNCTION(execSetTickableWhenPaused); \
	DECLARE_FUNCTION(execGetTickableWhenPaused); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor); \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor); \
	DECLARE_FUNCTION(execGetActorTimeDilation); \
	DECLARE_FUNCTION(execActorHasTag); \
	DECLARE_FUNCTION(execK2_DetachFromActor); \
	DECLARE_FUNCTION(execDetachRootComponentFromParent); \
	DECLARE_FUNCTION(execK2_AttachToActor); \
	DECLARE_FUNCTION(execK2_AttachRootComponentToActor); \
	DECLARE_FUNCTION(execK2_AttachToComponent); \
	DECLARE_FUNCTION(execK2_AttachRootComponentTo); \
	DECLARE_FUNCTION(execFinishAddComponent); \
	DECLARE_FUNCTION(execAddComponentByClass); \
	DECLARE_FUNCTION(execAddComponent); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execK2_DestroyActor); \
	DECLARE_FUNCTION(execGetActorEnableCollision); \
	DECLARE_FUNCTION(execSetActorEnableCollision); \
	DECLARE_FUNCTION(execSetActorHiddenInGame); \
	DECLARE_FUNCTION(execGetActorRelativeScale3D); \
	DECLARE_FUNCTION(execSetActorRelativeScale3D); \
	DECLARE_FUNCTION(execK2_SetActorRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetActorRelativeRotation); \
	DECLARE_FUNCTION(execK2_SetActorRelativeLocation); \
	DECLARE_FUNCTION(execK2_AddActorLocalTransform); \
	DECLARE_FUNCTION(execK2_AddActorLocalRotation); \
	DECLARE_FUNCTION(execK2_AddActorLocalOffset); \
	DECLARE_FUNCTION(execK2_SetActorTransform); \
	DECLARE_FUNCTION(execK2_AddActorWorldTransformKeepScale); \
	DECLARE_FUNCTION(execK2_AddActorWorldTransform); \
	DECLARE_FUNCTION(execK2_AddActorWorldRotation); \
	DECLARE_FUNCTION(execK2_AddActorWorldOffset); \
	DECLARE_FUNCTION(execGetHorizontalDotProductTo); \
	DECLARE_FUNCTION(execGetDotProductTo); \
	DECLARE_FUNCTION(execGetVerticalDistanceTo); \
	DECLARE_FUNCTION(execGetSquaredHorizontalDistanceTo); \
	DECLARE_FUNCTION(execGetHorizontalDistanceTo); \
	DECLARE_FUNCTION(execGetSquaredDistanceTo); \
	DECLARE_FUNCTION(execGetDistanceTo); \
	DECLARE_FUNCTION(execGetActorScale3D); \
	DECLARE_FUNCTION(execSetActorScale3D); \
	DECLARE_FUNCTION(execK2_SetActorLocationAndRotation); \
	DECLARE_FUNCTION(execK2_SetActorRotation); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execK2_GetRootComponent); \
	DECLARE_FUNCTION(execGetActorBounds); \
	DECLARE_FUNCTION(execGetActorRightVector); \
	DECLARE_FUNCTION(execGetActorUpVector); \
	DECLARE_FUNCTION(execGetActorForwardVector); \
	DECLARE_FUNCTION(execK2_GetActorRotation); \
	DECLARE_FUNCTION(execK2_SetActorLocation); \
	DECLARE_FUNCTION(execK2_GetActorLocation); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execGetInstigatorController); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execGetInputVectorAxisValue); \
	DECLARE_FUNCTION(execGetInputAxisKeyValue); \
	DECLARE_FUNCTION(execGetInputAxisValue); \
	DECLARE_FUNCTION(execDisableInput); \
	DECLARE_FUNCTION(execCreateInputComponent); \
	DECLARE_FUNCTION(execEnableInput); \
	DECLARE_FUNCTION(execGetRayTracingGroupId); \
	DECLARE_FUNCTION(execSetRayTracingGroupId); \
	DECLARE_FUNCTION(execOnRep_Instigator); \
	DECLARE_FUNCTION(execGetResimulationThreshold); \
	DECLARE_FUNCTION(execCanTriggerResimulation); \
	DECLARE_FUNCTION(execGetPhysicsReplicationMode); \
	DECLARE_FUNCTION(execSetPhysicsReplicationMode); \
	DECLARE_FUNCTION(execOnRep_AttachmentReplication); \
	DECLARE_FUNCTION(execGetRemoteRole); \
	DECLARE_FUNCTION(execGetLocalRole); \
	DECLARE_FUNCTION(execSetReplicateMovement); \
	DECLARE_FUNCTION(execSetReplicates); \
	DECLARE_FUNCTION(execOnRep_Owner); \
	DECLARE_FUNCTION(execSetAutoDestroyWhenFinished); \
	DECLARE_FUNCTION(execTearOff); \
	DECLARE_FUNCTION(execOnRep_ReplicateMovement);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetFolderPath); \
	DECLARE_FUNCTION(execGetFolderPath); \
	DECLARE_FUNCTION(execSetActorLabel); \
	DECLARE_FUNCTION(execGetActorLabel); \
	DECLARE_FUNCTION(execGetDefaultActorLabel); \
	DECLARE_FUNCTION(execIsSelectable); \
	DECLARE_FUNCTION(execIsEditable); \
	DECLARE_FUNCTION(execIsTemporarilyHiddenInEditor); \
	DECLARE_FUNCTION(execSetIsTemporarilyHiddenInEditor); \
	DECLARE_FUNCTION(execIsHiddenEd); \
	DECLARE_FUNCTION(execIsHiddenEdAtStartup);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AActor, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActor(); \
	friend struct Z_Construct_UClass_AActor_Statics; \
public: \
	DECLARE_CLASS(AActor, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_AActor, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AActor) \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		bHidden, \
		bTearOff, \
		bCanBeDamaged, \
		RemoteRole, \
		AttachmentReplication, \
		ReplicatedMovement, \
		Owner, \
		Role, \
		Instigator, \
		NETFIELD_REP_END=Instigator	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(AActor) \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AActor(AActor&&); \
	AActor(const AActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActor) \
	ENGINE_API virtual ~AActor();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_233_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_236_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h


#define FOREACH_ENUM_EACTORUPDATEOVERLAPSMETHOD(op) \
	op(EActorUpdateOverlapsMethod::UseConfigDefault) \
	op(EActorUpdateOverlapsMethod::AlwaysUpdate) \
	op(EActorUpdateOverlapsMethod::OnlyUpdateMovable) \
	op(EActorUpdateOverlapsMethod::NeverUpdate) 

enum class EActorUpdateOverlapsMethod : uint8;
template<> struct TIsUEnumClass<EActorUpdateOverlapsMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EActorUpdateOverlapsMethod>();

#define FOREACH_ENUM_ESPAWNACTORSCALEMETHOD(op) \
	op(ESpawnActorScaleMethod::OverrideRootScale) \
	op(ESpawnActorScaleMethod::MultiplyWithRoot) \
	op(ESpawnActorScaleMethod::SelectDefaultAtRuntime) 

enum class ESpawnActorScaleMethod : uint8;
template<> struct TIsUEnumClass<ESpawnActorScaleMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESpawnActorScaleMethod>();

#define FOREACH_ENUM_ELEVELINSTANCETYPE(op) \
	op(ELevelInstanceType::None) \
	op(ELevelInstanceType::LevelInstance) \
	op(ELevelInstanceType::LevelInstanceEdit) \
	op(ELevelInstanceType::LevelInstancePropertyOverride) 

enum class ELevelInstanceType : uint8;
template<> struct TIsUEnumClass<ELevelInstanceType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceType>();

#define FOREACH_ENUM_ELEVELINSTANCEFLAGS(op) \
	op(ELevelInstanceFlags::None) \
	op(ELevelInstanceFlags::IsInEditHierarchy) \
	op(ELevelInstanceFlags::HasPropertyOverrides) \
	op(ELevelInstanceFlags::HasEditablePropertyOverrides) 

enum class ELevelInstanceFlags : uint8;
template<> struct TIsUEnumClass<ELevelInstanceFlags> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceFlags>();

#define FOREACH_ENUM_EACTORGRIDPLACEMENT(op) \
	op(EActorGridPlacement::Bounds) \
	op(EActorGridPlacement::Location) \
	op(EActorGridPlacement::AlwaysLoaded) \
	op(EActorGridPlacement::None) 

enum class EActorGridPlacement : uint8;
template<> struct TIsUEnumClass<EActorGridPlacement> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EActorGridPlacement>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
