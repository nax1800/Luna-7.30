#pragma once
#include "framework.h"

namespace Hooks
{
	namespace Net
	{
		static __int64 (*UWorld_GetNetMode)(UWorld* a1);
		static __int64 (*AActor_GetNetMode)(AActor* a1);
		static void (*TickFlush)(UNetDriver* a1);
		static char (*KickPlayer)(__int64 a1, __int64 a2, __int64 a3);
		static char (*ValidationFailure)(__int64 a1, __int64 a2);
		static __int64 (*NoReservation)(__int64 a1, __int64 a2, char a3, __int64 a4);
		static BYTE* (*ChangeGameSessionID)(__int64 a1, __int64 a2);

		BYTE* ChangeGameSessionIDHook(__int64 a1, __int64 a2)
		{
			std::cout << "GameSessionID.\n";
			return nullptr;
		}

		void TickFlushHook(UNetDriver* a1)
		{
			if (!a1)
				return;

			if (a1->ReplicationDriver && a1->ClientConnections.Num() > 0 && !a1->ClientConnections[0]->InternalAck)
				Server::ReplicateActors(a1->ReplicationDriver);

			return TickFlush(a1);
		}

		__int64 UWorld_GetNetModeHook(UWorld* a1)
		{
			return 1;
		}

		__int64 AActor_GetNetModeHook(AActor* a1)
		{
			return 1;
		}

		char KickPlayerHook(__int64 a1, __int64 a2, __int64 a3)
		{
			return 1;
		}

		char ValidationFailureHook(__int64 a1, __int64 a2)
		{
			return 0;
		}

		__int64 NoReservationHook(__int64 a1, __int64 a2, char a3, __int64 a4)
		{
			return 0;
		}

		void CollectGarbageHook()
		{
			return;
		}

		float GetMaxTickRateHook()
		{
			return 30.0f;
		}

		void Init()
		{
			Memory::CreateMinHook((void*)Memory::GetAddress(0x29CE460), TickFlushHook, (void**)&TickFlush);
			Memory::CreateMinHook((void*)Memory::GetAddress(0x2CBFC20), UWorld_GetNetModeHook, nullptr);
			Memory::CreateMinHook((void*)Memory::GetAddress(0x264F9D0), AActor_GetNetModeHook, nullptr);
			Memory::CreateMinHook((void*)Memory::GetAddress(0x124A9B0), KickPlayerHook, nullptr);
			Memory::CreateMinHook((void*)Memory::GetAddress(0x1251DA0), ValidationFailureHook, nullptr);
			Memory::CreateMinHook((void*)Memory::GetAddress(0x125B070), NoReservationHook, nullptr);
			Memory::CreateMinHook((void*)Memory::GetAddress(0x1014CC0), ChangeGameSessionIDHook, nullptr);
			Memory::CreateMinHook((void*)Memory::GetAddress(0x6411FB9), CollectGarbageHook, nullptr);
			Memory::VirtualHook(SDK::UEngine::StaticClass()->DefaultObject, 0x4F, GetMaxTickRateHook);
		}
	}
}