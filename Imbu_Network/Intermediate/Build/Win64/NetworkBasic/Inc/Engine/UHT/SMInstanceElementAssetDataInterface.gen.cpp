// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/SMInstance/SMInstanceElementAssetDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementAssetDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementAssetDataInterface();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementAssetDataInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USMInstanceElementAssetDataInterface
void USMInstanceElementAssetDataInterface::StaticRegisterNativesUSMInstanceElementAssetDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementAssetDataInterface);
UClass* Z_Construct_UClass_USMInstanceElementAssetDataInterface_NoRegister()
{
	return USMInstanceElementAssetDataInterface::StaticClass();
}
struct Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementAssetDataInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementAssetDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementAssetDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstanceElementAssetDataInterface, ITypedElementAssetDataInterface), false },  // 1816171463
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics::ClassParams = {
	&USMInstanceElementAssetDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USMInstanceElementAssetDataInterface()
{
	if (!Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface.OuterSingleton, Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USMInstanceElementAssetDataInterface>()
{
	return USMInstanceElementAssetDataInterface::StaticClass();
}
USMInstanceElementAssetDataInterface::USMInstanceElementAssetDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementAssetDataInterface);
USMInstanceElementAssetDataInterface::~USMInstanceElementAssetDataInterface() {}
// End Class USMInstanceElementAssetDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementAssetDataInterface, USMInstanceElementAssetDataInterface::StaticClass, TEXT("USMInstanceElementAssetDataInterface"), &Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementAssetDataInterface), 162450239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_826830663(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
