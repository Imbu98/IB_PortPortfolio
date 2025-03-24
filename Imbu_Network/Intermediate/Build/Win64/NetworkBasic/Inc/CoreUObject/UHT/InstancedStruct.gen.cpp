// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStruct() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin ScriptStruct FInstancedStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStruct;
class UScriptStruct* FInstancedStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStruct, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("InstancedStruct"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStruct.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FInstancedStruct>()
{
	return FInstancedStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FInstancedStruct works similarly as instanced UObject* property but is USTRUCTs.\n * \n * Example:\n *\n *\x09UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = \"/Script/ModuleName.TestStructBase\"))\n *\x09""FInstancedStruct Test;\n *\n *\x09UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = \"/Script/ModuleName.TestStructBase\"))\n *\x09TArray<FInstancedStruct> TestArray;\n */" },
		{ "HasNativeMake", "/Script/Engine.BlueprintInstancedStructLibrary.MakeInstancedStruct" },
		{ "ModuleRelativePath", "Public/StructUtils/InstancedStruct.h" },
		{ "ToolTip", "FInstancedStruct works similarly as instanced UObject* property but is USTRUCTs.\n\nExample:\n\n    UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = \"/Script/ModuleName.TestStructBase\"))\n    FInstancedStruct Test;\n\n    UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = \"/Script/ModuleName.TestStructBase\"))\n    TArray<FInstancedStruct> TestArray;" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"InstancedStruct",
	nullptr,
	0,
	sizeof(FInstancedStruct),
	alignof(FInstancedStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStruct.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedStruct.InnerSingleton;
}
// End ScriptStruct FInstancedStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInstancedStruct::StaticStruct, Z_Construct_UScriptStruct_FInstancedStruct_Statics::NewStructOps, TEXT("InstancedStruct"), &Z_Registration_Info_UScriptStruct_InstancedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStruct), 111383296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStruct_h_4169658903(TEXT("/Script/CoreUObject"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
