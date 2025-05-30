// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lightmass/LightmappedSurfaceCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LightmappedSurfaceCollection_generated_h
#error "LightmappedSurfaceCollection.generated.h already included, missing '#pragma once' in LightmappedSurfaceCollection.h"
#endif
#define ENGINE_LightmappedSurfaceCollection_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULightmappedSurfaceCollection(); \
	friend struct Z_Construct_UClass_ULightmappedSurfaceCollection_Statics; \
public: \
	DECLARE_CLASS(ULightmappedSurfaceCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULightmappedSurfaceCollection)


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightmappedSurfaceCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightmappedSurfaceCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightmappedSurfaceCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightmappedSurfaceCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULightmappedSurfaceCollection(ULightmappedSurfaceCollection&&); \
	ULightmappedSurfaceCollection(const ULightmappedSurfaceCollection&); \
public: \
	ENGINE_API virtual ~ULightmappedSurfaceCollection();


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightmappedSurfaceCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
