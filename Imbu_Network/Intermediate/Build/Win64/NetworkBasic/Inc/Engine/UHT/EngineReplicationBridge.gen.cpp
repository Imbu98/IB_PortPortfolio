// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/Iris/ReplicationSystem/EngineReplicationBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineReplicationBridge() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineReplicationBridge();
ENGINE_API UClass* Z_Construct_UClass_UEngineReplicationBridge_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridge();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UEngineReplicationBridge
void UEngineReplicationBridge::StaticRegisterNativesUEngineReplicationBridge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineReplicationBridge);
UClass* Z_Construct_UClass_UEngineReplicationBridge_NoRegister()
{
	return UEngineReplicationBridge::StaticClass();
}
struct Z_Construct_UClass_UEngineReplicationBridge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Net/Iris/ReplicationSystem/EngineReplicationBridge.h" },
		{ "ModuleRelativePath", "Public/Net/Iris/ReplicationSystem/EngineReplicationBridge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReferencePackageMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Net/Iris/ReplicationSystem/EngineReplicationBridge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectReferencePackageMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineReplicationBridge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngineReplicationBridge_Statics::NewProp_ObjectReferencePackageMap = { "ObjectReferencePackageMap", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngineReplicationBridge, ObjectReferencePackageMap), Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectReferencePackageMap_MetaData), NewProp_ObjectReferencePackageMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEngineReplicationBridge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineReplicationBridge_Statics::NewProp_ObjectReferencePackageMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineReplicationBridge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEngineReplicationBridge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObjectReplicationBridge,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineReplicationBridge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineReplicationBridge_Statics::ClassParams = {
	&UEngineReplicationBridge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEngineReplicationBridge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEngineReplicationBridge_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineReplicationBridge_Statics::Class_MetaDataParams), Z_Construct_UClass_UEngineReplicationBridge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEngineReplicationBridge()
{
	if (!Z_Registration_Info_UClass_UEngineReplicationBridge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineReplicationBridge.OuterSingleton, Z_Construct_UClass_UEngineReplicationBridge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEngineReplicationBridge.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEngineReplicationBridge>()
{
	return UEngineReplicationBridge::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineReplicationBridge);
// End Class UEngineReplicationBridge

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEngineReplicationBridge, UEngineReplicationBridge::StaticClass, TEXT("UEngineReplicationBridge"), &Z_Registration_Info_UClass_UEngineReplicationBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineReplicationBridge), 930588228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_901661587(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
