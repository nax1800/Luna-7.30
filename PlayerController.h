#pragma once
#include "framework.h"

namespace Hooks
{
	namespace PlayerController
	{
		static void* (*ApplyCharacter)(void* a1, void* a2) = decltype(ApplyCharacter)(Memory::GetAddress(0x146B740));

		void (*ServerAcknowledgePossession)(APlayerController* a1, APawn* a2); //0x348ACB0
		void ServerAcknowledgePossessionHook(AFortPlayerControllerAthena* a1, APawn* a2)
		{
			a1->AcknowledgedPawn = a2;
			auto PlayerState = (AFortPlayerStateAthena*)a1->PlayerState;
			auto FortPawn = (APlayerPawn_Athena_C*)a1->MyFortPawn;
			if (PlayerState && FortPawn)
			{
				auto& CustomizationLoadout = a1->CustomizationLoadout;

				if (CustomizationLoadout.Character)
				{
					if (CustomizationLoadout.Character->HeroDefinition)
					{
						FortPawn->CustomizationLoadout = CustomizationLoadout;
						FortPawn->OnRep_CustomizationLoadout();

						PlayerState->HeroType = CustomizationLoadout.Character->HeroDefinition;
						PlayerState->OnRep_HeroType();

						ApplyCharacter(PlayerState, FortPawn);
					}
				}
			}
		}

		void (*ServerReadyToStartMatch)(AFortPlayerController* a1);
		void ServerReadyToStartMatchHook(AFortPlayerControllerAthena* a1)
		{
			if (a1)
			{
				auto PlayerState = (AFortPlayerStateAthena*)a1->PlayerState;
				if (PlayerState)
				{
					Abilities::GrantAbilitySet(PlayerState);
				}

				a1->bInfiniteAmmo = true;
				a1->bBuildFree = true;

				auto& StartingItems = Globals::GetGameMode()->StartingItems;
				for (int i = 0; i < StartingItems.Num(); i++)
				{
					if(StartingItems[i].Item == Globals::GetFortKismet()->K2_GetResourceItemDefinition(EFortResourceType::Wood))
						Inventory::AddItem(a1, StartingItems[i].Item, 500);
					else
						Inventory::AddItem(a1, StartingItems[i].Item, StartingItems[i].Count);
				}

				static auto MarshySmasher = UObject::FindObject<UAthenaPickaxeItemDefinition>("Pickaxe_ID_154_Squishy.Pickaxe_ID_154_Squishy"); //Icicle: Pickaxe_ID_134_Snowman

				static auto AR = UObject::FindObject<UFortWeaponItemDefinition>("WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03");
				static auto Shotgun = UObject::FindObject<UFortWeaponItemDefinition>("WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03");
				static auto Shockwave = UObject::FindObject<UFortWeaponItemDefinition>("Athena_ShockGrenade.Athena_ShockGrenade");
				static auto Shield = UObject::FindObject<UFortWeaponItemDefinition>("Shield.Shield");
				static auto MiniShield = UObject::FindObject<UFortWeaponItemDefinition>("Athena_ShieldSmall.Athena_ShieldSmall");

				static auto Stone = Globals::GetFortKismet()->K2_GetResourceItemDefinition(EFortResourceType::Stone);
				static auto Metal = Globals::GetFortKismet()->K2_GetResourceItemDefinition(EFortResourceType::Metal);

				Inventory::AddItem(a1, Stone, 500);
				Inventory::AddItem(a1, Metal, 500);


				Inventory::AddItem(a1, MarshySmasher->WeaponDefinition, 1);

				Inventory::AddItem(a1, AR, 1);
				Inventory::AddItem(a1, Shotgun, 1);
				Inventory::AddItem(a1, Shockwave, 2);
				Inventory::AddItem(a1, Shield, 1);
				Inventory::AddItem(a1, MiniShield, 3);

				Inventory::AddItem(a1, AR->GetAmmoWorldItemDefinition_BP(), 500);
				Inventory::AddItem(a1, Shotgun->GetAmmoWorldItemDefinition_BP(), 500);
			}

			return ServerReadyToStartMatch(a1);
		}

		void ServerClientIsReadyToRespawnHook(AFortPlayerControllerAthena* PC)
		{
			auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
			auto& RespawnData = PlayerState->RespawnData;
			if (RespawnData.bRespawnDataAvailable && RespawnData.bServerIsReady)
			{
				RespawnData.bClientIsReady = true;

				FTransform Transform{};
				Transform.Translation = RespawnData.RespawnLocation;
				Transform.Scale3D = FVector{ 1,1,1 };
				auto Pawn = (AFortPlayerPawnAthena*)Globals::GetGameMode()->SpawnDefaultPawnAtTransform(PC, Transform);
				PC->Possess(Pawn);
				Pawn->SetMaxHealth(100);
				Pawn->SetHealth(100);
				Pawn->SetMaxShield(100);
				Pawn->SetShield(100);
				PC->RespawnPlayerAfterDeath();
			}
		}

		void ServerCreateBuildingActorHook(AFortPlayerControllerAthena* PC, FBuildingClassData& BuildingClassData, FVector_NetQuantize10& BuildLoc, FRotator& BuildRot, bool bMirrored, float SyncKey)
		{
			auto Class = BuildingClassData.BuildingClass.Get();
			if (auto NewBuilding = Utils::SpawnActor<ABuildingSMActor>(Class, BuildLoc, BuildRot))
			{
				NewBuilding->bPlayerPlaced = true;
				NewBuilding->Team = EFortTeam(((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex);
				NewBuilding->OnRep_Team();
				NewBuilding->InitializeKismetSpawnedBuildingActor(NewBuilding, PC, true);
			}
		}

		void (*ClientOnPawnDied)(AFortPlayerControllerZone*, FFortPlayerDeathReport);
		void ClientOnPawnDiedHook(AFortPlayerControllerZone* a1, FFortPlayerDeathReport a2)
		{
			auto DeadPawn = (AFortPlayerPawnAthena*)a1->Pawn;
			auto DeadPlayerState = (AFortPlayerStateAthena*)a1->PlayerState;
			auto KillerPlayerState = (AFortPlayerStateAthena*)a2.KillerPlayerState;
			auto KillerPawn = (AFortPlayerPawnAthena*)a2.KillerPawn;

			if (DeadPawn && DeadPlayerState)
			{
				if (KillerPlayerState && KillerPlayerState != DeadPlayerState)
				{
					KillerPlayerState->KillScore++;
					KillerPlayerState->ClientReportKill(DeadPlayerState);
					KillerPlayerState->OnRep_Kills();
					KillerPlayerState->OnRep_TeamScore();
				}
			}

			return ClientOnPawnDied(a1, a2);
		}

		void ServerExecuteInventoryItemHook(AFortPlayerController* a1, FGuid& a2)
		{
			if (auto Pawn = (AFortPlayerPawn*)a1->Pawn)
			{
				if (auto ItemEntry = Inventory::FindItemEntry(a1, a2))
				{
					Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemEntry->ItemDefinition, ItemEntry->ItemGuid);
				}
			}
		}

		void Init()
		{
			auto DefaultObj = SDK::AAthena_PlayerController_C::StaticClass()->DefaultObject;

			Memory::VirtualHook(DefaultObj, 0x253, ServerReadyToStartMatchHook, (void**)&ServerReadyToStartMatch);
			Memory::VirtualHook(DefaultObj, 0x105, ServerAcknowledgePossessionHook);
			Memory::VirtualHook(DefaultObj, 0x1F4, ServerExecuteInventoryItemHook);
			Memory::VirtualHook(DefaultObj, 0x445, ServerClientIsReadyToRespawnHook);

			Memory::VirtualHook(DefaultObj, 0x212, ServerCreateBuildingActorHook);


			Memory::CreateMinHook((void*)Memory::GetAddress(0x17AAD60), ClientOnPawnDiedHook, (void**)&ClientOnPawnDied);
		}
	}
}