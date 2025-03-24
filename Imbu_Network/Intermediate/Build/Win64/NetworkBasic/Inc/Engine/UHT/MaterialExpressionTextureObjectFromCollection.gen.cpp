// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionTextureObjectFromCollection.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureObjectFromCollection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCollection_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureCollectionMemberType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETextureCollectionMemberType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureCollectionMemberType;
static UEnum* ETextureCollectionMemberType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureCollectionMemberType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureCollectionMemberType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureCollectionMemberType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureCollectionMemberType"));
	}
	return Z_Registration_Info_UEnum_ETextureCollectionMemberType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETextureCollectionMemberType>()
{
	return ETextureCollectionMemberType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETextureCollectionMemberType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes how textures are sampled for materials */" },
		{ "Max.Name", "ETextureCollectionMemberType::Max" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureObjectFromCollection.h" },
		{ "Texture2D.DisplayName", "Texture 2D" },
		{ "Texture2D.Name", "ETextureCollectionMemberType::Texture2D" },
		{ "Texture2DArray.DisplayName", "Texture 2D Array" },
		{ "Texture2DArray.Name", "ETextureCollectionMemberType::Texture2DArray" },
		{ "TextureCube.DisplayName", "Texture Cube" },
		{ "TextureCube.Name", "ETextureCollectionMemberType::TextureCube" },
		{ "TextureCubeArray.DisplayName", "Texture Cube Array" },
		{ "TextureCubeArray.Name", "ETextureCollectionMemberType::TextureCubeArray" },
		{ "TextureVolume.DisplayName", "Volume Texture" },
		{ "TextureVolume.Name", "ETextureCollectionMemberType::TextureVolume" },
		{ "ToolTip", "Describes how textures are sampled for materials" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureCollectionMemberType::Texture2D", (int64)ETextureCollectionMemberType::Texture2D },
		{ "ETextureCollectionMemberType::TextureCube", (int64)ETextureCollectionMemberType::TextureCube },
		{ "ETextureCollectionMemberType::Texture2DArray", (int64)ETextureCollectionMemberType::Texture2DArray },
		{ "ETextureCollectionMemberType::TextureCubeArray", (int64)ETextureCollectionMemberType::TextureCubeArray },
		{ "ETextureCollectionMemberType::TextureVolume", (int64)ETextureCollectionMemberType::TextureVolume },
		{ "ETextureCollectionMemberType::Max", (int64)ETextureCollectionMemberType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureCollectionMemberType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETextureCollectionMemberType",
	"ETextureCollectionMemberType",
	Z_Construct_UEnum_Engine_ETextureCollectionMemberType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureCollectionMemberType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureCollectionMemberType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETextureCollectionMemberType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETextureCollectionMemberType()
{
	if (!Z_Registration_Info_UEnum_ETextureCollectionMemberType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureCollectionMemberType.InnerSingleton, Z_Construct_UEnum_Engine_ETextureCollectionMemberType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureCollectionMemberType.InnerSingleton;
}
// End Enum ETextureCollectionMemberType

// Begin Class UMaterialExpressionTextureObjectFromCollection
void UMaterialExpressionTextureObjectFromCollection::StaticRegisterNativesUMaterialExpressionTextureObjectFromCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureObjectFromCollection);
UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_NoRegister()
{
	return UMaterialExpressionTextureObjectFromCollection::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureObjectFromCollection.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureObjectFromCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureObjectFromCollection.h" },
		{ "RequiredInput", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureCollectionObject_MetaData[] = {
		{ "Category", "TextureCollection" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureObjectFromCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureObjectFromCollection.h" },
		{ "RequiredInput", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstCollectionIndex_MetaData[] = {
		{ "Category", "TextureCollection" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureObjectFromCollection.h" },
		{ "OverridingInputProperty", "CollectionIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureType_MetaData[] = {
		{ "Category", "TextureCollection" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureObjectFromCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureCollection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureCollectionObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstCollectionIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureObjectFromCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_TextureCollection = { "TextureCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureObjectFromCollection, TextureCollection), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureCollection_MetaData), NewProp_TextureCollection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_TextureCollectionObject = { "TextureCollectionObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureObjectFromCollection, TextureCollectionObject), Z_Construct_UClass_UTextureCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureCollectionObject_MetaData), NewProp_TextureCollectionObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_CollectionIndex = { "CollectionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureObjectFromCollection, CollectionIndex), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionIndex_MetaData), NewProp_CollectionIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_ConstCollectionIndex = { "ConstCollectionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureObjectFromCollection, ConstCollectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstCollectionIndex_MetaData), NewProp_ConstCollectionIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_TextureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_TextureType = { "TextureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureObjectFromCollection, TextureType), Z_Construct_UEnum_Engine_ETextureCollectionMemberType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureType_MetaData), NewProp_TextureType_MetaData) }; // 1970587245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_TextureCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_TextureCollectionObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_CollectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_ConstCollectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_TextureType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::NewProp_TextureType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::ClassParams = {
	&UMaterialExpressionTextureObjectFromCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureObjectFromCollection>()
{
	return UMaterialExpressionTextureObjectFromCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureObjectFromCollection);
UMaterialExpressionTextureObjectFromCollection::~UMaterialExpressionTextureObjectFromCollection() {}
// End Class UMaterialExpressionTextureObjectFromCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETextureCollectionMemberType_StaticEnum, TEXT("ETextureCollectionMemberType"), &Z_Registration_Info_UEnum_ETextureCollectionMemberType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1970587245U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection, UMaterialExpressionTextureObjectFromCollection::StaticClass, TEXT("UMaterialExpressionTextureObjectFromCollection"), &Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureObjectFromCollection), 2663721989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_3919141297(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
