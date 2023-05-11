#pragma once

#ifdef MAIN_BUILD_DLL
#define MAIN_API __declspec(dllexport)
#else
#define MAIN_API __declspec(dllimport)
#endif