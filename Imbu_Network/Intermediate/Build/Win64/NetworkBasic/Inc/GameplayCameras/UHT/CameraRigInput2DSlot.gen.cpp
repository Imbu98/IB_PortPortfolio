// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Input/CameraRigInput2DSlot.h"
#include "GameplayCameras/Public/Core/CameraVariableReferences.h"
#include "GameplayCameras/Public/Core/CameraVariableTableFwd.h"
#include "GameplayCameras/Public/Nodes/Input/CameraRigInputSlotTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigInput2DSlot() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigInput2DSlot();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigInput2DSlot_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInput2DCameraNode();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraParameterClamping();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraParameterNormalization();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigInputSlotParameters();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraVariableID();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraVariableReference();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraRigInput2DSlot
void UCameraRigInput2DSlot::StaticRegisterNativesUCameraRigInput2DSlot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRigInput2DSlot);
UClass* Z_Construct_UClass_UCameraRigInput2DSlot_NoRegister()
{
	return UCameraRigInput2DSlot::StaticClass();
}
struct Z_Construct_UClass_UCameraRigInput2DSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for a node that can handle and accumulate raw player input values.\n */" },
		{ "IncludePath", "Nodes/Input/CameraRigInput2DSlot.h" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
		{ "ToolTip", "The base class for a node that can handle and accumulate raw player input values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputSlotParameters_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Input processing parameters. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Input processing parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampX_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Clamping of the final input value. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
		{ "ToolTip", "Clamping of the final input value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampY_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Clamping of the final input value. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
		{ "ToolTip", "Clamping of the final input value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizeX_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Normalization of the final input value. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
		{ "ToolTip", "Normalization of the final input value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizeY_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Normalization of the final input value. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
		{ "ToolTip", "Normalization of the final input value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuiltInVariable_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The variable to use to blend with other input slots. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
		{ "ToolTip", "The variable to use to blend with other input slots." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomVariable_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The variable to use to blend with other input slots. */" },
		{ "EditCondition", "BuiltInVariable == EBuiltInVector2dCameraVariable::None" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
		{ "ToolTip", "The variable to use to blend with other input slots." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientVariableID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInput2DSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputSlotParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClampX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClampY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizeX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuiltInVariable_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuiltInVariable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomVariable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransientVariableID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraRigInput2DSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_InputSlotParameters = { "InputSlotParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInput2DSlot, InputSlotParameters), Z_Construct_UScriptStruct_FCameraRigInputSlotParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputSlotParameters_MetaData), NewProp_InputSlotParameters_MetaData) }; // 168626388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_ClampX = { "ClampX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInput2DSlot, ClampX), Z_Construct_UScriptStruct_FCameraParameterClamping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampX_MetaData), NewProp_ClampX_MetaData) }; // 2402098592
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_ClampY = { "ClampY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInput2DSlot, ClampY), Z_Construct_UScriptStruct_FCameraParameterClamping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampY_MetaData), NewProp_ClampY_MetaData) }; // 2402098592
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_NormalizeX = { "NormalizeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInput2DSlot, NormalizeX), Z_Construct_UScriptStruct_FCameraParameterNormalization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizeX_MetaData), NewProp_NormalizeX_MetaData) }; // 3287390986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_NormalizeY = { "NormalizeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInput2DSlot, NormalizeY), Z_Construct_UScriptStruct_FCameraParameterNormalization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizeY_MetaData), NewProp_NormalizeY_MetaData) }; // 3287390986
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_BuiltInVariable_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_BuiltInVariable = { "BuiltInVariable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInput2DSlot, BuiltInVariable), Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuiltInVariable_MetaData), NewProp_BuiltInVariable_MetaData) }; // 2766410892
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_CustomVariable = { "CustomVariable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInput2DSlot, CustomVariable), Z_Construct_UScriptStruct_FVector2dCameraVariableReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomVariable_MetaData), NewProp_CustomVariable_MetaData) }; // 2917942399
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_TransientVariableID = { "TransientVariableID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInput2DSlot, TransientVariableID), Z_Construct_UScriptStruct_FCameraVariableID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientVariableID_MetaData), NewProp_TransientVariableID_MetaData) }; // 303423562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_VariableID = { "VariableID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInput2DSlot, VariableID), Z_Construct_UScriptStruct_FCameraVariableID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableID_MetaData), NewProp_VariableID_MetaData) }; // 303423562
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraRigInput2DSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_InputSlotParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_ClampX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_ClampY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_NormalizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_NormalizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_BuiltInVariable_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_BuiltInVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_CustomVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_TransientVariableID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_VariableID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigInput2DSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraRigInput2DSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInput2DCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigInput2DSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRigInput2DSlot_Statics::ClassParams = {
	&UCameraRigInput2DSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraRigInput2DSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigInput2DSlot_Statics::PropPointers),
	0,
	0x002010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigInput2DSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRigInput2DSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraRigInput2DSlot()
{
	if (!Z_Registration_Info_UClass_UCameraRigInput2DSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRigInput2DSlot.OuterSingleton, Z_Construct_UClass_UCameraRigInput2DSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraRigInput2DSlot.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraRigInput2DSlot>()
{
	return UCameraRigInput2DSlot::StaticClass();
}
UCameraRigInput2DSlot::UCameraRigInput2DSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRigInput2DSlot);
UCameraRigInput2DSlot::~UCameraRigInput2DSlot() {}
// End Class UCameraRigInput2DSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraRigInput2DSlot, UCameraRigInput2DSlot::StaticClass, TEXT("UCameraRigInput2DSlot"), &Z_Registration_Info_UClass_UCameraRigInput2DSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRigInput2DSlot), 1833984829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_2495983688(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
