// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/StructUtils/UserDefinedStructEditorUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedStructEditorUtils() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UUserDefinedStructEditorDataBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UUserDefinedStructEditorDataBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Class UUserDefinedStructEditorDataBase
void UUserDefinedStructEditorDataBase::StaticRegisterNativesUUserDefinedStructEditorDataBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserDefinedStructEditorDataBase);
UClass* Z_Construct_UClass_UUserDefinedStructEditorDataBase_NoRegister()
{
	return UUserDefinedStructEditorDataBase::StaticClass();
}
struct Z_Construct_UClass_UUserDefinedStructEditorDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StructUtils/UserDefinedStructEditorUtils.h" },
		{ "ModuleRelativePath", "Public/StructUtils/UserDefinedStructEditorUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedStructEditorDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUserDefinedStructEditorDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedStructEditorDataBase_Statics::ClassParams = {
	&UUserDefinedStructEditorDataBase::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserDefinedStructEditorDataBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserDefinedStructEditorDataBase()
{
	if (!Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.OuterSingleton, Z_Construct_UClass_UUserDefinedStructEditorDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UUserDefinedStructEditorDataBase>()
{
	return UUserDefinedStructEditorDataBase::StaticClass();
}
UUserDefinedStructEditorDataBase::UUserDefinedStructEditorDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedStructEditorDataBase);
UUserDefinedStructEditorDataBase::~UUserDefinedStructEditorDataBase() {}
// End Class UUserDefinedStructEditorDataBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserDefinedStructEditorDataBase, UUserDefinedStructEditorDataBase::StaticClass, TEXT("UUserDefinedStructEditorDataBase"), &Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserDefinedStructEditorDataBase), 3316058695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_1464736966(TEXT("/Script/CoreUObject"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
