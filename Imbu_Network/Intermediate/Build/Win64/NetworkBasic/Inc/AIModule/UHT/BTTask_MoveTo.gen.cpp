// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveTo() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Bool();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Class();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Float();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_MoveTo
void UBTTask_MoveTo::StaticRegisterNativesUBTTask_MoveTo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_MoveTo);
UClass* Z_Construct_UClass_UBTTask_MoveTo_NoRegister()
{
	return UBTTask_MoveTo::StaticClass();
}
struct Z_Construct_UClass_UBTTask_MoveTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Move To task node.\n * Moves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "Move To task node.\nMoves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** fixed distance added to threshold between AI and goal location in destination reach test */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "fixed distance added to threshold between AI and goal location in destination reach test" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedBlackboardValueTolerance_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ClampMin", "1" },
		{ "Comment", "/** if task is expected to react to changes to location represented by BB key \n\x09 *\x09this property can be used to tweak sensitivity of the mechanism. Value is \n\x09 *\x09recommended to be less than AcceptableRadius */" },
		{ "EditCondition", "bObserveBlackboardValue" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if task is expected to react to changes to location represented by BB key\n    this property can be used to tweak sensitivity of the mechanism. Value is\n    recommended to be less than AcceptableRadius" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[] = {
		{ "Category", "Node" },
		{ "DisplayName", "AllowStrafe" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, use incomplete path when goal can't be reached */" },
		{ "DisplayName", "AllowPartialPath" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, use incomplete path when goal can't be reached" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrackMovingGoal_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, path to goal actor will update itself when actor moves */" },
		{ "DisplayName", "TrackMovingGoal" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, path to goal actor will update itself when actor moves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireNavigableEndLocation_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, the goal location will need to be navigable */" },
		{ "DisplayName", "RequireNavigableEndLocation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, the goal location will need to be navigable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalLocation_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, goal location will be projected on navigation data (navmesh) before using */" },
		{ "DisplayName", "ProjectGoalLocation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, goal location will be projected on navigation data (navmesh) before using" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesAgentRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test  */" },
		{ "DisplayName", "ReachTestIncludesAgentRadius" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesGoalRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test  */" },
		{ "DisplayName", "ReachTestIncludesGoalRadius" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromPreviousPath_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, the path request will start from the end of the previous path (if any), and the generated path will be merged with the remaining points of the previous path */" },
		{ "DisplayName", "StartFromPreviousPath" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, the path request will start from the end of the previous path (if any), and the generated path will be merged with the remaining points of the previous path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bObserveBlackboardValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObservedBlackboardValueTolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bAllowStrafe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bAllowPartialPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bTrackMovingGoal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bRequireNavigableEndLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bProjectGoalLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bReachTestIncludesAgentRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bReachTestIncludesGoalRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bStartFromPreviousPath;
	static void NewProp_bObserveBlackboardValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bObserveBlackboardValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveTo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, AcceptableRadius), Z_Construct_UScriptStruct_FValueOrBBKey_Float, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) }; // 4044354920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, FilterClass), Z_Construct_UScriptStruct_FValueOrBBKey_Class, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterClass_MetaData), NewProp_FilterClass_MetaData) }; // 2395019718
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_ObservedBlackboardValueTolerance = { "ObservedBlackboardValueTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, ObservedBlackboardValueTolerance), Z_Construct_UScriptStruct_FValueOrBBKey_Float, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedBlackboardValueTolerance_MetaData), NewProp_ObservedBlackboardValueTolerance_MetaData) }; // 4044354920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe = { "bAllowStrafe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, bAllowStrafe), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStrafe_MetaData), NewProp_bAllowStrafe_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, bAllowPartialPath), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPartialPath_MetaData), NewProp_bAllowPartialPath_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal = { "bTrackMovingGoal", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, bTrackMovingGoal), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrackMovingGoal_MetaData), NewProp_bTrackMovingGoal_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bRequireNavigableEndLocation = { "bRequireNavigableEndLocation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, bRequireNavigableEndLocation), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireNavigableEndLocation_MetaData), NewProp_bRequireNavigableEndLocation_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation = { "bProjectGoalLocation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, bProjectGoalLocation), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectGoalLocation_MetaData), NewProp_bProjectGoalLocation_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius = { "bReachTestIncludesAgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, bReachTestIncludesAgentRadius), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReachTestIncludesAgentRadius_MetaData), NewProp_bReachTestIncludesAgentRadius_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius = { "bReachTestIncludesGoalRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, bReachTestIncludesGoalRadius), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReachTestIncludesGoalRadius_MetaData), NewProp_bReachTestIncludesGoalRadius_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStartFromPreviousPath = { "bStartFromPreviousPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo, bStartFromPreviousPath), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartFromPreviousPath_MetaData), NewProp_bStartFromPreviousPath_MetaData) }; // 1056548058
void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue_SetBit(void* Obj)
{
	((UBTTask_MoveTo*)Obj)->bObserveBlackboardValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue = { "bObserveBlackboardValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bObserveBlackboardValue_MetaData), NewProp_bObserveBlackboardValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_AcceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_FilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_ObservedBlackboardValueTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bRequireNavigableEndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStartFromPreviousPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_MoveTo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveTo_Statics::ClassParams = {
	&UBTTask_MoveTo::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_MoveTo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_MoveTo()
{
	if (!Z_Registration_Info_UClass_UBTTask_MoveTo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_MoveTo.OuterSingleton, Z_Construct_UClass_UBTTask_MoveTo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_MoveTo.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_MoveTo>()
{
	return UBTTask_MoveTo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveTo);
UBTTask_MoveTo::~UBTTask_MoveTo() {}
// End Class UBTTask_MoveTo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_MoveTo, UBTTask_MoveTo::StaticClass, TEXT("UBTTask_MoveTo"), &Z_Registration_Info_UClass_UBTTask_MoveTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_MoveTo), 1316627320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_1321090232(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
