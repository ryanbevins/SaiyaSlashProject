// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NovaStrike/NovaStrikeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNovaStrikeGameMode() {}
// Cross Module References
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANovaStrikeGameMode_NoRegister();
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANovaStrikeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NovaStrike();
// End Cross Module References
	void ANovaStrikeGameMode::StaticRegisterNativesANovaStrikeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANovaStrikeGameMode);
	UClass* Z_Construct_UClass_ANovaStrikeGameMode_NoRegister()
	{
		return ANovaStrikeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANovaStrikeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANovaStrikeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NovaStrike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NovaStrikeGameMode.h" },
		{ "ModuleRelativePath", "NovaStrikeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANovaStrikeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANovaStrikeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANovaStrikeGameMode_Statics::ClassParams = {
		&ANovaStrikeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANovaStrikeGameMode()
	{
		if (!Z_Registration_Info_UClass_ANovaStrikeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANovaStrikeGameMode.OuterSingleton, Z_Construct_UClass_ANovaStrikeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANovaStrikeGameMode.OuterSingleton;
	}
	template<> NOVASTRIKE_API UClass* StaticClass<ANovaStrikeGameMode>()
	{
		return ANovaStrikeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANovaStrikeGameMode);
	struct Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANovaStrikeGameMode, ANovaStrikeGameMode::StaticClass, TEXT("ANovaStrikeGameMode"), &Z_Registration_Info_UClass_ANovaStrikeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANovaStrikeGameMode), 3516415138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeGameMode_h_2763100654(TEXT("/Script/NovaStrike"),
		Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
