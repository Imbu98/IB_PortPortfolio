// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Struct.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Struct() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Struct();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Struct_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBlackboardKeyType_Struct
void UBlackboardKeyType_Struct::StaticRegisterNativesUBlackboardKeyType_Struct()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType_Struct);
UClass* Z_Construct_UClass_UBlackboardKeyType_Struct_NoRegister()
{
	return UBlackboardKeyType_Struct::StaticClass();
}
struct Z_Construct_UClass_UBlackboardKeyType_Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "Struct" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Struct.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Struct.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "DefaultValue" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Struct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Comment", "// Runtime value of the key if it is instanced otherwise is empty.\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Struct.h" },
		{ "ToolTip", "Runtime value of the key if it is instanced otherwise is empty." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_Struct>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardKeyType_Struct, DefaultValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) }; // 111383296
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardKeyType_Struct, Value), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::ClassParams = {
	&UBlackboardKeyType_Struct::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlackboardKeyType_Struct()
{
	if (!Z_Registration_Info_UClass_UBlackboardKeyType_Struct.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType_Struct.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_Struct_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlackboardKeyType_Struct.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBlackboardKeyType_Struct>()
{
	return UBlackboardKeyType_Struct::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Struct);
UBlackboardKeyType_Struct::~UBlackboardKeyType_Struct() {}
// End Class UBlackboardKeyType_Struct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Struct_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType_Struct, UBlackboardKeyType_Struct::StaticClass, TEXT("UBlackboardKeyType_Struct"), &Z_Registration_Info_UClass_UBlackboardKeyType_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType_Struct), 1113861903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Struct_h_1427278496(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Struct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Struct_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
