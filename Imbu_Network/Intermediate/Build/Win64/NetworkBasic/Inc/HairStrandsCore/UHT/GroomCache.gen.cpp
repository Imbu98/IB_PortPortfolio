// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomCache.h"
#include "HairStrandsCore/Public/GroomCacheData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCache() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCache();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCache_NoRegister();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomCacheInfo();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Class UGroomCache
void UGroomCache::StaticRegisterNativesUGroomCache()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCache);
UClass* Z_Construct_UClass_UGroomCache_NoRegister()
{
	return UGroomCache::StaticClass();
}
struct Z_Construct_UClass_UGroomCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that is used to store an animated groom\n */" },
		{ "IncludePath", "GroomCache.h" },
		{ "ModuleRelativePath", "Public/GroomCache.h" },
		{ "ToolTip", "Implements an asset that is used to store an animated groom" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Import options used for this GroomCache */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomCache.h" },
		{ "ToolTip", "Import options used for this GroomCache" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomCache.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomCache.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomCacheInfo_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCache.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroomCacheInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCache, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0114048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCache, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomCache_Statics::NewProp_GroomCacheInfo = { "GroomCacheInfo", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCache, GroomCacheInfo), Z_Construct_UScriptStruct_FGroomCacheInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomCacheInfo_MetaData), NewProp_GroomCacheInfo_MetaData) }; // 241160780
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCache_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetUserData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCache_Statics::NewProp_GroomCacheInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCache_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGroomCache_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UGroomCache, IInterface_AssetUserData), false },  // 505316468
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCache_Statics::ClassParams = {
	&UGroomCache::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroomCache_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCache_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomCache()
{
	if (!Z_Registration_Info_UClass_UGroomCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCache.OuterSingleton, Z_Construct_UClass_UGroomCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomCache.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomCache>()
{
	return UGroomCache::StaticClass();
}
UGroomCache::UGroomCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCache);
UGroomCache::~UGroomCache() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomCache)
// End Class UGroomCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroomCache, UGroomCache::StaticClass, TEXT("UGroomCache"), &Z_Registration_Info_UClass_UGroomCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCache), 1731956703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_3472774360(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
