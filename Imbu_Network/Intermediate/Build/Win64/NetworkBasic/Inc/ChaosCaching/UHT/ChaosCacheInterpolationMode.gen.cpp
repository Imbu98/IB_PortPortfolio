// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCaching/Public/Chaos/ChaosCacheInterpolationMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosCacheInterpolationMode() {}

// Begin Cross Module References
CHAOSCACHING_API UEnum* Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode();
UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

// Begin Enum EChaosCacheInterpolationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosCacheInterpolationMode;
static UEnum* EChaosCacheInterpolationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosCacheInterpolationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosCacheInterpolationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("EChaosCacheInterpolationMode"));
	}
	return Z_Registration_Info_UEnum_EChaosCacheInterpolationMode.OuterSingleton;
}
template<> CHAOSCACHING_API UEnum* StaticEnum<EChaosCacheInterpolationMode>()
{
	return EChaosCacheInterpolationMode_StaticEnum();
}
struct Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DualQuatInterp.Comment", "/** Dual quaternion interpolation, follows helix or screw-motion path between keyframes.   */" },
		{ "DualQuatInterp.Name", "EChaosCacheInterpolationMode::DualQuatInterp" },
		{ "DualQuatInterp.ToolTip", "Dual quaternion interpolation, follows helix or screw-motion path between keyframes." },
		{ "EulerInterp.Comment", "/** Rotor or Euler Angle interpolation. */" },
		{ "EulerInterp.Name", "EChaosCacheInterpolationMode::EulerInterp" },
		{ "EulerInterp.ToolTip", "Rotor or Euler Angle interpolation." },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCacheInterpolationMode.h" },
		{ "QuatInterp.Comment", "/** Shortest Path or Quaternion interpolation for the rotation. */" },
		{ "QuatInterp.Name", "EChaosCacheInterpolationMode::QuatInterp" },
		{ "QuatInterp.ToolTip", "Shortest Path or Quaternion interpolation for the rotation." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosCacheInterpolationMode::QuatInterp", (int64)EChaosCacheInterpolationMode::QuatInterp },
		{ "EChaosCacheInterpolationMode::EulerInterp", (int64)EChaosCacheInterpolationMode::EulerInterp },
		{ "EChaosCacheInterpolationMode::DualQuatInterp", (int64)EChaosCacheInterpolationMode::DualQuatInterp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosCaching,
	nullptr,
	"EChaosCacheInterpolationMode",
	"EChaosCacheInterpolationMode",
	Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode()
{
	if (!Z_Registration_Info_UEnum_EChaosCacheInterpolationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosCacheInterpolationMode.InnerSingleton, Z_Construct_UEnum_ChaosCaching_EChaosCacheInterpolationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosCacheInterpolationMode.InnerSingleton;
}
// End Enum EChaosCacheInterpolationMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCacheInterpolationMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosCacheInterpolationMode_StaticEnum, TEXT("EChaosCacheInterpolationMode"), &Z_Registration_Info_UEnum_EChaosCacheInterpolationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1397612522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCacheInterpolationMode_h_603770646(TEXT("/Script/ChaosCaching"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCacheInterpolationMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCacheInterpolationMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
