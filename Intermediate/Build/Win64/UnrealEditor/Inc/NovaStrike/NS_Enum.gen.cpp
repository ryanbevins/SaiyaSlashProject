// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NovaStrike/NS_Enum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNS_Enum() {}
// Cross Module References
	NOVASTRIKE_API UEnum* Z_Construct_UEnum_NovaStrike_ECombatState();
	UPackage* Z_Construct_UPackage__Script_NovaStrike();
	NOVASTRIKE_API UEnum* Z_Construct_UEnum_NovaStrike_ECombatType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatState;
	static UEnum* ECombatState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECombatState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECombatState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NovaStrike_ECombatState, Z_Construct_UPackage__Script_NovaStrike(), TEXT("ECombatState"));
		}
		return Z_Registration_Info_UEnum_ECombatState.OuterSingleton;
	}
	template<> NOVASTRIKE_API UEnum* StaticEnum<ECombatState>()
	{
		return ECombatState_StaticEnum();
	}
	struct Z_Construct_UEnum_NovaStrike_ECombatState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NovaStrike_ECombatState_Statics::Enumerators[] = {
		{ "ECombatState::Neutral", (int64)ECombatState::Neutral },
		{ "ECombatState::InCombat", (int64)ECombatState::InCombat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NovaStrike_ECombatState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "InCombat.Comment", "/**\n * \n */" },
		{ "InCombat.Name", "ECombatState::InCombat" },
		{ "ModuleRelativePath", "NS_Enum.h" },
		{ "Neutral.Comment", "/**\n * \n */" },
		{ "Neutral.Name", "ECombatState::Neutral" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NovaStrike_ECombatState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NovaStrike,
		nullptr,
		"ECombatState",
		"ECombatState",
		Z_Construct_UEnum_NovaStrike_ECombatState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NovaStrike_ECombatState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NovaStrike_ECombatState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NovaStrike_ECombatState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NovaStrike_ECombatState()
	{
		if (!Z_Registration_Info_UEnum_ECombatState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatState.InnerSingleton, Z_Construct_UEnum_NovaStrike_ECombatState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECombatState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatType;
	static UEnum* ECombatType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECombatType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECombatType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NovaStrike_ECombatType, Z_Construct_UPackage__Script_NovaStrike(), TEXT("ECombatType"));
		}
		return Z_Registration_Info_UEnum_ECombatType.OuterSingleton;
	}
	template<> NOVASTRIKE_API UEnum* StaticEnum<ECombatType>()
	{
		return ECombatType_StaticEnum();
	}
	struct Z_Construct_UEnum_NovaStrike_ECombatType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NovaStrike_ECombatType_Statics::Enumerators[] = {
		{ "ECombatType::Normal", (int64)ECombatType::Normal },
		{ "ECombatType::Nova", (int64)ECombatType::Nova },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NovaStrike_ECombatType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "NS_Enum.h" },
		{ "Normal.Name", "ECombatType::Normal" },
		{ "Nova.Name", "ECombatType::Nova" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NovaStrike_ECombatType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NovaStrike,
		nullptr,
		"ECombatType",
		"ECombatType",
		Z_Construct_UEnum_NovaStrike_ECombatType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NovaStrike_ECombatType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NovaStrike_ECombatType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NovaStrike_ECombatType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NovaStrike_ECombatType()
	{
		if (!Z_Registration_Info_UEnum_ECombatType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatType.InnerSingleton, Z_Construct_UEnum_NovaStrike_ECombatType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECombatType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Enum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Enum_h_Statics::EnumInfo[] = {
		{ ECombatState_StaticEnum, TEXT("ECombatState"), &Z_Registration_Info_UEnum_ECombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 468508430U) },
		{ ECombatType_StaticEnum, TEXT("ECombatType"), &Z_Registration_Info_UEnum_ECombatType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3440640274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Enum_h_589578721(TEXT("/Script/NovaStrike"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Enum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Enum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
