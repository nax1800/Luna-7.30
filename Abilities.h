#pragma once
#include "framework.h"

namespace Abilities
{
	static __int64 (*ConstructSpec)(void*, void*, char, int, void*) = decltype(ConstructSpec)(Memory::GetAddress(0x6B59E0));
	static __int64* (*GiveAbility)(void*, void*, FGameplayAbilitySpec) = decltype(GiveAbility)(Memory::GetAddress(0x68ED10));
	static char (*InternalTryActivateAbility)(UAbilitySystemComponent* a1, FGameplayAbilitySpecHandle  a2, FPredictionKey  a3, UGameplayAbility** a4, void* a5, FGameplayEventData* a6) = decltype(InternalTryActivateAbility)(Memory::GetAddress(0x6905A0));

	FGameplayAbilitySpec* GrantAbility(AFortPlayerStateAthena* PlayerState, UClass* AbilityClass, UObject* SourceObject = nullptr, bool bDoNotRegive = false)
	{
		FGameplayAbilitySpec NewSpec{};
		ConstructSpec(&NewSpec, AbilityClass->DefaultObject, -1, -1, SourceObject);

		GiveAbility(PlayerState->AbilitySystemComponent, &NewSpec.Handle, NewSpec);

		return &NewSpec;
	}

	void GrantAbilitySet(AFortPlayerStateAthena* PlayerState, UFortAbilitySet* Set = nullptr) //improper af
	{
		static auto Jump = UObject::FindObjectFast<UGameplayAbility>("Default__FortGameplayAbility_Jump");
		static auto Sprint = UObject::FindObjectFast<UGameplayAbility>("Default__FortGameplayAbility_Sprint");
		static auto Consumable = UObject::FindObjectFast<UGameplayAbility>("Default__GA_DefaultPlayer_Consumable_C");
		static auto Shoot = UObject::FindObjectFast<UGameplayAbility>("Default__GA_Ranged_GenericDamage_C");
		static auto Use = UObject::FindObjectFast<UGameplayAbility>("Default__GA_DefaultPlayer_InteractUse_C");
		static auto Search = UObject::FindObjectFast<UGameplayAbility>("Default__GA_DefaultPlayer_InteractSearch_C");

		GrantAbility(PlayerState, Jump->Class);
		GrantAbility(PlayerState, Sprint->Class);
		GrantAbility(PlayerState, Consumable->Class);
		GrantAbility(PlayerState, Shoot->Class);
		GrantAbility(PlayerState, Use->Class);
		GrantAbility(PlayerState, Search->Class);
	}

	FGameplayAbilitySpec* FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle)
	{
		for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
		{
			if (AbilitySystemComponent->ActivatableAbilities.Items[i].Handle.Handle == Handle.Handle)
			{
				return &AbilitySystemComponent->ActivatableAbilities.Items[i];
			}
		}

		return nullptr;
	}

	void InternalServerTryActivateAbilityHook(UAbilitySystemComponent* ASc, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, FGameplayEventData* TriggerEventData)
	{
		std::cout << "InternalServerTryActivateAbility.\n";

		FGameplayAbilitySpec* Spec = FindAbilitySpecFromHandle(ASc, Handle);
		if (!Spec)
		{
			ASc->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			return;
		}

		const UGameplayAbility* AbilityToActivate = Spec->Ability;

		UGameplayAbility* InstancedAbility = nullptr;
		Spec->InputPressed = true;

		// Attempt to activate the ability (server side) and tell the client if it succeeded or failed.
		if (InternalTryActivateAbility(ASc, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
		{
			// TryActivateAbility handles notifying the client of success
		}
		else
		{
			// ABILITY_LOG(Display, TEXT("InternalServerTryActivateAbility. Rejecting ClientActivation of %s. InternalTryActivateAbility failed: %s"), *GetNameSafe(Spec->Ability), *InternalTryActivateAbilityFailureTags.ToStringSimple());
			ASc->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			Spec->InputPressed = false;

			ASc->ActivatableAbilities.MarkItemDirty(*Spec);
		}
	}

	void Init()
	{
		Memory::VirtualHook(UFortAbilitySystemComponentAthena::StaticClass()->DefaultObject, 0xF4, InternalServerTryActivateAbilityHook);
	}
}