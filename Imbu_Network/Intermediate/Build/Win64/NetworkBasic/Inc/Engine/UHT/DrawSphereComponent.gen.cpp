// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/DrawSphereComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawSphereComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent();
ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDrawSphereComponent
void UDrawSphereComponent::StaticRegisterNativesUDrawSphereComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawSphereComponent);
UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister()
{
	return UDrawSphereComponent::StaticClass();
}
struct Z_Construct_UClass_UDrawSphereComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * A sphere generally used for simple collision. Bounds are rendered as lines in the editor.\n */" },
		{ "HideCategories", "Object Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/DrawSphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/DrawSphereComponent.h" },
		{ "ToolTip", "A sphere generally used for simple collision. Bounds are rendered as lines in the editor." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawSphereComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDrawSphereComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USphereComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawSphereComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawSphereComponent_Statics::ClassParams = {
	&UDrawSphereComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawSphereComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawSphereComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawSphereComponent()
{
	if (!Z_Registration_Info_UClass_UDrawSphereComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawSphereComponent.OuterSingleton, Z_Construct_UClass_UDrawSphereComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawSphereComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDrawSphereComponent>()
{
	return UDrawSphereComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawSphereComponent);
UDrawSphereComponent::~UDrawSphereComponent() {}
// End Class UDrawSphereComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrawSphereComponent, UDrawSphereComponent::StaticClass, TEXT("UDrawSphereComponent"), &Z_Registration_Info_UClass_UDrawSphereComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawSphereComponent), 1167597764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_3971137065(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
