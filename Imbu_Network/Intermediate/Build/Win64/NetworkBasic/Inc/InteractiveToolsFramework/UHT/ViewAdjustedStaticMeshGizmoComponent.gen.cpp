// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/ViewAdjustedStaticMeshGizmoComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewAdjustedStaticMeshGizmoComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UViewAdjustedStaticMeshGizmoComponent
void UViewAdjustedStaticMeshGizmoComponent::StaticRegisterNativesUViewAdjustedStaticMeshGizmoComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewAdjustedStaticMeshGizmoComponent);
UClass* Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister()
{
	return UViewAdjustedStaticMeshGizmoComponent::StaticClass();
}
struct Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Gizmos" },
		{ "Comment", "/**\n * Version of a static mesh component that only takes the dynamic draw path and has the ability to\n * adjust the transform based on view information.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "BaseGizmos/ViewAdjustedStaticMeshGizmoComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ViewAdjustedStaticMeshGizmoComponent.h" },
		{ "ToolTip", "Version of a static mesh component that only takes the dynamic draw path and has the ability to\nadjust the transform based on view information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[] = {
		{ "Comment", "// Needed for proper line traces\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ViewAdjustedStaticMeshGizmoComponent.h" },
		{ "ToolTip", "Needed for proper line traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubstituteInteractionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ViewAdjustedStaticMeshGizmoComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverOverrideMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ViewAdjustedStaticMeshGizmoComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoViewContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubstituteInteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverOverrideMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewAdjustedStaticMeshGizmoComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewAdjustedStaticMeshGizmoComponent, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoViewContext_MetaData), NewProp_GizmoViewContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::NewProp_SubstituteInteractionComponent = { "SubstituteInteractionComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewAdjustedStaticMeshGizmoComponent, SubstituteInteractionComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubstituteInteractionComponent_MetaData), NewProp_SubstituteInteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::NewProp_HoverOverrideMaterial = { "HoverOverrideMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewAdjustedStaticMeshGizmoComponent, HoverOverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverOverrideMaterial_MetaData), NewProp_HoverOverrideMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::NewProp_GizmoViewContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::NewProp_SubstituteInteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::NewProp_HoverOverrideMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister, (int32)VTABLE_OFFSET(UViewAdjustedStaticMeshGizmoComponent, IGizmoBaseComponentInterface), false },  // 977231014
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::ClassParams = {
	&UViewAdjustedStaticMeshGizmoComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent()
{
	if (!Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.OuterSingleton, Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UViewAdjustedStaticMeshGizmoComponent>()
{
	return UViewAdjustedStaticMeshGizmoComponent::StaticClass();
}
UViewAdjustedStaticMeshGizmoComponent::UViewAdjustedStaticMeshGizmoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewAdjustedStaticMeshGizmoComponent);
UViewAdjustedStaticMeshGizmoComponent::~UViewAdjustedStaticMeshGizmoComponent() {}
// End Class UViewAdjustedStaticMeshGizmoComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent, UViewAdjustedStaticMeshGizmoComponent::StaticClass, TEXT("UViewAdjustedStaticMeshGizmoComponent"), &Z_Registration_Info_UClass_UViewAdjustedStaticMeshGizmoComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewAdjustedStaticMeshGizmoComponent), 2625094289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_2372952498(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
