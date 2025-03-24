// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Engine/Public/InterchangeEditorUtilitiesBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeEditorUtilitiesBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeEditorUtilitiesBase();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeEditorUtilitiesBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References

// Begin Class UInterchangeEditorUtilitiesBase
void UInterchangeEditorUtilitiesBase::StaticRegisterNativesUInterchangeEditorUtilitiesBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeEditorUtilitiesBase);
UClass* Z_Construct_UClass_UInterchangeEditorUtilitiesBase_NoRegister()
{
	return UInterchangeEditorUtilitiesBase::StaticClass();
}
struct Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InterchangeEditorUtilitiesBase.h" },
		{ "ModuleRelativePath", "Public/InterchangeEditorUtilitiesBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeEditorUtilitiesBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics::ClassParams = {
	&UInterchangeEditorUtilitiesBase::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeEditorUtilitiesBase()
{
	if (!Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.OuterSingleton, Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeEditorUtilitiesBase>()
{
	return UInterchangeEditorUtilitiesBase::StaticClass();
}
UInterchangeEditorUtilitiesBase::UInterchangeEditorUtilitiesBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeEditorUtilitiesBase);
UInterchangeEditorUtilitiesBase::~UInterchangeEditorUtilitiesBase() {}
// End Class UInterchangeEditorUtilitiesBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeEditorUtilitiesBase, UInterchangeEditorUtilitiesBase::StaticClass, TEXT("UInterchangeEditorUtilitiesBase"), &Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeEditorUtilitiesBase), 3196652567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_2262030992(TEXT("/Script/InterchangeEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
