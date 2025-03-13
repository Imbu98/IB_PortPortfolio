// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeKernelPermutationSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernelPermutationSet() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinition();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinitionSet();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationBool();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationSet();
UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References

// Begin ScriptStruct FComputeKernelPermutationBool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool;
class UScriptStruct* FComputeKernelPermutationBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelPermutationBool, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelPermutationBool"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelPermutationBool>()
{
	return FComputeKernelPermutationBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Permutation Options" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Permutation Options" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelPermutationBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeKernelPermutationBool, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FComputeKernelPermutationBool*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComputeKernelPermutationBool), &Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ComputeKernelPermutationBool",
	Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::PropPointers),
	sizeof(FComputeKernelPermutationBool),
	alignof(FComputeKernelPermutationBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationBool()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.InnerSingleton;
}
// End ScriptStruct FComputeKernelPermutationBool

// Begin ScriptStruct FComputeKernelPermutationSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet;
class UScriptStruct* FComputeKernelPermutationSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelPermutationSet, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelPermutationSet"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelPermutationSet>()
{
	return FComputeKernelPermutationSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BooleanOptions_MetaData[] = {
		{ "Category", "Permutation Options" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BooleanOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BooleanOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelPermutationSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions_Inner = { "BooleanOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComputeKernelPermutationBool, METADATA_PARAMS(0, nullptr) }; // 1609174997
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions = { "BooleanOptions", nullptr, (EPropertyFlags)0x0010000000010041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeKernelPermutationSet, BooleanOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BooleanOptions_MetaData), NewProp_BooleanOptions_MetaData) }; // 1609174997
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ComputeKernelPermutationSet",
	Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::PropPointers),
	sizeof(FComputeKernelPermutationSet),
	alignof(FComputeKernelPermutationSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationSet()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.InnerSingleton;
}
// End ScriptStruct FComputeKernelPermutationSet

// Begin ScriptStruct FComputeKernelDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelDefinition;
class UScriptStruct* FComputeKernelDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelDefinition, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelDefinition>()
{
	return FComputeKernelDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[] = {
		{ "Category", "Kernel" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Define_MetaData[] = {
		{ "Category", "Kernel" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Symbol;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Define;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeKernelDefinition, Symbol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Symbol_MetaData), NewProp_Symbol_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Define = { "Define", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeKernelDefinition, Define), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Define_MetaData), NewProp_Define_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Symbol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Define,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ComputeKernelDefinition",
	Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::PropPointers),
	sizeof(FComputeKernelDefinition),
	alignof(FComputeKernelDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.InnerSingleton;
}
// End ScriptStruct FComputeKernelDefinition

// Begin ScriptStruct FComputeKernelDefinitionSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet;
class UScriptStruct* FComputeKernelDefinitionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelDefinitionSet"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelDefinitionSet>()
{
	return FComputeKernelDefinitionSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defines_MetaData[] = {
		{ "Category", "Permutation Options" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Defines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Defines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelDefinitionSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines_Inner = { "Defines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComputeKernelDefinition, METADATA_PARAMS(0, nullptr) }; // 2130322480
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines = { "Defines", nullptr, (EPropertyFlags)0x0010000000010041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeKernelDefinitionSet, Defines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defines_MetaData), NewProp_Defines_MetaData) }; // 2130322480
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ComputeKernelDefinitionSet",
	Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::PropPointers),
	sizeof(FComputeKernelDefinitionSet),
	alignof(FComputeKernelDefinitionSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinitionSet()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.InnerSingleton;
}
// End ScriptStruct FComputeKernelDefinitionSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FComputeKernelPermutationBool::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewStructOps, TEXT("ComputeKernelPermutationBool"), &Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelPermutationBool), 1609174997U) },
		{ FComputeKernelPermutationSet::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewStructOps, TEXT("ComputeKernelPermutationSet"), &Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelPermutationSet), 2563579464U) },
		{ FComputeKernelDefinition::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewStructOps, TEXT("ComputeKernelDefinition"), &Z_Registration_Info_UScriptStruct_ComputeKernelDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelDefinition), 2130322480U) },
		{ FComputeKernelDefinitionSet::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewStructOps, TEXT("ComputeKernelDefinitionSet"), &Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelDefinitionSet), 1975080071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h_3957107387(TEXT("/Script/ComputeFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
