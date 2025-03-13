// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_AGroomActor();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_AGroomActor_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Class AGroomActor
void AGroomActor::StaticRegisterNativesAGroomActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGroomActor);
UClass* Z_Construct_UClass_AGroomActor_NoRegister()
{
	return AGroomActor::StaticClass();
}
struct Z_Construct_UClass_AGroomActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** An actor that renders a simulated hair */" },
		{ "HideCategories", "Input Replication Mobility" },
		{ "IncludePath", "GroomActor.h" },
		{ "ModuleRelativePath", "Public/GroomActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An actor that renders a simulated hair" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomComponent_MetaData[] = {
		{ "Category", "StrandHair" },
		{ "Comment", "/** Strand hair component that performs simulation and rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomActor.h" },
		{ "ToolTip", "Strand hair component that performs simulation and rendering" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Billboard used to see the scene in the editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomActor.h" },
		{ "ToolTip", "Billboard used to see the scene in the editor" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroomActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroomActor_Statics::NewProp_GroomComponent = { "GroomComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroomActor, GroomComponent), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomComponent_MetaData), NewProp_GroomComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroomActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0124080800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroomActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGroomActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroomActor_Statics::NewProp_GroomComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroomActor_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroomActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGroomActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroomActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroomActor_Statics::ClassParams = {
	&AGroomActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGroomActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGroomActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGroomActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGroomActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGroomActor()
{
	if (!Z_Registration_Info_UClass_AGroomActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroomActor.OuterSingleton, Z_Construct_UClass_AGroomActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGroomActor.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<AGroomActor>()
{
	return AGroomActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGroomActor);
AGroomActor::~AGroomActor() {}
// End Class AGroomActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGroomActor, AGroomActor::StaticClass, TEXT("AGroomActor"), &Z_Registration_Info_UClass_AGroomActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroomActor), 923087478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_3450052054(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
