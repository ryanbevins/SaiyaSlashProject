// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NovaStrike/NS_Character_Farak.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNS_Character_Farak() {}
// Cross Module References
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANS_Character_Farak_NoRegister();
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANS_Character_Farak();
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANS_Character();
	UPackage* Z_Construct_UPackage__Script_NovaStrike();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ANS_Character_Farak::StaticRegisterNativesANS_Character_Farak()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANS_Character_Farak);
	UClass* Z_Construct_UClass_ANS_Character_Farak_NoRegister()
	{
		return ANS_Character_Farak::StaticClass();
	}
	struct Z_Construct_UClass_ANS_Character_Farak_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatArmLengthChange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatArmLengthChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPitchOnTarget_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitchOnTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANS_Character_Farak_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANS_Character,
		(UObject* (*)())Z_Construct_UPackage__Script_NovaStrike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Farak_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NS_Character_Farak.h" },
		{ "ModuleRelativePath", "NS_Character_Farak.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CombatArmLengthChange_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// TODO: Change these to be additions rather than direct sets\n" },
		{ "ModuleRelativePath", "NS_Character_Farak.h" },
		{ "ToolTip", "TODO: Change these to be additions rather than direct sets" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CombatArmLengthChange = { "CombatArmLengthChange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character_Farak, CombatArmLengthChange), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CombatArmLengthChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CombatArmLengthChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CameraPitchOnTarget_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "NS_Character_Farak.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CameraPitchOnTarget = { "CameraPitchOnTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character_Farak, CameraPitchOnTarget), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CameraPitchOnTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CameraPitchOnTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "NS_Character_Farak.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character_Farak, ActorToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_ActorToSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANS_Character_Farak_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CombatArmLengthChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_CameraPitchOnTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Farak_Statics::NewProp_ActorToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANS_Character_Farak_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANS_Character_Farak>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANS_Character_Farak_Statics::ClassParams = {
		&ANS_Character_Farak::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANS_Character_Farak_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Farak_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Farak_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Farak_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANS_Character_Farak()
	{
		if (!Z_Registration_Info_UClass_ANS_Character_Farak.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANS_Character_Farak.OuterSingleton, Z_Construct_UClass_ANS_Character_Farak_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANS_Character_Farak.OuterSingleton;
	}
	template<> NOVASTRIKE_API UClass* StaticClass<ANS_Character_Farak>()
	{
		return ANS_Character_Farak::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANS_Character_Farak);
	struct Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Farak_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Farak_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANS_Character_Farak, ANS_Character_Farak::StaticClass, TEXT("ANS_Character_Farak"), &Z_Registration_Info_UClass_ANS_Character_Farak, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANS_Character_Farak), 2339783147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Farak_h_2364367088(TEXT("/Script/NovaStrike"),
		Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Farak_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_Farak_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
