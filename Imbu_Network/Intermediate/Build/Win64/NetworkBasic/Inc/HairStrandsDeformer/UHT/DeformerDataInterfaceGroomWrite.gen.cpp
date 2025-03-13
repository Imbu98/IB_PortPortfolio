// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsDeformer/Private/DeformerDataInterfaceGroomWrite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerDataInterfaceGroomWrite() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomWriteDataInterface();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomWriteDataInterface_NoRegister();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomWriteDataProvider();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomWriteDataProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
UPackage* Z_Construct_UPackage__Script_HairStrandsDeformer();
// End Cross Module References

// Begin Class UOptimusGroomWriteDataInterface
void UOptimusGroomWriteDataInterface::StaticRegisterNativesUOptimusGroomWriteDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomWriteDataInterface);
UClass* Z_Construct_UClass_UOptimusGroomWriteDataInterface_NoRegister()
{
	return UOptimusGroomWriteDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for writing skinned mesh. */" },
		{ "IncludePath", "DeformerDataInterfaceGroomWrite.h" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomWrite.h" },
		{ "ToolTip", "Compute Framework Data Interface for writing skinned mesh." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomWriteDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::ClassParams = {
	&UOptimusGroomWriteDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGroomWriteDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusGroomWriteDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomWriteDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGroomWriteDataInterface.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<UOptimusGroomWriteDataInterface>()
{
	return UOptimusGroomWriteDataInterface::StaticClass();
}
UOptimusGroomWriteDataInterface::UOptimusGroomWriteDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomWriteDataInterface);
UOptimusGroomWriteDataInterface::~UOptimusGroomWriteDataInterface() {}
// End Class UOptimusGroomWriteDataInterface

// Begin Class UOptimusGroomWriteDataProvider
void UOptimusGroomWriteDataProvider::StaticRegisterNativesUOptimusGroomWriteDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomWriteDataProvider);
UClass* Z_Construct_UClass_UOptimusGroomWriteDataProvider_NoRegister()
{
	return UOptimusGroomWriteDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for writing skinned mesh. */" },
		{ "IncludePath", "DeformerDataInterfaceGroomWrite.h" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomWrite.h" },
		{ "ToolTip", "Compute Framework Data Provider for writing skinned mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomWrite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomWriteDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::NewProp_GroomComponent = { "GroomComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGroomWriteDataProvider, GroomComponent), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomComponent_MetaData), NewProp_GroomComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::NewProp_GroomComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::ClassParams = {
	&UOptimusGroomWriteDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGroomWriteDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusGroomWriteDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomWriteDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGroomWriteDataProvider.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<UOptimusGroomWriteDataProvider>()
{
	return UOptimusGroomWriteDataProvider::StaticClass();
}
UOptimusGroomWriteDataProvider::UOptimusGroomWriteDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomWriteDataProvider);
UOptimusGroomWriteDataProvider::~UOptimusGroomWriteDataProvider() {}
// End Class UOptimusGroomWriteDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomWrite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomWriteDataInterface, UOptimusGroomWriteDataInterface::StaticClass, TEXT("UOptimusGroomWriteDataInterface"), &Z_Registration_Info_UClass_UOptimusGroomWriteDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomWriteDataInterface), 1210007883U) },
		{ Z_Construct_UClass_UOptimusGroomWriteDataProvider, UOptimusGroomWriteDataProvider::StaticClass, TEXT("UOptimusGroomWriteDataProvider"), &Z_Registration_Info_UClass_UOptimusGroomWriteDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomWriteDataProvider), 1802763926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomWrite_h_113549944(TEXT("/Script/HairStrandsDeformer"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomWrite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomWrite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
