// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Execution/RigUnit_Physics.h"
#include "ControlRig/Public/Rigs/RigHierarchyElements.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Physics() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPhysicsSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPhysicsSolverID();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyAddElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_HierarchyAddPhysicsSolver
static_assert(std::is_polymorphic<FRigUnit_HierarchyAddPhysicsSolver>() == std::is_polymorphic<FRigUnit_DynamicHierarchyBaseMutable>(), "USTRUCT FRigUnit_HierarchyAddPhysicsSolver cannot be polymorphic unless super FRigUnit_DynamicHierarchyBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsSolver;
class UScriptStruct* FRigUnit_HierarchyAddPhysicsSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyAddPhysicsSolver"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyAddPhysicsSolver_Execute;
		Arguments_FRigUnit_HierarchyAddPhysicsSolver_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigUnit_HierarchyAddPhysicsSolver_Execute.Emplace(TEXT("Solver"), TEXT("FRigPhysicsSolverID"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyAddPhysicsSolver::Execute"), &FRigUnit_HierarchyAddPhysicsSolver::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsSolver.OuterSingleton, Arguments_FRigUnit_HierarchyAddPhysicsSolver_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsSolver.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyAddPhysicsSolver>()
{
	return FRigUnit_HierarchyAddPhysicsSolver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds a new physics solver to the hierarchy\n * Note: This node only runs as part of the construction event.\n */" },
		{ "DisplayName", "Spawn Physics Solver" },
		{ "Keywords", "Construction,Create,New,Simulation" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Physics.h" },
		{ "ToolTip", "Adds a new physics solver to the hierarchy\nNote: This node only runs as part of the construction event." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The name of the new solver to add\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Physics.h" },
		{ "ToolTip", "* The name of the new solver to add" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The identifier of the solver\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Physics.h" },
		{ "Output", "" },
		{ "ToolTip", "* The identifier of the solver" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Solver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyAddPhysicsSolver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HierarchyAddPhysicsSolver, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HierarchyAddPhysicsSolver, Solver), Z_Construct_UScriptStruct_FRigPhysicsSolverID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Solver_MetaData), NewProp_Solver_MetaData) }; // 2660901627
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::NewProp_Solver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable,
	&NewStructOps,
	"RigUnit_HierarchyAddPhysicsSolver",
	Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::PropPointers),
	sizeof(FRigUnit_HierarchyAddPhysicsSolver),
	alignof(FRigUnit_HierarchyAddPhysicsSolver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsSolver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsSolver.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsSolver.InnerSingleton;
}
void FRigUnit_HierarchyAddPhysicsSolver::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_HierarchyAddPhysicsSolver::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Solver
	);
}
// End ScriptStruct FRigUnit_HierarchyAddPhysicsSolver

// Begin ScriptStruct FRigUnit_HierarchyAddPhysicsJoint
static_assert(std::is_polymorphic<FRigUnit_HierarchyAddPhysicsJoint>() == std::is_polymorphic<FRigUnit_HierarchyAddElement>(), "USTRUCT FRigUnit_HierarchyAddPhysicsJoint cannot be polymorphic unless super FRigUnit_HierarchyAddElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsJoint;
class UScriptStruct* FRigUnit_HierarchyAddPhysicsJoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsJoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsJoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyAddPhysicsJoint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyAddPhysicsJoint_Execute;
		Arguments_FRigUnit_HierarchyAddPhysicsJoint_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_HierarchyAddPhysicsJoint_Execute.Emplace(TEXT("Solver"), TEXT("FRigPhysicsSolverID"));
		Arguments_FRigUnit_HierarchyAddPhysicsJoint_Execute.Emplace(TEXT("Settings"), TEXT("FRigPhysicsSettings"));
		Arguments_FRigUnit_HierarchyAddPhysicsJoint_Execute.Emplace(TEXT("Parent"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HierarchyAddPhysicsJoint_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigUnit_HierarchyAddPhysicsJoint_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyAddPhysicsJoint::Execute"), &FRigUnit_HierarchyAddPhysicsJoint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsJoint.OuterSingleton, Arguments_FRigUnit_HierarchyAddPhysicsJoint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsJoint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyAddPhysicsJoint>()
{
	return FRigUnit_HierarchyAddPhysicsJoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds a new physics joint to the hierarchy\n * Note: This node only runs as part of the construction event.\n */" },
		{ "DisplayName", "Spawn Physics Joint" },
		{ "Keywords", "Construction,Create,New,Joint,Skeleton" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Physics.h" },
		{ "ToolTip", "Adds a new physics joint to the hierarchy\nNote: This node only runs as part of the construction event." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The initial global transform of the spawned element\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Physics.h" },
		{ "ToolTip", "* The initial global transform of the spawned element" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The solver to relate this new physics element to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Physics.h" },
		{ "ToolTip", "* The solver to relate this new physics element to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The settings of the new physics element\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Physics.h" },
		{ "ToolTip", "* The settings of the new physics element" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Solver;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyAddPhysicsJoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HierarchyAddPhysicsJoint, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HierarchyAddPhysicsJoint, Solver), Z_Construct_UScriptStruct_FRigPhysicsSolverID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Solver_MetaData), NewProp_Solver_MetaData) }; // 2660901627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HierarchyAddPhysicsJoint, Settings), Z_Construct_UScriptStruct_FRigPhysicsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2587549020
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::NewProp_Solver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HierarchyAddElement,
	&NewStructOps,
	"RigUnit_HierarchyAddPhysicsJoint",
	Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::PropPointers),
	sizeof(FRigUnit_HierarchyAddPhysicsJoint),
	alignof(FRigUnit_HierarchyAddPhysicsJoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsJoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsJoint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsJoint.InnerSingleton;
}
void FRigUnit_HierarchyAddPhysicsJoint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_HierarchyAddPhysicsJoint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Solver,
		Settings,
		Parent,
		Name,
		Item
	);
}
// End ScriptStruct FRigUnit_HierarchyAddPhysicsJoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_HierarchyAddPhysicsSolver::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics::NewStructOps, TEXT("RigUnit_HierarchyAddPhysicsSolver"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyAddPhysicsSolver), 3224218329U) },
		{ FRigUnit_HierarchyAddPhysicsJoint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics::NewStructOps, TEXT("RigUnit_HierarchyAddPhysicsJoint"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyAddPhysicsJoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyAddPhysicsJoint), 3537430691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h_2200499183(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
