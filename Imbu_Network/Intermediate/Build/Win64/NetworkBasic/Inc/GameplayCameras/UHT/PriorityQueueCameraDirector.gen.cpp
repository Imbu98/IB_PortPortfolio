// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Directors/PriorityQueueCameraDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePriorityQueueCameraDirector() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraDirector();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPriorityQueueCameraDirector();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPriorityQueueCameraDirector_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UPriorityQueueCameraDirector
void UPriorityQueueCameraDirector::StaticRegisterNativesUPriorityQueueCameraDirector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPriorityQueueCameraDirector);
UClass* Z_Construct_UClass_UPriorityQueueCameraDirector_NoRegister()
{
	return UPriorityQueueCameraDirector::StaticClass();
}
struct Z_Construct_UClass_UPriorityQueueCameraDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera director that holds multiple sub-directors, and runs the one that has the highest priority.\n */" },
		{ "IncludePath", "Directors/PriorityQueueCameraDirector.h" },
		{ "ModuleRelativePath", "Public/Directors/PriorityQueueCameraDirector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera director that holds multiple sub-directors, and runs the one that has the highest priority." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPriorityQueueCameraDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPriorityQueueCameraDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraDirector,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPriorityQueueCameraDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPriorityQueueCameraDirector_Statics::ClassParams = {
	&UPriorityQueueCameraDirector::StaticClass,
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
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPriorityQueueCameraDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_UPriorityQueueCameraDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPriorityQueueCameraDirector()
{
	if (!Z_Registration_Info_UClass_UPriorityQueueCameraDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPriorityQueueCameraDirector.OuterSingleton, Z_Construct_UClass_UPriorityQueueCameraDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPriorityQueueCameraDirector.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UPriorityQueueCameraDirector>()
{
	return UPriorityQueueCameraDirector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPriorityQueueCameraDirector);
UPriorityQueueCameraDirector::~UPriorityQueueCameraDirector() {}
// End Class UPriorityQueueCameraDirector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPriorityQueueCameraDirector, UPriorityQueueCameraDirector::StaticClass, TEXT("UPriorityQueueCameraDirector"), &Z_Registration_Info_UClass_UPriorityQueueCameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPriorityQueueCameraDirector), 1037552031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_717310580(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
