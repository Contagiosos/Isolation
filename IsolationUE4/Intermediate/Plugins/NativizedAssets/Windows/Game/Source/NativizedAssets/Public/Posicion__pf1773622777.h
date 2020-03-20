#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Posicion__pf1773622777.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Blueprints/Posicion.Posicion", OverrideNativeName="Posicion"))
struct FPosicion__pf1773622777
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="X", Tooltip, OverrideNativeName="X_3_ED5DB43747FA6919F00C359E3381C62C"))
	int32 bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Y", Tooltip, OverrideNativeName="Y_4_2326A0494C21248A7B7D06BCE6772EF5"))
	int32 bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf;
	FPosicion__pf1773622777();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FPosicion__pf1773622777& __Other) const
	{
		return FPosicion__pf1773622777::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FPosicion__pf1773622777& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FPosicion__pf1773622777::StaticStruct()); }
};
