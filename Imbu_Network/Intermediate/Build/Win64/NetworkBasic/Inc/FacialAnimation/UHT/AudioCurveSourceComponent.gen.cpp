// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacialAnimation/Public/AudioCurveSourceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCurveSourceComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister();
FACIALANIMATION_API UClass* Z_Construct_UClass_UAudioCurveSourceComponent();
FACIALANIMATION_API UClass* Z_Construct_UClass_UAudioCurveSourceComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FacialAnimation();
// End Cross Module References

// Begin Class UAudioCurveSourceComponent
void UAudioCurveSourceComponent::StaticRegisterNativesUAudioCurveSourceComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioCurveSourceComponent);
UClass* Z_Construct_UClass_UAudioCurveSourceComponent_NoRegister()
{
	return UAudioCurveSourceComponent::StaticClass();
}
struct Z_Construct_UClass_UAudioCurveSourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "Comment", "/** An audio component that also provides curves to drive animation */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "AudioCurveSourceComponent.h" },
		{ "ModuleRelativePath", "Public/AudioCurveSourceComponent.h" },
		{ "ToolTip", "An audio component that also provides curves to drive animation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveSourceBindingName_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** \n\x09 * Get the name that this curve source can be bound to by.\n\x09 * Clients of this curve source will use this name to identify this source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AudioCurveSourceComponent.h" },
		{ "ToolTip", "Get the name that this curve source can be bound to by.\nClients of this curve source will use this name to identify this source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveSyncOffset_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Offset in time applied to audio position when evaluating curves */" },
		{ "ModuleRelativePath", "Public/AudioCurveSourceComponent.h" },
		{ "ToolTip", "Offset in time applied to audio position when evaluating curves" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveSourceBindingName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveSyncOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCurveSourceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSourceBindingName = { "CurveSourceBindingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioCurveSourceComponent, CurveSourceBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveSourceBindingName_MetaData), NewProp_CurveSourceBindingName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSyncOffset = { "CurveSyncOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioCurveSourceComponent, CurveSyncOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveSyncOffset_MetaData), NewProp_CurveSyncOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioCurveSourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSourceBindingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCurveSourceComponent_Statics::NewProp_CurveSyncOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioCurveSourceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FacialAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAudioCurveSourceComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCurveSourceInterface_NoRegister, (int32)VTABLE_OFFSET(UAudioCurveSourceComponent, ICurveSourceInterface), false },  // 3101867631
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioCurveSourceComponent_Statics::ClassParams = {
	&UAudioCurveSourceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioCurveSourceComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCurveSourceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioCurveSourceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioCurveSourceComponent()
{
	if (!Z_Registration_Info_UClass_UAudioCurveSourceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioCurveSourceComponent.OuterSingleton, Z_Construct_UClass_UAudioCurveSourceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioCurveSourceComponent.OuterSingleton;
}
template<> FACIALANIMATION_API UClass* StaticClass<UAudioCurveSourceComponent>()
{
	return UAudioCurveSourceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCurveSourceComponent);
UAudioCurveSourceComponent::~UAudioCurveSourceComponent() {}
// End Class UAudioCurveSourceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioCurveSourceComponent, UAudioCurveSourceComponent::StaticClass, TEXT("UAudioCurveSourceComponent"), &Z_Registration_Info_UClass_UAudioCurveSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioCurveSourceComponent), 1211784928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_2369506283(TEXT("/Script/FacialAnimation"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
