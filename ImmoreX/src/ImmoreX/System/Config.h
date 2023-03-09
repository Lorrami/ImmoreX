#pragma once

#if defined(_WIN32)

	#define IMMOREX_OS_WINDOWS

#else

	#error ImmoreX doesn't support your operation system

#endif

#if defined(IMMOREX_OS_WINDOWS)

	#define IMMOREX_API_EXPORT __declspec(dllexport)
	#define IMMOREX_API_IMPORT __declspec(dllimport)

#endif