// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeLevelInstanceActorFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLevelInstanceActorFactoryNode() {}

// Begin Cross Module References
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeLevelInstanceActorFactoryNode Function GetCustomLevelReference
struct Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics
{
	struct InterchangeLevelInstanceActorFactoryNode_eventGetCustomLevelReference_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelInstanceActor" },
		{ "Comment", "/** Get the Level this Level instance actor refer to. */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelInstanceActorFactoryNode.h" },
		{ "ToolTip", "Get the Level this Level instance actor refer to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelInstanceActorFactoryNode_eventGetCustomLevelReference_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelInstanceActorFactoryNode_eventGetCustomLevelReference_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelInstanceActorFactoryNode_eventGetCustomLevelReference_Parms), &Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode, nullptr, "GetCustomLevelReference", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::InterchangeLevelInstanceActorFactoryNode_eventGetCustomLevelReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::InterchangeLevelInstanceActorFactoryNode_eventGetCustomLevelReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelInstanceActorFactoryNode::execGetCustomLevelReference)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomLevelReference(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelInstanceActorFactoryNode Function GetCustomLevelReference

// Begin Class UInterchangeLevelInstanceActorFactoryNode Function SetCustomLevelReference
struct Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics
{
	struct InterchangeLevelInstanceActorFactoryNode_eventSetCustomLevelReference_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelInstanceActor" },
		{ "Comment", "/** Set the Level this Level instance actor refer to. */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelInstanceActorFactoryNode.h" },
		{ "ToolTip", "Set the Level this Level instance actor refer to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelInstanceActorFactoryNode_eventSetCustomLevelReference_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelInstanceActorFactoryNode_eventSetCustomLevelReference_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelInstanceActorFactoryNode_eventSetCustomLevelReference_Parms), &Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode, nullptr, "SetCustomLevelReference", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::InterchangeLevelInstanceActorFactoryNode_eventSetCustomLevelReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::InterchangeLevelInstanceActorFactoryNode_eventSetCustomLevelReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelInstanceActorFactoryNode::execSetCustomLevelReference)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomLevelReference(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelInstanceActorFactoryNode Function SetCustomLevelReference

// Begin Class UInterchangeLevelInstanceActorFactoryNode
void UInterchangeLevelInstanceActorFactoryNode::StaticRegisterNativesUInterchangeLevelInstanceActorFactoryNode()
{
	UClass* Class = UInterchangeLevelInstanceActorFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomLevelReference", &UInterchangeLevelInstanceActorFactoryNode::execGetCustomLevelReference },
		{ "SetCustomLevelReference", &UInterchangeLevelInstanceActorFactoryNode::execSetCustomLevelReference },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLevelInstanceActorFactoryNode);
UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_NoRegister()
{
	return UInterchangeLevelInstanceActorFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLevelInstanceActorFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLevelInstanceActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_GetCustomLevelReference, "GetCustomLevelReference" }, // 1518432505
		{ &Z_Construct_UFunction_UInterchangeLevelInstanceActorFactoryNode_SetCustomLevelReference, "SetCustomLevelReference" }, // 1333644392
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLevelInstanceActorFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics::ClassParams = {
	&UInterchangeLevelInstanceActorFactoryNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeLevelInstanceActorFactoryNode>()
{
	return UInterchangeLevelInstanceActorFactoryNode::StaticClass();
}
UInterchangeLevelInstanceActorFactoryNode::UInterchangeLevelInstanceActorFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLevelInstanceActorFactoryNode);
UInterchangeLevelInstanceActorFactoryNode::~UInterchangeLevelInstanceActorFactoryNode() {}
// End Class UInterchangeLevelInstanceActorFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode, UInterchangeLevelInstanceActorFactoryNode::StaticClass, TEXT("UInterchangeLevelInstanceActorFactoryNode"), &Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLevelInstanceActorFactoryNode), 1508717598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_3156232722(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
