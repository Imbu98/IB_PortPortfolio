// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/TransformProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UTransformProxy
void UTransformProxy::StaticRegisterNativesUTransformProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformProxy);
UClass* Z_Construct_UClass_UTransformProxy_NoRegister()
{
	return UTransformProxy::StaticClass();
}
struct Z_Construct_UClass_UTransformProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UTransformProxy is used to transform a set of sub-objects. An internal\n * FTransform is generated based on the sub-object set, and the relative\n * FTransform of each sub-object is stored. Then as this main transform\n * is updated, the sub-objects are also updated.\n * \n * Currently only USceneComponent sub-objects are supported.\n * \n * If only one sub-object is set, the main transform is the sub-object transform.\n * Otherwise the main transform is centered at the average origin and\n * has no rotation.\n */" },
		{ "IncludePath", "BaseGizmos/TransformProxy.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "UTransformProxy is used to transform a set of sub-objects. An internal\nFTransform is generated based on the sub-object set, and the relative\nFTransform of each sub-object is stored. Then as this main transform\nis updated, the sub-objects are also updated.\n\nCurrently only USceneComponent sub-objects are supported.\n\nIf only one sub-object is set, the main transform is the sub-object transform.\nOtherwise the main transform is centered at the average origin and\nhas no rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotatePerObject_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, relative rotation of shared transform is applied to objects before relative translation (ie they rotate in place)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "If true, relative rotation of shared transform is applied to objects before relative translation (ie they rotate in place)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetPivotMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then on SetTransform() the components are not moved, and their local transforms are recalculated\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "If true, then on SetTransform() the components are not moved, and their local transforms are recalculated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedTransform_MetaData[] = {
		{ "Comment", "/** The main transform */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "The main transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSharedTransform_MetaData[] = {
		{ "Comment", "/** The main transform */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformProxy.h" },
		{ "ToolTip", "The main transform" },
	};
#endif // WITH_METADATA
	static void NewProp_bRotatePerObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotatePerObject;
	static void NewProp_bSetPivotMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetPivotMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SharedTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialSharedTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject_SetBit(void* Obj)
{
	((UTransformProxy*)Obj)->bRotatePerObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject = { "bRotatePerObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransformProxy), &Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotatePerObject_MetaData), NewProp_bRotatePerObject_MetaData) };
void Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode_SetBit(void* Obj)
{
	((UTransformProxy*)Obj)->bSetPivotMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode = { "bSetPivotMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransformProxy), &Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetPivotMode_MetaData), NewProp_bSetPivotMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformProxy_Statics::NewProp_SharedTransform = { "SharedTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformProxy, SharedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedTransform_MetaData), NewProp_SharedTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformProxy_Statics::NewProp_InitialSharedTransform = { "InitialSharedTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransformProxy, InitialSharedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSharedTransform_MetaData), NewProp_InitialSharedTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformProxy_Statics::NewProp_bRotatePerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformProxy_Statics::NewProp_bSetPivotMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformProxy_Statics::NewProp_SharedTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformProxy_Statics::NewProp_InitialSharedTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransformProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformProxy_Statics::ClassParams = {
	&UTransformProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransformProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransformProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransformProxy()
{
	if (!Z_Registration_Info_UClass_UTransformProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformProxy.OuterSingleton, Z_Construct_UClass_UTransformProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransformProxy.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UTransformProxy>()
{
	return UTransformProxy::StaticClass();
}
UTransformProxy::UTransformProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformProxy);
UTransformProxy::~UTransformProxy() {}
// End Class UTransformProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransformProxy, UTransformProxy::StaticClass, TEXT("UTransformProxy"), &Z_Registration_Info_UClass_UTransformProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformProxy), 3604413937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_2366373836(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
