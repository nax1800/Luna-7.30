#pragma once
#include "framework.h"

namespace Globals
{
	UFortEngine* GetEngine()
	{
		static UFortEngine* idk = UObject::FindObject<UFortEngine>("FortEngine_");
		return idk;
	}

	UWorld* GetWorld()
	{
		return GetEngine()->GameViewport->World;
	}

	AFortGameModeAthena* GetGameMode()
	{
		return (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;
	}

	AFortGameStateAthena* GetGameState()
	{
		return (AFortGameStateAthena*)GetWorld()->GameState;
	}

	UGameplayStatics* GetGameplayStatics()
	{
		return (UGameplayStatics*)UGameplayStatics::StaticClass()->DefaultObject;
	}

	UFortKismetLibrary* GetFortKismet()
	{
		return (UFortKismetLibrary*)UFortKismetLibrary::StaticClass()->DefaultObject;
	}
}