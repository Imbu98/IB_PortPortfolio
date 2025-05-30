// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeDialoguePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeDialoguePlayer_generated_h
#error "SoundNodeDialoguePlayer.generated.h already included, missing '#pragma once' in SoundNodeDialoguePlayer.h"
#endif
#define ENGINE_SoundNodeDialoguePlayer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeDialoguePlayer(); \
	friend struct Z_Construct_UClass_USoundNodeDialoguePlayer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeDialoguePlayer, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeDialoguePlayer)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeDialoguePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDialoguePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeDialoguePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDialoguePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeDialoguePlayer(USoundNodeDialoguePlayer&&); \
	USoundNodeDialoguePlayer(const USoundNodeDialoguePlayer&); \
public: \
	ENGINE_API virtual ~USoundNodeDialoguePlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeDialoguePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
