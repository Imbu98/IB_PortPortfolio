// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/GeneratedBlueprintDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedBlueprintDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
ENGINE_API UClass* Z_Construct_UClass_UGeneratedBlueprintBinding();
ENGINE_API UClass* Z_Construct_UClass_UGeneratedBlueprintBinding_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FGeneratedBlueprintDelegateBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeneratedBlueprintDelegateBinding;
class UScriptStruct* FGeneratedBlueprintDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeneratedBlueprintDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeneratedBlueprintDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GeneratedBlueprintDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_GeneratedBlueprintDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGeneratedBlueprintDelegateBinding>()
{
	return FGeneratedBlueprintDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Entry for a delegate to assign after a blueprint has been instanced \n * \n * For this class we assume the delegate has been generated and exists on BPGC instance itself\n */" },
		{ "ModuleRelativePath", "Classes/Engine/GeneratedBlueprintDelegateBinding.h" },
		{ "ToolTip", "Entry for a delegate to assign after a blueprint has been instanced\n\nFor this class we assume the delegate has been generated and exists on BPGC instance itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[] = {
		{ "Comment", "/** Name of property on the component that we want to assign to. */" },
		{ "ModuleRelativePath", "Classes/Engine/GeneratedBlueprintDelegateBinding.h" },
		{ "ToolTip", "Name of property on the component that we want to assign to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "Comment", "/** Name of function that we want to bind to the delegate. */" },
		{ "ModuleRelativePath", "Classes/Engine/GeneratedBlueprintDelegateBinding.h" },
		{ "ToolTip", "Name of function that we want to bind to the delegate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneratedBlueprintDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneratedBlueprintDelegateBinding, DelegatePropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelegatePropertyName_MetaData), NewProp_DelegatePropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneratedBlueprintDelegateBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::NewProp_DelegatePropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::NewProp_FunctionNameToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"GeneratedBlueprintDelegateBinding",
	Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::PropPointers),
	sizeof(FGeneratedBlueprintDelegateBinding),
	alignof(FGeneratedBlueprintDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_GeneratedBlueprintDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeneratedBlueprintDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeneratedBlueprintDelegateBinding.InnerSingleton;
}
// End ScriptStruct FGeneratedBlueprintDelegateBinding

// Begin Class UGeneratedBlueprintBinding
void UGeneratedBlueprintBinding::StaticRegisterNativesUGeneratedBlueprintBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeneratedBlueprintBinding);
UClass* Z_Construct_UClass_UGeneratedBlueprintBinding_NoRegister()
{
	return UGeneratedBlueprintBinding::StaticClass();
}
struct Z_Construct_UClass_UGeneratedBlueprintBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Binding used for event nodes generated at runtime.\n */" },
		{ "IncludePath", "Engine/GeneratedBlueprintDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/GeneratedBlueprintDelegateBinding.h" },
		{ "ToolTip", "Binding used for event nodes generated at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedBlueprintBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GeneratedBlueprintDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedBlueprintBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedBlueprintBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratedBlueprintBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::NewProp_GeneratedBlueprintBindings_Inner = { "GeneratedBlueprintBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding, METADATA_PARAMS(0, nullptr) }; // 3934260743
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::NewProp_GeneratedBlueprintBindings = { "GeneratedBlueprintBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneratedBlueprintBinding, GeneratedBlueprintBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedBlueprintBindings_MetaData), NewProp_GeneratedBlueprintBindings_MetaData) }; // 3934260743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::NewProp_GeneratedBlueprintBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::NewProp_GeneratedBlueprintBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::ClassParams = {
	&UGeneratedBlueprintBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeneratedBlueprintBinding()
{
	if (!Z_Registration_Info_UClass_UGeneratedBlueprintBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneratedBlueprintBinding.OuterSingleton, Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeneratedBlueprintBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UGeneratedBlueprintBinding>()
{
	return UGeneratedBlueprintBinding::StaticClass();
}
UGeneratedBlueprintBinding::UGeneratedBlueprintBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratedBlueprintBinding);
UGeneratedBlueprintBinding::~UGeneratedBlueprintBinding() {}
// End Class UGeneratedBlueprintBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeneratedBlueprintDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::NewStructOps, TEXT("GeneratedBlueprintDelegateBinding"), &Z_Registration_Info_UScriptStruct_GeneratedBlueprintDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeneratedBlueprintDelegateBinding), 3934260743U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeneratedBlueprintBinding, UGeneratedBlueprintBinding::StaticClass, TEXT("UGeneratedBlueprintBinding"), &Z_Registration_Info_UClass_UGeneratedBlueprintBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneratedBlueprintBinding), 134124651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_2912871326(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
