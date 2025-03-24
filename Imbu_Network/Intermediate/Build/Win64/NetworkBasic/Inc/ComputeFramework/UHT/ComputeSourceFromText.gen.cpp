// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeSourceFromText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeSourceFromText() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSourceFromText();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSourceFromText_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References

// Begin Class UComputeSourceFromText
void UComputeSourceFromText::StaticRegisterNativesUComputeSourceFromText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeSourceFromText);
UClass* Z_Construct_UClass_UComputeSourceFromText_NoRegister()
{
	return UComputeSourceFromText::StaticClass();
}
struct Z_Construct_UClass_UComputeSourceFromText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class responsible for loading HLSL text and parsing any metadata available.\n */" },
		{ "IncludePath", "ComputeFramework/ComputeSourceFromText.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeSourceFromText.h" },
		{ "ToolTip", "Class responsible for loading HLSL text and parsing any metadata available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFile_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Filepath to the source file containing the kernel entry points and all options for parsing. */" },
		{ "ContentDir", "" },
		{ "FilePathFilter", "Unreal Shader File (*.usf)|*.usf" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeSourceFromText.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Filepath to the source file containing the kernel entry points and all options for parsing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeSourceFromText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeSourceFromText_Statics::NewProp_SourceFile = { "SourceFile", nullptr, (EPropertyFlags)0x0010010000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComputeSourceFromText, SourceFile), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFile_MetaData), NewProp_SourceFile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeSourceFromText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeSourceFromText_Statics::NewProp_SourceFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSourceFromText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComputeSourceFromText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeSource,
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSourceFromText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeSourceFromText_Statics::ClassParams = {
	&UComputeSourceFromText::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UComputeSourceFromText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSourceFromText_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSourceFromText_Statics::Class_MetaDataParams), Z_Construct_UClass_UComputeSourceFromText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComputeSourceFromText()
{
	if (!Z_Registration_Info_UClass_UComputeSourceFromText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeSourceFromText.OuterSingleton, Z_Construct_UClass_UComputeSourceFromText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComputeSourceFromText.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeSourceFromText>()
{
	return UComputeSourceFromText::StaticClass();
}
UComputeSourceFromText::UComputeSourceFromText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeSourceFromText);
UComputeSourceFromText::~UComputeSourceFromText() {}
// End Class UComputeSourceFromText

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSourceFromText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComputeSourceFromText, UComputeSourceFromText::StaticClass, TEXT("UComputeSourceFromText"), &Z_Registration_Info_UClass_UComputeSourceFromText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeSourceFromText), 4007856937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSourceFromText_h_3946875503(TEXT("/Script/ComputeFramework"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSourceFromText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSourceFromText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
