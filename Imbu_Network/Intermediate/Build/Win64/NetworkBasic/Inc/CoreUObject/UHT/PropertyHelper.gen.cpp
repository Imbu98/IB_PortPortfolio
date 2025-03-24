// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Private/UObject/PropertyHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyHelper() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EFallbackEnum();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Enum EFallbackEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFallbackEnum;
static UEnum* EFallbackEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFallbackEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFallbackEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EFallbackEnum, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EFallbackEnum"));
	}
	return Z_Registration_Info_UEnum_EFallbackEnum.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EFallbackEnum>()
{
	return EFallbackEnum_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EFallbackEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UObject/PropertyHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EFallbackEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EFallbackEnum",
	"EFallbackEnum",
	nullptr,
	RF_Public|RF_Transient|RF_MarkAsNative,
	0,
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EFallbackEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EFallbackEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EFallbackEnum()
{
	if (!Z_Registration_Info_UEnum_EFallbackEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFallbackEnum.InnerSingleton, Z_Construct_UEnum_CoreUObject_EFallbackEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFallbackEnum.InnerSingleton;
}
// End Enum EFallbackEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_PropertyHelper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFallbackEnum_StaticEnum, TEXT("EFallbackEnum"), &Z_Registration_Info_UEnum_EFallbackEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3371469200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_PropertyHelper_h_1872893241(TEXT("/Script/CoreUObject"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_PropertyHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_PropertyHelper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
