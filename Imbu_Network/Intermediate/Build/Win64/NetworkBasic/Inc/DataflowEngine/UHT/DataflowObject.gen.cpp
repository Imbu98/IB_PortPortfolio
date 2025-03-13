// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Engine/Public/Dataflow/DataflowObject.h"
#include "Runtime/Experimental/Dataflow/Engine/Public/Dataflow/DataflowPreview.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
DATAFLOWENGINE_API UEnum* Z_Construct_UEnum_DataflowEngine_EDataflowType();
DATAFLOWENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowPreviewCacheParams();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References

// Begin Enum EDataflowType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowType;
static UEnum* EDataflowType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataflowType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataflowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataflowEngine_EDataflowType, (UObject*)Z_Construct_UPackage__Script_DataflowEngine(), TEXT("EDataflowType"));
	}
	return Z_Registration_Info_UEnum_EDataflowType.OuterSingleton;
}
template<> DATAFLOWENGINE_API UEnum* StaticEnum<EDataflowType>()
{
	return EDataflowType_StaticEnum();
}
struct Z_Construct_UEnum_DataflowEngine_EDataflowType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Data flow types */" },
		{ "Construction.Comment", "/** the dataflow will be used to build assets */" },
		{ "Construction.Name", "EDataflowType::Construction" },
		{ "Construction.ToolTip", "the dataflow will be used to build assets" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
		{ "Simulation.Comment", "/** The dataflow will be used to define the simulation evolution */" },
		{ "Simulation.Name", "EDataflowType::Simulation" },
		{ "Simulation.ToolTip", "The dataflow will be used to define the simulation evolution" },
		{ "ToolTip", "Data flow types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataflowType::Construction", (int64)EDataflowType::Construction },
		{ "EDataflowType::Simulation", (int64)EDataflowType::Simulation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataflowEngine_EDataflowType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DataflowEngine,
	nullptr,
	"EDataflowType",
	"EDataflowType",
	Z_Construct_UEnum_DataflowEngine_EDataflowType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DataflowEngine_EDataflowType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DataflowEngine_EDataflowType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DataflowEngine_EDataflowType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DataflowEngine_EDataflowType()
{
	if (!Z_Registration_Info_UEnum_EDataflowType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowType.InnerSingleton, Z_Construct_UEnum_DataflowEngine_EDataflowType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataflowType.InnerSingleton;
}
// End Enum EDataflowType

// Begin Class UDataflow
void UDataflow::StaticRegisterNativesUDataflow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflow);
UClass* Z_Construct_UClass_UDataflow_NoRegister()
{
	return UDataflow::StaticClass();
}
struct Z_Construct_UClass_UDataflow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* UDataflow (UObject)\n*\n* UObject wrapper for the UE::Dataflow::FGraph\n*\n*/" },
		{ "IncludePath", "Dataflow/DataflowObject.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UDataflow (UObject)\n\nUObject wrapper for the UE::Dataflow::FGraph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Render" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCacheParams_MetaData[] = {
		{ "Comment", "/** Cachie params used in this asset */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
		{ "ToolTip", "Cachie params used in this asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCacheAsset_MetaData[] = {
		{ "Comment", "/** Cache asset used in this asset */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
		{ "ToolTip", "Cache asset used in this asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBlueprintClass_MetaData[] = {
		{ "Comment", "/** Caching blueprint actor class to spawn */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
		{ "ToolTip", "Caching blueprint actor class to spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBlueprintTransform_MetaData[] = {
		{ "Comment", "/** Caching blueprint actor transform to spawn */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
		{ "ToolTip", "Caching blueprint actor transform to spawn" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewCacheParams;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewCacheAsset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreviewBlueprintClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewBlueprintTransform;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDataflow_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((UDataflow*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataflow), &Z_Construct_UClass_UDataflow_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0114040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflow, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflow, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflow, Type), Z_Construct_UEnum_DataflowEngine_EDataflowType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1047900178
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_PreviewCacheParams = { "PreviewCacheParams", nullptr, (EPropertyFlags)0x0010010800200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflow, PreviewCacheParams), Z_Construct_UScriptStruct_FDataflowPreviewCacheParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewCacheParams_MetaData), NewProp_PreviewCacheParams_MetaData) }; // 1085714360
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_PreviewCacheAsset = { "PreviewCacheAsset", nullptr, (EPropertyFlags)0x0014010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflow, PreviewCacheAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewCacheAsset_MetaData), NewProp_PreviewCacheAsset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_PreviewBlueprintClass = { "PreviewBlueprintClass", nullptr, (EPropertyFlags)0x0014010800200000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflow, PreviewBlueprintClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBlueprintClass_MetaData), NewProp_PreviewBlueprintClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_PreviewBlueprintTransform = { "PreviewBlueprintTransform", nullptr, (EPropertyFlags)0x0010010800200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflow, PreviewBlueprintTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBlueprintTransform_MetaData), NewProp_PreviewBlueprintTransform_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_Targets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_Type,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_PreviewCacheParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_PreviewCacheAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_PreviewBlueprintClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_PreviewBlueprintTransform,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataflow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflow_Statics::ClassParams = {
	&UDataflow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataflow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataflow_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflow_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflow()
{
	if (!Z_Registration_Info_UClass_UDataflow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflow.OuterSingleton, Z_Construct_UClass_UDataflow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflow.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflow>()
{
	return UDataflow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflow);
UDataflow::~UDataflow() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflow)
// End Class UDataflow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataflowType_StaticEnum, TEXT("EDataflowType"), &Z_Registration_Info_UEnum_EDataflowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1047900178U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflow, UDataflow::StaticClass, TEXT("UDataflow"), &Z_Registration_Info_UClass_UDataflow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflow), 330102004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_2599254532(TEXT("/Script/DataflowEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
