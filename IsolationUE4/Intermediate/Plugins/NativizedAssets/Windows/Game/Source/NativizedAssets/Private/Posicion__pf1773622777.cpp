#include "NativizedAssets.h"
#include "Posicion__pf1773622777.h"
FPosicion__pf1773622777::FPosicion__pf1773622777()
{
	bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf = 0;
	bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FPosicion__pf1773622777::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FPosicion__pf1773622777
{
	FRegisterHelper__FPosicion__pf1773622777()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownCPP/Blueprints/Posicion"), &FPosicion__pf1773622777::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FPosicion__pf1773622777 Instance;
};
FRegisterHelper__FPosicion__pf1773622777 FRegisterHelper__FPosicion__pf1773622777::Instance;
