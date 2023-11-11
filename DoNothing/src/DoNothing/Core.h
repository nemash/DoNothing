#pragma once

#ifdef DO_PLATFORM_WINDOWS
	#ifdef DO_BUILD_DLL
		#define DONOTHING_API __declspec(dllexport)
	#else
		#define DONOTHING_API __declspec(dllimport)
	#endif
#else
	#error DoNothing only supports Windows!
#endif
