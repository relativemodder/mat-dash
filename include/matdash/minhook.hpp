#pragma once
#include <dobby.h>


inline void matdash::add_hook_impl(void* addr, void* detour, void** trampoline) {

	DobbyHook(addr, detour, trampoline);

}