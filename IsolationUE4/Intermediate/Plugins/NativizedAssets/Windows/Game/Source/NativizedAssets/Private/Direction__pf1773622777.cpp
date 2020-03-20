#include "NativizedAssets.h"
#include "Direction__pf1773622777.h"
FText E__Direction__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Direction__pf>(InValue);
	switch(EnumValue)
	{
		case E__Direction__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6DED71434B1A268D6525A7A6503DBB83]\", \"F9BCA3BE42CD6144FA1681A9D845638B\", \"Up\")"), Text); break;
		case E__Direction__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6DED71434B1A268D6525A7A6503DBB83]\", \"534383D844E09F542A0EC7B78AA58802\", \"Right\")"), Text); break;
		case E__Direction__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6DED71434B1A268D6525A7A6503DBB83]\", \"A56AC84F4E80281C2F36378B140971FC\", \"Down\")"), Text); break;
		case E__Direction__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6DED71434B1A268D6525A7A6503DBB83]\", \"AAB78ABE4CEA917E6B96F6A16A937914\", \"Left\")"), Text); break;
		case E__Direction__pf::E__Direction__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Direction MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
