#pragma once
#include "framework.h"

namespace Inventory
{
	void Update(AFortPlayerController* Player)
	{
		Player->WorldInventory->HandleInventoryLocalUpdate();
		Player->WorldInventory->Inventory.MarkArrayDirty();
	}

	FFortItemEntry* FindItemEntry(AFortPlayerController* PC, FGuid& OtherGuid)
	{
		if (!PC || !PC->WorldInventory)
			return nullptr;

		for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); ++i)
		{
			if (Utils::AreGuidsTheSame(PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid, OtherGuid))
			{
				return &PC->WorldInventory->Inventory.ReplicatedEntries[i];
			}
		}
		return nullptr;
	}

	FFortItemEntry* FindItemEntry(AFortPlayerController* PC, UFortItemDefinition* ItemDef)
	{
		if (!PC || !PC->WorldInventory || !ItemDef)
			return nullptr;
		for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); ++i)
		{
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition == ItemDef)
			{
				return &PC->WorldInventory->Inventory.ReplicatedEntries[i];
			}
		}
		return nullptr;
	}

	UFortWorldItem* CreateItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count = 1)
	{
		auto WorldItem = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 0);
		WorldItem->SetOwningControllerForTemporaryItem(Player);
		return WorldItem;
	}

	FFortItemEntry* AddItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count = 1, int LoadedAmmo = -1) // Jyzo
	{
		if (!ItemDef || !Player || !Player->WorldInventory)
			return nullptr;

		if (auto NewItem = CreateItem(Player, ItemDef, Count))
		{
			if (LoadedAmmo != -1)
				NewItem->ItemEntry.LoadedAmmo = LoadedAmmo;

			if (ItemDef->MaxStackSize < Count)
			{
				NewItem->ItemEntry.Count = ItemDef->MaxStackSize;
				Player->ServerAttemptInventoryDrop(NewItem->ItemEntry.ItemGuid, Count - ItemDef->MaxStackSize);
			}

			Player->WorldInventory->Inventory.ItemInstances.Add(NewItem);
			Player->WorldInventory->Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);

			Update(Player);
			return &NewItem->ItemEntry;
		}

		return nullptr;
	}
}