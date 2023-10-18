#pragma once
#include "framework.h"

namespace Hooks
{
	namespace GameMode
	{
		static bool bPlaylistSetup = false;
		static bool bListening = false;

		bool (*ReadyToStartMatch)(void*); // 0x33DFAE0 
		bool ReadyToStartMatchHook(AFortGameModeAthena* a1)
		{
			if (!bPlaylistSetup)
			{
				bPlaylistSetup = true;
				auto Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_Playground.Playlist_Playground");
				if (Playlist)
				{
					auto& CurrentPlaylistInfo = Globals::GetGameState()->CurrentPlaylistInfo;
					CurrentPlaylistInfo.BasePlaylist = Playlist;
					CurrentPlaylistInfo.OverridePlaylist = Playlist;
					CurrentPlaylistInfo.PlaylistReplicationKey++;
					CurrentPlaylistInfo.MarkArrayDirty();
					Globals::GetGameState()->OnRep_CurrentPlaylistInfo();
				}
			}

			if (!Globals::GetGameState()->MapInfo)
				return false;

			a1->DefaultPawnClass = SDK::APlayerPawn_Athena_C::StaticClass();

			if (!bListening)
			{
				bListening = true;

				a1->GameSession->MaxPlayers = 100;
				a1->WarmupRequiredPlayerCount = 1;

				Globals::GetGameState()->OnRep_CurrentPlaylistInfo();

				Server::Listen();
			}

			a1->bWorldIsReady = true;

			return ReadyToStartMatch(a1);
		}

		APawn* (*SpawnDefaultPawnFor)(void* a1, AController* a2, AActor* a3);
		APawn* SpawnDefaultPawnForHook(AFortGameModeAthena* a1, AController* a2, AActor* a3)
		{
			if (a2 && a3)
			{
				auto Transform = a3->GetTransform();
				return a1->SpawnDefaultPawnAtTransform(a2, Transform);
			}

			return 0;
		}

		void Init()
		{
			Memory::CreateMinHook((void*)Memory::GetAddress(0x2D2D8A0), ReadyToStartMatchHook, (void**)&ReadyToStartMatch);
			Memory::CreateMinHook((void*)Memory::GetAddress(0xD30840), SpawnDefaultPawnForHook, nullptr);
		}
	}
}