// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFLevelSequenceExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFLevelSequenceExporter() {}

// Begin Cross Module References
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelSequenceExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelSequenceExporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Class UGLTFLevelSequenceExporter
void UGLTFLevelSequenceExporter::StaticRegisterNativesUGLTFLevelSequenceExporter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFLevelSequenceExporter);
UClass* Z_Construct_UClass_UGLTFLevelSequenceExporter_NoRegister()
{
	return UGLTFLevelSequenceExporter::StaticClass();
}
struct Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFLevelSequenceExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFLevelSequenceExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFLevelSequenceExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::ClassParams = {
	&UGLTFLevelSequenceExporter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFLevelSequenceExporter()
{
	if (!Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.OuterSingleton, Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFLevelSequenceExporter>()
{
	return UGLTFLevelSequenceExporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFLevelSequenceExporter);
UGLTFLevelSequenceExporter::~UGLTFLevelSequenceExporter() {}
// End Class UGLTFLevelSequenceExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelSequenceExporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFLevelSequenceExporter, UGLTFLevelSequenceExporter::StaticClass, TEXT("UGLTFLevelSequenceExporter"), &Z_Registration_Info_UClass_UGLTFLevelSequenceExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFLevelSequenceExporter), 2805742370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelSequenceExporter_h_3375491234(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelSequenceExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelSequenceExporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
