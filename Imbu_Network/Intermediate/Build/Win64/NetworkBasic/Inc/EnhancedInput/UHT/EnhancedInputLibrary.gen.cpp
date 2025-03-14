// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputLibrary.h"
#include "EnhancedInput/Public/EnhancedActionKeyMapping.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "EnhancedInput/Public/PlayerMappableKeySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLibrary();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLibrary_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionValueType();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeySlot();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Class UEnhancedInputLibrary Function BreakInputActionValue
struct Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics
{
	struct EnhancedInputLibrary_eventBreakInputActionValue_Parms
	{
		FInputActionValue InActionValue;
		double X;
		double Y;
		double Z;
		EInputActionValueType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Breaks an ActionValue into X, Y, Z. Axes not supported by value type will be 0. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks an ActionValue into X, Y, Z. Axes not supported by value type will be 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActionValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_X;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Y;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Z;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_InActionValue = { "InActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, InActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, Type), Z_Construct_UEnum_EnhancedInput_EInputActionValueType, METADATA_PARAMS(0, nullptr) }; // 3726302502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_InActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "BreakInputActionValue", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::EnhancedInputLibrary_eventBreakInputActionValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::EnhancedInputLibrary_eventBreakInputActionValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execBreakInputActionValue)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_InActionValue);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_X);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Y);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Z);
	P_GET_ENUM_REF(EInputActionValueType,Z_Param_Out_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEnhancedInputLibrary::BreakInputActionValue(Z_Param_InActionValue,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,(EInputActionValueType&)(Z_Param_Out_Type));
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function BreakInputActionValue

// Begin Class UEnhancedInputLibrary Function Conv_InputActionValueToAxis1D
struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics
{
	struct EnhancedInputLibrary_eventConv_InputActionValueToAxis1D_Parms
	{
		FInputActionValue InValue;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interpret an InputActionValue as a 1D axis (double) input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Interpret an InputActionValue as a 1D axis (double) input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis1D_Parms, InValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis1D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToAxis1D", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::EnhancedInputLibrary_eventConv_InputActionValueToAxis1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::EnhancedInputLibrary_eventConv_InputActionValueToAxis1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToAxis1D)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function Conv_InputActionValueToAxis1D

// Begin Class UEnhancedInputLibrary Function Conv_InputActionValueToAxis2D
struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics
{
	struct EnhancedInputLibrary_eventConv_InputActionValueToAxis2D_Parms
	{
		FInputActionValue InValue;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interpret an InputActionValue as a 2D axis (Vector2D) input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Interpret an InputActionValue as a 2D axis (Vector2D) input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis2D_Parms, InValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToAxis2D", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::EnhancedInputLibrary_eventConv_InputActionValueToAxis2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::EnhancedInputLibrary_eventConv_InputActionValueToAxis2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToAxis2D)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function Conv_InputActionValueToAxis2D

// Begin Class UEnhancedInputLibrary Function Conv_InputActionValueToAxis3D
struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics
{
	struct EnhancedInputLibrary_eventConv_InputActionValueToAxis3D_Parms
	{
		FInputActionValue ActionValue;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interpret an InputActionValue as a 3D axis (Vector) input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Interpret an InputActionValue as a 3D axis (Vector) input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis3D_Parms, ActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToAxis3D", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::EnhancedInputLibrary_eventConv_InputActionValueToAxis3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::EnhancedInputLibrary_eventConv_InputActionValueToAxis3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToAxis3D)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_ActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(Z_Param_ActionValue);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function Conv_InputActionValueToAxis3D

// Begin Class UEnhancedInputLibrary Function Conv_InputActionValueToBool
struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics
{
	struct EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms
	{
		FInputActionValue InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interpret an InputActionValue as a boolean input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Interpret an InputActionValue as a boolean input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms, InValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
void Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms), &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToBool", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToBool)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToBool(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function Conv_InputActionValueToBool

// Begin Class UEnhancedInputLibrary Function Conv_InputActionValueToString
struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics
{
	struct EnhancedInputLibrary_eventConv_InputActionValueToString_Parms
	{
		FInputActionValue ActionValue;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts a FInputActionValue to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (InputActionValue)" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Converts a FInputActionValue to a string" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToString_Parms, ActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToString", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::EnhancedInputLibrary_eventConv_InputActionValueToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::EnhancedInputLibrary_eventConv_InputActionValueToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToString)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_ActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToString(Z_Param_ActionValue);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function Conv_InputActionValueToString

// Begin Class UEnhancedInputLibrary Function Conv_TriggerEventValueToString
struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics
{
	struct EnhancedInputLibrary_eventConv_TriggerEventValueToString_Parms
	{
		ETriggerEvent TriggerEvent;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts an ETriggerEvent to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (ETriggerEvent)" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Converts an ETriggerEvent to a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_TriggerEventValueToString_Parms, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEvent_MetaData), NewProp_TriggerEvent_MetaData) }; // 3771639830
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_TriggerEventValueToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::NewProp_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::NewProp_TriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_TriggerEventValueToString", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::EnhancedInputLibrary_eventConv_TriggerEventValueToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::EnhancedInputLibrary_eventConv_TriggerEventValueToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_TriggerEventValueToString)
{
	P_GET_ENUM(ETriggerEvent,Z_Param_TriggerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEnhancedInputLibrary::Conv_TriggerEventValueToString(ETriggerEvent(Z_Param_TriggerEvent));
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function Conv_TriggerEventValueToString

// Begin Class UEnhancedInputLibrary Function FlushPlayerInput
struct Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics
{
	struct EnhancedInputLibrary_eventFlushPlayerInput_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Flushes the player controller's pressed keys\n\x09 * \n\x09 * @see APlayerController::FlushPressedKeys\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Flushes the player controller's pressed keys\n\n@see APlayerController::FlushPressedKeys" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventFlushPlayerInput_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "FlushPlayerInput", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::EnhancedInputLibrary_eventFlushPlayerInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::EnhancedInputLibrary_eventFlushPlayerInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execFlushPlayerInput)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEnhancedInputLibrary::FlushPlayerInput(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function FlushPlayerInput

// Begin Class UEnhancedInputLibrary Function GetBoundActionValue
struct Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics
{
	struct EnhancedInputLibrary_eventGetBoundActionValue_Parms
	{
		AActor* Actor;
		const UInputAction* Action;
		FInputActionValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// GetInputActionvalue internal accessor function for actions that have been bound to from a UEnhancedInputComponent\n" },
		{ "HidePin", "Action" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "GetInputActionvalue internal accessor function for actions that have been bound to from a UEnhancedInputComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetBoundActionValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetBoundActionValue_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetBoundActionValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetBoundActionValue", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::EnhancedInputLibrary_eventGetBoundActionValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::EnhancedInputLibrary_eventGetBoundActionValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execGetBoundActionValue)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionValue*)Z_Param__Result=UEnhancedInputLibrary::GetBoundActionValue(Z_Param_Actor,Z_Param_Action);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function GetBoundActionValue

// Begin Class UEnhancedInputLibrary Function GetFirstPlayerMappableKeySlot
struct Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics
{
	struct EnhancedInputLibrary_eventGetFirstPlayerMappableKeySlot_Parms
	{
		FPlayerMappableKeySlot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FPlayerMappableKeyOptions has been deprecated. Please use UPlayerMappableKeySettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "First Player Mappable Key Slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetFirstPlayerMappableKeySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(0, nullptr) }; // 2870632456
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetFirstPlayerMappableKeySlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetFirstPlayerMappableKeySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetFirstPlayerMappableKeySlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execGetFirstPlayerMappableKeySlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerMappableKeySlot*)Z_Param__Result=UEnhancedInputLibrary::GetFirstPlayerMappableKeySlot();
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function GetFirstPlayerMappableKeySlot

// Begin Class UEnhancedInputLibrary Function GetFourthPlayerMappableKeySlot
struct Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics
{
	struct EnhancedInputLibrary_eventGetFourthPlayerMappableKeySlot_Parms
	{
		FPlayerMappableKeySlot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FPlayerMappableKeyOptions has been deprecated. Please use UPlayerMappableKeySettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Fourth Player Mappable Key Slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetFourthPlayerMappableKeySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(0, nullptr) }; // 2870632456
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetFourthPlayerMappableKeySlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetFourthPlayerMappableKeySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetFourthPlayerMappableKeySlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execGetFourthPlayerMappableKeySlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerMappableKeySlot*)Z_Param__Result=UEnhancedInputLibrary::GetFourthPlayerMappableKeySlot();
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function GetFourthPlayerMappableKeySlot

// Begin Class UEnhancedInputLibrary Function GetMappingName
struct Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics
{
	struct EnhancedInputLibrary_eventGetMappingName_Parms
	{
		FEnhancedActionKeyMapping ActionKeyMapping;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Returns the name of the mapping based on setting behavior used. If no name is found in the Mappable Key Settings it will return the name set in Player Mappable Options if bIsPlayerMappable is true.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Mapping Name" },
		{ "ToolTip", "Returns the name of the mapping based on setting behavior used. If no name is found in the Mappable Key Settings it will return the name set in Player Mappable Options if bIsPlayerMappable is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionKeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionKeyMapping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ActionKeyMapping = { "ActionKeyMapping", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetMappingName_Parms, ActionKeyMapping), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionKeyMapping_MetaData), NewProp_ActionKeyMapping_MetaData) }; // 1438980558
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetMappingName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ActionKeyMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetMappingName", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::EnhancedInputLibrary_eventGetMappingName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::EnhancedInputLibrary_eventGetMappingName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execGetMappingName)
{
	P_GET_STRUCT_REF(FEnhancedActionKeyMapping,Z_Param_Out_ActionKeyMapping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UEnhancedInputLibrary::GetMappingName(Z_Param_Out_ActionKeyMapping);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function GetMappingName

// Begin Class UEnhancedInputLibrary Function GetPlayerMappableKeySettings
struct Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics
{
	struct EnhancedInputLibrary_eventGetPlayerMappableKeySettings_Parms
	{
		FEnhancedActionKeyMapping ActionKeyMapping;
		UPlayerMappableKeySettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Returns the Player Mappable Key Settings owned by the Action Key Mapping or by the referenced Input Action, or nothing based of the Setting Behavior.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Player Mappable Key Settings" },
		{ "ToolTip", "Returns the Player Mappable Key Settings owned by the Action Key Mapping or by the referenced Input Action, or nothing based of the Setting Behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionKeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionKeyMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ActionKeyMapping = { "ActionKeyMapping", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetPlayerMappableKeySettings_Parms, ActionKeyMapping), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionKeyMapping_MetaData), NewProp_ActionKeyMapping_MetaData) }; // 1438980558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetPlayerMappableKeySettings_Parms, ReturnValue), Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ActionKeyMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetPlayerMappableKeySettings", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::EnhancedInputLibrary_eventGetPlayerMappableKeySettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::EnhancedInputLibrary_eventGetPlayerMappableKeySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execGetPlayerMappableKeySettings)
{
	P_GET_STRUCT_REF(FEnhancedActionKeyMapping,Z_Param_Out_ActionKeyMapping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerMappableKeySettings**)Z_Param__Result=UEnhancedInputLibrary::GetPlayerMappableKeySettings(Z_Param_Out_ActionKeyMapping);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function GetPlayerMappableKeySettings

// Begin Class UEnhancedInputLibrary Function GetSecondPlayerMappableKeySlot
struct Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics
{
	struct EnhancedInputLibrary_eventGetSecondPlayerMappableKeySlot_Parms
	{
		FPlayerMappableKeySlot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FPlayerMappableKeyOptions has been deprecated. Please use UPlayerMappableKeySettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Second Player Mappable Key Slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetSecondPlayerMappableKeySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(0, nullptr) }; // 2870632456
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetSecondPlayerMappableKeySlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetSecondPlayerMappableKeySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetSecondPlayerMappableKeySlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execGetSecondPlayerMappableKeySlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerMappableKeySlot*)Z_Param__Result=UEnhancedInputLibrary::GetSecondPlayerMappableKeySlot();
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function GetSecondPlayerMappableKeySlot

// Begin Class UEnhancedInputLibrary Function GetThirdPlayerMappableKeySlot
struct Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics
{
	struct EnhancedInputLibrary_eventGetThirdPlayerMappableKeySlot_Parms
	{
		FPlayerMappableKeySlot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FPlayerMappableKeyOptions has been deprecated. Please use UPlayerMappableKeySettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Third Player Mappable Key Slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventGetThirdPlayerMappableKeySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(0, nullptr) }; // 2870632456
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetThirdPlayerMappableKeySlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetThirdPlayerMappableKeySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetThirdPlayerMappableKeySlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execGetThirdPlayerMappableKeySlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerMappableKeySlot*)Z_Param__Result=UEnhancedInputLibrary::GetThirdPlayerMappableKeySlot();
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function GetThirdPlayerMappableKeySlot

// Begin Class UEnhancedInputLibrary Function IsActionKeyMappingPlayerMappable
struct Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics
{
	struct EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms
	{
		FEnhancedActionKeyMapping ActionKeyMapping;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Returns true if this Action Key Mapping either holds a Player Mappable Key Settings or is set bIsPlayerMappable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Is Player Mappable" },
		{ "ToolTip", "Returns true if this Action Key Mapping either holds a Player Mappable Key Settings or is set bIsPlayerMappable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionKeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionKeyMapping;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ActionKeyMapping = { "ActionKeyMapping", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms, ActionKeyMapping), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionKeyMapping_MetaData), NewProp_ActionKeyMapping_MetaData) }; // 1438980558
void Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms), &Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ActionKeyMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "IsActionKeyMappingPlayerMappable", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execIsActionKeyMappingPlayerMappable)
{
	P_GET_STRUCT_REF(FEnhancedActionKeyMapping,Z_Param_Out_ActionKeyMapping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEnhancedInputLibrary::IsActionKeyMappingPlayerMappable(Z_Param_Out_ActionKeyMapping);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function IsActionKeyMappingPlayerMappable

// Begin Class UEnhancedInputLibrary Function MakeInputActionValue
struct Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics
{
	struct EnhancedInputLibrary_eventMakeInputActionValue_Parms
	{
		double X;
		double Y;
		double Z;
		FInputActionValue MatchValueType;
		FInputActionValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecatedMessage", "This version of MakeInputActionValue has been deprecated, please use MakeInputActionValueOfType" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchValueType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_X;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Y;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchValueType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_MatchValueType = { "MatchValueType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, MatchValueType), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchValueType_MetaData), NewProp_MatchValueType_MetaData) }; // 494646648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_MatchValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "MakeInputActionValue", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::EnhancedInputLibrary_eventMakeInputActionValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::EnhancedInputLibrary_eventMakeInputActionValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execMakeInputActionValue)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_X);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Y);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Z);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_MatchValueType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionValue*)Z_Param__Result=UEnhancedInputLibrary::MakeInputActionValue(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Out_MatchValueType);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function MakeInputActionValue

// Begin Class UEnhancedInputLibrary Function MakeInputActionValueOfType
struct Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics
{
	struct EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms
	{
		double X;
		double Y;
		double Z;
		EInputActionValueType ValueType;
		FInputActionValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Builds an ActionValue from X, Y, Z. Inherits type from an existing ActionValue. Ignores axis values unused by the provided value type.\n\x09 * @note Intended for use in Input Modifier Modify Raw overloads to modify an existing Input Action Value.\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Builds an ActionValue from X, Y, Z. Inherits type from an existing ActionValue. Ignores axis values unused by the provided value type.\n@note Intended for use in Input Modifier Modify Raw overloads to modify an existing Input Action Value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_X;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Y;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Z;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, ValueType), Z_Construct_UEnum_EnhancedInput_EInputActionValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 3726302502
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "MakeInputActionValueOfType", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execMakeInputActionValueOfType)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_X);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Y);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Z);
	P_GET_ENUM(EInputActionValueType,Z_Param_ValueType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionValue*)Z_Param__Result=UEnhancedInputLibrary::MakeInputActionValueOfType(Z_Param_X,Z_Param_Y,Z_Param_Z,EInputActionValueType(Z_Param_ValueType));
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function MakeInputActionValueOfType

// Begin Class UEnhancedInputLibrary Function RequestRebuildControlMappingsUsingContext
struct Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics
{
	struct EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms
	{
		const UInputMappingContext* Context;
		bool bForceImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Flag all enhanced input subsystems making use of the mapping context for reapplication of all control mappings at the end of this frame.\n\x09 * @param Context\x09\x09\x09\x09Mappings will be rebuilt for all subsystems utilizing this context.\n\x09 * @param bForceImmediately\x09\x09The mapping changes will be applied synchronously, rather than at the end of the frame, making them available to the input system on the same frame.\n\x09 */" },
		{ "CPP_Default_bForceImmediately", "false" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Flag all enhanced input subsystems making use of the mapping context for reapplication of all control mappings at the end of this frame.\n@param Context                               Mappings will be rebuilt for all subsystems utilizing this context.\n@param bForceImmediately             The mapping changes will be applied synchronously, rather than at the end of the frame, making them available to the input system on the same frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_bForceImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms, Context), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
void Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_bForceImmediately_SetBit(void* Obj)
{
	((EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms*)Obj)->bForceImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_bForceImmediately = { "bForceImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms), &Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_bForceImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_bForceImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "RequestRebuildControlMappingsUsingContext", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputLibrary::execRequestRebuildControlMappingsUsingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_Context);
	P_GET_UBOOL(Z_Param_bForceImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(Z_Param_Context,Z_Param_bForceImmediately);
	P_NATIVE_END;
}
// End Class UEnhancedInputLibrary Function RequestRebuildControlMappingsUsingContext

// Begin Class UEnhancedInputLibrary
void UEnhancedInputLibrary::StaticRegisterNativesUEnhancedInputLibrary()
{
	UClass* Class = UEnhancedInputLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakInputActionValue", &UEnhancedInputLibrary::execBreakInputActionValue },
		{ "Conv_InputActionValueToAxis1D", &UEnhancedInputLibrary::execConv_InputActionValueToAxis1D },
		{ "Conv_InputActionValueToAxis2D", &UEnhancedInputLibrary::execConv_InputActionValueToAxis2D },
		{ "Conv_InputActionValueToAxis3D", &UEnhancedInputLibrary::execConv_InputActionValueToAxis3D },
		{ "Conv_InputActionValueToBool", &UEnhancedInputLibrary::execConv_InputActionValueToBool },
		{ "Conv_InputActionValueToString", &UEnhancedInputLibrary::execConv_InputActionValueToString },
		{ "Conv_TriggerEventValueToString", &UEnhancedInputLibrary::execConv_TriggerEventValueToString },
		{ "FlushPlayerInput", &UEnhancedInputLibrary::execFlushPlayerInput },
		{ "GetBoundActionValue", &UEnhancedInputLibrary::execGetBoundActionValue },
		{ "GetFirstPlayerMappableKeySlot", &UEnhancedInputLibrary::execGetFirstPlayerMappableKeySlot },
		{ "GetFourthPlayerMappableKeySlot", &UEnhancedInputLibrary::execGetFourthPlayerMappableKeySlot },
		{ "GetMappingName", &UEnhancedInputLibrary::execGetMappingName },
		{ "GetPlayerMappableKeySettings", &UEnhancedInputLibrary::execGetPlayerMappableKeySettings },
		{ "GetSecondPlayerMappableKeySlot", &UEnhancedInputLibrary::execGetSecondPlayerMappableKeySlot },
		{ "GetThirdPlayerMappableKeySlot", &UEnhancedInputLibrary::execGetThirdPlayerMappableKeySlot },
		{ "IsActionKeyMappingPlayerMappable", &UEnhancedInputLibrary::execIsActionKeyMappingPlayerMappable },
		{ "MakeInputActionValue", &UEnhancedInputLibrary::execMakeInputActionValue },
		{ "MakeInputActionValueOfType", &UEnhancedInputLibrary::execMakeInputActionValueOfType },
		{ "RequestRebuildControlMappingsUsingContext", &UEnhancedInputLibrary::execRequestRebuildControlMappingsUsingContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputLibrary);
UClass* Z_Construct_UClass_UEnhancedInputLibrary_NoRegister()
{
	return UEnhancedInputLibrary::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnhancedInputLibrary.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue, "BreakInputActionValue" }, // 3769404315
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D, "Conv_InputActionValueToAxis1D" }, // 3954100345
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D, "Conv_InputActionValueToAxis2D" }, // 2385424234
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D, "Conv_InputActionValueToAxis3D" }, // 3246434920
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool, "Conv_InputActionValueToBool" }, // 2036835641
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString, "Conv_InputActionValueToString" }, // 2321486934
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_TriggerEventValueToString, "Conv_TriggerEventValueToString" }, // 1611481709
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_FlushPlayerInput, "FlushPlayerInput" }, // 3199004388
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue, "GetBoundActionValue" }, // 306732370
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot, "GetFirstPlayerMappableKeySlot" }, // 2397756392
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot, "GetFourthPlayerMappableKeySlot" }, // 950098250
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName, "GetMappingName" }, // 4170306221
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings, "GetPlayerMappableKeySettings" }, // 289381102
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot, "GetSecondPlayerMappableKeySlot" }, // 48160989
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot, "GetThirdPlayerMappableKeySlot" }, // 3866163294
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable, "IsActionKeyMappingPlayerMappable" }, // 3307478978
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue, "MakeInputActionValue" }, // 2162116965
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType, "MakeInputActionValueOfType" }, // 2770563264
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext, "RequestRebuildControlMappingsUsingContext" }, // 92743897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputLibrary_Statics::ClassParams = {
	&UEnhancedInputLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputLibrary()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputLibrary.OuterSingleton, Z_Construct_UClass_UEnhancedInputLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputLibrary.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputLibrary>()
{
	return UEnhancedInputLibrary::StaticClass();
}
UEnhancedInputLibrary::UEnhancedInputLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputLibrary);
UEnhancedInputLibrary::~UEnhancedInputLibrary() {}
// End Class UEnhancedInputLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputLibrary, UEnhancedInputLibrary::StaticClass, TEXT("UEnhancedInputLibrary"), &Z_Registration_Info_UClass_UEnhancedInputLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputLibrary), 2024838188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_2786150645(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
