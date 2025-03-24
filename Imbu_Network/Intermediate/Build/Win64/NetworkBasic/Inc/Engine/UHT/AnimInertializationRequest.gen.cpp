// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimInertializationRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInertializationRequest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInertializationRequest();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FInertializationRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InertializationRequest;
class UScriptStruct* FInertializationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InertializationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInertializationRequest, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InertializationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InertializationRequest.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInertializationRequest>()
{
	return FInertializationRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInertializationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Comment", "// Blend duration of the inertialization request.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
		{ "ToolTip", "Blend duration of the inertialization request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[] = {
		{ "Comment", "// Blend profile to control per-joint blend times.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Blend profile to control per-joint blend times." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBlendMode_MetaData[] = {
		{ "Comment", "// If to use the provided blend mode.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
		{ "ToolTip", "If to use the provided blend mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Comment", "// Blend mode to use.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
		{ "ToolTip", "Blend mode to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomBlendCurve_MetaData[] = {
		{ "Comment", "// Custom blend curve to use when use of the blend mode is active.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
		{ "ToolTip", "Custom blend curve to use when use of the blend mode is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use DescriptionString instead." },
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionString_MetaData[] = {
		{ "Comment", "// Description of the request\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
		{ "ToolTip", "Description of the request" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Comment", "// Node id from which this request was made.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
		{ "ToolTip", "Node id from which this request was made." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "Comment", "// Anim instance from which this request was made.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInertializationRequest.h" },
		{ "ToolTip", "Anim instance from which this request was made." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
	static void NewProp_bUseBlendMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DescriptionString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInertializationRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfile_MetaData), NewProp_BlendProfile_MetaData) };
void Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_bUseBlendMode_SetBit(void* Obj)
{
	((FInertializationRequest*)Obj)->bUseBlendMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_bUseBlendMode = { "bUseBlendMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInertializationRequest), &Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_bUseBlendMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBlendMode_MetaData), NewProp_bUseBlendMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, BlendMode), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 2330456755
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_CustomBlendCurve = { "CustomBlendCurve", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomBlendCurve_MetaData), NewProp_CustomBlendCurve_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000020002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, Description_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_DescriptionString = { "DescriptionString", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, DescriptionString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionString_MetaData), NewProp_DescriptionString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInertializationRequest, AnimInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_bUseBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_CustomBlendCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_DescriptionString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewProp_AnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInertializationRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InertializationRequest",
	Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::PropPointers),
	sizeof(FInertializationRequest),
	alignof(FInertializationRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInertializationRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInertializationRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInertializationRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InertializationRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InertializationRequest.InnerSingleton, Z_Construct_UScriptStruct_FInertializationRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InertializationRequest.InnerSingleton;
}
// End ScriptStruct FInertializationRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInertializationRequest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInertializationRequest::StaticStruct, Z_Construct_UScriptStruct_FInertializationRequest_Statics::NewStructOps, TEXT("InertializationRequest"), &Z_Registration_Info_UScriptStruct_InertializationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInertializationRequest), 3227297933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInertializationRequest_h_395085010(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInertializationRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInertializationRequest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
