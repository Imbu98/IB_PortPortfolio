// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/GameplayCameraSystemHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCameraSystemHost() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemHost();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UGameplayCameraSystemHost
void UGameplayCameraSystemHost::StaticRegisterNativesUGameplayCameraSystemHost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCameraSystemHost);
UClass* Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister()
{
	return UGameplayCameraSystemHost::StaticClass();
}
struct Z_Construct_UClass_UGameplayCameraSystemHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class that hosts a camera system evaluator so that it can be accessed in a game world.\n *\n * The host doesn't stay alive very long if nothing references it. Gameplay camera components and actors\n * are meant to hold a reference to it while they use it. When nobody uses it, the host is meant to be\n * collectable by the GC.\n */" },
		{ "IncludePath", "GameFramework/GameplayCameraSystemHost.h" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemHost.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class that hosts a camera system evaluator so that it can be accessed in a game world.\n\nThe host doesn't stay alive very long if nothing references it. Gameplay camera components and actors\nare meant to hold a reference to it while they use it. When nobody uses it, the host is meant to be\ncollectable by the GC." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCameraSystemHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayCameraSystemHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraSystemHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCameraSystemHost_Statics::ClassParams = {
	&UGameplayCameraSystemHost::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraSystemHost_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCameraSystemHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCameraSystemHost()
{
	if (!Z_Registration_Info_UClass_UGameplayCameraSystemHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCameraSystemHost.OuterSingleton, Z_Construct_UClass_UGameplayCameraSystemHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCameraSystemHost.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UGameplayCameraSystemHost>()
{
	return UGameplayCameraSystemHost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCameraSystemHost);
UGameplayCameraSystemHost::~UGameplayCameraSystemHost() {}
// End Class UGameplayCameraSystemHost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemHost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCameraSystemHost, UGameplayCameraSystemHost::StaticClass, TEXT("UGameplayCameraSystemHost"), &Z_Registration_Info_UClass_UGameplayCameraSystemHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCameraSystemHost), 1145792221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemHost_h_2754127411(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemHost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
