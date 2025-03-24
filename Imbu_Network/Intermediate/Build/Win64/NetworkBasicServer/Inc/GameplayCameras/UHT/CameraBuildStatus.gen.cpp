// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraBuildStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraBuildStatus() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UHasCameraBuildStatus();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UHasCameraBuildStatus_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Enum ECameraBuildStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraBuildStatus;
static UEnum* ECameraBuildStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraBuildStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraBuildStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraBuildStatus"));
	}
	return Z_Registration_Info_UEnum_ECameraBuildStatus.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraBuildStatus>()
{
	return ECameraBuildStatus_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clean.Name", "ECameraBuildStatus::Clean" },
		{ "CleanWithWarnings.Name", "ECameraBuildStatus::CleanWithWarnings" },
		{ "Comment", "/**\n * Enumeration that describes if a camera asset needs to be rebuilt.\n */" },
		{ "Dirty.Name", "ECameraBuildStatus::Dirty" },
		{ "ModuleRelativePath", "Public/Core/CameraBuildStatus.h" },
		{ "ToolTip", "Enumeration that describes if a camera asset needs to be rebuilt." },
		{ "WithErrors.Name", "ECameraBuildStatus::WithErrors" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraBuildStatus::Clean", (int64)ECameraBuildStatus::Clean },
		{ "ECameraBuildStatus::CleanWithWarnings", (int64)ECameraBuildStatus::CleanWithWarnings },
		{ "ECameraBuildStatus::WithErrors", (int64)ECameraBuildStatus::WithErrors },
		{ "ECameraBuildStatus::Dirty", (int64)ECameraBuildStatus::Dirty },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECameraBuildStatus",
	"ECameraBuildStatus",
	Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus()
{
	if (!Z_Registration_Info_UEnum_ECameraBuildStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraBuildStatus.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraBuildStatus.InnerSingleton;
}
// End Enum ECameraBuildStatus

// Begin Interface UHasCameraBuildStatus
void UHasCameraBuildStatus::StaticRegisterNativesUHasCameraBuildStatus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHasCameraBuildStatus);
UClass* Z_Construct_UClass_UHasCameraBuildStatus_NoRegister()
{
	return UHasCameraBuildStatus::StaticClass();
}
struct Z_Construct_UClass_UHasCameraBuildStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraBuildStatus.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHasCameraBuildStatus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHasCameraBuildStatus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHasCameraBuildStatus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHasCameraBuildStatus_Statics::ClassParams = {
	&UHasCameraBuildStatus::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHasCameraBuildStatus_Statics::Class_MetaDataParams), Z_Construct_UClass_UHasCameraBuildStatus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHasCameraBuildStatus()
{
	if (!Z_Registration_Info_UClass_UHasCameraBuildStatus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHasCameraBuildStatus.OuterSingleton, Z_Construct_UClass_UHasCameraBuildStatus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHasCameraBuildStatus.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UHasCameraBuildStatus>()
{
	return UHasCameraBuildStatus::StaticClass();
}
UHasCameraBuildStatus::UHasCameraBuildStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHasCameraBuildStatus);
UHasCameraBuildStatus::~UHasCameraBuildStatus() {}
// End Interface UHasCameraBuildStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraBuildStatus_StaticEnum, TEXT("ECameraBuildStatus"), &Z_Registration_Info_UEnum_ECameraBuildStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2777232607U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHasCameraBuildStatus, UHasCameraBuildStatus::StaticClass, TEXT("UHasCameraBuildStatus"), &Z_Registration_Info_UClass_UHasCameraBuildStatus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHasCameraBuildStatus), 2979863171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_4195548109(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
