// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionFloatToUInt.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFloatToUInt() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFloatToUInt();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFloatToUInt_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionUIntToFloat();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionUIntToFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFloatToIntMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EFloatToIntMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFloatToIntMode;
static UEnum* EFloatToIntMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFloatToIntMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFloatToIntMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFloatToIntMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFloatToIntMode"));
	}
	return Z_Registration_Info_UEnum_EFloatToIntMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EFloatToIntMode>()
{
	return EFloatToIntMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EFloatToIntMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ceil.DisplayName", "Ceil" },
		{ "Ceil.Name", "EFloatToIntMode::Ceil" },
		{ "Floor.DisplayName", "Floor" },
		{ "Floor.Name", "EFloatToIntMode::Floor" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFloatToUInt.h" },
		{ "Round.DisplayName", "Round" },
		{ "Round.Name", "EFloatToIntMode::Round" },
		{ "Truncate.DisplayName", "Truncate" },
		{ "Truncate.Name", "EFloatToIntMode::Truncate" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFloatToIntMode::Truncate", (int64)EFloatToIntMode::Truncate },
		{ "EFloatToIntMode::Floor", (int64)EFloatToIntMode::Floor },
		{ "EFloatToIntMode::Round", (int64)EFloatToIntMode::Round },
		{ "EFloatToIntMode::Ceil", (int64)EFloatToIntMode::Ceil },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFloatToIntMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EFloatToIntMode",
	"EFloatToIntMode",
	Z_Construct_UEnum_Engine_EFloatToIntMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFloatToIntMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFloatToIntMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EFloatToIntMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EFloatToIntMode()
{
	if (!Z_Registration_Info_UEnum_EFloatToIntMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFloatToIntMode.InnerSingleton, Z_Construct_UEnum_Engine_EFloatToIntMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFloatToIntMode.InnerSingleton;
}
// End Enum EFloatToIntMode

// Begin Class UMaterialExpressionFloatToUInt
void UMaterialExpressionFloatToUInt::StaticRegisterNativesUMaterialExpressionFloatToUInt()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFloatToUInt);
UClass* Z_Construct_UClass_UMaterialExpressionFloatToUInt_NoRegister()
{
	return UMaterialExpressionFloatToUInt::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFloatToUInt.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFloatToUInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFloatToUInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "FloatToInt" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFloatToUInt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFloatToUInt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFloatToUInt, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFloatToUInt, Mode), Z_Construct_UEnum_Engine_EFloatToIntMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2096784902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::ClassParams = {
	&UMaterialExpressionFloatToUInt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionFloatToUInt()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFloatToUInt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFloatToUInt>()
{
	return UMaterialExpressionFloatToUInt::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFloatToUInt);
UMaterialExpressionFloatToUInt::~UMaterialExpressionFloatToUInt() {}
// End Class UMaterialExpressionFloatToUInt

// Begin Class UMaterialExpressionUIntToFloat
void UMaterialExpressionUIntToFloat::StaticRegisterNativesUMaterialExpressionUIntToFloat()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionUIntToFloat);
UClass* Z_Construct_UClass_UMaterialExpressionUIntToFloat_NoRegister()
{
	return UMaterialExpressionUIntToFloat::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFloatToUInt.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFloatToUInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFloatToUInt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionUIntToFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionUIntToFloat, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::ClassParams = {
	&UMaterialExpressionUIntToFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionUIntToFloat()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat.OuterSingleton, Z_Construct_UClass_UMaterialExpressionUIntToFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionUIntToFloat>()
{
	return UMaterialExpressionUIntToFloat::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionUIntToFloat);
UMaterialExpressionUIntToFloat::~UMaterialExpressionUIntToFloat() {}
// End Class UMaterialExpressionUIntToFloat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFloatToIntMode_StaticEnum, TEXT("EFloatToIntMode"), &Z_Registration_Info_UEnum_EFloatToIntMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2096784902U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFloatToUInt, UMaterialExpressionFloatToUInt::StaticClass, TEXT("UMaterialExpressionFloatToUInt"), &Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFloatToUInt), 2605501604U) },
		{ Z_Construct_UClass_UMaterialExpressionUIntToFloat, UMaterialExpressionUIntToFloat::StaticClass, TEXT("UMaterialExpressionUIntToFloat"), &Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionUIntToFloat), 595912928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_3657600761(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloatToUInt_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
