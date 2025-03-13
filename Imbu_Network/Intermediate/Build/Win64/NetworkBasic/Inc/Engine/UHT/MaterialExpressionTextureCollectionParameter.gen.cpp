// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionTextureCollectionParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureCollectionParameter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCollection();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureCollectionParameter
void UMaterialExpressionTextureCollectionParameter::StaticRegisterNativesUMaterialExpressionTextureCollectionParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureCollectionParameter);
UClass* Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_NoRegister()
{
	return UMaterialExpressionTextureCollectionParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureCollectionParameter.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCollectionParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCollectionParameter" },
		{ "Comment", "/** The name of the parameter */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCollectionParameter.h" },
		{ "ToolTip", "The name of the parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
		{ "Comment", "/** GUID that should be unique within the material, this is used for parameter renaming. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCollectionParameter.h" },
		{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCollectionParameter" },
		{ "Comment", "/** The name of the parameter Group to display in MaterialInstance Editor. Default is None group */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCollectionParameter.h" },
		{ "ToolTip", "The name of the parameter Group to display in MaterialInstance Editor. Default is None group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCollectionParameter" },
		{ "Comment", "/** Controls where the this parameter is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCollectionParameter.h" },
		{ "ToolTip", "Controls where the this parameter is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureCollectionParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureCollectionParameter, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureCollectionParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGUID_MetaData), NewProp_ExpressionGUID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureCollectionParameter, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureCollectionParameter, SortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortPriority_MetaData), NewProp_SortPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::NewProp_ExpressionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::NewProp_SortPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureCollection,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::ClassParams = {
	&UMaterialExpressionTextureCollectionParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureCollectionParameter>()
{
	return UMaterialExpressionTextureCollectionParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureCollectionParameter);
UMaterialExpressionTextureCollectionParameter::~UMaterialExpressionTextureCollectionParameter() {}
// End Class UMaterialExpressionTextureCollectionParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollectionParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureCollectionParameter, UMaterialExpressionTextureCollectionParameter::StaticClass, TEXT("UMaterialExpressionTextureCollectionParameter"), &Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureCollectionParameter), 4204808827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollectionParameter_h_519999379(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollectionParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCollectionParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
