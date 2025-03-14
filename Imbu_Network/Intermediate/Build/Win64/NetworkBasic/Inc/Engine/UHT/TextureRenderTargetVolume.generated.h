// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureRenderTargetVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureRenderTargetVolume_generated_h
#error "TextureRenderTargetVolume.generated.h already included, missing '#pragma once' in TextureRenderTargetVolume.h"
#endif
#define ENGINE_TextureRenderTargetVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTextureRenderTargetVolume(); \
	friend struct Z_Construct_UClass_UTextureRenderTargetVolume_Statics; \
public: \
	DECLARE_CLASS(UTextureRenderTargetVolume, UTextureRenderTarget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureRenderTargetVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTargetVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTargetVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTargetVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTargetVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureRenderTargetVolume(UTextureRenderTargetVolume&&); \
	UTextureRenderTargetVolume(const UTextureRenderTargetVolume&); \
public: \
	ENGINE_API virtual ~UTextureRenderTargetVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureRenderTargetVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
