// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_Physics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Physics_generated_h
#error "RigUnit_Physics.generated.h already included, missing '#pragma once' in RigUnit_Physics.h"
#endif
#define CONTROLRIG_RigUnit_Physics_generated_h


#define FRigUnit_HierarchyAddPhysicsSolver_Execute() \
	void FRigUnit_HierarchyAddPhysicsSolver::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		FRigPhysicsSolverID& Solver \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsSolver_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		FRigPhysicsSolverID& Solver \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		FRigPhysicsSolverID& Solver = *(FRigPhysicsSolverID*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Name, \
			Solver \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddPhysicsSolver>();


#define FRigUnit_HierarchyAddPhysicsJoint_Execute() \
	void FRigUnit_HierarchyAddPhysicsJoint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FRigPhysicsSolverID& Solver, \
		const FRigPhysicsSettings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddPhysicsJoint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FRigPhysicsSolverID& Solver, \
		const FRigPhysicsSettings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FRigPhysicsSolverID& Solver = *(FRigPhysicsSolverID*)RigVMMemoryHandles[1].GetData(false); \
		const FRigPhysicsSettings& Settings = *(FRigPhysicsSettings*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Solver, \
			Settings, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddPhysicsJoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Physics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
