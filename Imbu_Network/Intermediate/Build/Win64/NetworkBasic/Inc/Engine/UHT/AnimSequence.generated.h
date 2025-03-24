// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
#ifdef ENGINE_AnimSequence_generated_h
#error "AnimSequence.generated.h already included, missing '#pragma once' in AnimSequence.h"
#endif
#define ENGINE_AnimSequence_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSequenceTrackContainer>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTranslationTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTranslationTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRotationTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRotationTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScaleTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScaleTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompressedTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCompressedTrack>();

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execRemoveAllCustomAttributes); \
	DECLARE_FUNCTION(execRemoveAllCustomAttributesForBone); \
	DECLARE_FUNCTION(execRemoveCustomAttribute); \
	DECLARE_FUNCTION(execAddBoneStringCustomAttribute); \
	DECLARE_FUNCTION(execAddBoneIntegerCustomAttribute); \
	DECLARE_FUNCTION(execAddBoneFloatCustomAttribute); \
	DECLARE_FUNCTION(execUpdateRetargetSourceAssetData); \
	DECLARE_FUNCTION(execGetRetargetSourceAsset); \
	DECLARE_FUNCTION(execClearRetargetSourceAsset); \
	DECLARE_FUNCTION(execSetRetargetSourceAsset);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequence, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend struct Z_Construct_UClass_UAnimSequence_Statics; \
public: \
	DECLARE_CLASS(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimSequence) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimSequence(UAnimSequence&&); \
	UAnimSequence(const UAnimSequence&); \
public: \
	ENGINE_API virtual ~UAnimSequence();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_226_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_229_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h


#define FOREACH_ENUM_ESTRIPANIMDATAONDEDICATEDSERVERSETTINGS(op) \
	op(EStripAnimDataOnDedicatedServerSettings::UseProjectSetting) \
	op(EStripAnimDataOnDedicatedServerSettings::StripAnimDataOnDedicatedServer) \
	op(EStripAnimDataOnDedicatedServerSettings::DoNotStripAnimDataOnDedicatedServer) 

enum class EStripAnimDataOnDedicatedServerSettings : uint8;
template<> struct TIsUEnumClass<EStripAnimDataOnDedicatedServerSettings> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EStripAnimDataOnDedicatedServerSettings>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
