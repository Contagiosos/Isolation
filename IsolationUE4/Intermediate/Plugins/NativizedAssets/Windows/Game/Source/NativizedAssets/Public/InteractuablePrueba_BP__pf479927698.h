#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Direction__pf1773622777.h"
#include "Posicion__pf1773622777.h"
#include "IsolationUE4/Interactuable.h"
#include "InteractuablePrueba_BP__pf479927698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/GameplayMechanics/InteractuablePrueba_BP.InteractuablePrueba_BP_C", OverrideNativeName="InteractuablePrueba_BP_C"))
class AInteractuablePrueba_BP_C__pf479927698 : public AInteractuable
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Indice", Category="Default", MultiLine="true", OverrideNativeName="Indice"))
	int32 bpv__Indice__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Posicion", Category="Default", MultiLine="true", OverrideNativeName="Posicion"))
	FPosicion__pf1773622777 bpv__Posicion__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Direcciones Con Puertas", Category="Default", MultiLine="true", OverrideNativeName="DireccionesConPuertas"))
	TArray<E__Direction__pf> bpv__DireccionesConPuertas__pf;
	AInteractuablePrueba_BP_C__pf479927698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
