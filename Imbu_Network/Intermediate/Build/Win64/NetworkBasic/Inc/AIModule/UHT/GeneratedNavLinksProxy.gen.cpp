// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Navigation/GeneratedNavLinksProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedNavLinksProxy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UGeneratedNavLinksProxy();
AIMODULE_API UClass* Z_Construct_UClass_UGeneratedNavLinksProxy_NoRegister();
AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UBaseGeneratedNavLinksProxy();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Delegate FLinkReachedSignature
struct Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics
{
	struct _Script_AIModule_eventLinkReachedSignature_Parms
	{
		AActor* MovingActor;
		FVector DestinationPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/GeneratedNavLinksProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::NewProp_MovingActor = { "MovingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIModule_eventLinkReachedSignature_Parms, MovingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint = { "DestinationPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIModule_eventLinkReachedSignature_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationPoint_MetaData), NewProp_DestinationPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::NewProp_MovingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "LinkReachedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::_Script_AIModule_eventLinkReachedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::_Script_AIModule_eventLinkReachedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLinkReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& LinkReachedSignature, AActor* MovingActor, const FVector DestinationPoint)
{
	struct _Script_AIModule_eventLinkReachedSignature_Parms
	{
		AActor* MovingActor;
		FVector DestinationPoint;
	};
	_Script_AIModule_eventLinkReachedSignature_Parms Parms;
	Parms.MovingActor=MovingActor;
	Parms.DestinationPoint=DestinationPoint;
	LinkReachedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLinkReachedSignature

// Begin Class UGeneratedNavLinksProxy Function ReceiveSmartLinkReached
struct GeneratedNavLinksProxy_eventReceiveSmartLinkReached_Parms
{
	AActor* Agent;
	FVector Destination;
};
static const FName NAME_UGeneratedNavLinksProxy_ReceiveSmartLinkReached = FName(TEXT("ReceiveSmartLinkReached"));
void UGeneratedNavLinksProxy::ReceiveSmartLinkReached(AActor* Agent, const FVector Destination)
{
	GeneratedNavLinksProxy_eventReceiveSmartLinkReached_Parms Parms;
	Parms.Agent=Agent;
	Parms.Destination=Destination;
	UFunction* Func = FindFunctionChecked(NAME_UGeneratedNavLinksProxy_ReceiveSmartLinkReached);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called when agent reaches smart link during path following. */" },
		{ "ModuleRelativePath", "Classes/Navigation/GeneratedNavLinksProxy.h" },
		{ "ToolTip", "Called when agent reaches smart link during path following." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeneratedNavLinksProxy_eventReceiveSmartLinkReached_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeneratedNavLinksProxy_eventReceiveSmartLinkReached_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Destination_MetaData), NewProp_Destination_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::NewProp_Agent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratedNavLinksProxy, nullptr, "ReceiveSmartLinkReached", nullptr, nullptr, Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::PropPointers), sizeof(GeneratedNavLinksProxy_eventReceiveSmartLinkReached_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams) };
static_assert(sizeof(GeneratedNavLinksProxy_eventReceiveSmartLinkReached_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGeneratedNavLinksProxy Function ReceiveSmartLinkReached

// Begin Class UGeneratedNavLinksProxy
void UGeneratedNavLinksProxy::StaticRegisterNativesUGeneratedNavLinksProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeneratedNavLinksProxy);
UClass* Z_Construct_UClass_UGeneratedNavLinksProxy_NoRegister()
{
	return UGeneratedNavLinksProxy::StaticClass();
}
struct Z_Construct_UClass_UGeneratedNavLinksProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Experimental\n * Blueprintable class used to handle generated links as custom links.\n */" },
		{ "IncludePath", "Navigation/GeneratedNavLinksProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/GeneratedNavLinksProxy.h" },
		{ "ToolTip", "Experimental\nBlueprintable class used to handle generated links as custom links." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSmartLinkReached_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/GeneratedNavLinksProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSmartLinkReached;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached, "ReceiveSmartLinkReached" }, // 1783631097
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratedNavLinksProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::NewProp_OnSmartLinkReached = { "OnSmartLinkReached", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneratedNavLinksProxy, OnSmartLinkReached), Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSmartLinkReached_MetaData), NewProp_OnSmartLinkReached_MetaData) }; // 3824557893
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::NewProp_OnSmartLinkReached,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGeneratedNavLinksProxy,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::ClassParams = {
	&UGeneratedNavLinksProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeneratedNavLinksProxy()
{
	if (!Z_Registration_Info_UClass_UGeneratedNavLinksProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneratedNavLinksProxy.OuterSingleton, Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeneratedNavLinksProxy.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UGeneratedNavLinksProxy>()
{
	return UGeneratedNavLinksProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratedNavLinksProxy);
UGeneratedNavLinksProxy::~UGeneratedNavLinksProxy() {}
// End Class UGeneratedNavLinksProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeneratedNavLinksProxy, UGeneratedNavLinksProxy::StaticClass, TEXT("UGeneratedNavLinksProxy"), &Z_Registration_Info_UClass_UGeneratedNavLinksProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneratedNavLinksProxy), 1266032875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_1447374472(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
