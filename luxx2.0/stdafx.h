#ifndef ALPHA_STDAFX_H
#define ALPHA_STDAFX_H

/* disable warnings for faster compile I guess. Blame PolyHook lib. */
#pragma warning (disable : 4244)
#pragma warning (disable : 4133)
#pragma warning (disable : 4373)
#pragma warning (disable : 4091)
#pragma warning (disable : 4334)
#pragma warning (disable : 4800)
#pragma warning (disable : 4005)

#define _CRT_SECURE_NO_WARNINGS

/* windows header files */
#include <Windows.h>
#include <map>
#include <unordered_map>
#include <functional>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <timeapi.h>
#include <time.h>
#include <xstring>
#include <memory>
#include <algorithm>
#include <ShlObj.h>

/* libs */
#pragma comment (lib, "winmm.lib")
#pragma comment (lib, "d3d11.lib")
//#pragma comment (lib, "d3dx11.lib")

/* d3d */
//#include <D3D11_1.h>
//#include <D3DX11.h>
#include "FW1FontWrapper.h"

/* Our includes */
#include "Log.h"
#include "NativeInvoker.h"
#include "CrossMapping.h"
#include "Pattern.h"
#include "enums.h"
#include "natives.h"
#include "reclass.h"
#include "vehicleStructs.h"

/* our menu */
#include "menuVariables.h"
#include "menuFeatures.h"
#include "menuBase.h"
#include "Ini.h"

/* our main shite */
#include "Hack.h"

/* Make this stay down here to init all our includes */
#include "Hooking.h"

#endif
