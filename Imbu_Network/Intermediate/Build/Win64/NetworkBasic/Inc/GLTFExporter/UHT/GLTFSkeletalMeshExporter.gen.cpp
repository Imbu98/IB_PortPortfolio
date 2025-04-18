// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFSkeletalMeshExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFSkeletalMeshExporter() {}

// Begin Cross Module References
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFSkeletalMeshExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFSkeletalMeshExporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Class UGLTFSkeletalMeshExporter
void UGLTFSkeletalMeshExporter::StaticRegisterNativesUGLTFSkeletalMeshExporter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFSkeletalMeshExporter);
UClass* Z_Construct_UClass_UGLTFSkeletalMeshExporter_NoRegister()
{
	return UGLTFSkeletalMeshExporter::StaticClass();
}
struct Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFSkeletalMeshExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFSkeletalMeshExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFSkeletalMeshExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics::ClassParams = {
	&UGLTFSkeletalMeshExporter::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFSkeletalMeshExporter()
{
	if (!Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.OuterSingleton, Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFSkeletalMeshExporter>()
{
	return UGLTFSkeletalMeshExporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFSkeletalMeshExporter);
UGLTFSkeletalMeshExporter::~UGLTFSkeletalMeshExporter() {}
// End Class UGLTFSkeletalMeshExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFSkeletalMeshExporter, UGLTFSkeletalMeshExporter::StaticClass, TEXT("UGLTFSkeletalMeshExporter"), &Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFSkeletalMeshExporter), 964431486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_2813194446(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
