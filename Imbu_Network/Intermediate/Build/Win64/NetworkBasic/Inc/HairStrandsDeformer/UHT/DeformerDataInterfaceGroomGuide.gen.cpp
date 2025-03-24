// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsDeformer/Private/DeformerDataInterfaceGroomGuide.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerDataInterfaceGroomGuide() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomGuideDataInterface();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomGuideDataInterface_NoRegister();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomGuideDataProvider();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomGuideDataProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
UPackage* Z_Construct_UPackage__Script_HairStrandsDeformer();
// End Cross Module References

// Begin Class UOptimusGroomGuideDataInterface
void UOptimusGroomGuideDataInterface::StaticRegisterNativesUOptimusGroomGuideDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomGuideDataInterface);
UClass* Z_Construct_UClass_UOptimusGroomGuideDataInterface_NoRegister()
{
	return UOptimusGroomGuideDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading groom guides. */" },
		{ "IncludePath", "DeformerDataInterfaceGroomGuide.h" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomGuide.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading groom guides." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomGuideDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::ClassParams = {
	&UOptimusGroomGuideDataInterface::StaticClass,
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
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGroomGuideDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusGroomGuideDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomGuideDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGroomGuideDataInterface.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<UOptimusGroomGuideDataInterface>()
{
	return UOptimusGroomGuideDataInterface::StaticClass();
}
UOptimusGroomGuideDataInterface::UOptimusGroomGuideDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomGuideDataInterface);
UOptimusGroomGuideDataInterface::~UOptimusGroomGuideDataInterface() {}
// End Class UOptimusGroomGuideDataInterface

// Begin Class UOptimusGroomGuideDataProvider
void UOptimusGroomGuideDataProvider::StaticRegisterNativesUOptimusGroomGuideDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomGuideDataProvider);
UClass* Z_Construct_UClass_UOptimusGroomGuideDataProvider_NoRegister()
{
	return UOptimusGroomGuideDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading groom. */" },
		{ "IncludePath", "DeformerDataInterfaceGroomGuide.h" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomGuide.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading groom." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Groom_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomGuide.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Groom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomGuideDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGroomGuideDataProvider, Groom), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Groom_MetaData), NewProp_Groom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::NewProp_Groom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::ClassParams = {
	&UOptimusGroomGuideDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGroomGuideDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusGroomGuideDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomGuideDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGroomGuideDataProvider.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<UOptimusGroomGuideDataProvider>()
{
	return UOptimusGroomGuideDataProvider::StaticClass();
}
UOptimusGroomGuideDataProvider::UOptimusGroomGuideDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomGuideDataProvider);
UOptimusGroomGuideDataProvider::~UOptimusGroomGuideDataProvider() {}
// End Class UOptimusGroomGuideDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomGuide_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomGuideDataInterface, UOptimusGroomGuideDataInterface::StaticClass, TEXT("UOptimusGroomGuideDataInterface"), &Z_Registration_Info_UClass_UOptimusGroomGuideDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomGuideDataInterface), 2358944733U) },
		{ Z_Construct_UClass_UOptimusGroomGuideDataProvider, UOptimusGroomGuideDataProvider::StaticClass, TEXT("UOptimusGroomGuideDataProvider"), &Z_Registration_Info_UClass_UOptimusGroomGuideDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomGuideDataProvider), 548380015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomGuide_h_993417662(TEXT("/Script/HairStrandsDeformer"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomGuide_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomGuide_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
