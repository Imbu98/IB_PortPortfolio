// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Texture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_Texture_generated_h
#error "Texture.generated.h already included, missing '#pragma once' in Texture.h"
#endif
#define ENGINE_Texture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSourceLayerColorInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSourceBlock_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSourceBlock>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSource_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSource>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_838_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTexturePlatformData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTexturePlatformData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureFormatSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureFormatSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSourceColorSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBlueprint_GetTextureSourceIdString); \
	DECLARE_FUNCTION(execComputeTextureSourceChannelMinMax); \
	DECLARE_FUNCTION(execBlueprint_GetTextureSourceDiskAndMemorySize); \
	DECLARE_FUNCTION(execBlueprint_GetMemorySize); \
	DECLARE_FUNCTION(execAreDownscalePropertiesEditable);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_ACCESSORS \
static void GetCompositeTexture_WrapperImpl(const void* Object, void* OutValue); \
static void SetCompositeTexture_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_INCLASS \
private: \
	static void StaticRegisterNativesUTexture(); \
	friend struct Z_Construct_UClass_UTexture_Statics; \
public: \
	DECLARE_CLASS(UTexture, UStreamableRenderAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTexture*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTexture(UTexture&&); \
	UTexture(const UTexture&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1219_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1222_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
