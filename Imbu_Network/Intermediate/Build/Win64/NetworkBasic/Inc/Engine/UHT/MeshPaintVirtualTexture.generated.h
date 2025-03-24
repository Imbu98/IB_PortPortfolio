// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/MeshPaintVirtualTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshPaintVirtualTexture_generated_h
#error "MeshPaintVirtualTexture.generated.h already included, missing '#pragma once' in MeshPaintVirtualTexture.h"
#endif
#define ENGINE_MeshPaintVirtualTexture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMeshPaintVirtualTexture(); \
	friend struct Z_Construct_UClass_UMeshPaintVirtualTexture_Statics; \
public: \
	DECLARE_CLASS(UMeshPaintVirtualTexture, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMeshPaintVirtualTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshPaintVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshPaintVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshPaintVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintVirtualTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshPaintVirtualTexture(UMeshPaintVirtualTexture&&); \
	UMeshPaintVirtualTexture(const UMeshPaintVirtualTexture&); \
public: \
	ENGINE_API virtual ~UMeshPaintVirtualTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMeshPaintVirtualTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
