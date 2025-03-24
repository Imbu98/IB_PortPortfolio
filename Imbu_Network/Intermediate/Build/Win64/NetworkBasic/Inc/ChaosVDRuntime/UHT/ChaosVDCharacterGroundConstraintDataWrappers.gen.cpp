// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosVisualDebugger/Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDCharacterGroundConstraintDataWrappers() {}

// Begin Cross Module References
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDConstraintDataWrapperBase();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDWrapperDataBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ChaosVDRuntime();
// End Cross Module References

// Begin ScriptStruct FChaosVDCharacterGroundConstraintStateDataWrapper
static_assert(std::is_polymorphic<FChaosVDCharacterGroundConstraintStateDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDCharacterGroundConstraintStateDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintStateDataWrapper;
class UScriptStruct* FChaosVDCharacterGroundConstraintStateDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintStateDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintStateDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDCharacterGroundConstraintStateDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintStateDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDCharacterGroundConstraintStateDataWrapper>()
{
	return FChaosVDCharacterGroundConstraintStateDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "Category", "ConstraintState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverAppliedForce_MetaData[] = {
		{ "Category", "ConstraintState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverAppliedTorque_MetaData[] = {
		{ "Category", "ConstraintState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolverAppliedForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolverAppliedTorque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDCharacterGroundConstraintStateDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((FChaosVDCharacterGroundConstraintStateDataWrapper*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDCharacterGroundConstraintStateDataWrapper), &Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewProp_SolverAppliedForce = { "SolverAppliedForce", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintStateDataWrapper, SolverAppliedForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverAppliedForce_MetaData), NewProp_SolverAppliedForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewProp_SolverAppliedTorque = { "SolverAppliedTorque", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintStateDataWrapper, SolverAppliedTorque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverAppliedTorque_MetaData), NewProp_SolverAppliedTorque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewProp_bDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewProp_SolverAppliedForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewProp_SolverAppliedTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDCharacterGroundConstraintStateDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDCharacterGroundConstraintStateDataWrapper),
	alignof(FChaosVDCharacterGroundConstraintStateDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintStateDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintStateDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintStateDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDCharacterGroundConstraintStateDataWrapper

// Begin ScriptStruct FChaosVDCharacterGroundConstraintSettingsDataWrapper
static_assert(std::is_polymorphic<FChaosVDCharacterGroundConstraintSettingsDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDCharacterGroundConstraintSettingsDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintSettingsDataWrapper;
class UScriptStruct* FChaosVDCharacterGroundConstraintSettingsDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintSettingsDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintSettingsDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDCharacterGroundConstraintSettingsDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintSettingsDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDCharacterGroundConstraintSettingsDataWrapper>()
{
	return FChaosVDCharacterGroundConstraintSettingsDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialForceLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ForceUnits", "Newtons" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionForceLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ForceUnits", "Newtons" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistTorqueLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ForceUnits", "NewtonMeters" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingTorqueLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ForceUnits", "NewtonMeters" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CosMaxWalkableSlopeAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingFactor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssumedOnGroundHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalAxis;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetHeight;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RadialForceLimit;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FrictionForceLimit;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TwistTorqueLimit;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SwingTorqueLimit;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CosMaxWalkableSlopeAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DampingFactor;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AssumedOnGroundHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDCharacterGroundConstraintSettingsDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_VerticalAxis = { "VerticalAxis", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintSettingsDataWrapper, VerticalAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAxis_MetaData), NewProp_VerticalAxis_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_TargetHeight = { "TargetHeight", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintSettingsDataWrapper, TargetHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHeight_MetaData), NewProp_TargetHeight_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_RadialForceLimit = { "RadialForceLimit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintSettingsDataWrapper, RadialForceLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialForceLimit_MetaData), NewProp_RadialForceLimit_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_FrictionForceLimit = { "FrictionForceLimit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintSettingsDataWrapper, FrictionForceLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionForceLimit_MetaData), NewProp_FrictionForceLimit_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_TwistTorqueLimit = { "TwistTorqueLimit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintSettingsDataWrapper, TwistTorqueLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistTorqueLimit_MetaData), NewProp_TwistTorqueLimit_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_SwingTorqueLimit = { "SwingTorqueLimit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintSettingsDataWrapper, SwingTorqueLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingTorqueLimit_MetaData), NewProp_SwingTorqueLimit_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_CosMaxWalkableSlopeAngle = { "CosMaxWalkableSlopeAngle", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintSettingsDataWrapper, CosMaxWalkableSlopeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CosMaxWalkableSlopeAngle_MetaData), NewProp_CosMaxWalkableSlopeAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_DampingFactor = { "DampingFactor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintSettingsDataWrapper, DampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingFactor_MetaData), NewProp_DampingFactor_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_AssumedOnGroundHeight = { "AssumedOnGroundHeight", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintSettingsDataWrapper, AssumedOnGroundHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssumedOnGroundHeight_MetaData), NewProp_AssumedOnGroundHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_VerticalAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_TargetHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_RadialForceLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_FrictionForceLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_TwistTorqueLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_SwingTorqueLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_CosMaxWalkableSlopeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_DampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewProp_AssumedOnGroundHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDCharacterGroundConstraintSettingsDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDCharacterGroundConstraintSettingsDataWrapper),
	alignof(FChaosVDCharacterGroundConstraintSettingsDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintSettingsDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintSettingsDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintSettingsDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDCharacterGroundConstraintSettingsDataWrapper

// Begin ScriptStruct FChaosVDCharacterGroundConstraintDataDataWrapper
static_assert(std::is_polymorphic<FChaosVDCharacterGroundConstraintDataDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDCharacterGroundConstraintDataDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintDataDataWrapper;
class UScriptStruct* FChaosVDCharacterGroundConstraintDataDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintDataDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintDataDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDCharacterGroundConstraintDataDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintDataDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDCharacterGroundConstraintDataDataWrapper>()
{
	return FChaosVDCharacterGroundConstraintDataDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundNormal_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDeltaPosition_MetaData[] = {
		{ "Category", "Data" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDeltaFacing_MetaData[] = {
		{ "Category", "Data" },
		{ "ForceUnits", "radians" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[] = {
		{ "Category", "Data" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CosMaxWalkableSlopeAngle_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDeltaPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetDeltaFacing;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GroundDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CosMaxWalkableSlopeAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDCharacterGroundConstraintDataDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_GroundNormal = { "GroundNormal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintDataDataWrapper, GroundNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundNormal_MetaData), NewProp_GroundNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_TargetDeltaPosition = { "TargetDeltaPosition", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintDataDataWrapper, TargetDeltaPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDeltaPosition_MetaData), NewProp_TargetDeltaPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_TargetDeltaFacing = { "TargetDeltaFacing", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintDataDataWrapper, TargetDeltaFacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDeltaFacing_MetaData), NewProp_TargetDeltaFacing_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintDataDataWrapper, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDistance_MetaData), NewProp_GroundDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_CosMaxWalkableSlopeAngle = { "CosMaxWalkableSlopeAngle", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraintDataDataWrapper, CosMaxWalkableSlopeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CosMaxWalkableSlopeAngle_MetaData), NewProp_CosMaxWalkableSlopeAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_GroundNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_TargetDeltaPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_TargetDeltaFacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_GroundDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewProp_CosMaxWalkableSlopeAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDCharacterGroundConstraintDataDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDCharacterGroundConstraintDataDataWrapper),
	alignof(FChaosVDCharacterGroundConstraintDataDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintDataDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintDataDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintDataDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDCharacterGroundConstraintDataDataWrapper

// Begin ScriptStruct FChaosVDCharacterGroundConstraint
static_assert(std::is_polymorphic<FChaosVDCharacterGroundConstraint>() == std::is_polymorphic<FChaosVDConstraintDataWrapperBase>(), "USTRUCT FChaosVDCharacterGroundConstraint cannot be polymorphic unless super FChaosVDConstraintDataWrapperBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraint;
class UScriptStruct* FChaosVDCharacterGroundConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDCharacterGroundConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraint.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDCharacterGroundConstraint>()
{
	return FChaosVDCharacterGroundConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintIndex_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCharacterGroundConstraintDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDCharacterGroundConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewProp_ConstraintIndex = { "ConstraintIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraint, ConstraintIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintIndex_MetaData), NewProp_ConstraintIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraint, State), Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 1371100938
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraint, Settings), Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1799825827
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCharacterGroundConstraint, Data), Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2830616435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewProp_ConstraintIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDConstraintDataWrapperBase,
	&NewStructOps,
	"ChaosVDCharacterGroundConstraint",
	Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::PropPointers),
	sizeof(FChaosVDCharacterGroundConstraint),
	alignof(FChaosVDCharacterGroundConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraint.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraint.InnerSingleton;
}
// End ScriptStruct FChaosVDCharacterGroundConstraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCharacterGroundConstraintDataWrappers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosVDCharacterGroundConstraintStateDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewStructOps, TEXT("ChaosVDCharacterGroundConstraintStateDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintStateDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDCharacterGroundConstraintStateDataWrapper), 1371100938U) },
		{ FChaosVDCharacterGroundConstraintSettingsDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewStructOps, TEXT("ChaosVDCharacterGroundConstraintSettingsDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintSettingsDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDCharacterGroundConstraintSettingsDataWrapper), 1799825827U) },
		{ FChaosVDCharacterGroundConstraintDataDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewStructOps, TEXT("ChaosVDCharacterGroundConstraintDataDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraintDataDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDCharacterGroundConstraintDataDataWrapper), 2830616435U) },
		{ FChaosVDCharacterGroundConstraint::StaticStruct, Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewStructOps, TEXT("ChaosVDCharacterGroundConstraint"), &Z_Registration_Info_UScriptStruct_ChaosVDCharacterGroundConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDCharacterGroundConstraint), 1044696372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCharacterGroundConstraintDataWrappers_h_456358125(TEXT("/Script/ChaosVDRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCharacterGroundConstraintDataWrappers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCharacterGroundConstraintDataWrappers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
