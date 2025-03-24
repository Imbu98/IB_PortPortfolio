// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeTextureNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureNode() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode_NoRegister();
INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace();
INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode();
INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Enum EInterchangeTextureWrapMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeTextureWrapMode;
static UEnum* EInterchangeTextureWrapMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeTextureWrapMode"));
	}
	return Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.OuterSingleton;
}
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeTextureWrapMode>()
{
	return EInterchangeTextureWrapMode_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clamp.Name", "EInterchangeTextureWrapMode::Clamp" },
		{ "Comment", "//ns UE\n" },
		{ "Mirror.Name", "EInterchangeTextureWrapMode::Mirror" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
		{ "ToolTip", "ns UE" },
		{ "Wrap.Name", "EInterchangeTextureWrapMode::Wrap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeTextureWrapMode::Wrap", (int64)EInterchangeTextureWrapMode::Wrap },
		{ "EInterchangeTextureWrapMode::Clamp", (int64)EInterchangeTextureWrapMode::Clamp },
		{ "EInterchangeTextureWrapMode::Mirror", (int64)EInterchangeTextureWrapMode::Mirror },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	"EInterchangeTextureWrapMode",
	"EInterchangeTextureWrapMode",
	Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.InnerSingleton;
}
// End Enum EInterchangeTextureWrapMode

// Begin Enum EInterchangeTextureFilterMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeTextureFilterMode;
static UEnum* EInterchangeTextureFilterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeTextureFilterMode"));
	}
	return Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.OuterSingleton;
}
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeTextureFilterMode>()
{
	return EInterchangeTextureFilterMode_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bilinear.Name", "EInterchangeTextureFilterMode::Bilinear" },
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/** Use setting from the Texture Group. */" },
		{ "Default.Name", "EInterchangeTextureFilterMode::Default" },
		{ "Default.ToolTip", "Use setting from the Texture Group." },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
		{ "Nearest.Name", "EInterchangeTextureFilterMode::Nearest" },
		{ "Trilinear.Name", "EInterchangeTextureFilterMode::Trilinear" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeTextureFilterMode::Nearest", (int64)EInterchangeTextureFilterMode::Nearest },
		{ "EInterchangeTextureFilterMode::Bilinear", (int64)EInterchangeTextureFilterMode::Bilinear },
		{ "EInterchangeTextureFilterMode::Trilinear", (int64)EInterchangeTextureFilterMode::Trilinear },
		{ "EInterchangeTextureFilterMode::Default", (int64)EInterchangeTextureFilterMode::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	"EInterchangeTextureFilterMode",
	"EInterchangeTextureFilterMode",
	Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.InnerSingleton;
}
// End Enum EInterchangeTextureFilterMode

// Begin Enum EInterchangeTextureColorSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeTextureColorSpace;
static UEnum* EInterchangeTextureColorSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTextureColorSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeTextureColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeTextureColorSpace"));
	}
	return Z_Registration_Info_UEnum_EInterchangeTextureColorSpace.OuterSingleton;
}
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeTextureColorSpace>()
{
	return EInterchangeTextureColorSpace_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
		{ "TCS_ACESAP0.DIsplayName", "ACES AP0" },
		{ "TCS_ACESAP0.Name", "EInterchangeTextureColorSpace::TCS_ACESAP0" },
		{ "TCS_ACESAP0.ToolTip", "ACES AP0 wide gamut primaries, with D60 white point." },
		{ "TCS_ACESAP1.DIsplayName", "ACES AP1 / ACEScg" },
		{ "TCS_ACESAP1.Name", "EInterchangeTextureColorSpace::TCS_ACESAP1" },
		{ "TCS_ACESAP1.ToolTip", "ACES AP1 / ACEScg wide gamut primaries, with D60 white point." },
		{ "TCS_AlexaWideGamut.DisplayName", "Alexa Wide Gamut" },
		{ "TCS_AlexaWideGamut.Name", "EInterchangeTextureColorSpace::TCS_AlexaWideGamut" },
		{ "TCS_AlexaWideGamut.ToolTip", "Alexa Wide Gamut primaries, with D65 white point." },
		{ "TCS_CanonCinemaGamut.DisplayName", "Canon Cinema Gamut" },
		{ "TCS_CanonCinemaGamut.Name", "EInterchangeTextureColorSpace::TCS_CanonCinemaGamut" },
		{ "TCS_CanonCinemaGamut.ToolTip", "Canon Cinema Gamut primaries, with D65 white point." },
		{ "TCS_Custom.DisplayName", "Custom" },
		{ "TCS_Custom.Name", "EInterchangeTextureColorSpace::TCS_Custom" },
		{ "TCS_Custom.ToolTip", "User defined color space and white point." },
		{ "TCS_GoProProtuneNative.DisplayName", "GoPro Protune Native" },
		{ "TCS_GoProProtuneNative.Name", "EInterchangeTextureColorSpace::TCS_GoProProtuneNative" },
		{ "TCS_GoProProtuneNative.ToolTip", "GoPro Protune Native primaries, with D65 white point." },
		{ "TCS_MAX.Name", "EInterchangeTextureColorSpace::TCS_MAX" },
		{ "TCS_None.DisplayName", "None" },
		{ "TCS_None.Name", "EInterchangeTextureColorSpace::TCS_None" },
		{ "TCS_None.ToolTip", "No explicit color space definition." },
		{ "TCS_P3D65.DisplayName", "P3D65" },
		{ "TCS_P3D65.Name", "EInterchangeTextureColorSpace::TCS_P3D65" },
		{ "TCS_P3D65.ToolTip", "P3 (Display) primaries, with D65 white point." },
		{ "TCS_P3DCI.DisplayName", "P3DCI" },
		{ "TCS_P3DCI.Name", "EInterchangeTextureColorSpace::TCS_P3DCI" },
		{ "TCS_P3DCI.ToolTip", "P3 (Theater) primaries, with DCI Calibration white point." },
		{ "TCS_PanasonicVGamut.DisplayName", "Panasonic V-Gamut" },
		{ "TCS_PanasonicVGamut.Name", "EInterchangeTextureColorSpace::TCS_PanasonicVGamut" },
		{ "TCS_PanasonicVGamut.ToolTip", "Panasonic V-Gamut primaries, with D65 white point." },
		{ "TCS_Rec2020.DisplayName", "Rec2020" },
		{ "TCS_Rec2020.Name", "EInterchangeTextureColorSpace::TCS_Rec2020" },
		{ "TCS_Rec2020.ToolTip", "Rec2020 (BT.2020) primaries with D65 white point." },
		{ "TCS_REDWideGamut.DisplayName", "RED Wide Gamut" },
		{ "TCS_REDWideGamut.Name", "EInterchangeTextureColorSpace::TCS_REDWideGamut" },
		{ "TCS_REDWideGamut.ToolTip", "RED Wide Gamut primaries, with D65 white point." },
		{ "TCS_SonySGamut3.DisplayName", "Sony S-Gamut3" },
		{ "TCS_SonySGamut3.Name", "EInterchangeTextureColorSpace::TCS_SonySGamut3" },
		{ "TCS_SonySGamut3.ToolTip", "Sony S-Gamut/S-Gamut3 primaries, with D65 white point." },
		{ "TCS_SonySGamut3Cine.DisplayName", "Sony S-Gamut3 Cine" },
		{ "TCS_SonySGamut3Cine.Name", "EInterchangeTextureColorSpace::TCS_SonySGamut3Cine" },
		{ "TCS_SonySGamut3Cine.ToolTip", "Sony S-Gamut3 Cine primaries, with D65 white point." },
		{ "TCS_sRGB.DisplayName", "sRGB / Rec709" },
		{ "TCS_sRGB.Name", "EInterchangeTextureColorSpace::TCS_sRGB" },
		{ "TCS_sRGB.ToolTip", "sRGB / Rec709 (BT.709) color primaries, with D65 white point." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeTextureColorSpace::TCS_None", (int64)EInterchangeTextureColorSpace::TCS_None },
		{ "EInterchangeTextureColorSpace::TCS_sRGB", (int64)EInterchangeTextureColorSpace::TCS_sRGB },
		{ "EInterchangeTextureColorSpace::TCS_Rec2020", (int64)EInterchangeTextureColorSpace::TCS_Rec2020 },
		{ "EInterchangeTextureColorSpace::TCS_ACESAP0", (int64)EInterchangeTextureColorSpace::TCS_ACESAP0 },
		{ "EInterchangeTextureColorSpace::TCS_ACESAP1", (int64)EInterchangeTextureColorSpace::TCS_ACESAP1 },
		{ "EInterchangeTextureColorSpace::TCS_P3DCI", (int64)EInterchangeTextureColorSpace::TCS_P3DCI },
		{ "EInterchangeTextureColorSpace::TCS_P3D65", (int64)EInterchangeTextureColorSpace::TCS_P3D65 },
		{ "EInterchangeTextureColorSpace::TCS_REDWideGamut", (int64)EInterchangeTextureColorSpace::TCS_REDWideGamut },
		{ "EInterchangeTextureColorSpace::TCS_SonySGamut3", (int64)EInterchangeTextureColorSpace::TCS_SonySGamut3 },
		{ "EInterchangeTextureColorSpace::TCS_SonySGamut3Cine", (int64)EInterchangeTextureColorSpace::TCS_SonySGamut3Cine },
		{ "EInterchangeTextureColorSpace::TCS_AlexaWideGamut", (int64)EInterchangeTextureColorSpace::TCS_AlexaWideGamut },
		{ "EInterchangeTextureColorSpace::TCS_CanonCinemaGamut", (int64)EInterchangeTextureColorSpace::TCS_CanonCinemaGamut },
		{ "EInterchangeTextureColorSpace::TCS_GoProProtuneNative", (int64)EInterchangeTextureColorSpace::TCS_GoProProtuneNative },
		{ "EInterchangeTextureColorSpace::TCS_PanasonicVGamut", (int64)EInterchangeTextureColorSpace::TCS_PanasonicVGamut },
		{ "EInterchangeTextureColorSpace::TCS_Custom", (int64)EInterchangeTextureColorSpace::TCS_Custom },
		{ "EInterchangeTextureColorSpace::TCS_MAX", (int64)EInterchangeTextureColorSpace::TCS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	"EInterchangeTextureColorSpace",
	"EInterchangeTextureColorSpace",
	Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTextureColorSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeTextureColorSpace.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeTextureColorSpace.InnerSingleton;
}
// End Enum EInterchangeTextureColorSpace

// Begin Class UInterchangeTextureNode Function GetCustombFlipGreenChannel
struct Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics
{
	struct InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "GetCustombFlipGreenChannel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureNode::execGetCustombFlipGreenChannel)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustombFlipGreenChannel(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTextureNode Function GetCustombFlipGreenChannel

// Begin Class UInterchangeTextureNode Function GetCustomColorSpace
struct Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics
{
	struct InterchangeTextureNode_eventGetCustomColorSpace_Parms
	{
		EInterchangeTextureColorSpace AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureNode_eventGetCustomColorSpace_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace, METADATA_PARAMS(0, nullptr) }; // 2630042611
void Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventGetCustomColorSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustomColorSpace_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "GetCustomColorSpace", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::InterchangeTextureNode_eventGetCustomColorSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::InterchangeTextureNode_eventGetCustomColorSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureNode::execGetCustomColorSpace)
{
	P_GET_ENUM_REF(EInterchangeTextureColorSpace,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomColorSpace((EInterchangeTextureColorSpace&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeTextureNode Function GetCustomColorSpace

// Begin Class UInterchangeTextureNode Function GetCustomFilter
struct Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics
{
	struct InterchangeTextureNode_eventGetCustomFilter_Parms
	{
		EInterchangeTextureFilterMode AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureNode_eventGetCustomFilter_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode, METADATA_PARAMS(0, nullptr) }; // 2230162296
void Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventGetCustomFilter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustomFilter_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "GetCustomFilter", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::InterchangeTextureNode_eventGetCustomFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::InterchangeTextureNode_eventGetCustomFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureNode::execGetCustomFilter)
{
	P_GET_ENUM_REF(EInterchangeTextureFilterMode,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomFilter((EInterchangeTextureFilterMode&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeTextureNode Function GetCustomFilter

// Begin Class UInterchangeTextureNode Function GetCustomSRGB
struct Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics
{
	struct InterchangeTextureNode_eventGetCustomSRGB_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventGetCustomSRGB_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventGetCustomSRGB_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "GetCustomSRGB", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::InterchangeTextureNode_eventGetCustomSRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::InterchangeTextureNode_eventGetCustomSRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureNode::execGetCustomSRGB)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSRGB(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTextureNode Function GetCustomSRGB

// Begin Class UInterchangeTextureNode Function SetCustombFlipGreenChannel
struct Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics
{
	struct InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "SetCustombFlipGreenChannel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureNode::execSetCustombFlipGreenChannel)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustombFlipGreenChannel(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTextureNode Function SetCustombFlipGreenChannel

// Begin Class UInterchangeTextureNode Function SetCustomColorSpace
struct Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics
{
	struct InterchangeTextureNode_eventSetCustomColorSpace_Parms
	{
		EInterchangeTextureColorSpace AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureNode_eventSetCustomColorSpace_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureColorSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 2630042611
void Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventSetCustomColorSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustomColorSpace_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "SetCustomColorSpace", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::InterchangeTextureNode_eventSetCustomColorSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::InterchangeTextureNode_eventSetCustomColorSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureNode::execSetCustomColorSpace)
{
	P_GET_ENUM_REF(EInterchangeTextureColorSpace,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomColorSpace((EInterchangeTextureColorSpace&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeTextureNode Function SetCustomColorSpace

// Begin Class UInterchangeTextureNode Function SetCustomFilter
struct Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics
{
	struct InterchangeTextureNode_eventSetCustomFilter_Parms
	{
		EInterchangeTextureFilterMode AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureNode_eventSetCustomFilter_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 2230162296
void Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventSetCustomFilter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustomFilter_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "SetCustomFilter", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::InterchangeTextureNode_eventSetCustomFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::InterchangeTextureNode_eventSetCustomFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureNode::execSetCustomFilter)
{
	P_GET_ENUM_REF(EInterchangeTextureFilterMode,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomFilter((EInterchangeTextureFilterMode&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeTextureNode Function SetCustomFilter

// Begin Class UInterchangeTextureNode Function SetCustomSRGB
struct Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics
{
	struct InterchangeTextureNode_eventSetCustomSRGB_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventSetCustomSRGB_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureNode_eventSetCustomSRGB_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "SetCustomSRGB", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::InterchangeTextureNode_eventSetCustomSRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::InterchangeTextureNode_eventSetCustomSRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureNode::execSetCustomSRGB)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSRGB(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTextureNode Function SetCustomSRGB

// Begin Class UInterchangeTextureNode Function SetPayLoadKey
struct Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics
{
	struct InterchangeTextureNode_eventSetPayLoadKey_Parms
	{
		FString PayloadKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureNode_eventSetPayLoadKey_Parms, PayloadKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadKey_MetaData), NewProp_PayloadKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::NewProp_PayloadKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "SetPayLoadKey", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::InterchangeTextureNode_eventSetPayLoadKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::InterchangeTextureNode_eventSetPayLoadKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureNode::execSetPayLoadKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPayLoadKey(Z_Param_PayloadKey);
	P_NATIVE_END;
}
// End Class UInterchangeTextureNode Function SetPayLoadKey

// Begin Class UInterchangeTextureNode
void UInterchangeTextureNode::StaticRegisterNativesUInterchangeTextureNode()
{
	UClass* Class = UInterchangeTextureNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustombFlipGreenChannel", &UInterchangeTextureNode::execGetCustombFlipGreenChannel },
		{ "GetCustomColorSpace", &UInterchangeTextureNode::execGetCustomColorSpace },
		{ "GetCustomFilter", &UInterchangeTextureNode::execGetCustomFilter },
		{ "GetCustomSRGB", &UInterchangeTextureNode::execGetCustomSRGB },
		{ "SetCustombFlipGreenChannel", &UInterchangeTextureNode::execSetCustombFlipGreenChannel },
		{ "SetCustomColorSpace", &UInterchangeTextureNode::execSetCustomColorSpace },
		{ "SetCustomFilter", &UInterchangeTextureNode::execSetCustomFilter },
		{ "SetCustomSRGB", &UInterchangeTextureNode::execSetCustomSRGB },
		{ "SetPayLoadKey", &UInterchangeTextureNode::execSetPayLoadKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureNode);
UClass* Z_Construct_UClass_UInterchangeTextureNode_NoRegister()
{
	return UInterchangeTextureNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTextureNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeTextureNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel, "GetCustombFlipGreenChannel" }, // 1774899778
		{ &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomColorSpace, "GetCustomColorSpace" }, // 3246884468
		{ &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter, "GetCustomFilter" }, // 2743989631
		{ &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB, "GetCustomSRGB" }, // 3418142819
		{ &Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel, "SetCustombFlipGreenChannel" }, // 3906310619
		{ &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomColorSpace, "SetCustomColorSpace" }, // 4049473409
		{ &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter, "SetCustomFilter" }, // 63513202
		{ &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB, "SetCustomSRGB" }, // 54225375
		{ &Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey, "SetPayLoadKey" }, // 2784233140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTextureNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureNode_Statics::ClassParams = {
	&UInterchangeTextureNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTextureNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeTextureNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTextureNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTextureNode>()
{
	return UInterchangeTextureNode::StaticClass();
}
UInterchangeTextureNode::UInterchangeTextureNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureNode);
UInterchangeTextureNode::~UInterchangeTextureNode() {}
// End Class UInterchangeTextureNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeTextureWrapMode_StaticEnum, TEXT("EInterchangeTextureWrapMode"), &Z_Registration_Info_UEnum_EInterchangeTextureWrapMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1164977007U) },
		{ EInterchangeTextureFilterMode_StaticEnum, TEXT("EInterchangeTextureFilterMode"), &Z_Registration_Info_UEnum_EInterchangeTextureFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2230162296U) },
		{ EInterchangeTextureColorSpace_StaticEnum, TEXT("EInterchangeTextureColorSpace"), &Z_Registration_Info_UEnum_EInterchangeTextureColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2630042611U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureNode, UInterchangeTextureNode::StaticClass, TEXT("UInterchangeTextureNode"), &Z_Registration_Info_UClass_UInterchangeTextureNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureNode), 1541796614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_2643780803(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
