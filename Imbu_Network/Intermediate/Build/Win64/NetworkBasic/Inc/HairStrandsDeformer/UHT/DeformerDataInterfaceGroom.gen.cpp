// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsDeformer/Private/DeformerDataInterfaceGroom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerDataInterfaceGroom() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomDataInterface();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomDataInterface_NoRegister();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomDataProvider();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomDataProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
UPackage* Z_Construct_UPackage__Script_HairStrandsDeformer();
// End Cross Module References

// Begin Class UOptimusGroomDataInterface
void UOptimusGroomDataInterface::StaticRegisterNativesUOptimusGroomDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomDataInterface);
UClass* Z_Construct_UClass_UOptimusGroomDataInterface_NoRegister()
{
	return UOptimusGroomDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusGroomDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading groom. */" },
		{ "IncludePath", "DeformerDataInterfaceGroom.h" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroom.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading groom." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusGroomDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomDataInterface_Statics::ClassParams = {
	&UOptimusGroomDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGroomDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusGroomDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGroomDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGroomDataInterface.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<UOptimusGroomDataInterface>()
{
	return UOptimusGroomDataInterface::StaticClass();
}
UOptimusGroomDataInterface::UOptimusGroomDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomDataInterface);
UOptimusGroomDataInterface::~UOptimusGroomDataInterface() {}
// End Class UOptimusGroomDataInterface

// Begin Class UOptimusGroomDataProvider
void UOptimusGroomDataProvider::StaticRegisterNativesUOptimusGroomDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomDataProvider);
UClass* Z_Construct_UClass_UOptimusGroomDataProvider_NoRegister()
{
	return UOptimusGroomDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusGroomDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading groom. */" },
		{ "IncludePath", "DeformerDataInterfaceGroom.h" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroom.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading groom." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Groom_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Groom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusGroomDataProvider_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGroomDataProvider, Groom), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Groom_MetaData), NewProp_Groom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomDataProvider_Statics::NewProp_Groom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusGroomDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomDataProvider_Statics::ClassParams = {
	&UOptimusGroomDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusGroomDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGroomDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusGroomDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGroomDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGroomDataProvider.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<UOptimusGroomDataProvider>()
{
	return UOptimusGroomDataProvider::StaticClass();
}
UOptimusGroomDataProvider::UOptimusGroomDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomDataProvider);
UOptimusGroomDataProvider::~UOptimusGroomDataProvider() {}
// End Class UOptimusGroomDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomDataInterface, UOptimusGroomDataInterface::StaticClass, TEXT("UOptimusGroomDataInterface"), &Z_Registration_Info_UClass_UOptimusGroomDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomDataInterface), 1084792078U) },
		{ Z_Construct_UClass_UOptimusGroomDataProvider, UOptimusGroomDataProvider::StaticClass, TEXT("UOptimusGroomDataProvider"), &Z_Registration_Info_UClass_UOptimusGroomDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomDataProvider), 1606831987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroom_h_617059136(TEXT("/Script/HairStrandsDeformer"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
