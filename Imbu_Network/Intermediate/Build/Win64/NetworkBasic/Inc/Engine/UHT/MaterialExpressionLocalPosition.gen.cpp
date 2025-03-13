// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionLocalPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLocalPosition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLocalPosition();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLocalPosition_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocalPositionOrigin();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionIncludedOffsets();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EPositionIncludedOffsets
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPositionIncludedOffsets;
static UEnum* EPositionIncludedOffsets_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPositionIncludedOffsets.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPositionIncludedOffsets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPositionIncludedOffsets, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPositionIncludedOffsets"));
	}
	return Z_Registration_Info_UEnum_EPositionIncludedOffsets.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPositionIncludedOffsets>()
{
	return EPositionIncludedOffsets_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPositionIncludedOffsets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Specifies which shader generated offsets should included in the position (displacement/WPO etc.) */" },
		{ "ExcludeOffsets.Comment", "/** Position with no material shader offsets applied */" },
		{ "ExcludeOffsets.DisplayName", "Exclude Material Shader Offsets" },
		{ "ExcludeOffsets.Name", "EPositionIncludedOffsets::ExcludeOffsets" },
		{ "ExcludeOffsets.ToolTip", "Position with no material shader offsets applied" },
		{ "IncludeOffsets.Comment", "/** Position with all material shader offsets applied */" },
		{ "IncludeOffsets.DisplayName", "Include Material Shader Offsets" },
		{ "IncludeOffsets.Name", "EPositionIncludedOffsets::IncludeOffsets" },
		{ "IncludeOffsets.ToolTip", "Position with all material shader offsets applied" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionLocalPosition.h" },
		{ "ToolTip", "Specifies which shader generated offsets should included in the position (displacement/WPO etc.)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPositionIncludedOffsets::IncludeOffsets", (int64)EPositionIncludedOffsets::IncludeOffsets },
		{ "EPositionIncludedOffsets::ExcludeOffsets", (int64)EPositionIncludedOffsets::ExcludeOffsets },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPositionIncludedOffsets_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPositionIncludedOffsets",
	"EPositionIncludedOffsets",
	Z_Construct_UEnum_Engine_EPositionIncludedOffsets_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPositionIncludedOffsets_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPositionIncludedOffsets_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPositionIncludedOffsets_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPositionIncludedOffsets()
{
	if (!Z_Registration_Info_UEnum_EPositionIncludedOffsets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPositionIncludedOffsets.InnerSingleton, Z_Construct_UEnum_Engine_EPositionIncludedOffsets_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPositionIncludedOffsets.InnerSingleton;
}
// End Enum EPositionIncludedOffsets

// Begin Enum ELocalPositionOrigin
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocalPositionOrigin;
static UEnum* ELocalPositionOrigin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocalPositionOrigin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocalPositionOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocalPositionOrigin, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELocalPositionOrigin"));
	}
	return Z_Registration_Info_UEnum_ELocalPositionOrigin.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELocalPositionOrigin>()
{
	return ELocalPositionOrigin_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELocalPositionOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Specifies the reference point of the local position. This can be different in some cases, e.g. for instanced meshes. */" },
		{ "Instance.Comment", "/** Position relative to instance */" },
		{ "Instance.DisplayName", "Instance" },
		{ "Instance.Name", "ELocalPositionOrigin::Instance" },
		{ "Instance.ToolTip", "Position relative to instance" },
		{ "InstancePreSkinning.Comment", "/** Returns pre-skinned local position for skeletal meshes, usable in vertex shader only.\n\x09Returns the instance position for non-skeletal meshes. Incompatible with GPU skin cache feature.*/" },
		{ "InstancePreSkinning.DisplayName", "Pre-Skinned Instance" },
		{ "InstancePreSkinning.Name", "ELocalPositionOrigin::InstancePreSkinning" },
		{ "InstancePreSkinning.ToolTip", "Returns pre-skinned local position for skeletal meshes, usable in vertex shader only.\n      Returns the instance position for non-skeletal meshes. Incompatible with GPU skin cache feature." },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionLocalPosition.h" },
		{ "Primitive.Comment", "/** Position relative to primitive actor component */" },
		{ "Primitive.DisplayName", "Component" },
		{ "Primitive.Name", "ELocalPositionOrigin::Primitive" },
		{ "Primitive.ToolTip", "Position relative to primitive actor component" },
		{ "ToolTip", "Specifies the reference point of the local position. This can be different in some cases, e.g. for instanced meshes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocalPositionOrigin::Instance", (int64)ELocalPositionOrigin::Instance },
		{ "ELocalPositionOrigin::InstancePreSkinning", (int64)ELocalPositionOrigin::InstancePreSkinning },
		{ "ELocalPositionOrigin::Primitive", (int64)ELocalPositionOrigin::Primitive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELocalPositionOrigin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELocalPositionOrigin",
	"ELocalPositionOrigin",
	Z_Construct_UEnum_Engine_ELocalPositionOrigin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocalPositionOrigin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocalPositionOrigin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELocalPositionOrigin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELocalPositionOrigin()
{
	if (!Z_Registration_Info_UEnum_ELocalPositionOrigin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocalPositionOrigin.InnerSingleton, Z_Construct_UEnum_Engine_ELocalPositionOrigin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocalPositionOrigin.InnerSingleton;
}
// End Enum ELocalPositionOrigin

// Begin Class UMaterialExpressionLocalPosition
void UMaterialExpressionLocalPosition::StaticRegisterNativesUMaterialExpressionLocalPosition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLocalPosition);
UClass* Z_Construct_UClass_UMaterialExpressionLocalPosition_NoRegister()
{
	return UMaterialExpressionLocalPosition::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLocalPosition.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionLocalPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludedOffsets_MetaData[] = {
		{ "Category", "MaterialExpressionLocalPosition" },
		{ "DisplayName", "Shader Offsets" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionLocalPosition.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOrigin_MetaData[] = {
		{ "Category", "MaterialExpressionLocalPosition" },
		{ "DisplayName", "Local Origin" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionLocalPosition.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IncludedOffsets_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IncludedOffsets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalOrigin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocalOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLocalPosition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::NewProp_IncludedOffsets_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::NewProp_IncludedOffsets = { "IncludedOffsets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLocalPosition, IncludedOffsets), Z_Construct_UEnum_Engine_EPositionIncludedOffsets, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludedOffsets_MetaData), NewProp_IncludedOffsets_MetaData) }; // 3757274064
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::NewProp_LocalOrigin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::NewProp_LocalOrigin = { "LocalOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLocalPosition, LocalOrigin), Z_Construct_UEnum_Engine_ELocalPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOrigin_MetaData), NewProp_LocalOrigin_MetaData) }; // 2846830579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::NewProp_IncludedOffsets_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::NewProp_IncludedOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::NewProp_LocalOrigin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::NewProp_LocalOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::ClassParams = {
	&UMaterialExpressionLocalPosition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLocalPosition()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLocalPosition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLocalPosition.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLocalPosition.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionLocalPosition>()
{
	return UMaterialExpressionLocalPosition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLocalPosition);
UMaterialExpressionLocalPosition::~UMaterialExpressionLocalPosition() {}
// End Class UMaterialExpressionLocalPosition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPositionIncludedOffsets_StaticEnum, TEXT("EPositionIncludedOffsets"), &Z_Registration_Info_UEnum_EPositionIncludedOffsets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3757274064U) },
		{ ELocalPositionOrigin_StaticEnum, TEXT("ELocalPositionOrigin"), &Z_Registration_Info_UEnum_ELocalPositionOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2846830579U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLocalPosition, UMaterialExpressionLocalPosition::StaticClass, TEXT("UMaterialExpressionLocalPosition"), &Z_Registration_Info_UClass_UMaterialExpressionLocalPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLocalPosition), 1169632111U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_3245944175(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
