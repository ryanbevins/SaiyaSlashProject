// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NovaStrike/NS_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNS_Character() {}
// Cross Module References
	NOVASTRIKE_API UScriptStruct* Z_Construct_UScriptStruct_FAttack();
	UPackage* Z_Construct_UPackage__Script_NovaStrike();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANS_Character_NoRegister();
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANS_Character();
	NOVASTRIKE_API UClass* Z_Construct_UClass_ANovaStrikeCharacter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NOVASTRIKE_API UEnum* Z_Construct_UEnum_NovaStrike_ECombatState();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Attack;
class UScriptStruct* FAttack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Attack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Attack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttack, Z_Construct_UPackage__Script_NovaStrike(), TEXT("Attack"));
	}
	return Z_Registration_Info_UScriptStruct_Attack.OuterSingleton;
}
template<> NOVASTRIKE_API UScriptStruct* StaticStruct<FAttack>()
{
	return FAttack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyHitReaction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyHitReaction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyHitReactionInAir_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyHitReactionInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackNotify_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Knockback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Knockback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxPositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitBoxPositionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitBoxScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Attack montage to use\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Attack montage to use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReaction_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Enemy hit reaciton montage to use\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Enemy hit reaciton montage to use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReaction = { "EnemyHitReaction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, EnemyHitReaction), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReaction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReactionInAir_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Enemy hit reaciton montage to use in air\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Enemy hit reaciton montage to use in air" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReactionInAir = { "EnemyHitReactionInAir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, EnemyHitReactionInAir), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReactionInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReactionInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_CameraShake_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// CameraShake to use\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "CameraShake to use" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, CameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_CameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_CameraShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_ForceFeedbackNotify_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Forcefeedback to use during anim montage notify\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Forcefeedback to use during anim montage notify" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_ForceFeedbackNotify = { "ForceFeedbackNotify", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, ForceFeedbackNotify), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_ForceFeedbackNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_ForceFeedbackNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_LaunchForce_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Launch force to use\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Launch force to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_LaunchForce = { "LaunchForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, LaunchForce), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_LaunchForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_LaunchForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Knockback_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Knockback to apply to enemy\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Knockback to apply to enemy" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Knockback = { "Knockback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, Knockback), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Knockback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Knockback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Damage to apply to enemy(in range between 0 to 1, with 1 being 100% of the enemies health)\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Damage to apply to enemy(in range between 0 to 1, with 1 being 100% of the enemies health)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_NewGravity_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Gravity to apply to hit enemy and player\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Gravity to apply to hit enemy and player" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_NewGravity = { "NewGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, NewGravity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_NewGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_NewGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_SteeringScale_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Steering scale to apply to player after anim montage notify\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Steering scale to apply to player after anim montage notify" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_SteeringScale = { "SteeringScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, SteeringScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_SteeringScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_SteeringScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxPositionOffset_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Position offset to apply to hitbox\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Position offset to apply to hitbox" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxPositionOffset = { "HitBoxPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, HitBoxPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxPositionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxScale_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "// Scaling to apply to hitbox\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Scaling to apply to hitbox" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxScale = { "HitBoxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, HitBoxScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_EnemyHitReactionInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_CameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_ForceFeedbackNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_LaunchForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Knockback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_NewGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_SteeringScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxPositionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_HitBoxScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NovaStrike,
		nullptr,
		&NewStructOps,
		"Attack",
		sizeof(FAttack),
		alignof(FAttack),
		Z_Construct_UScriptStruct_FAttack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttack()
	{
		if (!Z_Registration_Info_UScriptStruct_Attack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Attack.InnerSingleton, Z_Construct_UScriptStruct_FAttack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Attack.InnerSingleton;
	}
	DEFINE_FUNCTION(ANS_Character::execTryBeginTargetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryBeginTargetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execSetInvincible)
	{
		P_GET_UBOOL(Z_Param_NewInvincible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInvincible(Z_Param_NewInvincible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execResetSteering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSteering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execEnableSteering)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SteeringAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSteering(Z_Param_SteeringAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_STRUCT(FVector,Z_Param_Launch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_DamageAmount,Z_Param_Montage,Z_Param_Launch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execResetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execContinueCombat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ContinueCombat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execStopExtract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopExtract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execExtract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Extract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execEndGunCombat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndGunCombat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execBeginGunCombat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginGunCombat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execEndStun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndStun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execStun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execGetCurrentAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttack*)Z_Param__Result=P_THIS->GetCurrentAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execEndCombat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCombat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execAttack)
	{
		P_GET_TARRAY(FAttack,Z_Param_SpecifiedAttack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack(Z_Param_SpecifiedAttack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execGetNearestCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ANS_Character**)Z_Param__Result=P_THIS->GetNearestCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execSphereTraceForCharacters)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_DrawDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ANS_Character*>*)Z_Param__Result=P_THIS->SphereTraceForCharacters(Z_Param_Distance,Z_Param_Radius,Z_Param_DrawDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execStopSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execAttackBoxOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackBoxOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANS_Character::execSetCurrentCombatState)
	{
		P_GET_ENUM(ECombatState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentCombatState(ECombatState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_ANS_Character_OnBeginGunMode = FName(TEXT("OnBeginGunMode"));
	void ANS_Character::OnBeginGunMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnBeginGunMode),NULL);
	}
	static FName NAME_ANS_Character_OnDeath = FName(TEXT("OnDeath"));
	void ANS_Character::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnDeath),NULL);
	}
	static FName NAME_ANS_Character_OnEndGunMode = FName(TEXT("OnEndGunMode"));
	void ANS_Character::OnEndGunMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnEndGunMode),NULL);
	}
	static FName NAME_ANS_Character_OnEnterCombatMode = FName(TEXT("OnEnterCombatMode"));
	void ANS_Character::OnEnterCombatMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnEnterCombatMode),NULL);
	}
	static FName NAME_ANS_Character_OnEnterNeutralMode = FName(TEXT("OnEnterNeutralMode"));
	void ANS_Character::OnEnterNeutralMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnEnterNeutralMode),NULL);
	}
	static FName NAME_ANS_Character_OnExtract = FName(TEXT("OnExtract"));
	void ANS_Character::OnExtract()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnExtract),NULL);
	}
	static FName NAME_ANS_Character_OnFire = FName(TEXT("OnFire"));
	void ANS_Character::OnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnFire),NULL);
	}
	static FName NAME_ANS_Character_OnStopExtract = FName(TEXT("OnStopExtract"));
	void ANS_Character::OnStopExtract()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnStopExtract),NULL);
	}
	static FName NAME_ANS_Character_OnStun = FName(TEXT("OnStun"));
	void ANS_Character::OnStun()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnStun),NULL);
	}
	static FName NAME_ANS_Character_OnStunEnd = FName(TEXT("OnStunEnd"));
	void ANS_Character::OnStunEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnStunEnd),NULL);
	}
	static FName NAME_ANS_Character_OnTarget = FName(TEXT("OnTarget"));
	void ANS_Character::OnTarget()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_OnTarget),NULL);
	}
	static FName NAME_ANS_Character_ZoomCamera = FName(TEXT("ZoomCamera"));
	void ANS_Character::ZoomCamera(float DesiredArmLength)
	{
		NS_Character_eventZoomCamera_Parms Parms;
		Parms.DesiredArmLength=DesiredArmLength;
		ProcessEvent(FindFunctionChecked(NAME_ANS_Character_ZoomCamera),&Parms);
	}
	void ANS_Character::StaticRegisterNativesANS_Character()
	{
		UClass* Class = ANS_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &ANS_Character::execAttack },
			{ "AttackBoxOverlapBegin", &ANS_Character::execAttackBoxOverlapBegin },
			{ "BeginGunCombat", &ANS_Character::execBeginGunCombat },
			{ "ContinueCombat", &ANS_Character::execContinueCombat },
			{ "Die", &ANS_Character::execDie },
			{ "EnableSteering", &ANS_Character::execEnableSteering },
			{ "EndCombat", &ANS_Character::execEndCombat },
			{ "EndGunCombat", &ANS_Character::execEndGunCombat },
			{ "EndStun", &ANS_Character::execEndStun },
			{ "Extract", &ANS_Character::execExtract },
			{ "Fire", &ANS_Character::execFire },
			{ "GetCurrentAttack", &ANS_Character::execGetCurrentAttack },
			{ "GetNearestCharacter", &ANS_Character::execGetNearestCharacter },
			{ "ResetCombo", &ANS_Character::execResetCombo },
			{ "ResetSteering", &ANS_Character::execResetSteering },
			{ "SetCurrentCombatState", &ANS_Character::execSetCurrentCombatState },
			{ "SetInvincible", &ANS_Character::execSetInvincible },
			{ "SphereTraceForCharacters", &ANS_Character::execSphereTraceForCharacters },
			{ "Sprint", &ANS_Character::execSprint },
			{ "StopExtract", &ANS_Character::execStopExtract },
			{ "StopSprint", &ANS_Character::execStopSprint },
			{ "Stun", &ANS_Character::execStun },
			{ "TakeDamage", &ANS_Character::execTakeDamage },
			{ "TryBeginTargetting", &ANS_Character::execTryBeginTargetting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANS_Character_Attack_Statics
	{
		struct NS_Character_eventAttack_Parms
		{
			TArray<FAttack> SpecifiedAttack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecifiedAttack_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecifiedAttack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANS_Character_Attack_Statics::NewProp_SpecifiedAttack_Inner = { "SpecifiedAttack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttack, METADATA_PARAMS(nullptr, 0) }; // 4286849046
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANS_Character_Attack_Statics::NewProp_SpecifiedAttack = { "SpecifiedAttack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventAttack_Parms, SpecifiedAttack), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4286849046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_Attack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_Attack_Statics::NewProp_SpecifiedAttack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_Attack_Statics::NewProp_SpecifiedAttack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_Attack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "Attack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_Attack_Statics::NS_Character_eventAttack_Parms), Z_Construct_UFunction_ANS_Character_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_Attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics
	{
		struct NS_Character_eventAttackBoxOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventAttackBoxOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventAttackBoxOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventAttackBoxOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventAttackBoxOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NS_Character_eventAttackBoxOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NS_Character_eventAttackBoxOverlapBegin_Parms), &Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventAttackBoxOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "AttackBoxOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::NS_Character_eventAttackBoxOverlapBegin_Parms), Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_BeginGunCombat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_BeginGunCombat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_BeginGunCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "BeginGunCombat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_BeginGunCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_BeginGunCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_BeginGunCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_BeginGunCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_ContinueCombat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_ContinueCombat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_ContinueCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "ContinueCombat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_ContinueCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_ContinueCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_ContinueCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_ContinueCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_Die_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_Die_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_EnableSteering_Statics
	{
		struct NS_Character_eventEnableSteering_Parms
		{
			float SteeringAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::NewProp_SteeringAmount = { "SteeringAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventEnableSteering_Parms, SteeringAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::NewProp_SteeringAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "EnableSteering", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::NS_Character_eventEnableSteering_Parms), Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_EnableSteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_EnableSteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_EndCombat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_EndCombat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_EndCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "EndCombat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_EndCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_EndCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_EndCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_EndCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_EndGunCombat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_EndGunCombat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_EndGunCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "EndGunCombat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_EndGunCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_EndGunCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_EndGunCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_EndGunCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_EndStun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_EndStun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_EndStun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "EndStun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_EndStun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_EndStun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_EndStun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_EndStun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_Extract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_Extract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_Extract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "Extract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_Extract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_Extract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_Extract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_Extract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics
	{
		struct NS_Character_eventGetCurrentAttack_Parms
		{
			FAttack ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventGetCurrentAttack_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttack, METADATA_PARAMS(nullptr, 0) }; // 4286849046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "GetCurrentAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::NS_Character_eventGetCurrentAttack_Parms), Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_GetCurrentAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_GetCurrentAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics
	{
		struct NS_Character_eventGetNearestCharacter_Parms
		{
			ANS_Character* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventGetNearestCharacter_Parms, ReturnValue), Z_Construct_UClass_ANS_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "GetNearestCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::NS_Character_eventGetNearestCharacter_Parms), Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_GetNearestCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_GetNearestCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnBeginGunMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnBeginGunMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnBeginGunMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnBeginGunMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnBeginGunMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnBeginGunMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnBeginGunMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnBeginGunMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnEndGunMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnEndGunMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnEndGunMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnEndGunMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnEndGunMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnEndGunMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnEndGunMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnEndGunMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnEnterCombatMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnEnterCombatMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnEnterCombatMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnEnterCombatMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnEnterCombatMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnEnterCombatMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnEnterCombatMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnEnterCombatMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnEnterNeutralMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnEnterNeutralMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnEnterNeutralMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnEnterNeutralMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnEnterNeutralMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnEnterNeutralMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnEnterNeutralMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnEnterNeutralMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnExtract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnExtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnExtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnExtract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnExtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnExtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnExtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnExtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnStopExtract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnStopExtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnStopExtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnStopExtract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnStopExtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnStopExtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnStopExtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnStopExtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnStun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnStun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnStun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnStun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnStun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnStun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnStun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnStun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnStunEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnStunEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnStunEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnStunEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnStunEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnStunEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnStunEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnStunEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_OnTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_OnTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_OnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "OnTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_OnTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_OnTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_OnTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_OnTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_ResetCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_ResetCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "ResetCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_ResetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_ResetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_ResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_ResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_ResetSteering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_ResetSteering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_ResetSteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "ResetSteering", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_ResetSteering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_ResetSteering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_ResetSteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_ResetSteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics
	{
		struct NS_Character_eventSetCurrentCombatState_Parms
		{
			ECombatState NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventSetCurrentCombatState_Parms, NewState), Z_Construct_UEnum_NovaStrike_ECombatState, METADATA_PARAMS(nullptr, 0) }; // 468508430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "SetCurrentCombatState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::NS_Character_eventSetCurrentCombatState_Parms), Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_SetCurrentCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_SetCurrentCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_SetInvincible_Statics
	{
		struct NS_Character_eventSetInvincible_Parms
		{
			bool NewInvincible;
		};
		static void NewProp_NewInvincible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewInvincible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::NewProp_NewInvincible_SetBit(void* Obj)
	{
		((NS_Character_eventSetInvincible_Parms*)Obj)->NewInvincible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::NewProp_NewInvincible = { "NewInvincible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NS_Character_eventSetInvincible_Parms), &Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::NewProp_NewInvincible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::NewProp_NewInvincible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "SetInvincible", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::NS_Character_eventSetInvincible_Parms), Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_SetInvincible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_SetInvincible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics
	{
		struct NS_Character_eventSphereTraceForCharacters_Parms
		{
			float Distance;
			float Radius;
			bool DrawDebug;
			TArray<ANS_Character*> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_DrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventSphereTraceForCharacters_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventSphereTraceForCharacters_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_DrawDebug_SetBit(void* Obj)
	{
		((NS_Character_eventSphereTraceForCharacters_Parms*)Obj)->DrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NS_Character_eventSphereTraceForCharacters_Parms), &Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANS_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventSphereTraceForCharacters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_DrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "SphereTraceForCharacters", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::NS_Character_eventSphereTraceForCharacters_Parms), Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_Sprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_Sprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "Sprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_StopExtract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_StopExtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_StopExtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "StopExtract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_StopExtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_StopExtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_StopExtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_StopExtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_StopSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_StopSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "StopSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_StopSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_StopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_StopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_StopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_Stun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_Stun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_Stun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "Stun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_Stun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_Stun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_Stun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_Stun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_TakeDamage_Statics
	{
		struct NS_Character_eventTakeDamage_Parms
		{
			float DamageAmount;
			UAnimMontage* Montage;
			FVector Launch;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Launch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventTakeDamage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::NewProp_Launch = { "Launch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventTakeDamage_Parms, Launch), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::NewProp_Launch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::NS_Character_eventTakeDamage_Parms), Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics
	{
		struct NS_Character_eventTryBeginTargetting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NS_Character_eventTryBeginTargetting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NS_Character_eventTryBeginTargetting_Parms), &Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// TODO: Take in class reference for targetting based on specific class after converting \"GetNearestCharacter()\" to be used for any variable class.\n// Try targetting based on camera direction, returns true if is now targetting.\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "TODO: Take in class reference for targetting based on specific class after converting \"GetNearestCharacter()\" to be used for any variable class.\nTry targetting based on camera direction, returns true if is now targetting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "TryBeginTargetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::NS_Character_eventTryBeginTargetting_Parms), Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_TryBeginTargetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_TryBeginTargetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredArmLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::NewProp_DesiredArmLength = { "DesiredArmLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NS_Character_eventZoomCamera_Parms, DesiredArmLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::NewProp_DesiredArmLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANS_Character, nullptr, "ZoomCamera", nullptr, nullptr, sizeof(NS_Character_eventZoomCamera_Parms), Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANS_Character_ZoomCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANS_Character_ZoomCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANS_Character);
	UClass* Z_Construct_UClass_ANS_Character_NoRegister()
	{
		return ANS_Character::StaticClass();
	}
	struct Z_Construct_UClass_ANS_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEnemiesInCombatWith_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemiesInCombatWith_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentEnemiesInCombatWith;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthDistanceChangeOnSprint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthDistanceChangeOnSprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraZoomSpeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attacks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AirAttacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirAttacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AirAttacks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SprintAttacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintAttacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SprintAttacks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchAttacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchAttacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaunchAttacks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttacksToUse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttacksToUse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttacksToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAttackIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAttackIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitingToAttack_MetaData[];
#endif
		static void NewProp_WaitingToAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WaitingToAttack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsInAttackRange_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsInAttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsInAttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComboWindow_MetaData[];
#endif
		static void NewProp_InComboWindow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InComboWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Invincible_MetaData[];
#endif
		static void NewProp_Invincible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Invincible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAir_MetaData[];
#endif
		static void NewProp_InAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboResetTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ComboResetTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stunned_MetaData[];
#endif
		static void NewProp_Stunned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Stunned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StunTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StunTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCameraTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingCameraTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingCameraTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeedGunMode_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedGunMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunLinetraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GunLinetraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtractionSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedActorGun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedActorGun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanAttackDuringAiming_MetaData[];
#endif
		static void NewProp_CanAttackDuringAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanAttackDuringAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanMoveWhenExtracting_MetaData[];
#endif
		static void NewProp_CanMoveWhenExtracting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanMoveWhenExtracting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimChangeRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimChangeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentlyTargettedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentlyTargettedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANS_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANovaStrikeCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NovaStrike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANS_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANS_Character_Attack, "Attack" }, // 3752337533
		{ &Z_Construct_UFunction_ANS_Character_AttackBoxOverlapBegin, "AttackBoxOverlapBegin" }, // 1050073416
		{ &Z_Construct_UFunction_ANS_Character_BeginGunCombat, "BeginGunCombat" }, // 3617219382
		{ &Z_Construct_UFunction_ANS_Character_ContinueCombat, "ContinueCombat" }, // 396467173
		{ &Z_Construct_UFunction_ANS_Character_Die, "Die" }, // 3833133253
		{ &Z_Construct_UFunction_ANS_Character_EnableSteering, "EnableSteering" }, // 2020529346
		{ &Z_Construct_UFunction_ANS_Character_EndCombat, "EndCombat" }, // 2789351135
		{ &Z_Construct_UFunction_ANS_Character_EndGunCombat, "EndGunCombat" }, // 1472282257
		{ &Z_Construct_UFunction_ANS_Character_EndStun, "EndStun" }, // 978915324
		{ &Z_Construct_UFunction_ANS_Character_Extract, "Extract" }, // 2437509717
		{ &Z_Construct_UFunction_ANS_Character_Fire, "Fire" }, // 29587569
		{ &Z_Construct_UFunction_ANS_Character_GetCurrentAttack, "GetCurrentAttack" }, // 2357354543
		{ &Z_Construct_UFunction_ANS_Character_GetNearestCharacter, "GetNearestCharacter" }, // 1738162931
		{ &Z_Construct_UFunction_ANS_Character_OnBeginGunMode, "OnBeginGunMode" }, // 3702333591
		{ &Z_Construct_UFunction_ANS_Character_OnDeath, "OnDeath" }, // 1967931508
		{ &Z_Construct_UFunction_ANS_Character_OnEndGunMode, "OnEndGunMode" }, // 2797740200
		{ &Z_Construct_UFunction_ANS_Character_OnEnterCombatMode, "OnEnterCombatMode" }, // 3717915240
		{ &Z_Construct_UFunction_ANS_Character_OnEnterNeutralMode, "OnEnterNeutralMode" }, // 1205404591
		{ &Z_Construct_UFunction_ANS_Character_OnExtract, "OnExtract" }, // 1208501062
		{ &Z_Construct_UFunction_ANS_Character_OnFire, "OnFire" }, // 1520958132
		{ &Z_Construct_UFunction_ANS_Character_OnStopExtract, "OnStopExtract" }, // 3812216281
		{ &Z_Construct_UFunction_ANS_Character_OnStun, "OnStun" }, // 179247037
		{ &Z_Construct_UFunction_ANS_Character_OnStunEnd, "OnStunEnd" }, // 1660482706
		{ &Z_Construct_UFunction_ANS_Character_OnTarget, "OnTarget" }, // 2137569700
		{ &Z_Construct_UFunction_ANS_Character_ResetCombo, "ResetCombo" }, // 3288045001
		{ &Z_Construct_UFunction_ANS_Character_ResetSteering, "ResetSteering" }, // 44963999
		{ &Z_Construct_UFunction_ANS_Character_SetCurrentCombatState, "SetCurrentCombatState" }, // 671381526
		{ &Z_Construct_UFunction_ANS_Character_SetInvincible, "SetInvincible" }, // 3124980231
		{ &Z_Construct_UFunction_ANS_Character_SphereTraceForCharacters, "SphereTraceForCharacters" }, // 3994319595
		{ &Z_Construct_UFunction_ANS_Character_Sprint, "Sprint" }, // 2982979289
		{ &Z_Construct_UFunction_ANS_Character_StopExtract, "StopExtract" }, // 2373015787
		{ &Z_Construct_UFunction_ANS_Character_StopSprint, "StopSprint" }, // 3719141676
		{ &Z_Construct_UFunction_ANS_Character_Stun, "Stun" }, // 3922795586
		{ &Z_Construct_UFunction_ANS_Character_TakeDamage, "TakeDamage" }, // 60451225
		{ &Z_Construct_UFunction_ANS_Character_TryBeginTargetting, "TryBeginTargetting" }, // 4098302904
		{ &Z_Construct_UFunction_ANS_Character_ZoomCamera, "ZoomCamera" }, // 2574840955
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NS_Character.h" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentEnemiesInCombatWith_Inner = { "CurrentEnemiesInCombatWith", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANS_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentEnemiesInCombatWith_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentEnemiesInCombatWith = { "CurrentEnemiesInCombatWith", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, CurrentEnemiesInCombatWith), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentEnemiesInCombatWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentEnemiesInCombatWith_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_HitBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_HitBox = { "HitBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, HitBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_HitBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_HitBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_AttackBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_AttackBox = { "AttackBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, AttackBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_AttackBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_AttackBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	void Z_Construct_UClass_ANS_Character_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((ANS_Character*)Obj)->bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANS_Character), &Z_Construct_UClass_ANS_Character_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "// Health float value between 0 and 1\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Health float value between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, Health), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "// Temperature float value between 0 and 1\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Temperature float value between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, Temperature), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultGravity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultGravity = { "DefaultGravity", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, DefaultGravity), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_ArmLengthDistanceChangeOnSprint_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_ArmLengthDistanceChangeOnSprint = { "ArmLengthDistanceChangeOnSprint", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, ArmLengthDistanceChangeOnSprint), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_ArmLengthDistanceChangeOnSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_ArmLengthDistanceChangeOnSprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultArmLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultArmLength = { "DefaultArmLength", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, DefaultArmLength), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultArmLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_CameraZoomSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Zoom Speed for arm length changes(1 = 1 second, 0.5 = 2 seconds, 2 = 0.5 seconds, etc).\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Zoom Speed for arm length changes(1 = 1 second, 0.5 = 2 seconds, 2 = 0.5 seconds, etc)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_CameraZoomSpeed = { "CameraZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, CameraZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_CameraZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_CameraZoomSpeed_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_Attacks_Inner = { "Attacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttack, METADATA_PARAMS(nullptr, 0) }; // 4286849046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_Attacks_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "// Zoom Speed for arm length changes(1 = 1 second, 0.5 = 2 seconds, 2 = 0.5 seconds, etc).\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Zoom Speed for arm length changes(1 = 1 second, 0.5 = 2 seconds, 2 = 0.5 seconds, etc)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_Attacks = { "Attacks", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, Attacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_Attacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_Attacks_MetaData)) }; // 4286849046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_AirAttacks_Inner = { "AirAttacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttack, METADATA_PARAMS(nullptr, 0) }; // 4286849046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_AirAttacks_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_AirAttacks = { "AirAttacks", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, AirAttacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_AirAttacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_AirAttacks_MetaData)) }; // 4286849046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintAttacks_Inner = { "SprintAttacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttack, METADATA_PARAMS(nullptr, 0) }; // 4286849046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintAttacks_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintAttacks = { "SprintAttacks", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, SprintAttacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintAttacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintAttacks_MetaData)) }; // 4286849046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_LaunchAttacks_Inner = { "LaunchAttacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttack, METADATA_PARAMS(nullptr, 0) }; // 4286849046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_LaunchAttacks_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_LaunchAttacks = { "LaunchAttacks", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, LaunchAttacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_LaunchAttacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_LaunchAttacks_MetaData)) }; // 4286849046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_AttacksToUse_Inner = { "AttacksToUse", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttack, METADATA_PARAMS(nullptr, 0) }; // 4286849046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_AttacksToUse_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_AttacksToUse = { "AttacksToUse", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, AttacksToUse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_AttacksToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_AttacksToUse_MetaData)) }; // 4286849046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentAttackIndex_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentAttackIndex = { "CurrentAttackIndex", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, CurrentAttackIndex), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentAttackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentAttackIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_WaitingToAttack_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	void Z_Construct_UClass_ANS_Character_Statics::NewProp_WaitingToAttack_SetBit(void* Obj)
	{
		((ANS_Character*)Obj)->WaitingToAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_WaitingToAttack = { "WaitingToAttack", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANS_Character), &Z_Construct_UClass_ANS_Character_Statics::NewProp_WaitingToAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_WaitingToAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_WaitingToAttack_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_ActorsInAttackRange_Inner = { "ActorsInAttackRange", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANS_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_ActorsInAttackRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_ActorsInAttackRange = { "ActorsInAttackRange", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, ActorsInAttackRange), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_ActorsInAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_ActorsInAttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_InComboWindow_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	void Z_Construct_UClass_ANS_Character_Statics::NewProp_InComboWindow_SetBit(void* Obj)
	{
		((ANS_Character*)Obj)->InComboWindow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_InComboWindow = { "InComboWindow", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANS_Character), &Z_Construct_UClass_ANS_Character_Statics::NewProp_InComboWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_InComboWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_InComboWindow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_Invincible_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	void Z_Construct_UClass_ANS_Character_Statics::NewProp_Invincible_SetBit(void* Obj)
	{
		((ANS_Character*)Obj)->Invincible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_Invincible = { "Invincible", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANS_Character), &Z_Construct_UClass_ANS_Character_Statics::NewProp_Invincible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_Invincible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_Invincible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_InAir_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	void Z_Construct_UClass_ANS_Character_Statics::NewProp_InAir_SetBit(void* Obj)
	{
		((ANS_Character*)Obj)->InAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_InAir = { "InAir", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANS_Character), &Z_Construct_UClass_ANS_Character_Statics::NewProp_InAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_InAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_InAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_ComboResetTime_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_ComboResetTime = { "ComboResetTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, ComboResetTime), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_ComboResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_ComboResetTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_Stunned_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	void Z_Construct_UClass_ANS_Character_Statics::NewProp_Stunned_SetBit(void* Obj)
	{
		((ANS_Character*)Obj)->Stunned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_Stunned = { "Stunned", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANS_Character), &Z_Construct_UClass_ANS_Character_Statics::NewProp_Stunned_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_Stunned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_Stunned_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_StunTime_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "// Time stunned after attack\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "Time stunned after attack" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_StunTime = { "StunTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, StunTime), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_StunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_StunTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultCameraTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultCameraTurnRate = { "DefaultCameraTurnRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, DefaultCameraTurnRate), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultCameraTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultCameraTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_AimingCameraTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_AimingCameraTurnRate = { "AimingCameraTurnRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, AimingCameraTurnRate), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_AimingCameraTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_AimingCameraTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeedGunMode_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeedGunMode = { "WalkSpeedGunMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, WalkSpeedGunMode), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeedGunMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeedGunMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_GunLinetraceLength_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_GunLinetraceLength = { "GunLinetraceLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, GunLinetraceLength), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_GunLinetraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_GunLinetraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_FireMontage_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_FireMontage = { "FireMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, FireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_FireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_FireMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_ExtractionSpeed_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_ExtractionSpeed = { "ExtractionSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, ExtractionSpeed), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_ExtractionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_ExtractionSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_AttachedActorGun_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_AttachedActorGun = { "AttachedActorGun", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, AttachedActorGun), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_AttachedActorGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_AttachedActorGun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_CanAttackDuringAiming_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	void Z_Construct_UClass_ANS_Character_Statics::NewProp_CanAttackDuringAiming_SetBit(void* Obj)
	{
		((ANS_Character*)Obj)->CanAttackDuringAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_CanAttackDuringAiming = { "CanAttackDuringAiming", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANS_Character), &Z_Construct_UClass_ANS_Character_Statics::NewProp_CanAttackDuringAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_CanAttackDuringAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_CanAttackDuringAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_CanMoveWhenExtracting_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	void Z_Construct_UClass_ANS_Character_Statics::NewProp_CanMoveWhenExtracting_SetBit(void* Obj)
	{
		((ANS_Character*)Obj)->CanMoveWhenExtracting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_CanMoveWhenExtracting = { "CanMoveWhenExtracting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANS_Character), &Z_Construct_UClass_ANS_Character_Statics::NewProp_CanMoveWhenExtracting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_CanMoveWhenExtracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_CanMoveWhenExtracting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_AimChangeRate_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// how fast does the player switch between the gun and sword (anim interpolation speed)\n" },
		{ "ModuleRelativePath", "NS_Character.h" },
		{ "ToolTip", "how fast does the player switch between the gun and sword (anim interpolation speed)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_AimChangeRate = { "AimChangeRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, AimChangeRate), METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_AimChangeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_AimChangeRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentlyTargettedActor_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "NS_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentlyTargettedActor = { "CurrentlyTargettedActor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANS_Character, CurrentlyTargettedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentlyTargettedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentlyTargettedActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANS_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentEnemiesInCombatWith_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentEnemiesInCombatWith,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_HitBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_AttackBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_bIsSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_ArmLengthDistanceChangeOnSprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_CameraZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_Attacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_Attacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_AirAttacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_AirAttacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintAttacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_SprintAttacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_LaunchAttacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_LaunchAttacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_AttacksToUse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_AttacksToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentAttackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_WaitingToAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_ActorsInAttackRange_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_ActorsInAttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_InComboWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_Invincible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_InAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_ComboResetTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_Stunned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_StunTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_DefaultCameraTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_AimingCameraTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_WalkSpeedGunMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_GunLinetraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_FireMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_ExtractionSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_AttachedActorGun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_CanAttackDuringAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_CanMoveWhenExtracting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_AimChangeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANS_Character_Statics::NewProp_CurrentlyTargettedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANS_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANS_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANS_Character_Statics::ClassParams = {
		&ANS_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANS_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANS_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANS_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANS_Character()
	{
		if (!Z_Registration_Info_UClass_ANS_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANS_Character.OuterSingleton, Z_Construct_UClass_ANS_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANS_Character.OuterSingleton;
	}
	template<> NOVASTRIKE_API UClass* StaticClass<ANS_Character>()
	{
		return ANS_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANS_Character);
	struct Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_h_Statics::ScriptStructInfo[] = {
		{ FAttack::StaticStruct, Z_Construct_UScriptStruct_FAttack_Statics::NewStructOps, TEXT("Attack"), &Z_Registration_Info_UScriptStruct_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttack), 4286849046U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANS_Character, ANS_Character::StaticClass, TEXT("ANS_Character"), &Z_Registration_Info_UClass_ANS_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANS_Character), 2931465940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_h_2409848751(TEXT("/Script/NovaStrike"),
		Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NovaStrike_Source_NovaStrike_NS_Character_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
