// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Tests/OptionalPropertyTestObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionalPropertyTestObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UOptionalPropertyTestObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UOptionalPropertyTestObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Class UOptionalPropertyTestObject
void UOptionalPropertyTestObject::StaticRegisterNativesUOptionalPropertyTestObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionalPropertyTestObject);
UClass* Z_Construct_UClass_UOptionalPropertyTestObject_NoRegister()
{
	return UOptionalPropertyTestObject::StaticClass();
}
struct Z_Construct_UClass_UOptionalPropertyTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/OptionalPropertyTestObject.h" },
		{ "ModuleRelativePath", "Tests/OptionalPropertyTestObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalString_MetaData[] = {
		{ "ModuleRelativePath", "Tests/OptionalPropertyTestObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalText_MetaData[] = {
		{ "ModuleRelativePath", "Tests/OptionalPropertyTestObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalName_MetaData[] = {
		{ "ModuleRelativePath", "Tests/OptionalPropertyTestObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalInt_MetaData[] = {
		{ "ModuleRelativePath", "Tests/OptionalPropertyTestObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalString_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_OptionalString;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OptionalText_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_OptionalText;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalName_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_OptionalName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionalInt_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_OptionalInt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionalPropertyTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalString_Inner = { "OptionalString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalString = { "OptionalString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionalPropertyTestObject, OptionalString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalString_MetaData), NewProp_OptionalString_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalText_Inner = { "OptionalText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalText = { "OptionalText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionalPropertyTestObject, OptionalText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalText_MetaData), NewProp_OptionalText_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalName_Inner = { "OptionalName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalName = { "OptionalName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionalPropertyTestObject, OptionalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalName_MetaData), NewProp_OptionalName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalInt_Inner = { "OptionalInt", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalInt = { "OptionalInt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionalPropertyTestObject, OptionalInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalInt_MetaData), NewProp_OptionalInt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionalPropertyTestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalString_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalText_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalInt_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalPropertyTestObject_Statics::NewProp_OptionalInt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalPropertyTestObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptionalPropertyTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalPropertyTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionalPropertyTestObject_Statics::ClassParams = {
	&UOptionalPropertyTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptionalPropertyTestObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalPropertyTestObject_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalPropertyTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptionalPropertyTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptionalPropertyTestObject()
{
	if (!Z_Registration_Info_UClass_UOptionalPropertyTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionalPropertyTestObject.OuterSingleton, Z_Construct_UClass_UOptionalPropertyTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptionalPropertyTestObject.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UOptionalPropertyTestObject>()
{
	return UOptionalPropertyTestObject::StaticClass();
}
UOptionalPropertyTestObject::UOptionalPropertyTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionalPropertyTestObject);
UOptionalPropertyTestObject::~UOptionalPropertyTestObject() {}
// End Class UOptionalPropertyTestObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptionalPropertyTestObject, UOptionalPropertyTestObject::StaticClass, TEXT("UOptionalPropertyTestObject"), &Z_Registration_Info_UClass_UOptionalPropertyTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionalPropertyTestObject), 4112317779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_1094581562(TEXT("/Script/CoreUObject"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
