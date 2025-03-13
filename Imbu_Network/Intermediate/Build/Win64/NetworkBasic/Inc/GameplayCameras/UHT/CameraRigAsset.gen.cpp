// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraRigAsset.h"
#include "GameplayCameras/Public/Core/CameraNodeEvaluatorFwd.h"
#include "GameplayCameras/Public/Core/CameraVariableTableFwd.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigInterfaceParameter();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigInterfaceParameter_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigTransition_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraVariableAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UHasCameraBuildStatus_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphObject_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigAllocationInfo();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigInterface();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FCameraRigAllocationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraRigAllocationInfo;
class UScriptStruct* FCameraRigAllocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigAllocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraRigAllocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigAllocationInfo, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraRigAllocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CameraRigAllocationInfo.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraRigAllocationInfo>()
{
	return FCameraRigAllocationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure describing various allocations needed by a camera node.\n */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Structure describing various allocations needed by a camera node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatorInfo_MetaData[] = {
		{ "Comment", "/** Allocation info for node evaluators. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Allocation info for node evaluators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTableInfo_MetaData[] = {
		{ "Comment", "/** Allocation info for the camera variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Allocation info for the camera variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluatorInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTableInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraRigAllocationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::NewProp_EvaluatorInfo = { "EvaluatorInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigAllocationInfo, EvaluatorInfo), Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluatorInfo_MetaData), NewProp_EvaluatorInfo_MetaData) }; // 3301974227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::NewProp_VariableTableInfo = { "VariableTableInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigAllocationInfo, VariableTableInfo), Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTableInfo_MetaData), NewProp_VariableTableInfo_MetaData) }; // 3977200556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::NewProp_EvaluatorInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::NewProp_VariableTableInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraRigAllocationInfo",
	Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::PropPointers),
	sizeof(FCameraRigAllocationInfo),
	alignof(FCameraRigAllocationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraRigAllocationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigAllocationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraRigAllocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraRigAllocationInfo.InnerSingleton;
}
// End ScriptStruct FCameraRigAllocationInfo

// Begin Class UCameraRigInterfaceParameter
void UCameraRigInterfaceParameter::StaticRegisterNativesUCameraRigInterfaceParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRigInterfaceParameter);
UClass* Z_Construct_UClass_UCameraRigInterfaceParameter_NoRegister()
{
	return UCameraRigInterfaceParameter::StaticClass();
}
struct Z_Construct_UClass_UCameraRigInterfaceParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An exposed camera rig parameter that drives a specific parameter on one of\n * its camera nodes.\n */" },
		{ "IncludePath", "Core/CameraRigAsset.h" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphSelfPinDirection", "Output" },
		{ "ToolTip", "An exposed camera rig parameter that drives a specific parameter on one of\nits camera nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Comment", "/** The camera node that this parameter drives. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "The camera node that this parameter drives." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPropertyName_MetaData[] = {
		{ "Comment", "/** The camera parameter on the target camera node that this parameter drives. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "The camera parameter on the target camera node that this parameter drives." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceParameterName_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The exposed name for this parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "The exposed name for this parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateVariable_MetaData[] = {
		{ "Comment", "/**\n\x09 * The private camera variable created to drive the target camera parameter on\n\x09 * the target camera node. This variable is created by the build method on the\n\x09 * camera rig.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "The private camera variable created to drive the target camera parameter on\nthe target camera node. This variable is created by the build method on the\ncamera rig." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePos_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetPropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InterfaceParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateVariable;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphNodePos;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraRigInterfaceParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInterfaceParameter, Target), Z_Construct_UClass_UCameraNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_TargetPropertyName = { "TargetPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInterfaceParameter, TargetPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPropertyName_MetaData), NewProp_TargetPropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_InterfaceParameterName = { "InterfaceParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInterfaceParameter, InterfaceParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceParameterName_MetaData), NewProp_InterfaceParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInterfaceParameter, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_PrivateVariable = { "PrivateVariable", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInterfaceParameter, PrivateVariable), Z_Construct_UClass_UCameraVariableAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateVariable_MetaData), NewProp_PrivateVariable_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_GraphNodePos = { "GraphNodePos", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigInterfaceParameter, GraphNodePos), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePos_MetaData), NewProp_GraphNodePos_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_TargetPropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_InterfaceParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_PrivateVariable,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::NewProp_GraphNodePos,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UObjectTreeGraphObject_NoRegister, (int32)VTABLE_OFFSET(UCameraRigInterfaceParameter, IObjectTreeGraphObject), false },  // 1612724473
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::ClassParams = {
	&UCameraRigInterfaceParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraRigInterfaceParameter()
{
	if (!Z_Registration_Info_UClass_UCameraRigInterfaceParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRigInterfaceParameter.OuterSingleton, Z_Construct_UClass_UCameraRigInterfaceParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraRigInterfaceParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraRigInterfaceParameter>()
{
	return UCameraRigInterfaceParameter::StaticClass();
}
UCameraRigInterfaceParameter::UCameraRigInterfaceParameter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRigInterfaceParameter);
UCameraRigInterfaceParameter::~UCameraRigInterfaceParameter() {}
// End Class UCameraRigInterfaceParameter

// Begin ScriptStruct FCameraRigInterface
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraRigInterface;
class UScriptStruct* FCameraRigInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraRigInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigInterface, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraRigInterface"));
	}
	return Z_Registration_Info_UScriptStruct_CameraRigInterface.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraRigInterface>()
{
	return FCameraRigInterface::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraRigInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure defining the public data interface of a camera rig asset.\n */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Structure defining the public data interface of a camera rig asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceParameters_Inner_MetaData[] = {
		{ "Comment", "/** The list of exposed parameters on the camera rig. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "The list of exposed parameters on the camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceParameters_MetaData[] = {
		{ "Comment", "/** The list of exposed parameters on the camera rig. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "The list of exposed parameters on the camera rig." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterfaceParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InterfaceParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraRigInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraRigInterface_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigInterface, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraRigInterface_Statics::NewProp_InterfaceParameters_Inner = { "InterfaceParameters", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraRigInterfaceParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceParameters_Inner_MetaData), NewProp_InterfaceParameters_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigInterface_Statics::NewProp_InterfaceParameters = { "InterfaceParameters", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigInterface, InterfaceParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceParameters_MetaData), NewProp_InterfaceParameters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraRigInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigInterface_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigInterface_Statics::NewProp_InterfaceParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigInterface_Statics::NewProp_InterfaceParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraRigInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraRigInterface",
	Z_Construct_UScriptStruct_FCameraRigInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigInterface_Statics::PropPointers),
	sizeof(FCameraRigInterface),
	alignof(FCameraRigInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraRigInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraRigInterface()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraRigInterface.InnerSingleton, Z_Construct_UScriptStruct_FCameraRigInterface_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraRigInterface.InnerSingleton;
}
// End ScriptStruct FCameraRigInterface

// Begin Class UCameraRigAsset
void UCameraRigAsset::StaticRegisterNativesUCameraRigAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRigAsset);
UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister()
{
	return UCameraRigAsset::StaticClass();
}
struct Z_Construct_UClass_UCameraRigAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera rig asset, which runs a hierarchy of camera nodes to drive \n * the behavior of a camera.\n */" },
		{ "IncludePath", "Core/CameraRigAsset.h" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "A camera rig asset, which runs a hierarchy of camera nodes to drive\nthe behavior of a camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
		{ "Comment", "/** Root camera node. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Root camera node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** The gameplay tags on this camera rig. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "The gameplay tags on this camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[] = {
		{ "Comment", "/** The public data interface of this camera rig. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "The public data interface of this camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterTransitions_Inner_MetaData[] = {
		{ "Comment", "/** List of enter transitions for this camera rig. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphPinDirection", "Input" },
		{ "ToolTip", "List of enter transitions for this camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterTransitions_MetaData[] = {
		{ "Comment", "/** List of enter transitions for this camera rig. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphPinDirection", "Input" },
		{ "ToolTip", "List of enter transitions for this camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitTransitions_Inner_MetaData[] = {
		{ "Comment", "/** List of exist transitions for this camera rig. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphPinDirection", "Output" },
		{ "ToolTip", "List of exist transitions for this camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitTransitions_MetaData[] = {
		{ "Comment", "/** List of exist transitions for this camera rig. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphPinDirection", "Output" },
		{ "ToolTip", "List of exist transitions for this camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialOrientation_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Default orientation initialization when this camera rig is activated. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Default orientation initialization when this camera rig is activated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocationInfo_MetaData[] = {
		{ "Comment", "/** Allocation information for all the nodes and variables in this camera rig. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Allocation information for all the nodes and variables in this camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildStatus_MetaData[] = {
		{ "Comment", "/** The current build state of this camera rig. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "The current build state of this camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGraphNodePos_MetaData[] = {
		{ "Comment", "/** Position of the camera rig node in the node graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Position of the camera rig node in the node graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionGraphNodePos_MetaData[] = {
		{ "Comment", "/** Position of the camera rig node in the transition graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Position of the camera rig node in the transition graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGraphNodeComment_MetaData[] = {
		{ "Comment", "/** User-written comment in the node graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "User-written comment in the node graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionGraphNodeComment_MetaData[] = {
		{ "Comment", "/** User-written comment in the transition graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "User-written comment in the transition graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNodeTreeObjects_Inner_MetaData[] = {
		{ "Comment", "/** \n\x09 * A list of all the camera nodes, including the 'loose' ones that aren't connected\n\x09 * to the root node, and therefore would be GC'ed if we didn't hold them here.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "A list of all the camera nodes, including the 'loose' ones that aren't connected\nto the root node, and therefore would be GC'ed if we didn't hold them here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNodeTreeObjects_MetaData[] = {
		{ "Comment", "/** \n\x09 * A list of all the camera nodes, including the 'loose' ones that aren't connected\n\x09 * to the root node, and therefore would be GC'ed if we didn't hold them here.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "A list of all the camera nodes, including the 'loose' ones that aren't connected\nto the root node, and therefore would be GC'ed if we didn't hold them here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTransitionsObjects_Inner_MetaData[] = {
		{ "Comment", "/**\n\x09 * Similar to AllNodeTreeObjects, but for the transitions graph.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "Similar to AllNodeTreeObjects, but for the transitions graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTransitionsObjects_MetaData[] = {
		{ "Comment", "/**\n\x09 * Similar to AllNodeTreeObjects, but for the transitions graph.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "Similar to AllNodeTreeObjects, but for the transitions graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePosX_MetaData[] = {
		{ "Comment", "// Deprecated properties.\n" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
		{ "ToolTip", "Deprecated properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePosY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Interface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnterTransitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterTransitions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitTransitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExitTransitions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialOrientation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialOrientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllocationInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGraphNodePos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionGraphNodePos;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeGraphNodeComment;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransitionGraphNodeComment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodeTreeObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodeTreeObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTransitionsObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTransitionsObjects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphNodePosX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphNodePosY;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraRigAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0116000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, RootNode), Z_Construct_UClass_UCameraNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNode_MetaData), NewProp_RootNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, Interface), Z_Construct_UScriptStruct_FCameraRigInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interface_MetaData), NewProp_Interface_MetaData) }; // 2467518277
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_EnterTransitions_Inner = { "EnterTransitions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraRigTransition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterTransitions_Inner_MetaData), NewProp_EnterTransitions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_EnterTransitions = { "EnterTransitions", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, EnterTransitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterTransitions_MetaData), NewProp_EnterTransitions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_ExitTransitions_Inner = { "ExitTransitions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraRigTransition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitTransitions_Inner_MetaData), NewProp_ExitTransitions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_ExitTransitions = { "ExitTransitions", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, ExitTransitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitTransitions_MetaData), NewProp_ExitTransitions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_InitialOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_InitialOrientation = { "InitialOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, InitialOrientation), Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialOrientation_MetaData), NewProp_InitialOrientation_MetaData) }; // 1354934049
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllocationInfo = { "AllocationInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, AllocationInfo), Z_Construct_UScriptStruct_FCameraRigAllocationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocationInfo_MetaData), NewProp_AllocationInfo_MetaData) }; // 1001224746
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_BuildStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_BuildStatus = { "BuildStatus", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, BuildStatus), Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildStatus_MetaData), NewProp_BuildStatus_MetaData) }; // 2777232607
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_NodeGraphNodePos = { "NodeGraphNodePos", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, NodeGraphNodePos), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGraphNodePos_MetaData), NewProp_NodeGraphNodePos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_TransitionGraphNodePos = { "TransitionGraphNodePos", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, TransitionGraphNodePos), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionGraphNodePos_MetaData), NewProp_TransitionGraphNodePos_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_NodeGraphNodeComment = { "NodeGraphNodeComment", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, NodeGraphNodeComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGraphNodeComment_MetaData), NewProp_NodeGraphNodeComment_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_TransitionGraphNodeComment = { "TransitionGraphNodeComment", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, TransitionGraphNodeComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionGraphNodeComment_MetaData), NewProp_TransitionGraphNodeComment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllNodeTreeObjects_Inner = { "AllNodeTreeObjects", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllNodeTreeObjects_Inner_MetaData), NewProp_AllNodeTreeObjects_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllNodeTreeObjects = { "AllNodeTreeObjects", nullptr, (EPropertyFlags)0x0144008800000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, AllNodeTreeObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllNodeTreeObjects_MetaData), NewProp_AllNodeTreeObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllTransitionsObjects_Inner = { "AllTransitionsObjects", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTransitionsObjects_Inner_MetaData), NewProp_AllTransitionsObjects_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllTransitionsObjects = { "AllTransitionsObjects", nullptr, (EPropertyFlags)0x0144008800000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, AllTransitionsObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTransitionsObjects_MetaData), NewProp_AllTransitionsObjects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_GraphNodePosX = { "GraphNodePosX", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, GraphNodePosX_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePosX_MetaData), NewProp_GraphNodePosX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_GraphNodePosY = { "GraphNodePosY", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigAsset, GraphNodePosY_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePosY_MetaData), NewProp_GraphNodePosY_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraRigAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_RootNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_Interface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_EnterTransitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_EnterTransitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_ExitTransitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_ExitTransitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_InitialOrientation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_InitialOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllocationInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_BuildStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_BuildStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_Guid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_NodeGraphNodePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_TransitionGraphNodePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_NodeGraphNodeComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_TransitionGraphNodeComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllNodeTreeObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllNodeTreeObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllTransitionsObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_AllTransitionsObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_GraphNodePosX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigAsset_Statics::NewProp_GraphNodePosY,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraRigAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCameraRigAsset_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UCameraRigAsset, IGameplayTagAssetInterface), false },  // 2592985258
	{ Z_Construct_UClass_UHasCameraBuildStatus_NoRegister, (int32)VTABLE_OFFSET(UCameraRigAsset, IHasCameraBuildStatus), false },  // 2979863171
	{ Z_Construct_UClass_UObjectTreeGraphObject_NoRegister, (int32)VTABLE_OFFSET(UCameraRigAsset, IObjectTreeGraphObject), false },  // 1612724473
	{ Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister, (int32)VTABLE_OFFSET(UCameraRigAsset, IObjectTreeGraphRootObject), false },  // 2327080302
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRigAsset_Statics::ClassParams = {
	&UCameraRigAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraRigAsset_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigAsset_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRigAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraRigAsset()
{
	if (!Z_Registration_Info_UClass_UCameraRigAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRigAsset.OuterSingleton, Z_Construct_UClass_UCameraRigAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraRigAsset.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraRigAsset>()
{
	return UCameraRigAsset::StaticClass();
}
UCameraRigAsset::UCameraRigAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRigAsset);
UCameraRigAsset::~UCameraRigAsset() {}
// End Class UCameraRigAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraRigAllocationInfo::StaticStruct, Z_Construct_UScriptStruct_FCameraRigAllocationInfo_Statics::NewStructOps, TEXT("CameraRigAllocationInfo"), &Z_Registration_Info_UScriptStruct_CameraRigAllocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraRigAllocationInfo), 1001224746U) },
		{ FCameraRigInterface::StaticStruct, Z_Construct_UScriptStruct_FCameraRigInterface_Statics::NewStructOps, TEXT("CameraRigInterface"), &Z_Registration_Info_UScriptStruct_CameraRigInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraRigInterface), 2467518277U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraRigInterfaceParameter, UCameraRigInterfaceParameter::StaticClass, TEXT("UCameraRigInterfaceParameter"), &Z_Registration_Info_UClass_UCameraRigInterfaceParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRigInterfaceParameter), 594039688U) },
		{ Z_Construct_UClass_UCameraRigAsset, UCameraRigAsset::StaticClass, TEXT("UCameraRigAsset"), &Z_Registration_Info_UClass_UCameraRigAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRigAsset), 585938688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_2950154878(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
