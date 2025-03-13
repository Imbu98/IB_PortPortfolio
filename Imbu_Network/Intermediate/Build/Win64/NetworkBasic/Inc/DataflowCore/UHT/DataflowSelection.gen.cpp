// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSelection() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowFaceSelection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowGeometrySelection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowMaterialSelection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSelection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowSelection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSelection;
class UScriptStruct* FDataflowSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowSelection>()
{
	return FDataflowSelection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	nullptr,
	&NewStructOps,
	"DataflowSelection",
	nullptr,
	0,
	sizeof(FDataflowSelection),
	alignof(FDataflowSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowSelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowSelection()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSelection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowSelection.InnerSingleton;
}
// End ScriptStruct FDataflowSelection

// Begin ScriptStruct FDataflowTransformSelection
static_assert(std::is_polymorphic<FDataflowTransformSelection>() == std::is_polymorphic<FDataflowSelection>(), "USTRUCT FDataflowTransformSelection cannot be polymorphic unless super FDataflowSelection is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowTransformSelection;
class UScriptStruct* FDataflowTransformSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowTransformSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowTransformSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTransformSelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowTransformSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowTransformSelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowTransformSelection>()
{
	return FDataflowTransformSelection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowTransformSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowSelection,
	&NewStructOps,
	"DataflowTransformSelection",
	nullptr,
	0,
	sizeof(FDataflowTransformSelection),
	alignof(FDataflowTransformSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowTransformSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowTransformSelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowTransformSelection.InnerSingleton;
}
// End ScriptStruct FDataflowTransformSelection

// Begin ScriptStruct FDataflowVertexSelection
static_assert(std::is_polymorphic<FDataflowVertexSelection>() == std::is_polymorphic<FDataflowSelection>(), "USTRUCT FDataflowVertexSelection cannot be polymorphic unless super FDataflowSelection is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVertexSelection;
class UScriptStruct* FDataflowVertexSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVertexSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVertexSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVertexSelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVertexSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVertexSelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVertexSelection>()
{
	return FDataflowVertexSelection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVertexSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowSelection,
	&NewStructOps,
	"DataflowVertexSelection",
	nullptr,
	0,
	sizeof(FDataflowVertexSelection),
	alignof(FDataflowVertexSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVertexSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVertexSelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVertexSelection.InnerSingleton;
}
// End ScriptStruct FDataflowVertexSelection

// Begin ScriptStruct FDataflowFaceSelection
static_assert(std::is_polymorphic<FDataflowFaceSelection>() == std::is_polymorphic<FDataflowSelection>(), "USTRUCT FDataflowFaceSelection cannot be polymorphic unless super FDataflowSelection is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowFaceSelection;
class UScriptStruct* FDataflowFaceSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowFaceSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowFaceSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowFaceSelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowFaceSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowFaceSelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowFaceSelection>()
{
	return FDataflowFaceSelection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowFaceSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowSelection,
	&NewStructOps,
	"DataflowFaceSelection",
	nullptr,
	0,
	sizeof(FDataflowFaceSelection),
	alignof(FDataflowFaceSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowFaceSelection()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowFaceSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowFaceSelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowFaceSelection.InnerSingleton;
}
// End ScriptStruct FDataflowFaceSelection

// Begin ScriptStruct FDataflowGeometrySelection
static_assert(std::is_polymorphic<FDataflowGeometrySelection>() == std::is_polymorphic<FDataflowSelection>(), "USTRUCT FDataflowGeometrySelection cannot be polymorphic unless super FDataflowSelection is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowGeometrySelection;
class UScriptStruct* FDataflowGeometrySelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowGeometrySelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowGeometrySelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGeometrySelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowGeometrySelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowGeometrySelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowGeometrySelection>()
{
	return FDataflowGeometrySelection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowGeometrySelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowSelection,
	&NewStructOps,
	"DataflowGeometrySelection",
	nullptr,
	0,
	sizeof(FDataflowGeometrySelection),
	alignof(FDataflowGeometrySelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowGeometrySelection()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowGeometrySelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowGeometrySelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowGeometrySelection.InnerSingleton;
}
// End ScriptStruct FDataflowGeometrySelection

// Begin ScriptStruct FDataflowMaterialSelection
static_assert(std::is_polymorphic<FDataflowMaterialSelection>() == std::is_polymorphic<FDataflowSelection>(), "USTRUCT FDataflowMaterialSelection cannot be polymorphic unless super FDataflowSelection is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowMaterialSelection;
class UScriptStruct* FDataflowMaterialSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMaterialSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowMaterialSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMaterialSelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowMaterialSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowMaterialSelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowMaterialSelection>()
{
	return FDataflowMaterialSelection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowMaterialSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowSelection,
	&NewStructOps,
	"DataflowMaterialSelection",
	nullptr,
	0,
	sizeof(FDataflowMaterialSelection),
	alignof(FDataflowMaterialSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowMaterialSelection()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowMaterialSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowMaterialSelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowMaterialSelection.InnerSingleton;
}
// End ScriptStruct FDataflowMaterialSelection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowSelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowSelection_Statics::NewStructOps, TEXT("DataflowSelection"), &Z_Registration_Info_UScriptStruct_DataflowSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSelection), 3665878643U) },
		{ FDataflowTransformSelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::NewStructOps, TEXT("DataflowTransformSelection"), &Z_Registration_Info_UScriptStruct_DataflowTransformSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowTransformSelection), 2980507218U) },
		{ FDataflowVertexSelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::NewStructOps, TEXT("DataflowVertexSelection"), &Z_Registration_Info_UScriptStruct_DataflowVertexSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVertexSelection), 1972966787U) },
		{ FDataflowFaceSelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::NewStructOps, TEXT("DataflowFaceSelection"), &Z_Registration_Info_UScriptStruct_DataflowFaceSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowFaceSelection), 625145595U) },
		{ FDataflowGeometrySelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics::NewStructOps, TEXT("DataflowGeometrySelection"), &Z_Registration_Info_UScriptStruct_DataflowGeometrySelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowGeometrySelection), 2162165411U) },
		{ FDataflowMaterialSelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics::NewStructOps, TEXT("DataflowMaterialSelection"), &Z_Registration_Info_UScriptStruct_DataflowMaterialSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowMaterialSelection), 1848578914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_2206557900(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
