// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsDeformer/Private/DeformerGroomComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerGroomComponentSource() {}

// Begin Cross Module References
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomComponentSource();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomComponentSource_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource();
UPackage* Z_Construct_UPackage__Script_HairStrandsDeformer();
// End Cross Module References

// Begin Class UOptimusGroomComponentSource
void UOptimusGroomComponentSource::StaticRegisterNativesUOptimusGroomComponentSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomComponentSource);
UClass* Z_Construct_UClass_UOptimusGroomComponentSource_NoRegister()
{
	return UOptimusGroomComponentSource::StaticClass();
}
struct Z_Construct_UClass_UOptimusGroomComponentSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DeformerGroomComponentSource.h" },
		{ "ModuleRelativePath", "Private/DeformerGroomComponentSource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomComponentSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusGroomComponentSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComponentSource,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomComponentSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomComponentSource_Statics::ClassParams = {
	&UOptimusGroomComponentSource::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomComponentSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomComponentSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGroomComponentSource()
{
	if (!Z_Registration_Info_UClass_UOptimusGroomComponentSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusGroomComponentSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGroomComponentSource.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<UOptimusGroomComponentSource>()
{
	return UOptimusGroomComponentSource::StaticClass();
}
UOptimusGroomComponentSource::UOptimusGroomComponentSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomComponentSource);
UOptimusGroomComponentSource::~UOptimusGroomComponentSource() {}
// End Class UOptimusGroomComponentSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerGroomComponentSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomComponentSource, UOptimusGroomComponentSource::StaticClass, TEXT("UOptimusGroomComponentSource"), &Z_Registration_Info_UClass_UOptimusGroomComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomComponentSource), 3365526296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerGroomComponentSource_h_1432876927(TEXT("/Script/HairStrandsDeformer"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerGroomComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerGroomComponentSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
