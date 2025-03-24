// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionBindlessSwitch.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBindlessSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBindlessSwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBindlessSwitch_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionBindlessSwitch
void UMaterialExpressionBindlessSwitch::StaticRegisterNativesUMaterialExpressionBindlessSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBindlessSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionBindlessSwitch_NoRegister()
{
	return UMaterialExpressionBindlessSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionBindlessSwitch.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionBindlessSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionBindlessSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering without bindless support" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bindless_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionBindlessSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering with bindless support" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bindless;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBindlessSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBindlessSwitch, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::NewProp_Bindless = { "Bindless", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBindlessSwitch, Bindless), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bindless_MetaData), NewProp_Bindless_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::NewProp_Bindless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::ClassParams = {
	&UMaterialExpressionBindlessSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionBindlessSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBindlessSwitch>()
{
	return UMaterialExpressionBindlessSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBindlessSwitch);
UMaterialExpressionBindlessSwitch::~UMaterialExpressionBindlessSwitch() {}
// End Class UMaterialExpressionBindlessSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBindlessSwitch, UMaterialExpressionBindlessSwitch::StaticClass, TEXT("UMaterialExpressionBindlessSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBindlessSwitch), 432038782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_1168605396(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
