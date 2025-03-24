// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraVariableTableFwd.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraVariableTableFwd() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraVariableAsset_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraVariableType();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraVariableDefinition();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraVariableID();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Enum ECameraVariableType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraVariableType;
static UEnum* ECameraVariableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraVariableType, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraVariableType"));
	}
	return Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraVariableType>()
{
	return ECameraVariableType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECameraVariableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Boolean.Name", "ECameraVariableType::Boolean" },
		{ "Comment", "/**\n * The type of a camera variable. \n *\n * Only a fixed set of types are supported for camera variables because of\n * simplicity, and because these types need to be blendable.\n */" },
		{ "Double.Name", "ECameraVariableType::Double" },
		{ "Float.Name", "ECameraVariableType::Float" },
		{ "Integer32.Name", "ECameraVariableType::Integer32" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "Rotator3d.Name", "ECameraVariableType::Rotator3d" },
		{ "Rotator3f.Name", "ECameraVariableType::Rotator3f" },
		{ "ToolTip", "The type of a camera variable.\n\nOnly a fixed set of types are supported for camera variables because of\nsimplicity, and because these types need to be blendable." },
		{ "Transform3d.Name", "ECameraVariableType::Transform3d" },
		{ "Transform3f.Name", "ECameraVariableType::Transform3f" },
		{ "Vector2d.Name", "ECameraVariableType::Vector2d" },
		{ "Vector2f.Name", "ECameraVariableType::Vector2f" },
		{ "Vector3d.Name", "ECameraVariableType::Vector3d" },
		{ "Vector3f.Name", "ECameraVariableType::Vector3f" },
		{ "Vector4d.Name", "ECameraVariableType::Vector4d" },
		{ "Vector4f.Name", "ECameraVariableType::Vector4f" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraVariableType::Boolean", (int64)ECameraVariableType::Boolean },
		{ "ECameraVariableType::Integer32", (int64)ECameraVariableType::Integer32 },
		{ "ECameraVariableType::Float", (int64)ECameraVariableType::Float },
		{ "ECameraVariableType::Double", (int64)ECameraVariableType::Double },
		{ "ECameraVariableType::Vector2f", (int64)ECameraVariableType::Vector2f },
		{ "ECameraVariableType::Vector2d", (int64)ECameraVariableType::Vector2d },
		{ "ECameraVariableType::Vector3f", (int64)ECameraVariableType::Vector3f },
		{ "ECameraVariableType::Vector3d", (int64)ECameraVariableType::Vector3d },
		{ "ECameraVariableType::Vector4f", (int64)ECameraVariableType::Vector4f },
		{ "ECameraVariableType::Vector4d", (int64)ECameraVariableType::Vector4d },
		{ "ECameraVariableType::Rotator3f", (int64)ECameraVariableType::Rotator3f },
		{ "ECameraVariableType::Rotator3d", (int64)ECameraVariableType::Rotator3d },
		{ "ECameraVariableType::Transform3f", (int64)ECameraVariableType::Transform3f },
		{ "ECameraVariableType::Transform3d", (int64)ECameraVariableType::Transform3d },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraVariableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECameraVariableType",
	"ECameraVariableType",
	Z_Construct_UEnum_GameplayCameras_ECameraVariableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraVariableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraVariableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECameraVariableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECameraVariableType()
{
	if (!Z_Registration_Info_UEnum_ECameraVariableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraVariableType.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraVariableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraVariableType.InnerSingleton;
}
// End Enum ECameraVariableType

// Begin ScriptStruct FCameraVariableID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraVariableID;
class UScriptStruct* FCameraVariableID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraVariableID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraVariableID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraVariableID, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraVariableID"));
	}
	return Z_Registration_Info_UScriptStruct_CameraVariableID.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraVariableID>()
{
	return FCameraVariableID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraVariableID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The ID of a camera variable, used to refer to it in a camera variable table.\n */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "The ID of a camera variable, used to refer to it in a camera variable table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraVariableID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCameraVariableID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraVariableID, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraVariableID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableID_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraVariableID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraVariableID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraVariableID",
	Z_Construct_UScriptStruct_FCameraVariableID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraVariableID_Statics::PropPointers),
	sizeof(FCameraVariableID),
	alignof(FCameraVariableID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraVariableID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraVariableID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraVariableID()
{
	if (!Z_Registration_Info_UScriptStruct_CameraVariableID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraVariableID.InnerSingleton, Z_Construct_UScriptStruct_FCameraVariableID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraVariableID.InnerSingleton;
}
// End ScriptStruct FCameraVariableID

// Begin ScriptStruct FCameraVariableDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraVariableDefinition;
class UScriptStruct* FCameraVariableDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraVariableDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraVariableDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraVariableDefinition, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraVariableDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CameraVariableDefinition.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraVariableDefinition>()
{
	return FCameraVariableDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A structure that describes a camera variable.\n */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "A structure that describes a camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableID_MetaData[] = {
		{ "Comment", "/** The ID of the variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "The ID of the variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[] = {
		{ "Comment", "/** The type of the variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "The type of the variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrivate_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether the variable is private. \n\x09 *\n\x09 * Private variables are not propagated from one table to another when\n\x09 * interpolating or overriding a table.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "Whether the variable is private.\n\nPrivate variables are not propagated from one table to another when\ninterpolating or overriding a table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInput_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether the variable is an input variable.\n\x09 *\n\x09 * Input variables are blended during the pre-blend parameter update phase.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "Whether the variable is an input variable.\n\nInput variables are blended during the pre-blend parameter update phase." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "Comment", "/** The name of the variable, for debugging purposes. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "The name of the variable, for debugging purposes." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VariableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VariableType;
	static void NewProp_bIsPrivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrivate;
	static void NewProp_bIsInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInput;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraVariableDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_VariableID = { "VariableID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraVariableDefinition, VariableID), Z_Construct_UScriptStruct_FCameraVariableID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableID_MetaData), NewProp_VariableID_MetaData) }; // 303423562
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_VariableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraVariableDefinition, VariableType), Z_Construct_UEnum_GameplayCameras_ECameraVariableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableType_MetaData), NewProp_VariableType_MetaData) }; // 1703185933
void Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsPrivate_SetBit(void* Obj)
{
	((FCameraVariableDefinition*)Obj)->bIsPrivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsPrivate = { "bIsPrivate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraVariableDefinition), &Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsPrivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPrivate_MetaData), NewProp_bIsPrivate_MetaData) };
void Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsInput_SetBit(void* Obj)
{
	((FCameraVariableDefinition*)Obj)->bIsInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsInput = { "bIsInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraVariableDefinition), &Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInput_MetaData), NewProp_bIsInput_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraVariableDefinition, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_VariableID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_VariableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_VariableType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsPrivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsInput,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_VariableName,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraVariableDefinition",
	Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::PropPointers),
	sizeof(FCameraVariableDefinition),
	alignof(FCameraVariableDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraVariableDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CameraVariableDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraVariableDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraVariableDefinition.InnerSingleton;
}
// End ScriptStruct FCameraVariableDefinition

// Begin ScriptStruct FCameraVariableTableAllocationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraVariableTableAllocationInfo;
class UScriptStruct* FCameraVariableTableAllocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraVariableTableAllocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraVariableTableAllocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraVariableTableAllocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CameraVariableTableAllocationInfo.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraVariableTableAllocationInfo>()
{
	return FCameraVariableTableAllocationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A structure that describes the required camera variable table setup of a camera rig.\n */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "A structure that describes the required camera variable table setup of a camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableDefinitions_MetaData[] = {
		{ "Comment", "/** The list of variables that should be allocated in a table. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "The list of variables that should be allocated in a table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoResetVariables_MetaData[] = {
		{ "Comment", "/** The list of variables that should be auto-reset to their default value every frame. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableTableFwd.h" },
		{ "ToolTip", "The list of variables that should be auto-reset to their default value every frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariableDefinitions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoResetVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoResetVariables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraVariableTableAllocationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewProp_VariableDefinitions_Inner = { "VariableDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraVariableDefinition, METADATA_PARAMS(0, nullptr) }; // 714619872
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewProp_VariableDefinitions = { "VariableDefinitions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraVariableTableAllocationInfo, VariableDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableDefinitions_MetaData), NewProp_VariableDefinitions_MetaData) }; // 714619872
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewProp_AutoResetVariables_Inner = { "AutoResetVariables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraVariableAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewProp_AutoResetVariables = { "AutoResetVariables", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraVariableTableAllocationInfo, AutoResetVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoResetVariables_MetaData), NewProp_AutoResetVariables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewProp_VariableDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewProp_VariableDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewProp_AutoResetVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewProp_AutoResetVariables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraVariableTableAllocationInfo",
	Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::PropPointers),
	sizeof(FCameraVariableTableAllocationInfo),
	alignof(FCameraVariableTableAllocationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CameraVariableTableAllocationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraVariableTableAllocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraVariableTableAllocationInfo.InnerSingleton;
}
// End ScriptStruct FCameraVariableTableAllocationInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraVariableType_StaticEnum, TEXT("ECameraVariableType"), &Z_Registration_Info_UEnum_ECameraVariableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1703185933U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraVariableID::StaticStruct, Z_Construct_UScriptStruct_FCameraVariableID_Statics::NewStructOps, TEXT("CameraVariableID"), &Z_Registration_Info_UScriptStruct_CameraVariableID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraVariableID), 303423562U) },
		{ FCameraVariableDefinition::StaticStruct, Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewStructOps, TEXT("CameraVariableDefinition"), &Z_Registration_Info_UScriptStruct_CameraVariableDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraVariableDefinition), 714619872U) },
		{ FCameraVariableTableAllocationInfo::StaticStruct, Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewStructOps, TEXT("CameraVariableTableAllocationInfo"), &Z_Registration_Info_UScriptStruct_CameraVariableTableAllocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraVariableTableAllocationInfo), 3977200556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_2795200905(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
