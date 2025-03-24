// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCollection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCollection();
ENGINE_API UClass* Z_Construct_UClass_UTextureCollection_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureCollection
void UTextureCollection::StaticRegisterNativesUTextureCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureCollection);
UClass* Z_Construct_UClass_UTextureCollection_NoRegister()
{
	return UTextureCollection::StaticClass();
}
struct Z_Construct_UClass_UTextureCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TextureCollection.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "TextureCollection" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextureCollection_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureCollection_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureCollection, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureCollection_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureCollection_Statics::NewProp_Textures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureCollection_Statics::ClassParams = {
	&UTextureCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCollection_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureCollection()
{
	if (!Z_Registration_Info_UClass_UTextureCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureCollection.OuterSingleton, Z_Construct_UClass_UTextureCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureCollection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureCollection>()
{
	return UTextureCollection::StaticClass();
}
UTextureCollection::UTextureCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCollection);
UTextureCollection::~UTextureCollection() {}
// End Class UTextureCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureCollection, UTextureCollection::StaticClass, TEXT("UTextureCollection"), &Z_Registration_Info_UClass_UTextureCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureCollection), 795447564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_2263751637(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCollection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
