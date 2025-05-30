// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_DebugTransform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Enum ERigUnitDebugTransformMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigUnitDebugTransformMode;
static UEnum* ERigUnitDebugTransformMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigUnitDebugTransformMode"));
	}
	return Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigUnitDebugTransformMode>()
{
	return ERigUnitDebugTransformMode_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axes.Comment", "/** Draw as axes */" },
		{ "Axes.Name", "ERigUnitDebugTransformMode::Axes" },
		{ "Axes.ToolTip", "Draw as axes" },
		{ "Box.Comment", "/** Draw as box */" },
		{ "Box.Name", "ERigUnitDebugTransformMode::Box" },
		{ "Box.ToolTip", "Draw as box" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigUnitDebugTransformMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
		{ "Point.Comment", "/** Draw as point */" },
		{ "Point.Name", "ERigUnitDebugTransformMode::Point" },
		{ "Point.ToolTip", "Draw as point" },
		{ "RigVMTypeAllowed", "" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigUnitDebugTransformMode::Point", (int64)ERigUnitDebugTransformMode::Point },
		{ "ERigUnitDebugTransformMode::Axes", (int64)ERigUnitDebugTransformMode::Axes },
		{ "ERigUnitDebugTransformMode::Box", (int64)ERigUnitDebugTransformMode::Box },
		{ "ERigUnitDebugTransformMode::Max", (int64)ERigUnitDebugTransformMode::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigUnitDebugTransformMode",
	"ERigUnitDebugTransformMode",
	Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode()
{
	if (!Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.InnerSingleton, Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigUnitDebugTransformMode.InnerSingleton;
}
// End Enum ERigUnitDebugTransformMode

// Begin ScriptStruct FRigVMFunction_DebugTransformMutableNoSpace
static_assert(std::is_polymorphic<FRigVMFunction_DebugTransformMutableNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugTransformMutableNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace;
class UScriptStruct* FRigVMFunction_DebugTransformMutableNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugTransformMutableNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute;
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitDebugTransformMode"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugTransformMutableNoSpace::Execute"), &FRigVMFunction_DebugTransformMutableNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugTransformMutableNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugTransformMutableNoSpace>()
{
	return FRigVMFunction_DebugTransformMutableNoSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Given a transform, will draw a point, axis, or a box in the viewport\n */" },
		{ "DisplayName", "Draw Transform" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
		{ "ToolTip", "Given a transform, will draw a point, axis, or a box in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugTransformMutableNoSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Mode), Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2050865422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformMutableNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_DebugTransformMutableNoSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_DebugTransformMutableNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
	&NewStructOps,
	"RigVMFunction_DebugTransformMutableNoSpace",
	Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::PropPointers),
	sizeof(FRigVMFunction_DebugTransformMutableNoSpace),
	alignof(FRigVMFunction_DebugTransformMutableNoSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace.InnerSingleton;
}
void FRigVMFunction_DebugTransformMutableNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_DebugTransformMutableNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Mode,
		Color,
		Thickness,
		Scale,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigVMFunction_DebugTransformMutableNoSpace

// Begin ScriptStruct FRigVMFunction_DebugTransformArrayMutable_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData;
class UScriptStruct* FRigVMFunction_DebugTransformArrayMutable_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugTransformArrayMutable_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugTransformArrayMutable_WorkData>()
{
	return FRigVMFunction_DebugTransformArrayMutable_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DrawTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugTransformArrayMutable_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms_Inner = { "DrawTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms = { "DrawTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutable_WorkData, DrawTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawTransforms_MetaData), NewProp_DrawTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewProp_DrawTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMFunction_DebugTransformArrayMutable_WorkData",
	Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::PropPointers),
	sizeof(FRigVMFunction_DebugTransformArrayMutable_WorkData),
	alignof(FRigVMFunction_DebugTransformArrayMutable_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_DebugTransformArrayMutable_WorkData

// Begin ScriptStruct FRigVMFunction_DebugTransformArrayMutableNoSpace
static_assert(std::is_polymorphic<FRigVMFunction_DebugTransformArrayMutableNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigVMFunction_DebugTransformArrayMutableNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace;
class UScriptStruct* FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugTransformArrayMutableNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute;
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("ParentIndices"), TEXT("TArray<int32>"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitDebugTransformMode"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DebugTransformArrayMutableNoSpace::Execute"), &FRigVMFunction_DebugTransformArrayMutableNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.OuterSingleton, Arguments_FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugTransformArrayMutableNoSpace>()
{
	return FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Given a transform array, will draw a point, axis, or a box in the viewport\n*/" },
		{ "DisplayName", "Draw Transform Array" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
		{ "ToolTip", "Given a transform array, will draw a point, axis, or a box in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndices_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentIndices;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugTransformArrayMutableNoSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices_Inner = { "ParentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices = { "ParentIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, ParentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndices_MetaData), NewProp_ParentIndices_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Mode), Z_Construct_UEnum_RigVM_ERigUnitDebugTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2050865422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_DebugTransformArrayMutableNoSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_DebugTransformArrayMutableNoSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_DebugTransformArrayMutableNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_ParentIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
	&NewStructOps,
	"RigVMFunction_DebugTransformArrayMutableNoSpace",
	Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::PropPointers),
	sizeof(FRigVMFunction_DebugTransformArrayMutableNoSpace),
	alignof(FRigVMFunction_DebugTransformArrayMutableNoSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace.InnerSingleton;
}
void FRigVMFunction_DebugTransformArrayMutableNoSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_DebugTransformArrayMutableNoSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FTransform> Transforms_0_Array(Transforms);
	TArrayView<const int32> ParentIndices_1_Array(ParentIndices);
	StaticExecute(
		InExecuteContext,
		Transforms_0_Array,
		ParentIndices_1_Array,
		Mode,
		Color,
		Thickness,
		Scale,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigVMFunction_DebugTransformArrayMutableNoSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigUnitDebugTransformMode_StaticEnum, TEXT("ERigUnitDebugTransformMode"), &Z_Registration_Info_UEnum_ERigUnitDebugTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2050865422U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_DebugTransformMutableNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugTransformMutableNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformMutableNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugTransformMutableNoSpace), 3351005294U) },
		{ FRigVMFunction_DebugTransformArrayMutable_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics::NewStructOps, TEXT("RigVMFunction_DebugTransformArrayMutable_WorkData"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutable_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugTransformArrayMutable_WorkData), 1014503887U) },
		{ FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_DebugTransformArrayMutableNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugTransformArrayMutableNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugTransformArrayMutableNoSpace), 2887698715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_3202582057(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
