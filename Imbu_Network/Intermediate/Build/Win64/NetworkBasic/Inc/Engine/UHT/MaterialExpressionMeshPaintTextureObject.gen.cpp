// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionMeshPaintTextureObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMeshPaintTextureObject() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionMeshPaintTextureObject
void UMaterialExpressionMeshPaintTextureObject::StaticRegisterNativesUMaterialExpressionMeshPaintTextureObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMeshPaintTextureObject);
UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject_NoRegister()
{
	return UMaterialExpressionMeshPaintTextureObject::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMeshPaintTextureObject.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionMeshPaintTextureObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMeshPaintTextureObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject_Statics::ClassParams = {
	&UMaterialExpressionMeshPaintTextureObject::StaticClass,
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
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMeshPaintTextureObject>()
{
	return UMaterialExpressionMeshPaintTextureObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMeshPaintTextureObject);
UMaterialExpressionMeshPaintTextureObject::~UMaterialExpressionMeshPaintTextureObject() {}
// End Class UMaterialExpressionMeshPaintTextureObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMeshPaintTextureObject, UMaterialExpressionMeshPaintTextureObject::StaticClass, TEXT("UMaterialExpressionMeshPaintTextureObject"), &Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMeshPaintTextureObject), 1081341679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureObject_h_2580404916(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
