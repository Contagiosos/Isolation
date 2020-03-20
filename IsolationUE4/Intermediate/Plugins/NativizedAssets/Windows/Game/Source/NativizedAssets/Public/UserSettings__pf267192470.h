#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "UserSettings__pf267192470.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/SavesInstances/UserSettings.UserSettings_C", OverrideNativeName="UserSettings_C"))
class UUserSettings_C__pf267192470 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Volumen Musica", Category="Default", MultiLine="true", OverrideNativeName="VolumenMusica"))
	float bpv__VolumenMusica__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Volumen Sonido", Category="Default", MultiLine="true", OverrideNativeName="VolumenSonido"))
	float bpv__VolumenSonido__pf;
	UUserSettings_C__pf267192470(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
