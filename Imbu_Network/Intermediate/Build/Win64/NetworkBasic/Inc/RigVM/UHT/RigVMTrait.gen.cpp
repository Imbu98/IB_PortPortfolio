// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMTrait() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMTrait();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMTrait
static_assert(std::is_polymorphic<FRigVMTrait>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMTrait cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMTrait;
class UScriptStruct* FRigVMTrait::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMTrait.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMTrait.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMTrait"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMTrait.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMTrait>()
{
	return FRigVMTrait::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for all RigVM traits.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMTrait.h" },
		{ "ToolTip", "The base class for all RigVM traits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "// The name of the trait on the node\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMTrait.h" },
		{ "ToolTip", "The name of the trait on the node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMTrait>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMTrait_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMTrait, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTrait_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMTrait_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMTrait",
	Z_Construct_UScriptStruct_FRigVMTrait_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTrait_Statics::PropPointers),
	sizeof(FRigVMTrait),
	alignof(FRigVMTrait),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTrait_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMTrait_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMTrait()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMTrait.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMTrait.InnerSingleton, Z_Construct_UScriptStruct_FRigVMTrait_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMTrait.InnerSingleton;
}
// End ScriptStruct FRigVMTrait

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTrait_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMTrait::StaticStruct, Z_Construct_UScriptStruct_FRigVMTrait_Statics::NewStructOps, TEXT("RigVMTrait"), &Z_Registration_Info_UScriptStruct_RigVMTrait, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMTrait), 870688686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTrait_h_344110062(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTrait_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
