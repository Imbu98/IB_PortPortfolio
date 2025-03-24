// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkRetargetAssetReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRetargetAssetReference() {}

// Begin Cross Module References
LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin ScriptStruct FLiveLinkRetargetAssetReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference;
class UScriptStruct* FLiveLinkRetargetAssetReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("LiveLinkRetargetAssetReference"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.OuterSingleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FLiveLinkRetargetAssetReference>()
{
	return FLiveLinkRetargetAssetReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// References a live link retarget asset and handles recreation when\n" },
		{ "ModuleRelativePath", "Public/LiveLinkRetargetAssetReference.h" },
		{ "ToolTip", "References a live link retarget asset and handles recreation when" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRetargetAssetReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	nullptr,
	&NewStructOps,
	"LiveLinkRetargetAssetReference",
	nullptr,
	0,
	sizeof(FLiveLinkRetargetAssetReference),
	alignof(FLiveLinkRetargetAssetReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.InnerSingleton;
}
// End ScriptStruct FLiveLinkRetargetAssetReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkRetargetAssetReference::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::NewStructOps, TEXT("LiveLinkRetargetAssetReference"), &Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkRetargetAssetReference), 4293914763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h_3753306999(TEXT("/Script/LiveLink"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
