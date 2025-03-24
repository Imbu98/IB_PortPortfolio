// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Engine/Public/InterchangeMeshUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMeshUtilities() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeMeshUtilities();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeMeshUtilities_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References

// Begin Class UInterchangeMeshUtilities Function ScriptedImportMorphTarget
struct Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics
{
	struct InterchangeMeshUtilities_eventScriptedImportMorphTarget_Parms
	{
		USkeletalMesh* SkeletalMesh;
		int32 LodIndex;
		const UInterchangeSourceData* SourceData;
		FString MorphTargetName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkeletalMesh | MorphTarget" },
		{ "Comment", "/**\n\x09 * This function import a morph target from the source data and add/replace the skeletal mesh morph target.\n\x09 *\n\x09 * @Param SkeletalMesh - The target skeletal mesh we want to add the morph targets\n\x09 * @Param LodIndex - The index of the LOD we want to replace or add the morph targets\n\x09 * @Param SourceData - The source to import the morph targets\n\x09 * @Param MorphTargetName - If not empty we will use this name to create the morph target, if there is already an existing morph target it will be re-import\n\x09 * @Return - return true if it successfully add or replace the skeletal mesh morph target at LodIndex, flase otherwise.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshUtilities.h" },
		{ "ToolTip", "This function import a morph target from the source data and add/replace the skeletal mesh morph target.\n\n@Param SkeletalMesh - The target skeletal mesh we want to add the morph targets\n@Param LodIndex - The index of the LOD we want to replace or add the morph targets\n@Param SourceData - The source to import the morph targets\n@Param MorphTargetName - If not empty we will use this name to create the morph target, if there is already an existing morph target it will be re-import\n@Return - return true if it successfully add or replace the skeletal mesh morph target at LodIndex, flase otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshUtilities_eventScriptedImportMorphTarget_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshUtilities_eventScriptedImportMorphTarget_Parms, LodIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodIndex_MetaData), NewProp_LodIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshUtilities_eventScriptedImportMorphTarget_Parms, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceData_MetaData), NewProp_SourceData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_MorphTargetName = { "MorphTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshUtilities_eventScriptedImportMorphTarget_Parms, MorphTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetName_MetaData), NewProp_MorphTargetName_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshUtilities_eventScriptedImportMorphTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshUtilities_eventScriptedImportMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_LodIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_SourceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_MorphTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshUtilities, nullptr, "ScriptedImportMorphTarget", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::InterchangeMeshUtilities_eventScriptedImportMorphTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::InterchangeMeshUtilities_eventScriptedImportMorphTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshUtilities::execScriptedImportMorphTarget)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
	P_GET_OBJECT(UInterchangeSourceData,Z_Param_SourceData);
	P_GET_PROPERTY(FStrProperty,Z_Param_MorphTargetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ScriptedImportMorphTarget(Z_Param_SkeletalMesh,Z_Param_LodIndex,Z_Param_SourceData,Z_Param_MorphTargetName);
	P_NATIVE_END;
}
// End Class UInterchangeMeshUtilities Function ScriptedImportMorphTarget

// Begin Class UInterchangeMeshUtilities
void UInterchangeMeshUtilities::StaticRegisterNativesUInterchangeMeshUtilities()
{
	UClass* Class = UInterchangeMeshUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ScriptedImportMorphTarget", &UInterchangeMeshUtilities::execScriptedImportMorphTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMeshUtilities);
UClass* Z_Construct_UClass_UInterchangeMeshUtilities_NoRegister()
{
	return UInterchangeMeshUtilities::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMeshUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMeshUtilities.h" },
		{ "ModuleRelativePath", "Public/InterchangeMeshUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget, "ScriptedImportMorphTarget" }, // 1219135174
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMeshUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMeshUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMeshUtilities_Statics::ClassParams = {
	&UInterchangeMeshUtilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMeshUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMeshUtilities()
{
	if (!Z_Registration_Info_UClass_UInterchangeMeshUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMeshUtilities.OuterSingleton, Z_Construct_UClass_UInterchangeMeshUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMeshUtilities.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeMeshUtilities>()
{
	return UInterchangeMeshUtilities::StaticClass();
}
UInterchangeMeshUtilities::UInterchangeMeshUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMeshUtilities);
UInterchangeMeshUtilities::~UInterchangeMeshUtilities() {}
// End Class UInterchangeMeshUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMeshUtilities, UInterchangeMeshUtilities::StaticClass, TEXT("UInterchangeMeshUtilities"), &Z_Registration_Info_UClass_UInterchangeMeshUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMeshUtilities), 3951554439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_1506523165(TEXT("/Script/InterchangeEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
