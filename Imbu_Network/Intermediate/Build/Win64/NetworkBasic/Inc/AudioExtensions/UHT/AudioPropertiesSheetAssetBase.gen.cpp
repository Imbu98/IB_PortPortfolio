// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/AudioPropertiesSheetAssetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioPropertiesSheetAssetBase() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin Class UAudioPropertiesSheetAssetBase Function CopyToObjectProperties
#if WITH_EDITOR
struct Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics
{
	struct AudioPropertiesSheetAssetBase_eventCopyToObjectProperties_Parms
	{
		UObject* TargetObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioProperties" },
		{ "ModuleRelativePath", "Public/AudioPropertiesSheetAssetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioPropertiesSheetAssetBase_eventCopyToObjectProperties_Parms, TargetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AudioPropertiesSheetAssetBase_eventCopyToObjectProperties_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioPropertiesSheetAssetBase_eventCopyToObjectProperties_Parms), &Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::NewProp_TargetObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPropertiesSheetAssetBase, nullptr, "CopyToObjectProperties", nullptr, nullptr, Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::AudioPropertiesSheetAssetBase_eventCopyToObjectProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x64020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::AudioPropertiesSheetAssetBase_eventCopyToObjectProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAudioPropertiesSheetAssetBase::execCopyToObjectProperties)
{
	P_GET_OBJECT(UObject,Z_Param_TargetObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CopyToObjectProperties(Z_Param_TargetObject);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAudioPropertiesSheetAssetBase Function CopyToObjectProperties

// Begin Class UAudioPropertiesSheetAssetBase
void UAudioPropertiesSheetAssetBase::StaticRegisterNativesUAudioPropertiesSheetAssetBase()
{
#if WITH_EDITOR
	UClass* Class = UAudioPropertiesSheetAssetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyToObjectProperties", &UAudioPropertiesSheetAssetBase::execCopyToObjectProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioPropertiesSheetAssetBase);
UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister()
{
	return UAudioPropertiesSheetAssetBase::StaticClass();
}
struct Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AudioPropertiesSheetAssetBase.h" },
		{ "ModuleRelativePath", "Public/AudioPropertiesSheetAssetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioPropertiesSheetAssetBase_CopyToObjectProperties, "CopyToObjectProperties" }, // 3008898909
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioPropertiesSheetAssetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::ClassParams = {
	&UAudioPropertiesSheetAssetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase()
{
	if (!Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.OuterSingleton, Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioPropertiesSheetAssetBase>()
{
	return UAudioPropertiesSheetAssetBase::StaticClass();
}
UAudioPropertiesSheetAssetBase::UAudioPropertiesSheetAssetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioPropertiesSheetAssetBase);
UAudioPropertiesSheetAssetBase::~UAudioPropertiesSheetAssetBase() {}
// End Class UAudioPropertiesSheetAssetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioPropertiesSheetAssetBase, UAudioPropertiesSheetAssetBase::StaticClass, TEXT("UAudioPropertiesSheetAssetBase"), &Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioPropertiesSheetAssetBase), 798566069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_1394861513(TEXT("/Script/AudioExtensions"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
