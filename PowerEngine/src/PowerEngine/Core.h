#pragma once

#ifdef PWE_PLATFORM_WINDOWS
	#ifdef PWE_BUILD_DLL
		#define PWE_API __declspec(dllexport)
	#else
		#define PWE_API __declspec(dllimport)
	#endif
#else
	#error PowerEngine only support Windows !.
#endif