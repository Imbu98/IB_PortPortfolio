// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildPatchServices_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BuildPatchServices;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BuildPatchServices()
	{
		if (!Z_Registration_Info_UPackage__Script_BuildPatchServices.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BuildPatchServices",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEC30AC49,
				0x8F40D428,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BuildPatchServices.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BuildPatchServices.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BuildPatchServices(Z_Construct_UPackage__Script_BuildPatchServices, TEXT("/Script/BuildPatchServices"), Z_Registration_Info_UPackage__Script_BuildPatchServices, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEC30AC49, 0x8F40D428));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
