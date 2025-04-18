// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ScaleChainLength.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ScaleChainLength() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum EScaleChainInitialLength
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScaleChainInitialLength;
static UEnum* EScaleChainInitialLength_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScaleChainInitialLength.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScaleChainInitialLength.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EScaleChainInitialLength"));
	}
	return Z_Registration_Info_UEnum_EScaleChainInitialLength.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EScaleChainInitialLength>()
{
	return EScaleChainInitialLength_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChainLength.Comment", "/* Use animated chain length (length in local space of every bone from 'ChainStartBone' to 'ChainEndBone' */" },
		{ "ChainLength.Name", "EScaleChainInitialLength::ChainLength" },
		{ "ChainLength.ToolTip", "Use animated chain length (length in local space of every bone from 'ChainStartBone' to 'ChainEndBone'" },
		{ "Distance.Comment", "/** Use distance between 'ChainStartBone' and 'ChainEndBone' (in Component Space) */" },
		{ "Distance.Name", "EScaleChainInitialLength::Distance" },
		{ "Distance.ToolTip", "Use distance between 'ChainStartBone' and 'ChainEndBone' (in Component Space)" },
		{ "FixedDefaultLengthValue.Comment", "/** Use the 'DefaultChainLength' input value. */" },
		{ "FixedDefaultLengthValue.Name", "EScaleChainInitialLength::FixedDefaultLengthValue" },
		{ "FixedDefaultLengthValue.ToolTip", "Use the 'DefaultChainLength' input value." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScaleChainInitialLength::FixedDefaultLengthValue", (int64)EScaleChainInitialLength::FixedDefaultLengthValue },
		{ "EScaleChainInitialLength::Distance", (int64)EScaleChainInitialLength::Distance },
		{ "EScaleChainInitialLength::ChainLength", (int64)EScaleChainInitialLength::ChainLength },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EScaleChainInitialLength",
	"EScaleChainInitialLength",
	Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength()
{
	if (!Z_Registration_Info_UEnum_EScaleChainInitialLength.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScaleChainInitialLength.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScaleChainInitialLength.InnerSingleton;
}
// End Enum EScaleChainInitialLength

// Begin ScriptStruct FAnimNode_ScaleChainLength
static_assert(std::is_polymorphic<FAnimNode_ScaleChainLength>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ScaleChainLength cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength;
class UScriptStruct* FAnimNode_ScaleChainLength::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ScaleChainLength"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ScaleChainLength>()
{
	return FAnimNode_ScaleChainLength::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Scale the length of a chain of bones.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "ToolTip", "Scale the length of a chain of bones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChainLength_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "Comment", "/** Default chain length, as animated. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Default chain length, as animated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainStartBone_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainEndBone_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainInitialLength_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultChainLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChainStartBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChainEndBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChainInitialLength_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChainInitialLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ScaleChainLength>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ScaleChainLength, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPose_MetaData), NewProp_InputPose_MetaData) }; // 1074011079
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength = { "DefaultChainLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ScaleChainLength, DefaultChainLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChainLength_MetaData), NewProp_DefaultChainLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone = { "ChainStartBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ChainStartBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainStartBone_MetaData), NewProp_ChainStartBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone = { "ChainEndBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ChainEndBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainEndBone_MetaData), NewProp_ChainEndBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ScaleChainLength, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ScaleChainLength, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ScaleChainLength, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // 3603290969
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength = { "ChainInitialLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ChainInitialLength), Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainInitialLength_MetaData), NewProp_ChainInitialLength_MetaData) }; // 898995276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_ScaleChainLength",
	Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers),
	sizeof(FAnimNode_ScaleChainLength),
	alignof(FAnimNode_ScaleChainLength),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.InnerSingleton;
}
// End ScriptStruct FAnimNode_ScaleChainLength

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EScaleChainInitialLength_StaticEnum, TEXT("EScaleChainInitialLength"), &Z_Registration_Info_UEnum_EScaleChainInitialLength, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 898995276U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_ScaleChainLength::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewStructOps, TEXT("AnimNode_ScaleChainLength"), &Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ScaleChainLength), 2618723012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_4232892370(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
