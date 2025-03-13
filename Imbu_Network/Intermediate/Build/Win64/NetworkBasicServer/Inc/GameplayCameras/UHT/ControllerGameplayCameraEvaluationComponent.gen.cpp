// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/ControllerGameplayCameraEvaluationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerGameplayCameraEvaluationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UControllerGameplayCameraEvaluationComponent
void UControllerGameplayCameraEvaluationComponent::StaticRegisterNativesUControllerGameplayCameraEvaluationComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControllerGameplayCameraEvaluationComponent);
UClass* Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_NoRegister()
{
	return UControllerGameplayCameraEvaluationComponent::StaticClass();
}
struct Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A component, attached to a player controller, that can run camera rigs activated from\n * a global place like the Blueprint functions inside UActivateCameraRigFunctions.\n */" },
		{ "IncludePath", "GameFramework/ControllerGameplayCameraEvaluationComponent.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ControllerGameplayCameraEvaluationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A component, attached to a player controller, that can run camera rigs activated from\na global place like the Blueprint functions inside UActivateCameraRigFunctions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSystemHost_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/ControllerGameplayCameraEvaluationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSystemHost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControllerGameplayCameraEvaluationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::NewProp_CameraSystemHost = { "CameraSystemHost", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControllerGameplayCameraEvaluationComponent, CameraSystemHost), Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSystemHost_MetaData), NewProp_CameraSystemHost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::NewProp_CameraSystemHost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::ClassParams = {
	&UControllerGameplayCameraEvaluationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::PropPointers),
	0,
	0x01A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent()
{
	if (!Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent.OuterSingleton, Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UControllerGameplayCameraEvaluationComponent>()
{
	return UControllerGameplayCameraEvaluationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControllerGameplayCameraEvaluationComponent);
UControllerGameplayCameraEvaluationComponent::~UControllerGameplayCameraEvaluationComponent() {}
// End Class UControllerGameplayCameraEvaluationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ControllerGameplayCameraEvaluationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControllerGameplayCameraEvaluationComponent, UControllerGameplayCameraEvaluationComponent::StaticClass, TEXT("UControllerGameplayCameraEvaluationComponent"), &Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControllerGameplayCameraEvaluationComponent), 813354173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ControllerGameplayCameraEvaluationComponent_h_2353372196(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ControllerGameplayCameraEvaluationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ControllerGameplayCameraEvaluationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
