// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/ComponentBoundTransformProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentBoundTransformProxy() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UComponentBoundTransformProxy();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UComponentBoundTransformProxy_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UComponentBoundTransformProxy
void UComponentBoundTransformProxy::StaticRegisterNativesUComponentBoundTransformProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentBoundTransformProxy);
UClass* Z_Construct_UClass_UComponentBoundTransformProxy_NoRegister()
{
	return UComponentBoundTransformProxy::StaticClass();
}
struct Z_Construct_UClass_UComponentBoundTransformProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A variant of a transform proxy whose transform is always bound to a particular component. This means \n *  that if the component is moved as a result of its parents moving, the proxy will get that transform\n *  when queried. This makes the transform proxy very useful for being bound to sub gizmos that are moved\n *  by some parent gizmo. SetTransform will cause the proxy to set the transform on the bound component\n *  even if it is not part of its component set (to stay matched with the component) so AddComponent is\n *  not necessary for the bound component (nor is it likely to be used with this proxy, see below).\n * \n * This class is mainly intended to be bound to a single component and used for its delegates. It can\n *  still be used for the multi-component movement functionality of a transform proxy, but it is worth\n *  noting in that case that if the bound component is moved by its parent, the other components won't\n *  necessarily be moved unless SetTransform() is called on the proxy (or they happen to be parented in\n *  the same subtree).\n */" },
		{ "IncludePath", "BaseGizmos/ComponentBoundTransformProxy.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ComponentBoundTransformProxy.h" },
		{ "ToolTip", "A variant of a transform proxy whose transform is always bound to a particular component. This means\n that if the component is moved as a result of its parents moving, the proxy will get that transform\n when queried. This makes the transform proxy very useful for being bound to sub gizmos that are moved\n by some parent gizmo. SetTransform will cause the proxy to set the transform on the bound component\n even if it is not part of its component set (to stay matched with the component) so AddComponent is\n not necessary for the bound component (nor is it likely to be used with this proxy, see below).\n\nThis class is mainly intended to be bound to a single component and used for its delegates. It can\n still be used for the multi-component movement functionality of a transform proxy, but it is worth\n noting in that case that if the bound component is moved by its parent, the other components won't\n necessarily be moved unless SetTransform() is called on the proxy (or they happen to be parented in\n the same subtree)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentBoundTransformProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UComponentBoundTransformProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTransformProxy,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentBoundTransformProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentBoundTransformProxy_Statics::ClassParams = {
	&UComponentBoundTransformProxy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentBoundTransformProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UComponentBoundTransformProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComponentBoundTransformProxy()
{
	if (!Z_Registration_Info_UClass_UComponentBoundTransformProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentBoundTransformProxy.OuterSingleton, Z_Construct_UClass_UComponentBoundTransformProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComponentBoundTransformProxy.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UComponentBoundTransformProxy>()
{
	return UComponentBoundTransformProxy::StaticClass();
}
UComponentBoundTransformProxy::UComponentBoundTransformProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentBoundTransformProxy);
UComponentBoundTransformProxy::~UComponentBoundTransformProxy() {}
// End Class UComponentBoundTransformProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComponentBoundTransformProxy, UComponentBoundTransformProxy::StaticClass, TEXT("UComponentBoundTransformProxy"), &Z_Registration_Info_UClass_UComponentBoundTransformProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentBoundTransformProxy), 1323991864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_1798137283(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
