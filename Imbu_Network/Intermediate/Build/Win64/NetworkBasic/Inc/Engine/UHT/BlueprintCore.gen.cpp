// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCore() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UBlueprintCore
void UBlueprintCore::StaticRegisterNativesUBlueprintCore()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintCore);
UClass* Z_Construct_UClass_UBlueprintCore_NoRegister()
{
	return UBlueprintCore::StaticClass();
}
struct Z_Construct_UClass_UBlueprintCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/BlueprintCore.h" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonGeneratedClass_MetaData[] = {
		{ "Comment", "/** Pointer to the skeleton class; this is regenerated any time a member variable or function is added but  \n\x09is usually incomplete (no code or hidden autogenerated variables are added to it) */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "Pointer to the skeleton class; this is regenerated any time a member variable or function is added but\n      is usually incomplete (no code or hidden autogenerated variables are added to it)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedClass_MetaData[] = {
		{ "Comment", "/** Pointer to the 'most recent' fully generated class */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "Pointer to the 'most recent' fully generated class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLegacyNeedToPurgeSkelRefs_MetaData[] = {
		{ "Comment", "/** BackCompat:  Whether or not we need to purge references in this blueprint to the skeleton generated during compile-on-load  */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "BackCompat:  Whether or not we need to purge references in this blueprint to the skeleton generated during compile-on-load" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintGuid_MetaData[] = {
		{ "Comment", "/** Blueprint Guid */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "Blueprint Guid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SkeletonGeneratedClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GeneratedClass;
	static void NewProp_bLegacyNeedToPurgeSkelRefs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLegacyNeedToPurgeSkelRefs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass = { "SkeletonGeneratedClass", nullptr, (EPropertyFlags)0x0014000400002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCore, SkeletonGeneratedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonGeneratedClass_MetaData), NewProp_SkeletonGeneratedClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass = { "GeneratedClass", nullptr, (EPropertyFlags)0x0014000400000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCore, GeneratedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedClass_MetaData), NewProp_GeneratedClass_MetaData) };
void Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_SetBit(void* Obj)
{
	((UBlueprintCore*)Obj)->bLegacyNeedToPurgeSkelRefs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs = { "bLegacyNeedToPurgeSkelRefs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlueprintCore), &Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLegacyNeedToPurgeSkelRefs_MetaData), NewProp_bLegacyNeedToPurgeSkelRefs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid = { "BlueprintGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCore, BlueprintGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintGuid_MetaData), NewProp_BlueprintGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCore_Statics::ClassParams = {
	&UBlueprintCore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintCore()
{
	if (!Z_Registration_Info_UClass_UBlueprintCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintCore.OuterSingleton, Z_Construct_UClass_UBlueprintCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintCore.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBlueprintCore>()
{
	return UBlueprintCore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCore);
UBlueprintCore::~UBlueprintCore() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintCore)
// End Class UBlueprintCore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintCore, UBlueprintCore::StaticClass, TEXT("UBlueprintCore"), &Z_Registration_Info_UClass_UBlueprintCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintCore), 1738398406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_4147679254(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
