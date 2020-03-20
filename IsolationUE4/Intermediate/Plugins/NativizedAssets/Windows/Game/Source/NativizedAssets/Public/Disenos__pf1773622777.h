#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Disenos__pf1773622777.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Blueprints/Disenos.Disenos", OverrideNativeName="Disenos"))
struct FDisenos__pf1773622777
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="x", Tooltip, OverrideNativeName="x_3_8348D46A4F158C73F2267CB84449887D"))
	TArray<int32> bpv__x_3_8348D46A4F158C73F2267CB84449887D__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="y", Tooltip, OverrideNativeName="y_5_B5CEB6174192FE84BA963889F7AE17F1"))
	TArray<int32> bpv__y_5_B5CEB6174192FE84BA963889F7AE17F1__pf;
	FDisenos__pf1773622777();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FDisenos__pf1773622777& __Other) const
	{
		return FDisenos__pf1773622777::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
