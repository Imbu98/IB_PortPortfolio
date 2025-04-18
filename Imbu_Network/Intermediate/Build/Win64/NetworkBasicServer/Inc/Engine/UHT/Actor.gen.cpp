// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/ReplicatedState.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EActorGridPlacement();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetachmentRule();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceFlags();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetDormancy();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetRole();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsReplicationMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorScaleMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachment();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EActorUpdateOverlapsMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod;
static UEnum* EActorUpdateOverlapsMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EActorUpdateOverlapsMethod"));
	}
	return Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EActorUpdateOverlapsMethod>()
{
	return EActorUpdateOverlapsMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysUpdate.Comment", "// Always update overlap state on initialization.\n" },
		{ "AlwaysUpdate.Name", "EActorUpdateOverlapsMethod::AlwaysUpdate" },
		{ "AlwaysUpdate.ToolTip", "Always update overlap state on initialization." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Chooses a method for actors to update overlap state (objects it is touching) on initialization, currently only used during level streaming. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "NeverUpdate.Comment", "// Never update overlap state on initialization.\n" },
		{ "NeverUpdate.Name", "EActorUpdateOverlapsMethod::NeverUpdate" },
		{ "NeverUpdate.ToolTip", "Never update overlap state on initialization." },
		{ "OnlyUpdateMovable.Comment", "// Only update if root component has Movable mobility.\n" },
		{ "OnlyUpdateMovable.Name", "EActorUpdateOverlapsMethod::OnlyUpdateMovable" },
		{ "OnlyUpdateMovable.ToolTip", "Only update if root component has Movable mobility." },
		{ "ToolTip", "Chooses a method for actors to update overlap state (objects it is touching) on initialization, currently only used during level streaming." },
		{ "UseConfigDefault.Comment", "// Use the default value specified by the native class or config value.\n" },
		{ "UseConfigDefault.Name", "EActorUpdateOverlapsMethod::UseConfigDefault" },
		{ "UseConfigDefault.ToolTip", "Use the default value specified by the native class or config value." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActorUpdateOverlapsMethod::UseConfigDefault", (int64)EActorUpdateOverlapsMethod::UseConfigDefault },
		{ "EActorUpdateOverlapsMethod::AlwaysUpdate", (int64)EActorUpdateOverlapsMethod::AlwaysUpdate },
		{ "EActorUpdateOverlapsMethod::OnlyUpdateMovable", (int64)EActorUpdateOverlapsMethod::OnlyUpdateMovable },
		{ "EActorUpdateOverlapsMethod::NeverUpdate", (int64)EActorUpdateOverlapsMethod::NeverUpdate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EActorUpdateOverlapsMethod",
	"EActorUpdateOverlapsMethod",
	Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod()
{
	if (!Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.InnerSingleton, Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.InnerSingleton;
}
// End Enum EActorUpdateOverlapsMethod

// Begin Enum ESpawnActorScaleMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpawnActorScaleMethod;
static UEnum* ESpawnActorScaleMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpawnActorScaleMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpawnActorScaleMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpawnActorScaleMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESpawnActorScaleMethod"));
	}
	return Z_Registration_Info_UEnum_ESpawnActorScaleMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESpawnActorScaleMethod>()
{
	return ESpawnActorScaleMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESpawnActorScaleMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Determines how the transform being passed into actor spawning methods interact with the actor's default root component */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "MultiplyWithRoot.Comment", "/** Multiply value of the SpawnTransform Parameter with the default scale in the actor's root component */" },
		{ "MultiplyWithRoot.DisplayName", "Multiply Scale With Root Component Scale" },
		{ "MultiplyWithRoot.Name", "ESpawnActorScaleMethod::MultiplyWithRoot" },
		{ "MultiplyWithRoot.ToolTip", "Multiply value of the SpawnTransform Parameter with the default scale in the actor's root component" },
		{ "OverrideRootScale.Comment", "/** Ignore the default scale in the actor's root component and hard-set it to the value of SpawnTransform Parameter */" },
		{ "OverrideRootScale.DisplayName", "Override Root Component Scale" },
		{ "OverrideRootScale.Name", "ESpawnActorScaleMethod::OverrideRootScale" },
		{ "OverrideRootScale.ToolTip", "Ignore the default scale in the actor's root component and hard-set it to the value of SpawnTransform Parameter" },
		{ "SelectDefaultAtRuntime.Hidden", "" },
		{ "SelectDefaultAtRuntime.Name", "ESpawnActorScaleMethod::SelectDefaultAtRuntime" },
		{ "ToolTip", "Determines how the transform being passed into actor spawning methods interact with the actor's default root component" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpawnActorScaleMethod::OverrideRootScale", (int64)ESpawnActorScaleMethod::OverrideRootScale },
		{ "ESpawnActorScaleMethod::MultiplyWithRoot", (int64)ESpawnActorScaleMethod::MultiplyWithRoot },
		{ "ESpawnActorScaleMethod::SelectDefaultAtRuntime", (int64)ESpawnActorScaleMethod::SelectDefaultAtRuntime },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESpawnActorScaleMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESpawnActorScaleMethod",
	"ESpawnActorScaleMethod",
	Z_Construct_UEnum_Engine_ESpawnActorScaleMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpawnActorScaleMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpawnActorScaleMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESpawnActorScaleMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESpawnActorScaleMethod()
{
	if (!Z_Registration_Info_UEnum_ESpawnActorScaleMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpawnActorScaleMethod.InnerSingleton, Z_Construct_UEnum_Engine_ESpawnActorScaleMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpawnActorScaleMethod.InnerSingleton;
}
// End Enum ESpawnActorScaleMethod

// Begin Enum ELevelInstanceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelInstanceType;
static UEnum* ELevelInstanceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELevelInstanceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELevelInstanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELevelInstanceType"));
	}
	return Z_Registration_Info_UEnum_ELevelInstanceType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceType>()
{
	return ELevelInstanceType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELevelInstanceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Determines in what type of LevelInstance the actor is in, if any. */" },
		{ "LevelInstance.Name", "ELevelInstanceType::LevelInstance" },
		{ "LevelInstanceEdit.Name", "ELevelInstanceType::LevelInstanceEdit" },
		{ "LevelInstancePropertyOverride.Name", "ELevelInstanceType::LevelInstancePropertyOverride" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "None.Name", "ELevelInstanceType::None" },
		{ "ToolTip", "Determines in what type of LevelInstance the actor is in, if any." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELevelInstanceType::None", (int64)ELevelInstanceType::None },
		{ "ELevelInstanceType::LevelInstance", (int64)ELevelInstanceType::LevelInstance },
		{ "ELevelInstanceType::LevelInstanceEdit", (int64)ELevelInstanceType::LevelInstanceEdit },
		{ "ELevelInstanceType::LevelInstancePropertyOverride", (int64)ELevelInstanceType::LevelInstancePropertyOverride },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELevelInstanceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELevelInstanceType",
	"ELevelInstanceType",
	Z_Construct_UEnum_Engine_ELevelInstanceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELevelInstanceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELevelInstanceType()
{
	if (!Z_Registration_Info_UEnum_ELevelInstanceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelInstanceType.InnerSingleton, Z_Construct_UEnum_Engine_ELevelInstanceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELevelInstanceType.InnerSingleton;
}
// End Enum ELevelInstanceType

// Begin Enum ELevelInstanceFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelInstanceFlags;
static UEnum* ELevelInstanceFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELevelInstanceFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELevelInstanceFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELevelInstanceFlags"));
	}
	return Z_Registration_Info_UEnum_ELevelInstanceFlags.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceFlags>()
{
	return ELevelInstanceFlags_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELevelInstanceFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HasEditablePropertyOverrides.Comment", "/** Actor has property overrides from a top level editable level instance */" },
		{ "HasEditablePropertyOverrides.Name", "ELevelInstanceFlags::HasEditablePropertyOverrides" },
		{ "HasEditablePropertyOverrides.ToolTip", "Actor has property overrides from a top level editable level instance" },
		{ "HasPropertyOverrides.Comment", "/** Actor has property overrides applied */" },
		{ "HasPropertyOverrides.Name", "ELevelInstanceFlags::HasPropertyOverrides" },
		{ "HasPropertyOverrides.ToolTip", "Actor has property overrides applied" },
		{ "IsInEditHierarchy.Comment", "/** Actor is inside an Level Instance editing hierarchy (used to show post process effect) */" },
		{ "IsInEditHierarchy.Name", "ELevelInstanceFlags::IsInEditHierarchy" },
		{ "IsInEditHierarchy.ToolTip", "Actor is inside an Level Instance editing hierarchy (used to show post process effect)" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "None.Name", "ELevelInstanceFlags::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELevelInstanceFlags::None", (int64)ELevelInstanceFlags::None },
		{ "ELevelInstanceFlags::IsInEditHierarchy", (int64)ELevelInstanceFlags::IsInEditHierarchy },
		{ "ELevelInstanceFlags::HasPropertyOverrides", (int64)ELevelInstanceFlags::HasPropertyOverrides },
		{ "ELevelInstanceFlags::HasEditablePropertyOverrides", (int64)ELevelInstanceFlags::HasEditablePropertyOverrides },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELevelInstanceFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELevelInstanceFlags",
	"ELevelInstanceFlags",
	Z_Construct_UEnum_Engine_ELevelInstanceFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELevelInstanceFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELevelInstanceFlags()
{
	if (!Z_Registration_Info_UEnum_ELevelInstanceFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelInstanceFlags.InnerSingleton, Z_Construct_UEnum_Engine_ELevelInstanceFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELevelInstanceFlags.InnerSingleton;
}
// End Enum ELevelInstanceFlags

// Begin Enum EActorGridPlacement
#if WITH_EDITORONLY_DATA
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorGridPlacement;
static UEnum* EActorGridPlacement_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActorGridPlacement.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActorGridPlacement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EActorGridPlacement, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EActorGridPlacement"));
	}
	return Z_Registration_Info_UEnum_EActorGridPlacement.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EActorGridPlacement>()
{
	return EActorGridPlacement_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EActorGridPlacement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysLoaded.Comment", "// Actor is always loaded (not placed in the grid), also affects editor.\n" },
		{ "AlwaysLoaded.Name", "EActorGridPlacement::AlwaysLoaded" },
		{ "AlwaysLoaded.ToolTip", "Actor is always loaded (not placed in the grid), also affects editor." },
		{ "Bounds.Comment", "// Actor uses its bounds to determine in which runtime cells it's going to be placed.\n" },
		{ "Bounds.Name", "EActorGridPlacement::Bounds" },
		{ "Bounds.ToolTip", "Actor uses its bounds to determine in which runtime cells it's going to be placed." },
		{ "Comment", "/** Enum defining how actor will be placed in the partition */" },
		{ "Location.Comment", "// Actor uses its location to determine in which runtime cells it's going to be placed.\n" },
		{ "Location.Name", "EActorGridPlacement::Location" },
		{ "Location.ToolTip", "Actor uses its location to determine in which runtime cells it's going to be placed." },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EActorGridPlacement::None" },
		{ "ToolTip", "Enum defining how actor will be placed in the partition" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActorGridPlacement::Bounds", (int64)EActorGridPlacement::Bounds },
		{ "EActorGridPlacement::Location", (int64)EActorGridPlacement::Location },
		{ "EActorGridPlacement::AlwaysLoaded", (int64)EActorGridPlacement::AlwaysLoaded },
		{ "EActorGridPlacement::None", (int64)EActorGridPlacement::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EActorGridPlacement_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EActorGridPlacement",
	"EActorGridPlacement",
	Z_Construct_UEnum_Engine_EActorGridPlacement_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EActorGridPlacement_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EActorGridPlacement_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EActorGridPlacement_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EActorGridPlacement()
{
	if (!Z_Registration_Info_UEnum_EActorGridPlacement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorGridPlacement.InnerSingleton, Z_Construct_UEnum_Engine_EActorGridPlacement_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActorGridPlacement.InnerSingleton;
}
#endif // WITH_EDITORONLY_DATA
// End Enum EActorGridPlacement

// Begin Delegate FTakeAnyDamageSignature
struct Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventTakeAnyDamageSignature_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate signatures\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Delegate signatures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeAnyDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "TakeAnyDamageSignature__DelegateSignature", "Actor", "OnTakeAnyDamage", Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::_Script_Engine_eventTakeAnyDamageSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::_Script_Engine_eventTakeAnyDamageSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTakeAnyDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakeAnyDamageSignature, AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	struct _Script_Engine_eventTakeAnyDamageSignature_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
	_Script_Engine_eventTakeAnyDamageSignature_Parms Parms;
	Parms.DamagedActor=DamagedActor;
	Parms.Damage=Damage;
	Parms.DamageType=DamageType;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	TakeAnyDamageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTakeAnyDamageSignature

// Begin Delegate FTakePointDamageSignature
struct Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventTakePointDamageSignature_Parms
	{
		AActor* DamagedActor;
		float Damage;
		AController* InstigatedBy;
		FVector HitLocation;
		UPrimitiveComponent* FHitComponent;
		FName BoneName;
		FVector ShotFromDirection;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FHitComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FHitComponent_MetaData), NewProp_FHitComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakePointDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_FHitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "TakePointDamageSignature__DelegateSignature", "Actor", "OnTakePointDamage", Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::_Script_Engine_eventTakePointDamageSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::_Script_Engine_eventTakePointDamageSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTakePointDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakePointDamageSignature, AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser)
{
	struct _Script_Engine_eventTakePointDamageSignature_Parms
	{
		AActor* DamagedActor;
		float Damage;
		AController* InstigatedBy;
		FVector HitLocation;
		UPrimitiveComponent* FHitComponent;
		FName BoneName;
		FVector ShotFromDirection;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
	_Script_Engine_eventTakePointDamageSignature_Parms Parms;
	Parms.DamagedActor=DamagedActor;
	Parms.Damage=Damage;
	Parms.InstigatedBy=InstigatedBy;
	Parms.HitLocation=HitLocation;
	Parms.FHitComponent=FHitComponent;
	Parms.BoneName=BoneName;
	Parms.ShotFromDirection=ShotFromDirection;
	Parms.DamageType=DamageType;
	Parms.DamageCauser=DamageCauser;
	TakePointDamageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTakePointDamageSignature

// Begin Delegate FTakeRadialDamageSignature
struct Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventTakeRadialDamageSignature_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		FVector Origin;
		FHitResult HitInfo;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventTakeRadialDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "TakeRadialDamageSignature__DelegateSignature", "Actor", "OnTakeRadialDamage", Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::_Script_Engine_eventTakeRadialDamageSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::_Script_Engine_eventTakeRadialDamageSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTakeRadialDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& TakeRadialDamageSignature, AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy, AActor* DamageCauser)
{
	struct _Script_Engine_eventTakeRadialDamageSignature_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		FVector Origin;
		FHitResult HitInfo;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
	_Script_Engine_eventTakeRadialDamageSignature_Parms Parms;
	Parms.DamagedActor=DamagedActor;
	Parms.Damage=Damage;
	Parms.DamageType=DamageType;
	Parms.Origin=Origin;
	Parms.HitInfo=HitInfo;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	TakeRadialDamageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTakeRadialDamageSignature

// Begin Delegate FActorBeginOverlapSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorBeginOverlapSignature_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginOverlapSignature_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginOverlapSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorBeginOverlapSignature__DelegateSignature", "Actor", "OnActorBeginOverlap", Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::_Script_Engine_eventActorBeginOverlapSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::_Script_Engine_eventActorBeginOverlapSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginOverlapSignature, AActor* OverlappedActor, AActor* OtherActor)
{
	struct _Script_Engine_eventActorBeginOverlapSignature_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
	_Script_Engine_eventActorBeginOverlapSignature_Parms Parms;
	Parms.OverlappedActor=OverlappedActor;
	Parms.OtherActor=OtherActor;
	ActorBeginOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorBeginOverlapSignature

// Begin Delegate FActorEndOverlapSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorEndOverlapSignature_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndOverlapSignature_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndOverlapSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorEndOverlapSignature__DelegateSignature", "Actor", "OnActorEndOverlap", Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::_Script_Engine_eventActorEndOverlapSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::_Script_Engine_eventActorEndOverlapSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndOverlapSignature, AActor* OverlappedActor, AActor* OtherActor)
{
	struct _Script_Engine_eventActorEndOverlapSignature_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
	_Script_Engine_eventActorEndOverlapSignature_Parms Parms;
	Parms.OverlappedActor=OverlappedActor;
	Parms.OtherActor=OtherActor;
	ActorEndOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorEndOverlapSignature

// Begin Delegate FActorHitSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorHitSignature_Parms
	{
		AActor* SelfActor;
		AActor* OtherActor;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorHitSignature_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorHitSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorHitSignature_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorHitSignature_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_SelfActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorHitSignature__DelegateSignature", "Actor", "OnActorHit", Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::_Script_Engine_eventActorHitSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::_Script_Engine_eventActorHitSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorHitSignature, AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult const& Hit)
{
	struct _Script_Engine_eventActorHitSignature_Parms
	{
		AActor* SelfActor;
		AActor* OtherActor;
		FVector NormalImpulse;
		FHitResult Hit;
	};
	_Script_Engine_eventActorHitSignature_Parms Parms;
	Parms.SelfActor=SelfActor;
	Parms.OtherActor=OtherActor;
	Parms.NormalImpulse=NormalImpulse;
	Parms.Hit=Hit;
	ActorHitSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorHitSignature

// Begin Delegate FActorBeginCursorOverSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorBeginCursorOverSignature_Parms
	{
		AActor* TouchedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginCursorOverSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::NewProp_TouchedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorBeginCursorOverSignature__DelegateSignature", "Actor", "OnBeginCursorOver", Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::_Script_Engine_eventActorBeginCursorOverSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::_Script_Engine_eventActorBeginCursorOverSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorBeginCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginCursorOverSignature, AActor* TouchedActor)
{
	struct _Script_Engine_eventActorBeginCursorOverSignature_Parms
	{
		AActor* TouchedActor;
	};
	_Script_Engine_eventActorBeginCursorOverSignature_Parms Parms;
	Parms.TouchedActor=TouchedActor;
	ActorBeginCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorBeginCursorOverSignature

// Begin Delegate FActorEndCursorOverSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorEndCursorOverSignature_Parms
	{
		AActor* TouchedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndCursorOverSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::NewProp_TouchedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorEndCursorOverSignature__DelegateSignature", "Actor", "OnEndCursorOver", Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::_Script_Engine_eventActorEndCursorOverSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::_Script_Engine_eventActorEndCursorOverSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorEndCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndCursorOverSignature, AActor* TouchedActor)
{
	struct _Script_Engine_eventActorEndCursorOverSignature_Parms
	{
		AActor* TouchedActor;
	};
	_Script_Engine_eventActorEndCursorOverSignature_Parms Parms;
	Parms.TouchedActor=TouchedActor;
	ActorEndCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorEndCursorOverSignature

// Begin Delegate FActorOnClickedSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorOnClickedSignature_Parms
	{
		AActor* TouchedActor;
		FKey ButtonPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnClickedSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnClickedSignature_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::NewProp_TouchedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::NewProp_ButtonPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorOnClickedSignature__DelegateSignature", "Actor", "OnClicked", Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::_Script_Engine_eventActorOnClickedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::_Script_Engine_eventActorOnClickedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorOnClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnClickedSignature, AActor* TouchedActor, FKey ButtonPressed)
{
	struct _Script_Engine_eventActorOnClickedSignature_Parms
	{
		AActor* TouchedActor;
		FKey ButtonPressed;
	};
	_Script_Engine_eventActorOnClickedSignature_Parms Parms;
	Parms.TouchedActor=TouchedActor;
	Parms.ButtonPressed=ButtonPressed;
	ActorOnClickedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorOnClickedSignature

// Begin Delegate FActorOnReleasedSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorOnReleasedSignature_Parms
	{
		AActor* TouchedActor;
		FKey ButtonReleased;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonReleased;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnReleasedSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::NewProp_ButtonReleased = { "ButtonReleased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnReleasedSignature_Parms, ButtonReleased), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::NewProp_TouchedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::NewProp_ButtonReleased,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorOnReleasedSignature__DelegateSignature", "Actor", "OnReleased", Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::_Script_Engine_eventActorOnReleasedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::_Script_Engine_eventActorOnReleasedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorOnReleasedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnReleasedSignature, AActor* TouchedActor, FKey ButtonReleased)
{
	struct _Script_Engine_eventActorOnReleasedSignature_Parms
	{
		AActor* TouchedActor;
		FKey ButtonReleased;
	};
	_Script_Engine_eventActorOnReleasedSignature_Parms Parms;
	Parms.TouchedActor=TouchedActor;
	Parms.ButtonReleased=ButtonReleased;
	ActorOnReleasedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorOnReleasedSignature

// Begin Delegate FActorOnInputTouchBeginSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorOnInputTouchBeginSignature_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		AActor* TouchedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnInputTouchBeginSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnInputTouchBeginSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::NewProp_TouchedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorOnInputTouchBeginSignature__DelegateSignature", "Actor", "OnInputTouchBegin", Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::_Script_Engine_eventActorOnInputTouchBeginSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::_Script_Engine_eventActorOnInputTouchBeginSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorOnInputTouchBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnInputTouchBeginSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor)
{
	struct _Script_Engine_eventActorOnInputTouchBeginSignature_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		AActor* TouchedActor;
	};
	_Script_Engine_eventActorOnInputTouchBeginSignature_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	Parms.TouchedActor=TouchedActor;
	ActorOnInputTouchBeginSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorOnInputTouchBeginSignature

// Begin Delegate FActorOnInputTouchEndSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorOnInputTouchEndSignature_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		AActor* TouchedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnInputTouchEndSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorOnInputTouchEndSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::NewProp_TouchedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorOnInputTouchEndSignature__DelegateSignature", "Actor", "OnInputTouchEnd", Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::_Script_Engine_eventActorOnInputTouchEndSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::_Script_Engine_eventActorOnInputTouchEndSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorOnInputTouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorOnInputTouchEndSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor)
{
	struct _Script_Engine_eventActorOnInputTouchEndSignature_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		AActor* TouchedActor;
	};
	_Script_Engine_eventActorOnInputTouchEndSignature_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	Parms.TouchedActor=TouchedActor;
	ActorOnInputTouchEndSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorOnInputTouchEndSignature

// Begin Delegate FActorBeginTouchOverSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorBeginTouchOverSignature_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		AActor* TouchedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginTouchOverSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorBeginTouchOverSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::NewProp_TouchedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorBeginTouchOverSignature__DelegateSignature", "Actor", "OnInputTouchEnter", Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::_Script_Engine_eventActorBeginTouchOverSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::_Script_Engine_eventActorBeginTouchOverSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorBeginTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorBeginTouchOverSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor)
{
	struct _Script_Engine_eventActorBeginTouchOverSignature_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		AActor* TouchedActor;
	};
	_Script_Engine_eventActorBeginTouchOverSignature_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	Parms.TouchedActor=TouchedActor;
	ActorBeginTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorBeginTouchOverSignature

// Begin Delegate FActorEndTouchOverSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorEndTouchOverSignature_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		AActor* TouchedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndTouchOverSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndTouchOverSignature_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::NewProp_TouchedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorEndTouchOverSignature__DelegateSignature", "Actor", "OnInputTouchLeave", Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::_Script_Engine_eventActorEndTouchOverSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::_Script_Engine_eventActorEndTouchOverSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorEndTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndTouchOverSignature, ETouchIndex::Type FingerIndex, AActor* TouchedActor)
{
	struct _Script_Engine_eventActorEndTouchOverSignature_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		AActor* TouchedActor;
	};
	_Script_Engine_eventActorEndTouchOverSignature_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	Parms.TouchedActor=TouchedActor;
	ActorEndTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorEndTouchOverSignature

// Begin Delegate FActorDestroyedSignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorDestroyedSignature_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorDestroyedSignature_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorDestroyedSignature__DelegateSignature", "Actor", "OnDestroyed", Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::_Script_Engine_eventActorDestroyedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::_Script_Engine_eventActorDestroyedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorDestroyedSignature, AActor* DestroyedActor)
{
	struct _Script_Engine_eventActorDestroyedSignature_Parms
	{
		AActor* DestroyedActor;
	};
	_Script_Engine_eventActorDestroyedSignature_Parms Parms;
	Parms.DestroyedActor=DestroyedActor;
	ActorDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorDestroyedSignature

// Begin Delegate FActorEndPlaySignature
struct Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventActorEndPlaySignature_Parms
	{
		AActor* Actor;
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndPlaySignature_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventActorEndPlaySignature_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorEndPlaySignature__DelegateSignature", "Actor", "OnEndPlay", Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::_Script_Engine_eventActorEndPlaySignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::_Script_Engine_eventActorEndPlaySignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorEndPlaySignature_DelegateWrapper(const FMulticastScriptDelegate& ActorEndPlaySignature, AActor* Actor, EEndPlayReason::Type EndPlayReason)
{
	struct _Script_Engine_eventActorEndPlaySignature_Parms
	{
		AActor* Actor;
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
	_Script_Engine_eventActorEndPlaySignature_Parms Parms;
	Parms.Actor=Actor;
	Parms.EndPlayReason=EndPlayReason;
	ActorEndPlaySignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorEndPlaySignature

// Begin Class AActor Function ActorHasTag
struct Z_Construct_UFunction_AActor_ActorHasTag_Statics
{
	struct Actor_eventActorHasTag_Parms
	{
		FName Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** See if this actor's Tags array contains the supplied name tag */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "See if this actor's Tags array contains the supplied name tag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventActorHasTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventActorHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventActorHasTag_Parms), &Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ActorHasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ActorHasTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ActorHasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ActorHasTag", nullptr, nullptr, Z_Construct_UFunction_AActor_ActorHasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ActorHasTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_ActorHasTag_Statics::Actor_eventActorHasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ActorHasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ActorHasTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_ActorHasTag_Statics::Actor_eventActorHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ActorHasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ActorHasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execActorHasTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActorHasTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class AActor Function ActorHasTag

// Begin Class AActor Function AddComponent
struct Z_Construct_UFunction_AActor_AddComponent_Statics
{
	struct Actor_eventAddComponent_Parms
	{
		FName TemplateName;
		bool bManualAttachment;
		FTransform RelativeTransform;
		const UObject* ComponentTemplateContext;
		bool bDeferredFinish;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** \n\x09 * Creates a new component and assigns ownership to the Actor this is \n\x09 * called for. Automatic attachment causes the first component created to \n\x09 * become the root, and all subsequent components to be attached under that \n\x09 * root. When bManualAttachment is set, automatic attachment is \n\x09 * skipped and it is up to the user to attach the resulting component (or \n\x09 * set it up as the root) themselves.\n\x09 *\n\x09 * @see UK2Node_AddComponent\x09""DO NOT CALL MANUALLY - BLUEPRINT INTERNAL USE ONLY (for Add Component nodes)\n\x09 *\n\x09 * @param TemplateName\x09\x09\x09\x09\x09The name of the Component Template to use.\n\x09 * @param bManualAttachment\x09\x09\x09\x09Whether manual or automatic attachment is to be used\n\x09 * @param RelativeTransform\x09\x09\x09\x09The relative transform between the new component and its attach parent (automatic only)\n\x09 * @param ComponentTemplateContext\x09\x09Optional UBlueprintGeneratedClass reference to use to find the template in. If null (or not a BPGC), component is sought in this Actor's class\n\x09 * @param bDeferredFinish\x09\x09\x09\x09Whether or not to immediately complete the creation and registration process for this component. Will be false if there are expose on spawn properties being set\n\x09 */" },
		{ "CPP_Default_bDeferredFinish", "false" },
		{ "DefaultToSelf", "ComponentTemplateContext" },
		{ "InternalUseParam", "ComponentTemplateContext,bDeferredFinish" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
		{ "ToolTip", "Creates a new component and assigns ownership to the Actor this is\ncalled for. Automatic attachment causes the first component created to\nbecome the root, and all subsequent components to be attached under that\nroot. When bManualAttachment is set, automatic attachment is\nskipped and it is up to the user to attach the resulting component (or\nset it up as the root) themselves.\n\n@see UK2Node_AddComponent    DO NOT CALL MANUALLY - BLUEPRINT INTERNAL USE ONLY (for Add Component nodes)\n\n@param TemplateName                                  The name of the Component Template to use.\n@param bManualAttachment                             Whether manual or automatic attachment is to be used\n@param RelativeTransform                             The relative transform between the new component and its attach parent (automatic only)\n@param ComponentTemplateContext              Optional UBlueprintGeneratedClass reference to use to find the template in. If null (or not a BPGC), component is sought in this Actor's class\n@param bDeferredFinish                               Whether or not to immediately complete the creation and registration process for this component. Will be false if there are expose on spawn properties being set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TemplateName;
	static void NewProp_bManualAttachment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualAttachment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplateContext;
	static void NewProp_bDeferredFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferredFinish;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_TemplateName = { "TemplateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventAddComponent_Parms, TemplateName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bManualAttachment_SetBit(void* Obj)
{
	((Actor_eventAddComponent_Parms*)Obj)->bManualAttachment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bManualAttachment = { "bManualAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventAddComponent_Parms), &Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bManualAttachment_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventAddComponent_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransform_MetaData), NewProp_RelativeTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ComponentTemplateContext = { "ComponentTemplateContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventAddComponent_Parms, ComponentTemplateContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTemplateContext_MetaData), NewProp_ComponentTemplateContext_MetaData) };
void Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bDeferredFinish_SetBit(void* Obj)
{
	((Actor_eventAddComponent_Parms*)Obj)->bDeferredFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bDeferredFinish = { "bDeferredFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventAddComponent_Parms), &Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bDeferredFinish_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventAddComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_AddComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_TemplateName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bManualAttachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_RelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ComponentTemplateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bDeferredFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_AddComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "AddComponent", nullptr, nullptr, Z_Construct_UFunction_AActor_AddComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_AddComponent_Statics::Actor_eventAddComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_AddComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_AddComponent_Statics::Actor_eventAddComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_AddComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_AddComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execAddComponent)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TemplateName);
	P_GET_UBOOL(Z_Param_bManualAttachment);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform);
	P_GET_OBJECT(UObject,Z_Param_ComponentTemplateContext);
	P_GET_UBOOL(Z_Param_bDeferredFinish);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->AddComponent(Z_Param_TemplateName,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform,Z_Param_ComponentTemplateContext,Z_Param_bDeferredFinish);
	P_NATIVE_END;
}
// End Class AActor Function AddComponent

// Begin Class AActor Function AddComponentByClass
struct Z_Construct_UFunction_AActor_AddComponentByClass_Statics
{
	struct Actor_eventAddComponentByClass_Parms
	{
		TSubclassOf<UActorComponent> Class;
		bool bManualAttachment;
		FTransform RelativeTransform;
		bool bDeferredFinish;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/**\n\x09 * Creates a new component and assigns ownership to the Actor this is\n\x09 * called for. Automatic attachment causes the first component created to\n\x09 * become the root, and all subsequent components to be attached under that\n\x09 * root. When bManualAttachment is set, automatic attachment is\n\x09 * skipped and it is up to the user to attach the resulting component (or\n\x09 * set it up as the root) themselves.\n\x09 *\n\x09 * @see UK2Node_AddComponentByClass\x09\x09""DO NOT CALL MANUALLY - BLUEPRINT INTERNAL USE ONLY (for Add Component nodes)\n\x09 *\n\x09 * @param Class\x09\x09\x09\x09\x09\x09The class of component to create\n\x09 * @param bManualAttachment\x09\x09\x09\x09Whether manual or automatic attachment is to be used\n\x09 * @param RelativeTransform\x09\x09\x09\x09The relative transform between the new component and its attach parent (automatic only)\n\x09 * @param bDeferredFinish\x09\x09\x09\x09Whether or not to immediately complete the creation and registration process for this component. Will be false if there are expose on spawn properties being set\n\x09 */" },
		{ "InternalUseParam", "bDeferredFinish" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
		{ "ToolTip", "Creates a new component and assigns ownership to the Actor this is\ncalled for. Automatic attachment causes the first component created to\nbecome the root, and all subsequent components to be attached under that\nroot. When bManualAttachment is set, automatic attachment is\nskipped and it is up to the user to attach the resulting component (or\nset it up as the root) themselves.\n\n@see UK2Node_AddComponentByClass             DO NOT CALL MANUALLY - BLUEPRINT INTERNAL USE ONLY (for Add Component nodes)\n\n@param Class                                         The class of component to create\n@param bManualAttachment                             Whether manual or automatic attachment is to be used\n@param RelativeTransform                             The relative transform between the new component and its attach parent (automatic only)\n@param bDeferredFinish                               Whether or not to immediately complete the creation and registration process for this component. Will be false if there are expose on spawn properties being set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_bManualAttachment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualAttachment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static void NewProp_bDeferredFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferredFinish;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventAddComponentByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
void Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bManualAttachment_SetBit(void* Obj)
{
	((Actor_eventAddComponentByClass_Parms*)Obj)->bManualAttachment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bManualAttachment = { "bManualAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventAddComponentByClass_Parms), &Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bManualAttachment_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventAddComponentByClass_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransform_MetaData), NewProp_RelativeTransform_MetaData) };
void Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bDeferredFinish_SetBit(void* Obj)
{
	((Actor_eventAddComponentByClass_Parms*)Obj)->bDeferredFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bDeferredFinish = { "bDeferredFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventAddComponentByClass_Parms), &Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bDeferredFinish_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventAddComponentByClass_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_AddComponentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bManualAttachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_RelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bDeferredFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_AddComponentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "AddComponentByClass", nullptr, nullptr, Z_Construct_UFunction_AActor_AddComponentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_AddComponentByClass_Statics::Actor_eventAddComponentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddComponentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_AddComponentByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_AddComponentByClass_Statics::Actor_eventAddComponentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_AddComponentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_AddComponentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execAddComponentByClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_UBOOL(Z_Param_bManualAttachment);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform);
	P_GET_UBOOL(Z_Param_bDeferredFinish);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->AddComponentByClass(Z_Param_Class,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform,Z_Param_bDeferredFinish);
	P_NATIVE_END;
}
// End Class AActor Function AddComponentByClass

// Begin Class AActor Function AddTickPrerequisiteActor
struct Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics
{
	struct Actor_eventAddTickPrerequisiteActor_Parms
	{
		AActor* PrerequisiteActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/** Make this actor tick after PrerequisiteActor. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Make this actor tick after PrerequisiteActor. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor = { "PrerequisiteActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventAddTickPrerequisiteActor_Parms, PrerequisiteActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "AddTickPrerequisiteActor", nullptr, nullptr, Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::Actor_eventAddTickPrerequisiteActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::Actor_eventAddTickPrerequisiteActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_AddTickPrerequisiteActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execAddTickPrerequisiteActor)
{
	P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTickPrerequisiteActor(Z_Param_PrerequisiteActor);
	P_NATIVE_END;
}
// End Class AActor Function AddTickPrerequisiteActor

// Begin Class AActor Function AddTickPrerequisiteComponent
struct Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics
{
	struct Actor_eventAddTickPrerequisiteComponent_Parms
	{
		UActorComponent* PrerequisiteComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/** Make this actor tick after PrerequisiteComponent. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Make this actor tick after PrerequisiteComponent. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent = { "PrerequisiteComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventAddTickPrerequisiteComponent_Parms, PrerequisiteComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerequisiteComponent_MetaData), NewProp_PrerequisiteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "AddTickPrerequisiteComponent", nullptr, nullptr, Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::Actor_eventAddTickPrerequisiteComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::Actor_eventAddTickPrerequisiteComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execAddTickPrerequisiteComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTickPrerequisiteComponent(Z_Param_PrerequisiteComponent);
	P_NATIVE_END;
}
// End Class AActor Function AddTickPrerequisiteComponent

// Begin Class AActor Function CanTriggerResimulation
struct Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics
{
	struct Actor_eventCanTriggerResimulation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Can this body trigger a resimulation when Physics Prediction is enabled */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Can this body trigger a resimulation when Physics Prediction is enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventCanTriggerResimulation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventCanTriggerResimulation_Parms), &Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "CanTriggerResimulation", nullptr, nullptr, Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::Actor_eventCanTriggerResimulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::Actor_eventCanTriggerResimulation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_CanTriggerResimulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execCanTriggerResimulation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanTriggerResimulation();
	P_NATIVE_END;
}
// End Class AActor Function CanTriggerResimulation

// Begin Class AActor Function CreateInputComponent
struct Z_Construct_UFunction_AActor_CreateInputComponent_Statics
{
	struct Actor_eventCreateInputComponent_Parms
	{
		TSubclassOf<UInputComponent> InputComponentToCreate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** \n\x09 * Creates an input component from the input component passed in\n\x09 * @param InputComponentToCreate The UInputComponent to create.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Creates an input component from the input component passed in\n@param InputComponentToCreate The UInputComponent to create." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InputComponentToCreate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_CreateInputComponent_Statics::NewProp_InputComponentToCreate = { "InputComponentToCreate", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventCreateInputComponent_Parms, InputComponentToCreate), Z_Construct_UClass_UClass, Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_CreateInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_CreateInputComponent_Statics::NewProp_InputComponentToCreate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_CreateInputComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_CreateInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "CreateInputComponent", nullptr, nullptr, Z_Construct_UFunction_AActor_CreateInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_CreateInputComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_CreateInputComponent_Statics::Actor_eventCreateInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_CreateInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_CreateInputComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_CreateInputComponent_Statics::Actor_eventCreateInputComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_CreateInputComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_CreateInputComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execCreateInputComponent)
{
	P_GET_OBJECT(UClass,Z_Param_InputComponentToCreate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateInputComponent(Z_Param_InputComponentToCreate);
	P_NATIVE_END;
}
// End Class AActor Function CreateInputComponent

// Begin Class AActor Function DetachRootComponentFromParent
struct Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics
{
	struct Actor_eventDetachRootComponentFromParent_Parms
	{
		bool bMaintainWorldPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "CPP_Default_bMaintainWorldPosition", "true" },
		{ "DisplayName", "DetachActorFromActor (Deprecated)" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMaintainWorldPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainWorldPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::NewProp_bMaintainWorldPosition_SetBit(void* Obj)
{
	((Actor_eventDetachRootComponentFromParent_Parms*)Obj)->bMaintainWorldPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::NewProp_bMaintainWorldPosition = { "bMaintainWorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventDetachRootComponentFromParent_Parms), &Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::NewProp_bMaintainWorldPosition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::NewProp_bMaintainWorldPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "DetachRootComponentFromParent", nullptr, nullptr, Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::Actor_eventDetachRootComponentFromParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::Actor_eventDetachRootComponentFromParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_DetachRootComponentFromParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execDetachRootComponentFromParent)
{
	P_GET_UBOOL(Z_Param_bMaintainWorldPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetachRootComponentFromParent(Z_Param_bMaintainWorldPosition);
	P_NATIVE_END;
}
// End Class AActor Function DetachRootComponentFromParent

// Begin Class AActor Function DisableInput
struct Z_Construct_UFunction_AActor_DisableInput_Statics
{
	struct Actor_eventDisableInput_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** \n\x09 * Removes this actor from the stack of input being handled by a PlayerController.\n\x09 * @param PlayerController The PlayerController whose input events we no longer want to receive. If null, this actor will stop receiving input from all PlayerControllers.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Removes this actor from the stack of input being handled by a PlayerController.\n@param PlayerController The PlayerController whose input events we no longer want to receive. If null, this actor will stop receiving input from all PlayerControllers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_DisableInput_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventDisableInput_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_DisableInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_DisableInput_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DisableInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_DisableInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "DisableInput", nullptr, nullptr, Z_Construct_UFunction_AActor_DisableInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DisableInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_DisableInput_Statics::Actor_eventDisableInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_DisableInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_DisableInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_DisableInput_Statics::Actor_eventDisableInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_DisableInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_DisableInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execDisableInput)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableInput(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class AActor Function DisableInput

// Begin Class AActor Function EnableInput
struct Z_Construct_UFunction_AActor_EnableInput_Statics
{
	struct Actor_eventEnableInput_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** \n\x09 * Pushes this actor on to the stack of input being handled by a PlayerController.\n\x09 * @param PlayerController The PlayerController whose input events we want to receive.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Pushes this actor on to the stack of input being handled by a PlayerController.\n@param PlayerController The PlayerController whose input events we want to receive." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_EnableInput_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventEnableInput_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_EnableInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_EnableInput_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_EnableInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_EnableInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "EnableInput", nullptr, nullptr, Z_Construct_UFunction_AActor_EnableInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_EnableInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_EnableInput_Statics::Actor_eventEnableInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_EnableInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_EnableInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_EnableInput_Statics::Actor_eventEnableInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_EnableInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_EnableInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execEnableInput)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableInput(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class AActor Function EnableInput

// Begin Class AActor Function FindComponentByTag
struct Z_Construct_UFunction_AActor_FindComponentByTag_Statics
{
	struct Actor_eventFindComponentByTag_Parms
	{
		TSubclassOf<UActorComponent> ComponentClass;
		FName Tag;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Searches components array and returns first encountered component with a given tag. */" },
		{ "ComponentClass", "/Script/Engine.ActorComponent" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Searches components array and returns first encountered component with a given tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_FindComponentByTag_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventFindComponentByTag_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_FindComponentByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventFindComponentByTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_FindComponentByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventFindComponentByTag_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_FindComponentByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_FindComponentByTag_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_FindComponentByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_FindComponentByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_FindComponentByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_FindComponentByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "FindComponentByTag", nullptr, nullptr, Z_Construct_UFunction_AActor_FindComponentByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_FindComponentByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_FindComponentByTag_Statics::Actor_eventFindComponentByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_FindComponentByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_FindComponentByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_FindComponentByTag_Statics::Actor_eventFindComponentByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_FindComponentByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_FindComponentByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execFindComponentByTag)
{
	P_GET_OBJECT(UClass,Z_Param_ComponentClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->FindComponentByTag(Z_Param_ComponentClass,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class AActor Function FindComponentByTag

// Begin Class AActor Function FinishAddComponent
struct Z_Construct_UFunction_AActor_FinishAddComponent_Statics
{
	struct Actor_eventFinishAddComponent_Parms
	{
		UActorComponent* Component;
		bool bManualAttachment;
		FTransform RelativeTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** \n\x09 * Completes the creation of a new actor component. Called either from blueprint after\n\x09 * expose on spawn properties are set, or directly from AddComponent\n\x09 *\n\x09 * @see UK2Node_AddComponent\x09""DO NOT CALL MANUALLY - BLUEPRINT INTERNAL USE ONLY (for Add Component nodes)\n\x09 *\n\x09 * @param Component\x09\x09\x09\x09\x09\x09The component created in AddComponent to finish creation of\n\x09 * @param bManualAttachment\x09\x09\x09\x09Whether manual or automatic attachment is to be used\n\x09 * @param RelativeTransform\x09\x09\x09\x09The relative transform between the new component and its attach parent (automatic only)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Completes the creation of a new actor component. Called either from blueprint after\nexpose on spawn properties are set, or directly from AddComponent\n\n@see UK2Node_AddComponent    DO NOT CALL MANUALLY - BLUEPRINT INTERNAL USE ONLY (for Add Component nodes)\n\n@param Component                                             The component created in AddComponent to finish creation of\n@param bManualAttachment                             Whether manual or automatic attachment is to be used\n@param RelativeTransform                             The relative transform between the new component and its attach parent (automatic only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static void NewProp_bManualAttachment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualAttachment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_FinishAddComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventFinishAddComponent_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
void Z_Construct_UFunction_AActor_FinishAddComponent_Statics::NewProp_bManualAttachment_SetBit(void* Obj)
{
	((Actor_eventFinishAddComponent_Parms*)Obj)->bManualAttachment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_FinishAddComponent_Statics::NewProp_bManualAttachment = { "bManualAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventFinishAddComponent_Parms), &Z_Construct_UFunction_AActor_FinishAddComponent_Statics::NewProp_bManualAttachment_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_FinishAddComponent_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventFinishAddComponent_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransform_MetaData), NewProp_RelativeTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_FinishAddComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_FinishAddComponent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_FinishAddComponent_Statics::NewProp_bManualAttachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_FinishAddComponent_Statics::NewProp_RelativeTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_FinishAddComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_FinishAddComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "FinishAddComponent", nullptr, nullptr, Z_Construct_UFunction_AActor_FinishAddComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_FinishAddComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_FinishAddComponent_Statics::Actor_eventFinishAddComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_FinishAddComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_FinishAddComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_FinishAddComponent_Statics::Actor_eventFinishAddComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_FinishAddComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_FinishAddComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execFinishAddComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_Component);
	P_GET_UBOOL(Z_Param_bManualAttachment);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishAddComponent(Z_Param_Component,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform);
	P_NATIVE_END;
}
// End Class AActor Function FinishAddComponent

// Begin Class AActor Function FlushNetDormancy
struct Z_Construct_UFunction_AActor_FlushNetDormancy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Forces dormant actor to replicate but doesn't change NetDormancy state (i.e., they will go dormant again if left dormant) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Forces dormant actor to replicate but doesn't change NetDormancy state (i.e., they will go dormant again if left dormant)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "FlushNetDormancy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020407, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_FlushNetDormancy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execFlushNetDormancy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlushNetDormancy();
	P_NATIVE_END;
}
// End Class AActor Function FlushNetDormancy

// Begin Class AActor Function ForceNetUpdate
struct Z_Construct_UFunction_AActor_ForceNetUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Force actor to be updated to clients/demo net drivers */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Force actor to be updated to clients/demo net drivers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ForceNetUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_ForceNetUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execForceNetUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceNetUpdate();
	P_NATIVE_END;
}
// End Class AActor Function ForceNetUpdate

// Begin Class AActor Function GetActorBounds
struct Z_Construct_UFunction_AActor_GetActorBounds_Statics
{
	struct Actor_eventGetActorBounds_Parms
	{
		bool bOnlyCollidingComponents;
		FVector Origin;
		FVector BoxExtent;
		bool bIncludeFromChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Returns the bounding box of all components that make up this Actor (excluding ChildActorComponents).\n\x09 * @param\x09""bOnlyCollidingComponents\x09If true, will only return the bounding box for components with collision enabled.\n\x09 * @param\x09Origin\x09\x09\x09\x09\x09\x09Set to the center of the actor in world space\n\x09 * @param\x09""BoxExtent\x09\x09\x09\x09\x09Set to half the actor's size in 3d space\n\x09 * @param\x09""bIncludeFromChildActors\x09\x09If true then recurse in to ChildActor components \n\x09 */" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "DisplayName", "Get Actor Bounds" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the bounding box of all components that make up this Actor (excluding ChildActorComponents).\n@param       bOnlyCollidingComponents        If true, will only return the bounding box for components with collision enabled.\n@param       Origin                                          Set to the center of the actor in world space\n@param       BoxExtent                                       Set to half the actor's size in 3d space\n@param       bIncludeFromChildActors         If true then recurse in to ChildActor components" },
	};
#endif // WITH_METADATA
	static void NewProp_bOnlyCollidingComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyCollidingComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
	static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bOnlyCollidingComponents_SetBit(void* Obj)
{
	((Actor_eventGetActorBounds_Parms*)Obj)->bOnlyCollidingComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bOnlyCollidingComponents = { "bOnlyCollidingComponents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventGetActorBounds_Parms), &Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bOnlyCollidingComponents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorBounds_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
{
	((Actor_eventGetActorBounds_Parms*)Obj)->bIncludeFromChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventGetActorBounds_Parms), &Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bOnlyCollidingComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_BoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bIncludeFromChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorBounds", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorBounds_Statics::Actor_eventGetActorBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorBounds_Statics::Actor_eventGetActorBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorBounds)
{
	P_GET_UBOOL(Z_Param_bOnlyCollidingComponents);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent);
	P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetActorBounds(Z_Param_bOnlyCollidingComponents,Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_bIncludeFromChildActors);
	P_NATIVE_END;
}
// End Class AActor Function GetActorBounds

// Begin Class AActor Function GetActorEnableCollision
struct Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics
{
	struct Actor_eventGetActorEnableCollision_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Get current state of collision for the whole actor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get current state of collision for the whole actor" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventGetActorEnableCollision_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventGetActorEnableCollision_Parms), &Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorEnableCollision", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::Actor_eventGetActorEnableCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::Actor_eventGetActorEnableCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorEnableCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorEnableCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetActorEnableCollision();
	P_NATIVE_END;
}
// End Class AActor Function GetActorEnableCollision

// Begin Class AActor Function GetActorEyesViewPoint
struct Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics
{
	struct Actor_eventGetActorEyesViewPoint_Parms
	{
		FVector OutLocation;
		FRotator OutRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * Returns the point of view of the actor.\n\x09 * Note that this doesn't mean the camera, but the 'eyes' of the actor.\n\x09 * For example, for a Pawn, this would define the eye height location,\n\x09 * and view rotation (which is different from the pawn rotation which has a zeroed pitch component).\n\x09 * A camera first person view will typically use this view point. Most traces (weapon, AI) will be done from this view point.\n\x09 *\n\x09 * @param\x09OutLocation - location of view point\n\x09 * @param\x09OutRotation - view rotation of actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the point of view of the actor.\nNote that this doesn't mean the camera, but the 'eyes' of the actor.\nFor example, for a Pawn, this would define the eye height location,\nand view rotation (which is different from the pawn rotation which has a zeroed pitch component).\nA camera first person view will typically use this view point. Most traces (weapon, AI) will be done from this view point.\n\n@param       OutLocation - location of view point\n@param       OutRotation - view rotation of actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorEyesViewPoint_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorEyesViewPoint_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::NewProp_OutLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::NewProp_OutRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorEyesViewPoint", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::Actor_eventGetActorEyesViewPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::Actor_eventGetActorEyesViewPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorEyesViewPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorEyesViewPoint)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetActorEyesViewPoint(Z_Param_Out_OutLocation,Z_Param_Out_OutRotation);
	P_NATIVE_END;
}
// End Class AActor Function GetActorEyesViewPoint

// Begin Class AActor Function GetActorForwardVector
struct Z_Construct_UFunction_AActor_GetActorForwardVector_Statics
{
	struct Actor_eventGetActorForwardVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Get the forward (X) vector (length 1.0) from this Actor, in world space.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the forward (X) vector (length 1.0) from this Actor, in world space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorForwardVector", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::Actor_eventGetActorForwardVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::Actor_eventGetActorForwardVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorForwardVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorForwardVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetActorForwardVector();
	P_NATIVE_END;
}
// End Class AActor Function GetActorForwardVector

// Begin Class AActor Function GetActorLabel
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_GetActorLabel_Statics
{
	struct Actor_eventGetActorLabel_Parms
	{
		bool bCreateIfNone;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns this actor's current label.  Actor labels are only available in development builds. */" },
		{ "CPP_Default_bCreateIfNone", "true" },
		{ "KeyWords", "Display Name" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns this actor's current label.  Actor labels are only available in development builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bCreateIfNone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNone;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_bCreateIfNone_SetBit(void* Obj)
{
	((Actor_eventGetActorLabel_Parms*)Obj)->bCreateIfNone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_bCreateIfNone = { "bCreateIfNone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventGetActorLabel_Parms), &Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_bCreateIfNone_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorLabel_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_bCreateIfNone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorLabel", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorLabel_Statics::Actor_eventGetActorLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorLabel_Statics::Actor_eventGetActorLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execGetActorLabel)
{
	P_GET_UBOOL(Z_Param_bCreateIfNone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetActorLabel(Z_Param_bCreateIfNone);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function GetActorLabel

// Begin Class AActor Function GetActorRelativeScale3D
struct Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics
{
	struct Actor_eventGetActorRelativeScale3D_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Return the actor's relative scale 3d */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Return the actor's relative scale 3d" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorRelativeScale3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorRelativeScale3D", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::Actor_eventGetActorRelativeScale3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::Actor_eventGetActorRelativeScale3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorRelativeScale3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorRelativeScale3D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetActorRelativeScale3D();
	P_NATIVE_END;
}
// End Class AActor Function GetActorRelativeScale3D

// Begin Class AActor Function GetActorRightVector
struct Z_Construct_UFunction_AActor_GetActorRightVector_Statics
{
	struct Actor_eventGetActorRightVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Get the right (Y) vector (length 1.0) from this Actor, in world space.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the right (Y) vector (length 1.0) from this Actor, in world space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorRightVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorRightVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRightVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorRightVector", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRightVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorRightVector_Statics::Actor_eventGetActorRightVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorRightVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorRightVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorRightVector_Statics::Actor_eventGetActorRightVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorRightVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorRightVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorRightVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetActorRightVector();
	P_NATIVE_END;
}
// End Class AActor Function GetActorRightVector

// Begin Class AActor Function GetActorScale3D
struct Z_Construct_UFunction_AActor_GetActorScale3D_Statics
{
	struct Actor_eventGetActorScale3D_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the Actor's world-space scale. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the Actor's world-space scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorScale3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorScale3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorScale3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorScale3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorScale3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorScale3D", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorScale3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorScale3D_Statics::Actor_eventGetActorScale3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorScale3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorScale3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorScale3D_Statics::Actor_eventGetActorScale3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorScale3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorScale3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorScale3D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetActorScale3D();
	P_NATIVE_END;
}
// End Class AActor Function GetActorScale3D

// Begin Class AActor Function GetActorTickInterval
struct Z_Construct_UFunction_AActor_GetActorTickInterval_Statics
{
	struct Actor_eventGetActorTickInterval_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/**  Returns the tick interval of this actor's primary tick function */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the tick interval of this actor's primary tick function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorTickInterval_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorTickInterval", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::Actor_eventGetActorTickInterval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::Actor_eventGetActorTickInterval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorTickInterval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorTickInterval)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetActorTickInterval();
	P_NATIVE_END;
}
// End Class AActor Function GetActorTickInterval

// Begin Class AActor Function GetActorTimeDilation
struct Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics
{
	struct Actor_eventGetActorTimeDilation_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** \n\x09 * Get ActorTimeDilation - this can be used for input control or speed control for slomo.\n\x09 * We don't want to scale input globally because input can be used for UI, which do not care for TimeDilation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get ActorTimeDilation - this can be used for input control or speed control for slomo.\nWe don't want to scale input globally because input can be used for UI, which do not care for TimeDilation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorTimeDilation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorTimeDilation", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::Actor_eventGetActorTimeDilation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::Actor_eventGetActorTimeDilation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorTimeDilation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorTimeDilation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetActorTimeDilation();
	P_NATIVE_END;
}
// End Class AActor Function GetActorTimeDilation

// Begin Class AActor Function GetActorUpVector
struct Z_Construct_UFunction_AActor_GetActorUpVector_Statics
{
	struct Actor_eventGetActorUpVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Get the up (Z) vector (length 1.0) from this Actor, in world space.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the up (Z) vector (length 1.0) from this Actor, in world space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetActorUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetActorUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetActorUpVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetActorUpVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorUpVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetActorUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetActorUpVector", nullptr, nullptr, Z_Construct_UFunction_AActor_GetActorUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorUpVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetActorUpVector_Statics::Actor_eventGetActorUpVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetActorUpVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetActorUpVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetActorUpVector_Statics::Actor_eventGetActorUpVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetActorUpVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetActorUpVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetActorUpVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetActorUpVector();
	P_NATIVE_END;
}
// End Class AActor Function GetActorUpVector

// Begin Class AActor Function GetAllChildActors
struct Z_Construct_UFunction_AActor_GetAllChildActors_Statics
{
	struct Actor_eventGetAllChildActors_Parms
	{
		TArray<AActor*> ChildActors;
		bool bIncludeDescendants;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** \n\x09 * Returns a list of all actors spawned by our Child Actor Components, including children of children. \n\x09 * This does not return the contents of the Children array\n\x09 */" },
		{ "CPP_Default_bIncludeDescendants", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns a list of all actors spawned by our Child Actor Components, including children of children.\nThis does not return the contents of the Children array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildActors;
	static void NewProp_bIncludeDescendants_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDescendants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_ChildActors_Inner = { "ChildActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_ChildActors = { "ChildActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetAllChildActors_Parms, ChildActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_bIncludeDescendants_SetBit(void* Obj)
{
	((Actor_eventGetAllChildActors_Parms*)Obj)->bIncludeDescendants = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_bIncludeDescendants = { "bIncludeDescendants", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventGetAllChildActors_Parms), &Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_bIncludeDescendants_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetAllChildActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_ChildActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_ChildActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_bIncludeDescendants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAllChildActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetAllChildActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetAllChildActors", nullptr, nullptr, Z_Construct_UFunction_AActor_GetAllChildActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAllChildActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetAllChildActors_Statics::Actor_eventGetAllChildActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAllChildActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetAllChildActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetAllChildActors_Statics::Actor_eventGetAllChildActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetAllChildActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetAllChildActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetAllChildActors)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ChildActors);
	P_GET_UBOOL(Z_Param_bIncludeDescendants);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllChildActors(Z_Param_Out_ChildActors,Z_Param_bIncludeDescendants);
	P_NATIVE_END;
}
// End Class AActor Function GetAllChildActors

// Begin Class AActor Function GetAttachedActors
struct Z_Construct_UFunction_AActor_GetAttachedActors_Statics
{
	struct Actor_eventGetAttachedActors_Parms
	{
		TArray<AActor*> OutActors;
		bool bResetArray;
		bool bRecursivelyIncludeAttachedActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Find all Actors which are attached directly to a component in this actor */" },
		{ "CPP_Default_bRecursivelyIncludeAttachedActors", "false" },
		{ "CPP_Default_bResetArray", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Find all Actors which are attached directly to a component in this actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static void NewProp_bResetArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetArray;
	static void NewProp_bRecursivelyIncludeAttachedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursivelyIncludeAttachedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetAttachedActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bResetArray_SetBit(void* Obj)
{
	((Actor_eventGetAttachedActors_Parms*)Obj)->bResetArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bResetArray = { "bResetArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventGetAttachedActors_Parms), &Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bResetArray_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bRecursivelyIncludeAttachedActors_SetBit(void* Obj)
{
	((Actor_eventGetAttachedActors_Parms*)Obj)->bRecursivelyIncludeAttachedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bRecursivelyIncludeAttachedActors = { "bRecursivelyIncludeAttachedActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventGetAttachedActors_Parms), &Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bRecursivelyIncludeAttachedActors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetAttachedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_OutActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bResetArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bRecursivelyIncludeAttachedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetAttachedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetAttachedActors", nullptr, nullptr, Z_Construct_UFunction_AActor_GetAttachedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetAttachedActors_Statics::Actor_eventGetAttachedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetAttachedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetAttachedActors_Statics::Actor_eventGetAttachedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetAttachedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetAttachedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetAttachedActors)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_GET_UBOOL(Z_Param_bResetArray);
	P_GET_UBOOL(Z_Param_bRecursivelyIncludeAttachedActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAttachedActors(Z_Param_Out_OutActors,Z_Param_bResetArray,Z_Param_bRecursivelyIncludeAttachedActors);
	P_NATIVE_END;
}
// End Class AActor Function GetAttachedActors

// Begin Class AActor Function GetAttachParentActor
struct Z_Construct_UFunction_AActor_GetAttachParentActor_Statics
{
	struct Actor_eventGetAttachParentActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Walk up the attachment chain from RootComponent until we encounter a different actor, and return it. If we are not attached to a component in a different actor, returns nullptr */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Walk up the attachment chain from RootComponent until we encounter a different actor, and return it. If we are not attached to a component in a different actor, returns nullptr" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetAttachParentActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetAttachParentActor", nullptr, nullptr, Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::Actor_eventGetAttachParentActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::Actor_eventGetAttachParentActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetAttachParentActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetAttachParentActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetAttachParentActor();
	P_NATIVE_END;
}
// End Class AActor Function GetAttachParentActor

// Begin Class AActor Function GetAttachParentSocketName
struct Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics
{
	struct Actor_eventGetAttachParentSocketName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Walk up the attachment chain from RootComponent until we encounter a different actor, and return the socket name in the component. If we are not attached to a component in a different actor, returns NAME_None */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Walk up the attachment chain from RootComponent until we encounter a different actor, and return the socket name in the component. If we are not attached to a component in a different actor, returns NAME_None" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetAttachParentSocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetAttachParentSocketName", nullptr, nullptr, Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::Actor_eventGetAttachParentSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::Actor_eventGetAttachParentSocketName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetAttachParentSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetAttachParentSocketName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetAttachParentSocketName();
	P_NATIVE_END;
}
// End Class AActor Function GetAttachParentSocketName

// Begin Class AActor Function GetComponentByClass
struct Z_Construct_UFunction_AActor_GetComponentByClass_Statics
{
	struct Actor_eventGetComponentByClass_Parms
	{
		TSubclassOf<UActorComponent> ComponentClass;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Searches components array and returns first encountered component of the specified class */" },
		{ "ComponentClass", "/Script/Engine.ActorComponent" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Searches components array and returns first encountered component of the specified class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetComponentByClass_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetComponentByClass_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetComponentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetComponentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetComponentByClass", nullptr, nullptr, Z_Construct_UFunction_AActor_GetComponentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::Actor_eventGetComponentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetComponentByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetComponentByClass_Statics::Actor_eventGetComponentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetComponentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetComponentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetComponentByClass)
{
	P_GET_OBJECT(UClass,Z_Param_ComponentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetComponentByClass(Z_Param_ComponentClass);
	P_NATIVE_END;
}
// End Class AActor Function GetComponentByClass

// Begin Class AActor Function GetComponentsByInterface
struct Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics
{
	struct Actor_eventGetComponentsByInterface_Parms
	{
		TSubclassOf<UInterface> Interface;
		TArray<UActorComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Gets all the components that implements the given interface. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets all the components that implements the given interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Interface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetComponentsByInterface_Parms, Interface), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetComponentsByInterface_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_Interface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetComponentsByInterface", nullptr, nullptr, Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::Actor_eventGetComponentsByInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::Actor_eventGetComponentsByInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetComponentsByInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetComponentsByInterface)
{
	P_GET_OBJECT(UClass,Z_Param_Interface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetComponentsByInterface(Z_Param_Interface);
	P_NATIVE_END;
}
// End Class AActor Function GetComponentsByInterface

// Begin Class AActor Function GetComponentsByTag
struct Z_Construct_UFunction_AActor_GetComponentsByTag_Statics
{
	struct Actor_eventGetComponentsByTag_Parms
	{
		TSubclassOf<UActorComponent> ComponentClass;
		FName Tag;
		TArray<UActorComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Gets all the components that inherit from the given class with a given tag. */" },
		{ "ComponentClass", "/Script/Engine.ActorComponent" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets all the components that inherit from the given class with a given tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetComponentsByTag_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetComponentsByTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetComponentsByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetComponentsByTag", nullptr, nullptr, Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::Actor_eventGetComponentsByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::Actor_eventGetComponentsByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetComponentsByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetComponentsByTag)
{
	P_GET_OBJECT(UClass,Z_Param_ComponentClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetComponentsByTag(Z_Param_ComponentClass,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class AActor Function GetComponentsByTag

// Begin Class AActor Function GetDefaultActorLabel
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics
{
	struct Actor_eventGetDefaultActorLabel_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns this actor's default label (does not include any numeric suffix).  Actor labels are only available in development builds. */" },
		{ "KeyWords", "Display Name" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns this actor's default label (does not include any numeric suffix).  Actor labels are only available in development builds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetDefaultActorLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetDefaultActorLabel", nullptr, nullptr, Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::Actor_eventGetDefaultActorLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::Actor_eventGetDefaultActorLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetDefaultActorLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetDefaultActorLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execGetDefaultActorLabel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDefaultActorLabel();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function GetDefaultActorLabel

// Begin Class AActor Function GetDistanceTo
struct Z_Construct_UFunction_AActor_GetDistanceTo_Statics
{
	struct Actor_eventGetDistanceTo_Parms
	{
		const AActor* OtherActor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the distance from this Actor to OtherActor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the distance from this Actor to OtherActor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetDistanceTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetDistanceTo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetDistanceTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetDistanceTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetDistanceTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetDistanceTo", nullptr, nullptr, Z_Construct_UFunction_AActor_GetDistanceTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::Actor_eventGetDistanceTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetDistanceTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetDistanceTo_Statics::Actor_eventGetDistanceTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetDistanceTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetDistanceTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetDistanceTo)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistanceTo(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AActor Function GetDistanceTo

// Begin Class AActor Function GetDotProductTo
struct Z_Construct_UFunction_AActor_GetDotProductTo_Statics
{
	struct Actor_eventGetDotProductTo_Parms
	{
		const AActor* OtherActor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the dot product from this Actor to OtherActor. Returns -2.0 on failure. Returns 0.0 for coincidental actors. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the dot product from this Actor to OtherActor. Returns -2.0 on failure. Returns 0.0 for coincidental actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetDotProductTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetDotProductTo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetDotProductTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetDotProductTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetDotProductTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetDotProductTo", nullptr, nullptr, Z_Construct_UFunction_AActor_GetDotProductTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::Actor_eventGetDotProductTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetDotProductTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetDotProductTo_Statics::Actor_eventGetDotProductTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetDotProductTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetDotProductTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetDotProductTo)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDotProductTo(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AActor Function GetDotProductTo

// Begin Class AActor Function GetFolderPath
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_GetFolderPath_Statics
{
	struct Actor_eventGetFolderPath_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns this actor's folder path. Actor folder paths are only available in development builds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns this actor's folder path. Actor folder paths are only available in development builds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_GetFolderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetFolderPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetFolderPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetFolderPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetFolderPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetFolderPath", nullptr, nullptr, Z_Construct_UFunction_AActor_GetFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetFolderPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetFolderPath_Statics::Actor_eventGetFolderPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetFolderPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetFolderPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetFolderPath_Statics::Actor_eventGetFolderPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetFolderPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetFolderPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execGetFolderPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetFolderPath();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function GetFolderPath

// Begin Class AActor Function GetGameTimeSinceCreation
struct Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics
{
	struct Actor_eventGetGameTimeSinceCreation_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** The number of seconds (in game time) since this Actor was created, relative to Get Game Time In Seconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The number of seconds (in game time) since this Actor was created, relative to Get Game Time In Seconds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetGameTimeSinceCreation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetGameTimeSinceCreation", nullptr, nullptr, Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::Actor_eventGetGameTimeSinceCreation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::Actor_eventGetGameTimeSinceCreation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetGameTimeSinceCreation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetGameTimeSinceCreation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameTimeSinceCreation();
	P_NATIVE_END;
}
// End Class AActor Function GetGameTimeSinceCreation

// Begin Class AActor Function GetHorizontalDistanceTo
struct Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics
{
	struct Actor_eventGetHorizontalDistanceTo_Parms
	{
		const AActor* OtherActor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the distance from this Actor to OtherActor, ignoring Z. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the distance from this Actor to OtherActor, ignoring Z." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetHorizontalDistanceTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetHorizontalDistanceTo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetHorizontalDistanceTo", nullptr, nullptr, Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::Actor_eventGetHorizontalDistanceTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::Actor_eventGetHorizontalDistanceTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetHorizontalDistanceTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetHorizontalDistanceTo)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHorizontalDistanceTo(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AActor Function GetHorizontalDistanceTo

// Begin Class AActor Function GetHorizontalDotProductTo
struct Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics
{
	struct Actor_eventGetHorizontalDotProductTo_Parms
	{
		const AActor* OtherActor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the dot product from this Actor to OtherActor, ignoring Z. Returns -2.0 on failure. Returns 0.0 for coincidental actors. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the dot product from this Actor to OtherActor, ignoring Z. Returns -2.0 on failure. Returns 0.0 for coincidental actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetHorizontalDotProductTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetHorizontalDotProductTo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetHorizontalDotProductTo", nullptr, nullptr, Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::Actor_eventGetHorizontalDotProductTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::Actor_eventGetHorizontalDotProductTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetHorizontalDotProductTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetHorizontalDotProductTo)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHorizontalDotProductTo(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AActor Function GetHorizontalDotProductTo

// Begin Class AActor Function GetInputAxisKeyValue
struct Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics
{
	struct Actor_eventGetInputAxisKeyValue_Parms
	{
		FKey InputAxisKey;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Gets the value of the input axis key if input is enabled for this actor. */" },
		{ "HidePin", "InputAxisKey" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets the value of the input axis key if input is enabled for this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputAxisKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey = { "InputAxisKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetInputAxisKeyValue_Parms, InputAxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAxisKey_MetaData), NewProp_InputAxisKey_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetInputAxisKeyValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInputAxisKeyValue", nullptr, nullptr, Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::Actor_eventGetInputAxisKeyValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::Actor_eventGetInputAxisKeyValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetInputAxisKeyValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetInputAxisKeyValue)
{
	P_GET_STRUCT(FKey,Z_Param_InputAxisKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInputAxisKeyValue(Z_Param_InputAxisKey);
	P_NATIVE_END;
}
// End Class AActor Function GetInputAxisKeyValue

// Begin Class AActor Function GetInputAxisValue
struct Z_Construct_UFunction_AActor_GetInputAxisValue_Statics
{
	struct Actor_eventGetInputAxisValue_Parms
	{
		FName InputAxisName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Gets the value of the input axis if input is enabled for this actor. */" },
		{ "HidePin", "InputAxisName" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets the value of the input axis if input is enabled for this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputAxisName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_InputAxisName = { "InputAxisName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetInputAxisValue_Parms, InputAxisName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAxisName_MetaData), NewProp_InputAxisName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetInputAxisValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_InputAxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInputAxisValue", nullptr, nullptr, Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::Actor_eventGetInputAxisValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::Actor_eventGetInputAxisValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetInputAxisValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetInputAxisValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputAxisName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInputAxisValue(Z_Param_InputAxisName);
	P_NATIVE_END;
}
// End Class AActor Function GetInputAxisValue

// Begin Class AActor Function GetInputVectorAxisValue
struct Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics
{
	struct Actor_eventGetInputVectorAxisValue_Parms
	{
		FKey InputAxisKey;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Gets the value of the input axis key if input is enabled for this actor. */" },
		{ "HidePin", "InputAxisKey" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets the value of the input axis key if input is enabled for this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputAxisKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_InputAxisKey = { "InputAxisKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetInputVectorAxisValue_Parms, InputAxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAxisKey_MetaData), NewProp_InputAxisKey_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetInputVectorAxisValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_InputAxisKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInputVectorAxisValue", nullptr, nullptr, Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::Actor_eventGetInputVectorAxisValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::Actor_eventGetInputVectorAxisValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetInputVectorAxisValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetInputVectorAxisValue)
{
	P_GET_STRUCT(FKey,Z_Param_InputAxisKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetInputVectorAxisValue(Z_Param_InputAxisKey);
	P_NATIVE_END;
}
// End Class AActor Function GetInputVectorAxisValue

// Begin Class AActor Function GetInstigator
struct Z_Construct_UFunction_AActor_GetInstigator_Statics
{
	struct Actor_eventGetInstigator_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Game" },
		{ "Comment", "/** Returns the instigator for this actor, or nullptr if there is none. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the instigator for this actor, or nullptr if there is none." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInstigator", nullptr, nullptr, Z_Construct_UFunction_AActor_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetInstigator_Statics::Actor_eventGetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetInstigator_Statics::Actor_eventGetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetInstigator();
	P_NATIVE_END;
}
// End Class AActor Function GetInstigator

// Begin Class AActor Function GetInstigatorController
struct Z_Construct_UFunction_AActor_GetInstigatorController_Statics
{
	struct Actor_eventGetInstigatorController_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Game" },
		{ "Comment", "/** Returns the instigator's controller for this actor, or nullptr if there is none. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the instigator's controller for this actor, or nullptr if there is none." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetInstigatorController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetInstigatorController_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetInstigatorController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetInstigatorController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigatorController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetInstigatorController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetInstigatorController", nullptr, nullptr, Z_Construct_UFunction_AActor_GetInstigatorController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigatorController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetInstigatorController_Statics::Actor_eventGetInstigatorController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetInstigatorController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetInstigatorController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetInstigatorController_Statics::Actor_eventGetInstigatorController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetInstigatorController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetInstigatorController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetInstigatorController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetInstigatorController();
	P_NATIVE_END;
}
// End Class AActor Function GetInstigatorController

// Begin Class AActor Function GetLevel
struct Z_Construct_UFunction_AActor_GetLevel_Statics
{
	struct Actor_eventGetLevel_Parms
	{
		ULevel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
		{ "Comment", "/** Return the ULevel that this Actor is part of. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Return the ULevel that this Actor is part of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetLevel_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetLevel", nullptr, nullptr, Z_Construct_UFunction_AActor_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetLevel_Statics::Actor_eventGetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetLevel_Statics::Actor_eventGetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevel**)Z_Param__Result=P_THIS->GetLevel();
	P_NATIVE_END;
}
// End Class AActor Function GetLevel

// Begin Class AActor Function GetLevelTransform
struct Z_Construct_UFunction_AActor_GetLevelTransform_Statics
{
	struct Actor_eventGetLevelTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
		{ "Comment", "/** Return the FTransform of the level this actor is a part of. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Return the FTransform of the level this actor is a part of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetLevelTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetLevelTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetLevelTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetLevelTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLevelTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetLevelTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetLevelTransform", nullptr, nullptr, Z_Construct_UFunction_AActor_GetLevelTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLevelTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetLevelTransform_Statics::Actor_eventGetLevelTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLevelTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetLevelTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetLevelTransform_Statics::Actor_eventGetLevelTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetLevelTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetLevelTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetLevelTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetLevelTransform();
	P_NATIVE_END;
}
// End Class AActor Function GetLevelTransform

// Begin Class AActor Function GetLifeSpan
struct Z_Construct_UFunction_AActor_GetLifeSpan_Statics
{
	struct Actor_eventGetLifeSpan_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Get the remaining lifespan of this actor. If zero is returned the actor lives forever. */" },
		{ "Keywords", "delete destroy" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the remaining lifespan of this actor. If zero is returned the actor lives forever." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetLifeSpan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetLifeSpan_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetLifeSpan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetLifeSpan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLifeSpan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetLifeSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetLifeSpan", nullptr, nullptr, Z_Construct_UFunction_AActor_GetLifeSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLifeSpan_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetLifeSpan_Statics::Actor_eventGetLifeSpan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLifeSpan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetLifeSpan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetLifeSpan_Statics::Actor_eventGetLifeSpan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetLifeSpan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetLifeSpan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetLifeSpan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLifeSpan();
	P_NATIVE_END;
}
// End Class AActor Function GetLifeSpan

// Begin Class AActor Function GetLocalRole
struct Z_Construct_UFunction_AActor_GetLocalRole_Statics
{
	struct Actor_eventGetLocalRole_Parms
	{
		TEnumAsByte<ENetRole> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Returns how much control the local machine has over this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns how much control the local machine has over this actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_GetLocalRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetLocalRole_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENetRole, METADATA_PARAMS(0, nullptr) }; // 3970937116
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetLocalRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetLocalRole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLocalRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetLocalRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetLocalRole", nullptr, nullptr, Z_Construct_UFunction_AActor_GetLocalRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLocalRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetLocalRole_Statics::Actor_eventGetLocalRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetLocalRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetLocalRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetLocalRole_Statics::Actor_eventGetLocalRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetLocalRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetLocalRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetLocalRole)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ENetRole>*)Z_Param__Result=P_THIS->GetLocalRole();
	P_NATIVE_END;
}
// End Class AActor Function GetLocalRole

// Begin Class AActor Function GetMinNetUpdateFrequency
struct Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics
{
	struct Actor_eventGetMinNetUpdateFrequency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Get the frequency to throttle down to when replicated properties are changing infrequently. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the frequency to throttle down to when replicated properties are changing infrequently." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetMinNetUpdateFrequency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetMinNetUpdateFrequency", nullptr, nullptr, Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::Actor_eventGetMinNetUpdateFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::Actor_eventGetMinNetUpdateFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetMinNetUpdateFrequency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMinNetUpdateFrequency();
	P_NATIVE_END;
}
// End Class AActor Function GetMinNetUpdateFrequency

// Begin Class AActor Function GetNetCullDistanceSquared
struct Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics
{
	struct Actor_eventGetNetCullDistanceSquared_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** \n\x09 * Get the square of the max distance from the client's viewpoint that this actor is relevant and will be replicated.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the square of the max distance from the client's viewpoint that this actor is relevant and will be replicated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetNetCullDistanceSquared_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetNetCullDistanceSquared", nullptr, nullptr, Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::Actor_eventGetNetCullDistanceSquared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::Actor_eventGetNetCullDistanceSquared_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetNetCullDistanceSquared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetNetCullDistanceSquared)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNetCullDistanceSquared();
	P_NATIVE_END;
}
// End Class AActor Function GetNetCullDistanceSquared

// Begin Class AActor Function GetNetUpdateFrequency
struct Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics
{
	struct Actor_eventGetNetUpdateFrequency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** \n\x09 * Get the current frequency at which this object will be considered for replication.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the current frequency at which this object will be considered for replication." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetNetUpdateFrequency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetNetUpdateFrequency", nullptr, nullptr, Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::Actor_eventGetNetUpdateFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::Actor_eventGetNetUpdateFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetNetUpdateFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetNetUpdateFrequency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNetUpdateFrequency();
	P_NATIVE_END;
}
// End Class AActor Function GetNetUpdateFrequency

// Begin Class AActor Function GetOverlappingActors
struct Z_Construct_UFunction_AActor_GetOverlappingActors_Statics
{
	struct Actor_eventGetOverlappingActors_Parms
	{
		TArray<AActor*> OverlappingActors;
		TSubclassOf<AActor> ClassFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Returns list of actors this actor is overlapping (any component overlapping any component). Does not return itself.\n\x09 * @param OverlappingActors\x09\x09[out] Returned list of overlapping actors\n\x09 * @param ClassFilter\x09\x09\x09[optional] If set, only returns actors of this class or subclasses\n\x09 */" },
		{ "CPP_Default_ClassFilter", "None" },
		{ "DeterminesOutputType", "ClassFilter" },
		{ "DynamicOutputParam", "OverlappingActors" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns list of actors this actor is overlapping (any component overlapping any component). Does not return itself.\n@param OverlappingActors             [out] Returned list of overlapping actors\n@param ClassFilter                   [optional] If set, only returns actors of this class or subclasses" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetOverlappingActors_Parms, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetOverlappingActors_Parms, ClassFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_OverlappingActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_OverlappingActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::NewProp_ClassFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetOverlappingActors", nullptr, nullptr, Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::Actor_eventGetOverlappingActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::Actor_eventGetOverlappingActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetOverlappingActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetOverlappingActors)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OverlappingActors);
	P_GET_OBJECT(UClass,Z_Param_ClassFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetOverlappingActors(Z_Param_Out_OverlappingActors,Z_Param_ClassFilter);
	P_NATIVE_END;
}
// End Class AActor Function GetOverlappingActors

// Begin Class AActor Function GetOverlappingComponents
struct Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics
{
	struct Actor_eventGetOverlappingComponents_Parms
	{
		TArray<UPrimitiveComponent*> OverlappingComponents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Returns list of components this actor is overlapping. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns list of components this actor is overlapping." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents_Inner = { "OverlappingComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents = { "OverlappingComponents", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetOverlappingComponents_Parms, OverlappingComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingComponents_MetaData), NewProp_OverlappingComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::NewProp_OverlappingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetOverlappingComponents", nullptr, nullptr, Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::Actor_eventGetOverlappingComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::Actor_eventGetOverlappingComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetOverlappingComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetOverlappingComponents)
{
	P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OverlappingComponents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetOverlappingComponents(Z_Param_Out_OverlappingComponents);
	P_NATIVE_END;
}
// End Class AActor Function GetOverlappingComponents

// Begin Class AActor Function GetOwner
struct Z_Construct_UFunction_AActor_GetOwner_Statics
{
	struct Actor_eventGetOwner_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Get the owner of this Actor, used primarily for network replication. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the owner of this Actor, used primarily for network replication." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetOwner", nullptr, nullptr, Z_Construct_UFunction_AActor_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetOwner_Statics::Actor_eventGetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetOwner_Statics::Actor_eventGetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetOwner();
	P_NATIVE_END;
}
// End Class AActor Function GetOwner

// Begin Class AActor Function GetParentActor
struct Z_Construct_UFunction_AActor_GetParentActor_Statics
{
	struct Actor_eventGetParentActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** If this Actor was created by a Child Actor Component returns the Actor that owns that Child Actor Component  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If this Actor was created by a Child Actor Component returns the Actor that owns that Child Actor Component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetParentActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetParentActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetParentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetParentActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetParentActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetParentActor", nullptr, nullptr, Z_Construct_UFunction_AActor_GetParentActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetParentActor_Statics::Actor_eventGetParentActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetParentActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetParentActor_Statics::Actor_eventGetParentActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetParentActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetParentActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetParentActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetParentActor();
	P_NATIVE_END;
}
// End Class AActor Function GetParentActor

// Begin Class AActor Function GetParentComponent
struct Z_Construct_UFunction_AActor_GetParentComponent_Statics
{
	struct Actor_eventGetParentComponent_Parms
	{
		UChildActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** If this Actor was created by a Child Actor Component returns that Child Actor Component  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If this Actor was created by a Child Actor Component returns that Child Actor Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetParentComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetParentComponent_Parms, ReturnValue), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetParentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetParentComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetParentComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetParentComponent", nullptr, nullptr, Z_Construct_UFunction_AActor_GetParentComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetParentComponent_Statics::Actor_eventGetParentComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetParentComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetParentComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetParentComponent_Statics::Actor_eventGetParentComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetParentComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetParentComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetParentComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UChildActorComponent**)Z_Param__Result=P_THIS->GetParentComponent();
	P_NATIVE_END;
}
// End Class AActor Function GetParentComponent

// Begin Class AActor Function GetPhysicsReplicationMode
struct Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics
{
	struct Actor_eventGetPhysicsReplicationMode_Parms
	{
		EPhysicsReplicationMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Get the physics replication mode of this body, via EPhysicsReplicationMode */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the physics replication mode of this body, via EPhysicsReplicationMode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetPhysicsReplicationMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EPhysicsReplicationMode, METADATA_PARAMS(0, nullptr) }; // 1461121912
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetPhysicsReplicationMode", nullptr, nullptr, Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::Actor_eventGetPhysicsReplicationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::Actor_eventGetPhysicsReplicationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetPhysicsReplicationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetPhysicsReplicationMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EPhysicsReplicationMode*)Z_Param__Result=P_THIS->GetPhysicsReplicationMode();
	P_NATIVE_END;
}
// End Class AActor Function GetPhysicsReplicationMode

// Begin Class AActor Function GetRayTracingGroupId
struct Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics
{
	struct Actor_eventGetRayTracingGroupId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** Return the RayTracingGroupId for this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Return the RayTracingGroupId for this actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetRayTracingGroupId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetRayTracingGroupId", nullptr, nullptr, Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::Actor_eventGetRayTracingGroupId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::Actor_eventGetRayTracingGroupId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetRayTracingGroupId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetRayTracingGroupId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRayTracingGroupId();
	P_NATIVE_END;
}
// End Class AActor Function GetRayTracingGroupId

// Begin Class AActor Function GetRemoteRole
struct Z_Construct_UFunction_AActor_GetRemoteRole_Statics
{
	struct Actor_eventGetRemoteRole_Parms
	{
		TEnumAsByte<ENetRole> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Returns how much control the remote machine has over this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns how much control the remote machine has over this actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_GetRemoteRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetRemoteRole_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENetRole, METADATA_PARAMS(0, nullptr) }; // 3970937116
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetRemoteRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetRemoteRole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetRemoteRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetRemoteRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetRemoteRole", nullptr, nullptr, Z_Construct_UFunction_AActor_GetRemoteRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetRemoteRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetRemoteRole_Statics::Actor_eventGetRemoteRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetRemoteRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetRemoteRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetRemoteRole_Statics::Actor_eventGetRemoteRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetRemoteRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetRemoteRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetRemoteRole)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ENetRole>*)Z_Param__Result=P_THIS->GetRemoteRole();
	P_NATIVE_END;
}
// End Class AActor Function GetRemoteRole

// Begin Class AActor Function GetResimulationThreshold
struct Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics
{
	struct Actor_eventGetResimulationThreshold_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Get the error threshold in centimeters before this object should enforce a resimulation to trigger. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Get the error threshold in centimeters before this object should enforce a resimulation to trigger." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetResimulationThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetResimulationThreshold", nullptr, nullptr, Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::Actor_eventGetResimulationThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::Actor_eventGetResimulationThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetResimulationThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetResimulationThreshold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetResimulationThreshold();
	P_NATIVE_END;
}
// End Class AActor Function GetResimulationThreshold

// Begin Class AActor Function GetSquaredDistanceTo
struct Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics
{
	struct Actor_eventGetSquaredDistanceTo_Parms
	{
		const AActor* OtherActor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the squared distance from this Actor to OtherActor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the squared distance from this Actor to OtherActor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetSquaredDistanceTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetSquaredDistanceTo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetSquaredDistanceTo", nullptr, nullptr, Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::Actor_eventGetSquaredDistanceTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::Actor_eventGetSquaredDistanceTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetSquaredDistanceTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetSquaredDistanceTo)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSquaredDistanceTo(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AActor Function GetSquaredDistanceTo

// Begin Class AActor Function GetSquaredHorizontalDistanceTo
struct Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics
{
	struct Actor_eventGetSquaredHorizontalDistanceTo_Parms
	{
		const AActor* OtherActor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the squared distance from this Actor to OtherActor, ignoring Z. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the squared distance from this Actor to OtherActor, ignoring Z." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetSquaredHorizontalDistanceTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetSquaredHorizontalDistanceTo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetSquaredHorizontalDistanceTo", nullptr, nullptr, Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::Actor_eventGetSquaredHorizontalDistanceTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::Actor_eventGetSquaredHorizontalDistanceTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetSquaredHorizontalDistanceTo)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSquaredHorizontalDistanceTo(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AActor Function GetSquaredHorizontalDistanceTo

// Begin Class AActor Function GetTickableWhenPaused
struct Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics
{
	struct Actor_eventGetTickableWhenPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/** Gets whether this actor can tick when paused. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Gets whether this actor can tick when paused." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventGetTickableWhenPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventGetTickableWhenPaused_Parms), &Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetTickableWhenPaused", nullptr, nullptr, Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::Actor_eventGetTickableWhenPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::Actor_eventGetTickableWhenPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetTickableWhenPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetTickableWhenPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTickableWhenPaused();
	P_NATIVE_END;
}
// End Class AActor Function GetTickableWhenPaused

// Begin Class AActor Function GetTransform
struct Z_Construct_UFunction_AActor_GetTransform_Statics
{
	struct Actor_eventGetTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Get the actor-to-world transform.\n\x09 * @return The transform that transforms from actor space to world space.\n\x09 */" },
		{ "DisplayName", "Get Actor Transform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "GetActorTransform" },
		{ "ToolTip", "Get the actor-to-world transform.\n@return The transform that transforms from actor space to world space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetTransform", nullptr, nullptr, Z_Construct_UFunction_AActor_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetTransform_Statics::Actor_eventGetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetTransform_Statics::Actor_eventGetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
	P_NATIVE_END;
}
// End Class AActor Function GetTransform

// Begin Class AActor Function GetVelocity
struct Z_Construct_UFunction_AActor_GetVelocity_Statics
{
	struct Actor_eventGetVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns velocity (in cm/s (Unreal Units/second) of the rootcomponent if it is either using physics or has an associated MovementComponent */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns velocity (in cm/s (Unreal Units/second) of the rootcomponent if it is either using physics or has an associated MovementComponent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_GetVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetVelocity", nullptr, nullptr, Z_Construct_UFunction_AActor_GetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetVelocity_Statics::Actor_eventGetVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetVelocity_Statics::Actor_eventGetVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVelocity();
	P_NATIVE_END;
}
// End Class AActor Function GetVelocity

// Begin Class AActor Function GetVerticalDistanceTo
struct Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics
{
	struct Actor_eventGetVerticalDistanceTo_Parms
	{
		const AActor* OtherActor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the distance from this Actor to OtherActor, ignoring XY. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the distance from this Actor to OtherActor, ignoring XY." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetVerticalDistanceTo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventGetVerticalDistanceTo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "GetVerticalDistanceTo", nullptr, nullptr, Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::Actor_eventGetVerticalDistanceTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::Actor_eventGetVerticalDistanceTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_GetVerticalDistanceTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execGetVerticalDistanceTo)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVerticalDistanceTo(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AActor Function GetVerticalDistanceTo

// Begin Class AActor Function HasAuthority
struct Z_Construct_UFunction_AActor_HasAuthority_Statics
{
	struct Actor_eventHasAuthority_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Returns whether this actor has network authority */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns whether this actor has network authority" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventHasAuthority_Parms), &Z_Construct_UFunction_AActor_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_HasAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_HasAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_HasAuthority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "HasAuthority", nullptr, nullptr, Z_Construct_UFunction_AActor_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_HasAuthority_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_HasAuthority_Statics::Actor_eventHasAuthority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_HasAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_HasAuthority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_HasAuthority_Statics::Actor_eventHasAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_HasAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_HasAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execHasAuthority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAuthority();
	P_NATIVE_END;
}
// End Class AActor Function HasAuthority

// Begin Class AActor Function IsActorBeingDestroyed
struct Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics
{
	struct Actor_eventIsActorBeingDestroyed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if this actor is currently being destroyed, some gameplay events may be unsafe */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor is currently being destroyed, some gameplay events may be unsafe" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventIsActorBeingDestroyed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsActorBeingDestroyed_Parms), &Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsActorBeingDestroyed", nullptr, nullptr, Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::Actor_eventIsActorBeingDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::Actor_eventIsActorBeingDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_IsActorBeingDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execIsActorBeingDestroyed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActorBeingDestroyed();
	P_NATIVE_END;
}
// End Class AActor Function IsActorBeingDestroyed

// Begin Class AActor Function IsActorTickEnabled
struct Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics
{
	struct Actor_eventIsActorTickEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/**  Returns whether this actor has tick enabled or not\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns whether this actor has tick enabled or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventIsActorTickEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsActorTickEnabled_Parms), &Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsActorTickEnabled", nullptr, nullptr, Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::Actor_eventIsActorTickEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::Actor_eventIsActorTickEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_IsActorTickEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execIsActorTickEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActorTickEnabled();
	P_NATIVE_END;
}
// End Class AActor Function IsActorTickEnabled

// Begin Class AActor Function IsChildActor
struct Z_Construct_UFunction_AActor_IsChildActor_Statics
{
	struct Actor_eventIsChildActor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Returns whether this Actor was spawned by a child actor component */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns whether this Actor was spawned by a child actor component" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_IsChildActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventIsChildActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsChildActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsChildActor_Parms), &Z_Construct_UFunction_AActor_IsChildActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsChildActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsChildActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsChildActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsChildActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsChildActor", nullptr, nullptr, Z_Construct_UFunction_AActor_IsChildActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsChildActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_IsChildActor_Statics::Actor_eventIsChildActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsChildActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_IsChildActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_IsChildActor_Statics::Actor_eventIsChildActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_IsChildActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_IsChildActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execIsChildActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsChildActor();
	P_NATIVE_END;
}
// End Class AActor Function IsChildActor

// Begin Class AActor Function IsEditable
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_IsEditable_Statics
{
	struct Actor_eventIsEditable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns true if this actor is allowed to be displayed, selected and manipulated by the editor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor is allowed to be displayed, selected and manipulated by the editor." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_IsEditable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventIsEditable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsEditable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsEditable_Parms), &Z_Construct_UFunction_AActor_IsEditable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsEditable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsEditable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsEditable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsEditable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsEditable", nullptr, nullptr, Z_Construct_UFunction_AActor_IsEditable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsEditable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_IsEditable_Statics::Actor_eventIsEditable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsEditable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_IsEditable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_IsEditable_Statics::Actor_eventIsEditable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_IsEditable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_IsEditable_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execIsEditable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEditable();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function IsEditable

// Begin Class AActor Function IsHiddenEd
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_IsHiddenEd_Statics
{
	struct Actor_eventIsHiddenEd_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns true if this actor is hidden in the editor viewports, also checking temporary flags. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor is hidden in the editor viewports, also checking temporary flags." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_IsHiddenEd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventIsHiddenEd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsHiddenEd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsHiddenEd_Parms), &Z_Construct_UFunction_AActor_IsHiddenEd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsHiddenEd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsHiddenEd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsHiddenEd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsHiddenEd", nullptr, nullptr, Z_Construct_UFunction_AActor_IsHiddenEd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_IsHiddenEd_Statics::Actor_eventIsHiddenEd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_IsHiddenEd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_IsHiddenEd_Statics::Actor_eventIsHiddenEd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_IsHiddenEd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_IsHiddenEd_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execIsHiddenEd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHiddenEd();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function IsHiddenEd

// Begin Class AActor Function IsHiddenEdAtStartup
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics
{
	struct Actor_eventIsHiddenEdAtStartup_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns true if the actor is hidden upon editor startup/by default, false if it is not */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if the actor is hidden upon editor startup/by default, false if it is not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventIsHiddenEdAtStartup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsHiddenEdAtStartup_Parms), &Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsHiddenEdAtStartup", nullptr, nullptr, Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::Actor_eventIsHiddenEdAtStartup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::Actor_eventIsHiddenEdAtStartup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_IsHiddenEdAtStartup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_IsHiddenEdAtStartup_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execIsHiddenEdAtStartup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHiddenEdAtStartup();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function IsHiddenEdAtStartup

// Begin Class AActor Function IsOverlappingActor
struct Z_Construct_UFunction_AActor_IsOverlappingActor_Statics
{
	struct Actor_eventIsOverlappingActor_Parms
	{
		const AActor* Other;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Check whether any component of this Actor is overlapping any component of another Actor.\n\x09 * @param Other The other Actor to test against\n\x09 * @return Whether any component of this Actor is overlapping any component of another Actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Check whether any component of this Actor is overlapping any component of another Actor.\n@param Other The other Actor to test against\n@return Whether any component of this Actor is overlapping any component of another Actor." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventIsOverlappingActor_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Other_MetaData), NewProp_Other_MetaData) };
void Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventIsOverlappingActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsOverlappingActor_Parms), &Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsOverlappingActor", nullptr, nullptr, Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::Actor_eventIsOverlappingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::Actor_eventIsOverlappingActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_IsOverlappingActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execIsOverlappingActor)
{
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOverlappingActor(Z_Param_Other);
	P_NATIVE_END;
}
// End Class AActor Function IsOverlappingActor

// Begin Class AActor Function IsSelectable
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_IsSelectable_Statics
{
	struct Actor_eventIsSelectable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/** Returns true if this actor can EVER be selected in a level in the editor.  Can be overridden by specific actors to make them unselectable. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor can EVER be selected in a level in the editor.  Can be overridden by specific actors to make them unselectable." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_IsSelectable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventIsSelectable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsSelectable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsSelectable_Parms), &Z_Construct_UFunction_AActor_IsSelectable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsSelectable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsSelectable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsSelectable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsSelectable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsSelectable", nullptr, nullptr, Z_Construct_UFunction_AActor_IsSelectable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsSelectable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_IsSelectable_Statics::Actor_eventIsSelectable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsSelectable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_IsSelectable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_IsSelectable_Statics::Actor_eventIsSelectable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_IsSelectable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_IsSelectable_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execIsSelectable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSelectable();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function IsSelectable

// Begin Class AActor Function IsTemporarilyHiddenInEditor
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics
{
	struct Actor_eventIsTemporarilyHiddenInEditor_Parms
	{
		bool bIncludeParent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/**\n\x09 * Returns whether or not this actor was explicitly hidden in the editor for the duration of the current editor session\n\x09 * @param bIncludeParent - Whether to recurse up child actor hierarchy or not\n\x09 */" },
		{ "CPP_Default_bIncludeParent", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns whether or not this actor was explicitly hidden in the editor for the duration of the current editor session\n@param bIncludeParent - Whether to recurse up child actor hierarchy or not" },
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeParent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_bIncludeParent_SetBit(void* Obj)
{
	((Actor_eventIsTemporarilyHiddenInEditor_Parms*)Obj)->bIncludeParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_bIncludeParent = { "bIncludeParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsTemporarilyHiddenInEditor_Parms), &Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_bIncludeParent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventIsTemporarilyHiddenInEditor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventIsTemporarilyHiddenInEditor_Parms), &Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_bIncludeParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "IsTemporarilyHiddenInEditor", nullptr, nullptr, Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::Actor_eventIsTemporarilyHiddenInEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::Actor_eventIsTemporarilyHiddenInEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execIsTemporarilyHiddenInEditor)
{
	P_GET_UBOOL(Z_Param_bIncludeParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTemporarilyHiddenInEditor(Z_Param_bIncludeParent);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function IsTemporarilyHiddenInEditor

// Begin Class AActor Function K2_AddActorLocalOffset
struct Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics
{
	struct Actor_eventK2_AddActorLocalOffset_Parms
	{
		FVector DeltaLocation;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Adds a delta to the location of this component in its local reference frame.\n\x09 * @param DelatLocation\x09\x09The change in location in local space.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                          Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n\x09 *                          Setting the location without teleporting will not update the location of simulated child/attached components.\n\x09 */" },
		{ "DisplayName", "Add Actor Local Offset" },
		{ "Keywords", "location position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorLocalOffset" },
		{ "ToolTip", "Adds a delta to the location of this component in its local reference frame.\n@param DelatLocation         The change in location in local space.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                         Setting the location without teleporting will not update the location of simulated child/attached components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaLocation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_DeltaLocation = { "DeltaLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalOffset_Parms, DeltaLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorLocalOffset_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalOffset_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalOffset_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorLocalOffset_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalOffset_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_DeltaLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorLocalOffset", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::Actor_eventK2_AddActorLocalOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::Actor_eventK2_AddActorLocalOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AddActorLocalOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AddActorLocalOffset)
{
	P_GET_STRUCT(FVector,Z_Param_DeltaLocation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddActorLocalOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_AddActorLocalOffset

// Begin Class AActor Function K2_AddActorLocalRotation
struct Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics
{
	struct Actor_eventK2_AddActorLocalRotation_Parms
	{
		FRotator DeltaRotation;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the rotation of this component in its local reference frame\n\x09 * @param DeltaRotation\x09\x09The change in rotation in local space.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                          Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n\x09 *                          Setting the rotation without teleporting will not update the rotation of simulated child/attached components.\n\x09 */" },
		{ "DisplayName", "Add Actor Local Rotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorLocalRotation" },
		{ "ToolTip", "Adds a delta to the rotation of this component in its local reference frame\n@param DeltaRotation         The change in rotation in local space.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                         Setting the rotation without teleporting will not update the rotation of simulated child/attached components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalRotation_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorLocalRotation_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalRotation_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorLocalRotation_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalRotation_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_DeltaRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorLocalRotation", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::Actor_eventK2_AddActorLocalRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::Actor_eventK2_AddActorLocalRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AddActorLocalRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AddActorLocalRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddActorLocalRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_AddActorLocalRotation

// Begin Class AActor Function K2_AddActorLocalTransform
struct Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics
{
	struct Actor_eventK2_AddActorLocalTransform_Parms
	{
		FTransform NewTransform;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the transform of this component in its local reference frame\n\x09 * @param NewTransform\x09\x09The change in transform in local space.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                          Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n\x09 *                          Setting the transform without teleporting will not update the transform of simulated child/attached components.\n\x09 */" },
		{ "DisplayName", "Add Actor Local Transform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorLocalTransform" },
		{ "ToolTip", "Adds a delta to the transform of this component in its local reference frame\n@param NewTransform          The change in transform in local space.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                         Setting the transform without teleporting will not update the transform of simulated child/attached components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTransform_MetaData), NewProp_NewTransform_MetaData) };
void Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorLocalTransform_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalTransform_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorLocalTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorLocalTransform_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorLocalTransform_Parms), &Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_NewTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorLocalTransform", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::Actor_eventK2_AddActorLocalTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::Actor_eventK2_AddActorLocalTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AddActorLocalTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AddActorLocalTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddActorLocalTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_AddActorLocalTransform

// Begin Class AActor Function K2_AddActorWorldOffset
struct Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics
{
	struct Actor_eventK2_AddActorWorldOffset_Parms
	{
		FVector DeltaLocation;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the location of this actor in world space.\n\x09 * \n\x09 * @param DeltaLocation\x09\x09The change in location.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                          Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n\x09 *                          Setting the location without teleporting will not update the location of simulated child/attached components.\n\x09 * @param SweepHitResult\x09The hit result from the move if swept.\n\x09 */" },
		{ "DisplayName", "Add Actor World Offset" },
		{ "Keywords", "location position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorWorldOffset" },
		{ "ToolTip", "Adds a delta to the location of this actor in world space.\n\n@param DeltaLocation         The change in location.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                         Setting the location without teleporting will not update the location of simulated child/attached components.\n@param SweepHitResult        The hit result from the move if swept." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaLocation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_DeltaLocation = { "DeltaLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldOffset_Parms, DeltaLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorWorldOffset_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldOffset_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldOffset_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorWorldOffset_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldOffset_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_DeltaLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorWorldOffset", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::Actor_eventK2_AddActorWorldOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::Actor_eventK2_AddActorWorldOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AddActorWorldOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AddActorWorldOffset)
{
	P_GET_STRUCT(FVector,Z_Param_DeltaLocation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddActorWorldOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_AddActorWorldOffset

// Begin Class AActor Function K2_AddActorWorldRotation
struct Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics
{
	struct Actor_eventK2_AddActorWorldRotation_Parms
	{
		FRotator DeltaRotation;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the rotation of this actor in world space.\n\x09 * \n\x09 * @param DeltaRotation\x09\x09The change in rotation.\n\x09 * @param bSweep\x09\x09\x09Whether to sweep to the target rotation (not currently supported for rotation).\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                          Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n\x09 *                          Setting the rotation without teleporting will not update the rotation of simulated child/attached components.\n\x09 * @param SweepHitResult\x09The hit result from the move if swept.\n\x09 */" },
		{ "DisplayName", "Add Actor World Rotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorWorldRotation" },
		{ "ToolTip", "Adds a delta to the rotation of this actor in world space.\n\n@param DeltaRotation         The change in rotation.\n@param bSweep                        Whether to sweep to the target rotation (not currently supported for rotation).\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                         Setting the rotation without teleporting will not update the rotation of simulated child/attached components.\n@param SweepHitResult        The hit result from the move if swept." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldRotation_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorWorldRotation_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldRotation_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorWorldRotation_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldRotation_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_DeltaRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorWorldRotation", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::Actor_eventK2_AddActorWorldRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::Actor_eventK2_AddActorWorldRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AddActorWorldRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AddActorWorldRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddActorWorldRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_AddActorWorldRotation

// Begin Class AActor Function K2_AddActorWorldTransform
struct Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics
{
	struct Actor_eventK2_AddActorWorldTransform_Parms
	{
		FTransform DeltaTransform;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Adds a delta to the transform of this actor in world space. Ignores scale and sets it to (1,1,1). */" },
		{ "DisplayName", "Add Actor World Transform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorWorldTransform" },
		{ "ToolTip", "Adds a delta to the transform of this actor in world space. Ignores scale and sets it to (1,1,1)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaTransform;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_DeltaTransform = { "DeltaTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldTransform_Parms, DeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTransform_MetaData), NewProp_DeltaTransform_MetaData) };
void Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorWorldTransform_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldTransform_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorWorldTransform_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldTransform_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_DeltaTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorWorldTransform", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::Actor_eventK2_AddActorWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::Actor_eventK2_AddActorWorldTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AddActorWorldTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AddActorWorldTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddActorWorldTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_AddActorWorldTransform

// Begin Class AActor Function K2_AddActorWorldTransformKeepScale
struct Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics
{
	struct Actor_eventK2_AddActorWorldTransformKeepScale_Parms
	{
		FTransform DeltaTransform;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Adds a delta to the transform of this actor in world space. Scale is unchanged. */" },
		{ "DisplayName", "Add Actor World Transform Keep Scale" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AddActorWorldTransformKeepScale" },
		{ "ToolTip", "Adds a delta to the transform of this actor in world space. Scale is unchanged." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaTransform;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_DeltaTransform = { "DeltaTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldTransformKeepScale_Parms, DeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTransform_MetaData), NewProp_DeltaTransform_MetaData) };
void Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorWorldTransformKeepScale_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldTransformKeepScale_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AddActorWorldTransformKeepScale_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_AddActorWorldTransformKeepScale_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AddActorWorldTransformKeepScale_Parms), &Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_DeltaTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AddActorWorldTransformKeepScale", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::Actor_eventK2_AddActorWorldTransformKeepScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::Actor_eventK2_AddActorWorldTransformKeepScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AddActorWorldTransformKeepScale)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddActorWorldTransformKeepScale(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_AddActorWorldTransformKeepScale

// Begin Class AActor Function K2_AttachRootComponentTo
struct Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics
{
	struct Actor_eventK2_AttachRootComponentTo_Parms
	{
		USceneComponent* InParent;
		FName InSocketName;
		TEnumAsByte<EAttachLocation::Type> AttachLocationType;
		bool bWeldSimulatedBodies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AttachLocationType", "KeepRelativeOffset" },
		{ "Category", "Transformation" },
		{ "CPP_Default_AttachLocationType", "KeepRelativeOffset" },
		{ "CPP_Default_bWeldSimulatedBodies", "true" },
		{ "CPP_Default_InSocketName", "None" },
		{ "DisplayName", "AttachRootComponentTo (Deprecated)" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachLocationType;
	static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentTo_Parms, InParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParent_MetaData), NewProp_InParent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentTo_Parms, InSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_AttachLocationType = { "AttachLocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentTo_Parms, AttachLocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(0, nullptr) }; // 2784615398
void Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
{
	((Actor_eventK2_AttachRootComponentTo_Parms*)Obj)->bWeldSimulatedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AttachRootComponentTo_Parms), &Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_InSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_AttachLocationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_bWeldSimulatedBodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AttachRootComponentTo", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::Actor_eventK2_AttachRootComponentTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::Actor_eventK2_AttachRootComponentTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AttachRootComponentTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AttachRootComponentTo)
{
	P_GET_OBJECT(USceneComponent,Z_Param_InParent);
	P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
	P_GET_PROPERTY(FByteProperty,Z_Param_AttachLocationType);
	P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AttachRootComponentTo(Z_Param_InParent,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachLocationType),Z_Param_bWeldSimulatedBodies);
	P_NATIVE_END;
}
// End Class AActor Function K2_AttachRootComponentTo

// Begin Class AActor Function K2_AttachRootComponentToActor
struct Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics
{
	struct Actor_eventK2_AttachRootComponentToActor_Parms
	{
		AActor* InParentActor;
		FName InSocketName;
		TEnumAsByte<EAttachLocation::Type> AttachLocationType;
		bool bWeldSimulatedBodies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AttachLocationType", "KeepRelativeOffset" },
		{ "Category", "Transformation" },
		{ "CPP_Default_AttachLocationType", "KeepRelativeOffset" },
		{ "CPP_Default_bWeldSimulatedBodies", "true" },
		{ "CPP_Default_InSocketName", "None" },
		{ "DisplayName", "AttachRootComponentToActor (Deprecated)" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptNoExport", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachLocationType;
	static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_InParentActor = { "InParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentToActor_Parms, InParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentToActor_Parms, InSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_AttachLocationType = { "AttachLocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachRootComponentToActor_Parms, AttachLocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(0, nullptr) }; // 2784615398
void Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
{
	((Actor_eventK2_AttachRootComponentToActor_Parms*)Obj)->bWeldSimulatedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AttachRootComponentToActor_Parms), &Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_InParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_InSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_AttachLocationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::NewProp_bWeldSimulatedBodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AttachRootComponentToActor", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::Actor_eventK2_AttachRootComponentToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::Actor_eventK2_AttachRootComponentToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AttachRootComponentToActor)
{
	P_GET_OBJECT(AActor,Z_Param_InParentActor);
	P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
	P_GET_PROPERTY(FByteProperty,Z_Param_AttachLocationType);
	P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AttachRootComponentToActor(Z_Param_InParentActor,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachLocationType),Z_Param_bWeldSimulatedBodies);
	P_NATIVE_END;
}
// End Class AActor Function K2_AttachRootComponentToActor

// Begin Class AActor Function K2_AttachToActor
struct Z_Construct_UFunction_AActor_K2_AttachToActor_Statics
{
	struct Actor_eventK2_AttachToActor_Parms
	{
		AActor* ParentActor;
		FName SocketName;
		EAttachmentRule LocationRule;
		EAttachmentRule RotationRule;
		EAttachmentRule ScaleRule;
		bool bWeldSimulatedBodies;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bWeldSimulatedBodies", "TRUE" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Attaches the RootComponent of this Actor to the supplied actor, optionally at a named socket.\n\x09 * @param ParentActor\x09\x09\x09\x09""Actor to attach this actor's RootComponent to\n\x09 * @param SocketName\x09\x09\x09\x09Socket name to attach to, if any\n\x09 * @param LocationRule\x09\x09\x09\x09How to handle translation when attaching.\n\x09 * @param RotationRule\x09\x09\x09\x09How to handle rotation when attaching.\n\x09 * @param ScaleRule\x09\x09\x09\x09\x09How to handle scale when attaching.\n\x09 * @param bWeldSimulatedBodies\x09\x09Whether to weld together simulated physics bodies.This transfers the shapes in the welded object into the parent (if simulated), which can result in permanent changes that persist even after subsequently detaching.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09Whether the attachment was successful or not\n\x09 */" },
		{ "DisplayName", "Attach Actor To Actor" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AttachToActor" },
		{ "ToolTip", "Attaches the RootComponent of this Actor to the supplied actor, optionally at a named socket.\n@param ParentActor                           Actor to attach this actor's RootComponent to\n@param SocketName                            Socket name to attach to, if any\n@param LocationRule                          How to handle translation when attaching.\n@param RotationRule                          How to handle rotation when attaching.\n@param ScaleRule                                     How to handle scale when attaching.\n@param bWeldSimulatedBodies          Whether to weld together simulated physics bodies.This transfers the shapes in the welded object into the parent (if simulated), which can result in permanent changes that persist even after subsequently detaching.\n@return                                                      Whether the attachment was successful or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
	static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToActor_Parms, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 366982490
void Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
{
	((Actor_eventK2_AttachToActor_Parms*)Obj)->bWeldSimulatedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AttachToActor_Parms), &Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventK2_AttachToActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AttachToActor_Parms), &Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_LocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_LocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_RotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_RotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ScaleRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_bWeldSimulatedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AttachToActor", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::Actor_eventK2_AttachToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::Actor_eventK2_AttachToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AttachToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AttachToActor)
{
	P_GET_OBJECT(AActor,Z_Param_ParentActor);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule);
	P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule);
	P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule);
	P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_AttachToActor(Z_Param_ParentActor,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies);
	P_NATIVE_END;
}
// End Class AActor Function K2_AttachToActor

// Begin Class AActor Function K2_AttachToComponent
struct Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics
{
	struct Actor_eventK2_AttachToComponent_Parms
	{
		USceneComponent* Parent;
		FName SocketName;
		EAttachmentRule LocationRule;
		EAttachmentRule RotationRule;
		EAttachmentRule ScaleRule;
		bool bWeldSimulatedBodies;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bWeldSimulatedBodies", "TRUE" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Attaches the RootComponent of this Actor to the supplied component, optionally at a named socket. It is not valid to call this on components that are not Registered.\n\x09 * @param Parent\x09\x09\x09\x09\x09Parent to attach to.\n\x09 * @param SocketName\x09\x09\x09\x09Optional socket to attach to on the parent.\n\x09 * @param LocationRule\x09\x09\x09\x09How to handle translation when attaching.\n\x09 * @param RotationRule\x09\x09\x09\x09How to handle rotation when attaching.\n\x09 * @param ScaleRule\x09\x09\x09\x09\x09How to handle scale when attaching.\n\x09 * @param bWeldSimulatedBodies\x09\x09Whether to weld together simulated physics bodies. This transfers the shapes in the welded object into the parent (if simulated), which can result in permanent changes that persist even after subsequently detaching.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09Whether the attachment was successful or not\n\x09 */" },
		{ "DisplayName", "Attach Actor To Component" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "AttachToComponent" },
		{ "ToolTip", "Attaches the RootComponent of this Actor to the supplied component, optionally at a named socket. It is not valid to call this on components that are not Registered.\n@param Parent                                        Parent to attach to.\n@param SocketName                            Optional socket to attach to on the parent.\n@param LocationRule                          How to handle translation when attaching.\n@param RotationRule                          How to handle rotation when attaching.\n@param ScaleRule                                     How to handle scale when attaching.\n@param bWeldSimulatedBodies          Whether to weld together simulated physics bodies. This transfers the shapes in the welded object into the parent (if simulated), which can result in permanent changes that persist even after subsequently detaching.\n@return                                                      Whether the attachment was successful or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
	static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_AttachToComponent_Parms, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 366982490
void Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
{
	((Actor_eventK2_AttachToComponent_Parms*)Obj)->bWeldSimulatedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AttachToComponent_Parms), &Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventK2_AttachToComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_AttachToComponent_Parms), &Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_LocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_LocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_RotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_RotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ScaleRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_AttachToComponent", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::Actor_eventK2_AttachToComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::Actor_eventK2_AttachToComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_AttachToComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_AttachToComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Parent);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule);
	P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule);
	P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule);
	P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_AttachToComponent(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies);
	P_NATIVE_END;
}
// End Class AActor Function K2_AttachToComponent

// Begin Class AActor Function K2_DestroyActor
struct Z_Construct_UFunction_AActor_K2_DestroyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Destroy the actor */" },
		{ "DisplayName", "Destroy Actor" },
		{ "Keywords", "Delete" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "DestroyActor" },
		{ "ToolTip", "Destroy the actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_DestroyActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_K2_DestroyActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_DestroyActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_DestroyActor();
	P_NATIVE_END;
}
// End Class AActor Function K2_DestroyActor

// Begin Class AActor Function K2_DetachFromActor
struct Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics
{
	struct Actor_eventK2_DetachFromActor_Parms
	{
		EDetachmentRule LocationRule;
		EDetachmentRule RotationRule;
		EDetachmentRule ScaleRule;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Detaches the RootComponent of this Actor from any SceneComponent it is currently attached to. \n\x09 * @param  LocationRule\x09\x09\x09\x09How to handle translation when detaching.\n\x09 * @param  RotationRule\x09\x09\x09\x09How to handle rotation when detaching.\n\x09 * @param  ScaleRule\x09\x09\x09\x09How to handle scale when detaching.\n\x09 */" },
		{ "CPP_Default_LocationRule", "KeepRelative" },
		{ "CPP_Default_RotationRule", "KeepRelative" },
		{ "CPP_Default_ScaleRule", "KeepRelative" },
		{ "DisplayName", "Detach From Actor" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "DetachFromActor" },
		{ "ToolTip", "Detaches the RootComponent of this Actor from any SceneComponent it is currently attached to.\n@param  LocationRule                         How to handle translation when detaching.\n@param  RotationRule                         How to handle rotation when detaching.\n@param  ScaleRule                            How to handle scale when detaching." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_DetachFromActor_Parms, LocationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(0, nullptr) }; // 1636836597
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_DetachFromActor_Parms, RotationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(0, nullptr) }; // 1636836597
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_DetachFromActor_Parms, ScaleRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(0, nullptr) }; // 1636836597
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_LocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_LocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_RotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_RotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_ScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::NewProp_ScaleRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_DetachFromActor", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::Actor_eventK2_DetachFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::Actor_eventK2_DetachFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_DetachFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_DetachFromActor)
{
	P_GET_ENUM(EDetachmentRule,Z_Param_LocationRule);
	P_GET_ENUM(EDetachmentRule,Z_Param_RotationRule);
	P_GET_ENUM(EDetachmentRule,Z_Param_ScaleRule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_DetachFromActor(EDetachmentRule(Z_Param_LocationRule),EDetachmentRule(Z_Param_RotationRule),EDetachmentRule(Z_Param_ScaleRule));
	P_NATIVE_END;
}
// End Class AActor Function K2_DetachFromActor

// Begin Class AActor Function K2_GetActorLocation
struct Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics
{
	struct Actor_eventK2_GetActorLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the location of the RootComponent of this Actor */" },
		{ "DisplayName", "Get Actor Location" },
		{ "Keywords", "position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "GetActorLocation" },
		{ "ToolTip", "Returns the location of the RootComponent of this Actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_GetActorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_GetActorLocation", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::Actor_eventK2_GetActorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::Actor_eventK2_GetActorLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_GetActorLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_GetActorLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->K2_GetActorLocation();
	P_NATIVE_END;
}
// End Class AActor Function K2_GetActorLocation

// Begin Class AActor Function K2_GetActorRotation
struct Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics
{
	struct Actor_eventK2_GetActorRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns rotation of the RootComponent of this Actor. */" },
		{ "DisplayName", "Get Actor Rotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "GetActorRotation" },
		{ "ToolTip", "Returns rotation of the RootComponent of this Actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_GetActorRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_GetActorRotation", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::Actor_eventK2_GetActorRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::Actor_eventK2_GetActorRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_GetActorRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_GetActorRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->K2_GetActorRotation();
	P_NATIVE_END;
}
// End Class AActor Function K2_GetActorRotation

// Begin Class AActor Function K2_GetComponentsByClass
struct Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics
{
	struct Actor_eventK2_GetComponentsByClass_Parms
	{
		TSubclassOf<UActorComponent> ComponentClass;
		TArray<UActorComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * Gets all the components that inherit from the given class.\n\x09 * Currently returns an array of UActorComponent which must be cast to the correct type.\n\x09 * This intended to only be used by blueprints. Use GetComponents() in C++.\n\x09 */" },
		{ "ComponentClass", "/Script/Engine.ActorComponent" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "Get Components By Class" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "GetComponentsByClass" },
		{ "ToolTip", "Gets all the components that inherit from the given class.\nCurrently returns an array of UActorComponent which must be cast to the correct type.\nThis intended to only be used by blueprints. Use GetComponents() in C++." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_GetComponentsByClass_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_GetComponentsByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_GetComponentsByClass", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::Actor_eventK2_GetComponentsByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::Actor_eventK2_GetComponentsByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_GetComponentsByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_GetComponentsByClass)
{
	P_GET_OBJECT(UClass,Z_Param_ComponentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->K2_GetComponentsByClass(Z_Param_ComponentClass);
	P_NATIVE_END;
}
// End Class AActor Function K2_GetComponentsByClass

// Begin Class AActor Function K2_GetRootComponent
struct Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics
{
	struct Actor_eventK2_GetRootComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Returns the RootComponent of this Actor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns the RootComponent of this Actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_GetRootComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_GetRootComponent", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::Actor_eventK2_GetRootComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::Actor_eventK2_GetRootComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_GetRootComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_GetRootComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->K2_GetRootComponent();
	P_NATIVE_END;
}
// End Class AActor Function K2_GetRootComponent

// Begin Class AActor Function K2_OnBecomeViewTarget
struct Actor_eventK2_OnBecomeViewTarget_Parms
{
	APlayerController* PC;
};
static const FName NAME_AActor_K2_OnBecomeViewTarget = FName(TEXT("K2_OnBecomeViewTarget"));
void AActor::K2_OnBecomeViewTarget(APlayerController* PC)
{
	Actor_eventK2_OnBecomeViewTarget_Parms Parms;
	Parms.PC=PC;
	UFunction* Func = FindFunctionChecked(NAME_AActor_K2_OnBecomeViewTarget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Event called when this Actor becomes the view target for the given PlayerController. */" },
		{ "DisplayName", "OnBecomeViewTarget" },
		{ "Keywords", "Activate Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "OnBecomeViewTarget" },
		{ "ToolTip", "Event called when this Actor becomes the view target for the given PlayerController." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_OnBecomeViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::NewProp_PC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_OnBecomeViewTarget", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::PropPointers), sizeof(Actor_eventK2_OnBecomeViewTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventK2_OnBecomeViewTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function K2_OnBecomeViewTarget

// Begin Class AActor Function K2_OnEndViewTarget
struct Actor_eventK2_OnEndViewTarget_Parms
{
	APlayerController* PC;
};
static const FName NAME_AActor_K2_OnEndViewTarget = FName(TEXT("K2_OnEndViewTarget"));
void AActor::K2_OnEndViewTarget(APlayerController* PC)
{
	Actor_eventK2_OnEndViewTarget_Parms Parms;
	Parms.PC=PC;
	UFunction* Func = FindFunctionChecked(NAME_AActor_K2_OnEndViewTarget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Event called when this Actor is no longer the view target for the given PlayerController. */" },
		{ "DisplayName", "OnEndViewTarget" },
		{ "Keywords", "Deactivate Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "OnEndViewTarget" },
		{ "ToolTip", "Event called when this Actor is no longer the view target for the given PlayerController." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_OnEndViewTarget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::NewProp_PC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_OnEndViewTarget", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::PropPointers), sizeof(Actor_eventK2_OnEndViewTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventK2_OnEndViewTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_OnEndViewTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function K2_OnEndViewTarget

// Begin Class AActor Function K2_OnReset
static const FName NAME_AActor_K2_OnReset = FName(TEXT("K2_OnReset"));
void AActor::K2_OnReset()
{
	UFunction* Func = FindFunctionChecked(NAME_AActor_K2_OnReset);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AActor_K2_OnReset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Event called when this Actor is reset to its initial state - used when restarting level without reloading. */" },
		{ "DisplayName", "OnReset" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "OnReset" },
		{ "ToolTip", "Event called when this Actor is reset to its initial state - used when restarting level without reloading." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_OnReset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_OnReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_OnReset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_K2_OnReset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_OnReset_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function K2_OnReset

// Begin Class AActor Function K2_SetActorLocation
struct Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics
{
	struct Actor_eventK2_SetActorLocation_Parms
	{
		FVector NewLocation;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Move the Actor to the specified location.\n\x09 * @param NewLocation\x09The new location to move the Actor to.\n\x09 * @param bSweep\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                      Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated. \n\x09 *                      Setting the location without teleporting will not update the location of simulated child/attached components.\n\x09 * @param SweepHitResult\x09The hit result from the move if swept.\n\x09 * @return\x09Whether the location was successfully set (if not swept), or whether movement occurred at all (if swept).\n\x09 */" },
		{ "DisplayName", "Set Actor Location" },
		{ "Keywords", "position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorLocation" },
		{ "ToolTip", "Move the Actor to the specified location.\n@param NewLocation   The new location to move the Actor to.\n@param bSweep                Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                             Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport             Whether we teleport the physics state (if physics collision is enabled for this object).\n                                             If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                             If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                             If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                     Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                     Setting the location without teleporting will not update the location of simulated child/attached components.\n@param SweepHitResult        The hit result from the move if swept.\n@return      Whether the location was successfully set (if not swept), or whether movement occurred at all (if swept)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorLocation_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorLocation_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorLocation", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::Actor_eventK2_SetActorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::Actor_eventK2_SetActorLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_SetActorLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_SetActorLocation)
{
	P_GET_STRUCT(FVector,Z_Param_NewLocation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_SetActorLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_SetActorLocation

// Begin Class AActor Function K2_SetActorLocationAndRotation
struct Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics
{
	struct Actor_eventK2_SetActorLocationAndRotation_Parms
	{
		FVector NewLocation;
		FRotator NewRotation;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Move the actor instantly to the specified location and rotation.\n\x09 * \n\x09 * @param NewLocation\x09\x09The new location to teleport the Actor to.\n\x09 * @param NewRotation\x09\x09The new rotation for the Actor.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                          Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated. \n\x09 *                          Setting the location without teleporting will not update the location of simulated child/attached components.\n\x09 * @param SweepHitResult\x09The hit result from the move if swept.\n\x09 * @return\x09Whether the rotation was successfully set.\n\x09 */" },
		{ "DisplayName", "Set Actor Location And Rotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorLocationAndRotation" },
		{ "ToolTip", "Move the actor instantly to the specified location and rotation.\n\n@param NewLocation           The new location to teleport the Actor to.\n@param NewRotation           The new rotation for the Actor.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                         Setting the location without teleporting will not update the location of simulated child/attached components.\n@param SweepHitResult        The hit result from the move if swept.\n@return      Whether the rotation was successfully set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorLocationAndRotation_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocationAndRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorLocationAndRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorLocationAndRotation_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocationAndRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorLocationAndRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorLocationAndRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorLocationAndRotation", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::Actor_eventK2_SetActorLocationAndRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::Actor_eventK2_SetActorLocationAndRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_SetActorLocationAndRotation)
{
	P_GET_STRUCT(FVector,Z_Param_NewLocation);
	P_GET_STRUCT(FRotator,Z_Param_NewRotation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_SetActorLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_SetActorLocationAndRotation

// Begin Class AActor Function K2_SetActorRelativeLocation
struct Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics
{
	struct Actor_eventK2_SetActorRelativeLocation_Parms
	{
		FVector NewRelativeLocation;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the actor's RootComponent to the specified relative location.\n\x09 * @param NewRelativeLocation\x09New relative location of the actor's root component\n\x09 * @param bSweep\x09\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                              Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated. \n\x09 *                              Setting the location without teleporting will not update the location of simulated child/attached components.\n\x09 */" },
		{ "DisplayName", "Set Actor Relative Location" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorRelativeLocation" },
		{ "ToolTip", "Set the actor's RootComponent to the specified relative location.\n@param NewRelativeLocation   New relative location of the actor's root component\n@param bSweep                                Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                             Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                             Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                             If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                             If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                             If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                             Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                             Setting the location without teleporting will not update the location of simulated child/attached components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRelativeLocation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_NewRelativeLocation = { "NewRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeLocation_Parms, NewRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorRelativeLocation_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeLocation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorRelativeLocation_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeLocation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_NewRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorRelativeLocation", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::Actor_eventK2_SetActorRelativeLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::Actor_eventK2_SetActorRelativeLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_SetActorRelativeLocation)
{
	P_GET_STRUCT(FVector,Z_Param_NewRelativeLocation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_SetActorRelativeLocation(Z_Param_NewRelativeLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_SetActorRelativeLocation

// Begin Class AActor Function K2_SetActorRelativeRotation
struct Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics
{
	struct Actor_eventK2_SetActorRelativeRotation_Parms
	{
		FRotator NewRelativeRotation;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the actor's RootComponent to the specified relative rotation\n\x09 * @param NewRelativeRotation\x09New relative rotation of the actor's root component\n\x09 * @param bSweep\x09\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                              Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n\x09 *                              Setting the rotation without teleporting will not update the rotation of simulated child/attached components.\n\x09 */" },
		{ "DisplayName", "Set Actor Relative Rotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorRelativeRotation" },
		{ "ToolTip", "Set the actor's RootComponent to the specified relative rotation\n@param NewRelativeRotation   New relative rotation of the actor's root component\n@param bSweep                                Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                             Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                             Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                             If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                             If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                             If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                             Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                             Setting the rotation without teleporting will not update the rotation of simulated child/attached components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRelativeRotation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_NewRelativeRotation = { "NewRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeRotation_Parms, NewRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorRelativeRotation_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorRelativeRotation_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_NewRelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorRelativeRotation", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::Actor_eventK2_SetActorRelativeRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::Actor_eventK2_SetActorRelativeRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_SetActorRelativeRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_NewRelativeRotation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_SetActorRelativeRotation(Z_Param_NewRelativeRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_SetActorRelativeRotation

// Begin Class AActor Function K2_SetActorRelativeTransform
struct Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics
{
	struct Actor_eventK2_SetActorRelativeTransform_Parms
	{
		FTransform NewRelativeTransform;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the actor's RootComponent to the specified relative transform\n\x09 * @param NewRelativeTransform\x09\x09New relative transform of the actor's root component\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                          Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated. \n\x09 *                          Setting the transform without teleporting will not update the transform of simulated child/attached components.\n\x09 */" },
		{ "DisplayName", "Set Actor Relative Transform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorRelativeTransform" },
		{ "ToolTip", "Set the actor's RootComponent to the specified relative transform\n@param NewRelativeTransform          New relative transform of the actor's root component\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                         Setting the transform without teleporting will not update the transform of simulated child/attached components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRelativeTransform;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_NewRelativeTransform = { "NewRelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeTransform_Parms, NewRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRelativeTransform_MetaData), NewProp_NewRelativeTransform_MetaData) };
void Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorRelativeTransform_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRelativeTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorRelativeTransform_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRelativeTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_NewRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorRelativeTransform", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::Actor_eventK2_SetActorRelativeTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::Actor_eventK2_SetActorRelativeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_SetActorRelativeTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRelativeTransform);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_SetActorRelativeTransform(Z_Param_Out_NewRelativeTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_SetActorRelativeTransform

// Begin Class AActor Function K2_SetActorRotation
struct Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics
{
	struct Actor_eventK2_SetActorRotation_Parms
	{
		FRotator NewRotation;
		bool bTeleportPhysics;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Set the Actor's rotation instantly to the specified rotation.\n\x09 * \n\x09 * @param\x09NewRotation\x09The new rotation for the Actor.\n\x09 * @param\x09""bTeleportPhysics Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *          Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated. \n\x09 *          Setting the rotation without teleporting will not update the rotation of simulated child/attached components.\n\x09 * @return\x09Whether the rotation was successfully set.\n\x09 */" },
		{ "DisplayName", "Set Actor Rotation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorRotation" },
		{ "ToolTip", "Set the Actor's rotation instantly to the specified rotation.\n\n@param       NewRotation     The new rotation for the Actor.\n@param       bTeleportPhysics Whether we teleport the physics state (if physics collision is enabled for this object).\n                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n         Setting the rotation without teleporting will not update the rotation of simulated child/attached components.\n@return      Whether the rotation was successfully set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static void NewProp_bTeleportPhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportPhysics;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_bTeleportPhysics_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorRotation_Parms*)Obj)->bTeleportPhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_bTeleportPhysics = { "bTeleportPhysics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_bTeleportPhysics_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorRotation_Parms), &Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_bTeleportPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorRotation", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::Actor_eventK2_SetActorRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::Actor_eventK2_SetActorRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_SetActorRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_SetActorRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_NewRotation);
	P_GET_UBOOL(Z_Param_bTeleportPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_SetActorRotation(Z_Param_NewRotation,Z_Param_bTeleportPhysics);
	P_NATIVE_END;
}
// End Class AActor Function K2_SetActorRotation

// Begin Class AActor Function K2_SetActorTransform
struct Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics
{
	struct Actor_eventK2_SetActorTransform_Parms
	{
		FTransform NewTransform;
		bool bSweep;
		FHitResult SweepHitResult;
		bool bTeleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Set the Actors transform to the specified one.\n\x09 * @param NewTransform\x09\x09The new transform.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n\x09 *                          Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n\x09 *                          Setting the transform without teleporting will not update the transform of simulated child/attached components.\n\x09 */" },
		{ "DisplayName", "Set Actor Transform" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "SetActorTransform" },
		{ "ToolTip", "Set the Actors transform to the specified one.\n@param NewTransform          The new transform.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.\n                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.\n                         Setting the transform without teleporting will not update the transform of simulated child/attached components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTransform_MetaData), NewProp_NewTransform_MetaData) };
void Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorTransform_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_SetActorTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorTransform_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventK2_SetActorTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_SetActorTransform_Parms), &Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_NewTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_SweepHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_SetActorTransform", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::Actor_eventK2_SetActorTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::Actor_eventK2_SetActorTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_SetActorTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_SetActorTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_SetActorTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class AActor Function K2_SetActorTransform

// Begin Class AActor Function K2_TeleportTo
struct Z_Construct_UFunction_AActor_K2_TeleportTo_Statics
{
	struct Actor_eventK2_TeleportTo_Parms
	{
		FVector DestLocation;
		FRotator DestRotation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Teleport this actor to a new location. If the actor doesn't fit exactly at the location specified, tries to slightly move it out of walls and such.\n\x09 *\n\x09 * @param DestLocation The target destination point\n\x09 * @param DestRotation The target rotation at the destination\n\x09 * @return true if the actor has been successfully moved, or false if it couldn't fit.\n\x09 */" },
		{ "DisplayName", "Teleport" },
		{ "Keywords", "Move Position" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ScriptName", "Teleport" },
		{ "ToolTip", "Teleport this actor to a new location. If the actor doesn't fit exactly at the location specified, tries to slightly move it out of walls and such.\n\n@param DestLocation The target destination point\n@param DestRotation The target rotation at the destination\n@return true if the actor has been successfully moved, or false if it couldn't fit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestRotation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_DestLocation = { "DestLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_TeleportTo_Parms, DestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_DestRotation = { "DestRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventK2_TeleportTo_Parms, DestRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventK2_TeleportTo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventK2_TeleportTo_Parms), &Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_DestLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_DestRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "K2_TeleportTo", nullptr, nullptr, Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::Actor_eventK2_TeleportTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::Actor_eventK2_TeleportTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_K2_TeleportTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execK2_TeleportTo)
{
	P_GET_STRUCT(FVector,Z_Param_DestLocation);
	P_GET_STRUCT(FRotator,Z_Param_DestRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_TeleportTo(Z_Param_DestLocation,Z_Param_DestRotation);
	P_NATIVE_END;
}
// End Class AActor Function K2_TeleportTo

// Begin Class AActor Function MakeNoise
struct Z_Construct_UFunction_AActor_MakeNoise_Statics
{
	struct Actor_eventMakeNoise_Parms
	{
		float Loudness;
		APawn* NoiseInstigator;
		FVector NoiseLocation;
		float MaxRange;
		FName Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "AI" },
		{ "Comment", "/**\n\x09 * Trigger a noise caused by a given Pawn, at a given location.\n\x09 * Note that the NoiseInstigator Pawn MUST have a PawnNoiseEmitterComponent for the noise to be detected by a PawnSensingComponent.\n\x09 * Senders of MakeNoise should have an Instigator if they are not pawns, or pass a NoiseInstigator.\n\x09 *\n\x09 * @param Loudness The relative loudness of this noise. Usual range is 0 (no noise) to 1 (full volume). If MaxRange is used, this scales the max range, otherwise it affects the hearing range specified by the sensor.\n\x09 * @param NoiseInstigator Pawn responsible for this noise.  Uses the actor's Instigator if NoiseInstigator is null\n\x09 * @param NoiseLocation Position of noise source.  If zero vector, use the actor's location.\n\x09 * @param MaxRange Max range at which the sound may be heard. A value of 0 indicates no max range (though perception may have its own range). Loudness scales the range. (Note: not supported for legacy PawnSensingComponent, only for AIPerception)\n\x09 * @param Tag Identifier for the noise.\n\x09 */" },
		{ "CPP_Default_Loudness", "1.000000" },
		{ "CPP_Default_MaxRange", "0.000000" },
		{ "CPP_Default_NoiseInstigator", "None" },
		{ "CPP_Default_NoiseLocation", "" },
		{ "CPP_Default_Tag", "None" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Trigger a noise caused by a given Pawn, at a given location.\nNote that the NoiseInstigator Pawn MUST have a PawnNoiseEmitterComponent for the noise to be detected by a PawnSensingComponent.\nSenders of MakeNoise should have an Instigator if they are not pawns, or pass a NoiseInstigator.\n\n@param Loudness The relative loudness of this noise. Usual range is 0 (no noise) to 1 (full volume). If MaxRange is used, this scales the max range, otherwise it affects the hearing range specified by the sensor.\n@param NoiseInstigator Pawn responsible for this noise.  Uses the actor's Instigator if NoiseInstigator is null\n@param NoiseLocation Position of noise source.  If zero vector, use the actor's location.\n@param MaxRange Max range at which the sound may be heard. A value of 0 indicates no max range (though perception may have its own range). Loudness scales the range. (Note: not supported for legacy PawnSensingComponent, only for AIPerception)\n@param Tag Identifier for the noise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, Loudness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, NoiseInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_NoiseLocation = { "NoiseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, MaxRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventMakeNoise_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_MakeNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_Loudness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_NoiseInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_NoiseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_MakeNoise_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_MakeNoise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_MakeNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "MakeNoise", nullptr, nullptr, Z_Construct_UFunction_AActor_MakeNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_MakeNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_MakeNoise_Statics::Actor_eventMakeNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820407, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_MakeNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_MakeNoise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_MakeNoise_Statics::Actor_eventMakeNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_MakeNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_MakeNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execMakeNoise)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Loudness);
	P_GET_OBJECT(APawn,Z_Param_NoiseInstigator);
	P_GET_STRUCT(FVector,Z_Param_NoiseLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeNoise(Z_Param_Loudness,Z_Param_NoiseInstigator,Z_Param_NoiseLocation,Z_Param_MaxRange,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class AActor Function MakeNoise

// Begin Class AActor Function OnRep_AttachmentReplication
struct Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called on client when updated AttachmentReplication value is received for this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called on client when updated AttachmentReplication value is received for this actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_AttachmentReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_OnRep_AttachmentReplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execOnRep_AttachmentReplication)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttachmentReplication();
	P_NATIVE_END;
}
// End Class AActor Function OnRep_AttachmentReplication

// Begin Class AActor Function OnRep_Instigator
struct Z_Construct_UFunction_AActor_OnRep_Instigator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called on clients when Instigator is replicated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called on clients when Instigator is replicated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_Instigator", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_OnRep_Instigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execOnRep_Instigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Instigator();
	P_NATIVE_END;
}
// End Class AActor Function OnRep_Instigator

// Begin Class AActor Function OnRep_Owner
struct Z_Construct_UFunction_AActor_OnRep_Owner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called when owner changes, does nothing by default but can be overridden */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when owner changes, does nothing by default but can be overridden" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_Owner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_Owner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_Owner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_OnRep_Owner_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_OnRep_Owner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_OnRep_Owner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execOnRep_Owner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Owner();
	P_NATIVE_END;
}
// End Class AActor Function OnRep_Owner

// Begin Class AActor Function OnRep_ReplicatedMovement
struct Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** ReplicatedMovement struct replication event */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "ReplicatedMovement struct replication event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_ReplicatedMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execOnRep_ReplicatedMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReplicatedMovement();
	P_NATIVE_END;
}
// End Class AActor Function OnRep_ReplicatedMovement

// Begin Class AActor Function OnRep_ReplicateMovement
struct Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called on client when updated bReplicateMovement value is received for this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called on client when updated bReplicateMovement value is received for this actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "OnRep_ReplicateMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_OnRep_ReplicateMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execOnRep_ReplicateMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReplicateMovement();
	P_NATIVE_END;
}
// End Class AActor Function OnRep_ReplicateMovement

// Begin Class AActor Function PrestreamTextures
struct Z_Construct_UFunction_AActor_PrestreamTextures_Statics
{
	struct Actor_eventPrestreamTextures_Parms
	{
		float Seconds;
		bool bEnableStreaming;
		int32 CinematicTextureGroups;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Calls PrestreamTextures() for all the actor's meshcomponents.\n\x09 * @param Seconds - Number of seconds to force all mip-levels to be resident\n\x09 * @param bEnableStreaming\x09- Whether to start (true) or stop (false) streaming\n\x09 * @param CinematicTextureGroups - Bitfield indicating which texture groups that use extra high-resolution mips\n\x09 */" },
		{ "CPP_Default_CinematicTextureGroups", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Calls PrestreamTextures() for all the actor's meshcomponents.\n@param Seconds - Number of seconds to force all mip-levels to be resident\n@param bEnableStreaming      - Whether to start (true) or stop (false) streaming\n@param CinematicTextureGroups - Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
	static void NewProp_bEnableStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStreaming;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventPrestreamTextures_Parms, Seconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_bEnableStreaming_SetBit(void* Obj)
{
	((Actor_eventPrestreamTextures_Parms*)Obj)->bEnableStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_bEnableStreaming = { "bEnableStreaming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventPrestreamTextures_Parms), &Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_bEnableStreaming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventPrestreamTextures_Parms, CinematicTextureGroups), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_PrestreamTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_Seconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_bEnableStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_CinematicTextureGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_PrestreamTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_PrestreamTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "PrestreamTextures", nullptr, nullptr, Z_Construct_UFunction_AActor_PrestreamTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_PrestreamTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_PrestreamTextures_Statics::Actor_eventPrestreamTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_PrestreamTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_PrestreamTextures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_PrestreamTextures_Statics::Actor_eventPrestreamTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_PrestreamTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_PrestreamTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execPrestreamTextures)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
	P_GET_UBOOL(Z_Param_bEnableStreaming);
	P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrestreamTextures(Z_Param_Seconds,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups);
	P_NATIVE_END;
}
// End Class AActor Function PrestreamTextures

// Begin Class AActor Function ReceiveActorBeginCursorOver
static const FName NAME_AActor_ReceiveActorBeginCursorOver = FName(TEXT("ReceiveActorBeginCursorOver"));
void AActor::ReceiveActorBeginCursorOver()
{
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorBeginCursorOver);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "/** Event when this actor has the mouse moved over it with the clickable interface. */" },
		{ "DisplayName", "ActorBeginCursorOver" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor has the mouse moved over it with the clickable interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorBeginCursorOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorBeginCursorOver

// Begin Class AActor Function ReceiveActorBeginOverlap
struct Actor_eventReceiveActorBeginOverlap_Parms
{
	AActor* OtherActor;
};
static const FName NAME_AActor_ReceiveActorBeginOverlap = FName(TEXT("ReceiveActorBeginOverlap"));
void AActor::ReceiveActorBeginOverlap(AActor* OtherActor)
{
	Actor_eventReceiveActorBeginOverlap_Parms Parms;
	Parms.OtherActor=OtherActor;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorBeginOverlap);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09""Event when this actor overlaps another actor, for example a player walking into a trigger.\n\x09 *\x09""For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.\n\x09 *\x09@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\n\x09 */" },
		{ "DisplayName", "ActorBeginOverlap" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor overlaps another actor, for example a player walking into a trigger.\nFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.\n@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::PropPointers), sizeof(Actor_eventReceiveActorBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveActorBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorBeginOverlap

// Begin Class AActor Function ReceiveActorEndCursorOver
static const FName NAME_AActor_ReceiveActorEndCursorOver = FName(TEXT("ReceiveActorEndCursorOver"));
void AActor::ReceiveActorEndCursorOver()
{
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorEndCursorOver);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "/** Event when this actor has the mouse moved off of it with the clickable interface. */" },
		{ "DisplayName", "ActorEndCursorOver" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor has the mouse moved off of it with the clickable interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorEndCursorOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorEndCursorOver

// Begin Class AActor Function ReceiveActorEndOverlap
struct Actor_eventReceiveActorEndOverlap_Parms
{
	AActor* OtherActor;
};
static const FName NAME_AActor_ReceiveActorEndOverlap = FName(TEXT("ReceiveActorEndOverlap"));
void AActor::ReceiveActorEndOverlap(AActor* OtherActor)
{
	Actor_eventReceiveActorEndOverlap_Parms Parms;
	Parms.OtherActor=OtherActor;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorEndOverlap);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09""Event when an actor no longer overlaps another actor, and they have separated. \n\x09 *\x09@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\n\x09 */" },
		{ "DisplayName", "ActorEndOverlap" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when an actor no longer overlaps another actor, and they have separated.\n@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::PropPointers), sizeof(Actor_eventReceiveActorEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveActorEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveActorEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorEndOverlap

// Begin Class AActor Function ReceiveActorOnClicked
struct Actor_eventReceiveActorOnClicked_Parms
{
	FKey ButtonPressed;
};
static const FName NAME_AActor_ReceiveActorOnClicked = FName(TEXT("ReceiveActorOnClicked"));
void AActor::ReceiveActorOnClicked(FKey ButtonPressed)
{
	Actor_eventReceiveActorOnClicked_Parms Parms;
	Parms.ButtonPressed=ButtonPressed;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorOnClicked);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "/** Event when this actor is clicked by the mouse when using the clickable interface. */" },
		{ "DisplayName", "ActorOnClicked" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor is clicked by the mouse when using the clickable interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnClicked_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::NewProp_ButtonPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnClicked", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::PropPointers), sizeof(Actor_eventReceiveActorOnClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveActorOnClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorOnClicked

// Begin Class AActor Function ReceiveActorOnInputTouchBegin
struct Actor_eventReceiveActorOnInputTouchBegin_Parms
{
	TEnumAsByte<ETouchIndex::Type> FingerIndex;
};
static const FName NAME_AActor_ReceiveActorOnInputTouchBegin = FName(TEXT("ReceiveActorOnInputTouchBegin"));
void AActor::ReceiveActorOnInputTouchBegin(const ETouchIndex::Type FingerIndex)
{
	Actor_eventReceiveActorOnInputTouchBegin_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorOnInputTouchBegin);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/** Event when this actor is touched when click events are enabled. */" },
		{ "DisplayName", "BeginInputTouch" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor is touched when click events are enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnInputTouchBegin_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerIndex_MetaData), NewProp_FingerIndex_MetaData) }; // 3556756081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::NewProp_FingerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnInputTouchBegin", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::PropPointers), sizeof(Actor_eventReceiveActorOnInputTouchBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveActorOnInputTouchBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorOnInputTouchBegin

// Begin Class AActor Function ReceiveActorOnInputTouchEnd
struct Actor_eventReceiveActorOnInputTouchEnd_Parms
{
	TEnumAsByte<ETouchIndex::Type> FingerIndex;
};
static const FName NAME_AActor_ReceiveActorOnInputTouchEnd = FName(TEXT("ReceiveActorOnInputTouchEnd"));
void AActor::ReceiveActorOnInputTouchEnd(const ETouchIndex::Type FingerIndex)
{
	Actor_eventReceiveActorOnInputTouchEnd_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorOnInputTouchEnd);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/** Event when this actor is under the finger when untouched when click events are enabled. */" },
		{ "DisplayName", "EndInputTouch" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor is under the finger when untouched when click events are enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnInputTouchEnd_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerIndex_MetaData), NewProp_FingerIndex_MetaData) }; // 3556756081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::NewProp_FingerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnInputTouchEnd", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::PropPointers), sizeof(Actor_eventReceiveActorOnInputTouchEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveActorOnInputTouchEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorOnInputTouchEnd

// Begin Class AActor Function ReceiveActorOnInputTouchEnter
struct Actor_eventReceiveActorOnInputTouchEnter_Parms
{
	TEnumAsByte<ETouchIndex::Type> FingerIndex;
};
static const FName NAME_AActor_ReceiveActorOnInputTouchEnter = FName(TEXT("ReceiveActorOnInputTouchEnter"));
void AActor::ReceiveActorOnInputTouchEnter(const ETouchIndex::Type FingerIndex)
{
	Actor_eventReceiveActorOnInputTouchEnter_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorOnInputTouchEnter);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/** Event when this actor has a finger moved over it with the clickable interface. */" },
		{ "DisplayName", "TouchEnter" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor has a finger moved over it with the clickable interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnInputTouchEnter_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerIndex_MetaData), NewProp_FingerIndex_MetaData) }; // 3556756081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::NewProp_FingerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnInputTouchEnter", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::PropPointers), sizeof(Actor_eventReceiveActorOnInputTouchEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveActorOnInputTouchEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorOnInputTouchEnter

// Begin Class AActor Function ReceiveActorOnInputTouchLeave
struct Actor_eventReceiveActorOnInputTouchLeave_Parms
{
	TEnumAsByte<ETouchIndex::Type> FingerIndex;
};
static const FName NAME_AActor_ReceiveActorOnInputTouchLeave = FName(TEXT("ReceiveActorOnInputTouchLeave"));
void AActor::ReceiveActorOnInputTouchLeave(const ETouchIndex::Type FingerIndex)
{
	Actor_eventReceiveActorOnInputTouchLeave_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorOnInputTouchLeave);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/** Event when this actor has a finger moved off of it with the clickable interface. */" },
		{ "DisplayName", "TouchLeave" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor has a finger moved off of it with the clickable interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnInputTouchLeave_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerIndex_MetaData), NewProp_FingerIndex_MetaData) }; // 3556756081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::NewProp_FingerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnInputTouchLeave", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::PropPointers), sizeof(Actor_eventReceiveActorOnInputTouchLeave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveActorOnInputTouchLeave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorOnInputTouchLeave

// Begin Class AActor Function ReceiveActorOnReleased
struct Actor_eventReceiveActorOnReleased_Parms
{
	FKey ButtonReleased;
};
static const FName NAME_AActor_ReceiveActorOnReleased = FName(TEXT("ReceiveActorOnReleased"));
void AActor::ReceiveActorOnReleased(FKey ButtonReleased)
{
	Actor_eventReceiveActorOnReleased_Parms Parms;
	Parms.ButtonReleased=ButtonReleased;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveActorOnReleased);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "/** Event when this actor is under the mouse when left mouse button is released while using the clickable interface. */" },
		{ "DisplayName", "ActorOnReleased" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor is under the mouse when left mouse button is released while using the clickable interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonReleased;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::NewProp_ButtonReleased = { "ButtonReleased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveActorOnReleased_Parms, ButtonReleased), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::NewProp_ButtonReleased,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveActorOnReleased", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::PropPointers), sizeof(Actor_eventReceiveActorOnReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveActorOnReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveActorOnReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveActorOnReleased

// Begin Class AActor Function ReceiveAnyDamage
struct Actor_eventReceiveAnyDamage_Parms
{
	float Damage;
	const UDamageType* DamageType;
	AController* InstigatedBy;
	AActor* DamageCauser;
};
static const FName NAME_AActor_ReceiveAnyDamage = FName(TEXT("ReceiveAnyDamage"));
void AActor::ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	Actor_eventReceiveAnyDamage_Parms Parms;
	Parms.Damage=Damage;
	Parms.DamageType=DamageType;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveAnyDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Event when this actor takes ANY damage */" },
		{ "DisplayName", "AnyDamage" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor takes ANY damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveAnyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveAnyDamage", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::PropPointers), sizeof(Actor_eventReceiveAnyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020806, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveAnyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveAnyDamage

// Begin Class AActor Function ReceiveAsyncPhysicsTick
struct Actor_eventReceiveAsyncPhysicsTick_Parms
{
	float DeltaSeconds;
	float SimSeconds;
};
static const FName NAME_AActor_ReceiveAsyncPhysicsTick = FName(TEXT("ReceiveAsyncPhysicsTick"));
void AActor::ReceiveAsyncPhysicsTick(float DeltaSeconds, float SimSeconds)
{
	Actor_eventReceiveAsyncPhysicsTick_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	Parms.SimSeconds=SimSeconds;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveAsyncPhysicsTick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every physics tick if bAsyncPhysicsTickEnabled is true */" },
		{ "DisplayName", "Async Physics Tick" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event called every physics tick if bAsyncPhysicsTickEnabled is true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveAsyncPhysicsTick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::NewProp_SimSeconds = { "SimSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveAsyncPhysicsTick_Parms, SimSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::NewProp_SimSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveAsyncPhysicsTick", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::PropPointers), sizeof(Actor_eventReceiveAsyncPhysicsTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveAsyncPhysicsTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveAsyncPhysicsTick

// Begin Class AActor Function ReceiveBeginPlay
static const FName NAME_AActor_ReceiveBeginPlay = FName(TEXT("ReceiveBeginPlay"));
void AActor::ReceiveBeginPlay()
{
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveBeginPlay);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveBeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_ReceiveBeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveBeginPlay

// Begin Class AActor Function ReceiveDestroyed
static const FName NAME_AActor_ReceiveDestroyed = FName(TEXT("ReceiveDestroyed"));
void AActor::ReceiveDestroyed()
{
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveDestroyed);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the actor has been explicitly destroyed. */" },
		{ "DisplayName", "Destroyed" },
		{ "Keywords", "delete" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the actor has been explicitly destroyed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveDestroyed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_ReceiveDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveDestroyed

// Begin Class AActor Function ReceiveEndPlay
struct Actor_eventReceiveEndPlay_Parms
{
	TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
};
static const FName NAME_AActor_ReceiveEndPlay = FName(TEXT("ReceiveEndPlay"));
void AActor::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason)
{
	Actor_eventReceiveEndPlay_Parms Parms;
	Parms.EndPlayReason=EndPlayReason;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveEndPlay);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event to notify blueprints this actor is being deleted or removed from a level. */" },
		{ "DisplayName", "End Play" },
		{ "Keywords", "delete" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event to notify blueprints this actor is being deleted or removed from a level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveEndPlay", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::PropPointers), sizeof(Actor_eventReceiveEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveEndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveEndPlay

// Begin Class AActor Function ReceiveHit
struct Actor_eventReceiveHit_Parms
{
	UPrimitiveComponent* MyComp;
	AActor* Other;
	UPrimitiveComponent* OtherComp;
	bool bSelfMoved;
	FVector HitLocation;
	FVector HitNormal;
	FVector NormalImpulse;
	FHitResult Hit;
};
static const FName NAME_AActor_ReceiveHit = FName(TEXT("ReceiveHit"));
void AActor::ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult const& Hit)
{
	Actor_eventReceiveHit_Parms Parms;
	Parms.MyComp=MyComp;
	Parms.Other=Other;
	Parms.OtherComp=OtherComp;
	Parms.bSelfMoved=bSelfMoved ? true : false;
	Parms.HitLocation=HitLocation;
	Parms.HitNormal=HitNormal;
	Parms.NormalImpulse=NormalImpulse;
	Parms.Hit=Hit;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveHit);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.\n\x09 * This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\n\x09 * For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.\n\x09 *\n\x09 * @note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.\n\x09 * @note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal'\n\x09 * will be adjusted to indicate force from the other object against this object.\n\x09 * @note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.\n\x09 */" },
		{ "DisplayName", "Hit" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.\nThis could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\nFor events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.\n\n@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.\n@note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal'\nwill be adjusted to indicate force from the other object against this object.\n@note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static void NewProp_bSelfMoved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyComp_MetaData), NewProp_MyComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
void Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_bSelfMoved_SetBit(void* Obj)
{
	((Actor_eventReceiveHit_Parms*)Obj)->bSelfMoved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_bSelfMoved = { "bSelfMoved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventReceiveHit_Parms), &Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_bSelfMoved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_MyComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_bSelfMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveHit", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveHit_Statics::PropPointers), sizeof(Actor_eventReceiveHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveHit

// Begin Class AActor Function ReceivePointDamage
struct Actor_eventReceivePointDamage_Parms
{
	float Damage;
	const UDamageType* DamageType;
	FVector HitLocation;
	FVector HitNormal;
	UPrimitiveComponent* HitComponent;
	FName BoneName;
	FVector ShotFromDirection;
	AController* InstigatedBy;
	AActor* DamageCauser;
	FHitResult HitInfo;
};
static const FName NAME_AActor_ReceivePointDamage = FName(TEXT("ReceivePointDamage"));
void AActor::ReceivePointDamage(float Damage, const UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult const& HitInfo)
{
	Actor_eventReceivePointDamage_Parms Parms;
	Parms.Damage=Damage;
	Parms.DamageType=DamageType;
	Parms.HitLocation=HitLocation;
	Parms.HitNormal=HitNormal;
	Parms.HitComponent=HitComponent;
	Parms.BoneName=BoneName;
	Parms.ShotFromDirection=ShotFromDirection;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	Parms.HitInfo=HitInfo;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceivePointDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceivePointDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Event when this actor takes POINT damage */" },
		{ "DisplayName", "PointDamage" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor takes POINT damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceivePointDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_ShotFromDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::NewProp_HitInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceivePointDamage", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::PropPointers), sizeof(Actor_eventReceivePointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20806, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceivePointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceivePointDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceivePointDamage

// Begin Class AActor Function ReceiveRadialDamage
struct Actor_eventReceiveRadialDamage_Parms
{
	float DamageReceived;
	const UDamageType* DamageType;
	FVector Origin;
	FHitResult HitInfo;
	AController* InstigatedBy;
	AActor* DamageCauser;
};
static const FName NAME_AActor_ReceiveRadialDamage = FName(TEXT("ReceiveRadialDamage"));
void AActor::ReceiveRadialDamage(float DamageReceived, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy, AActor* DamageCauser)
{
	Actor_eventReceiveRadialDamage_Parms Parms;
	Parms.DamageReceived=DamageReceived;
	Parms.DamageType=DamageType;
	Parms.Origin=Origin;
	Parms.HitInfo=HitInfo;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveRadialDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Event when this actor takes RADIAL damage */" },
		{ "DisplayName", "RadialDamage" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event when this actor takes RADIAL damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageReceived;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageReceived = { "DamageReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, DamageReceived), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveRadialDamage", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::PropPointers), sizeof(Actor_eventReceiveRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20806, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveRadialDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveRadialDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveRadialDamage

// Begin Class AActor Function ReceiveTick
struct Actor_eventReceiveTick_Parms
{
	float DeltaSeconds;
};
static const FName NAME_AActor_ReceiveTick = FName(TEXT("ReceiveTick"));
void AActor::ReceiveTick(float DeltaSeconds)
{
	Actor_eventReceiveTick_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	UFunction* Func = FindFunctionChecked(NAME_AActor_ReceiveTick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AActor_ReceiveTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_ReceiveTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_ReceiveTick_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "ReceiveTick", nullptr, nullptr, Z_Construct_UFunction_AActor_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveTick_Statics::PropPointers), sizeof(Actor_eventReceiveTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_ReceiveTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_ReceiveTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Actor_eventReceiveTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_ReceiveTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_ReceiveTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function ReceiveTick

// Begin Class AActor Function RemoveTickPrerequisiteActor
struct Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics
{
	struct Actor_eventRemoveTickPrerequisiteActor_Parms
	{
		AActor* PrerequisiteActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/** Remove tick dependency on PrerequisiteActor. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Remove tick dependency on PrerequisiteActor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor = { "PrerequisiteActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventRemoveTickPrerequisiteActor_Parms, PrerequisiteActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "RemoveTickPrerequisiteActor", nullptr, nullptr, Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::Actor_eventRemoveTickPrerequisiteActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::Actor_eventRemoveTickPrerequisiteActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execRemoveTickPrerequisiteActor)
{
	P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTickPrerequisiteActor(Z_Param_PrerequisiteActor);
	P_NATIVE_END;
}
// End Class AActor Function RemoveTickPrerequisiteActor

// Begin Class AActor Function RemoveTickPrerequisiteComponent
struct Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics
{
	struct Actor_eventRemoveTickPrerequisiteComponent_Parms
	{
		UActorComponent* PrerequisiteComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/** Remove tick dependency on PrerequisiteComponent. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Remove tick dependency on PrerequisiteComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent = { "PrerequisiteComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventRemoveTickPrerequisiteComponent_Parms, PrerequisiteComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerequisiteComponent_MetaData), NewProp_PrerequisiteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "RemoveTickPrerequisiteComponent", nullptr, nullptr, Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::Actor_eventRemoveTickPrerequisiteComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::Actor_eventRemoveTickPrerequisiteComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execRemoveTickPrerequisiteComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTickPrerequisiteComponent(Z_Param_PrerequisiteComponent);
	P_NATIVE_END;
}
// End Class AActor Function RemoveTickPrerequisiteComponent

// Begin Class AActor Function SetActorEnableCollision
struct Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics
{
	struct Actor_eventSetActorEnableCollision_Parms
	{
		bool bNewActorEnableCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Allows enabling/disabling collision for the whole actor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Allows enabling/disabling collision for the whole actor" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewActorEnableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewActorEnableCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::NewProp_bNewActorEnableCollision_SetBit(void* Obj)
{
	((Actor_eventSetActorEnableCollision_Parms*)Obj)->bNewActorEnableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::NewProp_bNewActorEnableCollision = { "bNewActorEnableCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventSetActorEnableCollision_Parms), &Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::NewProp_bNewActorEnableCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::NewProp_bNewActorEnableCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorEnableCollision", nullptr, nullptr, Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::Actor_eventSetActorEnableCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::Actor_eventSetActorEnableCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetActorEnableCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetActorEnableCollision)
{
	P_GET_UBOOL(Z_Param_bNewActorEnableCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorEnableCollision(Z_Param_bNewActorEnableCollision);
	P_NATIVE_END;
}
// End Class AActor Function SetActorEnableCollision

// Begin Class AActor Function SetActorHiddenInGame
struct Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics
{
	struct Actor_eventSetActorHiddenInGame_Parms
	{
		bool bNewHidden;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09Sets the actor to be hidden in the game\n\x09 *\x09@param\x09""bNewHidden\x09Whether or not to hide the actor and all its components\n\x09 */" },
		{ "DisplayName", "Set Actor Hidden In Game" },
		{ "Keywords", "Visible Hidden Show Hide" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Sets the actor to be hidden in the game\n@param  bNewHidden      Whether or not to hide the actor and all its components" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHidden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::NewProp_bNewHidden_SetBit(void* Obj)
{
	((Actor_eventSetActorHiddenInGame_Parms*)Obj)->bNewHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::NewProp_bNewHidden = { "bNewHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventSetActorHiddenInGame_Parms), &Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::NewProp_bNewHidden_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::NewProp_bNewHidden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorHiddenInGame", nullptr, nullptr, Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::Actor_eventSetActorHiddenInGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::Actor_eventSetActorHiddenInGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetActorHiddenInGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetActorHiddenInGame)
{
	P_GET_UBOOL(Z_Param_bNewHidden);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorHiddenInGame(Z_Param_bNewHidden);
	P_NATIVE_END;
}
// End Class AActor Function SetActorHiddenInGame

// Begin Class AActor Function SetActorLabel
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_SetActorLabel_Statics
{
	struct Actor_eventSetActorLabel_Parms
	{
		FString NewActorLabel;
		bool bMarkDirty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/**\n\x09 * Assigns a new label to this actor.  Actor labels are only available in development builds.\n\x09 * @param\x09NewActorLabel\x09The new label string to assign to the actor.  If empty, the actor will have a default label.\n\x09 * @param\x09""bMarkDirty\x09\x09If true the actor's package will be marked dirty for saving.  Otherwise it will not be.  You should pass false for this parameter if dirtying is not allowed (like during loads)\n\x09 */" },
		{ "CPP_Default_bMarkDirty", "true" },
		{ "KeyWords", "Display Name" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Assigns a new label to this actor.  Actor labels are only available in development builds.\n@param       NewActorLabel   The new label string to assign to the actor.  If empty, the actor will have a default label.\n@param       bMarkDirty              If true the actor's package will be marked dirty for saving.  Otherwise it will not be.  You should pass false for this parameter if dirtying is not allowed (like during loads)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewActorLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewActorLabel;
	static void NewProp_bMarkDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_NewActorLabel = { "NewActorLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetActorLabel_Parms, NewActorLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewActorLabel_MetaData), NewProp_NewActorLabel_MetaData) };
void Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_bMarkDirty_SetBit(void* Obj)
{
	((Actor_eventSetActorLabel_Parms*)Obj)->bMarkDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_bMarkDirty = { "bMarkDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventSetActorLabel_Parms), &Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_bMarkDirty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_NewActorLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorLabel_Statics::NewProp_bMarkDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorLabel", nullptr, nullptr, Z_Construct_UFunction_AActor_SetActorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetActorLabel_Statics::Actor_eventSetActorLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetActorLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetActorLabel_Statics::Actor_eventSetActorLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetActorLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetActorLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execSetActorLabel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewActorLabel);
	P_GET_UBOOL(Z_Param_bMarkDirty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorLabel(Z_Param_NewActorLabel,Z_Param_bMarkDirty);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function SetActorLabel

// Begin Class AActor Function SetActorRelativeScale3D
struct Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics
{
	struct Actor_eventSetActorRelativeScale3D_Parms
	{
		FVector NewRelativeScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the actor's RootComponent to the specified relative scale 3d\n\x09 * @param NewRelativeScale\x09New scale to set the actor's RootComponent to\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the actor's RootComponent to the specified relative scale 3d\n@param NewRelativeScale      New scale to set the actor's RootComponent to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRelativeScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::NewProp_NewRelativeScale = { "NewRelativeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetActorRelativeScale3D_Parms, NewRelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::NewProp_NewRelativeScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorRelativeScale3D", nullptr, nullptr, Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::Actor_eventSetActorRelativeScale3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::Actor_eventSetActorRelativeScale3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetActorRelativeScale3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetActorRelativeScale3D)
{
	P_GET_STRUCT(FVector,Z_Param_NewRelativeScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorRelativeScale3D(Z_Param_NewRelativeScale);
	P_NATIVE_END;
}
// End Class AActor Function SetActorRelativeScale3D

// Begin Class AActor Function SetActorScale3D
struct Z_Construct_UFunction_AActor_SetActorScale3D_Statics
{
	struct Actor_eventSetActorScale3D_Parms
	{
		FVector NewScale3D;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Set the Actor's world-space scale. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the Actor's world-space scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewScale3D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActor_SetActorScale3D_Statics::NewProp_NewScale3D = { "NewScale3D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetActorScale3D_Parms, NewScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorScale3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorScale3D_Statics::NewProp_NewScale3D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorScale3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorScale3D", nullptr, nullptr, Z_Construct_UFunction_AActor_SetActorScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorScale3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetActorScale3D_Statics::Actor_eventSetActorScale3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorScale3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetActorScale3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetActorScale3D_Statics::Actor_eventSetActorScale3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetActorScale3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetActorScale3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetActorScale3D)
{
	P_GET_STRUCT(FVector,Z_Param_NewScale3D);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorScale3D(Z_Param_NewScale3D);
	P_NATIVE_END;
}
// End Class AActor Function SetActorScale3D

// Begin Class AActor Function SetActorTickEnabled
struct Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics
{
	struct Actor_eventSetActorTickEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/** \n\x09 * Set this actor's tick functions to be enabled or disabled. Only has an effect if the function is registered\n\x09 * This only modifies the tick function on actor itself\n\x09 * @param\x09""bEnabled\x09Whether it should be enabled or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set this actor's tick functions to be enabled or disabled. Only has an effect if the function is registered\nThis only modifies the tick function on actor itself\n@param       bEnabled        Whether it should be enabled or not" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((Actor_eventSetActorTickEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventSetActorTickEnabled_Parms), &Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorTickEnabled", nullptr, nullptr, Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::Actor_eventSetActorTickEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::Actor_eventSetActorTickEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetActorTickEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetActorTickEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorTickEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class AActor Function SetActorTickEnabled

// Begin Class AActor Function SetActorTickInterval
struct Z_Construct_UFunction_AActor_SetActorTickInterval_Statics
{
	struct Actor_eventSetActorTickInterval_Parms
	{
		float TickInterval;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/** \n\x09 * Sets the tick interval of this actor's primary tick function. Will not enable a disabled tick function. Takes effect on next tick. \n\x09 * @param TickInterval\x09The rate at which this actor should be ticking\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Sets the tick interval of this actor's primary tick function. Will not enable a disabled tick function. Takes effect on next tick.\n@param TickInterval  The rate at which this actor should be ticking" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetActorTickInterval_Parms, TickInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::NewProp_TickInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetActorTickInterval", nullptr, nullptr, Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::Actor_eventSetActorTickInterval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::Actor_eventSetActorTickInterval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetActorTickInterval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetActorTickInterval)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TickInterval);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorTickInterval(Z_Param_TickInterval);
	P_NATIVE_END;
}
// End Class AActor Function SetActorTickInterval

// Begin Class AActor Function SetAutoDestroyWhenFinished
struct Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics
{
	struct Actor_eventSetAutoDestroyWhenFinished_Parms
	{
		bool bVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bVal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::NewProp_bVal_SetBit(void* Obj)
{
	((Actor_eventSetAutoDestroyWhenFinished_Parms*)Obj)->bVal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::NewProp_bVal = { "bVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventSetAutoDestroyWhenFinished_Parms), &Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::NewProp_bVal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::NewProp_bVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetAutoDestroyWhenFinished", nullptr, nullptr, Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::Actor_eventSetAutoDestroyWhenFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::Actor_eventSetAutoDestroyWhenFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetAutoDestroyWhenFinished)
{
	P_GET_UBOOL(Z_Param_bVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoDestroyWhenFinished(Z_Param_bVal);
	P_NATIVE_END;
}
// End Class AActor Function SetAutoDestroyWhenFinished

// Begin Class AActor Function SetFolderPath
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_SetFolderPath_Statics
{
	struct Actor_eventSetFolderPath_Parms
	{
		FName NewFolderPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/**\n\x09 * Assigns a new folder to this actor. Actor folder paths are only available in development builds.\n\x09 * @param\x09NewFolderPath\x09\x09The new folder to assign to the actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Assigns a new folder to this actor. Actor folder paths are only available in development builds.\n@param       NewFolderPath           The new folder to assign to the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewFolderPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AActor_SetFolderPath_Statics::NewProp_NewFolderPath = { "NewFolderPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetFolderPath_Parms, NewFolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFolderPath_MetaData), NewProp_NewFolderPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetFolderPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetFolderPath_Statics::NewProp_NewFolderPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetFolderPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetFolderPath", nullptr, nullptr, Z_Construct_UFunction_AActor_SetFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetFolderPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetFolderPath_Statics::Actor_eventSetFolderPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetFolderPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetFolderPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetFolderPath_Statics::Actor_eventSetFolderPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetFolderPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetFolderPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execSetFolderPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewFolderPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFolderPath(Z_Param_Out_NewFolderPath);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function SetFolderPath

// Begin Class AActor Function SetIsTemporarilyHiddenInEditor
#if WITH_EDITOR
struct Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics
{
	struct Actor_eventSetIsTemporarilyHiddenInEditor_Parms
	{
		bool bIsHidden;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Editing" },
		{ "Comment", "/**\n\x09 * Explicitly sets whether or not this actor is hidden in the editor for the duration of the current editor session\n\x09 * @param bIsHidden\x09True if the actor is hidden\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Explicitly sets whether or not this actor is hidden in the editor for the duration of the current editor session\n@param bIsHidden     True if the actor is hidden" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::NewProp_bIsHidden_SetBit(void* Obj)
{
	((Actor_eventSetIsTemporarilyHiddenInEditor_Parms*)Obj)->bIsHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventSetIsTemporarilyHiddenInEditor_Parms), &Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::NewProp_bIsHidden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetIsTemporarilyHiddenInEditor", nullptr, nullptr, Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::Actor_eventSetIsTemporarilyHiddenInEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::Actor_eventSetIsTemporarilyHiddenInEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AActor::execSetIsTemporarilyHiddenInEditor)
{
	P_GET_UBOOL(Z_Param_bIsHidden);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsTemporarilyHiddenInEditor(Z_Param_bIsHidden);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AActor Function SetIsTemporarilyHiddenInEditor

// Begin Class AActor Function SetLifeSpan
struct Z_Construct_UFunction_AActor_SetLifeSpan_Statics
{
	struct Actor_eventSetLifeSpan_Parms
	{
		float InLifespan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Set the lifespan of this actor. When it expires the object will be destroyed. If requested lifespan is 0, the timer is cleared and the actor will not be destroyed. */" },
		{ "Keywords", "delete destroy" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the lifespan of this actor. When it expires the object will be destroyed. If requested lifespan is 0, the timer is cleared and the actor will not be destroyed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLifespan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_SetLifeSpan_Statics::NewProp_InLifespan = { "InLifespan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetLifeSpan_Parms, InLifespan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetLifeSpan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetLifeSpan_Statics::NewProp_InLifespan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetLifeSpan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetLifeSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetLifeSpan", nullptr, nullptr, Z_Construct_UFunction_AActor_SetLifeSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetLifeSpan_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetLifeSpan_Statics::Actor_eventSetLifeSpan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetLifeSpan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetLifeSpan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetLifeSpan_Statics::Actor_eventSetLifeSpan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetLifeSpan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetLifeSpan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetLifeSpan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLifespan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLifeSpan(Z_Param_InLifespan);
	P_NATIVE_END;
}
// End Class AActor Function SetLifeSpan

// Begin Class AActor Function SetMinNetUpdateFrequency
struct Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics
{
	struct Actor_eventSetMinNetUpdateFrequency_Parms
	{
		float MinFrequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09 * Set the frequency to throttle down to when replicated properties are changing infrequently. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the frequency to throttle down to when replicated properties are changing infrequently." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::NewProp_MinFrequency = { "MinFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetMinNetUpdateFrequency_Parms, MinFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::NewProp_MinFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetMinNetUpdateFrequency", nullptr, nullptr, Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::Actor_eventSetMinNetUpdateFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::Actor_eventSetMinNetUpdateFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetMinNetUpdateFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinNetUpdateFrequency(Z_Param_MinFrequency);
	P_NATIVE_END;
}
// End Class AActor Function SetMinNetUpdateFrequency

// Begin Class AActor Function SetNetCullDistanceSquared
struct Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics
{
	struct Actor_eventSetNetCullDistanceSquared_Parms
	{
		float DistanceSq;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** \n\x09 * Set the square of the max distance from the client's viewpoint that this actor is relevant and will be replicated.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the square of the max distance from the client's viewpoint that this actor is relevant and will be replicated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceSq;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::NewProp_DistanceSq = { "DistanceSq", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetNetCullDistanceSquared_Parms, DistanceSq), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::NewProp_DistanceSq,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetNetCullDistanceSquared", nullptr, nullptr, Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::Actor_eventSetNetCullDistanceSquared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::Actor_eventSetNetCullDistanceSquared_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetNetCullDistanceSquared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetNetCullDistanceSquared)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceSq);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNetCullDistanceSquared(Z_Param_DistanceSq);
	P_NATIVE_END;
}
// End Class AActor Function SetNetCullDistanceSquared

// Begin Class AActor Function SetNetDormancy
struct Z_Construct_UFunction_AActor_SetNetDormancy_Statics
{
	struct Actor_eventSetNetDormancy_Parms
	{
		TEnumAsByte<ENetDormancy> NewDormancy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Puts actor in dormant networking state */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Puts actor in dormant networking state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewDormancy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_SetNetDormancy_Statics::NewProp_NewDormancy = { "NewDormancy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetNetDormancy_Parms, NewDormancy), Z_Construct_UEnum_Engine_ENetDormancy, METADATA_PARAMS(0, nullptr) }; // 2737447960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetNetDormancy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetNetDormancy_Statics::NewProp_NewDormancy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetDormancy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetNetDormancy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetNetDormancy", nullptr, nullptr, Z_Construct_UFunction_AActor_SetNetDormancy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetDormancy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetNetDormancy_Statics::Actor_eventSetNetDormancy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020407, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetDormancy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetNetDormancy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetNetDormancy_Statics::Actor_eventSetNetDormancy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetNetDormancy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetNetDormancy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetNetDormancy)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NewDormancy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNetDormancy(ENetDormancy(Z_Param_NewDormancy));
	P_NATIVE_END;
}
// End Class AActor Function SetNetDormancy

// Begin Class AActor Function SetNetUpdateFrequency
struct Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics
{
	struct Actor_eventSetNetUpdateFrequency_Parms
	{
		float Frequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09 * Set the frequency at which this object will be considered for replication.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the frequency at which this object will be considered for replication." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetNetUpdateFrequency_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::NewProp_Frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetNetUpdateFrequency", nullptr, nullptr, Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::Actor_eventSetNetUpdateFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::Actor_eventSetNetUpdateFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetNetUpdateFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetNetUpdateFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNetUpdateFrequency(Z_Param_Frequency);
	P_NATIVE_END;
}
// End Class AActor Function SetNetUpdateFrequency

// Begin Class AActor Function SetOwner
struct Z_Construct_UFunction_AActor_SetOwner_Statics
{
	struct Actor_eventSetOwner_Parms
	{
		AActor* NewOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** \n\x09 * Set the owner of this Actor, used primarily for network replication. \n\x09 * @param NewOwner\x09The Actor who takes over ownership of this Actor\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the owner of this Actor, used primarily for network replication.\n@param NewOwner      The Actor who takes over ownership of this Actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActor_SetOwner_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetOwner_Parms, NewOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetOwner_Statics::NewProp_NewOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetOwner", nullptr, nullptr, Z_Construct_UFunction_AActor_SetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetOwner_Statics::Actor_eventSetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetOwner_Statics::Actor_eventSetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetOwner)
{
	P_GET_OBJECT(AActor,Z_Param_NewOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwner(Z_Param_NewOwner);
	P_NATIVE_END;
}
// End Class AActor Function SetOwner

// Begin Class AActor Function SetPhysicsReplicationMode
struct Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics
{
	struct Actor_eventSetPhysicsReplicationMode_Parms
	{
		EPhysicsReplicationMode ReplicationMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Set the physics replication mode of this body, via EPhysicsReplicationMode */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set the physics replication mode of this body, via EPhysicsReplicationMode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReplicationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::NewProp_ReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::NewProp_ReplicationMode = { "ReplicationMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetPhysicsReplicationMode_Parms, ReplicationMode), Z_Construct_UEnum_Engine_EPhysicsReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationMode_MetaData), NewProp_ReplicationMode_MetaData) }; // 1461121912
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::NewProp_ReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::NewProp_ReplicationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetPhysicsReplicationMode", nullptr, nullptr, Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::Actor_eventSetPhysicsReplicationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::Actor_eventSetPhysicsReplicationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetPhysicsReplicationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetPhysicsReplicationMode)
{
	P_GET_ENUM(EPhysicsReplicationMode,Z_Param_ReplicationMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhysicsReplicationMode(EPhysicsReplicationMode(Z_Param_ReplicationMode));
	P_NATIVE_END;
}
// End Class AActor Function SetPhysicsReplicationMode

// Begin Class AActor Function SetRayTracingGroupId
struct Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics
{
	struct Actor_eventSetRayTracingGroupId_Parms
	{
		int32 InRaytracingGroupId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** Specify a RayTracingGroupId for this actors. Components with invalid RayTracingGroupId will inherit the actors. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Specify a RayTracingGroupId for this actors. Components with invalid RayTracingGroupId will inherit the actors." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InRaytracingGroupId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::NewProp_InRaytracingGroupId = { "InRaytracingGroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetRayTracingGroupId_Parms, InRaytracingGroupId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::NewProp_InRaytracingGroupId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetRayTracingGroupId", nullptr, nullptr, Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::Actor_eventSetRayTracingGroupId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::Actor_eventSetRayTracingGroupId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetRayTracingGroupId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetRayTracingGroupId)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InRaytracingGroupId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRayTracingGroupId(Z_Param_InRaytracingGroupId);
	P_NATIVE_END;
}
// End Class AActor Function SetRayTracingGroupId

// Begin Class AActor Function SetReplicateMovement
struct Z_Construct_UFunction_AActor_SetReplicateMovement_Statics
{
	struct Actor_eventSetReplicateMovement_Parms
	{
		bool bInReplicateMovement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/**\n\x09 * Set whether this actor's movement replicates to network clients.\n\x09 * @param bInReplicateMovement Whether this Actor's movement replicates to clients.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set whether this actor's movement replicates to network clients.\n@param bInReplicateMovement Whether this Actor's movement replicates to clients." },
	};
#endif // WITH_METADATA
	static void NewProp_bInReplicateMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReplicateMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::NewProp_bInReplicateMovement_SetBit(void* Obj)
{
	((Actor_eventSetReplicateMovement_Parms*)Obj)->bInReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::NewProp_bInReplicateMovement = { "bInReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventSetReplicateMovement_Parms), &Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::NewProp_bInReplicateMovement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::NewProp_bInReplicateMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetReplicateMovement", nullptr, nullptr, Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::Actor_eventSetReplicateMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::Actor_eventSetReplicateMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetReplicateMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetReplicateMovement)
{
	P_GET_UBOOL(Z_Param_bInReplicateMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReplicateMovement(Z_Param_bInReplicateMovement);
	P_NATIVE_END;
}
// End Class AActor Function SetReplicateMovement

// Begin Class AActor Function SetReplicates
struct Z_Construct_UFunction_AActor_SetReplicates_Statics
{
	struct Actor_eventSetReplicates_Parms
	{
		bool bInReplicates;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/**\n\x09 * Set whether this actor replicates to network clients. When this actor is spawned on the server it will be sent to clients as well.\n\x09 * Properties flagged for replication will update on clients if they change on the server.\n\x09 * Internally changes the RemoteRole property and handles the cases where the actor needs to be added to the network actor list.\n\x09 * @param bInReplicates Whether this Actor replicates to network clients.\n\x09 * @see https://docs.unrealengine.com/InteractiveExperiences/Networking/Actors\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set whether this actor replicates to network clients. When this actor is spawned on the server it will be sent to clients as well.\nProperties flagged for replication will update on clients if they change on the server.\nInternally changes the RemoteRole property and handles the cases where the actor needs to be added to the network actor list.\n@param bInReplicates Whether this Actor replicates to network clients.\n@see https://docs.unrealengine.com/InteractiveExperiences/Networking/Actors" },
	};
#endif // WITH_METADATA
	static void NewProp_bInReplicates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReplicates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_SetReplicates_Statics::NewProp_bInReplicates_SetBit(void* Obj)
{
	((Actor_eventSetReplicates_Parms*)Obj)->bInReplicates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetReplicates_Statics::NewProp_bInReplicates = { "bInReplicates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventSetReplicates_Parms), &Z_Construct_UFunction_AActor_SetReplicates_Statics::NewProp_bInReplicates_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetReplicates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetReplicates_Statics::NewProp_bInReplicates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetReplicates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetReplicates", nullptr, nullptr, Z_Construct_UFunction_AActor_SetReplicates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicates_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetReplicates_Statics::Actor_eventSetReplicates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020407, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetReplicates_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetReplicates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetReplicates_Statics::Actor_eventSetReplicates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetReplicates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetReplicates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetReplicates)
{
	P_GET_UBOOL(Z_Param_bInReplicates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReplicates(Z_Param_bInReplicates);
	P_NATIVE_END;
}
// End Class AActor Function SetReplicates

// Begin Class AActor Function SetTickableWhenPaused
struct Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics
{
	struct Actor_eventSetTickableWhenPaused_Parms
	{
		bool bTickableWhenPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/** Sets whether this actor can tick when paused. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Sets whether this actor can tick when paused." },
	};
#endif // WITH_METADATA
	static void NewProp_bTickableWhenPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickableWhenPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused_SetBit(void* Obj)
{
	((Actor_eventSetTickableWhenPaused_Parms*)Obj)->bTickableWhenPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused = { "bTickableWhenPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventSetTickableWhenPaused_Parms), &Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetTickableWhenPaused", nullptr, nullptr, Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::Actor_eventSetTickableWhenPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::Actor_eventSetTickableWhenPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetTickableWhenPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetTickableWhenPaused)
{
	P_GET_UBOOL(Z_Param_bTickableWhenPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTickableWhenPaused(Z_Param_bTickableWhenPaused);
	P_NATIVE_END;
}
// End Class AActor Function SetTickableWhenPaused

// Begin Class AActor Function SetTickGroup
struct Z_Construct_UFunction_AActor_SetTickGroup_Statics
{
	struct Actor_eventSetTickGroup_Parms
	{
		TEnumAsByte<ETickingGroup> NewTickGroup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor|Tick" },
		{ "Comment", "/**\n\x09 * Sets the ticking group for this actor.\n\x09 * @param NewTickGroup the new value to assign\n\x09 */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Sets the ticking group for this actor.\n@param NewTickGroup the new value to assign" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTickGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActor_SetTickGroup_Statics::NewProp_NewTickGroup = { "NewTickGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventSetTickGroup_Parms, NewTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(0, nullptr) }; // 3616902692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_SetTickGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_SetTickGroup_Statics::NewProp_NewTickGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_SetTickGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "SetTickGroup", nullptr, nullptr, Z_Construct_UFunction_AActor_SetTickGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_SetTickGroup_Statics::Actor_eventSetTickGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_SetTickGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_SetTickGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_SetTickGroup_Statics::Actor_eventSetTickGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_SetTickGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_SetTickGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execSetTickGroup)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NewTickGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTickGroup(ETickingGroup(Z_Param_NewTickGroup));
	P_NATIVE_END;
}
// End Class AActor Function SetTickGroup

// Begin Class AActor Function TearOff
struct Z_Construct_UFunction_AActor_TearOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Networking - Server - TearOff this actor to stop replication to clients. Will set bTearOff to true. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Networking - Server - TearOff this actor to stop replication to clients. Will set bTearOff to true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_TearOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "TearOff", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_TearOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_TearOff_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_TearOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_TearOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execTearOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TearOff();
	P_NATIVE_END;
}
// End Class AActor Function TearOff

// Begin Class AActor Function UserConstructionScript
static const FName NAME_AActor_UserConstructionScript = FName(TEXT("UserConstructionScript"));
void AActor::UserConstructionScript()
{
	UFunction* Func = FindFunctionChecked(NAME_AActor_UserConstructionScript);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AActor_UserConstructionScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/**\n\x09 * Construction script, the place to spawn components and do other setup.\n\x09 * @note Name used in CreateBlueprint function\n\x09 */" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.\n@note Name used in CreateBlueprint function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_UserConstructionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "UserConstructionScript", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_UserConstructionScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_UserConstructionScript_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActor_UserConstructionScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_UserConstructionScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AActor Function UserConstructionScript

// Begin Class AActor Function WasRecentlyRendered
struct Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics
{
	struct Actor_eventWasRecentlyRendered_Parms
	{
		float Tolerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Returns true if this actor has been rendered \"recently\", with a tolerance in seconds to define what \"recent\" means. \n\x09 * e.g.: If a tolerance of 0.1 is used, this function will return true only if the actor was rendered in the last 0.1 seconds of game time. \n\x09 *\n\x09 * @param Tolerance  How many seconds ago the actor last render time can be and still count as having been \"recently\" rendered.\n\x09 * @return Whether this actor was recently rendered.\n\x09 */" },
		{ "CPP_Default_Tolerance", "0.200000" },
		{ "DisplayName", "Was Actor Recently Rendered" },
		{ "Keywords", "scene visible" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Returns true if this actor has been rendered \"recently\", with a tolerance in seconds to define what \"recent\" means.\ne.g.: If a tolerance of 0.1 is used, this function will return true only if the actor was rendered in the last 0.1 seconds of game time.\n\n@param Tolerance  How many seconds ago the actor last render time can be and still count as having been \"recently\" rendered.\n@return Whether this actor was recently rendered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Actor_eventWasRecentlyRendered_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Actor_eventWasRecentlyRendered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Actor_eventWasRecentlyRendered_Parms), &Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActor, nullptr, "WasRecentlyRendered", nullptr, nullptr, Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::Actor_eventWasRecentlyRendered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::Actor_eventWasRecentlyRendered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActor_WasRecentlyRendered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActor::execWasRecentlyRendered)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasRecentlyRendered(Z_Param_Tolerance);
	P_NATIVE_END;
}
// End Class AActor Function WasRecentlyRendered

// Begin Class AActor
void AActor::StaticRegisterNativesAActor()
{
	UClass* Class = AActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActorHasTag", &AActor::execActorHasTag },
		{ "AddComponent", &AActor::execAddComponent },
		{ "AddComponentByClass", &AActor::execAddComponentByClass },
		{ "AddTickPrerequisiteActor", &AActor::execAddTickPrerequisiteActor },
		{ "AddTickPrerequisiteComponent", &AActor::execAddTickPrerequisiteComponent },
		{ "CanTriggerResimulation", &AActor::execCanTriggerResimulation },
		{ "CreateInputComponent", &AActor::execCreateInputComponent },
		{ "DetachRootComponentFromParent", &AActor::execDetachRootComponentFromParent },
		{ "DisableInput", &AActor::execDisableInput },
		{ "EnableInput", &AActor::execEnableInput },
		{ "FindComponentByTag", &AActor::execFindComponentByTag },
		{ "FinishAddComponent", &AActor::execFinishAddComponent },
		{ "FlushNetDormancy", &AActor::execFlushNetDormancy },
		{ "ForceNetUpdate", &AActor::execForceNetUpdate },
		{ "GetActorBounds", &AActor::execGetActorBounds },
		{ "GetActorEnableCollision", &AActor::execGetActorEnableCollision },
		{ "GetActorEyesViewPoint", &AActor::execGetActorEyesViewPoint },
		{ "GetActorForwardVector", &AActor::execGetActorForwardVector },
#if WITH_EDITOR
		{ "GetActorLabel", &AActor::execGetActorLabel },
#endif // WITH_EDITOR
		{ "GetActorRelativeScale3D", &AActor::execGetActorRelativeScale3D },
		{ "GetActorRightVector", &AActor::execGetActorRightVector },
		{ "GetActorScale3D", &AActor::execGetActorScale3D },
		{ "GetActorTickInterval", &AActor::execGetActorTickInterval },
		{ "GetActorTimeDilation", &AActor::execGetActorTimeDilation },
		{ "GetActorUpVector", &AActor::execGetActorUpVector },
		{ "GetAllChildActors", &AActor::execGetAllChildActors },
		{ "GetAttachedActors", &AActor::execGetAttachedActors },
		{ "GetAttachParentActor", &AActor::execGetAttachParentActor },
		{ "GetAttachParentSocketName", &AActor::execGetAttachParentSocketName },
		{ "GetComponentByClass", &AActor::execGetComponentByClass },
		{ "GetComponentsByInterface", &AActor::execGetComponentsByInterface },
		{ "GetComponentsByTag", &AActor::execGetComponentsByTag },
#if WITH_EDITOR
		{ "GetDefaultActorLabel", &AActor::execGetDefaultActorLabel },
#endif // WITH_EDITOR
		{ "GetDistanceTo", &AActor::execGetDistanceTo },
		{ "GetDotProductTo", &AActor::execGetDotProductTo },
#if WITH_EDITOR
		{ "GetFolderPath", &AActor::execGetFolderPath },
#endif // WITH_EDITOR
		{ "GetGameTimeSinceCreation", &AActor::execGetGameTimeSinceCreation },
		{ "GetHorizontalDistanceTo", &AActor::execGetHorizontalDistanceTo },
		{ "GetHorizontalDotProductTo", &AActor::execGetHorizontalDotProductTo },
		{ "GetInputAxisKeyValue", &AActor::execGetInputAxisKeyValue },
		{ "GetInputAxisValue", &AActor::execGetInputAxisValue },
		{ "GetInputVectorAxisValue", &AActor::execGetInputVectorAxisValue },
		{ "GetInstigator", &AActor::execGetInstigator },
		{ "GetInstigatorController", &AActor::execGetInstigatorController },
		{ "GetLevel", &AActor::execGetLevel },
		{ "GetLevelTransform", &AActor::execGetLevelTransform },
		{ "GetLifeSpan", &AActor::execGetLifeSpan },
		{ "GetLocalRole", &AActor::execGetLocalRole },
		{ "GetMinNetUpdateFrequency", &AActor::execGetMinNetUpdateFrequency },
		{ "GetNetCullDistanceSquared", &AActor::execGetNetCullDistanceSquared },
		{ "GetNetUpdateFrequency", &AActor::execGetNetUpdateFrequency },
		{ "GetOverlappingActors", &AActor::execGetOverlappingActors },
		{ "GetOverlappingComponents", &AActor::execGetOverlappingComponents },
		{ "GetOwner", &AActor::execGetOwner },
		{ "GetParentActor", &AActor::execGetParentActor },
		{ "GetParentComponent", &AActor::execGetParentComponent },
		{ "GetPhysicsReplicationMode", &AActor::execGetPhysicsReplicationMode },
		{ "GetRayTracingGroupId", &AActor::execGetRayTracingGroupId },
		{ "GetRemoteRole", &AActor::execGetRemoteRole },
		{ "GetResimulationThreshold", &AActor::execGetResimulationThreshold },
		{ "GetSquaredDistanceTo", &AActor::execGetSquaredDistanceTo },
		{ "GetSquaredHorizontalDistanceTo", &AActor::execGetSquaredHorizontalDistanceTo },
		{ "GetTickableWhenPaused", &AActor::execGetTickableWhenPaused },
		{ "GetTransform", &AActor::execGetTransform },
		{ "GetVelocity", &AActor::execGetVelocity },
		{ "GetVerticalDistanceTo", &AActor::execGetVerticalDistanceTo },
		{ "HasAuthority", &AActor::execHasAuthority },
		{ "IsActorBeingDestroyed", &AActor::execIsActorBeingDestroyed },
		{ "IsActorTickEnabled", &AActor::execIsActorTickEnabled },
		{ "IsChildActor", &AActor::execIsChildActor },
#if WITH_EDITOR
		{ "IsEditable", &AActor::execIsEditable },
		{ "IsHiddenEd", &AActor::execIsHiddenEd },
		{ "IsHiddenEdAtStartup", &AActor::execIsHiddenEdAtStartup },
#endif // WITH_EDITOR
		{ "IsOverlappingActor", &AActor::execIsOverlappingActor },
#if WITH_EDITOR
		{ "IsSelectable", &AActor::execIsSelectable },
		{ "IsTemporarilyHiddenInEditor", &AActor::execIsTemporarilyHiddenInEditor },
#endif // WITH_EDITOR
		{ "K2_AddActorLocalOffset", &AActor::execK2_AddActorLocalOffset },
		{ "K2_AddActorLocalRotation", &AActor::execK2_AddActorLocalRotation },
		{ "K2_AddActorLocalTransform", &AActor::execK2_AddActorLocalTransform },
		{ "K2_AddActorWorldOffset", &AActor::execK2_AddActorWorldOffset },
		{ "K2_AddActorWorldRotation", &AActor::execK2_AddActorWorldRotation },
		{ "K2_AddActorWorldTransform", &AActor::execK2_AddActorWorldTransform },
		{ "K2_AddActorWorldTransformKeepScale", &AActor::execK2_AddActorWorldTransformKeepScale },
		{ "K2_AttachRootComponentTo", &AActor::execK2_AttachRootComponentTo },
		{ "K2_AttachRootComponentToActor", &AActor::execK2_AttachRootComponentToActor },
		{ "K2_AttachToActor", &AActor::execK2_AttachToActor },
		{ "K2_AttachToComponent", &AActor::execK2_AttachToComponent },
		{ "K2_DestroyActor", &AActor::execK2_DestroyActor },
		{ "K2_DetachFromActor", &AActor::execK2_DetachFromActor },
		{ "K2_GetActorLocation", &AActor::execK2_GetActorLocation },
		{ "K2_GetActorRotation", &AActor::execK2_GetActorRotation },
		{ "K2_GetComponentsByClass", &AActor::execK2_GetComponentsByClass },
		{ "K2_GetRootComponent", &AActor::execK2_GetRootComponent },
		{ "K2_SetActorLocation", &AActor::execK2_SetActorLocation },
		{ "K2_SetActorLocationAndRotation", &AActor::execK2_SetActorLocationAndRotation },
		{ "K2_SetActorRelativeLocation", &AActor::execK2_SetActorRelativeLocation },
		{ "K2_SetActorRelativeRotation", &AActor::execK2_SetActorRelativeRotation },
		{ "K2_SetActorRelativeTransform", &AActor::execK2_SetActorRelativeTransform },
		{ "K2_SetActorRotation", &AActor::execK2_SetActorRotation },
		{ "K2_SetActorTransform", &AActor::execK2_SetActorTransform },
		{ "K2_TeleportTo", &AActor::execK2_TeleportTo },
		{ "MakeNoise", &AActor::execMakeNoise },
		{ "OnRep_AttachmentReplication", &AActor::execOnRep_AttachmentReplication },
		{ "OnRep_Instigator", &AActor::execOnRep_Instigator },
		{ "OnRep_Owner", &AActor::execOnRep_Owner },
		{ "OnRep_ReplicatedMovement", &AActor::execOnRep_ReplicatedMovement },
		{ "OnRep_ReplicateMovement", &AActor::execOnRep_ReplicateMovement },
		{ "PrestreamTextures", &AActor::execPrestreamTextures },
		{ "RemoveTickPrerequisiteActor", &AActor::execRemoveTickPrerequisiteActor },
		{ "RemoveTickPrerequisiteComponent", &AActor::execRemoveTickPrerequisiteComponent },
		{ "SetActorEnableCollision", &AActor::execSetActorEnableCollision },
		{ "SetActorHiddenInGame", &AActor::execSetActorHiddenInGame },
#if WITH_EDITOR
		{ "SetActorLabel", &AActor::execSetActorLabel },
#endif // WITH_EDITOR
		{ "SetActorRelativeScale3D", &AActor::execSetActorRelativeScale3D },
		{ "SetActorScale3D", &AActor::execSetActorScale3D },
		{ "SetActorTickEnabled", &AActor::execSetActorTickEnabled },
		{ "SetActorTickInterval", &AActor::execSetActorTickInterval },
		{ "SetAutoDestroyWhenFinished", &AActor::execSetAutoDestroyWhenFinished },
#if WITH_EDITOR
		{ "SetFolderPath", &AActor::execSetFolderPath },
		{ "SetIsTemporarilyHiddenInEditor", &AActor::execSetIsTemporarilyHiddenInEditor },
#endif // WITH_EDITOR
		{ "SetLifeSpan", &AActor::execSetLifeSpan },
		{ "SetMinNetUpdateFrequency", &AActor::execSetMinNetUpdateFrequency },
		{ "SetNetCullDistanceSquared", &AActor::execSetNetCullDistanceSquared },
		{ "SetNetDormancy", &AActor::execSetNetDormancy },
		{ "SetNetUpdateFrequency", &AActor::execSetNetUpdateFrequency },
		{ "SetOwner", &AActor::execSetOwner },
		{ "SetPhysicsReplicationMode", &AActor::execSetPhysicsReplicationMode },
		{ "SetRayTracingGroupId", &AActor::execSetRayTracingGroupId },
		{ "SetReplicateMovement", &AActor::execSetReplicateMovement },
		{ "SetReplicates", &AActor::execSetReplicates },
		{ "SetTickableWhenPaused", &AActor::execSetTickableWhenPaused },
		{ "SetTickGroup", &AActor::execSetTickGroup },
		{ "TearOff", &AActor::execTearOff },
		{ "WasRecentlyRendered", &AActor::execWasRecentlyRendered },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActor);
UClass* Z_Construct_UClass_AActor_NoRegister()
{
	return AActor::StaticClass();
}
struct Z_Construct_UClass_AActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Actor is the base class for an Object that can be placed or spawned in a level.\n * Actors may contain a collection of ActorComponents, which can be used to control how actors move, how they are rendered, etc.\n * The other main function of an Actor is the replication of properties and function calls across the network during play.\n * \n * \n * Actor initialization has multiple steps, here's the order of important virtual functions that get called:\n * - UObject::PostLoad: For actors statically placed in a level, the normal UObject PostLoad gets called both in the editor and during gameplay.\n *                      This is not called for newly spawned actors.\n * - UActorComponent::OnComponentCreated: When an actor is spawned in the editor or during gameplay, this gets called for any native components.\n *                                        For blueprint-created components, this gets called during construction for that component.\n *                                        This is not called for components loaded from a level.\n * - AActor::PreRegisterAllComponents: For statically placed actors and spawned actors that have native root components, this gets called now.\n *                                     For blueprint actors without a native root component, these registration functions get called later during construction.\n * - UActorComponent::RegisterComponent: All components are registered in editor and at runtime, this creates their physical/visual representation.\n *                                       These calls may be distributed over multiple frames, but are always after PreRegisterAllComponents.\n *                                       This may also get called later on after an UnregisterComponent call removes it from the world.\n * - AActor::PostRegisterAllComponents: Called for all actors both in the editor and in gameplay, this is the last function that is called in all cases.\n * - AActor::PostActorCreated: When an actor is created in the editor or during gameplay, this gets called right before construction.\n *                             This is not called for components loaded from a level.\n * - AActor::UserConstructionScript: Called for blueprints that implement a construction script.\n * - AActor::OnConstruction: Called at the end of ExecuteConstruction, which calls the blueprint construction script.\n *                           This is called after all blueprint-created components are fully created and registered.\n *                           This is only called during gameplay for spawned actors, and may get rerun in the editor when changing blueprints.\n * - AActor::PreInitializeComponents: Called before InitializeComponent is called on the actor's components.\n *                                    This is only called during gameplay and in certain editor preview windows.\n * - UActorComponent::Activate: This will be called only if the component has bAutoActivate set.\n *                              It will also got called later on if a component is manually activated.\n * - UActorComponent::InitializeComponent: This will be called only if the component has bWantsInitializeComponentSet.\n *                                         This only happens once per gameplay session.\n * - AActor::PostInitializeComponents: Called after the actor's components have been initialized, only during gameplay and some editor previews.\n * - AActor::BeginPlay: Called when the level starts ticking, only during actual gameplay.\n *                      This normally happens right after PostInitializeComponents but can be delayed for networked or child actors.\n *\n * @see https://docs.unrealengine.com/Programming/UnrealArchitecture/Actors\n * @see https://docs.unrealengine.com/Programming/UnrealArchitecture/Actors/ActorLifecycle\n * @see UActorComponent\n */" },
		{ "IncludePath", "GameFramework/Actor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "An Actor is an object that can be placed or spawned in the world." },
		{ "ToolTip", "Actor is the base class for an Object that can be placed or spawned in a level.\nActors may contain a collection of ActorComponents, which can be used to control how actors move, how they are rendered, etc.\nThe other main function of an Actor is the replication of properties and function calls across the network during play.\n\n\nActor initialization has multiple steps, here's the order of important virtual functions that get called:\n- UObject::PostLoad: For actors statically placed in a level, the normal UObject PostLoad gets called both in the editor and during gameplay.\n                     This is not called for newly spawned actors.\n- UActorComponent::OnComponentCreated: When an actor is spawned in the editor or during gameplay, this gets called for any native components.\n                                       For blueprint-created components, this gets called during construction for that component.\n                                       This is not called for components loaded from a level.\n- AActor::PreRegisterAllComponents: For statically placed actors and spawned actors that have native root components, this gets called now.\n                                    For blueprint actors without a native root component, these registration functions get called later during construction.\n- UActorComponent::RegisterComponent: All components are registered in editor and at runtime, this creates their physical/visual representation.\n                                      These calls may be distributed over multiple frames, but are always after PreRegisterAllComponents.\n                                      This may also get called later on after an UnregisterComponent call removes it from the world.\n- AActor::PostRegisterAllComponents: Called for all actors both in the editor and in gameplay, this is the last function that is called in all cases.\n- AActor::PostActorCreated: When an actor is created in the editor or during gameplay, this gets called right before construction.\n                            This is not called for components loaded from a level.\n- AActor::UserConstructionScript: Called for blueprints that implement a construction script.\n- AActor::OnConstruction: Called at the end of ExecuteConstruction, which calls the blueprint construction script.\n                          This is called after all blueprint-created components are fully created and registered.\n                          This is only called during gameplay for spawned actors, and may get rerun in the editor when changing blueprints.\n- AActor::PreInitializeComponents: Called before InitializeComponent is called on the actor's components.\n                                   This is only called during gameplay and in certain editor preview windows.\n- UActorComponent::Activate: This will be called only if the component has bAutoActivate set.\n                             It will also got called later on if a component is manually activated.\n- UActorComponent::InitializeComponent: This will be called only if the component has bWantsInitializeComponentSet.\n                                        This only happens once per gameplay session.\n- AActor::PostInitializeComponents: Called after the actor's components have been initialized, only during gameplay and some editor previews.\n- AActor::BeginPlay: Called when the level starts ticking, only during actual gameplay.\n                     This normally happens right after PostInitializeComponents but can be delayed for networked or child actors.\n\n@see https://docs.unrealengine.com/Programming/UnrealArchitecture/Actors\n@see https://docs.unrealengine.com/Programming/UnrealArchitecture/Actors/ActorLifecycle\n@see UActorComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryActorTick_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/**\n\x09 * Primary Actor tick function, which calls TickActor().\n\x09 * Tick functions can be configured to control whether ticking is enabled, at what time during a frame the update occurs, and to set up tick dependencies.\n\x09 * @see https://docs.unrealengine.com/API/Runtime/Engine/Engine/FTickFunction\n\x09 * @see AddTickPrerequisiteActor(), AddTickPrerequisiteComponent()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Primary Actor tick function, which calls TickActor().\nTick functions can be configured to control whether ticking is enabled, at what time during a frame the update occurs, and to set up tick dependencies.\n@see https://docs.unrealengine.com/API/Runtime/Engine/Engine/FTickFunction\n@see AddTickPrerequisiteActor(), AddTickPrerequisiteComponent()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetTemporary_MetaData[] = {
		{ "Comment", "/** If true, when the actor is spawned it will be sent to the client but receive no further replication updates from the server afterwards. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, when the actor is spawned it will be sent to the client but receive no further replication updates from the server afterwards." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyRelevantToOwner_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** If true, this actor is only relevant to its owner. If this flag is changed during play, all non-owner channels would need to be explicitly closed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor is only relevant to its owner. If this flag is changed during play, all non-owner channels would need to be explicitly closed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRelevant_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Always relevant for network (overrides bOnlyRelevantToOwner). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Always relevant for network (overrides bOnlyRelevantToOwner)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * If true, replicate movement/location related properties.\n\x09 * Actor must also be set to replicate.\n\x09 * @see SetReplicates()\n\x09 * @see https://docs.unrealengine.com/InteractiveExperiences/Networking/Actors\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, replicate movement/location related properties.\nActor must also be set to replicate.\n@see SetReplicates()\n@see https://docs.unrealengine.com/InteractiveExperiences/Networking/Actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCallPreReplication_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCallPreReplicationForReplay_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Allows us to only see this Actor in the Editor, and not in the actual game.\n\x09 * @see SetActorHiddenInGame()\n\x09 */" },
		{ "DisplayName", "Actor Hidden In Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "SequencerTrackClass", "/Script/MovieSceneTracks.MovieSceneVisibilityTrack" },
		{ "ToolTip", "Allows us to only see this Actor in the Editor, and not in the actual game.\n@see SetActorHiddenInGame()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTearOff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNetAddressable_MetaData[] = {
		{ "Comment", "/** When set, indicates that external guarantees ensure that this actor's name is deterministic between server and client, and as such can be addressed by its full path */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "When set, indicates that external guarantees ensure that this actor's name is deterministic between server and client, and as such can be addressed by its full path" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceType_MetaData[] = {
		{ "Comment", "/** Whether this actor belongs to a level instance or not and what type of level instance. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor belongs to a level instance or not and what type of level instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceFlags_MetaData[] = {
		{ "Comment", "/** Flags related to level instances for this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Flags related to level instances for this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMainWorldOnly_MetaData[] = {
		{ "Category", "LevelInstance" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "Tooltip", "If checked, this Actor will only get loaded in a main world (persistent level), it will not be loaded through Level Instances." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExchangedRoles_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether we have already exchanged Role/RemoteRole on the client, as when removing then re-adding a streaming level.\n\x09 * Causes all initialization to be performed again even though the actor may not have actually been reloaded.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether we have already exchanged Role/RemoteRole on the client, as when removing then re-adding a streaming level.\nCauses all initialization to be performed again even though the actor may not have actually been reloaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetLoadOnClient_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** This actor will be loaded on network clients during map load */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "This actor will be loaded on network clients during map load" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetUseOwnerRelevancy_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** If actor has valid Owner, call Owner's IsNetRelevantFor and GetNetPriority */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If actor has valid Owner, call Owner's IsNetRelevantFor and GetNetPriority" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRelevantForNetworkReplays_MetaData[] = {
		{ "Comment", "/** If true, this actor will be replicated to network replays (default is true) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor will be replicated to network replays (default is true)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRelevantForLevelBounds_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * If true, this actor's component's bounds will be included in the level's\n\x09 * bounding box unless the Actor's class has overridden IsLevelBoundsRelevant \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor's component's bounds will be included in the level's\nbounding box unless the Actor's class has overridden IsLevelBoundsRelevant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplayRewindable_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * If true, this actor will only be destroyed during scrubbing if the replay is set to a time before the actor existed.\n\x09 * Otherwise, RewindForReplay will be called if we detect the actor needs to be reset.\n\x09 * Note, this Actor must not be destroyed by gamecode, and RollbackViaDeletion may not be used. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor will only be destroyed during scrubbing if the replay is set to a time before the actor existed.\nOtherwise, RewindForReplay will be called if we detect the actor needs to be reset.\nNote, this Actor must not be destroyed by gamecode, and RollbackViaDeletion may not be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTickBeforeBeginPlay_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/**\n\x09 * Whether we allow this Actor to tick before it receives the BeginPlay event.\n\x09 * Normally we don't tick actors until after BeginPlay; this setting allows this behavior to be overridden.\n\x09 * This Actor must be able to tick for this setting to be relevant.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether we allow this Actor to tick before it receives the BeginPlay event.\nNormally we don't tick actors until after BeginPlay; this setting allows this behavior to be overridden.\nThis Actor must be able to tick for this setting to be relevant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroyWhenFinished_MetaData[] = {
		{ "BlueprintSetter", "SetAutoDestroyWhenFinished" },
		{ "Category", "Actor" },
		{ "Comment", "/** If true then destroy self when \"finished\", meaning all relevant components report that they are done and no timelines or timers are in flight. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true then destroy self when \"finished\", meaning all relevant components report that they are done and no timelines or timers are in flight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeDamaged_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * Whether this actor can take damage. Must be true for damage events (e.g. ReceiveDamage()) to be called.\n\x09 * @see https://www.unrealengine.com/blog/damage-in-ue4\n\x09 * @see TakeDamage(), ReceiveDamage()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor can take damage. Must be true for damage events (e.g. ReceiveDamage()) to be called.\n@see https://www.unrealengine.com/blog/damage-in-ue4\n@see TakeDamage(), ReceiveDamage()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If true, all input on the stack below this actor will not be considered */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, all input on the stack below this actor will not be considered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollideWhenPlacing_MetaData[] = {
		{ "Comment", "/** This actor collides with the world when placing in the editor, even if RootComponent collision is disabled. Does not affect spawning, @see SpawnCollisionHandlingMethod */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "This actor collides with the world when placing in the editor, even if RootComponent collision is disabled. Does not affect spawning, @see SpawnCollisionHandlingMethod" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindCameraComponentWhenViewTarget_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** If true, this actor should search for an owned camera component to view through when used as a view target. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor should search for an owned camera component to view through when used as a view target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEventsDuringLevelStreaming_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If true, this actor will generate overlap Begin/End events when spawned as part of level streaming, which includes initial level load.\n\x09 * You might enable this is in the case where a streaming level loads around an actor and you want Begin/End overlap events to trigger.\n\x09 * @see UpdateOverlapsMethodDuringLevelStreaming\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor will generate overlap Begin/End events when spawned as part of level streaming, which includes initial level load.\nYou might enable this is in the case where a streaming level loads around an actor and you want Begin/End overlap events to trigger.\n@see UpdateOverlapsMethodDuringLevelStreaming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoresOriginShifting_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Whether this actor should not be affected by world origin shifting. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor should not be affected by world origin shifting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoLODGeneration_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Whether this actor should be considered or not during HLOD generation. */" },
		{ "DisplayName", "Include Actor in HLOD" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor should be considered or not during HLOD generation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnlyActor_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "/** Whether this actor is editor-only. Use with care, as if this actor is referenced by anything else that reference will be NULL in cooked builds */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is editor-only. Use with care, as if this actor is referenced by anything else that reference will be NULL in cooked builds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicates_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * If true, this actor will replicate to remote machines\n\x09 * @see SetReplicates()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor will replicate to remote machines\n@see SetReplicates()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeInCluster_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** If true, this actor can be put inside of a GC Cluster to improve Garbage Collection performance */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, this actor can be put inside of a GC Cluster to improve Garbage Collection performance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowReceiveTickEventOnDedicatedServer_MetaData[] = {
		{ "Comment", "/**\n\x09 * If false, the Blueprint ReceiveTick() event will be disabled on dedicated servers.\n\x09 * @see AllowReceiveTickEventOnDedicatedServer()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If false, the Blueprint ReceiveTick() event will be disabled on dedicated servers.\n@see AllowReceiveTickEventOnDedicatedServer()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateUsingRegisteredSubObjectList_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09* When true the replication system will only replicate the registered subobjects and the replicated actor components list\n\x09* When false the replication system will instead call the virtual ReplicateSubobjects() function where the subobjects and actor components need to be manually replicated.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "When true the replication system will only replicate the registered subobjects and the replicated actor components list\nWhen false the replication system will instead call the virtual ReplicateSubobjects() function where the subobjects and actor components need to be manually replicated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActorEnableCollision_MetaData[] = {
		{ "Comment", "/**\n\x09 * Enables any collision on this actor.\n\x09 * @see SetActorEnableCollision(), GetActorEnableCollision()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Enables any collision on this actor.\n@see SetActorEnableCollision(), GetActorEnableCollision()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActorIsBeingDestroyed_MetaData[] = {
		{ "Comment", "/** Set when actor is about to be deleted. Needs to be a FProperty so it is included in transactions. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Set when actor is about to be deleted. Needs to be a FProperty so it is included in transactions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAsyncPhysicsTickEnabled_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Whether to use use the async physics tick with this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether to use use the async physics tick with this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateOverlapsMethodDuringLevelStreaming_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Condition for calling UpdateOverlaps() to initialize overlap state when loaded in during level streaming.\n\x09 * If set to 'UseConfigDefault', the default specified in ini (displayed in 'DefaultUpdateOverlapsMethodDuringLevelStreaming') will be used.\n\x09 * If overlaps are not initialized, this actor and attached components will not have an initial state of what objects are touching it,\n\x09 * and overlap events may only come in once one of those objects update overlaps themselves (for example when moving).\n\x09 * However if an object touching it *does* initialize state, both objects will know about their touching state with each other.\n\x09 * This can be a potentially large performance savings during level loading and streaming, and is safe if the object and others initially\n\x09 * overlapping it do not need the overlap state because they will not trigger overlap notifications.\n\x09 * \n\x09 * Note that if 'bGenerateOverlapEventsDuringLevelStreaming' is true, overlaps are always updated in this case, but that flag\n\x09 * determines whether the Begin/End overlap events are triggered.\n\x09 * \n\x09 * @see bGenerateOverlapEventsDuringLevelStreaming, DefaultUpdateOverlapsMethodDuringLevelStreaming, GetUpdateOverlapsMethodDuringLevelStreaming()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Condition for calling UpdateOverlaps() to initialize overlap state when loaded in during level streaming.\nIf set to 'UseConfigDefault', the default specified in ini (displayed in 'DefaultUpdateOverlapsMethodDuringLevelStreaming') will be used.\nIf overlaps are not initialized, this actor and attached components will not have an initial state of what objects are touching it,\nand overlap events may only come in once one of those objects update overlaps themselves (for example when moving).\nHowever if an object touching it *does* initialize state, both objects will know about their touching state with each other.\nThis can be a potentially large performance savings during level loading and streaming, and is safe if the object and others initially\noverlapping it do not need the overlap state because they will not trigger overlap notifications.\n\nNote that if 'bGenerateOverlapEventsDuringLevelStreaming' is true, overlaps are always updated in this case, but that flag\ndetermines whether the Begin/End overlap events are triggered.\n\n@see bGenerateOverlapEventsDuringLevelStreaming, DefaultUpdateOverlapsMethodDuringLevelStreaming, GetUpdateOverlapsMethodDuringLevelStreaming()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Default value taken from config file for this class when 'UseConfigDefault' is chosen for\n\x09 * 'UpdateOverlapsMethodDuringLevelStreaming'. This allows a default to be chosen per class in the matching config.\n\x09 * For example, for Actor it could be specified in DefaultEngine.ini as:\n\x09 * \n\x09 * [/Script/Engine.Actor]\n\x09 * DefaultUpdateOverlapsMethodDuringLevelStreaming = OnlyUpdateMovable\n\x09 *\n\x09 * Another subclass could set their default to something different, such as:\n\x09 *\n\x09 * [/Script/Engine.BlockingVolume]\n\x09 * DefaultUpdateOverlapsMethodDuringLevelStreaming = NeverUpdate\n\x09 * \n\x09 * @see UpdateOverlapsMethodDuringLevelStreaming\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Default value taken from config file for this class when 'UseConfigDefault' is chosen for\n'UpdateOverlapsMethodDuringLevelStreaming'. This allows a default to be chosen per class in the matching config.\nFor example, for Actor it could be specified in DefaultEngine.ini as:\n\n[/Script/Engine.Actor]\nDefaultUpdateOverlapsMethodDuringLevelStreaming = OnlyUpdateMovable\n\nAnother subclass could set their default to something different, such as:\n\n[/Script/Engine.BlockingVolume]\nDefaultUpdateOverlapsMethodDuringLevelStreaming = NeverUpdate\n\n@see UpdateOverlapsMethodDuringLevelStreaming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteRole_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Describes how much control the remote machine has over the actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Describes how much control the remote machine has over the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLifeSpan_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** How long this Actor lives before dying, 0=forever. Note this is the INITIAL value and should not be modified once play has begun. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "How long this Actor lives before dying, 0=forever. Note this is the INITIAL value and should not be modified once play has begun." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTimeDilation_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Allow each actor to run at a different time speed. The DeltaTime for a frame is multiplied by the global TimeDilation (in WorldSettings) and this CustomTimeDilation for this actor's tick.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Allow each actor to run at a different time speed. The DeltaTime for a frame is multiplied by the global TimeDilation (in WorldSettings) and this CustomTimeDilation for this actor's tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupId_MetaData[] = {
		{ "Comment", "/** The RayTracingGroupId this actor and its components belong to. (For components that did not specify any) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The RayTracingGroupId this actor and its components belong to. (For components that did not specify any)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPlacement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeGrid_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** \n\x09 * Determine in which partition grid this actor will be placed in the partition (if the world is partitioned).\n\x09 * If None, the decision will be left to the partition.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Determine in which partition grid this actor will be placed in the partition (if the world is partitioned).\nIf None, the decision will be left to the partition." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentReplication_MetaData[] = {
		{ "Comment", "/**\n\x09 * Used for replicating attachment of this actor's RootComponent to another actor.\n\x09 * This is filled in via GatherCurrentMovement() when the RootComponent has an AttachParent.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Used for replicating attachment of this actor's RootComponent to another actor.\nThis is filled in via GatherCurrentMovement() when the RootComponent has an AttachParent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMovement_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Used for replication of our RootComponent's position and velocity */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Used for replication of our RootComponent's position and velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Comment", "/**\n\x09 * Owner of this Actor, used primarily for replication (bNetUseOwnerRelevancy & bOnlyRelevantToOwner) and visibility (PrimitiveComponent bOwnerNoSee and bOnlyOwnerSee)\n\x09 * @see SetOwner(), GetOwner()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Owner of this Actor, used primarily for replication (bNetUseOwnerRelevancy & bOnlyRelevantToOwner) and visibility (PrimitiveComponent bOwnerNoSee and bOnlyOwnerSee)\n@see SetOwner(), GetOwner()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverName_MetaData[] = {
		{ "Comment", "/** Used to specify the net driver to replicate on (NAME_None || NAME_GameNetDriver is the default net driver) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Used to specify the net driver to replicate on (NAME_None || NAME_GameNetDriver is the default net driver)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Describes how much control the local machine has over the actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Describes how much control the local machine has over the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDormancy_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Dormancy setting for actor to take itself off of the replication list without being destroyed on clients. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Dormancy setting for actor to take itself off of the replication list without being destroyed on clients." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCollisionHandlingMethod_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Controls how to handle spawning this actor in a situation where it's colliding with something else. \"Default\" means AlwaysSpawn here. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Controls how to handle spawning this actor in a situation where it's colliding with something else. \"Default\" means AlwaysSpawn here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoReceiveInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Automatically registers this actor to receive input from a player. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Automatically registers this actor to receive input from a player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPriority_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The priority of this input component when pushed in to the stack. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The priority of this input component when pushed in to the stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[] = {
		{ "Comment", "/** Component that handles input for this actor, if input is enabled. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Component that handles input for this actor, if input is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetTag_MetaData[] = {
		{ "Comment", "/** Internal - used by UNetDriver */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Internal - used by UNetDriver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetCullDistanceSquared_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetNetCullDistanceSquared" },
		{ "BlueprintSetter", "SetNetCullDistanceSquared" },
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetUpdateFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetNetUpdateFrequency" },
		{ "BlueprintSetter", "SetNetUpdateFrequency" },
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinNetUpdateFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetMinNetUpdateFrequency" },
		{ "BlueprintSetter", "SetMinNetUpdateFrequency" },
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetPriority_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Priority for this actor when checking for replication in a low bandwidth or saturated situation, higher priority means it is more likely to replicate */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Priority for this actor when checking for replication in a low bandwidth or saturated situation, higher priority means it is more likely to replicate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsReplicationMode_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Which mode to replicate physics through for this actor. Only relevant if the actor replicates movement and has a component that simulate physics.*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Which mode to replicate physics through for this actor. Only relevant if the actor replicates movement and has a component that simulate physics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Actor" },
		{ "Comment", "/** Pawn responsible for damage and other gameplay events caused by this actor. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Pawn responsible for damage and other gameplay events caused by this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Comment", "/** Array of all Actors whose Owner is this actor, these are not necessarily spawned by UChildActorComponent */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of all Actors whose Owner is this actor, these are not necessarily spawned by UChildActorComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComponent_MetaData[] = {
		{ "BlueprintGetter", "K2_GetRootComponent" },
		{ "Category", "Transformation" },
		{ "Comment", "/** The component that defines the transform (location, rotation, scale) of this Actor in the world, all other components must be attached to this one somehow */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The component that defines the transform (location, rotation, scale) of this Actor in the world, all other components must be attached to this one somehow" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Local space pivot offset for the actor, only used in the editor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Local space pivot offset for the actor, only used in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayer_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** The UHLODLayer in which this actor should be included. */" },
		{ "DisplayName", "HLOD Layer" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The UHLODLayer in which this actor should be included." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Layers the actor belongs to.  This is outside of the editoronly data to allow hiding of LD-specified layers at runtime for profiling. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Layers the actor belongs to.  This is outside of the editoronly data to allow hiding of LD-specified layers at runtime for profiling." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponentActor_MetaData[] = {
		{ "Comment", "/** @deprecated Use ParentComponent instead */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "@deprecated Use ParentComponent instead" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponent_MetaData[] = {
		{ "Comment", "/** The UChildActorComponent that owns this Actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The UChildActorComponent that owns this Actor." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorGuid_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * The GUID for this actor; this guid will be the same for actors from instanced streaming levels.\n\x09 * @see\x09\x09""ActorInstanceGuid, FActorInstanceGuidMapper\n\x09 * @note\x09""Don't use VisibleAnywhere here to avoid getting the CPF_Edit flag and get this property reset when resetting to defaults.\n\x09 *\x09\x09\x09See FActorDetails::AddActorCategory and EditorUtilities::CopySingleProperty for details.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The GUID for this actor; this guid will be the same for actors from instanced streaming levels.\n@see         ActorInstanceGuid, FActorInstanceGuidMapper\n@note        Don't use VisibleAnywhere here to avoid getting the CPF_Edit flag and get this property reset when resetting to defaults.\n                     See FActorDetails::AddActorCategory and EditorUtilities::CopySingleProperty for details." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorInstanceGuid_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * The instance GUID for this actor; this guid will be unique for actors from instanced streaming levels.\n\x09 * @see\x09\x09""ActorGuid\n\x09 * @note\x09This is not guaranteed to be valid during PostLoad, but safe to access from RegisterAllComponents.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The instance GUID for this actor; this guid will be unique for actors from instanced streaming levels.\n@see         ActorGuid\n@note        This is not guaranteed to be valid during PostLoad, but safe to access from RegisterAllComponents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBundleGuid_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * The GUID for this actor's content bundle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The GUID for this actor's content bundle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** DataLayers the actor belongs to.*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "DataLayers the actor belongs to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAssets_MetaData[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "// There is currently an issue where if we allow property override of DataLayerAssets and it contains Private datalayers\n// then it will always serialize a diff since those are outered to the instanced level and will get remapped differently between the Override instance and Archetype instance we are comparing against\n" },
		{ "DisableLevelInstancePropertyOverride", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "There is currently an issue where if we allow property override of DataLayerAssets and it contains Private datalayers\nthen it will always serialize a diff since those are outered to the instanced level and will get remapped differently between the Override instance and Archetype instance we are comparing against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataLayerAsset_MetaData[] = {
		{ "Category", "DataLayers" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupActor_MetaData[] = {
		{ "Comment", "/** The editor-only group this actor is a part of. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The editor-only group this actor is a part of." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The scale to apply to any billboard components in editor builds (happens in any WITH_EDITOR build, including non-cooked games). */" },
		{ "DisplayName", "Editor Billboard Scale" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The scale to apply to any billboard components in editor builds (happens in any WITH_EDITOR build, including non-cooked games)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenEditorViews_MetaData[] = {
		{ "Comment", "/** Bitflag to represent which views this actor is hidden in, via per-view layer visibility. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Bitflag to represent which views this actor is hidden in, via per-view layer visibility." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLabel_MetaData[] = {
		{ "Comment", "/**\n\x09 * The friendly name for this actor, displayed in the editor.  You should always use AActor::GetActorLabel() to access the actual label to display,\n\x09 * and call AActor::SetActorLabel() or FActorLabelUtilities::SetActorLabelUnique() to change the label.  Never set the label directly.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The friendly name for this actor, displayed in the editor.  You should always use AActor::GetActorLabel() to access the actual label to display,\nand call AActor::SetActorLabel() or FActorLabelUtilities::SetActorLabelUnique() to change the label.  Never set the label directly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[] = {
		{ "Comment", "/** \n\x09 * The folder path of this actor in the world.\n\x09 * If the actor's level uses the actor folder objects feature, the path is computed using FolderGuid.\n\x09 * If not, it contains the actual path (empty=root, / separated).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "The folder path of this actor in the world.\nIf the actor's level uses the actor folder objects feature, the path is computed using FolderGuid.\nIf not, it contains the actual path (empty=root, / separated)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderGuid_MetaData[] = {
		{ "Comment", "/** If the actor's level uses the actor folder objects feature, contains the actor folder unique identifier (invalid=root). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If the actor's level uses the actor folder objects feature, contains the actor folder unique identifier (invalid=root)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenEd_MetaData[] = {
		{ "Comment", "/** Whether this actor is hidden within the editor viewport. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is hidden within the editor viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorPreviewActor_MetaData[] = {
		{ "Comment", "/** True if this actor is the preview actor dragged out of the content browser */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "True if this actor is the preview actor dragged out of the content browser" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenEdLayer_MetaData[] = {
		{ "Comment", "/** Whether this actor is hidden by the layer browser. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is hidden by the layer browser." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenEdLevel_MetaData[] = {
		{ "Comment", "/** Whether this actor is hidden by the level browser. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is hidden by the level browser." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockLocation_MetaData[] = {
		{ "Comment", "/** If true, prevents the actor from being moved in the editor viewport. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "If true, prevents the actor from being moved in the editor viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActorLabelEditable_MetaData[] = {
		{ "Comment", "/** Is the actor label editable by the user? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Is the actor label editable by the user?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[] = {
		{ "Comment", "/** Whether the actor can be manipulated by editor operations. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether the actor can be manipulated by editor operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bListedInSceneOutliner_MetaData[] = {
		{ "Comment", "/** Whether this actor should be listed in the scene outliner. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor should be listed in the scene outliner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeBPComponentData_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "/** Whether to cook additional data to speed up spawn events at runtime for any Blueprint classes based on this Actor. This option may slightly increase memory usage in a cooked build. */" },
		{ "DisplayName", "Generate Optimized Blueprint Component Data" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether to cook additional data to speed up spawn events at runtime for any Blueprint classes based on this Actor. This option may slightly increase memory usage in a cooked build." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanPlayFromHere_MetaData[] = {
		{ "Comment", "/** Whether the actor can be used as a PlayFromHere origin (OnPlayFromHere() will be called on that actor) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether the actor can be used as a PlayFromHere origin (OnPlayFromHere() will be called on that actor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpatiallyLoaded_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** \n\x09 * Determine if this actor is spatially loaded when placed in a partitioned world.\n\x09 *\x09If true, this actor will be loaded when in the range of any streaming sources and if (1) in no data layers, or (2) one or more of its data layers are enabled.\n\x09 *\x09If false, this actor will be loaded if (1) in no data layers, or (2) one or more of its data layers are enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Determine if this actor is spatially loaded when placed in a partitioned world.\n     If true, this actor will be loaded when in the range of any streaming sources and if (1) in no data layers, or (2) one or more of its data layers are enabled.\n     If false, this actor will be loaded if (1) in no data layers, or (2) one or more of its data layers are enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenEdTemporary_MetaData[] = {
		{ "Comment", "/** Whether this actor is temporarily hidden within the editor; used for show/hide/etc functionality w/o dirtying the actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Whether this actor is temporarily hidden within the editor; used for show/hide/etc functionality w/o dirtying the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceExternalActorLevelReferenceForPIE_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Array of tags that can be used for grouping and categorizing. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of tags that can be used for grouping and categorizing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTakeAnyDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Called when the actor is damaged in any way. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the actor is damaged in any way." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTakePointDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Called when the actor is damaged by point damage. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the actor is damaged by point damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTakeRadialDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Called when the actor is damaged by radial damage. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the actor is damaged by radial damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActorBeginOverlap_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Called when another actor begins to overlap this actor, for example a player walking into a trigger.\n\x09 * For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.\n\x09 * @note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when another actor begins to overlap this actor, for example a player walking into a trigger.\nFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.\n@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActorEndOverlap_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Called when another actor stops overlapping this actor. \n\x09 * @note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when another actor stops overlapping this actor.\n@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginCursorOver_MetaData[] = {
		{ "Category", "Input|Mouse Input" },
		{ "Comment", "/** Called when the mouse cursor is moved over this actor if mouse over events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the mouse cursor is moved over this actor if mouse over events are enabled in the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndCursorOver_MetaData[] = {
		{ "Category", "Input|Mouse Input" },
		{ "Comment", "/** Called when the mouse cursor is moved off this actor if mouse over events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the mouse cursor is moved off this actor if mouse over events are enabled in the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[] = {
		{ "Category", "Input|Mouse Input" },
		{ "Comment", "/** Called when the left mouse button is clicked while the mouse is over this actor and click events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the left mouse button is clicked while the mouse is over this actor and click events are enabled in the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReleased_MetaData[] = {
		{ "Category", "Input|Mouse Input" },
		{ "Comment", "/** Called when the left mouse button is released while the mouse is over this actor and click events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when the left mouse button is released while the mouse is over this actor and click events are enabled in the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputTouchBegin_MetaData[] = {
		{ "Category", "Input|Touch Input" },
		{ "Comment", "/** Called when a touch input is received over this actor when touch events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when a touch input is received over this actor when touch events are enabled in the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputTouchEnd_MetaData[] = {
		{ "Category", "Input|Touch Input" },
		{ "Comment", "/** Called when a touch input is received over this component when touch events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when a touch input is received over this component when touch events are enabled in the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputTouchEnter_MetaData[] = {
		{ "Category", "Input|Touch Input" },
		{ "Comment", "/** Called when a finger is moved over this actor when touch over events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when a finger is moved over this actor when touch over events are enabled in the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputTouchLeave_MetaData[] = {
		{ "Category", "Input|Touch Input" },
		{ "Comment", "/** Called when a finger is moved off this actor when touch over events are enabled in the player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when a finger is moved off this actor when touch over events are enabled in the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActorHit_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09""Called when this Actor hits (or is hit by) something solid. This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\n\x09 *\x09""For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.\n\x09 *\x09@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Called when this Actor hits (or is hit by) something solid. This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\nFor events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.\n@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDestroyed_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Event triggered when the actor has been explicitly destroyed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event triggered when the actor has been explicitly destroyed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndPlay_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Event triggered when the actor is being deleted or removed from a level. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Event triggered when the actor is being deleted or removed from a level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceComponents_Inner_MetaData[] = {
		{ "Comment", "/** Array of ActorComponents that have been added by the user on a per-instance basis. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of ActorComponents that have been added by the user on a per-instance basis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceComponents_MetaData[] = {
		{ "Comment", "/** Array of ActorComponents that have been added by the user on a per-instance basis. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of ActorComponents that have been added by the user on a per-instance basis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintCreatedComponents_MetaData[] = {
		{ "Comment", "/** Array of ActorComponents that are created by blueprints and serialized per-instance. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Actor.h" },
		{ "ToolTip", "Array of ActorComponents that are created by blueprints and serialized per-instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryActorTick;
	static void NewProp_bNetTemporary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetTemporary;
	static void NewProp_bOnlyRelevantToOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyRelevantToOwner;
	static void NewProp_bAlwaysRelevant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRelevant;
	static void NewProp_bReplicateMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
	static void NewProp_bCallPreReplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallPreReplication;
	static void NewProp_bCallPreReplicationForReplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallPreReplicationForReplay;
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static void NewProp_bTearOff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTearOff;
	static void NewProp_bForceNetAddressable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNetAddressable;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LevelInstanceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LevelInstanceType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LevelInstanceFlags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LevelInstanceFlags;
	static void NewProp_bIsMainWorldOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainWorldOnly;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bExchangedRoles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExchangedRoles;
	static void NewProp_bNetLoadOnClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetLoadOnClient;
	static void NewProp_bNetUseOwnerRelevancy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetUseOwnerRelevancy;
	static void NewProp_bRelevantForNetworkReplays_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelevantForNetworkReplays;
	static void NewProp_bRelevantForLevelBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelevantForLevelBounds;
	static void NewProp_bReplayRewindable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplayRewindable;
	static void NewProp_bAllowTickBeforeBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTickBeforeBeginPlay;
	static void NewProp_bAutoDestroyWhenFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroyWhenFinished;
	static void NewProp_bCanBeDamaged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeDamaged;
	static void NewProp_bBlockInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockInput;
	static void NewProp_bCollideWhenPlacing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollideWhenPlacing;
	static void NewProp_bFindCameraComponentWhenViewTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindCameraComponentWhenViewTarget;
	static void NewProp_bGenerateOverlapEventsDuringLevelStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEventsDuringLevelStreaming;
	static void NewProp_bIgnoresOriginShifting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoresOriginShifting;
	static void NewProp_bEnableAutoLODGeneration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoLODGeneration;
	static void NewProp_bIsEditorOnlyActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnlyActor;
	static void NewProp_bReplicates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicates;
	static void NewProp_bCanBeInCluster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeInCluster;
	static void NewProp_bAllowReceiveTickEventOnDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowReceiveTickEventOnDedicatedServer;
	static void NewProp_bReplicateUsingRegisteredSubObjectList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateUsingRegisteredSubObjectList;
	static void NewProp_bActorEnableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorEnableCollision;
	static void NewProp_bActorIsBeingDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorIsBeingDestroyed;
	static void NewProp_bAsyncPhysicsTickEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsyncPhysicsTickEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateOverlapsMethodDuringLevelStreaming_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateOverlapsMethodDuringLevelStreaming;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteRole;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialLifeSpan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomTimeDilation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingGroupId;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GridPlacement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GridPlacement;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RuntimeGrid;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentReplication;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NetDriverName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Role;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NetDormancy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnCollisionHandlingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnCollisionHandlingMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoReceiveInput;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputPriority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NetTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetCullDistanceSquared;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetUpdateFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinNetUpdateFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetPriority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PhysicsReplicationMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODLayer;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentComponentActor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInstanceGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentBundleGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataLayerAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayerAssets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalDataLayerAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroupActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpriteScale;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_HiddenEditorViews;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorLabel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FolderGuid;
	static void NewProp_bHiddenEd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenEd;
	static void NewProp_bIsEditorPreviewActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorPreviewActor;
	static void NewProp_bHiddenEdLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenEdLayer;
	static void NewProp_bHiddenEdLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenEdLevel;
	static void NewProp_bLockLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockLocation;
	static void NewProp_bActorLabelEditable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorLabelEditable;
	static void NewProp_bEditable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditable;
	static void NewProp_bListedInSceneOutliner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bListedInSceneOutliner;
	static void NewProp_bOptimizeBPComponentData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeBPComponentData;
	static void NewProp_bCanPlayFromHere_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPlayFromHere;
	static void NewProp_bIsSpatiallyLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpatiallyLoaded;
	static void NewProp_bHiddenEdTemporary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenEdTemporary;
	static void NewProp_bForceExternalActorLevelReferenceForPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceExternalActorLevelReferenceForPIE;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakeAnyDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakePointDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakeRadialDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorBeginOverlap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorEndOverlap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginCursorOver;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndCursorOver;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleased;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputTouchBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputTouchEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputTouchEnter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputTouchLeave;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorHit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDestroyed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanceComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintCreatedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlueprintCreatedComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AActor_ActorHasTag, "ActorHasTag" }, // 1593833182
		{ &Z_Construct_UFunction_AActor_AddComponent, "AddComponent" }, // 1283485352
		{ &Z_Construct_UFunction_AActor_AddComponentByClass, "AddComponentByClass" }, // 2819041073
		{ &Z_Construct_UFunction_AActor_AddTickPrerequisiteActor, "AddTickPrerequisiteActor" }, // 3683266344
		{ &Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent, "AddTickPrerequisiteComponent" }, // 1788065547
		{ &Z_Construct_UFunction_AActor_CanTriggerResimulation, "CanTriggerResimulation" }, // 1475133747
		{ &Z_Construct_UFunction_AActor_CreateInputComponent, "CreateInputComponent" }, // 2531166836
		{ &Z_Construct_UFunction_AActor_DetachRootComponentFromParent, "DetachRootComponentFromParent" }, // 2796646075
		{ &Z_Construct_UFunction_AActor_DisableInput, "DisableInput" }, // 1322394788
		{ &Z_Construct_UFunction_AActor_EnableInput, "EnableInput" }, // 2756739491
		{ &Z_Construct_UFunction_AActor_FindComponentByTag, "FindComponentByTag" }, // 3702833356
		{ &Z_Construct_UFunction_AActor_FinishAddComponent, "FinishAddComponent" }, // 3221123335
		{ &Z_Construct_UFunction_AActor_FlushNetDormancy, "FlushNetDormancy" }, // 407595730
		{ &Z_Construct_UFunction_AActor_ForceNetUpdate, "ForceNetUpdate" }, // 3917061798
		{ &Z_Construct_UFunction_AActor_GetActorBounds, "GetActorBounds" }, // 3071645583
		{ &Z_Construct_UFunction_AActor_GetActorEnableCollision, "GetActorEnableCollision" }, // 1918243093
		{ &Z_Construct_UFunction_AActor_GetActorEyesViewPoint, "GetActorEyesViewPoint" }, // 1043702463
		{ &Z_Construct_UFunction_AActor_GetActorForwardVector, "GetActorForwardVector" }, // 3519683113
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetActorLabel, "GetActorLabel" }, // 2808857120
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetActorRelativeScale3D, "GetActorRelativeScale3D" }, // 2234580871
		{ &Z_Construct_UFunction_AActor_GetActorRightVector, "GetActorRightVector" }, // 3666275254
		{ &Z_Construct_UFunction_AActor_GetActorScale3D, "GetActorScale3D" }, // 1235256062
		{ &Z_Construct_UFunction_AActor_GetActorTickInterval, "GetActorTickInterval" }, // 2624161884
		{ &Z_Construct_UFunction_AActor_GetActorTimeDilation, "GetActorTimeDilation" }, // 2194936308
		{ &Z_Construct_UFunction_AActor_GetActorUpVector, "GetActorUpVector" }, // 1668004962
		{ &Z_Construct_UFunction_AActor_GetAllChildActors, "GetAllChildActors" }, // 1607618224
		{ &Z_Construct_UFunction_AActor_GetAttachedActors, "GetAttachedActors" }, // 2969415622
		{ &Z_Construct_UFunction_AActor_GetAttachParentActor, "GetAttachParentActor" }, // 639212401
		{ &Z_Construct_UFunction_AActor_GetAttachParentSocketName, "GetAttachParentSocketName" }, // 271702971
		{ &Z_Construct_UFunction_AActor_GetComponentByClass, "GetComponentByClass" }, // 1470367282
		{ &Z_Construct_UFunction_AActor_GetComponentsByInterface, "GetComponentsByInterface" }, // 3154360472
		{ &Z_Construct_UFunction_AActor_GetComponentsByTag, "GetComponentsByTag" }, // 2735153575
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetDefaultActorLabel, "GetDefaultActorLabel" }, // 4098958622
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetDistanceTo, "GetDistanceTo" }, // 1790420440
		{ &Z_Construct_UFunction_AActor_GetDotProductTo, "GetDotProductTo" }, // 2373934262
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetFolderPath, "GetFolderPath" }, // 3097710308
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_GetGameTimeSinceCreation, "GetGameTimeSinceCreation" }, // 2054741799
		{ &Z_Construct_UFunction_AActor_GetHorizontalDistanceTo, "GetHorizontalDistanceTo" }, // 262245179
		{ &Z_Construct_UFunction_AActor_GetHorizontalDotProductTo, "GetHorizontalDotProductTo" }, // 4061095310
		{ &Z_Construct_UFunction_AActor_GetInputAxisKeyValue, "GetInputAxisKeyValue" }, // 1444239706
		{ &Z_Construct_UFunction_AActor_GetInputAxisValue, "GetInputAxisValue" }, // 1480973062
		{ &Z_Construct_UFunction_AActor_GetInputVectorAxisValue, "GetInputVectorAxisValue" }, // 3676261013
		{ &Z_Construct_UFunction_AActor_GetInstigator, "GetInstigator" }, // 2982798093
		{ &Z_Construct_UFunction_AActor_GetInstigatorController, "GetInstigatorController" }, // 1161124178
		{ &Z_Construct_UFunction_AActor_GetLevel, "GetLevel" }, // 3493091165
		{ &Z_Construct_UFunction_AActor_GetLevelTransform, "GetLevelTransform" }, // 2145437248
		{ &Z_Construct_UFunction_AActor_GetLifeSpan, "GetLifeSpan" }, // 2545524019
		{ &Z_Construct_UFunction_AActor_GetLocalRole, "GetLocalRole" }, // 1901981967
		{ &Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency, "GetMinNetUpdateFrequency" }, // 1235137507
		{ &Z_Construct_UFunction_AActor_GetNetCullDistanceSquared, "GetNetCullDistanceSquared" }, // 1091592193
		{ &Z_Construct_UFunction_AActor_GetNetUpdateFrequency, "GetNetUpdateFrequency" }, // 2166005609
		{ &Z_Construct_UFunction_AActor_GetOverlappingActors, "GetOverlappingActors" }, // 1829901276
		{ &Z_Construct_UFunction_AActor_GetOverlappingComponents, "GetOverlappingComponents" }, // 721058946
		{ &Z_Construct_UFunction_AActor_GetOwner, "GetOwner" }, // 1478199755
		{ &Z_Construct_UFunction_AActor_GetParentActor, "GetParentActor" }, // 1962026417
		{ &Z_Construct_UFunction_AActor_GetParentComponent, "GetParentComponent" }, // 1377241994
		{ &Z_Construct_UFunction_AActor_GetPhysicsReplicationMode, "GetPhysicsReplicationMode" }, // 3526428557
		{ &Z_Construct_UFunction_AActor_GetRayTracingGroupId, "GetRayTracingGroupId" }, // 1738464850
		{ &Z_Construct_UFunction_AActor_GetRemoteRole, "GetRemoteRole" }, // 3006765450
		{ &Z_Construct_UFunction_AActor_GetResimulationThreshold, "GetResimulationThreshold" }, // 2038090840
		{ &Z_Construct_UFunction_AActor_GetSquaredDistanceTo, "GetSquaredDistanceTo" }, // 1337705934
		{ &Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo, "GetSquaredHorizontalDistanceTo" }, // 568214864
		{ &Z_Construct_UFunction_AActor_GetTickableWhenPaused, "GetTickableWhenPaused" }, // 1553574839
		{ &Z_Construct_UFunction_AActor_GetTransform, "GetTransform" }, // 63191569
		{ &Z_Construct_UFunction_AActor_GetVelocity, "GetVelocity" }, // 2238494517
		{ &Z_Construct_UFunction_AActor_GetVerticalDistanceTo, "GetVerticalDistanceTo" }, // 1704024719
		{ &Z_Construct_UFunction_AActor_HasAuthority, "HasAuthority" }, // 1213716
		{ &Z_Construct_UFunction_AActor_IsActorBeingDestroyed, "IsActorBeingDestroyed" }, // 557231063
		{ &Z_Construct_UFunction_AActor_IsActorTickEnabled, "IsActorTickEnabled" }, // 2590798732
		{ &Z_Construct_UFunction_AActor_IsChildActor, "IsChildActor" }, // 2295459180
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_IsEditable, "IsEditable" }, // 2230938549
		{ &Z_Construct_UFunction_AActor_IsHiddenEd, "IsHiddenEd" }, // 1557548271
		{ &Z_Construct_UFunction_AActor_IsHiddenEdAtStartup, "IsHiddenEdAtStartup" }, // 2188278058
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_IsOverlappingActor, "IsOverlappingActor" }, // 3069655137
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_IsSelectable, "IsSelectable" }, // 2459409602
		{ &Z_Construct_UFunction_AActor_IsTemporarilyHiddenInEditor, "IsTemporarilyHiddenInEditor" }, // 2204960032
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_K2_AddActorLocalOffset, "K2_AddActorLocalOffset" }, // 1282702287
		{ &Z_Construct_UFunction_AActor_K2_AddActorLocalRotation, "K2_AddActorLocalRotation" }, // 4253272112
		{ &Z_Construct_UFunction_AActor_K2_AddActorLocalTransform, "K2_AddActorLocalTransform" }, // 1209994539
		{ &Z_Construct_UFunction_AActor_K2_AddActorWorldOffset, "K2_AddActorWorldOffset" }, // 3871656280
		{ &Z_Construct_UFunction_AActor_K2_AddActorWorldRotation, "K2_AddActorWorldRotation" }, // 239124406
		{ &Z_Construct_UFunction_AActor_K2_AddActorWorldTransform, "K2_AddActorWorldTransform" }, // 4202444125
		{ &Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale, "K2_AddActorWorldTransformKeepScale" }, // 3755284142
		{ &Z_Construct_UFunction_AActor_K2_AttachRootComponentTo, "K2_AttachRootComponentTo" }, // 2592163712
		{ &Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor, "K2_AttachRootComponentToActor" }, // 838852855
		{ &Z_Construct_UFunction_AActor_K2_AttachToActor, "K2_AttachToActor" }, // 3819059798
		{ &Z_Construct_UFunction_AActor_K2_AttachToComponent, "K2_AttachToComponent" }, // 4194164772
		{ &Z_Construct_UFunction_AActor_K2_DestroyActor, "K2_DestroyActor" }, // 2778098512
		{ &Z_Construct_UFunction_AActor_K2_DetachFromActor, "K2_DetachFromActor" }, // 2757712361
		{ &Z_Construct_UFunction_AActor_K2_GetActorLocation, "K2_GetActorLocation" }, // 2828969067
		{ &Z_Construct_UFunction_AActor_K2_GetActorRotation, "K2_GetActorRotation" }, // 404590690
		{ &Z_Construct_UFunction_AActor_K2_GetComponentsByClass, "K2_GetComponentsByClass" }, // 532051749
		{ &Z_Construct_UFunction_AActor_K2_GetRootComponent, "K2_GetRootComponent" }, // 3590610872
		{ &Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget, "K2_OnBecomeViewTarget" }, // 842512476
		{ &Z_Construct_UFunction_AActor_K2_OnEndViewTarget, "K2_OnEndViewTarget" }, // 576095093
		{ &Z_Construct_UFunction_AActor_K2_OnReset, "K2_OnReset" }, // 3746554570
		{ &Z_Construct_UFunction_AActor_K2_SetActorLocation, "K2_SetActorLocation" }, // 1801558955
		{ &Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation, "K2_SetActorLocationAndRotation" }, // 2907007694
		{ &Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation, "K2_SetActorRelativeLocation" }, // 573187937
		{ &Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation, "K2_SetActorRelativeRotation" }, // 674892449
		{ &Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform, "K2_SetActorRelativeTransform" }, // 1278617099
		{ &Z_Construct_UFunction_AActor_K2_SetActorRotation, "K2_SetActorRotation" }, // 3072759614
		{ &Z_Construct_UFunction_AActor_K2_SetActorTransform, "K2_SetActorTransform" }, // 3691673657
		{ &Z_Construct_UFunction_AActor_K2_TeleportTo, "K2_TeleportTo" }, // 3843272942
		{ &Z_Construct_UFunction_AActor_MakeNoise, "MakeNoise" }, // 2953338213
		{ &Z_Construct_UFunction_AActor_OnRep_AttachmentReplication, "OnRep_AttachmentReplication" }, // 4207948006
		{ &Z_Construct_UFunction_AActor_OnRep_Instigator, "OnRep_Instigator" }, // 4209318055
		{ &Z_Construct_UFunction_AActor_OnRep_Owner, "OnRep_Owner" }, // 786504452
		{ &Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement, "OnRep_ReplicatedMovement" }, // 1453648651
		{ &Z_Construct_UFunction_AActor_OnRep_ReplicateMovement, "OnRep_ReplicateMovement" }, // 3095894182
		{ &Z_Construct_UFunction_AActor_PrestreamTextures, "PrestreamTextures" }, // 1832377571
		{ &Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver, "ReceiveActorBeginCursorOver" }, // 2173675387
		{ &Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap, "ReceiveActorBeginOverlap" }, // 1276699328
		{ &Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver, "ReceiveActorEndCursorOver" }, // 425736122
		{ &Z_Construct_UFunction_AActor_ReceiveActorEndOverlap, "ReceiveActorEndOverlap" }, // 647570014
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnClicked, "ReceiveActorOnClicked" }, // 873521277
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin, "ReceiveActorOnInputTouchBegin" }, // 321608063
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd, "ReceiveActorOnInputTouchEnd" }, // 3665136584
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter, "ReceiveActorOnInputTouchEnter" }, // 975910216
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave, "ReceiveActorOnInputTouchLeave" }, // 814936209
		{ &Z_Construct_UFunction_AActor_ReceiveActorOnReleased, "ReceiveActorOnReleased" }, // 1835481393
		{ &Z_Construct_UFunction_AActor_ReceiveAnyDamage, "ReceiveAnyDamage" }, // 3540254726
		{ &Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick, "ReceiveAsyncPhysicsTick" }, // 2290607139
		{ &Z_Construct_UFunction_AActor_ReceiveBeginPlay, "ReceiveBeginPlay" }, // 1998866828
		{ &Z_Construct_UFunction_AActor_ReceiveDestroyed, "ReceiveDestroyed" }, // 3179411061
		{ &Z_Construct_UFunction_AActor_ReceiveEndPlay, "ReceiveEndPlay" }, // 2120677589
		{ &Z_Construct_UFunction_AActor_ReceiveHit, "ReceiveHit" }, // 3201393330
		{ &Z_Construct_UFunction_AActor_ReceivePointDamage, "ReceivePointDamage" }, // 1312798648
		{ &Z_Construct_UFunction_AActor_ReceiveRadialDamage, "ReceiveRadialDamage" }, // 27075983
		{ &Z_Construct_UFunction_AActor_ReceiveTick, "ReceiveTick" }, // 140133748
		{ &Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor, "RemoveTickPrerequisiteActor" }, // 4025477823
		{ &Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent, "RemoveTickPrerequisiteComponent" }, // 2313160377
		{ &Z_Construct_UFunction_AActor_SetActorEnableCollision, "SetActorEnableCollision" }, // 860470718
		{ &Z_Construct_UFunction_AActor_SetActorHiddenInGame, "SetActorHiddenInGame" }, // 847530931
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_SetActorLabel, "SetActorLabel" }, // 2506182283
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_SetActorRelativeScale3D, "SetActorRelativeScale3D" }, // 1805925845
		{ &Z_Construct_UFunction_AActor_SetActorScale3D, "SetActorScale3D" }, // 1846055583
		{ &Z_Construct_UFunction_AActor_SetActorTickEnabled, "SetActorTickEnabled" }, // 3530243348
		{ &Z_Construct_UFunction_AActor_SetActorTickInterval, "SetActorTickInterval" }, // 1078006150
		{ &Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished, "SetAutoDestroyWhenFinished" }, // 1531080542
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_SetFolderPath, "SetFolderPath" }, // 2689126750
		{ &Z_Construct_UFunction_AActor_SetIsTemporarilyHiddenInEditor, "SetIsTemporarilyHiddenInEditor" }, // 169555139
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_AActor_SetLifeSpan, "SetLifeSpan" }, // 991316545
		{ &Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency, "SetMinNetUpdateFrequency" }, // 4067055584
		{ &Z_Construct_UFunction_AActor_SetNetCullDistanceSquared, "SetNetCullDistanceSquared" }, // 3319226881
		{ &Z_Construct_UFunction_AActor_SetNetDormancy, "SetNetDormancy" }, // 2316339729
		{ &Z_Construct_UFunction_AActor_SetNetUpdateFrequency, "SetNetUpdateFrequency" }, // 3188508080
		{ &Z_Construct_UFunction_AActor_SetOwner, "SetOwner" }, // 2966647083
		{ &Z_Construct_UFunction_AActor_SetPhysicsReplicationMode, "SetPhysicsReplicationMode" }, // 2884598182
		{ &Z_Construct_UFunction_AActor_SetRayTracingGroupId, "SetRayTracingGroupId" }, // 2179468765
		{ &Z_Construct_UFunction_AActor_SetReplicateMovement, "SetReplicateMovement" }, // 1117430039
		{ &Z_Construct_UFunction_AActor_SetReplicates, "SetReplicates" }, // 4130482038
		{ &Z_Construct_UFunction_AActor_SetTickableWhenPaused, "SetTickableWhenPaused" }, // 916240633
		{ &Z_Construct_UFunction_AActor_SetTickGroup, "SetTickGroup" }, // 449059646
		{ &Z_Construct_UFunction_AActor_TearOff, "TearOff" }, // 455110564
		{ &Z_Construct_UFunction_AActor_UserConstructionScript, "UserConstructionScript" }, // 3807260347
		{ &Z_Construct_UFunction_AActor_WasRecentlyRendered, "WasRecentlyRendered" }, // 2624298732
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_PrimaryActorTick = { "PrimaryActorTick", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, PrimaryActorTick), Z_Construct_UScriptStruct_FActorTickFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryActorTick_MetaData), NewProp_PrimaryActorTick_MetaData) }; // 3007033613
void Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary_SetBit(void* Obj)
{
	((AActor*)Obj)->bNetTemporary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary = { "bNetTemporary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetTemporary_MetaData), NewProp_bNetTemporary_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner_SetBit(void* Obj)
{
	((AActor*)Obj)->bOnlyRelevantToOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner = { "bOnlyRelevantToOwner", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyRelevantToOwner_MetaData), NewProp_bOnlyRelevantToOwner_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant_SetBit(void* Obj)
{
	((AActor*)Obj)->bAlwaysRelevant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant = { "bAlwaysRelevant", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysRelevant_MetaData), NewProp_bAlwaysRelevant_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
{
	((AActor*)Obj)->bReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", "OnRep_ReplicateMovement", (EPropertyFlags)0x0040000100010021, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateMovement_MetaData), NewProp_bReplicateMovement_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplication_SetBit(void* Obj)
{
	((AActor*)Obj)->bCallPreReplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplication = { "bCallPreReplication", nullptr, (EPropertyFlags)0x0040040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCallPreReplication_MetaData), NewProp_bCallPreReplication_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplicationForReplay_SetBit(void* Obj)
{
	((AActor*)Obj)->bCallPreReplicationForReplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplicationForReplay = { "bCallPreReplicationForReplay", nullptr, (EPropertyFlags)0x0040040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplicationForReplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCallPreReplicationForReplay_MetaData), NewProp_bCallPreReplicationForReplay_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((AActor*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0040000200000035, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidden_MetaData), NewProp_bHidden_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bTearOff_SetBit(void* Obj)
{
	((AActor*)Obj)->bTearOff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bTearOff = { "bTearOff", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bTearOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTearOff_MetaData), NewProp_bTearOff_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bForceNetAddressable_SetBit(void* Obj)
{
	((AActor*)Obj)->bForceNetAddressable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bForceNetAddressable = { "bForceNetAddressable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bForceNetAddressable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNetAddressable_MetaData), NewProp_bForceNetAddressable_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_LevelInstanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_LevelInstanceType = { "LevelInstanceType", nullptr, (EPropertyFlags)0x0040000c00002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, LevelInstanceType), Z_Construct_UEnum_Engine_ELevelInstanceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceType_MetaData), NewProp_LevelInstanceType_MetaData) }; // 1831733694
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_LevelInstanceFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_LevelInstanceFlags = { "LevelInstanceFlags", nullptr, (EPropertyFlags)0x0040000c00002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, LevelInstanceFlags), Z_Construct_UEnum_Engine_ELevelInstanceFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceFlags_MetaData), NewProp_LevelInstanceFlags_MetaData) }; // 1675910049
void Z_Construct_UClass_AActor_Statics::NewProp_bIsMainWorldOnly_SetBit(void* Obj)
{
	((AActor*)Obj)->bIsMainWorldOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bIsMainWorldOnly = { "bIsMainWorldOnly", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bIsMainWorldOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMainWorldOnly_MetaData), NewProp_bIsMainWorldOnly_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles_SetBit(void* Obj)
{
	((AActor*)Obj)->bExchangedRoles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles = { "bExchangedRoles", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExchangedRoles_MetaData), NewProp_bExchangedRoles_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient_SetBit(void* Obj)
{
	((AActor*)Obj)->bNetLoadOnClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient = { "bNetLoadOnClient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetLoadOnClient_MetaData), NewProp_bNetLoadOnClient_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy_SetBit(void* Obj)
{
	((AActor*)Obj)->bNetUseOwnerRelevancy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy = { "bNetUseOwnerRelevancy", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetUseOwnerRelevancy_MetaData), NewProp_bNetUseOwnerRelevancy_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays_SetBit(void* Obj)
{
	((AActor*)Obj)->bRelevantForNetworkReplays = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays = { "bRelevantForNetworkReplays", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRelevantForNetworkReplays_MetaData), NewProp_bRelevantForNetworkReplays_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds_SetBit(void* Obj)
{
	((AActor*)Obj)->bRelevantForLevelBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds = { "bRelevantForLevelBounds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRelevantForLevelBounds_MetaData), NewProp_bRelevantForLevelBounds_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable_SetBit(void* Obj)
{
	((AActor*)Obj)->bReplayRewindable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable = { "bReplayRewindable", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplayRewindable_MetaData), NewProp_bReplayRewindable_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay_SetBit(void* Obj)
{
	((AActor*)Obj)->bAllowTickBeforeBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay = { "bAllowTickBeforeBeginPlay", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowTickBeforeBeginPlay_MetaData), NewProp_bAllowTickBeforeBeginPlay_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished_SetBit(void* Obj)
{
	((AActor*)Obj)->bAutoDestroyWhenFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished = { "bAutoDestroyWhenFinished", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDestroyWhenFinished_MetaData), NewProp_bAutoDestroyWhenFinished_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged_SetBit(void* Obj)
{
	((AActor*)Obj)->bCanBeDamaged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged = { "bCanBeDamaged", nullptr, (EPropertyFlags)0x0040000001000025, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeDamaged_MetaData), NewProp_bCanBeDamaged_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput_SetBit(void* Obj)
{
	((AActor*)Obj)->bBlockInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput = { "bBlockInput", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockInput_MetaData), NewProp_bBlockInput_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing_SetBit(void* Obj)
{
	((AActor*)Obj)->bCollideWhenPlacing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing = { "bCollideWhenPlacing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollideWhenPlacing_MetaData), NewProp_bCollideWhenPlacing_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget_SetBit(void* Obj)
{
	((AActor*)Obj)->bFindCameraComponentWhenViewTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget = { "bFindCameraComponentWhenViewTarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindCameraComponentWhenViewTarget_MetaData), NewProp_bFindCameraComponentWhenViewTarget_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming_SetBit(void* Obj)
{
	((AActor*)Obj)->bGenerateOverlapEventsDuringLevelStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming = { "bGenerateOverlapEventsDuringLevelStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateOverlapEventsDuringLevelStreaming_MetaData), NewProp_bGenerateOverlapEventsDuringLevelStreaming_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting_SetBit(void* Obj)
{
	((AActor*)Obj)->bIgnoresOriginShifting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting = { "bIgnoresOriginShifting", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoresOriginShifting_MetaData), NewProp_bIgnoresOriginShifting_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration_SetBit(void* Obj)
{
	((AActor*)Obj)->bEnableAutoLODGeneration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration = { "bEnableAutoLODGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoLODGeneration_MetaData), NewProp_bEnableAutoLODGeneration_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor_SetBit(void* Obj)
{
	((AActor*)Obj)->bIsEditorOnlyActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor = { "bIsEditorOnlyActor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditorOnlyActor_MetaData), NewProp_bIsEditorOnlyActor_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bReplicates_SetBit(void* Obj)
{
	((AActor*)Obj)->bReplicates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bReplicates = { "bReplicates", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bReplicates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicates_MetaData), NewProp_bReplicates_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster_SetBit(void* Obj)
{
	((AActor*)Obj)->bCanBeInCluster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster = { "bCanBeInCluster", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeInCluster_MetaData), NewProp_bCanBeInCluster_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer_SetBit(void* Obj)
{
	((AActor*)Obj)->bAllowReceiveTickEventOnDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer = { "bAllowReceiveTickEventOnDedicatedServer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowReceiveTickEventOnDedicatedServer_MetaData), NewProp_bAllowReceiveTickEventOnDedicatedServer_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bReplicateUsingRegisteredSubObjectList_SetBit(void* Obj)
{
	((AActor*)Obj)->bReplicateUsingRegisteredSubObjectList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bReplicateUsingRegisteredSubObjectList = { "bReplicateUsingRegisteredSubObjectList", nullptr, (EPropertyFlags)0x00200c0000014015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bReplicateUsingRegisteredSubObjectList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateUsingRegisteredSubObjectList_MetaData), NewProp_bReplicateUsingRegisteredSubObjectList_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision_SetBit(void* Obj)
{
	((AActor*)Obj)->bActorEnableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision = { "bActorEnableCollision", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActorEnableCollision_MetaData), NewProp_bActorEnableCollision_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed_SetBit(void* Obj)
{
	((AActor*)Obj)->bActorIsBeingDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed = { "bActorIsBeingDestroyed", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActorIsBeingDestroyed_MetaData), NewProp_bActorIsBeingDestroyed_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bAsyncPhysicsTickEnabled_SetBit(void* Obj)
{
	((AActor*)Obj)->bAsyncPhysicsTickEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bAsyncPhysicsTickEnabled = { "bAsyncPhysicsTickEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bAsyncPhysicsTickEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAsyncPhysicsTickEnabled_MetaData), NewProp_bAsyncPhysicsTickEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming = { "UpdateOverlapsMethodDuringLevelStreaming", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, UpdateOverlapsMethodDuringLevelStreaming), Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateOverlapsMethodDuringLevelStreaming_MetaData), NewProp_UpdateOverlapsMethodDuringLevelStreaming_MetaData) }; // 686339747
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming = { "DefaultUpdateOverlapsMethodDuringLevelStreaming", nullptr, (EPropertyFlags)0x0040000000024001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, DefaultUpdateOverlapsMethodDuringLevelStreaming), Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_MetaData), NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_MetaData) }; // 686339747
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_RemoteRole = { "RemoteRole", nullptr, (EPropertyFlags)0x0040000000022821, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, RemoteRole), Z_Construct_UEnum_Engine_ENetRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteRole_MetaData), NewProp_RemoteRole_MetaData) }; // 3970937116
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InitialLifeSpan = { "InitialLifeSpan", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, InitialLifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLifeSpan_MetaData), NewProp_InitialLifeSpan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_CustomTimeDilation = { "CustomTimeDilation", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, CustomTimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTimeDilation_MetaData), NewProp_CustomTimeDilation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_RayTracingGroupId = { "RayTracingGroupId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, RayTracingGroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingGroupId_MetaData), NewProp_RayTracingGroupId_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_GridPlacement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_GridPlacement = { "GridPlacement", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, GridPlacement_DEPRECATED), Z_Construct_UEnum_Engine_EActorGridPlacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPlacement_MetaData), NewProp_GridPlacement_MetaData) }; // 3847372631
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_RuntimeGrid = { "RuntimeGrid", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, RuntimeGrid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeGrid_MetaData), NewProp_RuntimeGrid_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_AttachmentReplication = { "AttachmentReplication", "OnRep_AttachmentReplication", (EPropertyFlags)0x0020088100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, AttachmentReplication), Z_Construct_UScriptStruct_FRepAttachment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentReplication_MetaData), NewProp_AttachmentReplication_MetaData) }; // 1509821470
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ReplicatedMovement = { "ReplicatedMovement", "OnRep_ReplicatedMovement", (EPropertyFlags)0x0040040100010021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, ReplicatedMovement), Z_Construct_UScriptStruct_FRepMovement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedMovement_MetaData), NewProp_ReplicatedMovement_MetaData) }; // 2904220107
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Owner = { "Owner", "OnRep_Owner", (EPropertyFlags)0x0114000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetDriverName = { "NetDriverName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, NetDriverName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriverName_MetaData), NewProp_NetDriverName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0040000000020821, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, Role), Z_Construct_UEnum_Engine_ENetRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) }; // 3970937116
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetDormancy = { "NetDormancy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, NetDormancy), Z_Construct_UEnum_Engine_ENetDormancy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDormancy_MetaData), NewProp_NetDormancy_MetaData) }; // 2737447960
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod = { "SpawnCollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, SpawnCollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCollisionHandlingMethod_MetaData), NewProp_SpawnCollisionHandlingMethod_MetaData) }; // 2749820453
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_AutoReceiveInput = { "AutoReceiveInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, AutoReceiveInput), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoReceiveInput_MetaData), NewProp_AutoReceiveInput_MetaData) }; // 1625585255
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InputPriority = { "InputPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, InputPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPriority_MetaData), NewProp_InputPriority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0114000000280008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputComponent_MetaData), NewProp_InputComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetTag = { "NetTag", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, NetTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetTag_MetaData), NewProp_NetTag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetCullDistanceSquared = { "NetCullDistanceSquared", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, NetCullDistanceSquared), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetCullDistanceSquared_MetaData), NewProp_NetCullDistanceSquared_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetUpdateFrequency = { "NetUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, NetUpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetUpdateFrequency_MetaData), NewProp_NetUpdateFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_MinNetUpdateFrequency = { "MinNetUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, MinNetUpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinNetUpdateFrequency_MetaData), NewProp_MinNetUpdateFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_NetPriority = { "NetPriority", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, NetPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetPriority_MetaData), NewProp_NetPriority_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_PhysicsReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_PhysicsReplicationMode = { "PhysicsReplicationMode", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, PhysicsReplicationMode), Z_Construct_UEnum_Engine_EPhysicsReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsReplicationMode_MetaData), NewProp_PhysicsReplicationMode_MetaData) }; // 1461121912
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Instigator = { "Instigator", "OnRep_Instigator", (EPropertyFlags)0x0145000100000024, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_RootComponent = { "RootComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, RootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComponent_MetaData), NewProp_RootComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x00200c0800000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, PivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotOffset_MetaData), NewProp_PivotOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_HLODLayer = { "HLODLayer", nullptr, (EPropertyFlags)0x0144000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, HLODLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODLayer_MetaData), NewProp_HLODLayer_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ParentComponentActor = { "ParentComponentActor", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, ParentComponentActor_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentComponentActor_MetaData), NewProp_ParentComponentActor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ParentComponent = { "ParentComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, ParentComponent), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentComponent_MetaData), NewProp_ParentComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ActorGuid = { "ActorGuid", nullptr, (EPropertyFlags)0x0020cc0c00000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, ActorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorGuid_MetaData), NewProp_ActorGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ActorInstanceGuid = { "ActorInstanceGuid", nullptr, (EPropertyFlags)0x0020cc0c00002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, ActorInstanceGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorInstanceGuid_MetaData), NewProp_ActorInstanceGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ContentBundleGuid = { "ContentBundleGuid", nullptr, (EPropertyFlags)0x00204c0c00000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, ContentBundleGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBundleGuid_MetaData), NewProp_ContentBundleGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 1894108120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x00200c0800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayers_MetaData), NewProp_DataLayers_MetaData) }; // 1894108120
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_DataLayerAssets_Inner = { "DataLayerAssets", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_DataLayerAssets = { "DataLayerAssets", nullptr, (EPropertyFlags)0x00240c0800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, DataLayerAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerAssets_MetaData), NewProp_DataLayerAssets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ExternalDataLayerAsset = { "ExternalDataLayerAsset", nullptr, (EPropertyFlags)0x01244c0800020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, ExternalDataLayerAsset), Z_Construct_UClass_UExternalDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalDataLayerAsset_MetaData), NewProp_ExternalDataLayerAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_GroupActor = { "GroupActor", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, GroupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupActor_MetaData), NewProp_GroupActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_SpriteScale = { "SpriteScale", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, SpriteScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteScale_MetaData), NewProp_SpriteScale_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_AActor_Statics::NewProp_HiddenEditorViews = { "HiddenEditorViews", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, HiddenEditorViews), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenEditorViews_MetaData), NewProp_HiddenEditorViews_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_ActorLabel = { "ActorLabel", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, ActorLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLabel_MetaData), NewProp_ActorLabel_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderPath_MetaData), NewProp_FolderPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_FolderGuid = { "FolderGuid", nullptr, (EPropertyFlags)0x0040400800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, FolderGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderGuid_MetaData), NewProp_FolderGuid_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd_SetBit(void* Obj)
{
	((AActor*)Obj)->bHiddenEd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd = { "bHiddenEd", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenEd_MetaData), NewProp_bHiddenEd_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor_SetBit(void* Obj)
{
	((AActor*)Obj)->bIsEditorPreviewActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor = { "bIsEditorPreviewActor", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditorPreviewActor_MetaData), NewProp_bIsEditorPreviewActor_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer_SetBit(void* Obj)
{
	((AActor*)Obj)->bHiddenEdLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer = { "bHiddenEdLayer", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenEdLayer_MetaData), NewProp_bHiddenEdLayer_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel_SetBit(void* Obj)
{
	((AActor*)Obj)->bHiddenEdLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel = { "bHiddenEdLevel", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenEdLevel_MetaData), NewProp_bHiddenEdLevel_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation_SetBit(void* Obj)
{
	((AActor*)Obj)->bLockLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation = { "bLockLocation", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockLocation_MetaData), NewProp_bLockLocation_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable_SetBit(void* Obj)
{
	((AActor*)Obj)->bActorLabelEditable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable = { "bActorLabelEditable", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActorLabelEditable_MetaData), NewProp_bActorLabelEditable_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bEditable_SetBit(void* Obj)
{
	((AActor*)Obj)->bEditable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bEditable = { "bEditable", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditable_MetaData), NewProp_bEditable_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner_SetBit(void* Obj)
{
	((AActor*)Obj)->bListedInSceneOutliner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner = { "bListedInSceneOutliner", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bListedInSceneOutliner_MetaData), NewProp_bListedInSceneOutliner_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData_SetBit(void* Obj)
{
	((AActor*)Obj)->bOptimizeBPComponentData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData = { "bOptimizeBPComponentData", nullptr, (EPropertyFlags)0x00200c0800010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeBPComponentData_MetaData), NewProp_bOptimizeBPComponentData_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bCanPlayFromHere_SetBit(void* Obj)
{
	((AActor*)Obj)->bCanPlayFromHere = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bCanPlayFromHere = { "bCanPlayFromHere", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bCanPlayFromHere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanPlayFromHere_MetaData), NewProp_bCanPlayFromHere_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bIsSpatiallyLoaded_SetBit(void* Obj)
{
	((AActor*)Obj)->bIsSpatiallyLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bIsSpatiallyLoaded = { "bIsSpatiallyLoaded", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bIsSpatiallyLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSpatiallyLoaded_MetaData), NewProp_bIsSpatiallyLoaded_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary_SetBit(void* Obj)
{
	((AActor*)Obj)->bHiddenEdTemporary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary = { "bHiddenEdTemporary", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenEdTemporary_MetaData), NewProp_bHiddenEdTemporary_MetaData) };
void Z_Construct_UClass_AActor_Statics::NewProp_bForceExternalActorLevelReferenceForPIE_SetBit(void* Obj)
{
	((AActor*)Obj)->bForceExternalActorLevelReferenceForPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_bForceExternalActorLevelReferenceForPIE = { "bForceExternalActorLevelReferenceForPIE", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AActor), &Z_Construct_UClass_AActor_Statics::NewProp_bForceExternalActorLevelReferenceForPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceExternalActorLevelReferenceForPIE_MetaData), NewProp_bForceExternalActorLevelReferenceForPIE_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnTakeAnyDamage = { "OnTakeAnyDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnTakeAnyDamage), Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTakeAnyDamage_MetaData), NewProp_OnTakeAnyDamage_MetaData) }; // 1397801502
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnTakePointDamage = { "OnTakePointDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnTakePointDamage), Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTakePointDamage_MetaData), NewProp_OnTakePointDamage_MetaData) }; // 265044790
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnTakeRadialDamage = { "OnTakeRadialDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnTakeRadialDamage), Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTakeRadialDamage_MetaData), NewProp_OnTakeRadialDamage_MetaData) }; // 2393679447
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnActorBeginOverlap = { "OnActorBeginOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnActorBeginOverlap), Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActorBeginOverlap_MetaData), NewProp_OnActorBeginOverlap_MetaData) }; // 1217415920
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnActorEndOverlap = { "OnActorEndOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnActorEndOverlap), Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActorEndOverlap_MetaData), NewProp_OnActorEndOverlap_MetaData) }; // 2199455681
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnBeginCursorOver = { "OnBeginCursorOver", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnBeginCursorOver), Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginCursorOver_MetaData), NewProp_OnBeginCursorOver_MetaData) }; // 4153187804
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnEndCursorOver = { "OnEndCursorOver", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnEndCursorOver), Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndCursorOver_MetaData), NewProp_OnEndCursorOver_MetaData) }; // 830856601
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnClicked), Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClicked_MetaData), NewProp_OnClicked_MetaData) }; // 2624585555
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnReleased = { "OnReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnReleased), Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReleased_MetaData), NewProp_OnReleased_MetaData) }; // 2657558773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchBegin = { "OnInputTouchBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnInputTouchBegin), Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputTouchBegin_MetaData), NewProp_OnInputTouchBegin_MetaData) }; // 454931880
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnd = { "OnInputTouchEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnInputTouchEnd), Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputTouchEnd_MetaData), NewProp_OnInputTouchEnd_MetaData) }; // 2808792487
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnter = { "OnInputTouchEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnInputTouchEnter), Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputTouchEnter_MetaData), NewProp_OnInputTouchEnter_MetaData) }; // 3740431349
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchLeave = { "OnInputTouchLeave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnInputTouchLeave), Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputTouchLeave_MetaData), NewProp_OnInputTouchLeave_MetaData) }; // 1841759582
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnActorHit = { "OnActorHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnActorHit), Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActorHit_MetaData), NewProp_OnActorHit_MetaData) }; // 2363881186
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnDestroyed = { "OnDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnDestroyed), Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDestroyed_MetaData), NewProp_OnDestroyed_MetaData) }; // 2318865226
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AActor_Statics::NewProp_OnEndPlay = { "OnEndPlay", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, OnEndPlay), Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndPlay_MetaData), NewProp_OnEndPlay_MetaData) }; // 695919175
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_Inner = { "InstanceComponents", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceComponents_Inner_MetaData), NewProp_InstanceComponents_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents = { "InstanceComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, InstanceComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceComponents_MetaData), NewProp_InstanceComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents_Inner = { "BlueprintCreatedComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents = { "BlueprintCreatedComponents", nullptr, (EPropertyFlags)0x0114408400000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor, BlueprintCreatedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintCreatedComponents_MetaData), NewProp_BlueprintCreatedComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_PrimaryActorTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplicationForReplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bTearOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bForceNetAddressable,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_LevelInstanceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_LevelInstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_LevelInstanceFlags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_LevelInstanceFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bIsMainWorldOnly,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bReplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bReplicateUsingRegisteredSubObjectList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bAsyncPhysicsTickEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_UpdateOverlapsMethodDuringLevelStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_DefaultUpdateOverlapsMethodDuringLevelStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_RemoteRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InitialLifeSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_CustomTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_RayTracingGroupId,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_GridPlacement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_GridPlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_RuntimeGrid,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_AttachmentReplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ReplicatedMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetDriverName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetDormancy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_SpawnCollisionHandlingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_AutoReceiveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InputPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetCullDistanceSquared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetUpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_MinNetUpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_NetPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_PhysicsReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_PhysicsReplicationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Children,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_RootComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_PivotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_HLODLayer,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Layers,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ParentComponentActor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ParentComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ActorGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ActorInstanceGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ContentBundleGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_DataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_DataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_DataLayerAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_DataLayerAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ExternalDataLayerAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_GroupActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_SpriteScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_HiddenEditorViews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_ActorLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_FolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_FolderGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorPreviewActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bLockLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bActorLabelEditable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bEditable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bListedInSceneOutliner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bOptimizeBPComponentData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bCanPlayFromHere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bIsSpatiallyLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bHiddenEdTemporary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_bForceExternalActorLevelReferenceForPIE,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnTakeAnyDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnTakePointDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnTakeRadialDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnActorBeginOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnActorEndOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnBeginCursorOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnEndCursorOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnInputTouchLeave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnActorHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_OnEndPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_InstanceComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_Statics::NewProp_BlueprintCreatedComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActor_Statics::ClassParams = {
	&AActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActor()
{
	if (!Z_Registration_Info_UClass_AActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActor.OuterSingleton, Z_Construct_UClass_AActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AActor>()
{
	return AActor::StaticClass();
}
void AActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
	static const FName Name_bHidden(TEXT("bHidden"));
	static const FName Name_bTearOff(TEXT("bTearOff"));
	static const FName Name_bCanBeDamaged(TEXT("bCanBeDamaged"));
	static const FName Name_RemoteRole(TEXT("RemoteRole"));
	static const FName Name_AttachmentReplication(TEXT("AttachmentReplication"));
	static const FName Name_ReplicatedMovement(TEXT("ReplicatedMovement"));
	static const FName Name_Owner(TEXT("Owner"));
	static const FName Name_Role(TEXT("Role"));
	static const FName Name_Instigator(TEXT("Instigator"));
	const bool bIsValid = true
		&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName()
		&& Name_bHidden == ClassReps[(int32)ENetFields_Private::bHidden].Property->GetFName()
		&& Name_bTearOff == ClassReps[(int32)ENetFields_Private::bTearOff].Property->GetFName()
		&& Name_bCanBeDamaged == ClassReps[(int32)ENetFields_Private::bCanBeDamaged].Property->GetFName()
		&& Name_RemoteRole == ClassReps[(int32)ENetFields_Private::RemoteRole].Property->GetFName()
		&& Name_AttachmentReplication == ClassReps[(int32)ENetFields_Private::AttachmentReplication].Property->GetFName()
		&& Name_ReplicatedMovement == ClassReps[(int32)ENetFields_Private::ReplicatedMovement].Property->GetFName()
		&& Name_Owner == ClassReps[(int32)ENetFields_Private::Owner].Property->GetFName()
		&& Name_Role == ClassReps[(int32)ENetFields_Private::Role].Property->GetFName()
		&& Name_Instigator == ClassReps[(int32)ENetFields_Private::Instigator].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActor);
AActor::~AActor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AActor)
// End Class AActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EActorUpdateOverlapsMethod_StaticEnum, TEXT("EActorUpdateOverlapsMethod"), &Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 686339747U) },
		{ ESpawnActorScaleMethod_StaticEnum, TEXT("ESpawnActorScaleMethod"), &Z_Registration_Info_UEnum_ESpawnActorScaleMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2592459693U) },
		{ ELevelInstanceType_StaticEnum, TEXT("ELevelInstanceType"), &Z_Registration_Info_UEnum_ELevelInstanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1831733694U) },
		{ ELevelInstanceFlags_StaticEnum, TEXT("ELevelInstanceFlags"), &Z_Registration_Info_UEnum_ELevelInstanceFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1675910049U) },
#if WITH_EDITORONLY_DATA
		{ EActorGridPlacement_StaticEnum, TEXT("EActorGridPlacement"), &Z_Registration_Info_UEnum_EActorGridPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3847372631U) },
#endif // WITH_EDITORONLY_DATA
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActor, AActor::StaticClass, TEXT("AActor"), &Z_Registration_Info_UClass_AActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActor), 4292478045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_228121795(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
