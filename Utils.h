#pragma once
#include "framework.h"

namespace Utils
{
	bool AreGuidsTheSame(FGuid A, FGuid B)
	{
		if (A.A == B.A && B.B == A.B && A.C == B.C && A.D == B.D)
			return true;

		return false;
	}

	template<typename T>
	T* SpawnActor(UClass* Class = T::StaticClass(), FVector Loc = {}, FRotator Rot = {}, AActor* Owner = nullptr)
	{
		FTransform Transform{};
		Transform.Scale3D = FVector(1, 1, 1);
		Transform.Translation = Loc;
		Transform.Rotation = Memory::FRotToQuat(Rot);

		auto Actor = Globals::GetGameplayStatics()->BeginDeferredActorSpawnFromClass(Globals::GetWorld(), Class, Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner);
		return (T*)Globals::GetGameplayStatics()->FinishSpawningActor(Actor, Transform);
	}
}