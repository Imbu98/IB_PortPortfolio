// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosVisualDebugger/Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDAccelerationStructureDataWrappers() {}

// Begin Cross Module References
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDWrapperDataBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
UPackage* Z_Construct_UPackage__Script_ChaosVDRuntime();
// End Cross Module References

// Begin Enum EChaosVDAABBTreeNodeFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags;
static UEnum* EChaosVDAABBTreeNodeFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDAABBTreeNodeFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDAABBTreeNodeFlags>()
{
	return EChaosVDAABBTreeNodeFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "IsDirty.Name", "EChaosVDAABBTreeNodeFlags::IsDirty" },
		{ "IsLeaf.Name", "EChaosVDAABBTreeNodeFlags::IsLeaf" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
		{ "None.Name", "EChaosVDAABBTreeNodeFlags::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDAABBTreeNodeFlags::None", (int64)EChaosVDAABBTreeNodeFlags::None },
		{ "EChaosVDAABBTreeNodeFlags::IsLeaf", (int64)EChaosVDAABBTreeNodeFlags::IsLeaf },
		{ "EChaosVDAABBTreeNodeFlags::IsDirty", (int64)EChaosVDAABBTreeNodeFlags::IsDirty },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDAABBTreeNodeFlags",
	"EChaosVDAABBTreeNodeFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.InnerSingleton;
}
// End Enum EChaosVDAABBTreeNodeFlags

// Begin Enum EChaosVDAccelerationStructureType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType;
static UEnum* EChaosVDAccelerationStructureType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDAccelerationStructureType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDAccelerationStructureType>()
{
	return EChaosVDAccelerationStructureType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AABBTree.Name", "EChaosVDAccelerationStructureType::AABBTree" },
		{ "AABBTreeBV.Name", "EChaosVDAccelerationStructureType::AABBTreeBV" },
		{ "BoundingVolume.Name", "EChaosVDAccelerationStructureType::BoundingVolume" },
		{ "Collection.Name", "EChaosVDAccelerationStructureType::Collection" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
		{ "Unknown.Name", "EChaosVDAccelerationStructureType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDAccelerationStructureType::BoundingVolume", (int64)EChaosVDAccelerationStructureType::BoundingVolume },
		{ "EChaosVDAccelerationStructureType::AABBTree", (int64)EChaosVDAccelerationStructureType::AABBTree },
		{ "EChaosVDAccelerationStructureType::AABBTreeBV", (int64)EChaosVDAccelerationStructureType::AABBTreeBV },
		{ "EChaosVDAccelerationStructureType::Collection", (int64)EChaosVDAccelerationStructureType::Collection },
		{ "EChaosVDAccelerationStructureType::Unknown", (int64)EChaosVDAccelerationStructureType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDAccelerationStructureType",
	"EChaosVDAccelerationStructureType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.InnerSingleton;
}
// End Enum EChaosVDAccelerationStructureType

// Begin ScriptStruct FChaosVDAccelerationStructureBase
static_assert(std::is_polymorphic<FChaosVDAccelerationStructureBase>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDAccelerationStructureBase cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDAccelerationStructureBase;
class UScriptStruct* FChaosVDAccelerationStructureBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAccelerationStructureBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDAccelerationStructureBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDAccelerationStructureBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAccelerationStructureBase.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDAccelerationStructureBase>()
{
	return FChaosVDAccelerationStructureBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverId_MetaData[] = {
		{ "Category", "CVD Debug" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SolverId;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDAccelerationStructureBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::NewProp_SolverId = { "SolverId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAccelerationStructureBase, SolverId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverId_MetaData), NewProp_SolverId_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAccelerationStructureBase, Type), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 764026262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::NewProp_SolverId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDAccelerationStructureBase",
	Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::PropPointers),
	sizeof(FChaosVDAccelerationStructureBase),
	alignof(FChaosVDAccelerationStructureBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAccelerationStructureBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDAccelerationStructureBase.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAccelerationStructureBase.InnerSingleton;
}
// End ScriptStruct FChaosVDAccelerationStructureBase

// Begin ScriptStruct FChaosVDBVCellElementDataWrapper
static_assert(std::is_polymorphic<FChaosVDBVCellElementDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDBVCellElementDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDBVCellElementDataWrapper;
class UScriptStruct* FChaosVDBVCellElementDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDBVCellElementDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDBVCellElementDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDBVCellElementDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDBVCellElementDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDBVCellElementDataWrapper>()
{
	return FChaosVDBVCellElementDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDBVCellElementDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDBVCellElementDataWrapper, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDBVCellElementDataWrapper, ParticleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndex_MetaData), NewProp_ParticleIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::NewProp_ParticleIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDBVCellElementDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDBVCellElementDataWrapper),
	alignof(FChaosVDBVCellElementDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDBVCellElementDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDBVCellElementDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDBVCellElementDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDBVCellElementDataWrapper

// Begin ScriptStruct FChaosVDBoundingVolumeDataWrapper
static_assert(std::is_polymorphic<FChaosVDBoundingVolumeDataWrapper>() == std::is_polymorphic<FChaosVDAccelerationStructureBase>(), "USTRUCT FChaosVDBoundingVolumeDataWrapper cannot be polymorphic unless super FChaosVDAccelerationStructureBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDBoundingVolumeDataWrapper;
class UScriptStruct* FChaosVDBoundingVolumeDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDBoundingVolumeDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDBoundingVolumeDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDBoundingVolumeDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDBoundingVolumeDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDBoundingVolumeDataWrapper>()
{
	return FChaosVDBoundingVolumeDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPayloadBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxPayloadBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDBoundingVolumeDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::NewProp_MaxPayloadBounds = { "MaxPayloadBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDBoundingVolumeDataWrapper, MaxPayloadBounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPayloadBounds_MetaData), NewProp_MaxPayloadBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::NewProp_MaxPayloadBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase,
	&NewStructOps,
	"ChaosVDBoundingVolumeDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDBoundingVolumeDataWrapper),
	alignof(FChaosVDBoundingVolumeDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDBoundingVolumeDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDBoundingVolumeDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDBoundingVolumeDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDBoundingVolumeDataWrapper

// Begin ScriptStruct FChaosVDAABBTreeNodeDataWrapper
static_assert(std::is_polymorphic<FChaosVDAABBTreeNodeDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDAABBTreeNodeDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeNodeDataWrapper;
class UScriptStruct* FChaosVDAABBTreeNodeDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeNodeDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeNodeDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDAABBTreeNodeDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeNodeDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDAABBTreeNodeDataWrapper>()
{
	return FChaosVDAABBTreeNodeDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "AABB Tree Node" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenBounds_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenNodes_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeaf_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDirtyNode_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildrenBounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChildrenNodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentNode;
	static void NewProp_bLeaf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaf;
	static void NewProp_bDirtyNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirtyNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDAABBTreeNodeDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_ChildrenBounds = { "ChildrenBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ChildrenBounds, FChaosVDAABBTreeNodeDataWrapper), STRUCT_OFFSET(FChaosVDAABBTreeNodeDataWrapper, ChildrenBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildrenBounds_MetaData), NewProp_ChildrenBounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_ChildrenNodes = { "ChildrenNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ChildrenNodes, FChaosVDAABBTreeNodeDataWrapper), STRUCT_OFFSET(FChaosVDAABBTreeNodeDataWrapper, ChildrenNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildrenNodes_MetaData), NewProp_ChildrenNodes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeNodeDataWrapper, ParentNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNode_MetaData), NewProp_ParentNode_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bLeaf_SetBit(void* Obj)
{
	((FChaosVDAABBTreeNodeDataWrapper*)Obj)->bLeaf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bLeaf = { "bLeaf", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDAABBTreeNodeDataWrapper), &Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bLeaf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeaf_MetaData), NewProp_bLeaf_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bDirtyNode_SetBit(void* Obj)
{
	((FChaosVDAABBTreeNodeDataWrapper*)Obj)->bDirtyNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bDirtyNode = { "bDirtyNode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDAABBTreeNodeDataWrapper), &Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bDirtyNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDirtyNode_MetaData), NewProp_bDirtyNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_ChildrenBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_ChildrenNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_ParentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bLeaf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bDirtyNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDAABBTreeNodeDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDAABBTreeNodeDataWrapper),
	alignof(FChaosVDAABBTreeNodeDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeNodeDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeNodeDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeNodeDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDAABBTreeNodeDataWrapper

// Begin ScriptStruct FChaosVDAABBTreePayloadBoundsElement
static_assert(std::is_polymorphic<FChaosVDAABBTreePayloadBoundsElement>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDAABBTreePayloadBoundsElement cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDAABBTreePayloadBoundsElement;
class UScriptStruct* FChaosVDAABBTreePayloadBoundsElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAABBTreePayloadBoundsElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDAABBTreePayloadBoundsElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDAABBTreePayloadBoundsElement"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAABBTreePayloadBoundsElement.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDAABBTreePayloadBoundsElement>()
{
	return FChaosVDAABBTreePayloadBoundsElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[] = {
		{ "Category", "Leaf" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Leaf" },
		{ "Comment", "/** Bounds used to add this element into the AABBTree */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
		{ "ToolTip", "Bounds used to add this element into the AABBTree" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDAABBTreePayloadBoundsElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreePayloadBoundsElement, ParticleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndex_MetaData), NewProp_ParticleIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreePayloadBoundsElement, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDAABBTreePayloadBoundsElement",
	Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::PropPointers),
	sizeof(FChaosVDAABBTreePayloadBoundsElement),
	alignof(FChaosVDAABBTreePayloadBoundsElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAABBTreePayloadBoundsElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDAABBTreePayloadBoundsElement.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAABBTreePayloadBoundsElement.InnerSingleton;
}
// End ScriptStruct FChaosVDAABBTreePayloadBoundsElement

// Begin ScriptStruct FChaosVDAABBTreeLeafDataWrapper
static_assert(std::is_polymorphic<FChaosVDAABBTreeLeafDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDAABBTreeLeafDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeLeafDataWrapper;
class UScriptStruct* FChaosVDAABBTreeLeafDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeLeafDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeLeafDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDAABBTreeLeafDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeLeafDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDAABBTreeLeafDataWrapper>()
{
	return FChaosVDAABBTreeLeafDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "AABB Tree Leaf" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[] = {
		{ "Category", "Leaf" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Leaf" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Elements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDAABBTreeLeafDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement, METADATA_PARAMS(0, nullptr) }; // 1473843698
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeLeafDataWrapper, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elements_MetaData), NewProp_Elements_MetaData) }; // 1473843698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeLeafDataWrapper, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::NewProp_Elements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::NewProp_Elements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDAABBTreeLeafDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDAABBTreeLeafDataWrapper),
	alignof(FChaosVDAABBTreeLeafDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeLeafDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeLeafDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeLeafDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDAABBTreeLeafDataWrapper

// Begin ScriptStruct FChaosVDAABBTreeDataWrapper
static_assert(std::is_polymorphic<FChaosVDAABBTreeDataWrapper>() == std::is_polymorphic<FChaosVDAccelerationStructureBase>(), "USTRUCT FChaosVDAABBTreeDataWrapper cannot be polymorphic unless super FChaosVDAccelerationStructureBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeDataWrapper;
class UScriptStruct* FChaosVDAABBTreeDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDAABBTreeDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDAABBTreeDataWrapper>()
{
	return FChaosVDAABBTreeDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "AABB Tree Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNodeIndex_MetaData[] = {
		{ "Category", "Tree Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeDepth_MetaData[] = {
		{ "Category", "Tree Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodesNum_MetaData[] = {
		{ "Category", "Tree Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeavesNum_MetaData[] = {
		{ "Category", "Tree Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicTree_MetaData[] = {
		{ "Category", "Tree Settings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxChildrenInLeaf_MetaData[] = {
		{ "Category", "Tree Settings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTreeDepth_MetaData[] = {
		{ "Category", "Tree Settings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPayloadBounds_MetaData[] = {
		{ "Category", "Tree Settings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDAccelerationStructureDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RootNodeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TreeDepth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodesNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeavesNum;
	static void NewProp_bDynamicTree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicTree;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChildrenInLeaf;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTreeDepth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxPayloadBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDAABBTreeDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_RootNodeIndex = { "RootNodeIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeDataWrapper, RootNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNodeIndex_MetaData), NewProp_RootNodeIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_TreeDepth = { "TreeDepth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeDataWrapper, TreeDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeDepth_MetaData), NewProp_TreeDepth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_NodesNum = { "NodesNum", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeDataWrapper, NodesNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodesNum_MetaData), NewProp_NodesNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_LeavesNum = { "LeavesNum", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeDataWrapper, LeavesNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeavesNum_MetaData), NewProp_LeavesNum_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_bDynamicTree_SetBit(void* Obj)
{
	((FChaosVDAABBTreeDataWrapper*)Obj)->bDynamicTree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_bDynamicTree = { "bDynamicTree", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDAABBTreeDataWrapper), &Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_bDynamicTree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicTree_MetaData), NewProp_bDynamicTree_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_MaxChildrenInLeaf = { "MaxChildrenInLeaf", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeDataWrapper, MaxChildrenInLeaf), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxChildrenInLeaf_MetaData), NewProp_MaxChildrenInLeaf_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_MaxTreeDepth = { "MaxTreeDepth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeDataWrapper, MaxTreeDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTreeDepth_MetaData), NewProp_MaxTreeDepth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_MaxPayloadBounds = { "MaxPayloadBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDAABBTreeDataWrapper, MaxPayloadBounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPayloadBounds_MetaData), NewProp_MaxPayloadBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_RootNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_TreeDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_NodesNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_LeavesNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_bDynamicTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_MaxChildrenInLeaf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_MaxTreeDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_MaxPayloadBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase,
	&NewStructOps,
	"ChaosVDAABBTreeDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDAABBTreeDataWrapper),
	alignof(FChaosVDAABBTreeDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDAABBTreeDataWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosVDAABBTreeNodeFlags_StaticEnum, TEXT("EChaosVDAABBTreeNodeFlags"), &Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1451155535U) },
		{ EChaosVDAccelerationStructureType_StaticEnum, TEXT("EChaosVDAccelerationStructureType"), &Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 764026262U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosVDAccelerationStructureBase::StaticStruct, Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::NewStructOps, TEXT("ChaosVDAccelerationStructureBase"), &Z_Registration_Info_UScriptStruct_ChaosVDAccelerationStructureBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDAccelerationStructureBase), 2667723509U) },
		{ FChaosVDBVCellElementDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::NewStructOps, TEXT("ChaosVDBVCellElementDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDBVCellElementDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDBVCellElementDataWrapper), 1890710401U) },
		{ FChaosVDBoundingVolumeDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::NewStructOps, TEXT("ChaosVDBoundingVolumeDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDBoundingVolumeDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDBoundingVolumeDataWrapper), 1354361477U) },
		{ FChaosVDAABBTreeNodeDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewStructOps, TEXT("ChaosVDAABBTreeNodeDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeNodeDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDAABBTreeNodeDataWrapper), 743852063U) },
		{ FChaosVDAABBTreePayloadBoundsElement::StaticStruct, Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::NewStructOps, TEXT("ChaosVDAABBTreePayloadBoundsElement"), &Z_Registration_Info_UScriptStruct_ChaosVDAABBTreePayloadBoundsElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDAABBTreePayloadBoundsElement), 1473843698U) },
		{ FChaosVDAABBTreeLeafDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::NewStructOps, TEXT("ChaosVDAABBTreeLeafDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeLeafDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDAABBTreeLeafDataWrapper), 1037501030U) },
		{ FChaosVDAABBTreeDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewStructOps, TEXT("ChaosVDAABBTreeDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDAABBTreeDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDAABBTreeDataWrapper), 494026702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_350701501(TEXT("/Script/ChaosVDRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
