// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/HLOD/HLODLevelExclusion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODLevelExclusion() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODLevelExclusion();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EHLODLevelExclusion
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHLODLevelExclusion;
static UEnum* EHLODLevelExclusion_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHLODLevelExclusion.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHLODLevelExclusion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHLODLevelExclusion, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHLODLevelExclusion"));
	}
	return Z_Registration_Info_UEnum_EHLODLevelExclusion.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EHLODLevelExclusion>()
{
	return EHLODLevelExclusion_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EHLODLevelExclusion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Comment", "/** Bitflag enum to allow editing of UPrimitiveComponent::ExcludeFromHLODLevels as a bitmask in the properties */" },
		{ "HLOD0.Name", "EHLODLevelExclusion::HLOD0" },
		{ "HLOD1.Name", "EHLODLevelExclusion::HLOD1" },
		{ "HLOD2.Name", "EHLODLevelExclusion::HLOD2" },
		{ "HLOD3.Name", "EHLODLevelExclusion::HLOD3" },
		{ "HLOD4.Name", "EHLODLevelExclusion::HLOD4" },
		{ "HLOD5.Name", "EHLODLevelExclusion::HLOD5" },
		{ "HLOD6.Name", "EHLODLevelExclusion::HLOD6" },
		{ "HLOD7.Name", "EHLODLevelExclusion::HLOD7" },
		{ "ModuleRelativePath", "Public/HLOD/HLODLevelExclusion.h" },
		{ "ToolTip", "Bitflag enum to allow editing of UPrimitiveComponent::ExcludeFromHLODLevels as a bitmask in the properties" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHLODLevelExclusion::HLOD0", (int64)EHLODLevelExclusion::HLOD0 },
		{ "EHLODLevelExclusion::HLOD1", (int64)EHLODLevelExclusion::HLOD1 },
		{ "EHLODLevelExclusion::HLOD2", (int64)EHLODLevelExclusion::HLOD2 },
		{ "EHLODLevelExclusion::HLOD3", (int64)EHLODLevelExclusion::HLOD3 },
		{ "EHLODLevelExclusion::HLOD4", (int64)EHLODLevelExclusion::HLOD4 },
		{ "EHLODLevelExclusion::HLOD5", (int64)EHLODLevelExclusion::HLOD5 },
		{ "EHLODLevelExclusion::HLOD6", (int64)EHLODLevelExclusion::HLOD6 },
		{ "EHLODLevelExclusion::HLOD7", (int64)EHLODLevelExclusion::HLOD7 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHLODLevelExclusion_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EHLODLevelExclusion",
	"EHLODLevelExclusion",
	Z_Construct_UEnum_Engine_EHLODLevelExclusion_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODLevelExclusion_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODLevelExclusion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EHLODLevelExclusion_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EHLODLevelExclusion()
{
	if (!Z_Registration_Info_UEnum_EHLODLevelExclusion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHLODLevelExclusion.InnerSingleton, Z_Construct_UEnum_Engine_EHLODLevelExclusion_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHLODLevelExclusion.InnerSingleton;
}
// End Enum EHLODLevelExclusion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODLevelExclusion_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHLODLevelExclusion_StaticEnum, TEXT("EHLODLevelExclusion"), &Z_Registration_Info_UEnum_EHLODLevelExclusion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1990724744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODLevelExclusion_h_2940078384(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODLevelExclusion_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODLevelExclusion_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
