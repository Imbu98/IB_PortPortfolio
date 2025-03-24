// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Transitions/DefaultTransitionConditions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultTransitionConditions() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigTransitionCondition();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UIsCameraRigTransitionCondition();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UIsCameraRigTransitionCondition_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UIsCameraRigTransitionCondition
void UIsCameraRigTransitionCondition::StaticRegisterNativesUIsCameraRigTransitionCondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsCameraRigTransitionCondition);
UClass* Z_Construct_UClass_UIsCameraRigTransitionCondition_NoRegister()
{
	return UIsCameraRigTransitionCondition::StaticClass();
}
struct Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A transition condition that matches the previous and/or next camera rigs against\n * one of the owning camera asset's rigs.\n */" },
		{ "IncludePath", "Transitions/DefaultTransitionConditions.h" },
		{ "ModuleRelativePath", "Public/Transitions/DefaultTransitionConditions.h" },
		{ "ToolTip", "A transition condition that matches the previous and/or next camera rigs against\none of the owning camera asset's rigs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousCameraRig_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Passes if null, or equal to the previous camera rig. */" },
		{ "ModuleRelativePath", "Public/Transitions/DefaultTransitionConditions.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "Passes if null, or equal to the previous camera rig." },
		{ "UseSelfCameraRigPicker", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextCameraRig_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Passes if null, or equal to the next camera rig. */" },
		{ "ModuleRelativePath", "Public/Transitions/DefaultTransitionConditions.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "Passes if null, or equal to the next camera rig." },
		{ "UseSelfCameraRigPicker", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousCameraRig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextCameraRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsCameraRigTransitionCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::NewProp_PreviousCameraRig = { "PreviousCameraRig", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsCameraRigTransitionCondition, PreviousCameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousCameraRig_MetaData), NewProp_PreviousCameraRig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::NewProp_NextCameraRig = { "NextCameraRig", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsCameraRigTransitionCondition, NextCameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextCameraRig_MetaData), NewProp_NextCameraRig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::NewProp_PreviousCameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::NewProp_NextCameraRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraRigTransitionCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::ClassParams = {
	&UIsCameraRigTransitionCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsCameraRigTransitionCondition()
{
	if (!Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.OuterSingleton, Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UIsCameraRigTransitionCondition>()
{
	return UIsCameraRigTransitionCondition::StaticClass();
}
UIsCameraRigTransitionCondition::UIsCameraRigTransitionCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsCameraRigTransitionCondition);
UIsCameraRigTransitionCondition::~UIsCameraRigTransitionCondition() {}
// End Class UIsCameraRigTransitionCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsCameraRigTransitionCondition, UIsCameraRigTransitionCondition::StaticClass, TEXT("UIsCameraRigTransitionCondition"), &Z_Registration_Info_UClass_UIsCameraRigTransitionCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsCameraRigTransitionCondition), 53176105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_937275101(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
