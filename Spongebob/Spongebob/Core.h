#pragma once

#ifdef SB_PLATFORM_WINDOWS
	#ifdef SB_BUILD_DLL
		#define SPONGEBOB_API __declspec(dllexport)
	#else
		#define SPONGEBOB_API __declspec(dllimport)
	#endif // SB_BUILD_DLL
#else
	#error Spongebob Only Supports Windows!
#endif // !SB_PLATFORM_WINDOWS
