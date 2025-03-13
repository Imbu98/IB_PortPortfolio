// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomCacheImportOptions.h"
#include "HairStrandsCore/Public/GroomSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCacheImportOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCacheImportData();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCacheImportData_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCacheImportOptions();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCacheImportOptions_NoRegister();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomCacheImportSettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomConversionSettings();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Enum EGroomCacheImportType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomCacheImportType;
static UEnum* EGroomCacheImportType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomCacheImportType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomCacheImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomCacheImportType"));
	}
	return Z_Registration_Info_UEnum_EGroomCacheImportType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomCacheImportType>()
{
	return EGroomCacheImportType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "EGroomCacheImportType::All" },
		{ "BlueprintType", "true" },
		{ "Guides.Name", "EGroomCacheImportType::Guides" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGroomCacheImportType::None" },
		{ "Strands.Name", "EGroomCacheImportType::Strands" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomCacheImportType::None", (int64)EGroomCacheImportType::None },
		{ "EGroomCacheImportType::Strands", (int64)EGroomCacheImportType::Strands },
		{ "EGroomCacheImportType::Guides", (int64)EGroomCacheImportType::Guides },
		{ "EGroomCacheImportType::All", (int64)EGroomCacheImportType::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomCacheImportType",
	"EGroomCacheImportType",
	Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType()
{
	if (!Z_Registration_Info_UEnum_EGroomCacheImportType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomCacheImportType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomCacheImportType.InnerSingleton;
}
// End Enum EGroomCacheImportType

// Begin ScriptStruct FGroomCacheImportSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomCacheImportSettings;
class UScriptStruct* FGroomCacheImportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomCacheImportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomCacheImportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomCacheImportSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomCacheImportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GroomCacheImportSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomCacheImportSettings>()
{
	return FGroomCacheImportSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportGroomCache_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** Import the animated groom that was detected in this file */" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "Import the animated groom that was detected in this file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportType_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** Groom Cache types to import */" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "Groom Cache types to import" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameStart_MetaData[] = {
		{ "Category", "Sampling" },
		{ "Comment", "/** Starting index to start sampling the animation from */" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "Starting index to start sampling the animation from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameEnd_MetaData[] = {
		{ "Category", "Sampling" },
		{ "Comment", "/** Ending index to stop sampling the animation at */" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "Ending index to stop sampling the animation at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipEmptyFrames_MetaData[] = {
		{ "Category", "Sampling" },
		{ "Comment", "/** Skip empty (pre-roll) frames and start importing at the frame which actually contains data */" },
		{ "DisplayName", "Skip Empty Frames at Start of Groom Animation" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "Skip empty (pre-roll) frames and start importing at the frame which actually contains data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportGroomAsset_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** Import or re-import the groom asset from this file */" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "Import or re-import the groom asset from this file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomAsset_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The groom asset the groom cache will be built from (must be compatible) */" },
		{ "MetaClass", "/Script/HairStrandsCore.GroomAsset" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "The groom asset the groom cache will be built from (must be compatible)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideConversionSettings_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** Set to true to override the groom conversion settings. Otherwise, use the settings from the groom import options */" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "Set to true to override the groom conversion settings. Otherwise, use the settings from the groom import options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** Conversion settings to apply to the groom cache import when override is enabled */" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "Conversion settings to apply to the groom cache import when override is enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_bImportGroomCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportGroomCache;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameEnd;
	static void NewProp_bSkipEmptyFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipEmptyFrames;
	static void NewProp_bImportGroomAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportGroomAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroomAsset;
	static void NewProp_bOverrideConversionSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideConversionSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomCacheImportSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bImportGroomCache_SetBit(void* Obj)
{
	((FGroomCacheImportSettings*)Obj)->bImportGroomCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bImportGroomCache = { "bImportGroomCache", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGroomCacheImportSettings), &Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bImportGroomCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportGroomCache_MetaData), NewProp_bImportGroomCache_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_ImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_ImportType = { "ImportType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomCacheImportSettings, ImportType), Z_Construct_UEnum_HairStrandsCore_EGroomCacheImportType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportType_MetaData), NewProp_ImportType_MetaData) }; // 2549759935
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_FrameStart = { "FrameStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomCacheImportSettings, FrameStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameStart_MetaData), NewProp_FrameStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_FrameEnd = { "FrameEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomCacheImportSettings, FrameEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameEnd_MetaData), NewProp_FrameEnd_MetaData) };
void Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bSkipEmptyFrames_SetBit(void* Obj)
{
	((FGroomCacheImportSettings*)Obj)->bSkipEmptyFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bSkipEmptyFrames = { "bSkipEmptyFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGroomCacheImportSettings), &Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bSkipEmptyFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipEmptyFrames_MetaData), NewProp_bSkipEmptyFrames_MetaData) };
void Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bImportGroomAsset_SetBit(void* Obj)
{
	((FGroomCacheImportSettings*)Obj)->bImportGroomAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bImportGroomAsset = { "bImportGroomAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGroomCacheImportSettings), &Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bImportGroomAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportGroomAsset_MetaData), NewProp_bImportGroomAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_GroomAsset = { "GroomAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomCacheImportSettings, GroomAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomAsset_MetaData), NewProp_GroomAsset_MetaData) };
void Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bOverrideConversionSettings_SetBit(void* Obj)
{
	((FGroomCacheImportSettings*)Obj)->bOverrideConversionSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bOverrideConversionSettings = { "bOverrideConversionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGroomCacheImportSettings), &Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bOverrideConversionSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideConversionSettings_MetaData), NewProp_bOverrideConversionSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomCacheImportSettings, ConversionSettings), Z_Construct_UScriptStruct_FGroomConversionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionSettings_MetaData), NewProp_ConversionSettings_MetaData) }; // 3627081983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bImportGroomCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_ImportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_ImportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_FrameStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_FrameEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bSkipEmptyFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bImportGroomAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_GroomAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_bOverrideConversionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewProp_ConversionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"GroomCacheImportSettings",
	Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::PropPointers),
	sizeof(FGroomCacheImportSettings),
	alignof(FGroomCacheImportSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGroomCacheImportSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GroomCacheImportSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomCacheImportSettings.InnerSingleton, Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GroomCacheImportSettings.InnerSingleton;
}
// End ScriptStruct FGroomCacheImportSettings

// Begin Class UGroomCacheImportOptions
void UGroomCacheImportOptions::StaticRegisterNativesUGroomCacheImportOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCacheImportOptions);
UClass* Z_Construct_UClass_UGroomCacheImportOptions_NoRegister()
{
	return UGroomCacheImportOptions::StaticClass();
}
struct Z_Construct_UClass_UGroomCacheImportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GroomCacheImportOptions.h" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportSettings_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCacheImportOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomCacheImportOptions_Statics::NewProp_ImportSettings = { "ImportSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCacheImportOptions, ImportSettings), Z_Construct_UScriptStruct_FGroomCacheImportSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportSettings_MetaData), NewProp_ImportSettings_MetaData) }; // 3847552398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCacheImportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCacheImportOptions_Statics::NewProp_ImportSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCacheImportOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomCacheImportOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCacheImportOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCacheImportOptions_Statics::ClassParams = {
	&UGroomCacheImportOptions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroomCacheImportOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCacheImportOptions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCacheImportOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomCacheImportOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomCacheImportOptions()
{
	if (!Z_Registration_Info_UClass_UGroomCacheImportOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCacheImportOptions.OuterSingleton, Z_Construct_UClass_UGroomCacheImportOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomCacheImportOptions.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomCacheImportOptions>()
{
	return UGroomCacheImportOptions::StaticClass();
}
UGroomCacheImportOptions::UGroomCacheImportOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCacheImportOptions);
UGroomCacheImportOptions::~UGroomCacheImportOptions() {}
// End Class UGroomCacheImportOptions

// Begin Class UGroomCacheImportData
void UGroomCacheImportData::StaticRegisterNativesUGroomCacheImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCacheImportData);
UClass* Z_Construct_UClass_UGroomCacheImportData_NoRegister()
{
	return UGroomCacheImportData::StaticClass();
}
struct Z_Construct_UClass_UGroomCacheImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** The asset import data to store the import settings within the GroomCache asset */" },
		{ "IncludePath", "GroomCacheImportOptions.h" },
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
		{ "ToolTip", "The asset import data to store the import settings within the GroomCache asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCacheImportOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCacheImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomCacheImportData_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCacheImportData, Settings), Z_Construct_UScriptStruct_FGroomCacheImportSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3847552398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCacheImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCacheImportData_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCacheImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomCacheImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCacheImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCacheImportData_Statics::ClassParams = {
	&UGroomCacheImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroomCacheImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCacheImportData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCacheImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomCacheImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomCacheImportData()
{
	if (!Z_Registration_Info_UClass_UGroomCacheImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCacheImportData.OuterSingleton, Z_Construct_UClass_UGroomCacheImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomCacheImportData.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomCacheImportData>()
{
	return UGroomCacheImportData::StaticClass();
}
UGroomCacheImportData::UGroomCacheImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCacheImportData);
UGroomCacheImportData::~UGroomCacheImportData() {}
// End Class UGroomCacheImportData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheImportOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGroomCacheImportType_StaticEnum, TEXT("EGroomCacheImportType"), &Z_Registration_Info_UEnum_EGroomCacheImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2549759935U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGroomCacheImportSettings::StaticStruct, Z_Construct_UScriptStruct_FGroomCacheImportSettings_Statics::NewStructOps, TEXT("GroomCacheImportSettings"), &Z_Registration_Info_UScriptStruct_GroomCacheImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomCacheImportSettings), 3847552398U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroomCacheImportOptions, UGroomCacheImportOptions::StaticClass, TEXT("UGroomCacheImportOptions"), &Z_Registration_Info_UClass_UGroomCacheImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCacheImportOptions), 2699351657U) },
		{ Z_Construct_UClass_UGroomCacheImportData, UGroomCacheImportData::StaticClass, TEXT("UGroomCacheImportData"), &Z_Registration_Info_UClass_UGroomCacheImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCacheImportData), 1048922477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheImportOptions_h_1481240063(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheImportOptions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheImportOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheImportOptions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheImportOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheImportOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
