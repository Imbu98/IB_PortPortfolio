// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Utility/BlueprintCameraNode.h"
#include "GameplayCameras/Public/GameFramework/BlueprintCameraPose.h"
#include "GameplayCameras/Public/GameFramework/BlueprintCameraVariableTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCameraNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraNodeEvaluator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraNodeEvaluator_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraPose();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraVariableTable();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UBlueprintCameraNodeEvaluator Function FindEvaluationContextOwnerActor
struct Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics
{
	struct BlueprintCameraNodeEvaluator_eventFindEvaluationContextOwnerActor_Parms
	{
		TSubclassOf<AActor> ActorClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * A utility function that tries to find if an actor owns the evaluation context.\n\x09 * Handles the situation where the evaluation context is an actor component (like a\n\x09 * UGameplayCameraComponent) or an actor itself.\n\x09 */" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "ModuleRelativePath", "Public/Nodes/Utility/BlueprintCameraNode.h" },
		{ "ToolTip", "A utility function that tries to find if an actor owns the evaluation context.\nHandles the situation where the evaluation context is an actor component (like a\nUGameplayCameraComponent) or an actor itself." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraNodeEvaluator_eventFindEvaluationContextOwnerActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraNodeEvaluator_eventFindEvaluationContextOwnerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraNodeEvaluator, nullptr, "FindEvaluationContextOwnerActor", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::BlueprintCameraNodeEvaluator_eventFindEvaluationContextOwnerActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::BlueprintCameraNodeEvaluator_eventFindEvaluationContextOwnerActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraNodeEvaluator::execFindEvaluationContextOwnerActor)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->FindEvaluationContextOwnerActor(Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UBlueprintCameraNodeEvaluator Function FindEvaluationContextOwnerActor

// Begin Class UBlueprintCameraNodeEvaluator Function TickCameraNode
struct BlueprintCameraNodeEvaluator_eventTickCameraNode_Parms
{
	float DeltaTime;
};
static const FName NAME_UBlueprintCameraNodeEvaluator_TickCameraNode = FName(TEXT("TickCameraNode"));
void UBlueprintCameraNodeEvaluator::TickCameraNode(float DeltaTime)
{
	BlueprintCameraNodeEvaluator_eventTickCameraNode_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_UBlueprintCameraNodeEvaluator_TickCameraNode);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** The main execution callback for the camera node. Call SetCameraPose to affect the result. */" },
		{ "ModuleRelativePath", "Public/Nodes/Utility/BlueprintCameraNode.h" },
		{ "ToolTip", "The main execution callback for the camera node. Call SetCameraPose to affect the result." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraNodeEvaluator_eventTickCameraNode_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraNodeEvaluator, nullptr, "TickCameraNode", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::PropPointers), sizeof(BlueprintCameraNodeEvaluator_eventTickCameraNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlueprintCameraNodeEvaluator_eventTickCameraNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintCameraNodeEvaluator Function TickCameraNode

// Begin Class UBlueprintCameraNodeEvaluator
void UBlueprintCameraNodeEvaluator::StaticRegisterNativesUBlueprintCameraNodeEvaluator()
{
	UClass* Class = UBlueprintCameraNodeEvaluator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindEvaluationContextOwnerActor", &UBlueprintCameraNodeEvaluator::execFindEvaluationContextOwnerActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintCameraNodeEvaluator);
UClass* Z_Construct_UClass_UBlueprintCameraNodeEvaluator_NoRegister()
{
	return UBlueprintCameraNodeEvaluator::StaticClass();
}
struct Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base class for Blueprint camera node evaluators.\n */" },
		{ "IncludePath", "Nodes/Utility/BlueprintCameraNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Utility/BlueprintCameraNode.h" },
		{ "ToolTip", "The base class for Blueprint camera node evaluators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFirstFrame_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** Whether this is the first frame of this camera node's lifetime. */" },
		{ "ModuleRelativePath", "Public/Nodes/Utility/BlueprintCameraNode.h" },
		{ "ToolTip", "Whether this is the first frame of this camera node's lifetime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationContextOwner_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** The owner object of this camera node's evaluation context. */" },
		{ "ModuleRelativePath", "Public/Nodes/Utility/BlueprintCameraNode.h" },
		{ "ToolTip", "The owner object of this camera node's evaluation context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** The input/output camera pose for this frame. */" },
		{ "ModuleRelativePath", "Public/Nodes/Utility/BlueprintCameraNode.h" },
		{ "ToolTip", "The input/output camera pose for this frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** The input/output camera variable table for this frame. */" },
		{ "ModuleRelativePath", "Public/Nodes/Utility/BlueprintCameraNode.h" },
		{ "ToolTip", "The input/output camera variable table for this frame." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFirstFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFirstFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EvaluationContextOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor, "FindEvaluationContextOwnerActor" }, // 199557752
		{ &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode, "TickCameraNode" }, // 2155680330
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCameraNodeEvaluator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_bIsFirstFrame_SetBit(void* Obj)
{
	((UBlueprintCameraNodeEvaluator*)Obj)->bIsFirstFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_bIsFirstFrame = { "bIsFirstFrame", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlueprintCameraNodeEvaluator), &Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_bIsFirstFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFirstFrame_MetaData), NewProp_bIsFirstFrame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_EvaluationContextOwner = { "EvaluationContextOwner", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCameraNodeEvaluator, EvaluationContextOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationContextOwner_MetaData), NewProp_EvaluationContextOwner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCameraNodeEvaluator, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCameraNodeEvaluator, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_bIsFirstFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_EvaluationContextOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_VariableTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::ClassParams = {
	&UBlueprintCameraNodeEvaluator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintCameraNodeEvaluator()
{
	if (!Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.OuterSingleton, Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBlueprintCameraNodeEvaluator>()
{
	return UBlueprintCameraNodeEvaluator::StaticClass();
}
UBlueprintCameraNodeEvaluator::UBlueprintCameraNodeEvaluator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCameraNodeEvaluator);
UBlueprintCameraNodeEvaluator::~UBlueprintCameraNodeEvaluator() {}
// End Class UBlueprintCameraNodeEvaluator

// Begin Class UBlueprintCameraNode
void UBlueprintCameraNode::StaticRegisterNativesUBlueprintCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintCameraNode);
UClass* Z_Construct_UClass_UBlueprintCameraNode_NoRegister()
{
	return UBlueprintCameraNode::StaticClass();
}
struct Z_Construct_UClass_UBlueprintCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Transform" },
		{ "Comment", "/**\n * A camera node that runs arbitrary Blueprint logic.\n */" },
		{ "IncludePath", "Nodes/Utility/BlueprintCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Utility/BlueprintCameraNode.h" },
		{ "ToolTip", "A camera node that runs arbitrary Blueprint logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraNodeEvaluatorClass_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The camera node evaluator class to instantiate and run. */" },
		{ "ModuleRelativePath", "Public/Nodes/Utility/BlueprintCameraNode.h" },
		{ "ToolTip", "The camera node evaluator class to instantiate and run." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraNodeEvaluatorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintCameraNode_Statics::NewProp_CameraNodeEvaluatorClass = { "CameraNodeEvaluatorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCameraNode, CameraNodeEvaluatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBlueprintCameraNodeEvaluator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraNodeEvaluatorClass_MetaData), NewProp_CameraNodeEvaluatorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCameraNode_Statics::NewProp_CameraNodeEvaluatorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCameraNode_Statics::ClassParams = {
	&UBlueprintCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintCameraNode()
{
	if (!Z_Registration_Info_UClass_UBlueprintCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintCameraNode.OuterSingleton, Z_Construct_UClass_UBlueprintCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBlueprintCameraNode>()
{
	return UBlueprintCameraNode::StaticClass();
}
UBlueprintCameraNode::UBlueprintCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCameraNode);
UBlueprintCameraNode::~UBlueprintCameraNode() {}
// End Class UBlueprintCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintCameraNodeEvaluator, UBlueprintCameraNodeEvaluator::StaticClass, TEXT("UBlueprintCameraNodeEvaluator"), &Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintCameraNodeEvaluator), 2770879298U) },
		{ Z_Construct_UClass_UBlueprintCameraNode, UBlueprintCameraNode::StaticClass, TEXT("UBlueprintCameraNode"), &Z_Registration_Info_UClass_UBlueprintCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintCameraNode), 4143130266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_487109054(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
