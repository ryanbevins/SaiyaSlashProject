// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NovaStrike/NS_Character_Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNS_Character_Enemy() {}
// Cross Module References
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANS_Character_Enemy_NoRegister();
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANS_Character_Enemy();
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANS_Character();
	UPackage* Z_Construct_UPackage__Script_NovaStrike();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ANS_Character_Enemy::StaticRegisterNativesANS_Character_Enemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANS_Character_Enemy);
	UClass* Z_Construct_UClass_ANS_Character_Enemy_NoRegister()
	{
		return ANS_Character_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_ANS_Character_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyAggressionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyAggressionBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoAggression_MetaData[];
#endif
		static void NewProp_autoAggression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoAggression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANS_Character_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANS_Character,
		(UObject* (*)())Z_Construct_UPackage__Script_NovaStrike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Enemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NS_Character_Enemy.h" },
		{ "ModuleRelativePath", "NS_Character_Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_EnemyAggressionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NS_Character_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_EnemyAggressionBox = { "EnemyAggressionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character_Enemy, EnemyAggressionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_EnemyAggressionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_EnemyAggressionBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_autoAggression_MetaData[] = {
		{ "Category", "NS_Character_Enemy" },
		{ "Comment", "// Should immediately become aggressive towards player and not await overlap with EnemyAggressionBox?\n" },
		{ "ModuleRelativePath", "NS_Character_Enemy.h" },
		{ "ToolTip", "Should immediately become aggressive towards player and not await overlap with EnemyAggressionBox?" },
	};
#endif
	void Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_autoAggression_SetBit(void* Obj)
	{
		((ANS_Character_Enemy*)Obj)->autoAggression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_autoAggression = { "autoAggression", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANS_Character_Enemy), &Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_autoAggression_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_autoAggression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_autoAggression_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANS_Character_Enemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_EnemyAggressionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Enemy_Statics::NewProp_autoAggression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANS_Character_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANS_Character_Enemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANS_Character_Enemy_Statics::ClassParams = {
		&ANS_Character_Enemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANS_Character_Enemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Enemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Enemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Enemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANS_Character_Enemy()
	{
		if (!Z_Registration_Info_UClass_ANS_Character_Enemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANS_Character_Enemy.OuterSingleton, Z_Construct_UClass_ANS_Character_Enemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANS_Character_Enemy.OuterSingleton;
	}
	template<> NOVASTRIKE_API UClass* StaticClass<ANS_Character_Enemy>()
	{
		return ANS_Character_Enemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANS_Character_Enemy);
	struct Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANS_Character_Enemy, ANS_Character_Enemy::StaticClass, TEXT("ANS_Character_Enemy"), &Z_Registration_Info_UClass_ANS_Character_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANS_Character_Enemy), 3576007988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Enemy_h_2847486388(TEXT("/Script/NovaStrike"),
		Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
