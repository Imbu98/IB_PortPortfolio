// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/VerseVM/VVMVerseEffectSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVMVerseEffectSet() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EVerseEffectSet();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Enum EVerseEffectSet
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVerseEffectSet;
static UEnum* EVerseEffectSet_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVerseEffectSet.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVerseEffectSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseEffectSet, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EVerseEffectSet"));
	}
	return Z_Registration_Info_UEnum_EVerseEffectSet.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EVerseEffectSet>()
{
	return EVerseEffectSet_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EVerseEffectSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Allocates.Name", "EVerseEffectSet::Allocates" },
		{ "Comment", "/**\n * Mirrors uLang::SEffectSet for UE serialization\n */" },
		{ "Decides.Name", "EVerseEffectSet::Decides" },
		{ "Diverges.Name", "EVerseEffectSet::Diverges" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseEffectSet.h" },
		{ "None.Name", "EVerseEffectSet::None" },
		{ "NoRollback.Name", "EVerseEffectSet::NoRollback" },
		{ "Reads.Name", "EVerseEffectSet::Reads" },
		{ "Suspends.Name", "EVerseEffectSet::Suspends" },
		{ "ToolTip", "Mirrors uLang::SEffectSet for UE serialization" },
		{ "Writes.Name", "EVerseEffectSet::Writes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVerseEffectSet::None", (int64)EVerseEffectSet::None },
		{ "EVerseEffectSet::Suspends", (int64)EVerseEffectSet::Suspends },
		{ "EVerseEffectSet::Decides", (int64)EVerseEffectSet::Decides },
		{ "EVerseEffectSet::Diverges", (int64)EVerseEffectSet::Diverges },
		{ "EVerseEffectSet::Reads", (int64)EVerseEffectSet::Reads },
		{ "EVerseEffectSet::Writes", (int64)EVerseEffectSet::Writes },
		{ "EVerseEffectSet::Allocates", (int64)EVerseEffectSet::Allocates },
		{ "EVerseEffectSet::NoRollback", (int64)EVerseEffectSet::NoRollback },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EVerseEffectSet_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EVerseEffectSet",
	"EVerseEffectSet",
	Z_Construct_UEnum_CoreUObject_EVerseEffectSet_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVerseEffectSet_Statics::Enumerators),
	EEnumFlags::Flags,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EVerseEffectSet_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EVerseEffectSet_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EVerseEffectSet()
{
	if (!Z_Registration_Info_UEnum_EVerseEffectSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVerseEffectSet.InnerSingleton, Z_Construct_UEnum_CoreUObject_EVerseEffectSet_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVerseEffectSet.InnerSingleton;
}
// End Enum EVerseEffectSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEffectSet_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVerseEffectSet_StaticEnum, TEXT("EVerseEffectSet"), &Z_Registration_Info_UEnum_EVerseEffectSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3123768990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEffectSet_h_3446788686(TEXT("/Script/CoreUObject"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEffectSet_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEffectSet_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
