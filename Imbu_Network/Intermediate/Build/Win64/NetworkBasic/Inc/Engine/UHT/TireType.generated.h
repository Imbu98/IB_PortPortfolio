// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Vehicles/TireType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TireType_generated_h
#error "TireType.generated.h already included, missing '#pragma once' in TireType.h"
#endif
#define ENGINE_TireType_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTireType(); \
	friend struct Z_Construct_UClass_UTireType_Statics; \
public: \
	DECLARE_CLASS(UTireType, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTireType)


#define FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTireType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTireType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTireType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTireType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTireType(UTireType&&); \
	UTireType(const UTireType&); \
public: \
	ENGINE_API virtual ~UTireType();


#define FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTireType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
