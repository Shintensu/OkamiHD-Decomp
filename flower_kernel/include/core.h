#pragma once

#ifdef FK_BUILD_DLL
	#define FK_API //__declspec(dllexport)
#else
	#define FK_API __declspec(dllimport)
#endif