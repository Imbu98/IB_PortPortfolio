// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeKernelSource.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeKernelPermutationSet.h"
#include "ComputeFramework/Public/ComputeFramework/ShaderParamTypeDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernelSource() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSource();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSource_NoRegister();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource_NoRegister();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinitionSet();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationSet();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderFunctionDefinition();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References

// Begin Class UComputeKernelSource
void UComputeKernelSource::StaticRegisterNativesUComputeKernelSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeKernelSource);
UClass* Z_Construct_UClass_UComputeKernelSource_NoRegister()
{
	return UComputeKernelSource::StaticClass();
}
struct Z_Construct_UClass_UComputeKernelSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Class representing the source for a UComputeKernel \n * We derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)\n */" },
		{ "IncludePath", "ComputeFramework/ComputeKernelSource.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Class representing the source for a UComputeKernel\nWe derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryPoint_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Kernel entry point. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Kernel entry point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupSize_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Kernel group size. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Kernel group size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermutationSet_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Base permutations exposed by the kernel. These will be extended by further permutations declared in any linked data providers. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Base permutations exposed by the kernel. These will be extended by further permutations declared in any linked data providers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionsSet_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Base environment defines for kernel compilation. These will be extended by further defines declared in any linked data providers. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Base environment defines for kernel compilation. These will be extended by further defines declared in any linked data providers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSources_MetaData[] = {
		{ "Category", "External" },
		{ "Comment", "/** An array of additional independent source assets that the kernel source depends on. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "An array of additional independent source assets that the kernel source depends on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalInputs_MetaData[] = {
		{ "Category", "External" },
		{ "Comment", "/* Named external inputs for the kernel. These must be fulfilled by linked data providers. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Named external inputs for the kernel. These must be fulfilled by linked data providers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalOutputs_MetaData[] = {
		{ "Category", "External" },
		{ "Comment", "/* Named external outputs for the kernel. These must be fulfilled by linked data providers. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Named external outputs for the kernel. These must be fulfilled by linked data providers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntryPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PermutationSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefinitionsSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalSources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSources;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalInputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalOutputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeKernelSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_EntryPoint = { "EntryPoint", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeKernelSource, EntryPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryPoint_MetaData), NewProp_EntryPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_GroupSize = { "GroupSize", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeKernelSource, GroupSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupSize_MetaData), NewProp_GroupSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_PermutationSet = { "PermutationSet", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeKernelSource, PermutationSet), Z_Construct_UScriptStruct_FComputeKernelPermutationSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermutationSet_MetaData), NewProp_PermutationSet_MetaData) }; // 2563579464
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_DefinitionsSet = { "DefinitionsSet", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeKernelSource, DefinitionsSet), Z_Construct_UScriptStruct_FComputeKernelDefinitionSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefinitionsSet_MetaData), NewProp_DefinitionsSet_MetaData) }; // 1975080071
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources_Inner = { "AdditionalSources", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComputeSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources = { "AdditionalSources", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeKernelSource, AdditionalSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSources_MetaData), NewProp_AdditionalSources_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs_Inner = { "ExternalInputs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShaderFunctionDefinition, METADATA_PARAMS(0, nullptr) }; // 608247268
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs = { "ExternalInputs", nullptr, (EPropertyFlags)0x0010000000020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeKernelSource, ExternalInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalInputs_MetaData), NewProp_ExternalInputs_MetaData) }; // 608247268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs_Inner = { "ExternalOutputs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShaderFunctionDefinition, METADATA_PARAMS(0, nullptr) }; // 608247268
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs = { "ExternalOutputs", nullptr, (EPropertyFlags)0x0010000000020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeKernelSource, ExternalOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalOutputs_MetaData), NewProp_ExternalOutputs_MetaData) }; // 608247268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeKernelSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_EntryPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_GroupSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_PermutationSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_DefinitionsSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComputeKernelSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeKernelSource_Statics::ClassParams = {
	&UComputeKernelSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UComputeKernelSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UComputeKernelSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComputeKernelSource()
{
	if (!Z_Registration_Info_UClass_UComputeKernelSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeKernelSource.OuterSingleton, Z_Construct_UClass_UComputeKernelSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComputeKernelSource.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeKernelSource>()
{
	return UComputeKernelSource::StaticClass();
}
UComputeKernelSource::UComputeKernelSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeKernelSource);
UComputeKernelSource::~UComputeKernelSource() {}
// End Class UComputeKernelSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComputeKernelSource, UComputeKernelSource::StaticClass, TEXT("UComputeKernelSource"), &Z_Registration_Info_UClass_UComputeKernelSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeKernelSource), 2667248200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_3269175065(TEXT("/Script/ComputeFramework"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
