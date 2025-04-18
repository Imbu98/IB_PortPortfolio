// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionWorldPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionWorldPosition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EWorldPositionIncludedOffsets
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPositionIncludedOffsets;
static UEnum* EWorldPositionIncludedOffsets_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPositionIncludedOffsets.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPositionIncludedOffsets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPositionIncludedOffsets"));
	}
	return Z_Registration_Info_UEnum_EWorldPositionIncludedOffsets.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EWorldPositionIncludedOffsets>()
{
	return EWorldPositionIncludedOffsets_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Specifies which shader generated offsets should included in the world position (displacement/WPO etc.) */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionWorldPosition.h" },
		{ "ToolTip", "Specifies which shader generated offsets should included in the world position (displacement/WPO etc.)" },
		{ "WPT_CameraRelative.Comment", "/** Camera relative world position with all material shader offsets applied */" },
		{ "WPT_CameraRelative.DisplayName", "Camera Relative World Position (Including Material Shader Offsets)" },
		{ "WPT_CameraRelative.Name", "WPT_CameraRelative" },
		{ "WPT_CameraRelative.ToolTip", "Camera relative world position with all material shader offsets applied" },
		{ "WPT_CameraRelativeNoOffsets.Comment", "/** Camera relative world position with no material shader offsets applied */" },
		{ "WPT_CameraRelativeNoOffsets.DisplayName", "Camera Relative World Position (Excluding Material Shader Offsets)" },
		{ "WPT_CameraRelativeNoOffsets.Name", "WPT_CameraRelativeNoOffsets" },
		{ "WPT_CameraRelativeNoOffsets.ToolTip", "Camera relative world position with no material shader offsets applied" },
		{ "WPT_Default.Comment", "/** Absolute world position with all material shader offsets applied */" },
		{ "WPT_Default.DisplayName", "Absolute World Position (Including Material Shader Offsets)" },
		{ "WPT_Default.Name", "WPT_Default" },
		{ "WPT_Default.ToolTip", "Absolute world position with all material shader offsets applied" },
		{ "WPT_ExcludeAllShaderOffsets.Comment", "/** Absolute world position with no material shader offsets applied */" },
		{ "WPT_ExcludeAllShaderOffsets.DisplayName", "Absolute World Position (Excluding Material Shader Offsets)" },
		{ "WPT_ExcludeAllShaderOffsets.Name", "WPT_ExcludeAllShaderOffsets" },
		{ "WPT_ExcludeAllShaderOffsets.ToolTip", "Absolute world position with no material shader offsets applied" },
		{ "WPT_MAX.Name", "WPT_MAX" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WPT_Default", (int64)WPT_Default },
		{ "WPT_ExcludeAllShaderOffsets", (int64)WPT_ExcludeAllShaderOffsets },
		{ "WPT_CameraRelative", (int64)WPT_CameraRelative },
		{ "WPT_CameraRelativeNoOffsets", (int64)WPT_CameraRelativeNoOffsets },
		{ "WPT_MAX", (int64)WPT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EWorldPositionIncludedOffsets",
	"EWorldPositionIncludedOffsets",
	Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets()
{
	if (!Z_Registration_Info_UEnum_EWorldPositionIncludedOffsets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPositionIncludedOffsets.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPositionIncludedOffsets.InnerSingleton;
}
// End Enum EWorldPositionIncludedOffsets

// Begin Class UMaterialExpressionWorldPosition
void UMaterialExpressionWorldPosition::StaticRegisterNativesUMaterialExpressionWorldPosition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionWorldPosition);
UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition_NoRegister()
{
	return UMaterialExpressionWorldPosition::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionWorldPosition.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionWorldPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionShaderOffset_MetaData[] = {
		{ "Category", "UMaterialExpressionWorldPosition" },
		{ "DisplayName", "Shader Offsets" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionWorldPosition.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionShaderOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionWorldPosition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::NewProp_WorldPositionShaderOffset = { "WorldPositionShaderOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionWorldPosition, WorldPositionShaderOffset), Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionShaderOffset_MetaData), NewProp_WorldPositionShaderOffset_MetaData) }; // 74720940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::NewProp_WorldPositionShaderOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::ClassParams = {
	&UMaterialExpressionWorldPosition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionWorldPosition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionWorldPosition.OuterSingleton, Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionWorldPosition.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionWorldPosition>()
{
	return UMaterialExpressionWorldPosition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionWorldPosition);
UMaterialExpressionWorldPosition::~UMaterialExpressionWorldPosition() {}
// End Class UMaterialExpressionWorldPosition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionWorldPosition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWorldPositionIncludedOffsets_StaticEnum, TEXT("EWorldPositionIncludedOffsets"), &Z_Registration_Info_UEnum_EWorldPositionIncludedOffsets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 74720940U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionWorldPosition, UMaterialExpressionWorldPosition::StaticClass, TEXT("UMaterialExpressionWorldPosition"), &Z_Registration_Info_UClass_UMaterialExpressionWorldPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionWorldPosition), 464526158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionWorldPosition_h_3666031206(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionWorldPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionWorldPosition_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionWorldPosition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionWorldPosition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
