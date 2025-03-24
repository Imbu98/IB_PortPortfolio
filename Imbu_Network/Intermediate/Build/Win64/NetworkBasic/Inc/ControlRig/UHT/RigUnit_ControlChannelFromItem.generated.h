// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_ControlChannelFromItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ControlChannelFromItem_generated_h
#error "RigUnit_ControlChannelFromItem.generated.h already included, missing '#pragma once' in RigUnit_ControlChannelFromItem.h"
#endif
#define CONTROLRIG_RigUnit_ControlChannelFromItem_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetAnimationChannelFromItemBase>();


#define FRigUnit_GetBoolAnimationChannelFromItem_Execute() \
	void FRigUnit_GetBoolAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetBoolAnimationChannelFromItem>();


#define FRigUnit_GetFloatAnimationChannelFromItem_Execute() \
	void FRigUnit_GetFloatAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		float& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		float& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetFloatAnimationChannelFromItem>();


#define FRigUnit_GetIntAnimationChannelFromItem_Execute() \
	void FRigUnit_GetIntAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		int32& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		int32& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		int32& Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetIntAnimationChannelFromItem>();


#define FRigUnit_GetVector2DAnimationChannelFromItem_Execute() \
	void FRigUnit_GetVector2DAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector2D& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector2D& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector2D& Value = *(FVector2D*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetVector2DAnimationChannelFromItem>();


#define FRigUnit_GetVectorAnimationChannelFromItem_Execute() \
	void FRigUnit_GetVectorAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetVectorAnimationChannelFromItem>();


#define FRigUnit_GetRotatorAnimationChannelFromItem_Execute() \
	void FRigUnit_GetRotatorAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRotator& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRotator& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetRotatorAnimationChannelFromItem>();


#define FRigUnit_GetTransformAnimationChannelFromItem_Execute() \
	void FRigUnit_GetTransformAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetTransformAnimationChannelFromItem>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetAnimationChannelBaseFromItem>();


#define FRigUnit_SetBoolAnimationChannelFromItem_Execute() \
	void FRigUnit_SetBoolAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetBoolAnimationChannelFromItem>();


#define FRigUnit_SetFloatAnimationChannelFromItem_Execute() \
	void FRigUnit_SetFloatAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetFloatAnimationChannelFromItem>();


#define FRigUnit_SetIntAnimationChannelFromItem_Execute() \
	void FRigUnit_SetIntAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetIntAnimationChannelFromItem>();


#define FRigUnit_SetVector2DAnimationChannelFromItem_Execute() \
	void FRigUnit_SetVector2DAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector2D& Value = *(FVector2D*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetVector2DAnimationChannelFromItem>();


#define FRigUnit_SetVectorAnimationChannelFromItem_Execute() \
	void FRigUnit_SetVectorAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_289_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetVectorAnimationChannelFromItem>();


#define FRigUnit_SetRotatorAnimationChannelFromItem_Execute() \
	void FRigUnit_SetRotatorAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_310_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetRotatorAnimationChannelFromItem>();


#define FRigUnit_SetTransformAnimationChannelFromItem_Execute() \
	void FRigUnit_SetTransformAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_331_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetTransformAnimationChannelFromItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
