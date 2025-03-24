// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/InterchangeAssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAssetUserData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAssetUserData();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAssetUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeAssetUserData
void UInterchangeAssetUserData::StaticRegisterNativesUInterchangeAssetUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAssetUserData);
UClass* Z_Construct_UClass_UInterchangeAssetUserData_NoRegister()
{
	return UInterchangeAssetUserData::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAssetUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Asset user data that can be used with Interchange on Actors and other objects  */" },
		{ "DisplayName", "Interchange User Data" },
		{ "IncludePath", "InterchangeAssetUserData.h" },
		{ "ModuleRelativePath", "Public/InterchangeAssetUserData.h" },
		{ "ScriptName", "InterchangeUserData" },
		{ "ToolTip", "Asset user data that can be used with Interchange on Actors and other objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "Category", "Interchange User Data" },
		{ "DisplayName", "Metadata" },
		{ "ModuleRelativePath", "Public/InterchangeAssetUserData.h" },
		{ "ScriptName", "Metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAssetUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeAssetUserData_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeAssetUserData_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangeAssetUserData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeAssetUserData, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeAssetUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetUserData_Statics::NewProp_MetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetUserData_Statics::NewProp_MetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetUserData_Statics::NewProp_MetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeAssetUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAssetUserData_Statics::ClassParams = {
	&UInterchangeAssetUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeAssetUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetUserData_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAssetUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAssetUserData()
{
	if (!Z_Registration_Info_UClass_UInterchangeAssetUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAssetUserData.OuterSingleton, Z_Construct_UClass_UInterchangeAssetUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAssetUserData.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeAssetUserData>()
{
	return UInterchangeAssetUserData::StaticClass();
}
UInterchangeAssetUserData::UInterchangeAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAssetUserData);
UInterchangeAssetUserData::~UInterchangeAssetUserData() {}
// End Class UInterchangeAssetUserData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAssetUserData, UInterchangeAssetUserData::StaticClass, TEXT("UInterchangeAssetUserData"), &Z_Registration_Info_UClass_UInterchangeAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAssetUserData), 4211896245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_2333335588(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
