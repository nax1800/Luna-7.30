#pragma once
#include "framework.h"

namespace Memory
{
	uintptr_t GetImageBase()
	{
		return (uintptr_t)GetModuleHandle(0);
	}

	uintptr_t GetAddress(uintptr_t Offset)
	{
		uintptr_t Address = GetImageBase() + Offset;
		LogA("Address: {}", Address);
		return Address;
	}

	void CreateMinHook(LPVOID A, LPVOID B, LPVOID* C)
	{
		MH_CreateHook(A, B, C);
		MH_EnableHook(A);
	}

	void VirtualHook(void* Object, int Index, void* Detour, void** OG = nullptr)
	{
		auto vft = *(void***)Object;
		if (!vft || !vft[Index])
		{
			return;
		}

		if (OG)
			*OG = vft[Index];

		DWORD dwOld;
		VirtualProtect(&vft[Index], 8, PAGE_EXECUTE_READWRITE, &dwOld); // sizeof(void*)

		vft[Index] = Detour;

		DWORD dwTemp;
		VirtualProtect(&vft[Index], 8, dwOld, &dwTemp); // sizeof(void*)
	}

	void sinCos(float* ScalarSin, float* ScalarCos, float Value)
	{
		float quotient = (0.31830988618f * 0.5f) * Value;
		if (Value >= 0.0f)
		{
			quotient = (float)((int)(quotient + 0.5f));
		}
		else
		{
			quotient = (float)((int)(quotient - 0.5f));
		}
		float y = Value - (2.0f * 3.1415926535897932f) * quotient;
		float sign;
		if (y > 1.57079632679f)
		{
			y = 3.1415926535897932f - y;
			sign = -1.0f;
		}
		else if (y < -1.57079632679f)
		{
			y = -3.1415926535897932f - y;
			sign = -1.0f;
		}
		else
		{
			sign = +1.0f;
		}
		float y2 = y * y;
		*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;
		float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
		*ScalarCos = sign * p;
	}

	FQuat FRotToQuat(FRotator Rot)
	{
		const float DEG_TO_RAD = 3.1415926535897932f / (180.f);
		const float DIVIDE_BY_2 = DEG_TO_RAD / 2.f;
		float SP, SY, SR;
		float CP, CY, CR;

		sinCos(&SP, &CP, Rot.Pitch * DIVIDE_BY_2);
		sinCos(&SY, &CY, Rot.Yaw * DIVIDE_BY_2);
		sinCos(&SR, &CR, Rot.Roll * DIVIDE_BY_2);

		FQuat RotationQuat;
		RotationQuat.X = CR * SP * SY - SR * CP * CY;
		RotationQuat.Y = -CR * SP * CY - SR * CP * SY;
		RotationQuat.Z = CR * CP * SY - SR * SP * CY;
		RotationQuat.W = CR * CP * CY + SR * SP * SY;

		return RotationQuat;
	}

}