// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/Animation/AnimNodeData.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Public/Animation/ExposedValueHandler.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintGeneratedClass() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedStruct();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedStruct_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrameSnapshot();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintConstantData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintDebugData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintMutableData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeStructData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateMachineDebugData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateMachineStateDebugData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FStateMachineStateDebugData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateMachineStateDebugData;
class UScriptStruct* FStateMachineStateDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateMachineStateDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateMachineStateDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineStateDebugData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StateMachineStateDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_StateMachineStateDebugData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStateMachineStateDebugData>()
{
	return FStateMachineStateDebugData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Represents the debugging information for a single state within a state machine\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Represents the debugging information for a single state within a state machine" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateMachineStateDebugData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StateMachineStateDebugData",
	nullptr,
	0,
	sizeof(FStateMachineStateDebugData),
	alignof(FStateMachineStateDebugData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateMachineStateDebugData()
{
	if (!Z_Registration_Info_UScriptStruct_StateMachineStateDebugData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateMachineStateDebugData.InnerSingleton, Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateMachineStateDebugData.InnerSingleton;
}
// End ScriptStruct FStateMachineStateDebugData

// Begin ScriptStruct FStateMachineDebugData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateMachineDebugData;
class UScriptStruct* FStateMachineDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateMachineDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateMachineDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineDebugData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StateMachineDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_StateMachineDebugData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStateMachineDebugData>()
{
	return FStateMachineDebugData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateMachineDebugData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// This structure represents debugging information for a single state machine\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "This structure represents debugging information for a single state machine" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateMachineDebugData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StateMachineDebugData",
	nullptr,
	0,
	sizeof(FStateMachineDebugData),
	alignof(FStateMachineDebugData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateMachineDebugData()
{
	if (!Z_Registration_Info_UScriptStruct_StateMachineDebugData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateMachineDebugData.InnerSingleton, Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateMachineDebugData.InnerSingleton;
}
// End ScriptStruct FStateMachineDebugData

// Begin ScriptStruct FAnimationFrameSnapshot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationFrameSnapshot;
class UScriptStruct* FAnimationFrameSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationFrameSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationFrameSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationFrameSnapshot, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationFrameSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationFrameSnapshot.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationFrameSnapshot>()
{
	return FAnimationFrameSnapshot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// This structure represents debugging information for a frame snapshot\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "This structure represents debugging information for a frame snapshot" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationFrameSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimationFrameSnapshot",
	nullptr,
	0,
	sizeof(FAnimationFrameSnapshot),
	alignof(FAnimationFrameSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrameSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationFrameSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationFrameSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationFrameSnapshot.InnerSingleton;
}
// End ScriptStruct FAnimationFrameSnapshot

// Begin ScriptStruct FAnimBlueprintDebugData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimBlueprintDebugData;
class UScriptStruct* FAnimBlueprintDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimBlueprintDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintDebugData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintDebugData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimBlueprintDebugData>()
{
	return FAnimBlueprintDebugData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// This structure represents animation-related debugging information for an entire AnimBlueprint\n// (general debug information for the event graph, etc... is still contained in a FBlueprintDebugData structure)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "This structure represents animation-related debugging information for an entire AnimBlueprint\n(general debug information for the event graph, etc... is still contained in a FBlueprintDebugData structure)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintDebugData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimBlueprintDebugData",
	nullptr,
	0,
	sizeof(FAnimBlueprintDebugData),
	alignof(FAnimBlueprintDebugData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintDebugData()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintDebugData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimBlueprintDebugData.InnerSingleton, Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintDebugData.InnerSingleton;
}
// End ScriptStruct FAnimBlueprintDebugData

// Begin ScriptStruct FAnimBlueprintMutableData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimBlueprintMutableData;
class UScriptStruct* FAnimBlueprintMutableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintMutableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimBlueprintMutableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintMutableData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintMutableData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintMutableData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimBlueprintMutableData>()
{
	return FAnimBlueprintMutableData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimBlueprintMutableData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// 'Marker' structure for mutable data. This is used as a base struct for mutable data to be inserted into by the anim\n// BP compiler.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "'Marker' structure for mutable data. This is used as a base struct for mutable data to be inserted into by the anim\nBP compiler." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintMutableData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintMutableData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimBlueprintMutableData",
	nullptr,
	0,
	sizeof(FAnimBlueprintMutableData),
	alignof(FAnimBlueprintMutableData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintMutableData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimBlueprintMutableData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintMutableData()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintMutableData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimBlueprintMutableData.InnerSingleton, Z_Construct_UScriptStruct_FAnimBlueprintMutableData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintMutableData.InnerSingleton;
}
// End ScriptStruct FAnimBlueprintMutableData

// Begin ScriptStruct FAnimBlueprintConstantData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimBlueprintConstantData;
class UScriptStruct* FAnimBlueprintConstantData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintConstantData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimBlueprintConstantData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintConstantData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintConstantData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintConstantData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimBlueprintConstantData>()
{
	return FAnimBlueprintConstantData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimBlueprintConstantData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// 'Marker' structure for constant data. This is used as a base struct for constant data to be inserted into by the anim\n// BP compiler if there is no existing archetype sparse class data.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "'Marker' structure for constant data. This is used as a base struct for constant data to be inserted into by the anim\nBP compiler if there is no existing archetype sparse class data." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintConstantData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintConstantData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimBlueprintConstantData",
	nullptr,
	0,
	sizeof(FAnimBlueprintConstantData),
	alignof(FAnimBlueprintConstantData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintConstantData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimBlueprintConstantData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintConstantData()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintConstantData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimBlueprintConstantData.InnerSingleton, Z_Construct_UScriptStruct_FAnimBlueprintConstantData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintConstantData.InnerSingleton;
}
// End ScriptStruct FAnimBlueprintConstantData

// Begin Class UAnimBlueprintGeneratedStruct
void UAnimBlueprintGeneratedStruct::StaticRegisterNativesUAnimBlueprintGeneratedStruct()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintGeneratedStruct);
UClass* Z_Construct_UClass_UAnimBlueprintGeneratedStruct_NoRegister()
{
	return UAnimBlueprintGeneratedStruct::StaticClass();
}
struct Z_Construct_UClass_UAnimBlueprintGeneratedStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Struct type generated by the anim BP compiler. Used for sparse class data and mutable data area.\n// Only really needed to hide the struct from the content browser (via IsAsset override)\n" },
		{ "IncludePath", "Animation/AnimBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Struct type generated by the anim BP compiler. Used for sparse class data and mutable data area.\nOnly really needed to hide the struct from the content browser (via IsAsset override)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintGeneratedStruct>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimBlueprintGeneratedStruct_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScriptStruct,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedStruct_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintGeneratedStruct_Statics::ClassParams = {
	&UAnimBlueprintGeneratedStruct::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedStruct_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBlueprintGeneratedStruct_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimBlueprintGeneratedStruct()
{
	if (!Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.OuterSingleton, Z_Construct_UClass_UAnimBlueprintGeneratedStruct_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimBlueprintGeneratedStruct>()
{
	return UAnimBlueprintGeneratedStruct::StaticClass();
}
UAnimBlueprintGeneratedStruct::UAnimBlueprintGeneratedStruct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintGeneratedStruct);
UAnimBlueprintGeneratedStruct::~UAnimBlueprintGeneratedStruct() {}
// End Class UAnimBlueprintGeneratedStruct

// Begin Class UAnimBlueprintGeneratedClass
void UAnimBlueprintGeneratedClass::StaticRegisterNativesUAnimBlueprintGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintGeneratedClass);
UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister()
{
	return UAnimBlueprintGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedStateMachines_MetaData[] = {
		{ "Comment", "// List of state machines present in this blueprint class\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "List of state machines present in this blueprint class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[] = {
		{ "Comment", "/** Target skeleton for this blueprint class */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Target skeleton for this blueprint class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifies_MetaData[] = {
		{ "Comment", "/** A list of anim notifies that state machines (or anything else) may reference */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "A list of anim notifies that state machines (or anything else) may reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedSavedPoseIndicesMap_MetaData[] = {
		{ "Comment", "// Indices for each of the saved pose nodes that require updating, in the order they need to get updates, per layer\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Indices for each of the saved pose nodes that require updating, in the order they need to get updates, per layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncGroupNames_MetaData[] = {
		{ "Comment", "// Array of sync group names in the order that they are requested during compile\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of sync group names in the order that they are requested during compile" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluateGraphExposedInputs_MetaData[] = {
		{ "Comment", "// Deprecated - moved to FAnimSubsystem_Base\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Deprecated - moved to FAnimSubsystem_Base" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphAssetPlayerInformation_MetaData[] = {
		{ "Comment", "// Indices for any Asset Player found within a specific (named) Anim Layer Graph, or implemented Anim Interface Graph\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Indices for any Asset Player found within a specific (named) Anim Layer Graph, or implemented Anim Interface Graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBlendOptions_MetaData[] = {
		{ "Comment", "// Per layer graph blending options\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Per layer graph blending options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNodeData_MetaData[] = {
		{ "Comment", "// Constant/folded anim node data\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Constant/folded anim node data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTypeMap_MetaData[] = {
		{ "Comment", "// Map from anim node struct to info about that struct (used to accelerate property name lookups)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Map from anim node struct to info about that struct (used to accelerate property name lookups)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedStateMachines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedStateMachines;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNotifies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimNotifies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrderedSavedPoseIndicesMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OrderedSavedPoseIndicesMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OrderedSavedPoseIndicesMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SyncGroupNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SyncGroupNames;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluateGraphExposedInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EvaluateGraphExposedInputs;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphAssetPlayerInformation_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphAssetPlayerInformation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GraphAssetPlayerInformation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBlendOptions_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphBlendOptions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GraphBlendOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNodeData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimNodeData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeTypeMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeTypeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NodeTypeMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_Inner = { "BakedStateMachines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBakedAnimationStateMachine, METADATA_PARAMS(0, nullptr) }; // 3070660694
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines = { "BakedStateMachines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, BakedStateMachines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedStateMachines_MetaData), NewProp_BakedStateMachines_MetaData) }; // 3070660694
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0114010000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSkeleton_MetaData), NewProp_TargetSkeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_Inner = { "AnimNotifies", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(0, nullptr) }; // 3109849065
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies = { "AnimNotifies", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, AnimNotifies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNotifies_MetaData), NewProp_AnimNotifies_MetaData) }; // 3109849065
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_ValueProp = { "OrderedSavedPoseIndicesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCachedPoseIndices, METADATA_PARAMS(0, nullptr) }; // 1211653652
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_Key_KeyProp = { "OrderedSavedPoseIndicesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap = { "OrderedSavedPoseIndicesMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, OrderedSavedPoseIndicesMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedSavedPoseIndicesMap_MetaData), NewProp_OrderedSavedPoseIndicesMap_MetaData) }; // 1211653652
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_Inner = { "SyncGroupNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames = { "SyncGroupNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, SyncGroupNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncGroupNames_MetaData), NewProp_SyncGroupNames_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs_Inner = { "EvaluateGraphExposedInputs", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExposedValueHandler, METADATA_PARAMS(0, nullptr) }; // 592776064
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs = { "EvaluateGraphExposedInputs", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, EvaluateGraphExposedInputs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluateGraphExposedInputs_MetaData), NewProp_EvaluateGraphExposedInputs_MetaData) }; // 592776064
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_ValueProp = { "GraphAssetPlayerInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGraphAssetPlayerInformation, METADATA_PARAMS(0, nullptr) }; // 166708636
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_Key_KeyProp = { "GraphAssetPlayerInformation_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation = { "GraphAssetPlayerInformation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, GraphAssetPlayerInformation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphAssetPlayerInformation_MetaData), NewProp_GraphAssetPlayerInformation_MetaData) }; // 166708636
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_ValueProp = { "GraphBlendOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnimGraphBlendOptions, METADATA_PARAMS(0, nullptr) }; // 3713033072
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_Key_KeyProp = { "GraphBlendOptions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions = { "GraphBlendOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, GraphBlendOptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBlendOptions_MetaData), NewProp_GraphBlendOptions_MetaData) }; // 3713033072
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNodeData_Inner = { "AnimNodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimNodeData, METADATA_PARAMS(0, nullptr) }; // 898248607
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNodeData = { "AnimNodeData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, AnimNodeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNodeData_MetaData), NewProp_AnimNodeData_MetaData) }; // 898248607
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_NodeTypeMap_ValueProp = { "NodeTypeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnimNodeStructData, METADATA_PARAMS(0, nullptr) }; // 1059682525
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_NodeTypeMap_Key_KeyProp = { "NodeTypeMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_NodeTypeMap = { "NodeTypeMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, NodeTypeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTypeMap_MetaData), NewProp_NodeTypeMap_MetaData) }; // 1059682525
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndicesMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphAssetPlayerInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_GraphBlendOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNodeData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNodeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_NodeTypeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_NodeTypeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_NodeTypeMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAnimClassInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimBlueprintGeneratedClass, IAnimClassInterface), false },  // 5696892
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::ClassParams = {
	&UAnimBlueprintGeneratedClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008A00A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimBlueprintGeneratedClass>()
{
	return UAnimBlueprintGeneratedClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintGeneratedClass);
UAnimBlueprintGeneratedClass::~UAnimBlueprintGeneratedClass() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprintGeneratedClass)
// End Class UAnimBlueprintGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateMachineStateDebugData::StaticStruct, Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::NewStructOps, TEXT("StateMachineStateDebugData"), &Z_Registration_Info_UScriptStruct_StateMachineStateDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateMachineStateDebugData), 1243029075U) },
		{ FStateMachineDebugData::StaticStruct, Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::NewStructOps, TEXT("StateMachineDebugData"), &Z_Registration_Info_UScriptStruct_StateMachineDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateMachineDebugData), 3449993894U) },
		{ FAnimationFrameSnapshot::StaticStruct, Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::NewStructOps, TEXT("AnimationFrameSnapshot"), &Z_Registration_Info_UScriptStruct_AnimationFrameSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationFrameSnapshot), 4917264U) },
		{ FAnimBlueprintDebugData::StaticStruct, Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::NewStructOps, TEXT("AnimBlueprintDebugData"), &Z_Registration_Info_UScriptStruct_AnimBlueprintDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimBlueprintDebugData), 2414067654U) },
		{ FAnimBlueprintMutableData::StaticStruct, Z_Construct_UScriptStruct_FAnimBlueprintMutableData_Statics::NewStructOps, TEXT("AnimBlueprintMutableData"), &Z_Registration_Info_UScriptStruct_AnimBlueprintMutableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimBlueprintMutableData), 2444336629U) },
		{ FAnimBlueprintConstantData::StaticStruct, Z_Construct_UScriptStruct_FAnimBlueprintConstantData_Statics::NewStructOps, TEXT("AnimBlueprintConstantData"), &Z_Registration_Info_UScriptStruct_AnimBlueprintConstantData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimBlueprintConstantData), 798385815U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintGeneratedStruct, UAnimBlueprintGeneratedStruct::StaticClass, TEXT("UAnimBlueprintGeneratedStruct"), &Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintGeneratedStruct), 437594042U) },
		{ Z_Construct_UClass_UAnimBlueprintGeneratedClass, UAnimBlueprintGeneratedClass::StaticClass, TEXT("UAnimBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintGeneratedClass), 3189051627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_3315552231(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
