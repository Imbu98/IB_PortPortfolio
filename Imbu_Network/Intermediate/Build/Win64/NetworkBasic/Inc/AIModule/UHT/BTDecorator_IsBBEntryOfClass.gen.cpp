// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsBBEntryOfClass() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Class();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_IsBBEntryOfClass
void UBTDecorator_IsBBEntryOfClass::StaticRegisterNativesUBTDecorator_IsBBEntryOfClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_IsBBEntryOfClass);
UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_NoRegister()
{
	return UBTDecorator_IsBBEntryOfClass::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestClass_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsBBEntryOfClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass = { "TestClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_IsBBEntryOfClass, TestClass), Z_Construct_UScriptStruct_FValueOrBBKey_Class, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestClass_MetaData), NewProp_TestClass_MetaData) }; // 2395019718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::ClassParams = {
	&UBTDecorator_IsBBEntryOfClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.OuterSingleton, Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_IsBBEntryOfClass>()
{
	return UBTDecorator_IsBBEntryOfClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsBBEntryOfClass);
UBTDecorator_IsBBEntryOfClass::~UBTDecorator_IsBBEntryOfClass() {}
// End Class UBTDecorator_IsBBEntryOfClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsBBEntryOfClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass, UBTDecorator_IsBBEntryOfClass::StaticClass, TEXT("UBTDecorator_IsBBEntryOfClass"), &Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_IsBBEntryOfClass), 1974837194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsBBEntryOfClass_h_3812567572(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsBBEntryOfClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_IsBBEntryOfClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
