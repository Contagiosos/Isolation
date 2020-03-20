#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "IsolationUE4/Boton.h"
#include "Boton_BP__pf479927698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/GameplayMechanics/Boton_BP.Boton_BP_C", OverrideNativeName="Boton_BP_C"))
class ABoton_BP_C__pf479927698 : public ABoton
{
public:
	GENERATED_BODY()
	ABoton_BP_C__pf479927698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Boton_BP__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(CppFromBpEvent, OverrideNativeName="InteraccionBlueprint"))
	virtual void bpf__InteraccionBlueprint__pf();
public:
};
