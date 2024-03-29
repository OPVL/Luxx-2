/* Entry point of DLL */

#include "stdafx.h"

DWORD __stdcall mainThread(LPVOID lpParam)
{
	/* init our log*/
	if (!CLog::Init("LUXX")) {
		return false;
	}

	/* init our hooking */
	CHooking::init();

	/* Bydget memes */
	CLog::Message("Everything is done. Have fun. :)");

	return 0;
}

int __stdcall DllMain(
	HMODULE hModule,
	DWORD dwReason,
	LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH) {
		//GTA thread
		CreateThread(nullptr, 0, mainThread, hModule, 0, nullptr);
		//d3d shite
		CreateThread(nullptr, 0, Init, hModule, 0, nullptr);
	}
	else if (dwReason == DLL_PROCESS_DETACH) {
		//unhook here
		FreeLibraryAndExitThread(hModule, 1);
	}
	return TRUE;
}