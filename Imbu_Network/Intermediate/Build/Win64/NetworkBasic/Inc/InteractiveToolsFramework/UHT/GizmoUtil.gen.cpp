// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoUtil() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class USimpleLambdaInteractiveGizmoBuilder
void USimpleLambdaInteractiveGizmoBuilder::StaticRegisterNativesUSimpleLambdaInteractiveGizmoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleLambdaInteractiveGizmoBuilder);
UClass* Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_NoRegister()
{
	return USimpleLambdaInteractiveGizmoBuilder::StaticClass();
}
struct Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Gizmo builder that simply calls a particular lambda when building a gizmo. Makes it easy to\n *  register gizmo build behavior without writing a new class.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoUtil.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoUtil.h" },
		{ "ToolTip", "Gizmo builder that simply calls a particular lambda when building a gizmo. Makes it easy to\n register gizmo build behavior without writing a new class." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleLambdaInteractiveGizmoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_Statics::ClassParams = {
	&USimpleLambdaInteractiveGizmoBuilder::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder()
{
	if (!Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.OuterSingleton, Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USimpleLambdaInteractiveGizmoBuilder>()
{
	return USimpleLambdaInteractiveGizmoBuilder::StaticClass();
}
USimpleLambdaInteractiveGizmoBuilder::USimpleLambdaInteractiveGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleLambdaInteractiveGizmoBuilder);
USimpleLambdaInteractiveGizmoBuilder::~USimpleLambdaInteractiveGizmoBuilder() {}
// End Class USimpleLambdaInteractiveGizmoBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoUtil_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleLambdaInteractiveGizmoBuilder, USimpleLambdaInteractiveGizmoBuilder::StaticClass, TEXT("USimpleLambdaInteractiveGizmoBuilder"), &Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleLambdaInteractiveGizmoBuilder), 368624414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoUtil_h_3558292903(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoUtil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoUtil_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
