#pragma once

#ifdef EC_PLATFORM_WINDOWS
	#ifdef EC_BUILD_DLL
		#define ECENGINE_API __declspec(dllexport)
	#else
		#define ECENGINE_API __declspec(dllimport)
	#endif
#else
#error ECEngine only supports Windows!
#endif
