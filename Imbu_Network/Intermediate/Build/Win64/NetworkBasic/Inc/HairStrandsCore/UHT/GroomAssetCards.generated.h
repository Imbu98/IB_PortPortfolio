// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomAssetCards.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRSTRANDSCORE_GroomAssetCards_generated_h
#error "GroomAssetCards.generated.h already included, missing '#pragma once' in GroomAssetCards.h"
#endif
#define HAIRSTRANDSCORE_GroomAssetCards_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupCardsInfo>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupCardsTextures>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHairCardGenerationSettings(); \
	friend struct Z_Construct_UClass_UHairCardGenerationSettings_Statics; \
public: \
	DECLARE_CLASS(UHairCardGenerationSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(UHairCardGenerationSettings)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHairCardGenerationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHairCardGenerationSettings(UHairCardGenerationSettings&&); \
	UHairCardGenerationSettings(const UHairCardGenerationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHairCardGenerationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHairCardGenerationSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHairCardGenerationSettings) \
	NO_API virtual ~UHairCardGenerationSettings();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_96_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class UHairCardGenerationSettings>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupsCardsSourceDescription>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h


#define FOREACH_ENUM_EHAIRCARDSSOURCETYPE(op) \
	op(EHairCardsSourceType::Procedural) \
	op(EHairCardsSourceType::Imported) 

enum class EHairCardsSourceType : uint8;
template<> struct TIsUEnumClass<EHairCardsSourceType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairCardsSourceType>();

#define FOREACH_ENUM_EHAIRCARDSGUIDETYPE(op) \
	op(EHairCardsGuideType::Generated) \
	op(EHairCardsGuideType::GuideBased) 

enum class EHairCardsGuideType : uint8;
template<> struct TIsUEnumClass<EHairCardsGuideType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairCardsGuideType>();

#define FOREACH_ENUM_EHAIRTEXTURELAYOUT(op) \
	op(EHairTextureLayout::Layout0) \
	op(EHairTextureLayout::Layout1) \
	op(EHairTextureLayout::Layout2) \
	op(EHairTextureLayout::Layout3) 

enum class EHairTextureLayout : uint8;
template<> struct TIsUEnumClass<EHairTextureLayout> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairTextureLayout>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
