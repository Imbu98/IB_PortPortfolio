// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Tests/UObject/InstanceDataObjectUtilsTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstanceDataObjectUtilsTest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UTestInstanceDataObjectClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UTestInstanceDataObjectClass_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Enum ETestInstanceDataObjectBird
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectBird;
static UEnum* ETestInstanceDataObjectBird_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectBird.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectBird.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectBird"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectBird.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectBird>()
{
	return ETestInstanceDataObjectBird_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "TIDOB_Cardinal.Name", "TIDOB_Cardinal" },
		{ "TIDOB_Crow.Name", "TIDOB_Crow" },
		{ "TIDOB_Eagle.Name", "TIDOB_Eagle" },
		{ "TIDOB_Hawk.Name", "TIDOB_Hawk" },
		{ "TIDOB_None.Name", "TIDOB_None" },
		{ "TIDOB_Owl.Name", "TIDOB_Owl" },
		{ "TIDOB_Raven.Name", "TIDOB_Raven" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TIDOB_None", (int64)TIDOB_None },
		{ "TIDOB_Cardinal", (int64)TIDOB_Cardinal },
		{ "TIDOB_Crow", (int64)TIDOB_Crow },
		{ "TIDOB_Eagle", (int64)TIDOB_Eagle },
		{ "TIDOB_Hawk", (int64)TIDOB_Hawk },
		{ "TIDOB_Owl", (int64)TIDOB_Owl },
		{ "TIDOB_Raven", (int64)TIDOB_Raven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectBird",
	"ETestInstanceDataObjectBird",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectBird.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectBird.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectBird.InnerSingleton;
}
// End Enum ETestInstanceDataObjectBird

// Begin Enum ETestInstanceDataObjectGrain
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectGrain;
static UEnum* ETestInstanceDataObjectGrain_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectGrain.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectGrain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectGrain"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectGrain.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectGrain::Type>()
{
	return ETestInstanceDataObjectGrain_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Barley.Name", "ETestInstanceDataObjectGrain::Barley" },
		{ "Corn.Name", "ETestInstanceDataObjectGrain::Corn" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "None.Name", "ETestInstanceDataObjectGrain::None" },
		{ "Quinoa.Name", "ETestInstanceDataObjectGrain::Quinoa" },
		{ "Rice.Name", "ETestInstanceDataObjectGrain::Rice" },
		{ "Wheat.Name", "ETestInstanceDataObjectGrain::Wheat" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETestInstanceDataObjectGrain::None", (int64)ETestInstanceDataObjectGrain::None },
		{ "ETestInstanceDataObjectGrain::Barley", (int64)ETestInstanceDataObjectGrain::Barley },
		{ "ETestInstanceDataObjectGrain::Corn", (int64)ETestInstanceDataObjectGrain::Corn },
		{ "ETestInstanceDataObjectGrain::Quinoa", (int64)ETestInstanceDataObjectGrain::Quinoa },
		{ "ETestInstanceDataObjectGrain::Rice", (int64)ETestInstanceDataObjectGrain::Rice },
		{ "ETestInstanceDataObjectGrain::Wheat", (int64)ETestInstanceDataObjectGrain::Wheat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectGrain",
	"ETestInstanceDataObjectGrain::Type",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectGrain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectGrain.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectGrain.InnerSingleton;
}
// End Enum ETestInstanceDataObjectGrain

// Begin Enum ETestInstanceDataObjectGrainAlternate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternate;
static UEnum* ETestInstanceDataObjectGrainAlternate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectGrainAlternate"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternate.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectGrainAlternate::Type>()
{
	return ETestInstanceDataObjectGrainAlternate_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Corn.Name", "ETestInstanceDataObjectGrainAlternate::Corn" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "None.Name", "ETestInstanceDataObjectGrainAlternate::None" },
		{ "Rice.Name", "ETestInstanceDataObjectGrainAlternate::Rice" },
		{ "Rye.Name", "ETestInstanceDataObjectGrainAlternate::Rye" },
		{ "Wheat.Name", "ETestInstanceDataObjectGrainAlternate::Wheat" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETestInstanceDataObjectGrainAlternate::None", (int64)ETestInstanceDataObjectGrainAlternate::None },
		{ "ETestInstanceDataObjectGrainAlternate::Corn", (int64)ETestInstanceDataObjectGrainAlternate::Corn },
		{ "ETestInstanceDataObjectGrainAlternate::Rice", (int64)ETestInstanceDataObjectGrainAlternate::Rice },
		{ "ETestInstanceDataObjectGrainAlternate::Rye", (int64)ETestInstanceDataObjectGrainAlternate::Rye },
		{ "ETestInstanceDataObjectGrainAlternate::Wheat", (int64)ETestInstanceDataObjectGrainAlternate::Wheat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectGrainAlternate",
	"ETestInstanceDataObjectGrainAlternate::Type",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternate.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternate.InnerSingleton;
}
// End Enum ETestInstanceDataObjectGrainAlternate

// Begin Enum ETestInstanceDataObjectGrainAlternateEnumClass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternateEnumClass;
static UEnum* ETestInstanceDataObjectGrainAlternateEnumClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternateEnumClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternateEnumClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectGrainAlternateEnumClass"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternateEnumClass.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectGrainAlternateEnumClass>()
{
	return ETestInstanceDataObjectGrainAlternateEnumClass_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Corn.Name", "ETestInstanceDataObjectGrainAlternateEnumClass::Corn" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "None.Name", "ETestInstanceDataObjectGrainAlternateEnumClass::None" },
		{ "Rice.Name", "ETestInstanceDataObjectGrainAlternateEnumClass::Rice" },
		{ "Rye.Name", "ETestInstanceDataObjectGrainAlternateEnumClass::Rye" },
		{ "Wheat.Name", "ETestInstanceDataObjectGrainAlternateEnumClass::Wheat" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETestInstanceDataObjectGrainAlternateEnumClass::None", (int64)ETestInstanceDataObjectGrainAlternateEnumClass::None },
		{ "ETestInstanceDataObjectGrainAlternateEnumClass::Corn", (int64)ETestInstanceDataObjectGrainAlternateEnumClass::Corn },
		{ "ETestInstanceDataObjectGrainAlternateEnumClass::Rice", (int64)ETestInstanceDataObjectGrainAlternateEnumClass::Rice },
		{ "ETestInstanceDataObjectGrainAlternateEnumClass::Rye", (int64)ETestInstanceDataObjectGrainAlternateEnumClass::Rye },
		{ "ETestInstanceDataObjectGrainAlternateEnumClass::Wheat", (int64)ETestInstanceDataObjectGrainAlternateEnumClass::Wheat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectGrainAlternateEnumClass",
	"ETestInstanceDataObjectGrainAlternateEnumClass",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternateEnumClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternateEnumClass.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternateEnumClass.InnerSingleton;
}
// End Enum ETestInstanceDataObjectGrainAlternateEnumClass

// Begin Enum ETestInstanceDataObjectFruit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectFruit;
static UEnum* ETestInstanceDataObjectFruit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectFruit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectFruit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectFruit"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectFruit.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectFruit>()
{
	return ETestInstanceDataObjectFruit_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Apple.Name", "ETestInstanceDataObjectFruit::Apple" },
		{ "Banana.Name", "ETestInstanceDataObjectFruit::Banana" },
		{ "Lemon.Name", "ETestInstanceDataObjectFruit::Lemon" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "None.Name", "ETestInstanceDataObjectFruit::None" },
		{ "Orange.Name", "ETestInstanceDataObjectFruit::Orange" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETestInstanceDataObjectFruit::None", (int64)ETestInstanceDataObjectFruit::None },
		{ "ETestInstanceDataObjectFruit::Apple", (int64)ETestInstanceDataObjectFruit::Apple },
		{ "ETestInstanceDataObjectFruit::Banana", (int64)ETestInstanceDataObjectFruit::Banana },
		{ "ETestInstanceDataObjectFruit::Lemon", (int64)ETestInstanceDataObjectFruit::Lemon },
		{ "ETestInstanceDataObjectFruit::Orange", (int64)ETestInstanceDataObjectFruit::Orange },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectFruit",
	"ETestInstanceDataObjectFruit",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectFruit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectFruit.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectFruit.InnerSingleton;
}
// End Enum ETestInstanceDataObjectFruit

// Begin Enum ETestInstanceDataObjectFruitAlternate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternate;
static UEnum* ETestInstanceDataObjectFruitAlternate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectFruitAlternate"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternate.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectFruitAlternate>()
{
	return ETestInstanceDataObjectFruitAlternate_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Apple.Name", "ETestInstanceDataObjectFruitAlternate::Apple" },
		{ "Cherry.Name", "ETestInstanceDataObjectFruitAlternate::Cherry" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "None.Name", "ETestInstanceDataObjectFruitAlternate::None" },
		{ "Orange.Name", "ETestInstanceDataObjectFruitAlternate::Orange" },
		{ "Pear.Name", "ETestInstanceDataObjectFruitAlternate::Pear" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETestInstanceDataObjectFruitAlternate::None", (int64)ETestInstanceDataObjectFruitAlternate::None },
		{ "ETestInstanceDataObjectFruitAlternate::Apple", (int64)ETestInstanceDataObjectFruitAlternate::Apple },
		{ "ETestInstanceDataObjectFruitAlternate::Cherry", (int64)ETestInstanceDataObjectFruitAlternate::Cherry },
		{ "ETestInstanceDataObjectFruitAlternate::Orange", (int64)ETestInstanceDataObjectFruitAlternate::Orange },
		{ "ETestInstanceDataObjectFruitAlternate::Pear", (int64)ETestInstanceDataObjectFruitAlternate::Pear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectFruitAlternate",
	"ETestInstanceDataObjectFruitAlternate",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternate.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternate.InnerSingleton;
}
// End Enum ETestInstanceDataObjectFruitAlternate

// Begin Enum ETestInstanceDataObjectFruitAlternateNamespace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternateNamespace;
static UEnum* ETestInstanceDataObjectFruitAlternateNamespace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternateNamespace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternateNamespace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectFruitAlternateNamespace"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternateNamespace.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectFruitAlternateNamespace::Type>()
{
	return ETestInstanceDataObjectFruitAlternateNamespace_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Apple.Name", "ETestInstanceDataObjectFruitAlternateNamespace::Apple" },
		{ "Cherry.Name", "ETestInstanceDataObjectFruitAlternateNamespace::Cherry" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "None.Name", "ETestInstanceDataObjectFruitAlternateNamespace::None" },
		{ "Orange.Name", "ETestInstanceDataObjectFruitAlternateNamespace::Orange" },
		{ "Pear.Name", "ETestInstanceDataObjectFruitAlternateNamespace::Pear" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETestInstanceDataObjectFruitAlternateNamespace::None", (int64)ETestInstanceDataObjectFruitAlternateNamespace::None },
		{ "ETestInstanceDataObjectFruitAlternateNamespace::Apple", (int64)ETestInstanceDataObjectFruitAlternateNamespace::Apple },
		{ "ETestInstanceDataObjectFruitAlternateNamespace::Cherry", (int64)ETestInstanceDataObjectFruitAlternateNamespace::Cherry },
		{ "ETestInstanceDataObjectFruitAlternateNamespace::Orange", (int64)ETestInstanceDataObjectFruitAlternateNamespace::Orange },
		{ "ETestInstanceDataObjectFruitAlternateNamespace::Pear", (int64)ETestInstanceDataObjectFruitAlternateNamespace::Pear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectFruitAlternateNamespace",
	"ETestInstanceDataObjectFruitAlternateNamespace::Type",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternateNamespace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternateNamespace.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternateNamespace.InnerSingleton;
}
// End Enum ETestInstanceDataObjectFruitAlternateNamespace

// Begin Enum ETestInstanceDataObjectDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectDirection;
static UEnum* ETestInstanceDataObjectDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectDirection"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectDirection.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectDirection>()
{
	return ETestInstanceDataObjectDirection_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "East.Name", "ETestInstanceDataObjectDirection::East" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "None.Name", "ETestInstanceDataObjectDirection::None" },
		{ "North.Name", "ETestInstanceDataObjectDirection::North" },
		{ "South.Name", "ETestInstanceDataObjectDirection::South" },
		{ "West.Name", "ETestInstanceDataObjectDirection::West" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETestInstanceDataObjectDirection::None", (int64)ETestInstanceDataObjectDirection::None },
		{ "ETestInstanceDataObjectDirection::North", (int64)ETestInstanceDataObjectDirection::North },
		{ "ETestInstanceDataObjectDirection::East", (int64)ETestInstanceDataObjectDirection::East },
		{ "ETestInstanceDataObjectDirection::South", (int64)ETestInstanceDataObjectDirection::South },
		{ "ETestInstanceDataObjectDirection::West", (int64)ETestInstanceDataObjectDirection::West },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectDirection",
	"ETestInstanceDataObjectDirection",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection_Statics::Enumerators),
	EEnumFlags::Flags,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectDirection.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectDirection.InnerSingleton;
}
// End Enum ETestInstanceDataObjectDirection

// Begin Enum ETestInstanceDataObjectDirectionAlternate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectDirectionAlternate;
static UEnum* ETestInstanceDataObjectDirectionAlternate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectDirectionAlternate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectDirectionAlternate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectDirectionAlternate"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectDirectionAlternate.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectDirectionAlternate>()
{
	return ETestInstanceDataObjectDirectionAlternate_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Down.Name", "ETestInstanceDataObjectDirectionAlternate::Down" },
		{ "East.Name", "ETestInstanceDataObjectDirectionAlternate::East" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "None.Name", "ETestInstanceDataObjectDirectionAlternate::None" },
		{ "North.Name", "ETestInstanceDataObjectDirectionAlternate::North" },
		{ "South.Name", "ETestInstanceDataObjectDirectionAlternate::South" },
		{ "Up.Name", "ETestInstanceDataObjectDirectionAlternate::Up" },
		{ "West.Name", "ETestInstanceDataObjectDirectionAlternate::West" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETestInstanceDataObjectDirectionAlternate::None", (int64)ETestInstanceDataObjectDirectionAlternate::None },
		{ "ETestInstanceDataObjectDirectionAlternate::Up", (int64)ETestInstanceDataObjectDirectionAlternate::Up },
		{ "ETestInstanceDataObjectDirectionAlternate::Down", (int64)ETestInstanceDataObjectDirectionAlternate::Down },
		{ "ETestInstanceDataObjectDirectionAlternate::North", (int64)ETestInstanceDataObjectDirectionAlternate::North },
		{ "ETestInstanceDataObjectDirectionAlternate::East", (int64)ETestInstanceDataObjectDirectionAlternate::East },
		{ "ETestInstanceDataObjectDirectionAlternate::South", (int64)ETestInstanceDataObjectDirectionAlternate::South },
		{ "ETestInstanceDataObjectDirectionAlternate::West", (int64)ETestInstanceDataObjectDirectionAlternate::West },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectDirectionAlternate",
	"ETestInstanceDataObjectDirectionAlternate",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate_Statics::Enumerators),
	EEnumFlags::Flags,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectDirectionAlternate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectDirectionAlternate.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectDirectionAlternate.InnerSingleton;
}
// End Enum ETestInstanceDataObjectDirectionAlternate

// Begin Enum ETestInstanceDataObjectFullFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInstanceDataObjectFullFlags;
static UEnum* ETestInstanceDataObjectFullFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectFullFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETestInstanceDataObjectFullFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ETestInstanceDataObjectFullFlags"));
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectFullFlags.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<ETestInstanceDataObjectFullFlags>()
{
	return ETestInstanceDataObjectFullFlags_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Flag0.Name", "ETestInstanceDataObjectFullFlags::Flag0" },
		{ "Flag1.Name", "ETestInstanceDataObjectFullFlags::Flag1" },
		{ "Flag2.Name", "ETestInstanceDataObjectFullFlags::Flag2" },
		{ "Flag4.Comment", "// Flag3 skipped for testing insertion of an unknown flag in the middle.\n" },
		{ "Flag4.Name", "ETestInstanceDataObjectFullFlags::Flag4" },
		{ "Flag4.ToolTip", "Flag3 skipped for testing insertion of an unknown flag in the middle." },
		{ "Flag5.Name", "ETestInstanceDataObjectFullFlags::Flag5" },
		{ "Flag6.Name", "ETestInstanceDataObjectFullFlags::Flag6" },
		{ "Flag7.Name", "ETestInstanceDataObjectFullFlags::Flag7" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "None.Name", "ETestInstanceDataObjectFullFlags::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETestInstanceDataObjectFullFlags::None", (int64)ETestInstanceDataObjectFullFlags::None },
		{ "ETestInstanceDataObjectFullFlags::Flag0", (int64)ETestInstanceDataObjectFullFlags::Flag0 },
		{ "ETestInstanceDataObjectFullFlags::Flag1", (int64)ETestInstanceDataObjectFullFlags::Flag1 },
		{ "ETestInstanceDataObjectFullFlags::Flag2", (int64)ETestInstanceDataObjectFullFlags::Flag2 },
		{ "ETestInstanceDataObjectFullFlags::Flag4", (int64)ETestInstanceDataObjectFullFlags::Flag4 },
		{ "ETestInstanceDataObjectFullFlags::Flag5", (int64)ETestInstanceDataObjectFullFlags::Flag5 },
		{ "ETestInstanceDataObjectFullFlags::Flag6", (int64)ETestInstanceDataObjectFullFlags::Flag6 },
		{ "ETestInstanceDataObjectFullFlags::Flag7", (int64)ETestInstanceDataObjectFullFlags::Flag7 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"ETestInstanceDataObjectFullFlags",
	"ETestInstanceDataObjectFullFlags",
	Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags_Statics::Enumerators),
	EEnumFlags::Flags,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags()
{
	if (!Z_Registration_Info_UEnum_ETestInstanceDataObjectFullFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInstanceDataObjectFullFlags.InnerSingleton, Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETestInstanceDataObjectFullFlags.InnerSingleton;
}
// End Enum ETestInstanceDataObjectFullFlags

// Begin ScriptStruct FTestInstanceDataObjectPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPoint;
class UScriptStruct* FTestInstanceDataObjectPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("TestInstanceDataObjectPoint"));
	}
	return Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPoint.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FTestInstanceDataObjectPoint>()
{
	return FTestInstanceDataObjectPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Z;
	static const UECodeGen_Private::FIntPropertyParams NewProp_W;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestInstanceDataObjectPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectPoint, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectPoint, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectPoint, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectPoint, W), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W_MetaData), NewProp_W_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::NewProp_W,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"TestInstanceDataObjectPoint",
	Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::PropPointers),
	sizeof(FTestInstanceDataObjectPoint),
	alignof(FTestInstanceDataObjectPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint()
{
	if (!Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPoint.InnerSingleton, Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPoint.InnerSingleton;
}
// End ScriptStruct FTestInstanceDataObjectPoint

// Begin ScriptStruct FTestInstanceDataObjectPointAlternate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPointAlternate;
class UScriptStruct* FTestInstanceDataObjectPointAlternate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPointAlternate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPointAlternate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("TestInstanceDataObjectPointAlternate"));
	}
	return Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPointAlternate.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FTestInstanceDataObjectPointAlternate>()
{
	return FTestInstanceDataObjectPointAlternate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_U;
	static const UECodeGen_Private::FIntPropertyParams NewProp_V;
	static const UECodeGen_Private::FIntPropertyParams NewProp_W;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestInstanceDataObjectPointAlternate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectPointAlternate, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectPointAlternate, V), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectPointAlternate, W), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W_MetaData), NewProp_W_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::NewProp_W,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"TestInstanceDataObjectPointAlternate",
	Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::PropPointers),
	sizeof(FTestInstanceDataObjectPointAlternate),
	alignof(FTestInstanceDataObjectPointAlternate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate()
{
	if (!Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPointAlternate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPointAlternate.InnerSingleton, Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPointAlternate.InnerSingleton;
}
// End ScriptStruct FTestInstanceDataObjectPointAlternate

// Begin ScriptStruct FTestInstanceDataObjectStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStruct;
class UScriptStruct* FTestInstanceDataObjectStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("TestInstanceDataObjectStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStruct.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FTestInstanceDataObjectStruct>()
{
	return FTestInstanceDataObjectStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bird_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grain_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fruit_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullFlags_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrainFromEnumClass_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FruitFromNamespace_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrainTypeChange_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FruitTypeChange_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrainTypeAndPropertyChange_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FruitTypeAndPropertyChange_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_C;
	static const UECodeGen_Private::FIntPropertyParams NewProp_D;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bird;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Grain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Fruit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Fruit;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FullFlags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FullFlags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrainFromEnumClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FruitFromNamespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FruitFromNamespace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrainTypeChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FruitTypeChange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FruitTypeChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrainTypeAndPropertyChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FruitTypeAndPropertyChange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FruitTypeAndPropertyChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestInstanceDataObjectStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, C), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, D), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_D_MetaData), NewProp_D_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Bird = { "Bird", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, Bird), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bird_MetaData), NewProp_Bird_MetaData) }; // 1858473807
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Grain = { "Grain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, Grain), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grain_MetaData), NewProp_Grain_MetaData) }; // 1010760469
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Fruit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Fruit = { "Fruit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, Fruit), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fruit_MetaData), NewProp_Fruit_MetaData) }; // 303669430
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, Direction), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3600602030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FullFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FullFlags = { "FullFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, FullFlags), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFullFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullFlags_MetaData), NewProp_FullFlags_MetaData) }; // 4217343587
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_GrainFromEnumClass = { "GrainFromEnumClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, GrainFromEnumClass), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrainFromEnumClass_MetaData), NewProp_GrainFromEnumClass_MetaData) }; // 1010760469
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitFromNamespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitFromNamespace = { "FruitFromNamespace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, FruitFromNamespace), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FruitFromNamespace_MetaData), NewProp_FruitFromNamespace_MetaData) }; // 303669430
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_GrainTypeChange = { "GrainTypeChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, GrainTypeChange), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrainTypeChange_MetaData), NewProp_GrainTypeChange_MetaData) }; // 1010760469
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitTypeChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitTypeChange = { "FruitTypeChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, FruitTypeChange), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FruitTypeChange_MetaData), NewProp_FruitTypeChange_MetaData) }; // 303669430
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_GrainTypeAndPropertyChange = { "GrainTypeAndPropertyChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, GrainTypeAndPropertyChange), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrainTypeAndPropertyChange_MetaData), NewProp_GrainTypeAndPropertyChange_MetaData) }; // 1010760469
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitTypeAndPropertyChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitTypeAndPropertyChange = { "FruitTypeAndPropertyChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, FruitTypeAndPropertyChange), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FruitTypeAndPropertyChange_MetaData), NewProp_FruitTypeAndPropertyChange_MetaData) }; // 303669430
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStruct, Point), Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) }; // 2687320675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Bird,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Grain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Fruit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Fruit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FullFlags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FullFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_GrainFromEnumClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitFromNamespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitFromNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_GrainTypeChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitTypeChange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitTypeChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_GrainTypeAndPropertyChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitTypeAndPropertyChange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_FruitTypeAndPropertyChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewProp_Point,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"TestInstanceDataObjectStruct",
	Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::PropPointers),
	sizeof(FTestInstanceDataObjectStruct),
	alignof(FTestInstanceDataObjectStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStruct.InnerSingleton, Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStruct.InnerSingleton;
}
// End ScriptStruct FTestInstanceDataObjectStruct

// Begin ScriptStruct FTestInstanceDataObjectStructAlternate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStructAlternate;
class UScriptStruct* FTestInstanceDataObjectStructAlternate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStructAlternate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStructAlternate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("TestInstanceDataObjectStructAlternate"));
	}
	return Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStructAlternate.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FTestInstanceDataObjectStructAlternate>()
{
	return FTestInstanceDataObjectStructAlternate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_E_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bird_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grain_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "OriginalType", "ETestInstanceDataObjectGrain(/Script/CoreUObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fruit_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "OriginalType", "ETestInstanceDataObjectFruit(/Script/CoreUObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "OriginalType", "ETestInstanceDataObjectDirection(/Script/CoreUObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrainFromEnumClass_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "OriginalType", "ETestInstanceDataObjectGrain(/Script/CoreUObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FruitFromNamespace_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "OriginalType", "ETestInstanceDataObjectFruit(/Script/CoreUObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrainTypeChange_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FruitTypeChange_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrainTypeAndPropertyChange_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FruitTypeAndPropertyChange_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeletedGrain_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "OriginalType", "ETestInstanceDataObjectDeletedGrain(/Script/CoreUObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeletedFruit_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "OriginalType", "ETestInstanceDataObjectDeletedFruit(/Script/CoreUObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeletedDirection_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "OriginalType", "ETestInstanceDataObjectDeletedDirection(/Script/CoreUObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "OriginalType", "TestInstanceDataObjectPoint(/Script/CoreUObject)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_C;
	static const UECodeGen_Private::FIntPropertyParams NewProp_D;
	static const UECodeGen_Private::FIntPropertyParams NewProp_E;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bird;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Grain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Fruit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Fruit;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrainFromEnumClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GrainFromEnumClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FruitFromNamespace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrainTypeChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FruitTypeChange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FruitTypeChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrainTypeAndPropertyChange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GrainTypeAndPropertyChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FruitTypeAndPropertyChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeletedGrain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeletedFruit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeletedFruit;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_DeletedDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeletedDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestInstanceDataObjectStructAlternate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, C), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, D), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_D_MetaData), NewProp_D_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_E = { "E", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, E), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_E_MetaData), NewProp_E_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Bird = { "Bird", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, Bird), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectBird, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bird_MetaData), NewProp_Bird_MetaData) }; // 1858473807
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Grain = { "Grain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, Grain), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grain_MetaData), NewProp_Grain_MetaData) }; // 68247311
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Fruit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Fruit = { "Fruit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, Fruit), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fruit_MetaData), NewProp_Fruit_MetaData) }; // 1242153056
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, Direction), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 2205224198
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainFromEnumClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainFromEnumClass = { "GrainFromEnumClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, GrainFromEnumClass), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrainFromEnumClass_MetaData), NewProp_GrainFromEnumClass_MetaData) }; // 1004953562
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_FruitFromNamespace = { "FruitFromNamespace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, FruitFromNamespace), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FruitFromNamespace_MetaData), NewProp_FruitFromNamespace_MetaData) }; // 2971045176
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainTypeChange = { "GrainTypeChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, GrainTypeChange), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrainTypeChange_MetaData), NewProp_GrainTypeChange_MetaData) }; // 68247311
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_FruitTypeChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_FruitTypeChange = { "FruitTypeChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, FruitTypeChange), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FruitTypeChange_MetaData), NewProp_FruitTypeChange_MetaData) }; // 1242153056
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainTypeAndPropertyChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainTypeAndPropertyChange = { "GrainTypeAndPropertyChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, GrainTypeAndPropertyChange), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternateEnumClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrainTypeAndPropertyChange_MetaData), NewProp_GrainTypeAndPropertyChange_MetaData) }; // 1004953562
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_FruitTypeAndPropertyChange = { "FruitTypeAndPropertyChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, FruitTypeAndPropertyChange), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternateNamespace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FruitTypeAndPropertyChange_MetaData), NewProp_FruitTypeAndPropertyChange_MetaData) }; // 2971045176
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedGrain = { "DeletedGrain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, DeletedGrain), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectGrainAlternate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeletedGrain_MetaData), NewProp_DeletedGrain_MetaData) }; // 68247311
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedFruit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedFruit = { "DeletedFruit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, DeletedFruit), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectFruitAlternate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeletedFruit_MetaData), NewProp_DeletedFruit_MetaData) }; // 1242153056
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedDirection = { "DeletedDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, DeletedDirection), Z_Construct_UEnum_CoreUObject_ETestInstanceDataObjectDirectionAlternate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeletedDirection_MetaData), NewProp_DeletedDirection_MetaData) }; // 2205224198
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestInstanceDataObjectStructAlternate, Point), Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) }; // 3900229397
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_E,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Bird,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Grain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Fruit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Fruit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainFromEnumClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainFromEnumClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_FruitFromNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainTypeChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_FruitTypeChange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_FruitTypeChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainTypeAndPropertyChange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_GrainTypeAndPropertyChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_FruitTypeAndPropertyChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedGrain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedFruit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedFruit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_DeletedDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewProp_Point,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"TestInstanceDataObjectStructAlternate",
	Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::PropPointers),
	sizeof(FTestInstanceDataObjectStructAlternate),
	alignof(FTestInstanceDataObjectStructAlternate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate()
{
	if (!Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStructAlternate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStructAlternate.InnerSingleton, Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStructAlternate.InnerSingleton;
}
// End ScriptStruct FTestInstanceDataObjectStructAlternate

// Begin Class UTestInstanceDataObjectClass
void UTestInstanceDataObjectClass::StaticRegisterNativesUTestInstanceDataObjectClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestInstanceDataObjectClass);
UClass* Z_Construct_UClass_UTestInstanceDataObjectClass_NoRegister()
{
	return UTestInstanceDataObjectClass::StaticClass();
}
struct Z_Construct_UClass_UTestInstanceDataObjectClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Tests/UObject/InstanceDataObjectUtilsTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestInstanceDataObjectClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestInstanceDataObjectClass, Int32), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32_MetaData), NewProp_Int32_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestInstanceDataObjectClass, Struct), Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) }; // 1710520740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::NewProp_Int32,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::NewProp_Struct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::ClassParams = {
	&UTestInstanceDataObjectClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestInstanceDataObjectClass()
{
	if (!Z_Registration_Info_UClass_UTestInstanceDataObjectClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestInstanceDataObjectClass.OuterSingleton, Z_Construct_UClass_UTestInstanceDataObjectClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestInstanceDataObjectClass.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UTestInstanceDataObjectClass>()
{
	return UTestInstanceDataObjectClass::StaticClass();
}
UTestInstanceDataObjectClass::UTestInstanceDataObjectClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestInstanceDataObjectClass);
UTestInstanceDataObjectClass::~UTestInstanceDataObjectClass() {}
// End Class UTestInstanceDataObjectClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_InstanceDataObjectUtilsTest_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETestInstanceDataObjectBird_StaticEnum, TEXT("ETestInstanceDataObjectBird"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectBird, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1858473807U) },
		{ ETestInstanceDataObjectGrain_StaticEnum, TEXT("ETestInstanceDataObjectGrain"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectGrain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1010760469U) },
		{ ETestInstanceDataObjectGrainAlternate_StaticEnum, TEXT("ETestInstanceDataObjectGrainAlternate"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 68247311U) },
		{ ETestInstanceDataObjectGrainAlternateEnumClass_StaticEnum, TEXT("ETestInstanceDataObjectGrainAlternateEnumClass"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectGrainAlternateEnumClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1004953562U) },
		{ ETestInstanceDataObjectFruit_StaticEnum, TEXT("ETestInstanceDataObjectFruit"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectFruit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 303669430U) },
		{ ETestInstanceDataObjectFruitAlternate_StaticEnum, TEXT("ETestInstanceDataObjectFruitAlternate"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1242153056U) },
		{ ETestInstanceDataObjectFruitAlternateNamespace_StaticEnum, TEXT("ETestInstanceDataObjectFruitAlternateNamespace"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectFruitAlternateNamespace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2971045176U) },
		{ ETestInstanceDataObjectDirection_StaticEnum, TEXT("ETestInstanceDataObjectDirection"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3600602030U) },
		{ ETestInstanceDataObjectDirectionAlternate_StaticEnum, TEXT("ETestInstanceDataObjectDirectionAlternate"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectDirectionAlternate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2205224198U) },
		{ ETestInstanceDataObjectFullFlags_StaticEnum, TEXT("ETestInstanceDataObjectFullFlags"), &Z_Registration_Info_UEnum_ETestInstanceDataObjectFullFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4217343587U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTestInstanceDataObjectPoint::StaticStruct, Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics::NewStructOps, TEXT("TestInstanceDataObjectPoint"), &Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestInstanceDataObjectPoint), 2687320675U) },
		{ FTestInstanceDataObjectPointAlternate::StaticStruct, Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics::NewStructOps, TEXT("TestInstanceDataObjectPointAlternate"), &Z_Registration_Info_UScriptStruct_TestInstanceDataObjectPointAlternate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestInstanceDataObjectPointAlternate), 3900229397U) },
		{ FTestInstanceDataObjectStruct::StaticStruct, Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics::NewStructOps, TEXT("TestInstanceDataObjectStruct"), &Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestInstanceDataObjectStruct), 1710520740U) },
		{ FTestInstanceDataObjectStructAlternate::StaticStruct, Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics::NewStructOps, TEXT("TestInstanceDataObjectStructAlternate"), &Z_Registration_Info_UScriptStruct_TestInstanceDataObjectStructAlternate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestInstanceDataObjectStructAlternate), 98108340U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestInstanceDataObjectClass, UTestInstanceDataObjectClass::StaticClass, TEXT("UTestInstanceDataObjectClass"), &Z_Registration_Info_UClass_UTestInstanceDataObjectClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestInstanceDataObjectClass), 1817962883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_InstanceDataObjectUtilsTest_h_3180473767(TEXT("/Script/CoreUObject"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_InstanceDataObjectUtilsTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_InstanceDataObjectUtilsTest_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_InstanceDataObjectUtilsTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_InstanceDataObjectUtilsTest_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_InstanceDataObjectUtilsTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_InstanceDataObjectUtilsTest_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
