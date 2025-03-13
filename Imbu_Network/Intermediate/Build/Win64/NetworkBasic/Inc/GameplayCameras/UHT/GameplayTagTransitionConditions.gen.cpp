// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Transitions/GameplayTagTransitionConditions.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagTransitionConditions() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigTransitionCondition();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayTagTransitionCondition();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayTagTransitionCondition_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UGameplayTagTransitionCondition
void UGameplayTagTransitionCondition::StaticRegisterNativesUGameplayTagTransitionCondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagTransitionCondition);
UClass* Z_Construct_UClass_UGameplayTagTransitionCondition_NoRegister()
{
	return UGameplayTagTransitionCondition::StaticClass();
}
struct Z_Construct_UClass_UGameplayTagTransitionCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A transition condition that matches the gameplay tags on the previous and next\n * camera rigs and assets. Both queries need to pass. Empty queries pass by default.\n */" },
		{ "IncludePath", "Transitions/GameplayTagTransitionConditions.h" },
		{ "ModuleRelativePath", "Public/Transitions/GameplayTagTransitionConditions.h" },
		{ "ToolTip", "A transition condition that matches the gameplay tags on the previous and next\ncamera rigs and assets. Both queries need to pass. Empty queries pass by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousGameplayTagQuery_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** The gameplay tags to look for on the previous camera rig/asset. */" },
		{ "ModuleRelativePath", "Public/Transitions/GameplayTagTransitionConditions.h" },
		{ "ToolTip", "The gameplay tags to look for on the previous camera rig/asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextGameplayTagQuery_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** The gameplay tags to look for on the next camera rig/asset. */" },
		{ "ModuleRelativePath", "Public/Transitions/GameplayTagTransitionConditions.h" },
		{ "ToolTip", "The gameplay tags to look for on the next camera rig/asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousGameplayTagQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextGameplayTagQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagTransitionCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::NewProp_PreviousGameplayTagQuery = { "PreviousGameplayTagQuery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagTransitionCondition, PreviousGameplayTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousGameplayTagQuery_MetaData), NewProp_PreviousGameplayTagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::NewProp_NextGameplayTagQuery = { "NextGameplayTagQuery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagTransitionCondition, NextGameplayTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextGameplayTagQuery_MetaData), NewProp_NextGameplayTagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::NewProp_PreviousGameplayTagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::NewProp_NextGameplayTagQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraRigTransitionCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::ClassParams = {
	&UGameplayTagTransitionCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTagTransitionCondition()
{
	if (!Z_Registration_Info_UClass_UGameplayTagTransitionCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagTransitionCondition.OuterSingleton, Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagTransitionCondition.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UGameplayTagTransitionCondition>()
{
	return UGameplayTagTransitionCondition::StaticClass();
}
UGameplayTagTransitionCondition::UGameplayTagTransitionCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagTransitionCondition);
UGameplayTagTransitionCondition::~UGameplayTagTransitionCondition() {}
// End Class UGameplayTagTransitionCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagTransitionCondition, UGameplayTagTransitionCondition::StaticClass, TEXT("UGameplayTagTransitionCondition"), &Z_Registration_Info_UClass_UGameplayTagTransitionCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagTransitionCondition), 1635764611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_211239342(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
