// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/RuntimeHashSet/RuntimePartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimePartition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_URuntimePartition();
ENGINE_API UClass* Z_Construct_UClass_URuntimePartition_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ERuntimePartitionCellBoundsMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod;
static UEnum* ERuntimePartitionCellBoundsMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimePartitionCellBoundsMethod"));
	}
	return Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERuntimePartitionCellBoundsMethod>()
{
	return ERuntimePartitionCellBoundsMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Chooses a method for how to compute streaming cells bounds */" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
		{ "ToolTip", "Chooses a method for how to compute streaming cells bounds" },
		{ "UseCellBounds.Name", "ERuntimePartitionCellBoundsMethod::UseCellBounds" },
		{ "UseContent.Name", "ERuntimePartitionCellBoundsMethod::UseContent" },
		{ "UseMinContentCellBounds.Name", "ERuntimePartitionCellBoundsMethod::UseMinContentCellBounds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERuntimePartitionCellBoundsMethod::UseContent", (int64)ERuntimePartitionCellBoundsMethod::UseContent },
		{ "ERuntimePartitionCellBoundsMethod::UseCellBounds", (int64)ERuntimePartitionCellBoundsMethod::UseCellBounds },
		{ "ERuntimePartitionCellBoundsMethod::UseMinContentCellBounds", (int64)ERuntimePartitionCellBoundsMethod::UseMinContentCellBounds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERuntimePartitionCellBoundsMethod",
	"ERuntimePartitionCellBoundsMethod",
	Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod()
{
	if (!Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.InnerSingleton, Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.InnerSingleton;
}
// End Enum ERuntimePartitionCellBoundsMethod

// Begin Class URuntimePartition
void URuntimePartition::StaticRegisterNativesURuntimePartition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimePartition);
UClass* Z_Construct_UClass_URuntimePartition_NoRegister()
{
	return URuntimePartition::StaticClass();
}
struct Z_Construct_UClass_URuntimePartition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/RuntimeHashSet/RuntimePartition.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockOnSlowStreaming_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "EditCondition", "HLODIndex == INDEX_NONE" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClientOnlyVisible_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "EditCondition", "HLODIndex == INDEX_NONE" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "EditCondition", "HLODIndex == INDEX_NONE" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMethod_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "EditCondition", "HLODIndex == INDEX_NONE" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingRange_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_bBlockOnSlowStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockOnSlowStreaming;
	static void NewProp_bClientOnlyVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOnlyVisible;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoadingRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HLODIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimePartition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimePartition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimePartition, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UClass_URuntimePartition_Statics::NewProp_bBlockOnSlowStreaming_SetBit(void* Obj)
{
	((URuntimePartition*)Obj)->bBlockOnSlowStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimePartition_Statics::NewProp_bBlockOnSlowStreaming = { "bBlockOnSlowStreaming", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimePartition), &Z_Construct_UClass_URuntimePartition_Statics::NewProp_bBlockOnSlowStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockOnSlowStreaming_MetaData), NewProp_bBlockOnSlowStreaming_MetaData) };
void Z_Construct_UClass_URuntimePartition_Statics::NewProp_bClientOnlyVisible_SetBit(void* Obj)
{
	((URuntimePartition*)Obj)->bClientOnlyVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimePartition_Statics::NewProp_bClientOnlyVisible = { "bClientOnlyVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimePartition), &Z_Construct_UClass_URuntimePartition_Statics::NewProp_bClientOnlyVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClientOnlyVisible_MetaData), NewProp_bClientOnlyVisible_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimePartition_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimePartition, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimePartition_Statics::NewProp_BoundsMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimePartition_Statics::NewProp_BoundsMethod = { "BoundsMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimePartition, BoundsMethod), Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMethod_MetaData), NewProp_BoundsMethod_MetaData) }; // 844433890
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimePartition_Statics::NewProp_LoadingRange = { "LoadingRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimePartition, LoadingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingRange_MetaData), NewProp_LoadingRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimePartition_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimePartition, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimePartition_Statics::NewProp_HLODIndex = { "HLODIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimePartition, HLODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODIndex_MetaData), NewProp_HLODIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimePartition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartition_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartition_Statics::NewProp_bBlockOnSlowStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartition_Statics::NewProp_bClientOnlyVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartition_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartition_Statics::NewProp_BoundsMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartition_Statics::NewProp_BoundsMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartition_Statics::NewProp_LoadingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartition_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartition_Statics::NewProp_HLODIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimePartition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimePartition_Statics::ClassParams = {
	&URuntimePartition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimePartition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartition_Statics::PropPointers),
	0,
	0x000020A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartition_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimePartition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimePartition()
{
	if (!Z_Registration_Info_UClass_URuntimePartition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimePartition.OuterSingleton, Z_Construct_UClass_URuntimePartition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimePartition.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URuntimePartition>()
{
	return URuntimePartition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimePartition);
URuntimePartition::~URuntimePartition() {}
// End Class URuntimePartition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERuntimePartitionCellBoundsMethod_StaticEnum, TEXT("ERuntimePartitionCellBoundsMethod"), &Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 844433890U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimePartition, URuntimePartition::StaticClass, TEXT("URuntimePartition"), &Z_Registration_Info_UClass_URuntimePartition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimePartition), 2748447674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_1480394111(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
