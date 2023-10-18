#pragma once
#include "framework.h"

namespace Server
{
	static UNetDriver* (*CreateNetDriver)(UEngine* a1, UWorld* a2, FName a3) = decltype(CreateNetDriver)(Memory::GetAddress(0x2C53530));
	static bool (*InitListen)(UNetDriver* a1, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error) = decltype(InitListen)(Memory::GetAddress(0x458C90));
	static void (*SetWorld)(UNetDriver* a1, UWorld* a2) = decltype(SetWorld)(Memory::GetAddress(0x29CCCC0));
	static void (*ReplicateActors)(UReplicationDriver* a1) = decltype(ReplicateActors)(Memory::GetAddress(0x788D40));


	void Listen()
	{
		UNetDriver* NetDriver = CreateNetDriver(Globals::GetEngine(), Globals::GetWorld(), FName(282));
		if (!NetDriver)
			return;

		Globals::GetWorld()->NetDriver = NetDriver;
		NetDriver->World = Globals::GetWorld();
		NetDriver->NetDriverName = FName(282);

		FString Error;
		FURL URL = FURL();
		URL.Port = 7777;

		bool bListen = InitListen(NetDriver, Globals::GetWorld(), URL, false, Error);
		SetWorld(NetDriver, Globals::GetWorld());

		Globals::GetWorld()->LevelCollections[0].NetDriver = NetDriver;
		Globals::GetWorld()->LevelCollections[1].NetDriver = NetDriver;

		std::cout << "Listening on Port 7777.\n";
	}
}