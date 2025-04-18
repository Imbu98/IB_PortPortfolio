// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_GetControlTransform.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_GetControlTransform() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlBool();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlFloat();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlInteger();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlRotator();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlVector();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_GetControlBool
static_assert(std::is_polymorphic<FRigUnit_GetControlBool>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlBool cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlBool;
class UScriptStruct* FRigUnit_GetControlBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlBool, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlBool"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlBool_Execute;
		Arguments_FRigUnit_GetControlBool_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlBool_Execute.Emplace(TEXT("BoolValue"), TEXT("bool"));
		Arguments_FRigUnit_GetControlBool_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlBool::Execute"), &FRigUnit_GetControlBool::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlBool.OuterSingleton, Arguments_FRigUnit_GetControlBool_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlBool.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlBool>()
{
	return FRigUnit_GetControlBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlBool is used to retrieve a single Bool from a hierarchy.\n */" },
		{ "DisplayName", "Get Control Bool" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlBool" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "GetControlValue" },
		{ "ToolTip", "GetControlBool is used to retrieve a single Bool from a hierarchy." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to retrieve the bool for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "The name of the Control to retrieve the bool for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current bool of the given bone - or identity in case it wasn't found.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current bool of the given bone - or identity in case it wasn't found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlBool, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FRigUnit_GetControlBool*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetControlBool), &Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlBool, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlBool",
	Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::PropPointers),
	sizeof(FRigUnit_GetControlBool),
	alignof(FRigUnit_GetControlBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlBool()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlBool.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlBool.InnerSingleton;
}
void FRigUnit_GetControlBool::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlBool::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		BoolValue,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlBool

// Begin ScriptStruct FRigUnit_GetControlFloat
static_assert(std::is_polymorphic<FRigUnit_GetControlFloat>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlFloat cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlFloat;
class UScriptStruct* FRigUnit_GetControlFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlFloat, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlFloat_Execute;
		Arguments_FRigUnit_GetControlFloat_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlFloat_Execute.Emplace(TEXT("FloatValue"), TEXT("float"));
		Arguments_FRigUnit_GetControlFloat_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_GetControlFloat_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_GetControlFloat_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlFloat::Execute"), &FRigUnit_GetControlFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlFloat.OuterSingleton, Arguments_FRigUnit_GetControlFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlFloat>()
{
	return FRigUnit_GetControlFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlFloat is used to retrieve a single Float from a hierarchy.\n */" },
		{ "DisplayName", "Get Control Float" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlFloat" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "GetControlValue" },
		{ "ToolTip", "GetControlFloat is used to retrieve a single Float from a hierarchy." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to retrieve the Float for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "The name of the Control to retrieve the Float for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the control." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The minimum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The minimum value of the control." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The maximum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The maximum value of the control." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlFloat, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlFloat, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlFloat, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlFloat, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlFloat, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlFloat",
	Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::PropPointers),
	sizeof(FRigUnit_GetControlFloat),
	alignof(FRigUnit_GetControlFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlFloat()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlFloat.InnerSingleton;
}
void FRigUnit_GetControlFloat::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlFloat::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		FloatValue,
		Minimum,
		Maximum,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlFloat

// Begin ScriptStruct FRigUnit_GetControlInteger
static_assert(std::is_polymorphic<FRigUnit_GetControlInteger>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlInteger cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlInteger;
class UScriptStruct* FRigUnit_GetControlInteger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlInteger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlInteger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlInteger, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlInteger"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlInteger_Execute;
		Arguments_FRigUnit_GetControlInteger_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlInteger_Execute.Emplace(TEXT("IntegerValue"), TEXT("int32"));
		Arguments_FRigUnit_GetControlInteger_Execute.Emplace(TEXT("Minimum"), TEXT("int32"));
		Arguments_FRigUnit_GetControlInteger_Execute.Emplace(TEXT("Maximum"), TEXT("int32"));
		Arguments_FRigUnit_GetControlInteger_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlInteger::Execute"), &FRigUnit_GetControlInteger::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlInteger.OuterSingleton, Arguments_FRigUnit_GetControlInteger_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlInteger.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlInteger>()
{
	return FRigUnit_GetControlInteger::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlFloat is used to retrieve a single Integer from a hierarchy.\n */" },
		{ "DisplayName", "Get Control Integer" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlInteger,GetControlEnum" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "GetControlValue" },
		{ "ToolTip", "GetControlFloat is used to retrieve a single Integer from a hierarchy." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to retrieve the Integer for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "The name of the Control to retrieve the Integer for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The minimum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The minimum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The maximum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The maximum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlInteger>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlInteger, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlInteger, IntegerValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerValue_MetaData), NewProp_IntegerValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlInteger, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlInteger, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlInteger, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_IntegerValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlInteger",
	Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::PropPointers),
	sizeof(FRigUnit_GetControlInteger),
	alignof(FRigUnit_GetControlInteger),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlInteger()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlInteger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlInteger.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlInteger.InnerSingleton;
}
void FRigUnit_GetControlInteger::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlInteger::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		IntegerValue,
		Minimum,
		Maximum,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlInteger

// Begin ScriptStruct FRigUnit_GetControlVector2D
static_assert(std::is_polymorphic<FRigUnit_GetControlVector2D>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlVector2D cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector2D;
class UScriptStruct* FRigUnit_GetControlVector2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlVector2D"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlVector2D_Execute;
		Arguments_FRigUnit_GetControlVector2D_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlVector2D_Execute.Emplace(TEXT("Vector"), TEXT("FVector2D"));
		Arguments_FRigUnit_GetControlVector2D_Execute.Emplace(TEXT("Minimum"), TEXT("FVector2D"));
		Arguments_FRigUnit_GetControlVector2D_Execute.Emplace(TEXT("Maximum"), TEXT("FVector2D"));
		Arguments_FRigUnit_GetControlVector2D_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlVector2D::Execute"), &FRigUnit_GetControlVector2D::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector2D.OuterSingleton, Arguments_FRigUnit_GetControlVector2D_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector2D.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlVector2D>()
{
	return FRigUnit_GetControlVector2D::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlVector2D is used to retrieve a single Vector2D from a hierarchy.\n */" },
		{ "DisplayName", "Get Control Vector2D" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlVector2D" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "GetControlValue" },
		{ "ToolTip", "GetControlVector2D is used to retrieve a single Vector2D from a hierarchy." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to retrieve the Vector2D for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "The name of the Control to retrieve the Vector2D for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The minimum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The minimum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The maximum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The maximum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlVector2D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector2D, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector2D, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector2D, Minimum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector2D, Maximum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector2D, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlVector2D",
	Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::PropPointers),
	sizeof(FRigUnit_GetControlVector2D),
	alignof(FRigUnit_GetControlVector2D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector2D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector2D.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector2D.InnerSingleton;
}
void FRigUnit_GetControlVector2D::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlVector2D::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Vector,
		Minimum,
		Maximum,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlVector2D

// Begin ScriptStruct FRigUnit_GetControlVector
static_assert(std::is_polymorphic<FRigUnit_GetControlVector>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlVector cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector;
class UScriptStruct* FRigUnit_GetControlVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlVector_Execute;
		Arguments_FRigUnit_GetControlVector_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlVector_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_GetControlVector_Execute.Emplace(TEXT("Vector"), TEXT("FVector"));
		Arguments_FRigUnit_GetControlVector_Execute.Emplace(TEXT("Minimum"), TEXT("FVector"));
		Arguments_FRigUnit_GetControlVector_Execute.Emplace(TEXT("Maximum"), TEXT("FVector"));
		Arguments_FRigUnit_GetControlVector_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlVector::Execute"), &FRigUnit_GetControlVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector.OuterSingleton, Arguments_FRigUnit_GetControlVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlVector>()
{
	return FRigUnit_GetControlVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlVector is used to retrieve a single Vector from a hierarchy, can be used for Controls of type \"Position\" or \"Scale\".\n */" },
		{ "DisplayName", "Get Control Vector" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlVector, GetControlPosition, GetControlScale" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "GetControlValue" },
		{ "ToolTip", "GetControlVector is used to retrieve a single Vector from a hierarchy, can be used for Controls of type \"Position\" or \"Scale\"." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to retrieve the Vector for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "The name of the Control to retrieve the Vector for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the Control's Vector should be retrieved\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Defines if the Control's Vector should be retrieved\nin local or global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The minimum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The minimum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The maximum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The maximum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 780265324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector, Minimum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector, Maximum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVector, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlVector",
	Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::PropPointers),
	sizeof(FRigUnit_GetControlVector),
	alignof(FRigUnit_GetControlVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlVector()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector.InnerSingleton;
}
void FRigUnit_GetControlVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Space,
		Vector,
		Minimum,
		Maximum,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlVector

// Begin ScriptStruct FRigUnit_GetControlRotator
static_assert(std::is_polymorphic<FRigUnit_GetControlRotator>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlRotator cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlRotator;
class UScriptStruct* FRigUnit_GetControlRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlRotator, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlRotator"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlRotator_Execute;
		Arguments_FRigUnit_GetControlRotator_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlRotator_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_GetControlRotator_Execute.Emplace(TEXT("Rotator"), TEXT("FRotator"));
		Arguments_FRigUnit_GetControlRotator_Execute.Emplace(TEXT("Minimum"), TEXT("FRotator"));
		Arguments_FRigUnit_GetControlRotator_Execute.Emplace(TEXT("Maximum"), TEXT("FRotator"));
		Arguments_FRigUnit_GetControlRotator_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlRotator::Execute"), &FRigUnit_GetControlRotator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlRotator.OuterSingleton, Arguments_FRigUnit_GetControlRotator_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlRotator.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlRotator>()
{
	return FRigUnit_GetControlRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlRotator is used to retrieve a single Rotator from a hierarchy.\n */" },
		{ "DisplayName", "Get Control Rotator" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlRotator" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "GetControlValue" },
		{ "ToolTip", "GetControlRotator is used to retrieve a single Rotator from a hierarchy." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to retrieve the Rotator for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "The name of the Control to retrieve the Rotator for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the Control's Rotator should be retrieved\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Defines if the Control's Rotator should be retrieved\nin local or global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The minimum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The minimum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The maximum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The maximum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlRotator, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlRotator, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 780265324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlRotator, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator_MetaData), NewProp_Rotator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlRotator, Minimum), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlRotator, Maximum), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlRotator, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Rotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlRotator",
	Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::PropPointers),
	sizeof(FRigUnit_GetControlRotator),
	alignof(FRigUnit_GetControlRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlRotator()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlRotator.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlRotator.InnerSingleton;
}
void FRigUnit_GetControlRotator::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlRotator::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Space,
		Rotator,
		Minimum,
		Maximum,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlRotator

// Begin ScriptStruct FRigUnit_GetControlTransform
static_assert(std::is_polymorphic<FRigUnit_GetControlTransform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlTransform cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlTransform;
class UScriptStruct* FRigUnit_GetControlTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlTransform_Execute;
		Arguments_FRigUnit_GetControlTransform_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlTransform_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_GetControlTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_GetControlTransform_Execute.Emplace(TEXT("Minimum"), TEXT("FTransform"));
		Arguments_FRigUnit_GetControlTransform_Execute.Emplace(TEXT("Maximum"), TEXT("FTransform"));
		Arguments_FRigUnit_GetControlTransform_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlTransform::Execute"), &FRigUnit_GetControlTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlTransform.OuterSingleton, Arguments_FRigUnit_GetControlTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlTransform>()
{
	return FRigUnit_GetControlTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlTransform is used to retrieve a single transform from a hierarchy.\n */" },
		{ "DisplayName", "Get Control Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlTransform" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "TemplateName", "GetControlValue" },
		{ "ToolTip", "GetControlTransform is used to retrieve a single transform from a hierarchy." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to retrieve the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "The name of the Control to retrieve the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the Control's transform should be retrieved\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Defines if the Control's transform should be retrieved\nin local or global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The minimum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The minimum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The maximum value of the control.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The maximum value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlTransform, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlTransform, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 780265324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlTransform, Minimum), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlTransform, Maximum), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlTransform, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlTransform",
	Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::PropPointers),
	sizeof(FRigUnit_GetControlTransform),
	alignof(FRigUnit_GetControlTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlTransform.InnerSingleton;
}
void FRigUnit_GetControlTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Space,
		Transform,
		Minimum,
		Maximum,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GetControlBool::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::NewStructOps, TEXT("RigUnit_GetControlBool"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlBool), 2998730942U) },
		{ FRigUnit_GetControlFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::NewStructOps, TEXT("RigUnit_GetControlFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlFloat), 279934553U) },
		{ FRigUnit_GetControlInteger::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics::NewStructOps, TEXT("RigUnit_GetControlInteger"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlInteger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlInteger), 2950769979U) },
		{ FRigUnit_GetControlVector2D::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::NewStructOps, TEXT("RigUnit_GetControlVector2D"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlVector2D), 1089550615U) },
		{ FRigUnit_GetControlVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::NewStructOps, TEXT("RigUnit_GetControlVector"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlVector), 1333231080U) },
		{ FRigUnit_GetControlRotator::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::NewStructOps, TEXT("RigUnit_GetControlRotator"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlRotator), 186017883U) },
		{ FRigUnit_GetControlTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::NewStructOps, TEXT("RigUnit_GetControlTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlTransform), 3683765622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_3673136347(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
