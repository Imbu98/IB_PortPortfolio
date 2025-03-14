// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_SetCurveValue.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetCurveValue() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetCurveValue();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_SetCurveValue
static_assert(std::is_polymorphic<FRigUnit_SetCurveValue>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetCurveValue cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetCurveValue;
class UScriptStruct* FRigUnit_SetCurveValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetCurveValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetCurveValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetCurveValue, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetCurveValue"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetCurveValue_Execute;
		Arguments_FRigUnit_SetCurveValue_Execute.Emplace(TEXT("Curve"), TEXT("FName"));
		Arguments_FRigUnit_SetCurveValue_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_SetCurveValue_Execute.Emplace(TEXT("CachedCurveIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetCurveValue::Execute"), &FRigUnit_SetCurveValue::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetCurveValue.OuterSingleton, Arguments_FRigUnit_SetCurveValue_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetCurveValue.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetCurveValue>()
{
	return FRigUnit_SetCurveValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "/**\n * SetCurveValue is used to perform a change in the curve container by setting a single Curve value.\n */" },
		{ "DisplayName", "Set Curve Value" },
		{ "Keywords", "SetCurveValue" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetCurveValue.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "ToolTip", "SetCurveValue is used to perform a change in the curve container by setting a single Curve value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Curve to set the Value for.\n\x09 */" },
		{ "CustomWidget", "CurveName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetCurveValue.h" },
		{ "ToolTip", "The name of the Curve to set the Value for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The value to set for the given Curve.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetCurveValue.h" },
		{ "ToolTip", "The value to set for the given Curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCurveIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used curve index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetCurveValue.h" },
		{ "ToolTip", "Used to cache the internally used curve index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Curve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedCurveIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetCurveValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetCurveValue, Curve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetCurveValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::NewProp_CachedCurveIndex = { "CachedCurveIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetCurveValue, CachedCurveIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCurveIndex_MetaData), NewProp_CachedCurveIndex_MetaData) }; // 505623675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::NewProp_CachedCurveIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetCurveValue",
	Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::PropPointers),
	sizeof(FRigUnit_SetCurveValue),
	alignof(FRigUnit_SetCurveValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetCurveValue()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetCurveValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetCurveValue.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetCurveValue.InnerSingleton;
}
void FRigUnit_SetCurveValue::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetCurveValue::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Curve,
		Value,
		CachedCurveIndex
	);
}
// End ScriptStruct FRigUnit_SetCurveValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetCurveValue_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_SetCurveValue::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics::NewStructOps, TEXT("RigUnit_SetCurveValue"), &Z_Registration_Info_UScriptStruct_RigUnit_SetCurveValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetCurveValue), 4194218663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetCurveValue_h_652494899(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetCurveValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetCurveValue_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
