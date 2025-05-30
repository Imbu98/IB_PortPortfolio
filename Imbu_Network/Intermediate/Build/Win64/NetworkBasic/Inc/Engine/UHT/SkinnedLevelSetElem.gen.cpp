// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SkinnedLevelSetElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedLevelSetElem() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSkinnedLevelSetElem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FKSkinnedLevelSetElem
static_assert(std::is_polymorphic<FKSkinnedLevelSetElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKSkinnedLevelSetElem cannot be polymorphic unless super FKShapeElem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KSkinnedLevelSetElem;
class UScriptStruct* FKSkinnedLevelSetElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KSkinnedLevelSetElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KSkinnedLevelSetElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKSkinnedLevelSetElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KSkinnedLevelSetElem"));
	}
	return Z_Registration_Info_UScriptStruct_KSkinnedLevelSetElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKSkinnedLevelSetElem>()
{
	return FKSkinnedLevelSetElem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKSkinnedLevelSetElem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SkinnedLevelSetElem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKSkinnedLevelSetElem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKSkinnedLevelSetElem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FKShapeElem,
	&NewStructOps,
	"KSkinnedLevelSetElem",
	nullptr,
	0,
	sizeof(FKSkinnedLevelSetElem),
	alignof(FKSkinnedLevelSetElem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSkinnedLevelSetElem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKSkinnedLevelSetElem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKSkinnedLevelSetElem()
{
	if (!Z_Registration_Info_UScriptStruct_KSkinnedLevelSetElem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KSkinnedLevelSetElem.InnerSingleton, Z_Construct_UScriptStruct_FKSkinnedLevelSetElem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KSkinnedLevelSetElem.InnerSingleton;
}
// End ScriptStruct FKSkinnedLevelSetElem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkinnedLevelSetElem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKSkinnedLevelSetElem::StaticStruct, Z_Construct_UScriptStruct_FKSkinnedLevelSetElem_Statics::NewStructOps, TEXT("KSkinnedLevelSetElem"), &Z_Registration_Info_UScriptStruct_KSkinnedLevelSetElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKSkinnedLevelSetElem), 265072852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkinnedLevelSetElem_h_4164707695(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkinnedLevelSetElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkinnedLevelSetElem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
