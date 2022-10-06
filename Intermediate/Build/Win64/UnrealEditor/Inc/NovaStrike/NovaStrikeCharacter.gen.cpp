// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NovaStrike/NovaStrikeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNovaStrikeCharacter() {}
// Cross Module References
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANovaStrikeCharacter_NoRegister();
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANovaStrikeCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NovaStrike();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	NOVASTRIKE_API UEnum* Z_Construct_UEnum_NovaStrike_ECombatState();
	NOVASTRIKE_API UEnum* Z_Construct_UEnum_NovaStrike_ECombatType();
// End Cross Module References
	static FName NAME_ANovaStrikeCharacter_OnEndNova = FName(TEXT("OnEndNova"));
	void ANovaStrikeCharacter::OnEndNova()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANovaStrikeCharacter_OnEndNova),NULL);
	}
	static FName NAME_ANovaStrikeCharacter_OnNovaBlast = FName(TEXT("OnNovaBlast"));
	void ANovaStrikeCharacter::OnNovaBlast()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANovaStrikeCharacter_OnNovaBlast),NULL);
	}
	static FName NAME_ANovaStrikeCharacter_OnStartJump = FName(TEXT("OnStartJump"));
	void ANovaStrikeCharacter::OnStartJump()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANovaStrikeCharacter_OnStartJump),NULL);
	}
	static FName NAME_ANovaStrikeCharacter_OnStartNova = FName(TEXT("OnStartNova"));
	void ANovaStrikeCharacter::OnStartNova()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANovaStrikeCharacter_OnStartNova),NULL);
	}
	void ANovaStrikeCharacter::StaticRegisterNativesANovaStrikeCharacter()
	{
	}
	struct Z_Construct_UFunction_ANovaStrikeCharacter_OnEndNova_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANovaStrikeCharacter_OnEndNova_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANovaStrikeCharacter_OnEndNova_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANovaStrikeCharacter, nullptr, "OnEndNova", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANovaStrikeCharacter_OnEndNova_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANovaStrikeCharacter_OnEndNova_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANovaStrikeCharacter_OnEndNova()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANovaStrikeCharacter_OnEndNova_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANovaStrikeCharacter_OnNovaBlast_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANovaStrikeCharacter_OnNovaBlast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANovaStrikeCharacter_OnNovaBlast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANovaStrikeCharacter, nullptr, "OnNovaBlast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANovaStrikeCharacter_OnNovaBlast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANovaStrikeCharacter_OnNovaBlast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANovaStrikeCharacter_OnNovaBlast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANovaStrikeCharacter_OnNovaBlast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANovaStrikeCharacter_OnStartJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANovaStrikeCharacter_OnStartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANovaStrikeCharacter_OnStartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANovaStrikeCharacter, nullptr, "OnStartJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANovaStrikeCharacter_OnStartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANovaStrikeCharacter_OnStartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANovaStrikeCharacter_OnStartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANovaStrikeCharacter_OnStartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANovaStrikeCharacter_OnStartNova_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANovaStrikeCharacter_OnStartNova_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANovaStrikeCharacter_OnStartNova_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANovaStrikeCharacter, nullptr, "OnStartNova", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANovaStrikeCharacter_OnStartNova_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANovaStrikeCharacter_OnStartNova_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANovaStrikeCharacter_OnStartNova()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANovaStrikeCharacter_OnStartNova_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANovaStrikeCharacter);
	UClass* Z_Construct_UClass_ANovaStrikeCharacter_NoRegister()
	{
		return ANovaStrikeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANovaStrikeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentCombatState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCombatState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentCombatState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AwaitingAttackAnimFinish_MetaData[];
#endif
		static void NewProp_AwaitingAttackAnimFinish_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AwaitingAttackAnimFinish;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanCancelAttack_MetaData[];
#endif
		static void NewProp_CanCancelAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanCancelAttack;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentCombatType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCombatType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentCombatType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Moved_MetaData[];
#endif
		static void NewProp_Moved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Moved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanMove_MetaData[];
#endif
		static void NewProp_CanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANovaStrikeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NovaStrike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANovaStrikeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANovaStrikeCharacter_OnEndNova, "OnEndNova" }, // 1502462717
		{ &Z_Construct_UFunction_ANovaStrikeCharacter_OnNovaBlast, "OnNovaBlast" }, // 1111342797
		{ &Z_Construct_UFunction_ANovaStrikeCharacter_OnStartJump, "OnStartJump" }, // 865009972
		{ &Z_Construct_UFunction_ANovaStrikeCharacter_OnStartNova, "OnStartNova" }, // 3409816421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NovaStrikeCharacter.h" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANovaStrikeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANovaStrikeCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANovaStrikeCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatState_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatState = { "CurrentCombatState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANovaStrikeCharacter, CurrentCombatState), Z_Construct_UEnum_NovaStrike_ECombatState, METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatState_MetaData)) }; // 468508430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_AwaitingAttackAnimFinish_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_AwaitingAttackAnimFinish_SetBit(void* Obj)
	{
		((ANovaStrikeCharacter*)Obj)->AwaitingAttackAnimFinish = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_AwaitingAttackAnimFinish = { "AwaitingAttackAnimFinish", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANovaStrikeCharacter), &Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_AwaitingAttackAnimFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_AwaitingAttackAnimFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_AwaitingAttackAnimFinish_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((ANovaStrikeCharacter*)Obj)->IsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANovaStrikeCharacter), &Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanCancelAttack_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanCancelAttack_SetBit(void* Obj)
	{
		((ANovaStrikeCharacter*)Obj)->CanCancelAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanCancelAttack = { "CanCancelAttack", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANovaStrikeCharacter), &Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanCancelAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanCancelAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanCancelAttack_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatType_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatType = { "CurrentCombatType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANovaStrikeCharacter, CurrentCombatType), Z_Construct_UEnum_NovaStrike_ECombatType, METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatType_MetaData)) }; // 3966019754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_Moved_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "// TODO: Bad variable used in anim notify for movement during animation during attack, should be removed\n" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
		{ "ToolTip", "TODO: Bad variable used in anim notify for movement during animation during attack, should be removed" },
	};
#endif
	void Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_Moved_SetBit(void* Obj)
	{
		((ANovaStrikeCharacter*)Obj)->Moved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANovaStrikeCharacter), &Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_Moved_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_Moved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_Moved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanMove_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "NovaStrikeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanMove_SetBit(void* Obj)
	{
		((ANovaStrikeCharacter*)Obj)->CanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanMove = { "CanMove", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANovaStrikeCharacter), &Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanMove_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANovaStrikeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_AwaitingAttackAnimFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_IsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanCancelAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CurrentCombatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_Moved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANovaStrikeCharacter_Statics::NewProp_CanMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANovaStrikeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANovaStrikeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANovaStrikeCharacter_Statics::ClassParams = {
		&ANovaStrikeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANovaStrikeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANovaStrikeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANovaStrikeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANovaStrikeCharacter()
	{
		if (!Z_Registration_Info_UClass_ANovaStrikeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANovaStrikeCharacter.OuterSingleton, Z_Construct_UClass_ANovaStrikeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANovaStrikeCharacter.OuterSingleton;
	}
	template<> NOVASTRIKE_API UClass* StaticClass<ANovaStrikeCharacter>()
	{
		return ANovaStrikeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANovaStrikeCharacter);
	struct Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANovaStrikeCharacter, ANovaStrikeCharacter::StaticClass, TEXT("ANovaStrikeCharacter"), &Z_Registration_Info_UClass_ANovaStrikeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANovaStrikeCharacter), 1680141819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeCharacter_h_2998199031(TEXT("/Script/NovaStrike"),
		Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NovaStrikeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
