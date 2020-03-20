#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
class UStartMenu_C__pf2402407856;
#include "IsolationGameInstance__pf1773622777.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Blueprints/IsolationGameInstance.IsolationGameInstance_C", OverrideNativeName="IsolationGameInstance_C"))
class UIsolationGameInstance_C__pf1773622777 : public UGameInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Menu WB", Category="Default", MultiLine="true", OverrideNativeName="MainMenuWB"))
	UStartMenu_C__pf2402407856* bpv__MainMenuWB__pf;
	UIsolationGameInstance_C__pf1773622777(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_IsolationGameInstance__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowMainMenu"))
	virtual void bpf__ShowMainMenu__pf();
public:
};
