#pragma once
#include "Direction__pf1773622777.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Blueprints/Direction.Direction", OverrideNativeName="Direction", EnumDisplayNameFn="E__Direction__pf__GetUserFriendlyName") )
enum class E__Direction__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "Direction::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "Direction::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "Direction::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "Direction::NewEnumerator3"),
	E__Direction__pf_MAX = 4 UMETA(OverrideName = "Direction::Direction_MAX"),
};
FText E__Direction__pf__GetUserFriendlyName(int32 InValue);
