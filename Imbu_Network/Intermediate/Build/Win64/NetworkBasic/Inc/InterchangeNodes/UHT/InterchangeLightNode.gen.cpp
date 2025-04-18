// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeLightNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLightNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeBaseLightNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeBaseLightNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeDirectionalLightNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeDirectionalLightNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeLightNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeLightNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangePointLightNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangePointLightNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeRectLightNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeRectLightNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSpotLightNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSpotLightNode_NoRegister();
INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Enum EInterchangeLightUnits
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeLightUnits;
static UEnum* EInterchangeLightUnits_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeLightUnits.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeLightUnits.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeLightUnits"));
	}
	return Z_Registration_Info_UEnum_EInterchangeLightUnits.OuterSingleton;
}
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeLightUnits>()
{
	return EInterchangeLightUnits_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Candelas.Name", "EInterchangeLightUnits::Candelas" },
		{ "Comment", "// This enum is used as a placeholder for ELightUnits. Because InterchangeWorker is not compiled against Engine, the LightFactoryNode is not affected.\n" },
		{ "EV.Name", "EInterchangeLightUnits::EV" },
		{ "Lumens.Name", "EInterchangeLightUnits::Lumens" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
		{ "ToolTip", "This enum is used as a placeholder for ELightUnits. Because InterchangeWorker is not compiled against Engine, the LightFactoryNode is not affected." },
		{ "Unitless.Name", "EInterchangeLightUnits::Unitless" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeLightUnits::Unitless", (int64)EInterchangeLightUnits::Unitless },
		{ "EInterchangeLightUnits::Candelas", (int64)EInterchangeLightUnits::Candelas },
		{ "EInterchangeLightUnits::Lumens", (int64)EInterchangeLightUnits::Lumens },
		{ "EInterchangeLightUnits::EV", (int64)EInterchangeLightUnits::EV },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	"EInterchangeLightUnits",
	"EInterchangeLightUnits",
	Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits()
{
	if (!Z_Registration_Info_UEnum_EInterchangeLightUnits.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeLightUnits.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeLightUnits.InnerSingleton;
}
// End Enum EInterchangeLightUnits

// Begin Class UInterchangeBaseLightNode Function GetCustomIntensity
struct Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics
{
	struct InterchangeBaseLightNode_eventGetCustomIntensity_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | BaseLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightNode_eventGetCustomIntensity_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventGetCustomIntensity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventGetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightNode, nullptr, "GetCustomIntensity", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::InterchangeBaseLightNode_eventGetCustomIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::InterchangeBaseLightNode_eventGetCustomIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightNode::execGetCustomIntensity)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIntensity(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightNode Function GetCustomIntensity

// Begin Class UInterchangeBaseLightNode Function GetCustomLightColor
struct Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics
{
	struct InterchangeBaseLightNode_eventGetCustomLightColor_Parms
	{
		FLinearColor AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | BaseLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightNode_eventGetCustomLightColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventGetCustomLightColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventGetCustomLightColor_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightNode, nullptr, "GetCustomLightColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::InterchangeBaseLightNode_eventGetCustomLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::InterchangeBaseLightNode_eventGetCustomLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightNode::execGetCustomLightColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomLightColor(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightNode Function GetCustomLightColor

// Begin Class UInterchangeBaseLightNode Function GetCustomTemperature
struct Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics
{
	struct InterchangeBaseLightNode_eventGetCustomTemperature_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | BaseLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightNode_eventGetCustomTemperature_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventGetCustomTemperature_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventGetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightNode, nullptr, "GetCustomTemperature", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::InterchangeBaseLightNode_eventGetCustomTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::InterchangeBaseLightNode_eventGetCustomTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightNode::execGetCustomTemperature)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTemperature(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightNode Function GetCustomTemperature

// Begin Class UInterchangeBaseLightNode Function GetCustomUseTemperature
struct Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics
{
	struct InterchangeBaseLightNode_eventGetCustomUseTemperature_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | BaseLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventGetCustomUseTemperature_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventGetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventGetCustomUseTemperature_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventGetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightNode, nullptr, "GetCustomUseTemperature", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::InterchangeBaseLightNode_eventGetCustomUseTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::InterchangeBaseLightNode_eventGetCustomUseTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightNode::execGetCustomUseTemperature)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseTemperature(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightNode Function GetCustomUseTemperature

// Begin Class UInterchangeBaseLightNode Function SetCustomIntensity
struct Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics
{
	struct InterchangeBaseLightNode_eventSetCustomIntensity_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | BaseLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightNode_eventSetCustomIntensity_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventSetCustomIntensity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventSetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightNode, nullptr, "SetCustomIntensity", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::InterchangeBaseLightNode_eventSetCustomIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::InterchangeBaseLightNode_eventSetCustomIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightNode::execSetCustomIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIntensity(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightNode Function SetCustomIntensity

// Begin Class UInterchangeBaseLightNode Function SetCustomLightColor
struct Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics
{
	struct InterchangeBaseLightNode_eventSetCustomLightColor_Parms
	{
		FLinearColor AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | BaseLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightNode_eventSetCustomLightColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventSetCustomLightColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventSetCustomLightColor_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightNode, nullptr, "SetCustomLightColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::InterchangeBaseLightNode_eventSetCustomLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::InterchangeBaseLightNode_eventSetCustomLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightNode::execSetCustomLightColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomLightColor(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightNode Function SetCustomLightColor

// Begin Class UInterchangeBaseLightNode Function SetCustomTemperature
struct Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics
{
	struct InterchangeBaseLightNode_eventSetCustomTemperature_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | BaseLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightNode_eventSetCustomTemperature_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventSetCustomTemperature_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventSetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightNode, nullptr, "SetCustomTemperature", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::InterchangeBaseLightNode_eventSetCustomTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::InterchangeBaseLightNode_eventSetCustomTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightNode::execSetCustomTemperature)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTemperature(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightNode Function SetCustomTemperature

// Begin Class UInterchangeBaseLightNode Function SetCustomUseTemperature
struct Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics
{
	struct InterchangeBaseLightNode_eventSetCustomUseTemperature_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | BaseLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventSetCustomUseTemperature_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventSetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightNode_eventSetCustomUseTemperature_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightNode_eventSetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightNode, nullptr, "SetCustomUseTemperature", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::InterchangeBaseLightNode_eventSetCustomUseTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::InterchangeBaseLightNode_eventSetCustomUseTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightNode::execSetCustomUseTemperature)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseTemperature(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightNode Function SetCustomUseTemperature

// Begin Class UInterchangeBaseLightNode
void UInterchangeBaseLightNode::StaticRegisterNativesUInterchangeBaseLightNode()
{
	UClass* Class = UInterchangeBaseLightNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomIntensity", &UInterchangeBaseLightNode::execGetCustomIntensity },
		{ "GetCustomLightColor", &UInterchangeBaseLightNode::execGetCustomLightColor },
		{ "GetCustomTemperature", &UInterchangeBaseLightNode::execGetCustomTemperature },
		{ "GetCustomUseTemperature", &UInterchangeBaseLightNode::execGetCustomUseTemperature },
		{ "SetCustomIntensity", &UInterchangeBaseLightNode::execSetCustomIntensity },
		{ "SetCustomLightColor", &UInterchangeBaseLightNode::execSetCustomLightColor },
		{ "SetCustomTemperature", &UInterchangeBaseLightNode::execSetCustomTemperature },
		{ "SetCustomUseTemperature", &UInterchangeBaseLightNode::execSetCustomUseTemperature },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBaseLightNode);
UClass* Z_Construct_UClass_UInterchangeBaseLightNode_NoRegister()
{
	return UInterchangeBaseLightNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeBaseLightNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomIntensity, "GetCustomIntensity" }, // 3259888977
		{ &Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomLightColor, "GetCustomLightColor" }, // 880800655
		{ &Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomTemperature, "GetCustomTemperature" }, // 325811630
		{ &Z_Construct_UFunction_UInterchangeBaseLightNode_GetCustomUseTemperature, "GetCustomUseTemperature" }, // 648491717
		{ &Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomIntensity, "SetCustomIntensity" }, // 1892367102
		{ &Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomLightColor, "SetCustomLightColor" }, // 1457055990
		{ &Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomTemperature, "SetCustomTemperature" }, // 122074383
		{ &Z_Construct_UFunction_UInterchangeBaseLightNode_SetCustomUseTemperature, "SetCustomUseTemperature" }, // 2118658294
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeBaseLightNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeBaseLightNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseLightNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBaseLightNode_Statics::ClassParams = {
	&UInterchangeBaseLightNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseLightNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeBaseLightNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeBaseLightNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeBaseLightNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBaseLightNode.OuterSingleton, Z_Construct_UClass_UInterchangeBaseLightNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeBaseLightNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeBaseLightNode>()
{
	return UInterchangeBaseLightNode::StaticClass();
}
UInterchangeBaseLightNode::UInterchangeBaseLightNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBaseLightNode);
UInterchangeBaseLightNode::~UInterchangeBaseLightNode() {}
// End Class UInterchangeBaseLightNode

// Begin Class UInterchangeLightNode Function GetCustomAttenuationRadius
struct Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics
{
	struct InterchangeLightNode_eventGetCustomAttenuationRadius_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventGetCustomAttenuationRadius_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventGetCustomAttenuationRadius_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventGetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "GetCustomAttenuationRadius", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::InterchangeLightNode_eventGetCustomAttenuationRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::InterchangeLightNode_eventGetCustomAttenuationRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execGetCustomAttenuationRadius)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAttenuationRadius(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function GetCustomAttenuationRadius

// Begin Class UInterchangeLightNode Function GetCustomIESBrightnessScale
struct Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics
{
	struct InterchangeLightNode_eventGetCustomIESBrightnessScale_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventGetCustomIESBrightnessScale_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventGetCustomIESBrightnessScale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventGetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "GetCustomIESBrightnessScale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::InterchangeLightNode_eventGetCustomIESBrightnessScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::InterchangeLightNode_eventGetCustomIESBrightnessScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execGetCustomIESBrightnessScale)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIESBrightnessScale(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function GetCustomIESBrightnessScale

// Begin Class UInterchangeLightNode Function GetCustomIESTexture
struct Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics
{
	struct InterchangeLightNode_eventGetCustomIESTexture_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventGetCustomIESTexture_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventGetCustomIESTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventGetCustomIESTexture_Parms), &Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "GetCustomIESTexture", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::InterchangeLightNode_eventGetCustomIESTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::InterchangeLightNode_eventGetCustomIESTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execGetCustomIESTexture)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIESTexture(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function GetCustomIESTexture

// Begin Class UInterchangeLightNode Function GetCustomIntensityUnits
struct Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics
{
	struct InterchangeLightNode_eventGetCustomIntensityUnits_Parms
	{
		EInterchangeLightUnits AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventGetCustomIntensityUnits_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits, METADATA_PARAMS(0, nullptr) }; // 3424831020
void Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventGetCustomIntensityUnits_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventGetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "GetCustomIntensityUnits", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::InterchangeLightNode_eventGetCustomIntensityUnits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::InterchangeLightNode_eventGetCustomIntensityUnits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execGetCustomIntensityUnits)
{
	P_GET_ENUM_REF(EInterchangeLightUnits,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIntensityUnits((EInterchangeLightUnits&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function GetCustomIntensityUnits

// Begin Class UInterchangeLightNode Function GetCustomRotation
struct Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics
{
	struct InterchangeLightNode_eventGetCustomRotation_Parms
	{
		FRotator AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventGetCustomRotation_Parms, AttributeValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventGetCustomRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventGetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "GetCustomRotation", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::InterchangeLightNode_eventGetCustomRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::InterchangeLightNode_eventGetCustomRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execGetCustomRotation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRotation(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function GetCustomRotation

// Begin Class UInterchangeLightNode Function GetCustomUseIESBrightness
struct Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics
{
	struct InterchangeLightNode_eventGetCustomUseIESBrightness_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventGetCustomUseIESBrightness_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventGetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventGetCustomUseIESBrightness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventGetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "GetCustomUseIESBrightness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::InterchangeLightNode_eventGetCustomUseIESBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::InterchangeLightNode_eventGetCustomUseIESBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execGetCustomUseIESBrightness)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseIESBrightness(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function GetCustomUseIESBrightness

// Begin Class UInterchangeLightNode Function SetCustomAttenuationRadius
struct Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics
{
	struct InterchangeLightNode_eventSetCustomAttenuationRadius_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventSetCustomAttenuationRadius_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomAttenuationRadius_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "SetCustomAttenuationRadius", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::InterchangeLightNode_eventSetCustomAttenuationRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::InterchangeLightNode_eventSetCustomAttenuationRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execSetCustomAttenuationRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAttenuationRadius(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function SetCustomAttenuationRadius

// Begin Class UInterchangeLightNode Function SetCustomIESBrightnessScale
struct Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics
{
	struct InterchangeLightNode_eventSetCustomIESBrightnessScale_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventSetCustomIESBrightnessScale_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomIESBrightnessScale_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomIESBrightnessScale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "SetCustomIESBrightnessScale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::InterchangeLightNode_eventSetCustomIESBrightnessScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::InterchangeLightNode_eventSetCustomIESBrightnessScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execSetCustomIESBrightnessScale)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIESBrightnessScale(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function SetCustomIESBrightnessScale

// Begin Class UInterchangeLightNode Function SetCustomIESTexture
struct Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics
{
	struct InterchangeLightNode_eventSetCustomIESTexture_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventSetCustomIESTexture_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomIESTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomIESTexture_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "SetCustomIESTexture", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::InterchangeLightNode_eventSetCustomIESTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::InterchangeLightNode_eventSetCustomIESTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execSetCustomIESTexture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIESTexture(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function SetCustomIESTexture

// Begin Class UInterchangeLightNode Function SetCustomIntensityUnits
struct Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics
{
	struct InterchangeLightNode_eventSetCustomIntensityUnits_Parms
	{
		EInterchangeLightUnits AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventSetCustomIntensityUnits_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeLightUnits, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 3424831020
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomIntensityUnits_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "SetCustomIntensityUnits", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::InterchangeLightNode_eventSetCustomIntensityUnits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::InterchangeLightNode_eventSetCustomIntensityUnits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execSetCustomIntensityUnits)
{
	P_GET_ENUM_REF(EInterchangeLightUnits,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIntensityUnits((EInterchangeLightUnits&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function SetCustomIntensityUnits

// Begin Class UInterchangeLightNode Function SetCustomRotation
struct Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics
{
	struct InterchangeLightNode_eventSetCustomRotation_Parms
	{
		FRotator AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightNode_eventSetCustomRotation_Parms, AttributeValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomRotation_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "SetCustomRotation", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::InterchangeLightNode_eventSetCustomRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::InterchangeLightNode_eventSetCustomRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execSetCustomRotation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRotation(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function SetCustomRotation

// Begin Class UInterchangeLightNode Function SetCustomUseIESBrightness
struct Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics
{
	struct InterchangeLightNode_eventSetCustomUseIESBrightness_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Light" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomUseIESBrightness_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomUseIESBrightness_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightNode_eventSetCustomUseIESBrightness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightNode, nullptr, "SetCustomUseIESBrightness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::InterchangeLightNode_eventSetCustomUseIESBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::InterchangeLightNode_eventSetCustomUseIESBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightNode::execSetCustomUseIESBrightness)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseIESBrightness(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeLightNode Function SetCustomUseIESBrightness

// Begin Class UInterchangeLightNode
void UInterchangeLightNode::StaticRegisterNativesUInterchangeLightNode()
{
	UClass* Class = UInterchangeLightNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomAttenuationRadius", &UInterchangeLightNode::execGetCustomAttenuationRadius },
		{ "GetCustomIESBrightnessScale", &UInterchangeLightNode::execGetCustomIESBrightnessScale },
		{ "GetCustomIESTexture", &UInterchangeLightNode::execGetCustomIESTexture },
		{ "GetCustomIntensityUnits", &UInterchangeLightNode::execGetCustomIntensityUnits },
		{ "GetCustomRotation", &UInterchangeLightNode::execGetCustomRotation },
		{ "GetCustomUseIESBrightness", &UInterchangeLightNode::execGetCustomUseIESBrightness },
		{ "SetCustomAttenuationRadius", &UInterchangeLightNode::execSetCustomAttenuationRadius },
		{ "SetCustomIESBrightnessScale", &UInterchangeLightNode::execSetCustomIESBrightnessScale },
		{ "SetCustomIESTexture", &UInterchangeLightNode::execSetCustomIESTexture },
		{ "SetCustomIntensityUnits", &UInterchangeLightNode::execSetCustomIntensityUnits },
		{ "SetCustomRotation", &UInterchangeLightNode::execSetCustomRotation },
		{ "SetCustomUseIESBrightness", &UInterchangeLightNode::execSetCustomUseIESBrightness },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLightNode);
UClass* Z_Construct_UClass_UInterchangeLightNode_NoRegister()
{
	return UInterchangeLightNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeLightNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeLightNode_GetCustomAttenuationRadius, "GetCustomAttenuationRadius" }, // 2255980457
		{ &Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESBrightnessScale, "GetCustomIESBrightnessScale" }, // 1656331628
		{ &Z_Construct_UFunction_UInterchangeLightNode_GetCustomIESTexture, "GetCustomIESTexture" }, // 1054706965
		{ &Z_Construct_UFunction_UInterchangeLightNode_GetCustomIntensityUnits, "GetCustomIntensityUnits" }, // 272562961
		{ &Z_Construct_UFunction_UInterchangeLightNode_GetCustomRotation, "GetCustomRotation" }, // 3458863736
		{ &Z_Construct_UFunction_UInterchangeLightNode_GetCustomUseIESBrightness, "GetCustomUseIESBrightness" }, // 2128555884
		{ &Z_Construct_UFunction_UInterchangeLightNode_SetCustomAttenuationRadius, "SetCustomAttenuationRadius" }, // 2000855024
		{ &Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESBrightnessScale, "SetCustomIESBrightnessScale" }, // 3677042302
		{ &Z_Construct_UFunction_UInterchangeLightNode_SetCustomIESTexture, "SetCustomIESTexture" }, // 972740156
		{ &Z_Construct_UFunction_UInterchangeLightNode_SetCustomIntensityUnits, "SetCustomIntensityUnits" }, // 4149839061
		{ &Z_Construct_UFunction_UInterchangeLightNode_SetCustomRotation, "SetCustomRotation" }, // 1282999204
		{ &Z_Construct_UFunction_UInterchangeLightNode_SetCustomUseIESBrightness, "SetCustomUseIESBrightness" }, // 2500630739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLightNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeLightNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseLightNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLightNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLightNode_Statics::ClassParams = {
	&UInterchangeLightNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLightNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeLightNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeLightNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeLightNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLightNode.OuterSingleton, Z_Construct_UClass_UInterchangeLightNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeLightNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeLightNode>()
{
	return UInterchangeLightNode::StaticClass();
}
UInterchangeLightNode::UInterchangeLightNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLightNode);
UInterchangeLightNode::~UInterchangeLightNode() {}
// End Class UInterchangeLightNode

// Begin Class UInterchangePointLightNode Function GetCustomLightFalloffExponent
struct Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics
{
	struct InterchangePointLightNode_eventGetCustomLightFalloffExponent_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePointLightNode_eventGetCustomLightFalloffExponent_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePointLightNode_eventGetCustomLightFalloffExponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightNode_eventGetCustomLightFalloffExponent_Parms), &Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightNode, nullptr, "GetCustomLightFalloffExponent", nullptr, nullptr, Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::InterchangePointLightNode_eventGetCustomLightFalloffExponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::InterchangePointLightNode_eventGetCustomLightFalloffExponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePointLightNode::execGetCustomLightFalloffExponent)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomLightFalloffExponent(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangePointLightNode Function GetCustomLightFalloffExponent

// Begin Class UInterchangePointLightNode Function GetCustomUseInverseSquaredFalloff
struct Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics
{
	struct InterchangePointLightNode_eventGetCustomUseInverseSquaredFalloff_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangePointLightNode_eventGetCustomUseInverseSquaredFalloff_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightNode_eventGetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePointLightNode_eventGetCustomUseInverseSquaredFalloff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightNode_eventGetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightNode, nullptr, "GetCustomUseInverseSquaredFalloff", nullptr, nullptr, Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightNode_eventGetCustomUseInverseSquaredFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightNode_eventGetCustomUseInverseSquaredFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePointLightNode::execGetCustomUseInverseSquaredFalloff)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseInverseSquaredFalloff(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangePointLightNode Function GetCustomUseInverseSquaredFalloff

// Begin Class UInterchangePointLightNode Function SetCustomLightFalloffExponent
struct Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics
{
	struct InterchangePointLightNode_eventSetCustomLightFalloffExponent_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePointLightNode_eventSetCustomLightFalloffExponent_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePointLightNode_eventSetCustomLightFalloffExponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightNode_eventSetCustomLightFalloffExponent_Parms), &Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightNode, nullptr, "SetCustomLightFalloffExponent", nullptr, nullptr, Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::InterchangePointLightNode_eventSetCustomLightFalloffExponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::InterchangePointLightNode_eventSetCustomLightFalloffExponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePointLightNode::execSetCustomLightFalloffExponent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomLightFalloffExponent(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangePointLightNode Function SetCustomLightFalloffExponent

// Begin Class UInterchangePointLightNode Function SetCustomUseInverseSquaredFalloff
struct Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics
{
	struct InterchangePointLightNode_eventSetCustomUseInverseSquaredFalloff_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangePointLightNode_eventSetCustomUseInverseSquaredFalloff_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightNode_eventSetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePointLightNode_eventSetCustomUseInverseSquaredFalloff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightNode_eventSetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightNode, nullptr, "SetCustomUseInverseSquaredFalloff", nullptr, nullptr, Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightNode_eventSetCustomUseInverseSquaredFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightNode_eventSetCustomUseInverseSquaredFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePointLightNode::execSetCustomUseInverseSquaredFalloff)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseInverseSquaredFalloff(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangePointLightNode Function SetCustomUseInverseSquaredFalloff

// Begin Class UInterchangePointLightNode
void UInterchangePointLightNode::StaticRegisterNativesUInterchangePointLightNode()
{
	UClass* Class = UInterchangePointLightNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomLightFalloffExponent", &UInterchangePointLightNode::execGetCustomLightFalloffExponent },
		{ "GetCustomUseInverseSquaredFalloff", &UInterchangePointLightNode::execGetCustomUseInverseSquaredFalloff },
		{ "SetCustomLightFalloffExponent", &UInterchangePointLightNode::execSetCustomLightFalloffExponent },
		{ "SetCustomUseInverseSquaredFalloff", &UInterchangePointLightNode::execSetCustomUseInverseSquaredFalloff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePointLightNode);
UClass* Z_Construct_UClass_UInterchangePointLightNode_NoRegister()
{
	return UInterchangePointLightNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangePointLightNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePointLightNode_GetCustomLightFalloffExponent, "GetCustomLightFalloffExponent" }, // 3688514843
		{ &Z_Construct_UFunction_UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff, "GetCustomUseInverseSquaredFalloff" }, // 3414502526
		{ &Z_Construct_UFunction_UInterchangePointLightNode_SetCustomLightFalloffExponent, "SetCustomLightFalloffExponent" }, // 1846119431
		{ &Z_Construct_UFunction_UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff, "SetCustomUseInverseSquaredFalloff" }, // 1084719521
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePointLightNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangePointLightNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeLightNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePointLightNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePointLightNode_Statics::ClassParams = {
	&UInterchangePointLightNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePointLightNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePointLightNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePointLightNode()
{
	if (!Z_Registration_Info_UClass_UInterchangePointLightNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePointLightNode.OuterSingleton, Z_Construct_UClass_UInterchangePointLightNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePointLightNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangePointLightNode>()
{
	return UInterchangePointLightNode::StaticClass();
}
UInterchangePointLightNode::UInterchangePointLightNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePointLightNode);
UInterchangePointLightNode::~UInterchangePointLightNode() {}
// End Class UInterchangePointLightNode

// Begin Class UInterchangeSpotLightNode Function GetCustomInnerConeAngle
struct Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics
{
	struct InterchangeSpotLightNode_eventGetCustomInnerConeAngle_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSpotLightNode_eventGetCustomInnerConeAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSpotLightNode_eventGetCustomInnerConeAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightNode_eventGetCustomInnerConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightNode, nullptr, "GetCustomInnerConeAngle", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::InterchangeSpotLightNode_eventGetCustomInnerConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::InterchangeSpotLightNode_eventGetCustomInnerConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSpotLightNode::execGetCustomInnerConeAngle)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomInnerConeAngle(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSpotLightNode Function GetCustomInnerConeAngle

// Begin Class UInterchangeSpotLightNode Function GetCustomOuterConeAngle
struct Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics
{
	struct InterchangeSpotLightNode_eventGetCustomOuterConeAngle_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSpotLightNode_eventGetCustomOuterConeAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSpotLightNode_eventGetCustomOuterConeAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightNode_eventGetCustomOuterConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightNode, nullptr, "GetCustomOuterConeAngle", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::InterchangeSpotLightNode_eventGetCustomOuterConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::InterchangeSpotLightNode_eventGetCustomOuterConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSpotLightNode::execGetCustomOuterConeAngle)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomOuterConeAngle(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSpotLightNode Function GetCustomOuterConeAngle

// Begin Class UInterchangeSpotLightNode Function SetCustomInnerConeAngle
struct Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics
{
	struct InterchangeSpotLightNode_eventSetCustomInnerConeAngle_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSpotLightNode_eventSetCustomInnerConeAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSpotLightNode_eventSetCustomInnerConeAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightNode_eventSetCustomInnerConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightNode, nullptr, "SetCustomInnerConeAngle", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::InterchangeSpotLightNode_eventSetCustomInnerConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::InterchangeSpotLightNode_eventSetCustomInnerConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSpotLightNode::execSetCustomInnerConeAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomInnerConeAngle(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSpotLightNode Function SetCustomInnerConeAngle

// Begin Class UInterchangeSpotLightNode Function SetCustomOuterConeAngle
struct Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics
{
	struct InterchangeSpotLightNode_eventSetCustomOuterConeAngle_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLight" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSpotLightNode_eventSetCustomOuterConeAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSpotLightNode_eventSetCustomOuterConeAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightNode_eventSetCustomOuterConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightNode, nullptr, "SetCustomOuterConeAngle", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::InterchangeSpotLightNode_eventSetCustomOuterConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::InterchangeSpotLightNode_eventSetCustomOuterConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSpotLightNode::execSetCustomOuterConeAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomOuterConeAngle(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSpotLightNode Function SetCustomOuterConeAngle

// Begin Class UInterchangeSpotLightNode
void UInterchangeSpotLightNode::StaticRegisterNativesUInterchangeSpotLightNode()
{
	UClass* Class = UInterchangeSpotLightNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomInnerConeAngle", &UInterchangeSpotLightNode::execGetCustomInnerConeAngle },
		{ "GetCustomOuterConeAngle", &UInterchangeSpotLightNode::execGetCustomOuterConeAngle },
		{ "SetCustomInnerConeAngle", &UInterchangeSpotLightNode::execSetCustomInnerConeAngle },
		{ "SetCustomOuterConeAngle", &UInterchangeSpotLightNode::execSetCustomOuterConeAngle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSpotLightNode);
UClass* Z_Construct_UClass_UInterchangeSpotLightNode_NoRegister()
{
	return UInterchangeSpotLightNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSpotLightNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomInnerConeAngle, "GetCustomInnerConeAngle" }, // 2076109464
		{ &Z_Construct_UFunction_UInterchangeSpotLightNode_GetCustomOuterConeAngle, "GetCustomOuterConeAngle" }, // 1550723256
		{ &Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomInnerConeAngle, "SetCustomInnerConeAngle" }, // 2462829413
		{ &Z_Construct_UFunction_UInterchangeSpotLightNode_SetCustomOuterConeAngle, "SetCustomOuterConeAngle" }, // 1629943063
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSpotLightNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSpotLightNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePointLightNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSpotLightNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSpotLightNode_Statics::ClassParams = {
	&UInterchangeSpotLightNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSpotLightNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSpotLightNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSpotLightNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeSpotLightNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSpotLightNode.OuterSingleton, Z_Construct_UClass_UInterchangeSpotLightNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSpotLightNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeSpotLightNode>()
{
	return UInterchangeSpotLightNode::StaticClass();
}
UInterchangeSpotLightNode::UInterchangeSpotLightNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSpotLightNode);
UInterchangeSpotLightNode::~UInterchangeSpotLightNode() {}
// End Class UInterchangeSpotLightNode

// Begin Class UInterchangeRectLightNode Function GetCustomSourceHeight
struct Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics
{
	struct InterchangeRectLightNode_eventGetCustomSourceHeight_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeRectLightNode_eventGetCustomSourceHeight_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeRectLightNode_eventGetCustomSourceHeight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightNode_eventGetCustomSourceHeight_Parms), &Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightNode, nullptr, "GetCustomSourceHeight", nullptr, nullptr, Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::InterchangeRectLightNode_eventGetCustomSourceHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::InterchangeRectLightNode_eventGetCustomSourceHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeRectLightNode::execGetCustomSourceHeight)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSourceHeight(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeRectLightNode Function GetCustomSourceHeight

// Begin Class UInterchangeRectLightNode Function GetCustomSourceWidth
struct Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics
{
	struct InterchangeRectLightNode_eventGetCustomSourceWidth_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeRectLightNode_eventGetCustomSourceWidth_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeRectLightNode_eventGetCustomSourceWidth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightNode_eventGetCustomSourceWidth_Parms), &Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightNode, nullptr, "GetCustomSourceWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::InterchangeRectLightNode_eventGetCustomSourceWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::InterchangeRectLightNode_eventGetCustomSourceWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeRectLightNode::execGetCustomSourceWidth)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSourceWidth(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeRectLightNode Function GetCustomSourceWidth

// Begin Class UInterchangeRectLightNode Function SetCustomSourceHeight
struct Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics
{
	struct InterchangeRectLightNode_eventSetCustomSourceHeight_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeRectLightNode_eventSetCustomSourceHeight_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeRectLightNode_eventSetCustomSourceHeight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightNode_eventSetCustomSourceHeight_Parms), &Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightNode, nullptr, "SetCustomSourceHeight", nullptr, nullptr, Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::InterchangeRectLightNode_eventSetCustomSourceHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::InterchangeRectLightNode_eventSetCustomSourceHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeRectLightNode::execSetCustomSourceHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSourceHeight(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeRectLightNode Function SetCustomSourceHeight

// Begin Class UInterchangeRectLightNode Function SetCustomSourceWidth
struct Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics
{
	struct InterchangeRectLightNode_eventSetCustomSourceWidth_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeRectLightNode_eventSetCustomSourceWidth_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeRectLightNode_eventSetCustomSourceWidth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightNode_eventSetCustomSourceWidth_Parms), &Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightNode, nullptr, "SetCustomSourceWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::InterchangeRectLightNode_eventSetCustomSourceWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::InterchangeRectLightNode_eventSetCustomSourceWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeRectLightNode::execSetCustomSourceWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSourceWidth(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeRectLightNode Function SetCustomSourceWidth

// Begin Class UInterchangeRectLightNode
void UInterchangeRectLightNode::StaticRegisterNativesUInterchangeRectLightNode()
{
	UClass* Class = UInterchangeRectLightNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomSourceHeight", &UInterchangeRectLightNode::execGetCustomSourceHeight },
		{ "GetCustomSourceWidth", &UInterchangeRectLightNode::execGetCustomSourceWidth },
		{ "SetCustomSourceHeight", &UInterchangeRectLightNode::execSetCustomSourceHeight },
		{ "SetCustomSourceWidth", &UInterchangeRectLightNode::execSetCustomSourceWidth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeRectLightNode);
UClass* Z_Construct_UClass_UInterchangeRectLightNode_NoRegister()
{
	return UInterchangeRectLightNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeRectLightNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceHeight, "GetCustomSourceHeight" }, // 2491652005
		{ &Z_Construct_UFunction_UInterchangeRectLightNode_GetCustomSourceWidth, "GetCustomSourceWidth" }, // 2606578560
		{ &Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceHeight, "SetCustomSourceHeight" }, // 4019133538
		{ &Z_Construct_UFunction_UInterchangeRectLightNode_SetCustomSourceWidth, "SetCustomSourceWidth" }, // 1190739246
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeRectLightNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeRectLightNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeLightNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeRectLightNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeRectLightNode_Statics::ClassParams = {
	&UInterchangeRectLightNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeRectLightNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeRectLightNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeRectLightNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeRectLightNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeRectLightNode.OuterSingleton, Z_Construct_UClass_UInterchangeRectLightNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeRectLightNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeRectLightNode>()
{
	return UInterchangeRectLightNode::StaticClass();
}
UInterchangeRectLightNode::UInterchangeRectLightNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeRectLightNode);
UInterchangeRectLightNode::~UInterchangeRectLightNode() {}
// End Class UInterchangeRectLightNode

// Begin Class UInterchangeDirectionalLightNode
void UInterchangeDirectionalLightNode::StaticRegisterNativesUInterchangeDirectionalLightNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDirectionalLightNode);
UClass* Z_Construct_UClass_UInterchangeDirectionalLightNode_NoRegister()
{
	return UInterchangeDirectionalLightNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDirectionalLightNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseLightNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics::ClassParams = {
	&UInterchangeDirectionalLightNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeDirectionalLightNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeDirectionalLightNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDirectionalLightNode.OuterSingleton, Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeDirectionalLightNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeDirectionalLightNode>()
{
	return UInterchangeDirectionalLightNode::StaticClass();
}
UInterchangeDirectionalLightNode::UInterchangeDirectionalLightNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDirectionalLightNode);
UInterchangeDirectionalLightNode::~UInterchangeDirectionalLightNode() {}
// End Class UInterchangeDirectionalLightNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeLightUnits_StaticEnum, TEXT("EInterchangeLightUnits"), &Z_Registration_Info_UEnum_EInterchangeLightUnits, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3424831020U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBaseLightNode, UInterchangeBaseLightNode::StaticClass, TEXT("UInterchangeBaseLightNode"), &Z_Registration_Info_UClass_UInterchangeBaseLightNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBaseLightNode), 108002177U) },
		{ Z_Construct_UClass_UInterchangeLightNode, UInterchangeLightNode::StaticClass, TEXT("UInterchangeLightNode"), &Z_Registration_Info_UClass_UInterchangeLightNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLightNode), 575101898U) },
		{ Z_Construct_UClass_UInterchangePointLightNode, UInterchangePointLightNode::StaticClass, TEXT("UInterchangePointLightNode"), &Z_Registration_Info_UClass_UInterchangePointLightNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePointLightNode), 3549369004U) },
		{ Z_Construct_UClass_UInterchangeSpotLightNode, UInterchangeSpotLightNode::StaticClass, TEXT("UInterchangeSpotLightNode"), &Z_Registration_Info_UClass_UInterchangeSpotLightNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSpotLightNode), 3914323628U) },
		{ Z_Construct_UClass_UInterchangeRectLightNode, UInterchangeRectLightNode::StaticClass, TEXT("UInterchangeRectLightNode"), &Z_Registration_Info_UClass_UInterchangeRectLightNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeRectLightNode), 965895509U) },
		{ Z_Construct_UClass_UInterchangeDirectionalLightNode, UInterchangeDirectionalLightNode::StaticClass, TEXT("UInterchangeDirectionalLightNode"), &Z_Registration_Info_UClass_UInterchangeDirectionalLightNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDirectionalLightNode), 3453089379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_43616409(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
