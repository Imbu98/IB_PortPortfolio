// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlayAnimation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlayAnimation();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Bool();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Object();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_PlayAnimation
void UBTTask_PlayAnimation::StaticRegisterNativesUBTTask_PlayAnimation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PlayAnimation);
UClass* Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister()
{
	return UBTTask_PlayAnimation::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PlayAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Play indicated AnimationAsset on Pawn controlled by BT \n *\x09Note that this node is generic and is handing multiple special cases,\n *\x09If you want a more efficient solution you'll need to implement it yourself (or wait for our BTTask_PlayCharacterAnimation)\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ToolTip", "Play indicated AnimationAsset on Pawn controlled by BT\nNote that this node is generic and is handing multiple special cases,\nIf you want a more efficient solution you'll need to implement it yourself (or wait for our BTTask_PlayCharacterAnimation)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ToolTip", "Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Node" },
		{ "DisplayName", "Looping" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNonBlocking_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if true the task will just trigger the animation and instantly finish. Fire and Forget. */" },
		{ "DisplayName", "NonBlocking" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ToolTip", "if true the task will just trigger the animation and instantly finish. Fire and Forget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSkelMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationToPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bNonBlocking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedSkelMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlayAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayAnimation, AnimationToPlay), Z_Construct_UScriptStruct_FValueOrBBKey_Object, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationToPlay_MetaData), NewProp_AnimationToPlay_MetaData) }; // 2783390860
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayAnimation, bLooping), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking = { "bNonBlocking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayAnimation, bNonBlocking), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNonBlocking_MetaData), NewProp_bNonBlocking_MetaData) }; // 1056548058
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayAnimation, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyOwnerComp_MetaData), NewProp_MyOwnerComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh = { "CachedSkelMesh", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayAnimation, CachedSkelMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSkelMesh_MetaData), NewProp_CachedSkelMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_PlayAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::ClassParams = {
	&UBTTask_PlayAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PlayAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PlayAnimation()
{
	if (!Z_Registration_Info_UClass_UBTTask_PlayAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PlayAnimation.OuterSingleton, Z_Construct_UClass_UBTTask_PlayAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PlayAnimation.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_PlayAnimation>()
{
	return UBTTask_PlayAnimation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlayAnimation);
UBTTask_PlayAnimation::~UBTTask_PlayAnimation() {}
// End Class UBTTask_PlayAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PlayAnimation, UBTTask_PlayAnimation::StaticClass, TEXT("UBTTask_PlayAnimation"), &Z_Registration_Info_UClass_UBTTask_PlayAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PlayAnimation), 1675439014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_3169961023(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
