// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomAssetCards.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAssetCards() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UHairCardGenerationSettings();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UHairCardGenerationSettings_NoRegister();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupCardsInfo();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupCardsTextures();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Enum EHairCardsSourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairCardsSourceType;
static UEnum* EHairCardsSourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHairCardsSourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHairCardsSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairCardsSourceType"));
	}
	return Z_Registration_Info_UEnum_EHairCardsSourceType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairCardsSourceType>()
{
	return EHairCardsSourceType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Imported.DisplayName", "Imported" },
		{ "Imported.Name", "EHairCardsSourceType::Imported" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "Procedural.DisplayName", "Procedural (experimental)" },
		{ "Procedural.Name", "EHairCardsSourceType::Procedural" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHairCardsSourceType::Procedural", (int64)EHairCardsSourceType::Procedural },
		{ "EHairCardsSourceType::Imported", (int64)EHairCardsSourceType::Imported },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EHairCardsSourceType",
	"EHairCardsSourceType",
	Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType()
{
	if (!Z_Registration_Info_UEnum_EHairCardsSourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairCardsSourceType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHairCardsSourceType.InnerSingleton;
}
// End Enum EHairCardsSourceType

// Begin Enum EHairCardsGuideType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairCardsGuideType;
static UEnum* EHairCardsGuideType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHairCardsGuideType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHairCardsGuideType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairCardsGuideType"));
	}
	return Z_Registration_Info_UEnum_EHairCardsGuideType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairCardsGuideType>()
{
	return EHairCardsGuideType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Generated.DisplayName", "Generated" },
		{ "Generated.Name", "EHairCardsGuideType::Generated" },
		{ "GuideBased.DisplayName", "Guide-Based" },
		{ "GuideBased.Name", "EHairCardsGuideType::GuideBased" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHairCardsGuideType::Generated", (int64)EHairCardsGuideType::Generated },
		{ "EHairCardsGuideType::GuideBased", (int64)EHairCardsGuideType::GuideBased },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EHairCardsGuideType",
	"EHairCardsGuideType",
	Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType()
{
	if (!Z_Registration_Info_UEnum_EHairCardsGuideType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairCardsGuideType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHairCardsGuideType.InnerSingleton;
}
// End Enum EHairCardsGuideType

// Begin Enum EHairTextureLayout
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairTextureLayout;
static UEnum* EHairTextureLayout_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHairTextureLayout.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHairTextureLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairTextureLayout"));
	}
	return Z_Registration_Info_UEnum_EHairTextureLayout.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairTextureLayout>()
{
	return EHairTextureLayout_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Layout0.DisplayName", "Card Default" },
		{ "Layout0.Name", "EHairTextureLayout::Layout0" },
		{ "Layout1.DisplayName", "Mesh Default" },
		{ "Layout1.Name", "EHairTextureLayout::Layout1" },
		{ "Layout2.DisplayName", "Card Compact" },
		{ "Layout2.Name", "EHairTextureLayout::Layout2" },
		{ "Layout3.DisplayName", "Mesh Compact" },
		{ "Layout3.Name", "EHairTextureLayout::Layout3" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHairTextureLayout::Layout0", (int64)EHairTextureLayout::Layout0 },
		{ "EHairTextureLayout::Layout1", (int64)EHairTextureLayout::Layout1 },
		{ "EHairTextureLayout::Layout2", (int64)EHairTextureLayout::Layout2 },
		{ "EHairTextureLayout::Layout3", (int64)EHairTextureLayout::Layout3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EHairTextureLayout",
	"EHairTextureLayout",
	Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout()
{
	if (!Z_Registration_Info_UEnum_EHairTextureLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairTextureLayout.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHairTextureLayout.InnerSingleton;
}
// End Enum EHairTextureLayout

// Begin ScriptStruct FHairGroupCardsInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupCardsInfo;
class UScriptStruct* FHairGroupCardsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupCardsInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupCardsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupCardsInfo>()
{
	return FHairGroupCardsInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCards_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Card Count" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCardVertices_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Card Vertex Count" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCards;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCardVertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupCardsInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCards = { "NumCards", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsInfo, NumCards), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCards_MetaData), NewProp_NumCards_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCardVertices = { "NumCardVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsInfo, NumCardVertices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCardVertices_MetaData), NewProp_NumCardVertices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCardVertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairGroupCardsInfo",
	Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::PropPointers),
	sizeof(FHairGroupCardsInfo),
	alignof(FHairGroupCardsInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairGroupCardsInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.InnerSingleton;
}
// End ScriptStruct FHairGroupCardsInfo

// Begin ScriptStruct FHairGroupCardsTextures
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupCardsTextures;
class UScriptStruct* FHairGroupCardsTextures::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupCardsTextures, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupCardsTextures"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupCardsTextures>()
{
	return FHairGroupCardsTextures::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "Category", "CardsTextures" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "CardsTextures" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoverageTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxilaryDataTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Layout_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DepthTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoverageTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TangentTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxilaryDataTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupCardsTextures>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_Layout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsTextures, Layout), Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 3355031587
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsTextures, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_DepthTexture = { "DepthTexture", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsTextures, DepthTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthTexture_MetaData), NewProp_DepthTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_CoverageTexture = { "CoverageTexture", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsTextures, CoverageTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoverageTexture_MetaData), NewProp_CoverageTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_TangentTexture = { "TangentTexture", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsTextures, TangentTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentTexture_MetaData), NewProp_TangentTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AttributeTexture = { "AttributeTexture", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsTextures, AttributeTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTexture_MetaData), NewProp_AttributeTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AuxilaryDataTexture = { "AuxilaryDataTexture", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsTextures, AuxilaryDataTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxilaryDataTexture_MetaData), NewProp_AuxilaryDataTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_MaterialTexture = { "MaterialTexture", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupCardsTextures, MaterialTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTexture_MetaData), NewProp_MaterialTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_Layout_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_Layout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_DepthTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_CoverageTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_TangentTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AttributeTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AuxilaryDataTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_MaterialTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairGroupCardsTextures",
	Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::PropPointers),
	sizeof(FHairGroupCardsTextures),
	alignof(FHairGroupCardsTextures),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairGroupCardsTextures()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.InnerSingleton;
}
// End ScriptStruct FHairGroupCardsTextures

// Begin Class UHairCardGenerationSettings
void UHairCardGenerationSettings::StaticRegisterNativesUHairCardGenerationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHairCardGenerationSettings);
UClass* Z_Construct_UClass_UHairCardGenerationSettings_NoRegister()
{
	return UHairCardGenerationSettings::StaticClass();
}
struct Z_Construct_UClass_UHairCardGenerationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Since hair-card generation can be controlled external to this plugin, this  \n * provides a way for those external generators a way to store their own \n * generation data along with the groom/cards-entry.\n */" },
		{ "IncludePath", "GroomAssetCards.h" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Since hair-card generation can be controlled external to this plugin, this\nprovides a way for those external generators a way to store their own\ngeneration data along with the groom/cards-entry." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHairCardGenerationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHairCardGenerationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHairCardGenerationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHairCardGenerationSettings_Statics::ClassParams = {
	&UHairCardGenerationSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHairCardGenerationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHairCardGenerationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHairCardGenerationSettings()
{
	if (!Z_Registration_Info_UClass_UHairCardGenerationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHairCardGenerationSettings.OuterSingleton, Z_Construct_UClass_UHairCardGenerationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHairCardGenerationSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UHairCardGenerationSettings>()
{
	return UHairCardGenerationSettings::StaticClass();
}
UHairCardGenerationSettings::UHairCardGenerationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHairCardGenerationSettings);
UHairCardGenerationSettings::~UHairCardGenerationSettings() {}
// End Class UHairCardGenerationSettings

// Begin ScriptStruct FHairGroupsCardsSourceDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription;
class UScriptStruct* FHairGroupsCardsSourceDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsCardsSourceDescription"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsCardsSourceDescription>()
{
	return FHairGroupsCardsSourceDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Comment", "/* Deprecated */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Deprecated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertUV_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuideType_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedMesh_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "DisplayName", "Mesh" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "Comment", "/* Group index on which this cards geometry will be used (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead) */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Group index on which this cards geometry will be used (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "Comment", "/* LOD on which this cards geometry will be used. -1 means not used  (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead) */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "LOD on which this cards geometry will be used. -1 means not used  (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationSettings_MetaData[] = {
		{ "Comment", "/* Card generation data saved from the last procedural run. Dependent on the generator responsible for running the generation. */" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Card generation data saved from the last procedural run. Dependent on the generator responsible for running the generation." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardsInfo_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedMeshKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
	static void NewProp_bInvertUV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertUV;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GuideType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GuideType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationSettings;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardsInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedMeshKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsCardsSourceDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, MaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotName_MetaData), NewProp_MaterialSlotName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, SourceType_DEPRECATED), Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceType_MetaData), NewProp_SourceType_MetaData) }; // 2300268453
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, ProceduralMesh_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMesh_MetaData), NewProp_ProceduralMesh_MetaData) };
void Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_bInvertUV_SetBit(void* Obj)
{
	((FHairGroupsCardsSourceDescription*)Obj)->bInvertUV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_bInvertUV = { "bInvertUV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupsCardsSourceDescription), &Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_bInvertUV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertUV_MetaData), NewProp_bInvertUV_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GuideType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GuideType = { "GuideType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, GuideType), Z_Construct_UEnum_HairStrandsCore_EHairCardsGuideType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuideType_MetaData), NewProp_GuideType_MetaData) }; // 3848101851
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMesh = { "ImportedMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, ImportedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedMesh_MetaData), NewProp_ImportedMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, Textures), Z_Construct_UScriptStruct_FHairGroupCardsTextures, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) }; // 2735131146
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, GroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupIndex_MetaData), NewProp_GroupIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GenerationSettings = { "GenerationSettings", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, GenerationSettings), Z_Construct_UClass_UHairCardGenerationSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationSettings_MetaData), NewProp_GenerationSettings_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_CardsInfo = { "CardsInfo", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, CardsInfo), Z_Construct_UScriptStruct_FHairGroupCardsInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardsInfo_MetaData), NewProp_CardsInfo_MetaData) }; // 521751888
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMeshKey = { "ImportedMeshKey", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, ImportedMeshKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedMeshKey_MetaData), NewProp_ImportedMeshKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_MaterialSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_bInvertUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GuideType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GuideType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_LODIndex,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GenerationSettings,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_CardsInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMeshKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairGroupsCardsSourceDescription",
	Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::PropPointers),
	sizeof(FHairGroupsCardsSourceDescription),
	alignof(FHairGroupsCardsSourceDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.InnerSingleton;
}
// End ScriptStruct FHairGroupsCardsSourceDescription

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHairCardsSourceType_StaticEnum, TEXT("EHairCardsSourceType"), &Z_Registration_Info_UEnum_EHairCardsSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2300268453U) },
		{ EHairCardsGuideType_StaticEnum, TEXT("EHairCardsGuideType"), &Z_Registration_Info_UEnum_EHairCardsGuideType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3848101851U) },
		{ EHairTextureLayout_StaticEnum, TEXT("EHairTextureLayout"), &Z_Registration_Info_UEnum_EHairTextureLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3355031587U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHairGroupCardsInfo::StaticStruct, Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewStructOps, TEXT("HairGroupCardsInfo"), &Z_Registration_Info_UScriptStruct_HairGroupCardsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupCardsInfo), 521751888U) },
		{ FHairGroupCardsTextures::StaticStruct, Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewStructOps, TEXT("HairGroupCardsTextures"), &Z_Registration_Info_UScriptStruct_HairGroupCardsTextures, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupCardsTextures), 2735131146U) },
		{ FHairGroupsCardsSourceDescription::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewStructOps, TEXT("HairGroupsCardsSourceDescription"), &Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsCardsSourceDescription), 1561337654U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHairCardGenerationSettings, UHairCardGenerationSettings::StaticClass, TEXT("UHairCardGenerationSettings"), &Z_Registration_Info_UClass_UHairCardGenerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHairCardGenerationSettings), 2280256800U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_413594001(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
