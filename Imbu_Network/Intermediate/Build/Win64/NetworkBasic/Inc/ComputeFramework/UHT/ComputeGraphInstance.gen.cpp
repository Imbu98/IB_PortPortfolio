// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeGraphInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeGraphInstance() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider_NoRegister();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphInstance();
UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References

// Begin ScriptStruct FComputeGraphInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeGraphInstance;
class UScriptStruct* FComputeGraphInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeGraphInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeGraphInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeGraphInstance, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeGraphInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeGraphInstance.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeGraphInstance>()
{
	return FComputeGraphInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComputeGraphInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Class to store a set of data provider bindings for UComputeGraph and to\n * enqueue work to the ComputeFramework's compute system.\n */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphInstance.h" },
		{ "ToolTip", "Class to store a set of data provider bindings for UComputeGraph and to\nenqueue work to the ComputeFramework's compute system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataProviders_MetaData[] = {
		{ "Comment", "/** The currently bound Data Provider objects. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphInstance.h" },
		{ "ToolTip", "The currently bound Data Provider objects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataProviders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataProviders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeGraphInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders_Inner = { "DataProviders", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComputeDataProvider_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders = { "DataProviders", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeGraphInstance, DataProviders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataProviders_MetaData), NewProp_DataProviders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ComputeGraphInstance",
	Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::PropPointers),
	sizeof(FComputeGraphInstance),
	alignof(FComputeGraphInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphInstance()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeGraphInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeGraphInstance.InnerSingleton, Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComputeGraphInstance.InnerSingleton;
}
// End ScriptStruct FComputeGraphInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FComputeGraphInstance::StaticStruct, Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewStructOps, TEXT("ComputeGraphInstance"), &Z_Registration_Info_UScriptStruct_ComputeGraphInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeGraphInstance), 2864353280U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h_1541752186(TEXT("/Script/ComputeFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
