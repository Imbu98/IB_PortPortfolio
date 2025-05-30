// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_Cooldown.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Cooldown() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Cooldown();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Cooldown_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Float();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_Cooldown
void UBTDecorator_Cooldown::StaticRegisterNativesUBTDecorator_Cooldown()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_Cooldown);
UClass* Z_Construct_UClass_UBTDecorator_Cooldown_NoRegister()
{
	return UBTDecorator_Cooldown::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_Cooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooldown decorator node.\n * A decorator node that bases its condition on whether a cooldown timer has expired.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_Cooldown.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Cooldown.h" },
		{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether a cooldown timer has expired." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolDownTime_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** max allowed time for execution of underlying node */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Cooldown.h" },
		{ "ToolTip", "max allowed time for execution of underlying node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoolDownTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_Cooldown>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_Cooldown_Statics::NewProp_CoolDownTime = { "CoolDownTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Cooldown, CoolDownTime), Z_Construct_UScriptStruct_FValueOrBBKey_Float, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolDownTime_MetaData), NewProp_CoolDownTime_MetaData) }; // 4044354920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_Cooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Cooldown_Statics::NewProp_CoolDownTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Cooldown_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_Cooldown_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Cooldown_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_Cooldown_Statics::ClassParams = {
	&UBTDecorator_Cooldown::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_Cooldown_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Cooldown_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Cooldown_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_Cooldown_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_Cooldown()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_Cooldown.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_Cooldown.OuterSingleton, Z_Construct_UClass_UBTDecorator_Cooldown_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_Cooldown.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_Cooldown>()
{
	return UBTDecorator_Cooldown::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Cooldown);
UBTDecorator_Cooldown::~UBTDecorator_Cooldown() {}
// End Class UBTDecorator_Cooldown

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_Cooldown, UBTDecorator_Cooldown::StaticClass, TEXT("UBTDecorator_Cooldown"), &Z_Registration_Info_UClass_UBTDecorator_Cooldown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_Cooldown), 2039114142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_3867513542(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
