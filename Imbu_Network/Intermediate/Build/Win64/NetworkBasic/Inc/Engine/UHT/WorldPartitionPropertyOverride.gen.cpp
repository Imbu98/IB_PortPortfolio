// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionPropertyOverride.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionActorContainerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionPropertyOverride() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionPropertyOverride();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionPropertyOverride_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerPath();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPropertyOverride();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FContainerPropertyOverride();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubObjectPropertyOverride();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSubObjectPropertyOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubObjectPropertyOverride;
class UScriptStruct* FSubObjectPropertyOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubObjectPropertyOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubObjectPropertyOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubObjectPropertyOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SubObjectPropertyOverride"));
	}
	return Z_Registration_Info_UScriptStruct_SubObjectPropertyOverride.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSubObjectPropertyOverride>()
{
	return FSubObjectPropertyOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Per Sub-Object serialized tagged properties\n" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "ToolTip", "Per Sub-Object serialized tagged properties" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerializedTaggedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SerializedTaggedProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedTaggedProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubObjectPropertyOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::NewProp_SerializedTaggedProperties_Inner = { "SerializedTaggedProperties", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::NewProp_SerializedTaggedProperties = { "SerializedTaggedProperties", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubObjectPropertyOverride, SerializedTaggedProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerializedTaggedProperties_MetaData), NewProp_SerializedTaggedProperties_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::NewProp_SerializedTaggedProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::NewProp_SerializedTaggedProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SubObjectPropertyOverride",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::PropPointers), 0),
	sizeof(FSubObjectPropertyOverride),
	alignof(FSubObjectPropertyOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubObjectPropertyOverride()
{
	if (!Z_Registration_Info_UScriptStruct_SubObjectPropertyOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubObjectPropertyOverride.InnerSingleton, Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubObjectPropertyOverride.InnerSingleton;
}
// End ScriptStruct FSubObjectPropertyOverride

// Begin ScriptStruct FPropertyOverrideReferenceTable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyOverrideReferenceTable;
class UScriptStruct* FPropertyOverrideReferenceTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyOverrideReferenceTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyOverrideReferenceTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PropertyOverrideReferenceTable"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyOverrideReferenceTable.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPropertyOverrideReferenceTable>()
{
	return FPropertyOverrideReferenceTable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPathTable_MetaData[] = {
		{ "Comment", "// Contains SoftObjectPaths from the FSubObjectPropertyOverride serialization so that they can be properly fixed up (fixup redirectors)\n// This table should not be changed outside of serialization of the SubObjectOverrides\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "ToolTip", "Contains SoftObjectPaths from the FSubObjectPropertyOverride serialization so that they can be properly fixed up (fixup redirectors)\nThis table should not be changed outside of serialization of the SubObjectOverrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReferences_MetaData[] = {
		{ "Comment", "// Contains hard refs from the SoftObjectPathTable\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "ToolTip", "Contains hard refs from the SoftObjectPathTable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Comment", "// Support previous data this will be false until this override is resaved\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "ToolTip", "Support previous data this will be false until this override is resaved" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoftObjectPathTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoftObjectPathTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectReferences_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ObjectReferences;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyOverrideReferenceTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_SoftObjectPathTable_Inner = { "SoftObjectPathTable", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_SoftObjectPathTable = { "SoftObjectPathTable", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyOverrideReferenceTable, SoftObjectPathTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftObjectPathTable_MetaData), NewProp_SoftObjectPathTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_ObjectReferences_ElementProp = { "ObjectReferences", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_ObjectReferences = { "ObjectReferences", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyOverrideReferenceTable, ObjectReferences), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectReferences_MetaData), NewProp_ObjectReferences_MetaData) };
void Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FPropertyOverrideReferenceTable*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropertyOverrideReferenceTable), &Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_SoftObjectPathTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_SoftObjectPathTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_ObjectReferences_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_ObjectReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewProp_bIsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PropertyOverrideReferenceTable",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::PropPointers), 0),
	sizeof(FPropertyOverrideReferenceTable),
	alignof(FPropertyOverrideReferenceTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyOverrideReferenceTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyOverrideReferenceTable.InnerSingleton, Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyOverrideReferenceTable.InnerSingleton;
}
// End ScriptStruct FPropertyOverrideReferenceTable

// Begin ScriptStruct FActorPropertyOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorPropertyOverride;
class UScriptStruct* FActorPropertyOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPropertyOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorPropertyOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPropertyOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorPropertyOverride"));
	}
	return Z_Registration_Info_UScriptStruct_ActorPropertyOverride.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorPropertyOverride>()
{
	return FActorPropertyOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorPropertyOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Per Actor overrides, includes a map of Sub-Object name to FSubObjectPropertyOverride data\n" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "ToolTip", "Per Actor overrides, includes a map of Sub-Object name to FSubObjectPropertyOverride data" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Comment", "// Used to Serialize newly overriden ActorDescs\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "ToolTip", "Used to Serialize newly overriden ActorDescs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubObjectOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubObjectOverrides_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SubObjectOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SubObjectOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPropertyOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPropertyOverride, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_SubObjectOverrides_ValueProp = { "SubObjectOverrides", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSubObjectPropertyOverride, METADATA_PARAMS(0, nullptr) }; // 2342007805
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_SubObjectOverrides_Key_KeyProp = { "SubObjectOverrides_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_SubObjectOverrides = { "SubObjectOverrides", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPropertyOverride, SubObjectOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubObjectOverrides_MetaData), NewProp_SubObjectOverrides_MetaData) }; // 2342007805
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_ReferenceTable = { "ReferenceTable", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPropertyOverride, ReferenceTable), Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceTable_MetaData), NewProp_ReferenceTable_MetaData) }; // 1772681834
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_SubObjectOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_SubObjectOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_SubObjectOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewProp_ReferenceTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActorPropertyOverride",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::PropPointers), 0),
	sizeof(FActorPropertyOverride),
	alignof(FActorPropertyOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorPropertyOverride()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPropertyOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorPropertyOverride.InnerSingleton, Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorPropertyOverride.InnerSingleton;
}
// End ScriptStruct FActorPropertyOverride

// Begin ScriptStruct FContainerPropertyOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContainerPropertyOverride;
class UScriptStruct* FContainerPropertyOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContainerPropertyOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContainerPropertyOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContainerPropertyOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ContainerPropertyOverride"));
	}
	return Z_Registration_Info_UScriptStruct_ContainerPropertyOverride.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FContainerPropertyOverride>()
{
	return FContainerPropertyOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Per Container overrides, insludes a map of ActorGuid to FActorPropertyOverride data\n" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "ToolTip", "Per Container overrides, insludes a map of ActorGuid to FActorPropertyOverride data" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorOverrides_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActorOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContainerPropertyOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::NewProp_ActorOverrides_ValueProp = { "ActorOverrides", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActorPropertyOverride, METADATA_PARAMS(0, nullptr) }; // 3540046457
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::NewProp_ActorOverrides_Key_KeyProp = { "ActorOverrides_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::NewProp_ActorOverrides = { "ActorOverrides", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContainerPropertyOverride, ActorOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorOverrides_MetaData), NewProp_ActorOverrides_MetaData) }; // 3540046457
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::NewProp_ActorOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::NewProp_ActorOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::NewProp_ActorOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ContainerPropertyOverride",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::PropPointers), 0),
	sizeof(FContainerPropertyOverride),
	alignof(FContainerPropertyOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FContainerPropertyOverride()
{
	if (!Z_Registration_Info_UScriptStruct_ContainerPropertyOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContainerPropertyOverride.InnerSingleton, Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ContainerPropertyOverride.InnerSingleton;
}
// End ScriptStruct FContainerPropertyOverride

// Begin Class UWorldPartitionPropertyOverride
void UWorldPartitionPropertyOverride::StaticRegisterNativesUWorldPartitionPropertyOverride()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionPropertyOverride);
UClass* Z_Construct_UClass_UWorldPartitionPropertyOverride_NoRegister()
{
	return UWorldPartitionPropertyOverride::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Per Container/Sub-Container overrides, includes a map of ContainerPath to FContainerPropertyOverride data\n" },
		{ "IncludePath", "WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "ToolTip", "Per Container/Sub-Container overrides, includes a map of ContainerPath to FContainerPropertyOverride data" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyOverridesPerContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyOverridesPerContainer_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyOverridesPerContainer_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PropertyOverridesPerContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionPropertyOverride>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::NewProp_PropertyOverridesPerContainer_ValueProp = { "PropertyOverridesPerContainer", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FContainerPropertyOverride, METADATA_PARAMS(0, nullptr) }; // 1368150720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::NewProp_PropertyOverridesPerContainer_Key_KeyProp = { "PropertyOverridesPerContainer_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorContainerPath, METADATA_PARAMS(0, nullptr) }; // 3981793010
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::NewProp_PropertyOverridesPerContainer = { "PropertyOverridesPerContainer", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionPropertyOverride, PropertyOverridesPerContainer), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyOverridesPerContainer_MetaData), NewProp_PropertyOverridesPerContainer_MetaData) }; // 3981793010 1368150720
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::NewProp_PropertyOverridesPerContainer_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::NewProp_PropertyOverridesPerContainer_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::NewProp_PropertyOverridesPerContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::ClassParams = {
	&UWorldPartitionPropertyOverride::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionPropertyOverride()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.OuterSingleton, Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionPropertyOverride>()
{
	return UWorldPartitionPropertyOverride::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionPropertyOverride);
// End Class UWorldPartitionPropertyOverride

// Begin Class UWorldPartitionPropertyOverridePolicy
void UWorldPartitionPropertyOverridePolicy::StaticRegisterNativesUWorldPartitionPropertyOverridePolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionPropertyOverridePolicy);
UClass* Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_NoRegister()
{
	return UWorldPartitionPropertyOverridePolicy::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Policy used to choose which properties can be overriden (serialized)\n" },
		{ "IncludePath", "WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionPropertyOverride.h" },
		{ "ToolTip", "Policy used to choose which properties can be overriden (serialized)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionPropertyOverridePolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_Statics::ClassParams = {
	&UWorldPartitionPropertyOverridePolicy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.OuterSingleton, Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionPropertyOverridePolicy>()
{
	return UWorldPartitionPropertyOverridePolicy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionPropertyOverridePolicy);
// End Class UWorldPartitionPropertyOverridePolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubObjectPropertyOverride::StaticStruct, Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::NewStructOps, TEXT("SubObjectPropertyOverride"), &Z_Registration_Info_UScriptStruct_SubObjectPropertyOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubObjectPropertyOverride), 2342007805U) },
		{ FPropertyOverrideReferenceTable::StaticStruct, Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewStructOps, TEXT("PropertyOverrideReferenceTable"), &Z_Registration_Info_UScriptStruct_PropertyOverrideReferenceTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyOverrideReferenceTable), 1772681834U) },
		{ FActorPropertyOverride::StaticStruct, Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewStructOps, TEXT("ActorPropertyOverride"), &Z_Registration_Info_UScriptStruct_ActorPropertyOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorPropertyOverride), 3540046457U) },
		{ FContainerPropertyOverride::StaticStruct, Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::NewStructOps, TEXT("ContainerPropertyOverride"), &Z_Registration_Info_UScriptStruct_ContainerPropertyOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContainerPropertyOverride), 1368150720U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionPropertyOverride, UWorldPartitionPropertyOverride::StaticClass, TEXT("UWorldPartitionPropertyOverride"), &Z_Registration_Info_UClass_UWorldPartitionPropertyOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionPropertyOverride), 2056345846U) },
		{ Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy, UWorldPartitionPropertyOverridePolicy::StaticClass, TEXT("UWorldPartitionPropertyOverridePolicy"), &Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionPropertyOverridePolicy), 2482236548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h_4008909627(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
