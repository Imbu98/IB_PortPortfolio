// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Execution/RigUnit_PrepareForExecution.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_PrepareForExecution() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_PrepareForExecution
static_assert(std::is_polymorphic<FRigUnit_PrepareForExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_PrepareForExecution cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution;
class UScriptStruct* FRigUnit_PrepareForExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PrepareForExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PrepareForExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PrepareForExecution::Execute"), &FRigUnit_PrepareForExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.OuterSingleton, Arguments_FRigUnit_PrepareForExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PrepareForExecution>()
{
	return FRigUnit_PrepareForExecution::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event to create / configure elements before any other event\n */" },
		{ "DisplayName", "Construction Event" },
		{ "Keywords", "Create,Build,Spawn,Setup,Init,Fit" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_PrepareForExecution.h" },
		{ "NodeColor", "0.6, 0, 1" },
		{ "ToolTip", "Event to create / configure elements before any other event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "PrepareForExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_PrepareForExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PrepareForExecution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PrepareForExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewProp_ExecuteContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_PrepareForExecution",
	Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::PropPointers),
	sizeof(FRigUnit_PrepareForExecution),
	alignof(FRigUnit_PrepareForExecution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.InnerSingleton;
}
void FRigUnit_PrepareForExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_PrepareForExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}
// End ScriptStruct FRigUnit_PrepareForExecution

// Begin ScriptStruct FRigUnit_PostPrepareForExecution
static_assert(std::is_polymorphic<FRigUnit_PostPrepareForExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_PostPrepareForExecution cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PostPrepareForExecution;
class UScriptStruct* FRigUnit_PostPrepareForExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PostPrepareForExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PostPrepareForExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PostPrepareForExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PostPrepareForExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PostPrepareForExecution::Execute"), &FRigUnit_PostPrepareForExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PostPrepareForExecution.OuterSingleton, Arguments_FRigUnit_PostPrepareForExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PostPrepareForExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PostPrepareForExecution>()
{
	return FRigUnit_PostPrepareForExecution::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event to further configure elements. Runs after the Construction Event\n */" },
		{ "DisplayName", "Post Construction" },
		{ "Keywords", "Create,Build,Spawn,Setup,Init,Fit" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_PrepareForExecution.h" },
		{ "NodeColor", "0.6, 0, 1" },
		{ "ToolTip", "Event to further configure elements. Runs after the Construction Event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "PostPrepareForExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_PrepareForExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PostPrepareForExecution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PostPrepareForExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::NewProp_ExecuteContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_PostPrepareForExecution",
	Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::PropPointers),
	sizeof(FRigUnit_PostPrepareForExecution),
	alignof(FRigUnit_PostPrepareForExecution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PostPrepareForExecution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PostPrepareForExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PostPrepareForExecution.InnerSingleton;
}
void FRigUnit_PostPrepareForExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_PostPrepareForExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}
// End ScriptStruct FRigUnit_PostPrepareForExecution

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_PrepareForExecution_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_PrepareForExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewStructOps, TEXT("RigUnit_PrepareForExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PrepareForExecution), 2822421260U) },
		{ FRigUnit_PostPrepareForExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PostPrepareForExecution_Statics::NewStructOps, TEXT("RigUnit_PostPrepareForExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_PostPrepareForExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PostPrepareForExecution), 50574920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_PrepareForExecution_h_164418915(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_PrepareForExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_PrepareForExecution_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
