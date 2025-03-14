// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureRenderTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureRenderTarget_generated_h
#error "TextureRenderTarget.generated.h already included, missing '#pragma once' in TextureRenderTarget.h"
#endif
#define ENGINE_TextureRenderTarget_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTextureRenderTarget(); \
	friend struct Z_Construct_UClass_UTextureRenderTarget_Statics; \
public: \
	DECLARE_CLASS(UTextureRenderTarget, UTexture, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureRenderTarget)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureRenderTarget(UTextureRenderTarget&&); \
	UTextureRenderTarget(const UTextureRenderTarget&); \
public: \
	ENGINE_API virtual ~UTextureRenderTarget();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureRenderTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
