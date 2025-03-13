// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Input/CameraRigInputSlotTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigInputSlotTypes() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraParameterClamping();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraParameterNormalization();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigInputSlotParameters();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FCameraRigInputSlotParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraRigInputSlotParameters;
class UScriptStruct* FCameraRigInputSlotParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigInputSlotParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraRigInputSlotParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigInputSlotParameters, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraRigInputSlotParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CameraRigInputSlotParameters.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraRigInputSlotParameters>()
{
	return FCameraRigInputSlotParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * General options for an input slot.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
		{ "ToolTip", "General options for an input slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccumulated_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreBlended_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsAccumulated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccumulated;
	static void NewProp_bIsPreBlended_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreBlended;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraRigInputSlotParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsAccumulated_SetBit(void* Obj)
{
	((FCameraRigInputSlotParameters*)Obj)->bIsAccumulated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsAccumulated = { "bIsAccumulated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraRigInputSlotParameters), &Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsAccumulated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAccumulated_MetaData), NewProp_bIsAccumulated_MetaData) };
void Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsPreBlended_SetBit(void* Obj)
{
	((FCameraRigInputSlotParameters*)Obj)->bIsPreBlended = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsPreBlended = { "bIsPreBlended", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraRigInputSlotParameters), &Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsPreBlended_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPreBlended_MetaData), NewProp_bIsPreBlended_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsAccumulated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsPreBlended,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraRigInputSlotParameters",
	Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::PropPointers),
	sizeof(FCameraRigInputSlotParameters),
	alignof(FCameraRigInputSlotParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraRigInputSlotParameters()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigInputSlotParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraRigInputSlotParameters.InnerSingleton, Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraRigInputSlotParameters.InnerSingleton;
}
// End ScriptStruct FCameraRigInputSlotParameters

// Begin ScriptStruct FCameraParameterClamping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraParameterClamping;
class UScriptStruct* FCameraParameterClamping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraParameterClamping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraParameterClamping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraParameterClamping, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraParameterClamping"));
	}
	return Z_Registration_Info_UScriptStruct_CameraParameterClamping.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraParameterClamping>()
{
	return FCameraParameterClamping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraParameterClamping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Value clamping parameters.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
		{ "ToolTip", "Value clamping parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Common" },
		{ "EditCondition", "bClampMin" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Common" },
		{ "EditCondition", "bClampMax" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampMin_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampMax_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxValue;
	static void NewProp_bClampMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampMin;
	static void NewProp_bClampMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraParameterClamping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraParameterClamping, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraParameterClamping, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
void Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMin_SetBit(void* Obj)
{
	((FCameraParameterClamping*)Obj)->bClampMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMin = { "bClampMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraParameterClamping), &Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampMin_MetaData), NewProp_bClampMin_MetaData) };
void Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMax_SetBit(void* Obj)
{
	((FCameraParameterClamping*)Obj)->bClampMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMax = { "bClampMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraParameterClamping), &Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampMax_MetaData), NewProp_bClampMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraParameterClamping",
	Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::PropPointers),
	sizeof(FCameraParameterClamping),
	alignof(FCameraParameterClamping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraParameterClamping()
{
	if (!Z_Registration_Info_UScriptStruct_CameraParameterClamping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraParameterClamping.InnerSingleton, Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraParameterClamping.InnerSingleton;
}
// End ScriptStruct FCameraParameterClamping

// Begin ScriptStruct FCameraParameterNormalization
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraParameterNormalization;
class UScriptStruct* FCameraParameterNormalization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraParameterNormalization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraParameterNormalization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraParameterNormalization, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraParameterNormalization"));
	}
	return Z_Registration_Info_UScriptStruct_CameraParameterNormalization.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraParameterNormalization>()
{
	return FCameraParameterNormalization::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Value normalization parameters.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
		{ "ToolTip", "Value normalization parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Common" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bNormalize" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Nodes/Input/CameraRigInputSlotTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxValue;
	static void NewProp_bNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraParameterNormalization>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraParameterNormalization, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
void Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::NewProp_bNormalize_SetBit(void* Obj)
{
	((FCameraParameterNormalization*)Obj)->bNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraParameterNormalization), &Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalize_MetaData), NewProp_bNormalize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::NewProp_bNormalize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraParameterNormalization",
	Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::PropPointers),
	sizeof(FCameraParameterNormalization),
	alignof(FCameraParameterNormalization),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraParameterNormalization()
{
	if (!Z_Registration_Info_UScriptStruct_CameraParameterNormalization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraParameterNormalization.InnerSingleton, Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraParameterNormalization.InnerSingleton;
}
// End ScriptStruct FCameraParameterNormalization

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInputSlotTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraRigInputSlotParameters::StaticStruct, Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewStructOps, TEXT("CameraRigInputSlotParameters"), &Z_Registration_Info_UScriptStruct_CameraRigInputSlotParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraRigInputSlotParameters), 168626388U) },
		{ FCameraParameterClamping::StaticStruct, Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewStructOps, TEXT("CameraParameterClamping"), &Z_Registration_Info_UScriptStruct_CameraParameterClamping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraParameterClamping), 2402098592U) },
		{ FCameraParameterNormalization::StaticStruct, Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::NewStructOps, TEXT("CameraParameterNormalization"), &Z_Registration_Info_UScriptStruct_CameraParameterNormalization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraParameterNormalization), 3287390986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInputSlotTypes_h_152367209(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInputSlotTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInputSlotTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
