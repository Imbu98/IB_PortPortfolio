// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsDeformer/Private/DeformerDataInterfaceGroomExec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerDataInterfaceGroomExec() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomExecDataInterface();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomExecDataInterface_NoRegister();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomExecDataProvider();
HAIRSTRANDSDEFORMER_API UClass* Z_Construct_UClass_UOptimusGroomExecDataProvider_NoRegister();
HAIRSTRANDSDEFORMER_API UEnum* Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HairStrandsDeformer();
// End Cross Module References

// Begin Enum EOptimusGroomExecDomain
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusGroomExecDomain;
static UEnum* EOptimusGroomExecDomain_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusGroomExecDomain.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusGroomExecDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain, (UObject*)Z_Construct_UPackage__Script_HairStrandsDeformer(), TEXT("EOptimusGroomExecDomain"));
	}
	return Z_Registration_Info_UEnum_EOptimusGroomExecDomain.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UEnum* StaticEnum<EOptimusGroomExecDomain>()
{
	return EOptimusGroomExecDomain_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ControlPoint.Comment", "/** Run kernel with one thread per control point. */" },
		{ "ControlPoint.Name", "EOptimusGroomExecDomain::ControlPoint" },
		{ "ControlPoint.ToolTip", "Run kernel with one thread per control point." },
		{ "Curve.Comment", "/** Run kernel with one thread per curve. */" },
		{ "Curve.Name", "EOptimusGroomExecDomain::Curve" },
		{ "Curve.ToolTip", "Run kernel with one thread per curve." },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomExec.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EOptimusGroomExecDomain::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusGroomExecDomain::None", (int64)EOptimusGroomExecDomain::None },
		{ "EOptimusGroomExecDomain::ControlPoint", (int64)EOptimusGroomExecDomain::ControlPoint },
		{ "EOptimusGroomExecDomain::Curve", (int64)EOptimusGroomExecDomain::Curve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
	nullptr,
	"EOptimusGroomExecDomain",
	"EOptimusGroomExecDomain",
	Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain()
{
	if (!Z_Registration_Info_UEnum_EOptimusGroomExecDomain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusGroomExecDomain.InnerSingleton, Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusGroomExecDomain.InnerSingleton;
}
// End Enum EOptimusGroomExecDomain

// Begin Class UOptimusGroomExecDataInterface
void UOptimusGroomExecDataInterface::StaticRegisterNativesUOptimusGroomExecDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomExecDataInterface);
UClass* Z_Construct_UClass_UOptimusGroomExecDataInterface_NoRegister()
{
	return UOptimusGroomExecDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for executing kernels over a skinned mesh domain. */" },
		{ "IncludePath", "DeformerDataInterfaceGroomExec.h" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomExec.h" },
		{ "ToolTip", "Compute Framework Data Interface for executing kernels over a skinned mesh domain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "//~ End IOptimusDeprecatedExecutionDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomExec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomExecDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGroomExecDataInterface, Domain), Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) }; // 3327149491
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister, (int32)VTABLE_OFFSET(UOptimusGroomExecDataInterface, IOptimusDeprecatedExecutionDataInterface), false },  // 241850139
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::ClassParams = {
	&UOptimusGroomExecDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGroomExecDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<UOptimusGroomExecDataInterface>()
{
	return UOptimusGroomExecDataInterface::StaticClass();
}
UOptimusGroomExecDataInterface::UOptimusGroomExecDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomExecDataInterface);
UOptimusGroomExecDataInterface::~UOptimusGroomExecDataInterface() {}
// End Class UOptimusGroomExecDataInterface

// Begin Class UOptimusGroomExecDataProvider
void UOptimusGroomExecDataProvider::StaticRegisterNativesUOptimusGroomExecDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomExecDataProvider);
UClass* Z_Construct_UClass_UOptimusGroomExecDataProvider_NoRegister()
{
	return UOptimusGroomExecDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for executing kernels over a skinned mesh domain. */" },
		{ "IncludePath", "DeformerDataInterfaceGroomExec.h" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomExec.h" },
		{ "ToolTip", "Compute Framework Data Provider for executing kernels over a skinned mesh domain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomExec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "ModuleRelativePath", "Private/DeformerDataInterfaceGroomExec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomExecDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_GroomComponent = { "GroomComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGroomExecDataProvider, GroomComponent), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomComponent_MetaData), NewProp_GroomComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGroomExecDataProvider, Domain), Z_Construct_UEnum_HairStrandsDeformer_EOptimusGroomExecDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) }; // 3327149491
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_GroomComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::ClassParams = {
	&UOptimusGroomExecDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGroomExecDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.OuterSingleton;
}
template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<UOptimusGroomExecDataProvider>()
{
	return UOptimusGroomExecDataProvider::StaticClass();
}
UOptimusGroomExecDataProvider::UOptimusGroomExecDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomExecDataProvider);
UOptimusGroomExecDataProvider::~UOptimusGroomExecDataProvider() {}
// End Class UOptimusGroomExecDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusGroomExecDomain_StaticEnum, TEXT("EOptimusGroomExecDomain"), &Z_Registration_Info_UEnum_EOptimusGroomExecDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3327149491U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomExecDataInterface, UOptimusGroomExecDataInterface::StaticClass, TEXT("UOptimusGroomExecDataInterface"), &Z_Registration_Info_UClass_UOptimusGroomExecDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomExecDataInterface), 2861951856U) },
		{ Z_Construct_UClass_UOptimusGroomExecDataProvider, UOptimusGroomExecDataProvider::StaticClass, TEXT("UOptimusGroomExecDataProvider"), &Z_Registration_Info_UClass_UOptimusGroomExecDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomExecDataProvider), 858038936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_760878814(TEXT("/Script/HairStrandsDeformer"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
