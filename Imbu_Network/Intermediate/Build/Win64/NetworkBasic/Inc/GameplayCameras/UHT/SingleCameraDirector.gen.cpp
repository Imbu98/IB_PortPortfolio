// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Directors/SingleCameraDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleCameraDirector() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraDirector();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USingleCameraDirector();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USingleCameraDirector_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class USingleCameraDirector
void USingleCameraDirector::StaticRegisterNativesUSingleCameraDirector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleCameraDirector);
UClass* Z_Construct_UClass_USingleCameraDirector_NoRegister()
{
	return USingleCameraDirector::StaticClass();
}
struct Z_Construct_UClass_USingleCameraDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple camera director that only ever returns one single camera rig.\n */" },
		{ "IncludePath", "Directors/SingleCameraDirector.h" },
		{ "ModuleRelativePath", "Public/Directors/SingleCameraDirector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A simple camera director that only ever returns one single camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRig_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The camera rig to run every frame. */" },
		{ "ModuleRelativePath", "Public/Directors/SingleCameraDirector.h" },
		{ "ToolTip", "The camera rig to run every frame." },
		{ "UseSelfCameraRigPicker", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleCameraDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USingleCameraDirector_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USingleCameraDirector, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRig_MetaData), NewProp_CameraRig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleCameraDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleCameraDirector_Statics::NewProp_CameraRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleCameraDirector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USingleCameraDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraDirector,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleCameraDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleCameraDirector_Statics::ClassParams = {
	&USingleCameraDirector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USingleCameraDirector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USingleCameraDirector_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleCameraDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleCameraDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleCameraDirector()
{
	if (!Z_Registration_Info_UClass_USingleCameraDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleCameraDirector.OuterSingleton, Z_Construct_UClass_USingleCameraDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleCameraDirector.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<USingleCameraDirector>()
{
	return USingleCameraDirector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleCameraDirector);
USingleCameraDirector::~USingleCameraDirector() {}
// End Class USingleCameraDirector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_SingleCameraDirector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USingleCameraDirector, USingleCameraDirector::StaticClass, TEXT("USingleCameraDirector"), &Z_Registration_Info_UClass_USingleCameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleCameraDirector), 2917543561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_SingleCameraDirector_h_4159820552(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_SingleCameraDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_SingleCameraDirector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
