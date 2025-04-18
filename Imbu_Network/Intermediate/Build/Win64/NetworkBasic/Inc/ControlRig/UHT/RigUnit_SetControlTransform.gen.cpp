// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_SetControlTransform.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetControlTransform() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlBool();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlFloat();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlInteger();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlRotator();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlVector();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_SetControlBool
static_assert(std::is_polymorphic<FRigUnit_SetControlBool>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlBool cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlBool;
class UScriptStruct* FRigUnit_SetControlBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlBool, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlBool"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlBool_Execute;
		Arguments_FRigUnit_SetControlBool_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlBool_Execute.Emplace(TEXT("BoolValue"), TEXT("bool"));
		Arguments_FRigUnit_SetControlBool_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlBool::Execute"), &FRigUnit_SetControlBool::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlBool.OuterSingleton, Arguments_FRigUnit_SetControlBool_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlBool.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlBool>()
{
	return FRigUnit_SetControlBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlBool is used to perform a change in the hierarchy by setting a single control's bool value.\n */" },
		{ "DisplayName", "Set Control Bool" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlBool,SetGizmoBool" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetControlValue" },
		{ "ToolTip", "SetControlBool is used to perform a change in the hierarchy by setting a single control's bool value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the bool for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the bool for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The bool value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The bool value to set for the given Control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlBool, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FRigUnit_SetControlBool*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SetControlBool), &Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlBool, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlBool",
	Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::PropPointers),
	sizeof(FRigUnit_SetControlBool),
	alignof(FRigUnit_SetControlBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlBool()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlBool.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlBool.InnerSingleton;
}
void FRigUnit_SetControlBool::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlBool::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		BoolValue,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_SetControlBool

// Begin ScriptStruct FRigUnit_SetMultiControlBool_Entry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool_Entry;
class UScriptStruct* FRigUnit_SetMultiControlBool_Entry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool_Entry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool_Entry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlBool_Entry"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool_Entry.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlBool_Entry>()
{
	return FRigUnit_SetMultiControlBool_Entry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The bool value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The bool value to set for the given Control." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlBool_Entry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlBool_Entry, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FRigUnit_SetMultiControlBool_Entry*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SetMultiControlBool_Entry), &Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::NewProp_BoolValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_SetMultiControlBool_Entry",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlBool_Entry),
	alignof(FRigUnit_SetMultiControlBool_Entry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool_Entry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool_Entry.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool_Entry.InnerSingleton;
}
// End ScriptStruct FRigUnit_SetMultiControlBool_Entry

// Begin ScriptStruct FRigUnit_SetMultiControlBool
static_assert(std::is_polymorphic<FRigUnit_SetMultiControlBool>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetMultiControlBool cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool;
class UScriptStruct* FRigUnit_SetMultiControlBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlBool"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetMultiControlBool_Execute;
		Arguments_FRigUnit_SetMultiControlBool_Execute.Emplace(TEXT("Entries"), TEXT("TArray<FRigUnit_SetMultiControlBool_Entry>"));
		Arguments_FRigUnit_SetMultiControlBool_Execute.Emplace(TEXT("CachedControlIndices"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetMultiControlBool::Execute"), &FRigUnit_SetMultiControlBool::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool.OuterSingleton, Arguments_FRigUnit_SetMultiControlBool_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlBool>()
{
	return FRigUnit_SetMultiControlBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetMultiControlBool is used to perform a change in the hierarchy by setting multiple controls' bool value.\n */" },
		{ "DisplayName", "Set Multiple Controls Bool" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetMultipleControlsBool,SetControlBool,SetGizmoBool" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetMultiControlValue" },
		{ "ToolTip", "SetMultiControlBool is used to perform a change in the hierarchy by setting multiple controls' bool value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The array of control-Bool pairs to be processed\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The array of control-Bool pairs to be processed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndices_MetaData[] = {
		{ "Comment", "// Used to cache the internally used control indices\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used control indices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedControlIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry, METADATA_PARAMS(0, nullptr) }; // 3126905455
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlBool, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3126905455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::NewProp_CachedControlIndices_Inner = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 505623675
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::NewProp_CachedControlIndices = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlBool, CachedControlIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndices_MetaData), NewProp_CachedControlIndices_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::NewProp_CachedControlIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::NewProp_CachedControlIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetMultiControlBool",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlBool),
	alignof(FRigUnit_SetMultiControlBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool.InnerSingleton;
}
void FRigUnit_SetMultiControlBool::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetMultiControlBool::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_SetMultiControlBool_Entry> Entries_0_Array(Entries);
	StaticExecute(
		InExecuteContext,
		Entries_0_Array,
		CachedControlIndices
	);
}
// End ScriptStruct FRigUnit_SetMultiControlBool

// Begin ScriptStruct FRigUnit_SetControlFloat
static_assert(std::is_polymorphic<FRigUnit_SetControlFloat>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlFloat cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlFloat;
class UScriptStruct* FRigUnit_SetControlFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlFloat, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlFloat_Execute;
		Arguments_FRigUnit_SetControlFloat_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlFloat_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetControlFloat_Execute.Emplace(TEXT("FloatValue"), TEXT("float"));
		Arguments_FRigUnit_SetControlFloat_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlFloat::Execute"), &FRigUnit_SetControlFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlFloat.OuterSingleton, Arguments_FRigUnit_SetControlFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlFloat>()
{
	return FRigUnit_SetControlFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlFloat is used to perform a change in the hierarchy by setting a single control's float value.\n */" },
		{ "DisplayName", "Set Control Float" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlFloat,SetGizmoFloat" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetControlValue" },
		{ "ToolTip", "SetControlFloat is used to perform a change in the hierarchy by setting a single control's float value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform value to set for the given Control." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used control index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used control index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlFloat, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlFloat, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlFloat, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlFloat, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlFloat",
	Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::PropPointers),
	sizeof(FRigUnit_SetControlFloat),
	alignof(FRigUnit_SetControlFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlFloat()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlFloat.InnerSingleton;
}
void FRigUnit_SetControlFloat::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlFloat::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Weight,
		FloatValue,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_SetControlFloat

// Begin ScriptStruct FRigUnit_SetMultiControlFloat_Entry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat_Entry;
class UScriptStruct* FRigUnit_SetMultiControlFloat_Entry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat_Entry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat_Entry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlFloat_Entry"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat_Entry.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlFloat_Entry>()
{
	return FRigUnit_SetMultiControlFloat_Entry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The transform value to set for the given Control." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlFloat_Entry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlFloat_Entry, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlFloat_Entry, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::NewProp_FloatValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_SetMultiControlFloat_Entry",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlFloat_Entry),
	alignof(FRigUnit_SetMultiControlFloat_Entry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat_Entry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat_Entry.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat_Entry.InnerSingleton;
}
// End ScriptStruct FRigUnit_SetMultiControlFloat_Entry

// Begin ScriptStruct FRigUnit_SetMultiControlFloat
static_assert(std::is_polymorphic<FRigUnit_SetMultiControlFloat>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetMultiControlFloat cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat;
class UScriptStruct* FRigUnit_SetMultiControlFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetMultiControlFloat_Execute;
		Arguments_FRigUnit_SetMultiControlFloat_Execute.Emplace(TEXT("Entries"), TEXT("TArray<FRigUnit_SetMultiControlFloat_Entry>"));
		Arguments_FRigUnit_SetMultiControlFloat_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetMultiControlFloat_Execute.Emplace(TEXT("CachedControlIndices"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetMultiControlFloat::Execute"), &FRigUnit_SetMultiControlFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat.OuterSingleton, Arguments_FRigUnit_SetMultiControlFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlFloat>()
{
	return FRigUnit_SetMultiControlFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetMultiControlFloat is used to perform a change in the hierarchy by setting multiple controls' float value.\n */" },
		{ "DisplayName", "Set Multiple Controls Float" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetMultipleControlsFloat,SetControlFloat,SetGizmoFloat" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetMultiControlValue" },
		{ "ToolTip", "SetMultiControlFloat is used to perform a change in the hierarchy by setting multiple controls' float value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The array of control-float pairs to be processed\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The array of control-float pairs to be processed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndices_MetaData[] = {
		{ "Comment", "// Used to cache the internally used control indices\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used control indices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedControlIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry, METADATA_PARAMS(0, nullptr) }; // 1330537365
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlFloat, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1330537365
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlFloat, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_CachedControlIndices_Inner = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 505623675
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_CachedControlIndices = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlFloat, CachedControlIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndices_MetaData), NewProp_CachedControlIndices_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_CachedControlIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewProp_CachedControlIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetMultiControlFloat",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlFloat),
	alignof(FRigUnit_SetMultiControlFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat.InnerSingleton;
}
void FRigUnit_SetMultiControlFloat::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetMultiControlFloat::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_SetMultiControlFloat_Entry> Entries_0_Array(Entries);
	StaticExecute(
		InExecuteContext,
		Entries_0_Array,
		Weight,
		CachedControlIndices
	);
}
// End ScriptStruct FRigUnit_SetMultiControlFloat

// Begin ScriptStruct FRigUnit_SetControlInteger
static_assert(std::is_polymorphic<FRigUnit_SetControlInteger>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlInteger cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlInteger;
class UScriptStruct* FRigUnit_SetControlInteger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlInteger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlInteger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlInteger, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlInteger"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlInteger_Execute;
		Arguments_FRigUnit_SetControlInteger_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlInteger_Execute.Emplace(TEXT("Weight"), TEXT("int32"));
		Arguments_FRigUnit_SetControlInteger_Execute.Emplace(TEXT("IntegerValue"), TEXT("int32"));
		Arguments_FRigUnit_SetControlInteger_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlInteger::Execute"), &FRigUnit_SetControlInteger::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlInteger.OuterSingleton, Arguments_FRigUnit_SetControlInteger_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlInteger.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlInteger>()
{
	return FRigUnit_SetControlInteger::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlInteger is used to perform a change in the hierarchy by setting a single control's int32 value.\n */" },
		{ "DisplayName", "Set Control Integer" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlInteger,SetGizmoInteger" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetControlValue" },
		{ "ToolTip", "SetControlInteger is used to perform a change in the hierarchy by setting a single control's int32 value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform value to set for the given Control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlInteger>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlInteger, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlInteger, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlInteger, IntegerValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerValue_MetaData), NewProp_IntegerValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlInteger, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::NewProp_IntegerValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlInteger",
	Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::PropPointers),
	sizeof(FRigUnit_SetControlInteger),
	alignof(FRigUnit_SetControlInteger),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlInteger()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlInteger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlInteger.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlInteger.InnerSingleton;
}
void FRigUnit_SetControlInteger::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlInteger::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Weight,
		IntegerValue,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_SetControlInteger

// Begin ScriptStruct FRigUnit_SetMultiControlInteger_Entry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger_Entry;
class UScriptStruct* FRigUnit_SetMultiControlInteger_Entry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger_Entry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger_Entry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlInteger_Entry"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger_Entry.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlInteger_Entry>()
{
	return FRigUnit_SetMultiControlInteger_Entry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The transform value to set for the given Control." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlInteger_Entry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlInteger_Entry, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlInteger_Entry, IntegerValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerValue_MetaData), NewProp_IntegerValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::NewProp_IntegerValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_SetMultiControlInteger_Entry",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlInteger_Entry),
	alignof(FRigUnit_SetMultiControlInteger_Entry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger_Entry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger_Entry.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger_Entry.InnerSingleton;
}
// End ScriptStruct FRigUnit_SetMultiControlInteger_Entry

// Begin ScriptStruct FRigUnit_SetMultiControlInteger
static_assert(std::is_polymorphic<FRigUnit_SetMultiControlInteger>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetMultiControlInteger cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger;
class UScriptStruct* FRigUnit_SetMultiControlInteger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlInteger"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetMultiControlInteger_Execute;
		Arguments_FRigUnit_SetMultiControlInteger_Execute.Emplace(TEXT("Entries"), TEXT("TArray<FRigUnit_SetMultiControlInteger_Entry>"));
		Arguments_FRigUnit_SetMultiControlInteger_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetMultiControlInteger_Execute.Emplace(TEXT("CachedControlIndices"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetMultiControlInteger::Execute"), &FRigUnit_SetMultiControlInteger::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger.OuterSingleton, Arguments_FRigUnit_SetMultiControlInteger_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlInteger>()
{
	return FRigUnit_SetMultiControlInteger::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetMultiControlInteger is used to perform a change in the hierarchy by setting multiple controls' integer value.\n */" },
		{ "DisplayName", "Set Multiple Controls Integer" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetMultipleControlsInteger,SetControlInteger,SetGizmoInteger" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetMultiControlValue" },
		{ "ToolTip", "SetMultiControlInteger is used to perform a change in the hierarchy by setting multiple controls' integer value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The array of control-integer pairs to be processed\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The array of control-integer pairs to be processed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndices_MetaData[] = {
		{ "Comment", "// Used to cache the internally used control indices\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used control indices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedControlIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlInteger>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry, METADATA_PARAMS(0, nullptr) }; // 2947158867
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlInteger, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 2947158867
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlInteger, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_CachedControlIndices_Inner = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 505623675
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_CachedControlIndices = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlInteger, CachedControlIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndices_MetaData), NewProp_CachedControlIndices_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_CachedControlIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewProp_CachedControlIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetMultiControlInteger",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlInteger),
	alignof(FRigUnit_SetMultiControlInteger),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger.InnerSingleton;
}
void FRigUnit_SetMultiControlInteger::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetMultiControlInteger::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_SetMultiControlInteger_Entry> Entries_0_Array(Entries);
	StaticExecute(
		InExecuteContext,
		Entries_0_Array,
		Weight,
		CachedControlIndices
	);
}
// End ScriptStruct FRigUnit_SetMultiControlInteger

// Begin ScriptStruct FRigUnit_SetControlVector2D
static_assert(std::is_polymorphic<FRigUnit_SetControlVector2D>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlVector2D cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector2D;
class UScriptStruct* FRigUnit_SetControlVector2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlVector2D"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlVector2D_Execute;
		Arguments_FRigUnit_SetControlVector2D_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlVector2D_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetControlVector2D_Execute.Emplace(TEXT("Vector"), TEXT("FVector2D"));
		Arguments_FRigUnit_SetControlVector2D_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlVector2D::Execute"), &FRigUnit_SetControlVector2D::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector2D.OuterSingleton, Arguments_FRigUnit_SetControlVector2D_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector2D.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlVector2D>()
{
	return FRigUnit_SetControlVector2D::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlVector2D is used to perform a change in the hierarchy by setting a single control's Vector2D value.\n */" },
		{ "DisplayName", "Set Control Vector2D" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlVector2D,SetGizmoVector2D" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetControlValue" },
		{ "ToolTip", "SetControlVector2D is used to perform a change in the hierarchy by setting a single control's Vector2D value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform value to set for the given Control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlVector2D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVector2D, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVector2D, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVector2D, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVector2D, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlVector2D",
	Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::PropPointers),
	sizeof(FRigUnit_SetControlVector2D),
	alignof(FRigUnit_SetControlVector2D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector2D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector2D.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector2D.InnerSingleton;
}
void FRigUnit_SetControlVector2D::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlVector2D::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Weight,
		Vector,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_SetControlVector2D

// Begin ScriptStruct FRigUnit_SetMultiControlVector2D_Entry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D_Entry;
class UScriptStruct* FRigUnit_SetMultiControlVector2D_Entry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D_Entry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D_Entry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlVector2D_Entry"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D_Entry.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlVector2D_Entry>()
{
	return FRigUnit_SetMultiControlVector2D_Entry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The transform value to set for the given Control." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlVector2D_Entry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlVector2D_Entry, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlVector2D_Entry, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::NewProp_Vector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_SetMultiControlVector2D_Entry",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlVector2D_Entry),
	alignof(FRigUnit_SetMultiControlVector2D_Entry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D_Entry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D_Entry.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D_Entry.InnerSingleton;
}
// End ScriptStruct FRigUnit_SetMultiControlVector2D_Entry

// Begin ScriptStruct FRigUnit_SetMultiControlVector2D
static_assert(std::is_polymorphic<FRigUnit_SetMultiControlVector2D>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetMultiControlVector2D cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D;
class UScriptStruct* FRigUnit_SetMultiControlVector2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlVector2D"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetMultiControlVector2D_Execute;
		Arguments_FRigUnit_SetMultiControlVector2D_Execute.Emplace(TEXT("Entries"), TEXT("TArray<FRigUnit_SetMultiControlVector2D_Entry>"));
		Arguments_FRigUnit_SetMultiControlVector2D_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetMultiControlVector2D_Execute.Emplace(TEXT("CachedControlIndices"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetMultiControlVector2D::Execute"), &FRigUnit_SetMultiControlVector2D::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D.OuterSingleton, Arguments_FRigUnit_SetMultiControlVector2D_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlVector2D>()
{
	return FRigUnit_SetMultiControlVector2D::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetMultiControlVector2D is used to perform a change in the hierarchy by setting multiple controls' vector2D value.\n */" },
		{ "DisplayName", "Set Multiple Controls Vector2D" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetMultipleControlsVector2D,SetControlVector2D,SetGizmoVector2D" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetMultiControlValue" },
		{ "ToolTip", "SetMultiControlVector2D is used to perform a change in the hierarchy by setting multiple controls' vector2D value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The array of control-vector2D pairs to be processed\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The array of control-vector2D pairs to be processed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndices_MetaData[] = {
		{ "Comment", "// Used to cache the internally used control indices\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used control indices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedControlIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlVector2D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry, METADATA_PARAMS(0, nullptr) }; // 1648339769
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlVector2D, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1648339769
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlVector2D, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_CachedControlIndices_Inner = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 505623675
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_CachedControlIndices = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlVector2D, CachedControlIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndices_MetaData), NewProp_CachedControlIndices_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_CachedControlIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewProp_CachedControlIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetMultiControlVector2D",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlVector2D),
	alignof(FRigUnit_SetMultiControlVector2D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D.InnerSingleton;
}
void FRigUnit_SetMultiControlVector2D::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetMultiControlVector2D::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_SetMultiControlVector2D_Entry> Entries_0_Array(Entries);
	StaticExecute(
		InExecuteContext,
		Entries_0_Array,
		Weight,
		CachedControlIndices
	);
}
// End ScriptStruct FRigUnit_SetMultiControlVector2D

// Begin ScriptStruct FRigUnit_SetControlVector
static_assert(std::is_polymorphic<FRigUnit_SetControlVector>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlVector cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector;
class UScriptStruct* FRigUnit_SetControlVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlVector_Execute;
		Arguments_FRigUnit_SetControlVector_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlVector_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetControlVector_Execute.Emplace(TEXT("Vector"), TEXT("FVector"));
		Arguments_FRigUnit_SetControlVector_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetControlVector_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlVector::Execute"), &FRigUnit_SetControlVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector.OuterSingleton, Arguments_FRigUnit_SetControlVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlVector>()
{
	return FRigUnit_SetControlVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlVector is used to perform a change in the hierarchy by setting a single control's Vector value.\n */" },
		{ "DisplayName", "Set Control Vector" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlVector,SetGizmoVector" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetControlValue" },
		{ "ToolTip", "SetControlVector is used to perform a change in the hierarchy by setting a single control's Vector value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform value to set for the given Control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVector, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVector, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVector, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVector, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 780265324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVector, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlVector",
	Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::PropPointers),
	sizeof(FRigUnit_SetControlVector),
	alignof(FRigUnit_SetControlVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlVector()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector.InnerSingleton;
}
void FRigUnit_SetControlVector::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlVector::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Weight,
		Vector,
		Space,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_SetControlVector

// Begin ScriptStruct FRigUnit_SetControlRotator
static_assert(std::is_polymorphic<FRigUnit_SetControlRotator>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlRotator cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlRotator;
class UScriptStruct* FRigUnit_SetControlRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlRotator, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlRotator"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlRotator_Execute;
		Arguments_FRigUnit_SetControlRotator_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlRotator_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetControlRotator_Execute.Emplace(TEXT("Rotator"), TEXT("FRotator"));
		Arguments_FRigUnit_SetControlRotator_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetControlRotator_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlRotator::Execute"), &FRigUnit_SetControlRotator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlRotator.OuterSingleton, Arguments_FRigUnit_SetControlRotator_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlRotator.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlRotator>()
{
	return FRigUnit_SetControlRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlRotator is used to perform a change in the hierarchy by setting a single control's Rotator value.\n */" },
		{ "DisplayName", "Set Control Rotator" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlRotator,SetGizmoRotator" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetControlValue" },
		{ "ToolTip", "SetControlRotator is used to perform a change in the hierarchy by setting a single control's Rotator value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform value to set for the given Control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlRotator, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlRotator, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlRotator, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator_MetaData), NewProp_Rotator_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlRotator, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 780265324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlRotator, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Rotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlRotator",
	Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::PropPointers),
	sizeof(FRigUnit_SetControlRotator),
	alignof(FRigUnit_SetControlRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlRotator()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlRotator.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlRotator.InnerSingleton;
}
void FRigUnit_SetControlRotator::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlRotator::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Weight,
		Rotator,
		Space,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_SetControlRotator

// Begin ScriptStruct FRigUnit_SetMultiControlRotator_Entry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator_Entry;
class UScriptStruct* FRigUnit_SetMultiControlRotator_Entry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator_Entry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator_Entry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlRotator_Entry"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator_Entry.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlRotator_Entry>()
{
	return FRigUnit_SetMultiControlRotator_Entry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The transform value to set for the given Control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlRotator_Entry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlRotator_Entry, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlRotator_Entry, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator_MetaData), NewProp_Rotator_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlRotator_Entry, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 780265324
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::NewProp_Rotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_SetMultiControlRotator_Entry",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlRotator_Entry),
	alignof(FRigUnit_SetMultiControlRotator_Entry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator_Entry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator_Entry.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator_Entry.InnerSingleton;
}
// End ScriptStruct FRigUnit_SetMultiControlRotator_Entry

// Begin ScriptStruct FRigUnit_SetMultiControlRotator
static_assert(std::is_polymorphic<FRigUnit_SetMultiControlRotator>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetMultiControlRotator cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator;
class UScriptStruct* FRigUnit_SetMultiControlRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMultiControlRotator"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetMultiControlRotator_Execute;
		Arguments_FRigUnit_SetMultiControlRotator_Execute.Emplace(TEXT("Entries"), TEXT("TArray<FRigUnit_SetMultiControlRotator_Entry>"));
		Arguments_FRigUnit_SetMultiControlRotator_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetMultiControlRotator_Execute.Emplace(TEXT("CachedControlIndices"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetMultiControlRotator::Execute"), &FRigUnit_SetMultiControlRotator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator.OuterSingleton, Arguments_FRigUnit_SetMultiControlRotator_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMultiControlRotator>()
{
	return FRigUnit_SetMultiControlRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetMultiControlRotator is used to perform a change in the hierarchy by setting multiple controls' rotator value.\n */" },
		{ "DisplayName", "Set Multiple Controls Rotator" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetMultipleControlsRotator,SetControlRotator,SetGizmoRotator" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetMultiControlValue" },
		{ "ToolTip", "SetMultiControlRotator is used to perform a change in the hierarchy by setting multiple controls' rotator value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The array of control-rotator pairs to be processed\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The array of control-rotator pairs to be processed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndices_MetaData[] = {
		{ "Comment", "// Used to cache the internally used control indices\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used control indices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedControlIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMultiControlRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry, METADATA_PARAMS(0, nullptr) }; // 1226990017
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlRotator, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1226990017
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlRotator, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_CachedControlIndices_Inner = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 505623675
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_CachedControlIndices = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMultiControlRotator, CachedControlIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndices_MetaData), NewProp_CachedControlIndices_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_CachedControlIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewProp_CachedControlIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetMultiControlRotator",
	Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::PropPointers),
	sizeof(FRigUnit_SetMultiControlRotator),
	alignof(FRigUnit_SetMultiControlRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator.InnerSingleton;
}
void FRigUnit_SetMultiControlRotator::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetMultiControlRotator::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_SetMultiControlRotator_Entry> Entries_0_Array(Entries);
	StaticExecute(
		InExecuteContext,
		Entries_0_Array,
		Weight,
		CachedControlIndices
	);
}
// End ScriptStruct FRigUnit_SetMultiControlRotator

// Begin ScriptStruct FRigUnit_SetControlTransform
static_assert(std::is_polymorphic<FRigUnit_SetControlTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlTransform;
class UScriptStruct* FRigUnit_SetControlTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlTransform_Execute;
		Arguments_FRigUnit_SetControlTransform_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlTransform_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetControlTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_SetControlTransform_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetControlTransform_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlTransform::Execute"), &FRigUnit_SetControlTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlTransform.OuterSingleton, Arguments_FRigUnit_SetControlTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlTransform>()
{
	return FRigUnit_SetControlTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlTransform is used to perform a change in the hierarchy by setting a single control's transform.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Set Control Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlTransform,SetGizmoTransform" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "SetControlTransform is used to perform a change in the hierarchy by setting a single control's transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Control.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform value to set for the given Control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlTransform, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlTransform, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlTransform, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 780265324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlTransform, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlTransform",
	Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::PropPointers),
	sizeof(FRigUnit_SetControlTransform),
	alignof(FRigUnit_SetControlTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlTransform.InnerSingleton;
}
void FRigUnit_SetControlTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Weight,
		Transform,
		Space,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_SetControlTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_SetControlBool::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::NewStructOps, TEXT("RigUnit_SetControlBool"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlBool), 1770954608U) },
		{ FRigUnit_SetMultiControlBool_Entry::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlBool_Entry"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool_Entry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlBool_Entry), 3126905455U) },
		{ FRigUnit_SetMultiControlBool::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlBool"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlBool), 512509250U) },
		{ FRigUnit_SetControlFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::NewStructOps, TEXT("RigUnit_SetControlFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlFloat), 1536047577U) },
		{ FRigUnit_SetMultiControlFloat_Entry::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlFloat_Entry"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat_Entry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlFloat_Entry), 1330537365U) },
		{ FRigUnit_SetMultiControlFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlFloat), 1661636175U) },
		{ FRigUnit_SetControlInteger::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics::NewStructOps, TEXT("RigUnit_SetControlInteger"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlInteger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlInteger), 1218971363U) },
		{ FRigUnit_SetMultiControlInteger_Entry::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlInteger_Entry"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger_Entry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlInteger_Entry), 2947158867U) },
		{ FRigUnit_SetMultiControlInteger::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlInteger"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlInteger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlInteger), 3514930190U) },
		{ FRigUnit_SetControlVector2D::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::NewStructOps, TEXT("RigUnit_SetControlVector2D"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlVector2D), 2802959188U) },
		{ FRigUnit_SetMultiControlVector2D_Entry::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlVector2D_Entry"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D_Entry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlVector2D_Entry), 1648339769U) },
		{ FRigUnit_SetMultiControlVector2D::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlVector2D"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlVector2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlVector2D), 1362197414U) },
		{ FRigUnit_SetControlVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::NewStructOps, TEXT("RigUnit_SetControlVector"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlVector), 230131140U) },
		{ FRigUnit_SetControlRotator::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::NewStructOps, TEXT("RigUnit_SetControlRotator"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlRotator), 3203528293U) },
		{ FRigUnit_SetMultiControlRotator_Entry::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlRotator_Entry"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator_Entry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlRotator_Entry), 1226990017U) },
		{ FRigUnit_SetMultiControlRotator::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::NewStructOps, TEXT("RigUnit_SetMultiControlRotator"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMultiControlRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMultiControlRotator), 1737827188U) },
		{ FRigUnit_SetControlTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::NewStructOps, TEXT("RigUnit_SetControlTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlTransform), 2956757027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_3231865816(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
