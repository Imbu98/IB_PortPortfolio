// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistribution() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDistribution();
ENGINE_API UClass* Z_Construct_UClass_UDistribution_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_DistributionParamMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum DistributionParamMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_DistributionParamMode;
static UEnum* DistributionParamMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_DistributionParamMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_DistributionParamMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_DistributionParamMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DistributionParamMode"));
	}
	return Z_Registration_Info_UEnum_DistributionParamMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<DistributionParamMode>()
{
	return DistributionParamMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_DistributionParamMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DPM_Abs.Name", "DPM_Abs" },
		{ "DPM_Direct.Name", "DPM_Direct" },
		{ "DPM_MAX.Name", "DPM_MAX" },
		{ "DPM_Normal.Name", "DPM_Normal" },
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DPM_Normal", (int64)DPM_Normal },
		{ "DPM_Abs", (int64)DPM_Abs },
		{ "DPM_Direct", (int64)DPM_Direct },
		{ "DPM_MAX", (int64)DPM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_DistributionParamMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"DistributionParamMode",
	"DistributionParamMode",
	Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_DistributionParamMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_DistributionParamMode()
{
	if (!Z_Registration_Info_UEnum_DistributionParamMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DistributionParamMode.InnerSingleton, Z_Construct_UEnum_Engine_DistributionParamMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_DistributionParamMode.InnerSingleton;
}
// End Enum DistributionParamMode

// Begin ScriptStruct FDistributionLookupTable
struct Z_Construct_UScriptStruct_FDistributionLookupTable_Statics
{
	struct FDistributionLookupTable
	{
		float TimeScale;
		float TimeBias;
		TArray<float> Values;
		uint8 Op;
		uint8 EntryCount;
		uint8 EntryStride;
		uint8 SubEntryStride;
		uint8 LockFlag;
	};

	static_assert(sizeof(FDistributionLookupTable) < MAX_uint16);
	static_assert(alignof(FDistributionLookupTable) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Lookup table for distributions. */" },
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
		{ "ToolTip", "Lookup table for distributions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryStride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubEntryStride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockFlag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Op;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EntryCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EntryStride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubEntryStride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionLookupTable, TimeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScale_MetaData), NewProp_TimeScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias = { "TimeBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionLookupTable, TimeBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeBias_MetaData), NewProp_TimeBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionLookupTable, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionLookupTable, Op), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Op_MetaData), NewProp_Op_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionLookupTable, EntryCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryCount_MetaData), NewProp_EntryCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride = { "EntryStride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionLookupTable, EntryStride), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryStride_MetaData), NewProp_EntryStride_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride = { "SubEntryStride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionLookupTable, SubEntryStride), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubEntryStride_MetaData), NewProp_SubEntryStride_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag = { "LockFlag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionLookupTable, LockFlag), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockFlag_MetaData), NewProp_LockFlag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	nullptr,
	"DistributionLookupTable",
	Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers),
	sizeof(FDistributionLookupTable),
	alignof(FDistributionLookupTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FDistributionLookupTable

// Begin ScriptStruct FRawDistribution
struct Z_Construct_UScriptStruct_FRawDistribution_Statics
{
	struct FDistributionLookupTable
	{
		float TimeScale;
		float TimeBias;
		TArray<float> Values;
		uint8 Op;
		uint8 EntryCount;
		uint8 EntryStride;
		uint8 SubEntryStride;
		uint8 LockFlag;
	};

	static_assert(sizeof(FDistributionLookupTable) < MAX_uint16);
	static_assert(alignof(FDistributionLookupTable) < MAX_uint8);
	struct FRawDistribution
	{
		FDistributionLookupTable Table;
	};

	static_assert(sizeof(FRawDistribution) < MAX_uint16);
	static_assert(alignof(FRawDistribution) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Base class for raw (baked out) Distribution type\n" },
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
		{ "ToolTip", "Base class for raw (baked out) Distribution type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Table;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Table_MetaData), NewProp_Table_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawDistribution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	nullptr,
	"RawDistribution",
	Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers),
	sizeof(FRawDistribution),
	alignof(FRawDistribution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistribution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRawDistribution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawDistribution_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FRawDistribution

// Begin Class UDistribution
void UDistribution::StaticRegisterNativesUDistribution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistribution);
UClass* Z_Construct_UClass_UDistribution_NoRegister()
{
	return UDistribution::StaticClass();
}
struct Z_Construct_UClass_UDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Distributions/Distribution.h" },
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistribution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDistribution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistribution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistribution_Statics::ClassParams = {
	&UDistribution::StaticClass,
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
	0x002830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistribution_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistribution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistribution()
{
	if (!Z_Registration_Info_UClass_UDistribution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistribution.OuterSingleton, Z_Construct_UClass_UDistribution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistribution.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistribution>()
{
	return UDistribution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistribution);
UDistribution::~UDistribution() {}
// End Class UDistribution

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ DistributionParamMode_StaticEnum, TEXT("DistributionParamMode"), &Z_Registration_Info_UEnum_DistributionParamMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1310560534U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistribution, UDistribution::StaticClass, TEXT("UDistribution"), &Z_Registration_Info_UClass_UDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistribution), 137031831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_4076527159(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
