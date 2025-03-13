// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/UObject/PropertyText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyText() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyTextFName();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyTextString();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin ScriptStruct FPropertyTextFName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyTextFName;
class UScriptStruct* FPropertyTextFName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyTextFName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyTextFName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyTextFName, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("PropertyTextFName"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyTextFName.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FPropertyTextFName>()
{
	return FPropertyTextFName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyTextFName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tuple returned by <function> in a UPROPERTY(..., meta = (GetOptions = <function>))\n * allowing value to be specified as a FName\n */" },
		{ "ModuleRelativePath", "Public/UObject/PropertyText.h" },
		{ "ToolTip", "Tuple returned by <function> in a UPROPERTY(..., meta = (GetOptions = <function>))\nallowing value to be specified as a FName" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyTextFName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyTextFName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"PropertyTextFName",
	nullptr,
	0,
	sizeof(FPropertyTextFName),
	alignof(FPropertyTextFName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyTextFName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyTextFName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyTextFName()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyTextFName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyTextFName.InnerSingleton, Z_Construct_UScriptStruct_FPropertyTextFName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyTextFName.InnerSingleton;
}
// End ScriptStruct FPropertyTextFName

// Begin ScriptStruct FPropertyTextString
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyTextString;
class UScriptStruct* FPropertyTextString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyTextString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyTextString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyTextString, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("PropertyTextString"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyTextString.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FPropertyTextString>()
{
	return FPropertyTextString::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyTextString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tuple returned by <function> in a UPROPERTY(..., meta = (GetOptions = <function>))\n * allowing value to be specified as a FString\n */" },
		{ "ModuleRelativePath", "Public/UObject/PropertyText.h" },
		{ "ToolTip", "Tuple returned by <function> in a UPROPERTY(..., meta = (GetOptions = <function>))\nallowing value to be specified as a FString" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyTextString>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyTextString_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"PropertyTextString",
	nullptr,
	0,
	sizeof(FPropertyTextString),
	alignof(FPropertyTextString),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyTextString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyTextString_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyTextString()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyTextString.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyTextString.InnerSingleton, Z_Construct_UScriptStruct_FPropertyTextString_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyTextString.InnerSingleton;
}
// End ScriptStruct FPropertyTextString

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyText_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPropertyTextFName::StaticStruct, Z_Construct_UScriptStruct_FPropertyTextFName_Statics::NewStructOps, TEXT("PropertyTextFName"), &Z_Registration_Info_UScriptStruct_PropertyTextFName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyTextFName), 2120584966U) },
		{ FPropertyTextString::StaticStruct, Z_Construct_UScriptStruct_FPropertyTextString_Statics::NewStructOps, TEXT("PropertyTextString"), &Z_Registration_Info_UScriptStruct_PropertyTextString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyTextString), 2422473509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyText_h_597334946(TEXT("/Script/CoreUObject"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyText_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyText_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
