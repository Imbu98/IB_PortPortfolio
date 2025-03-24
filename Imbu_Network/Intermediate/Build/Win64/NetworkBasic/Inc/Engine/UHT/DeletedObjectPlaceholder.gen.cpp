// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/DeletedObjectPlaceholder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeletedObjectPlaceholder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDeletedObjectPlaceholder();
ENGINE_API UClass* Z_Construct_UClass_UDeletedObjectPlaceholder_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDeletedObjectPlaceholder
void UDeletedObjectPlaceholder::StaticRegisterNativesUDeletedObjectPlaceholder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeletedObjectPlaceholder);
UClass* Z_Construct_UClass_UDeletedObjectPlaceholder_NoRegister()
{
	return UDeletedObjectPlaceholder::StaticClass();
}
struct Z_Construct_UClass_UDeletedObjectPlaceholder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DeletedObjectPlaceholder.h" },
		{ "ModuleRelativePath", "Public/DeletedObjectPlaceholder.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Original object's display name */" },
		{ "ModuleRelativePath", "Public/DeletedObjectPlaceholder.h" },
		{ "ToolTip", "Original object's display name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataLayerUID_MetaData[] = {
		{ "Comment", "/** Original object's external data layer UID */" },
		{ "ModuleRelativePath", "Public/DeletedObjectPlaceholder.h" },
		{ "ToolTip", "Original object's external data layer UID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalObject_MetaData[] = {
		{ "Comment", "/** Original object that is replaced by the placeholder */" },
		{ "ModuleRelativePath", "Public/DeletedObjectPlaceholder.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Original object that is replaced by the placeholder" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExternalDataLayerUID;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OriginalObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeletedObjectPlaceholder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeletedObjectPlaceholder, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::NewProp_ExternalDataLayerUID = { "ExternalDataLayerUID", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeletedObjectPlaceholder, ExternalDataLayerUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalDataLayerUID_MetaData), NewProp_ExternalDataLayerUID_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::NewProp_OriginalObject = { "OriginalObject", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeletedObjectPlaceholder, OriginalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalObject_MetaData), NewProp_OriginalObject_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::NewProp_ExternalDataLayerUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::NewProp_OriginalObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::ClassParams = {
	&UDeletedObjectPlaceholder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::PropPointers), 0),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeletedObjectPlaceholder()
{
	if (!Z_Registration_Info_UClass_UDeletedObjectPlaceholder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeletedObjectPlaceholder.OuterSingleton, Z_Construct_UClass_UDeletedObjectPlaceholder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeletedObjectPlaceholder.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDeletedObjectPlaceholder>()
{
	return UDeletedObjectPlaceholder::StaticClass();
}
UDeletedObjectPlaceholder::UDeletedObjectPlaceholder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeletedObjectPlaceholder);
UDeletedObjectPlaceholder::~UDeletedObjectPlaceholder() {}
// End Class UDeletedObjectPlaceholder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeletedObjectPlaceholder, UDeletedObjectPlaceholder::StaticClass, TEXT("UDeletedObjectPlaceholder"), &Z_Registration_Info_UClass_UDeletedObjectPlaceholder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeletedObjectPlaceholder), 4135348926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_468458160(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
