// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseBlendNode.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseBlendNode() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseHandler();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_PoseBlendNode
static_assert(std::is_polymorphic<FAnimNode_PoseBlendNode>() == std::is_polymorphic<FAnimNode_PoseHandler>(), "USTRUCT FAnimNode_PoseBlendNode cannot be polymorphic unless super FAnimNode_PoseHandler is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseBlendNode;
class UScriptStruct* FAnimNode_PoseBlendNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseBlendNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseBlendNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseBlendNode"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseBlendNode.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_PoseBlendNode>()
{
	return FAnimNode_PoseBlendNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\n// Typically the playback position of the animation for this node will represent something other than time, like jump height.\n// This node will not trigger any notifies present in the associated sequence.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseBlendNode.h" },
		{ "ToolTip", "Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\nTypically the playback position of the animation for this node will represent something other than time, like jump height.\nThis node will not trigger any notifies present in the associated sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseBlendNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Type of blending used (Linear, Cubic, etc.) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseBlendNode.h" },
		{ "ToolTip", "Type of blending used (Linear, Cubic, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** If you're using Custom BlendOption, you can specify curve */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseBlendNode.h" },
		{ "ToolTip", "If you're using Custom BlendOption, you can specify curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseBlendNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseBlendNode, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // 1074011079
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseBlendNode, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOption_MetaData), NewProp_BlendOption_MetaData) }; // 2330456755
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseBlendNode, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCurve_MetaData), NewProp_CustomCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::NewProp_SourcePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::NewProp_BlendOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::NewProp_BlendOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::NewProp_CustomCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_PoseHandler,
	&NewStructOps,
	"AnimNode_PoseBlendNode",
	Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::PropPointers),
	sizeof(FAnimNode_PoseBlendNode),
	alignof(FAnimNode_PoseBlendNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseBlendNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseBlendNode.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseBlendNode.InnerSingleton;
}
// End ScriptStruct FAnimNode_PoseBlendNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseBlendNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_PoseBlendNode::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_Statics::NewStructOps, TEXT("AnimNode_PoseBlendNode"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseBlendNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseBlendNode), 1912661760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseBlendNode_h_2332432546(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseBlendNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseBlendNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
