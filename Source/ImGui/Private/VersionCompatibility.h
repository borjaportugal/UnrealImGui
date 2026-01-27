// Distributed under the MIT License (MIT) (see accompanying LICENSE file)

#include <Runtime/Launch/Resources/Version.h>

#define BELOW_ENGINE_VERSION(Major, Minor)  (ENGINE_MAJOR_VERSION < (Major) || (ENGINE_MAJOR_VERSION == (Major) && ENGINE_MINOR_VERSION < (Minor)))
#define FROM_ENGINE_VERSION(Major, Minor)   (!BELOW_ENGINE_VERSION(Major, Minor))


// One place to define compatibility with older engine versions.


// Starting from version 5.2 Slate started using FVector2f (float based vector) rather than FVector2D (double based vector)
#define ENGINE_COMPATIBILITY_LEGACY_SLATE_VECTOR2F      BELOW_ENGINE_VERSION(5, 2)

// Starting from version 5.6 the bAllowShrinking boolean from containers was replaced by the enum EAllowShrinking
#define ENGINE_COMPATIBILITY_LEGACY_ALLOW_SHRINKING     BELOW_ENGINE_VERSION(5, 6)
