// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/Chaos/SoftsSimulationSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoftsSimulationSpace() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin Enum EChaosSoftsSimulationSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace;
static UEnum* EChaosSoftsSimulationSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EChaosSoftsSimulationSpace"));
	}
	return Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EChaosSoftsSimulationSpace>()
{
	return EChaosSoftsSimulationSpace_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ComponentSpace.Comment", "// Component space\n" },
		{ "ComponentSpace.Name", "EChaosSoftsSimulationSpace::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "Component space" },
		{ "ModuleRelativePath", "Public/Chaos/SoftsSimulationSpace.h" },
		{ "ReferenceBoneSpace.Comment", "// Top level bone for each cloth.\n" },
		{ "ReferenceBoneSpace.Name", "EChaosSoftsSimulationSpace::ReferenceBoneSpace" },
		{ "ReferenceBoneSpace.ToolTip", "Top level bone for each cloth." },
		{ "WorldSpace.Comment", "// World space\n" },
		{ "WorldSpace.Name", "EChaosSoftsSimulationSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "World space" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosSoftsSimulationSpace::WorldSpace", (int64)EChaosSoftsSimulationSpace::WorldSpace },
		{ "EChaosSoftsSimulationSpace::ComponentSpace", (int64)EChaosSoftsSimulationSpace::ComponentSpace },
		{ "EChaosSoftsSimulationSpace::ReferenceBoneSpace", (int64)EChaosSoftsSimulationSpace::ReferenceBoneSpace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EChaosSoftsSimulationSpace",
	"EChaosSoftsSimulationSpace",
	Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace()
{
	if (!Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.InnerSingleton, Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.InnerSingleton;
}
// End Enum EChaosSoftsSimulationSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_SoftsSimulationSpace_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosSoftsSimulationSpace_StaticEnum, TEXT("EChaosSoftsSimulationSpace"), &Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 986250437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_SoftsSimulationSpace_h_4224679144(TEXT("/Script/Chaos"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_SoftsSimulationSpace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_SoftsSimulationSpace_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
