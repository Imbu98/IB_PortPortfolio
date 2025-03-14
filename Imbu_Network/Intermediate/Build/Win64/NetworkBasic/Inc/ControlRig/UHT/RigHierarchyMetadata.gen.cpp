// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigHierarchyMetadata.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyMetadata() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigMetadataType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBaseMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBoolArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBoolMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigFloatArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigFloatMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInt32ArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInt32Metadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigLinearColorMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigNameArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigNameMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigQuatArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigQuatMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigRotatorArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigRotatorMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigTransformArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigTransformMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigVectorArrayMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigVectorMetadata();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigBaseMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigBaseMetadata;
class UScriptStruct* FRigBaseMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigBaseMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigBaseMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigBaseMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigBaseMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigBaseMetadata>()
{
	return FRigBaseMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigBaseMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigBaseMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBaseMetadata, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBaseMetadata, Type), Z_Construct_UEnum_ControlRig_ERigMetadataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1546994617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigBaseMetadata",
	Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::PropPointers),
	sizeof(FRigBaseMetadata),
	alignof(FRigBaseMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigBaseMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigBaseMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigBaseMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigBaseMetadata.InnerSingleton;
}
// End ScriptStruct FRigBaseMetadata

// Begin ScriptStruct FRigBoolMetadata
static_assert(std::is_polymorphic<FRigBoolMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigBoolMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigBoolMetadata;
class UScriptStruct* FRigBoolMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigBoolMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigBoolMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigBoolMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigBoolMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigBoolMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigBoolMetadata>()
{
	return FRigBoolMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigBoolMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigBoolMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FRigBoolMetadata*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigBoolMetadata), &Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigBoolMetadata",
	Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::PropPointers),
	sizeof(FRigBoolMetadata),
	alignof(FRigBoolMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigBoolMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigBoolMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigBoolMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigBoolMetadata.InnerSingleton;
}
// End ScriptStruct FRigBoolMetadata

// Begin ScriptStruct FRigBoolArrayMetadata
static_assert(std::is_polymorphic<FRigBoolArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigBoolArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigBoolArrayMetadata;
class UScriptStruct* FRigBoolArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigBoolArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigBoolArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigBoolArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigBoolArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigBoolArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigBoolArrayMetadata>()
{
	return FRigBoolArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigBoolArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBoolArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigBoolArrayMetadata",
	Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::PropPointers),
	sizeof(FRigBoolArrayMetadata),
	alignof(FRigBoolArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigBoolArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigBoolArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigBoolArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigBoolArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigBoolArrayMetadata

// Begin ScriptStruct FRigFloatMetadata
static_assert(std::is_polymorphic<FRigFloatMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigFloatMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigFloatMetadata;
class UScriptStruct* FRigFloatMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigFloatMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigFloatMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigFloatMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigFloatMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigFloatMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigFloatMetadata>()
{
	return FRigFloatMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigFloatMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigFloatMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigFloatMetadata, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigFloatMetadata",
	Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::PropPointers),
	sizeof(FRigFloatMetadata),
	alignof(FRigFloatMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigFloatMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigFloatMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigFloatMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigFloatMetadata.InnerSingleton;
}
// End ScriptStruct FRigFloatMetadata

// Begin ScriptStruct FRigFloatArrayMetadata
static_assert(std::is_polymorphic<FRigFloatArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigFloatArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigFloatArrayMetadata;
class UScriptStruct* FRigFloatArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigFloatArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigFloatArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigFloatArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigFloatArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigFloatArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigFloatArrayMetadata>()
{
	return FRigFloatArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigFloatArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigFloatArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigFloatArrayMetadata",
	Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::PropPointers),
	sizeof(FRigFloatArrayMetadata),
	alignof(FRigFloatArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigFloatArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigFloatArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigFloatArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigFloatArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigFloatArrayMetadata

// Begin ScriptStruct FRigInt32Metadata
static_assert(std::is_polymorphic<FRigInt32Metadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigInt32Metadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInt32Metadata;
class UScriptStruct* FRigInt32Metadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInt32Metadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInt32Metadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInt32Metadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInt32Metadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigInt32Metadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInt32Metadata>()
{
	return FRigInt32Metadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigInt32Metadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInt32Metadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInt32Metadata, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigInt32Metadata",
	Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::PropPointers),
	sizeof(FRigInt32Metadata),
	alignof(FRigInt32Metadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigInt32Metadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigInt32Metadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInt32Metadata.InnerSingleton, Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigInt32Metadata.InnerSingleton;
}
// End ScriptStruct FRigInt32Metadata

// Begin ScriptStruct FRigInt32ArrayMetadata
static_assert(std::is_polymorphic<FRigInt32ArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigInt32ArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInt32ArrayMetadata;
class UScriptStruct* FRigInt32ArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInt32ArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInt32ArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInt32ArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInt32ArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigInt32ArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInt32ArrayMetadata>()
{
	return FRigInt32ArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInt32ArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigInt32ArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigInt32ArrayMetadata",
	Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::PropPointers),
	sizeof(FRigInt32ArrayMetadata),
	alignof(FRigInt32ArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigInt32ArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigInt32ArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInt32ArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigInt32ArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigInt32ArrayMetadata

// Begin ScriptStruct FRigNameMetadata
static_assert(std::is_polymorphic<FRigNameMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigNameMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigNameMetadata;
class UScriptStruct* FRigNameMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigNameMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigNameMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigNameMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigNameMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigNameMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigNameMetadata>()
{
	return FRigNameMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigNameMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigNameMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigNameMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigNameMetadata, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigNameMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigNameMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigNameMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigNameMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigNameMetadata",
	Z_Construct_UScriptStruct_FRigNameMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigNameMetadata_Statics::PropPointers),
	sizeof(FRigNameMetadata),
	alignof(FRigNameMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigNameMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigNameMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigNameMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigNameMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigNameMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigNameMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigNameMetadata.InnerSingleton;
}
// End ScriptStruct FRigNameMetadata

// Begin ScriptStruct FRigNameArrayMetadata
static_assert(std::is_polymorphic<FRigNameArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigNameArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigNameArrayMetadata;
class UScriptStruct* FRigNameArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigNameArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigNameArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigNameArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigNameArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigNameArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigNameArrayMetadata>()
{
	return FRigNameArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigNameArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigNameArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigNameArrayMetadata",
	Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::PropPointers),
	sizeof(FRigNameArrayMetadata),
	alignof(FRigNameArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigNameArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigNameArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigNameArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigNameArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigNameArrayMetadata

// Begin ScriptStruct FRigVectorMetadata
static_assert(std::is_polymorphic<FRigVectorMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigVectorMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVectorMetadata;
class UScriptStruct* FRigVectorMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVectorMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVectorMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVectorMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigVectorMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigVectorMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigVectorMetadata>()
{
	return FRigVectorMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVectorMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVectorMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVectorMetadata, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigVectorMetadata",
	Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::PropPointers),
	sizeof(FRigVectorMetadata),
	alignof(FRigVectorMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVectorMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigVectorMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVectorMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVectorMetadata.InnerSingleton;
}
// End ScriptStruct FRigVectorMetadata

// Begin ScriptStruct FRigVectorArrayMetadata
static_assert(std::is_polymorphic<FRigVectorArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigVectorArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVectorArrayMetadata;
class UScriptStruct* FRigVectorArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVectorArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVectorArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVectorArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigVectorArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigVectorArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigVectorArrayMetadata>()
{
	return FRigVectorArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVectorArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVectorArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigVectorArrayMetadata",
	Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::PropPointers),
	sizeof(FRigVectorArrayMetadata),
	alignof(FRigVectorArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVectorArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigVectorArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVectorArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVectorArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigVectorArrayMetadata

// Begin ScriptStruct FRigRotatorMetadata
static_assert(std::is_polymorphic<FRigRotatorMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigRotatorMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigRotatorMetadata;
class UScriptStruct* FRigRotatorMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigRotatorMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigRotatorMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigRotatorMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigRotatorMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigRotatorMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigRotatorMetadata>()
{
	return FRigRotatorMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigRotatorMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigRotatorMetadata, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigRotatorMetadata",
	Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::PropPointers),
	sizeof(FRigRotatorMetadata),
	alignof(FRigRotatorMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigRotatorMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigRotatorMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigRotatorMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigRotatorMetadata.InnerSingleton;
}
// End ScriptStruct FRigRotatorMetadata

// Begin ScriptStruct FRigRotatorArrayMetadata
static_assert(std::is_polymorphic<FRigRotatorArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigRotatorArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigRotatorArrayMetadata;
class UScriptStruct* FRigRotatorArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigRotatorArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigRotatorArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigRotatorArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigRotatorArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigRotatorArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigRotatorArrayMetadata>()
{
	return FRigRotatorArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigRotatorArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigRotatorArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigRotatorArrayMetadata",
	Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::PropPointers),
	sizeof(FRigRotatorArrayMetadata),
	alignof(FRigRotatorArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigRotatorArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigRotatorArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigRotatorArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigRotatorArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigRotatorArrayMetadata

// Begin ScriptStruct FRigQuatMetadata
static_assert(std::is_polymorphic<FRigQuatMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigQuatMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigQuatMetadata;
class UScriptStruct* FRigQuatMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigQuatMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigQuatMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigQuatMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigQuatMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigQuatMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigQuatMetadata>()
{
	return FRigQuatMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigQuatMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigQuatMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigQuatMetadata, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigQuatMetadata",
	Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::PropPointers),
	sizeof(FRigQuatMetadata),
	alignof(FRigQuatMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigQuatMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigQuatMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigQuatMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigQuatMetadata.InnerSingleton;
}
// End ScriptStruct FRigQuatMetadata

// Begin ScriptStruct FRigQuatArrayMetadata
static_assert(std::is_polymorphic<FRigQuatArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigQuatArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigQuatArrayMetadata;
class UScriptStruct* FRigQuatArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigQuatArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigQuatArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigQuatArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigQuatArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigQuatArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigQuatArrayMetadata>()
{
	return FRigQuatArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigQuatArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigQuatArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigQuatArrayMetadata",
	Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::PropPointers),
	sizeof(FRigQuatArrayMetadata),
	alignof(FRigQuatArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigQuatArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigQuatArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigQuatArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigQuatArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigQuatArrayMetadata

// Begin ScriptStruct FRigTransformMetadata
static_assert(std::is_polymorphic<FRigTransformMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigTransformMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigTransformMetadata;
class UScriptStruct* FRigTransformMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigTransformMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigTransformMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigTransformMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigTransformMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigTransformMetadata>()
{
	return FRigTransformMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigTransformMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTransformMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigTransformMetadata, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigTransformMetadata",
	Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::PropPointers),
	sizeof(FRigTransformMetadata),
	alignof(FRigTransformMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigTransformMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigTransformMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigTransformMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigTransformMetadata.InnerSingleton;
}
// End ScriptStruct FRigTransformMetadata

// Begin ScriptStruct FRigTransformArrayMetadata
static_assert(std::is_polymorphic<FRigTransformArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigTransformArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigTransformArrayMetadata;
class UScriptStruct* FRigTransformArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigTransformArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigTransformArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigTransformArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigTransformArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigTransformArrayMetadata>()
{
	return FRigTransformArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTransformArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigTransformArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigTransformArrayMetadata",
	Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::PropPointers),
	sizeof(FRigTransformArrayMetadata),
	alignof(FRigTransformArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigTransformArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigTransformArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigTransformArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigTransformArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigTransformArrayMetadata

// Begin ScriptStruct FRigLinearColorMetadata
static_assert(std::is_polymorphic<FRigLinearColorMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigLinearColorMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigLinearColorMetadata;
class UScriptStruct* FRigLinearColorMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigLinearColorMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigLinearColorMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigLinearColorMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigLinearColorMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigLinearColorMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigLinearColorMetadata>()
{
	return FRigLinearColorMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigLinearColorMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigLinearColorMetadata, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigLinearColorMetadata",
	Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::PropPointers),
	sizeof(FRigLinearColorMetadata),
	alignof(FRigLinearColorMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigLinearColorMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigLinearColorMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigLinearColorMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigLinearColorMetadata.InnerSingleton;
}
// End ScriptStruct FRigLinearColorMetadata

// Begin ScriptStruct FRigLinearColorArrayMetadata
static_assert(std::is_polymorphic<FRigLinearColorArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigLinearColorArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigLinearColorArrayMetadata;
class UScriptStruct* FRigLinearColorArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigLinearColorArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigLinearColorArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigLinearColorArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigLinearColorArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigLinearColorArrayMetadata>()
{
	return FRigLinearColorArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigLinearColorArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigLinearColorArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigLinearColorArrayMetadata",
	Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::PropPointers),
	sizeof(FRigLinearColorArrayMetadata),
	alignof(FRigLinearColorArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigLinearColorArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigLinearColorArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigLinearColorArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigLinearColorArrayMetadata

// Begin ScriptStruct FRigElementKeyMetadata
static_assert(std::is_polymorphic<FRigElementKeyMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigElementKeyMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementKeyMetadata;
class UScriptStruct* FRigElementKeyMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKeyMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementKeyMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKeyMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementKeyMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementKeyMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementKeyMetadata>()
{
	return FRigElementKeyMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementKeyMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementKeyMetadata, Value), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigElementKeyMetadata",
	Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::PropPointers),
	sizeof(FRigElementKeyMetadata),
	alignof(FRigElementKeyMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKeyMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementKeyMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigElementKeyMetadata.InnerSingleton;
}
// End ScriptStruct FRigElementKeyMetadata

// Begin ScriptStruct FRigElementKeyArrayMetadata
static_assert(std::is_polymorphic<FRigElementKeyArrayMetadata>() == std::is_polymorphic<FRigBaseMetadata>(), "USTRUCT FRigElementKeyArrayMetadata cannot be polymorphic unless super FRigBaseMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementKeyArrayMetadata;
class UScriptStruct* FRigElementKeyArrayMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKeyArrayMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementKeyArrayMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementKeyArrayMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementKeyArrayMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementKeyArrayMetadata>()
{
	return FRigElementKeyArrayMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementKeyArrayMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementKeyArrayMetadata, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseMetadata,
	&NewStructOps,
	"RigElementKeyArrayMetadata",
	Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::PropPointers),
	sizeof(FRigElementKeyArrayMetadata),
	alignof(FRigElementKeyArrayMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKeyArrayMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementKeyArrayMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigElementKeyArrayMetadata.InnerSingleton;
}
// End ScriptStruct FRigElementKeyArrayMetadata

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyMetadata_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigBaseMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigBaseMetadata_Statics::NewStructOps, TEXT("RigBaseMetadata"), &Z_Registration_Info_UScriptStruct_RigBaseMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigBaseMetadata), 4087616715U) },
		{ FRigBoolMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigBoolMetadata_Statics::NewStructOps, TEXT("RigBoolMetadata"), &Z_Registration_Info_UScriptStruct_RigBoolMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigBoolMetadata), 2467564594U) },
		{ FRigBoolArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigBoolArrayMetadata_Statics::NewStructOps, TEXT("RigBoolArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigBoolArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigBoolArrayMetadata), 2888387460U) },
		{ FRigFloatMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigFloatMetadata_Statics::NewStructOps, TEXT("RigFloatMetadata"), &Z_Registration_Info_UScriptStruct_RigFloatMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigFloatMetadata), 1895393414U) },
		{ FRigFloatArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigFloatArrayMetadata_Statics::NewStructOps, TEXT("RigFloatArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigFloatArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigFloatArrayMetadata), 597610482U) },
		{ FRigInt32Metadata::StaticStruct, Z_Construct_UScriptStruct_FRigInt32Metadata_Statics::NewStructOps, TEXT("RigInt32Metadata"), &Z_Registration_Info_UScriptStruct_RigInt32Metadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInt32Metadata), 2246351807U) },
		{ FRigInt32ArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigInt32ArrayMetadata_Statics::NewStructOps, TEXT("RigInt32ArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigInt32ArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInt32ArrayMetadata), 63076312U) },
		{ FRigNameMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigNameMetadata_Statics::NewStructOps, TEXT("RigNameMetadata"), &Z_Registration_Info_UScriptStruct_RigNameMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigNameMetadata), 3716917402U) },
		{ FRigNameArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigNameArrayMetadata_Statics::NewStructOps, TEXT("RigNameArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigNameArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigNameArrayMetadata), 1266072348U) },
		{ FRigVectorMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigVectorMetadata_Statics::NewStructOps, TEXT("RigVectorMetadata"), &Z_Registration_Info_UScriptStruct_RigVectorMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVectorMetadata), 1049254510U) },
		{ FRigVectorArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigVectorArrayMetadata_Statics::NewStructOps, TEXT("RigVectorArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigVectorArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVectorArrayMetadata), 3969825646U) },
		{ FRigRotatorMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigRotatorMetadata_Statics::NewStructOps, TEXT("RigRotatorMetadata"), &Z_Registration_Info_UScriptStruct_RigRotatorMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigRotatorMetadata), 193594220U) },
		{ FRigRotatorArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigRotatorArrayMetadata_Statics::NewStructOps, TEXT("RigRotatorArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigRotatorArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigRotatorArrayMetadata), 2948480645U) },
		{ FRigQuatMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigQuatMetadata_Statics::NewStructOps, TEXT("RigQuatMetadata"), &Z_Registration_Info_UScriptStruct_RigQuatMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigQuatMetadata), 1712701970U) },
		{ FRigQuatArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigQuatArrayMetadata_Statics::NewStructOps, TEXT("RigQuatArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigQuatArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigQuatArrayMetadata), 2003494737U) },
		{ FRigTransformMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigTransformMetadata_Statics::NewStructOps, TEXT("RigTransformMetadata"), &Z_Registration_Info_UScriptStruct_RigTransformMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigTransformMetadata), 1507049517U) },
		{ FRigTransformArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigTransformArrayMetadata_Statics::NewStructOps, TEXT("RigTransformArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigTransformArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigTransformArrayMetadata), 3427685231U) },
		{ FRigLinearColorMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigLinearColorMetadata_Statics::NewStructOps, TEXT("RigLinearColorMetadata"), &Z_Registration_Info_UScriptStruct_RigLinearColorMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigLinearColorMetadata), 2275956688U) },
		{ FRigLinearColorArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigLinearColorArrayMetadata_Statics::NewStructOps, TEXT("RigLinearColorArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigLinearColorArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigLinearColorArrayMetadata), 1864667588U) },
		{ FRigElementKeyMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigElementKeyMetadata_Statics::NewStructOps, TEXT("RigElementKeyMetadata"), &Z_Registration_Info_UScriptStruct_RigElementKeyMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementKeyMetadata), 2508680804U) },
		{ FRigElementKeyArrayMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigElementKeyArrayMetadata_Statics::NewStructOps, TEXT("RigElementKeyArrayMetadata"), &Z_Registration_Info_UScriptStruct_RigElementKeyArrayMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementKeyArrayMetadata), 1856765560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyMetadata_h_1956419843(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyMetadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyMetadata_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
