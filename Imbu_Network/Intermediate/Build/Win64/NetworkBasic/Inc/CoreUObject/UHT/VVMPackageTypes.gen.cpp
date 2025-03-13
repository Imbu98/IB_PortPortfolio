// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/VerseVM/VVMPackageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVMPackageTypes() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EVersePackageScope();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EVersePackageType();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Enum EVersePackageScope
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVersePackageScope;
static UEnum* EVersePackageScope_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVersePackageScope.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVersePackageScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVersePackageScope, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EVersePackageScope"));
	}
	return Z_Registration_Info_UEnum_EVersePackageScope.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EVersePackageScope>()
{
	return EVersePackageScope_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EVersePackageScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "InternalAPI.Comment", "// Created by Epic and only public definitions will be visible to public users\n" },
		{ "InternalAPI.Name", "EVersePackageScope::InternalAPI" },
		{ "InternalAPI.ToolTip", "Created by Epic and only public definitions will be visible to public users" },
		{ "InternalUser.Comment", "// Created by a public user\n" },
		{ "InternalUser.Name", "EVersePackageScope::InternalUser" },
		{ "InternalUser.ToolTip", "Created by a public user" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMPackageTypes.h" },
		{ "PublicAPI.Name", "EVersePackageScope::PublicAPI" },
		{ "PublicUser.Comment", "// Created by Epic and is entirely hidden from public users\n" },
		{ "PublicUser.Name", "EVersePackageScope::PublicUser" },
		{ "PublicUser.ToolTip", "Created by Epic and is entirely hidden from public users" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVersePackageScope::PublicAPI", (int64)EVersePackageScope::PublicAPI },
		{ "EVersePackageScope::InternalAPI", (int64)EVersePackageScope::InternalAPI },
		{ "EVersePackageScope::PublicUser", (int64)EVersePackageScope::PublicUser },
		{ "EVersePackageScope::InternalUser", (int64)EVersePackageScope::InternalUser },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EVersePackageScope_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EVersePackageScope",
	"EVersePackageScope",
	Z_Construct_UEnum_CoreUObject_EVersePackageScope_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVersePackageScope_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVersePackageScope_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EVersePackageScope_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EVersePackageScope()
{
	if (!Z_Registration_Info_UEnum_EVersePackageScope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVersePackageScope.InnerSingleton, Z_Construct_UEnum_CoreUObject_EVersePackageScope_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVersePackageScope.InnerSingleton;
}
// End Enum EVersePackageScope

// Begin Enum EVersePackageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVersePackageType;
static UEnum* EVersePackageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVersePackageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVersePackageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVersePackageType, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EVersePackageType"));
	}
	return Z_Registration_Info_UEnum_EVersePackageType.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EVersePackageType>()
{
	return EVersePackageType_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EVersePackageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Assets.Comment", "// A package associated with the published content of a plugin\n" },
		{ "Assets.Name", "EVersePackageType::Assets" },
		{ "Assets.ToolTip", "A package associated with the published content of a plugin" },
		{ "Content.Comment", "// A package associated with a C++ module\n" },
		{ "Content.Name", "EVersePackageType::Content" },
		{ "Content.ToolTip", "A package associated with a C++ module" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMPackageTypes.h" },
		{ "PublishedContent.Comment", "// A package associated with a plugin\n" },
		{ "PublishedContent.Name", "EVersePackageType::PublishedContent" },
		{ "PublishedContent.ToolTip", "A package associated with a plugin" },
		{ "VNI.Name", "EVersePackageType::VNI" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVersePackageType::VNI", (int64)EVersePackageType::VNI },
		{ "EVersePackageType::Content", (int64)EVersePackageType::Content },
		{ "EVersePackageType::PublishedContent", (int64)EVersePackageType::PublishedContent },
		{ "EVersePackageType::Assets", (int64)EVersePackageType::Assets },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EVersePackageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EVersePackageType",
	"EVersePackageType",
	Z_Construct_UEnum_CoreUObject_EVersePackageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVersePackageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVersePackageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EVersePackageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EVersePackageType()
{
	if (!Z_Registration_Info_UEnum_EVersePackageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVersePackageType.InnerSingleton, Z_Construct_UEnum_CoreUObject_EVersePackageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVersePackageType.InnerSingleton;
}
// End Enum EVersePackageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMPackageTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVersePackageScope_StaticEnum, TEXT("EVersePackageScope"), &Z_Registration_Info_UEnum_EVersePackageScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1913240480U) },
		{ EVersePackageType_StaticEnum, TEXT("EVersePackageType"), &Z_Registration_Info_UEnum_EVersePackageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1059081206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMPackageTypes_h_1289403588(TEXT("/Script/CoreUObject"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMPackageTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMPackageTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
