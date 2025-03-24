// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/BuiltInCameraVariables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuiltInCameraVariables() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Enum EBuiltInDoubleCameraVariable
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable;
static UEnum* EBuiltInDoubleCameraVariable_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("EBuiltInDoubleCameraVariable"));
	}
	return Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EBuiltInDoubleCameraVariable>()
{
	return EBuiltInDoubleCameraVariable_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Built-in floating point camera variables.\n */" },
		{ "ModuleRelativePath", "Public/Core/BuiltInCameraVariables.h" },
		{ "None.Name", "EBuiltInDoubleCameraVariable::None" },
		{ "Pitch.Name", "EBuiltInDoubleCameraVariable::Pitch" },
		{ "Roll.Name", "EBuiltInDoubleCameraVariable::Roll" },
		{ "ToolTip", "Built-in floating point camera variables." },
		{ "Yaw.Name", "EBuiltInDoubleCameraVariable::Yaw" },
		{ "Zoom.Name", "EBuiltInDoubleCameraVariable::Zoom" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuiltInDoubleCameraVariable::None", (int64)EBuiltInDoubleCameraVariable::None },
		{ "EBuiltInDoubleCameraVariable::Yaw", (int64)EBuiltInDoubleCameraVariable::Yaw },
		{ "EBuiltInDoubleCameraVariable::Pitch", (int64)EBuiltInDoubleCameraVariable::Pitch },
		{ "EBuiltInDoubleCameraVariable::Roll", (int64)EBuiltInDoubleCameraVariable::Roll },
		{ "EBuiltInDoubleCameraVariable::Zoom", (int64)EBuiltInDoubleCameraVariable::Zoom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"EBuiltInDoubleCameraVariable",
	"EBuiltInDoubleCameraVariable",
	Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable()
{
	if (!Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.InnerSingleton, Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.InnerSingleton;
}
// End Enum EBuiltInDoubleCameraVariable

// Begin Enum EBuiltInVector2dCameraVariable
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable;
static UEnum* EBuiltInVector2dCameraVariable_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("EBuiltInVector2dCameraVariable"));
	}
	return Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EBuiltInVector2dCameraVariable>()
{
	return EBuiltInVector2dCameraVariable_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Built-in 2-dimensional camera variables.\n */" },
		{ "ModuleRelativePath", "Public/Core/BuiltInCameraVariables.h" },
		{ "None.Name", "EBuiltInVector2dCameraVariable::None" },
		{ "ToolTip", "Built-in 2-dimensional camera variables." },
		{ "YawPitch.Name", "EBuiltInVector2dCameraVariable::YawPitch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuiltInVector2dCameraVariable::None", (int64)EBuiltInVector2dCameraVariable::None },
		{ "EBuiltInVector2dCameraVariable::YawPitch", (int64)EBuiltInVector2dCameraVariable::YawPitch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"EBuiltInVector2dCameraVariable",
	"EBuiltInVector2dCameraVariable",
	Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable()
{
	if (!Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.InnerSingleton, Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.InnerSingleton;
}
// End Enum EBuiltInVector2dCameraVariable

// Begin Enum EBuiltInRotator3dCameraVariable
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable;
static UEnum* EBuiltInRotator3dCameraVariable_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("EBuiltInRotator3dCameraVariable"));
	}
	return Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EBuiltInRotator3dCameraVariable>()
{
	return EBuiltInRotator3dCameraVariable_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ControlRotation.Name", "EBuiltInRotator3dCameraVariable::ControlRotation" },
		{ "ModuleRelativePath", "Public/Core/BuiltInCameraVariables.h" },
		{ "None.Name", "EBuiltInRotator3dCameraVariable::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuiltInRotator3dCameraVariable::None", (int64)EBuiltInRotator3dCameraVariable::None },
		{ "EBuiltInRotator3dCameraVariable::ControlRotation", (int64)EBuiltInRotator3dCameraVariable::ControlRotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"EBuiltInRotator3dCameraVariable",
	"EBuiltInRotator3dCameraVariable",
	Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable()
{
	if (!Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.InnerSingleton, Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.InnerSingleton;
}
// End Enum EBuiltInRotator3dCameraVariable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BuiltInCameraVariables_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBuiltInDoubleCameraVariable_StaticEnum, TEXT("EBuiltInDoubleCameraVariable"), &Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2886281060U) },
		{ EBuiltInVector2dCameraVariable_StaticEnum, TEXT("EBuiltInVector2dCameraVariable"), &Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2766410892U) },
		{ EBuiltInRotator3dCameraVariable_StaticEnum, TEXT("EBuiltInRotator3dCameraVariable"), &Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1460896575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BuiltInCameraVariables_h_730265594(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BuiltInCameraVariables_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BuiltInCameraVariables_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
