#pragma once

#include <windows.h>
#include <format>
#include <iostream>

#include "MinHook.h"
#include "SDK.hpp"
using namespace SDK;

#define LogA(...) { std::cout << "[LUNA] : " << std::format(__VA_ARGS__) << std::endl; }

#include "Memory.h"
#include "Globals.h"
#include "Utils.h"

#include "Abilities.h"
#include "Inventory.h"
#include "Server.h"
#include "Net.h"
#include "GameMode.h"
#include "PlayerController.h"
