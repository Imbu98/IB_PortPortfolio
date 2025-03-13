// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/ObjectReplicationBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReplicationBridge() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFactory_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridge();
IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridge_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationBridge();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UObjectReplicationBridge
void UObjectReplicationBridge::StaticRegisterNativesUObjectReplicationBridge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectReplicationBridge);
UClass* Z_Construct_UClass_UObjectReplicationBridge_NoRegister()
{
	return UObjectReplicationBridge::StaticClass();
}
struct Z_Construct_UClass_UObjectReplicationBridge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n* Partial implementation of ReplicationBridge that can be used as a foundation for \n* implementing support for replicating objects derived from UObject\n*/" },
		{ "IncludePath", "Iris/ReplicationSystem/ObjectReplicationBridge.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridge.h" },
		{ "ToolTip", "* Partial implementation of ReplicationBridge that can be used as a foundation for\n* implementing support for replicating objects derived from UObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetObjectFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetObjectFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NetObjectFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectReplicationBridge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectReplicationBridge_Statics::NewProp_NetObjectFactories_Inner = { "NetObjectFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNetObjectFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridge_Statics::NewProp_NetObjectFactories = { "NetObjectFactories", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReplicationBridge, NetObjectFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetObjectFactories_MetaData), NewProp_NetObjectFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectReplicationBridge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridge_Statics::NewProp_NetObjectFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridge_Statics::NewProp_NetObjectFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectReplicationBridge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicationBridge,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectReplicationBridge_Statics::ClassParams = {
	&UObjectReplicationBridge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectReplicationBridge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridge_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridge_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectReplicationBridge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectReplicationBridge()
{
	if (!Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton, Z_Construct_UClass_UObjectReplicationBridge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UObjectReplicationBridge>()
{
	return UObjectReplicationBridge::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectReplicationBridge);
// End Class UObjectReplicationBridge

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectReplicationBridge, UObjectReplicationBridge::StaticClass, TEXT("UObjectReplicationBridge"), &Z_Registration_Info_UClass_UObjectReplicationBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectReplicationBridge), 863718319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_1647969256(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
