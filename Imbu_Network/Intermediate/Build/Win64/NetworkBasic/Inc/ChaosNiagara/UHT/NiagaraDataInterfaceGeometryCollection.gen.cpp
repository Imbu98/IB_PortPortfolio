// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosNiagara/Public/NiagaraDataInterfaceGeometryCollection.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGeometryCollection() {}

// Begin Cross Module References
CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection();
CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_NoRegister();
CHAOSNIAGARA_API UEnum* Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_ChaosNiagara();
// End Cross Module References

// Begin Enum ENDIGeometryCollection_SourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIGeometryCollection_SourceMode;
static UEnum* ENDIGeometryCollection_SourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDIGeometryCollection_SourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDIGeometryCollection_SourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode, (UObject*)Z_Construct_UPackage__Script_ChaosNiagara(), TEXT("ENDIGeometryCollection_SourceMode"));
	}
	return Z_Registration_Info_UEnum_ENDIGeometryCollection_SourceMode.OuterSingleton;
}
template<> CHAOSNIAGARA_API UEnum* StaticEnum<ENDIGeometryCollection_SourceMode>()
{
	return ENDIGeometryCollection_SourceMode_StaticEnum();
}
struct Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachParent.Comment", "/**\x09Only use the parent actor or component the system is attached to. */" },
		{ "AttachParent.Name", "ENDIGeometryCollection_SourceMode::AttachParent" },
		{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
		{ "Default.Comment", "/**\n\x09""Default behavior follows the order of.\n\x09- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Geometry Collection Component).\n\x09- Use Parameter Binding if valid\n\x09- Find Geometry Collection Component, Attached Actor, Attached Component\n\x09- Falls back to 'Default Geometry Collection' specified on the data interface\n\x09*/" },
		{ "Default.Name", "ENDIGeometryCollection_SourceMode::Default" },
		{ "Default.ToolTip", "Default behavior follows the order of.\n- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Geometry Collection Component).\n- Use Parameter Binding if valid\n- Find Geometry Collection Component, Attached Actor, Attached Component\n- Falls back to 'Default Geometry Collection' specified on the data interface" },
		{ "DefaultCollectionOnly.Comment", "/** Only use the \"Default Geometry Collection\" specified. */" },
		{ "DefaultCollectionOnly.Name", "ENDIGeometryCollection_SourceMode::DefaultCollectionOnly" },
		{ "DefaultCollectionOnly.ToolTip", "Only use the \"Default Geometry Collection\" specified." },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ParameterBinding.Comment", "/** Only use the parameter binding. */" },
		{ "ParameterBinding.Name", "ENDIGeometryCollection_SourceMode::ParameterBinding" },
		{ "ParameterBinding.ToolTip", "Only use the parameter binding." },
		{ "Source.Comment", "/**\x09Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Geometry Collection Component). */" },
		{ "Source.Name", "ENDIGeometryCollection_SourceMode::Source" },
		{ "Source.ToolTip", "Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Geometry Collection Component)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDIGeometryCollection_SourceMode::Default", (int64)ENDIGeometryCollection_SourceMode::Default },
		{ "ENDIGeometryCollection_SourceMode::Source", (int64)ENDIGeometryCollection_SourceMode::Source },
		{ "ENDIGeometryCollection_SourceMode::AttachParent", (int64)ENDIGeometryCollection_SourceMode::AttachParent },
		{ "ENDIGeometryCollection_SourceMode::DefaultCollectionOnly", (int64)ENDIGeometryCollection_SourceMode::DefaultCollectionOnly },
		{ "ENDIGeometryCollection_SourceMode::ParameterBinding", (int64)ENDIGeometryCollection_SourceMode::ParameterBinding },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosNiagara,
	nullptr,
	"ENDIGeometryCollection_SourceMode",
	"ENDIGeometryCollection_SourceMode",
	Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode()
{
	if (!Z_Registration_Info_UEnum_ENDIGeometryCollection_SourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIGeometryCollection_SourceMode.InnerSingleton, Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDIGeometryCollection_SourceMode.InnerSingleton;
}
// End Enum ENDIGeometryCollection_SourceMode

// Begin Class UNiagaraDataInterfaceGeometryCollection
void UNiagaraDataInterfaceGeometryCollection::StaticRegisterNativesUNiagaraDataInterfaceGeometryCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGeometryCollection);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_NoRegister()
{
	return UNiagaraDataInterfaceGeometryCollection::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Data Interface for the Collisions */" },
		{ "DisplayName", "Geometry Collection" },
		{ "IncludePath", "NiagaraDataInterfaceGeometryCollection.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "Data Interface for the Collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "Geometry Collection" },
		{ "Comment", "/** Controls how to retrieve the Skeletal Mesh Component to attach to. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "Controls how to retrieve the Skeletal Mesh Component to attach to." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCollection_MetaData[] = {
		{ "Category", "Geometry Collection" },
		{ "Comment", "/** Geometry collection used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "Geometry collection used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGeometryCollection_MetaData[] = {
		{ "Category", "Geometry Collection" },
		{ "Comment", "/** GeometryCollection used to sample from when not overridden by a source actor from the scene. This reference is NOT removed from cooked builds. */" },
		{ "EditCondition", "SourceMode == ENDIGeometryCollection_SourceMode::Default || SourceMode == ENDIGeometryCollection_SourceMode::DefaultCollectionOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "GeometryCollection used to sample from when not overridden by a source actor from the scene. This reference is NOT removed from cooked builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionActor_MetaData[] = {
		{ "Category", "Geometry Collection" },
		{ "Comment", "/** The source actor from which to sample. Takes precedence over the direct geometry collection. Note that this can only be set when used as a user variable on a niagara component in the world.*/" },
		{ "DisplayName", "Source Actor" },
		{ "EditCondition", "SourceMode == ENDIGeometryCollection_SourceMode::Default || SourceMode == ENDIGeometryCollection_SourceMode::Source" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "The source actor from which to sample. Takes precedence over the direct geometry collection. Note that this can only be set when used as a user variable on a niagara component in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/** The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionUserParameter_MetaData[] = {
		{ "Category", "Geometry Collection" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "EditCondition", "SourceMode == ENDIGeometryCollection_SourceMode::Default || SourceMode == ENDIGeometryCollection_SourceMode::ParameterBinding" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeIntermediateBones_MetaData[] = {
		{ "Category", "Geometry Collection" },
		{ "Comment", "// If true then this data interface will also read and write intermediate bones or geometry, otherwise only leaf nodes are considered\n" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "If true then this data interface will also read and write intermediate bones or geometry, otherwise only leaf nodes are considered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewCollection;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultGeometryCollection;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GeometryCollectionActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCollectionUserParameter;
	static void NewProp_bIncludeIntermediateBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeIntermediateBones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGeometryCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGeometryCollection, SourceMode), Z_Construct_UEnum_ChaosNiagara_ENDIGeometryCollection_SourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 898103680
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_PreviewCollection = { "PreviewCollection", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGeometryCollection, PreviewCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewCollection_MetaData), NewProp_PreviewCollection_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_DefaultGeometryCollection = { "DefaultGeometryCollection", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGeometryCollection, DefaultGeometryCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGeometryCollection_MetaData), NewProp_DefaultGeometryCollection_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionActor = { "GeometryCollectionActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGeometryCollection, GeometryCollectionActor), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionActor_MetaData), NewProp_GeometryCollectionActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGeometryCollection, SourceComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponent_MetaData), NewProp_SourceComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionUserParameter = { "GeometryCollectionUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGeometryCollection, GeometryCollectionUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionUserParameter_MetaData), NewProp_GeometryCollectionUserParameter_MetaData) }; // 174428838
void Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_bIncludeIntermediateBones_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceGeometryCollection*)Obj)->bIncludeIntermediateBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_bIncludeIntermediateBones = { "bIncludeIntermediateBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceGeometryCollection), &Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_bIncludeIntermediateBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeIntermediateBones_MetaData), NewProp_bIncludeIntermediateBones_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_SourceMode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_PreviewCollection,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_DefaultGeometryCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_SourceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionUserParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_bIncludeIntermediateBones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosNiagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::ClassParams = {
	&UNiagaraDataInterfaceGeometryCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.OuterSingleton;
}
template<> CHAOSNIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGeometryCollection>()
{
	return UNiagaraDataInterfaceGeometryCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGeometryCollection);
UNiagaraDataInterfaceGeometryCollection::~UNiagaraDataInterfaceGeometryCollection() {}
// End Class UNiagaraDataInterfaceGeometryCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDIGeometryCollection_SourceMode_StaticEnum, TEXT("ENDIGeometryCollection_SourceMode"), &Z_Registration_Info_UEnum_ENDIGeometryCollection_SourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 898103680U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection, UNiagaraDataInterfaceGeometryCollection::StaticClass, TEXT("UNiagaraDataInterfaceGeometryCollection"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGeometryCollection), 3330049176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_2432588389(TEXT("/Script/ChaosNiagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
