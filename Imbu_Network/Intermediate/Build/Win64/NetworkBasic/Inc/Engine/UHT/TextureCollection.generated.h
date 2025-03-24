// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureCollection_generated_h
#error "TextureCollection.generated.h already included, missing '#pragma once' in TextureCollection.h"
#endif
#define ENGINE_TextureCollection_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureCollection(); \
	friend struct Z_Construct_UClass_UTextureCollection_Statics; \
public: \
	DECLARE_CLASS(UTextureCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureCollection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureCollection(UTextureCollection&&); \
	UTextureCollection(const UTextureCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureCollection) \
	ENGINE_API virtual ~UTextureCollection();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
