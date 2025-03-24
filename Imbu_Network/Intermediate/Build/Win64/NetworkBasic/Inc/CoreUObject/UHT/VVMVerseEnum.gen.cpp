// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/VerseVM/VVMVerseEnum.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVMVerseEnum() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
COREUOBJECT_API UClass* Z_Construct_UClass_UEnumCookedMetaData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseEnum();
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseEnum_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EVerseEnumFlags();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EVerseFalse();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EVerseTrue();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Enum EVerseEnumFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVerseEnumFlags;
static UEnum* EVerseEnumFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVerseEnumFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVerseEnumFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseEnumFlags, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EVerseEnumFlags"));
	}
	return Z_Registration_Info_UEnum_EVerseEnumFlags.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EVerseEnumFlags>()
{
	return EVerseEnumFlags_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EVerseEnumFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseEnum.h" },
		{ "NativeBound.Name", "EVerseEnumFlags::NativeBound" },
		{ "None.Name", "EVerseEnumFlags::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVerseEnumFlags::None", (int64)EVerseEnumFlags::None },
		{ "EVerseEnumFlags::NativeBound", (int64)EVerseEnumFlags::NativeBound },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EVerseEnumFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EVerseEnumFlags",
	"EVerseEnumFlags",
	Z_Construct_UEnum_CoreUObject_EVerseEnumFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVerseEnumFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVerseEnumFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EVerseEnumFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EVerseEnumFlags()
{
	if (!Z_Registration_Info_UEnum_EVerseEnumFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVerseEnumFlags.InnerSingleton, Z_Construct_UEnum_CoreUObject_EVerseEnumFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVerseEnumFlags.InnerSingleton;
}
// End Enum EVerseEnumFlags

// Begin Class UVerseEnum
void UVerseEnum::StaticRegisterNativesUVerseEnum()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVerseEnum);
UClass* Z_Construct_UClass_UVerseEnum_NoRegister()
{
	return UVerseEnum::StaticClass();
}
struct Z_Construct_UClass_UVerseEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VerseVM/VVMVerseEnum.h" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerseEnumFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseEnum.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCookedMetaDataPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseEnum.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VerseEnumFlags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VerseEnumFlags;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCookedMetaDataPtr;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVerseEnum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVerseEnum_Statics::NewProp_VerseEnumFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVerseEnum_Statics::NewProp_VerseEnumFlags = { "VerseEnumFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseEnum, VerseEnumFlags), Z_Construct_UEnum_CoreUObject_EVerseEnumFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerseEnumFlags_MetaData), NewProp_VerseEnumFlags_MetaData) }; // 4099932938
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVerseEnum_Statics::NewProp_CachedCookedMetaDataPtr = { "CachedCookedMetaDataPtr", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseEnum, CachedCookedMetaDataPtr), Z_Construct_UClass_UEnumCookedMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCookedMetaDataPtr_MetaData), NewProp_CachedCookedMetaDataPtr_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVerseEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseEnum_Statics::NewProp_VerseEnumFlags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseEnum_Statics::NewProp_VerseEnumFlags,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseEnum_Statics::NewProp_CachedCookedMetaDataPtr,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVerseEnum_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVerseEnum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnum,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVerseEnum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVerseEnum_Statics::ClassParams = {
	&UVerseEnum::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVerseEnum_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVerseEnum_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVerseEnum_Statics::Class_MetaDataParams), Z_Construct_UClass_UVerseEnum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVerseEnum()
{
	if (!Z_Registration_Info_UClass_UVerseEnum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVerseEnum.OuterSingleton, Z_Construct_UClass_UVerseEnum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVerseEnum.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UVerseEnum>()
{
	return UVerseEnum::StaticClass();
}
UVerseEnum::UVerseEnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVerseEnum);
UVerseEnum::~UVerseEnum() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVerseEnum)
// End Class UVerseEnum

// Begin Enum EVerseFalse
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVerseFalse;
static UEnum* EVerseFalse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVerseFalse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVerseFalse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseFalse, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EVerseFalse"));
	}
	return Z_Registration_Info_UEnum_EVerseFalse.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EVerseFalse>()
{
	return EVerseFalse_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EVerseFalse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Corresponds to \"false\" in Verse, a type with no possible values. */" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseEnum.h" },
		{ "ToolTip", "Corresponds to \"false\" in Verse, a type with no possible values." },
		{ "Value.Name", "EVerseFalse::Value" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVerseFalse::Value", (int64)EVerseFalse::Value },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EVerseFalse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EVerseFalse",
	"EVerseFalse",
	Z_Construct_UEnum_CoreUObject_EVerseFalse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVerseFalse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVerseFalse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EVerseFalse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EVerseFalse()
{
	if (!Z_Registration_Info_UEnum_EVerseFalse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVerseFalse.InnerSingleton, Z_Construct_UEnum_CoreUObject_EVerseFalse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVerseFalse.InnerSingleton;
}
// End Enum EVerseFalse

// Begin Enum EVerseTrue
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVerseTrue;
static UEnum* EVerseTrue_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVerseTrue.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVerseTrue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseTrue, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EVerseTrue"));
	}
	return Z_Registration_Info_UEnum_EVerseTrue.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EVerseTrue>()
{
	return EVerseTrue_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EVerseTrue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Corresponds to \"true\" in Verse, a type with one possible value: false. */" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseEnum.h" },
		{ "ToolTip", "Corresponds to \"true\" in Verse, a type with one possible value: false." },
		{ "Value.Name", "EVerseTrue::Value" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVerseTrue::Value", (int64)EVerseTrue::Value },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EVerseTrue_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EVerseTrue",
	"EVerseTrue",
	Z_Construct_UEnum_CoreUObject_EVerseTrue_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVerseTrue_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVerseTrue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EVerseTrue_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EVerseTrue()
{
	if (!Z_Registration_Info_UEnum_EVerseTrue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVerseTrue.InnerSingleton, Z_Construct_UEnum_CoreUObject_EVerseTrue_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVerseTrue.InnerSingleton;
}
// End Enum EVerseTrue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVerseEnumFlags_StaticEnum, TEXT("EVerseEnumFlags"), &Z_Registration_Info_UEnum_EVerseEnumFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4099932938U) },
		{ EVerseFalse_StaticEnum, TEXT("EVerseFalse"), &Z_Registration_Info_UEnum_EVerseFalse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2755762102U) },
		{ EVerseTrue_StaticEnum, TEXT("EVerseTrue"), &Z_Registration_Info_UEnum_EVerseTrue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3578949855U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVerseEnum, UVerseEnum::StaticClass, TEXT("UVerseEnum"), &Z_Registration_Info_UClass_UVerseEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVerseEnum), 841912100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_768799226(TEXT("/Script/CoreUObject"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
