// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/SimpleSingleClickGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleSingleClickGizmo() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USimpleSingleClickGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USimpleSingleClickGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class USimpleSingleClickGizmo
void USimpleSingleClickGizmo::StaticRegisterNativesUSimpleSingleClickGizmo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleSingleClickGizmo);
UClass* Z_Construct_UClass_USimpleSingleClickGizmo_NoRegister()
{
	return USimpleSingleClickGizmo::StaticClass();
}
struct Z_Construct_UClass_USimpleSingleClickGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple gizmo that triggers an OnClicked callback when it is clicked.\n */" },
		{ "IncludePath", "BaseGizmos/SimpleSingleClickGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/SimpleSingleClickGizmo.h" },
		{ "ToolTip", "Simple gizmo that triggers an OnClicked callback when it is clicked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[] = {
		{ "Comment", "/** The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/SimpleSingleClickGizmo.h" },
		{ "ToolTip", "The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickBehavior_MetaData[] = {
		{ "Comment", "/** The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/SimpleSingleClickGizmo.h" },
		{ "ToolTip", "The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HitTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleSingleClickGizmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USimpleSingleClickGizmo_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleSingleClickGizmo, HitTarget), Z_Construct_UClass_UGizmoClickTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitTarget_MetaData), NewProp_HitTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleSingleClickGizmo_Statics::NewProp_ClickBehavior = { "ClickBehavior", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleSingleClickGizmo, ClickBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickBehavior_MetaData), NewProp_ClickBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleSingleClickGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleSingleClickGizmo_Statics::NewProp_HitTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleSingleClickGizmo_Statics::NewProp_ClickBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleSingleClickGizmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleSingleClickGizmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleSingleClickGizmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleSingleClickGizmo_Statics::ClassParams = {
	&USimpleSingleClickGizmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleSingleClickGizmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleSingleClickGizmo_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleSingleClickGizmo_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleSingleClickGizmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleSingleClickGizmo()
{
	if (!Z_Registration_Info_UClass_USimpleSingleClickGizmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleSingleClickGizmo.OuterSingleton, Z_Construct_UClass_USimpleSingleClickGizmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleSingleClickGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USimpleSingleClickGizmo>()
{
	return USimpleSingleClickGizmo::StaticClass();
}
USimpleSingleClickGizmo::USimpleSingleClickGizmo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleSingleClickGizmo);
USimpleSingleClickGizmo::~USimpleSingleClickGizmo() {}
// End Class USimpleSingleClickGizmo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleSingleClickGizmo, USimpleSingleClickGizmo::StaticClass, TEXT("USimpleSingleClickGizmo"), &Z_Registration_Info_UClass_USimpleSingleClickGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleSingleClickGizmo), 33860773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_1293730737(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
