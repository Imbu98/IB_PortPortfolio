// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistry_init() {}
	ASSETREGISTRY_API UFunction* Z_Construct_UDelegateFunction_UAssetRegistryHelpers_SortingPredicate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AssetRegistry;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AssetRegistry()
	{
		if (!Z_Registration_Info_UPackage__Script_AssetRegistry.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UAssetRegistryHelpers_SortingPredicate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AssetRegistry",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x22BC8175,
				0x9727D101,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AssetRegistry.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AssetRegistry.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AssetRegistry(Z_Construct_UPackage__Script_AssetRegistry, TEXT("/Script/AssetRegistry"), Z_Registration_Info_UPackage__Script_AssetRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x22BC8175, 0x9727D101));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
