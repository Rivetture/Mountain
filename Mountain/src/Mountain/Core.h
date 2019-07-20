#pragma once

#ifdef MT_PLATFORM_WINDOWS
#ifdef MT_BUILD_DLL
#define MOUNTAIN_API __declspec(dllexport)
#else
#define MOUNTAIN_API __declspec(dllimport)
#endif
#else
	#error Mountain only supports Windows!
#endif