#pragma once

#include "../Config.h"

#if defined(IMMOREX_EXPORTS)

	#define IMMOREX_API IMMOREX_API_EXPORT

#else

	#define IMMOREX_API IMMOREX_API_IMPORT

#endif
