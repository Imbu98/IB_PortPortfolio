// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraRigProxyAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigProxyAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyAsset();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraRigProxyAsset
void UCameraRigProxyAsset::StaticRegisterNativesUCameraRigProxyAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRigProxyAsset);
UClass* Z_Construct_UClass_UCameraRigProxyAsset_NoRegister()
{
	return UCameraRigProxyAsset::StaticClass();
}
struct Z_Construct_UClass_UCameraRigProxyAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A proxy for a camera rig asset.\n *\n * This is useful for indicating that a camera rig should be activated in a camera director,\n * but without hard-referencing a particular camera rig. This way, that camera director can\n * be used by multiple cameras with their own camera rigs.\n */" },
		{ "IncludePath", "Core/CameraRigProxyAsset.h" },
		{ "ModuleRelativePath", "Public/Core/CameraRigProxyAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A proxy for a camera rig asset.\n\nThis is useful for indicating that a camera rig should be activated in a camera director,\nbut without hard-referencing a particular camera rig. This way, that camera director can\nbe used by multiple cameras with their own camera rigs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Comment", "/** Unique identifier for this camera rig proxy. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigProxyAsset.h" },
		{ "ToolTip", "Unique identifier for this camera rig proxy." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraRigProxyAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigProxyAsset_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigProxyAsset, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraRigProxyAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigProxyAsset_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigProxyAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraRigProxyAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigProxyAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRigProxyAsset_Statics::ClassParams = {
	&UCameraRigProxyAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraRigProxyAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigProxyAsset_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigProxyAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRigProxyAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraRigProxyAsset()
{
	if (!Z_Registration_Info_UClass_UCameraRigProxyAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRigProxyAsset.OuterSingleton, Z_Construct_UClass_UCameraRigProxyAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraRigProxyAsset.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraRigProxyAsset>()
{
	return UCameraRigProxyAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRigProxyAsset);
UCameraRigProxyAsset::~UCameraRigProxyAsset() {}
// End Class UCameraRigProxyAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraRigProxyAsset, UCameraRigProxyAsset::StaticClass, TEXT("UCameraRigProxyAsset"), &Z_Registration_Info_UClass_UCameraRigProxyAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRigProxyAsset), 3479280004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_2991001611(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
