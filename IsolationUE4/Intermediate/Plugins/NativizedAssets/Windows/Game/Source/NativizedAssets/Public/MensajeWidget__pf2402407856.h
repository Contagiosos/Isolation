#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
#include "MensajeWidget__pf2402407856.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/HUD/MensajeWidget.MensajeWidget_C", OverrideNativeName="MensajeWidget_C"))
class UMensajeWidget_C__pf2402407856 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(Export, meta=(DisplayName="TextBlock_55", OverrideNativeName="TextBlock_55"))
	UTextBlock* bpv__TextBlock_55__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mensaje", Category="Default", MultiLine="true", OverrideNativeName="Mensaje"))
	FString bpv__Mensaje__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewParam"))
	FString b0l__K2Node_CustomEvent_NewParam__pf;
	UMensajeWidget_C__pf2402407856(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MensajeWidget_0"))
	void bpf__ExecuteUbergraph_MensajeWidget__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AparecerMensaje"))
	virtual void bpf__AparecerMensaje__pf(const FString& bpp__NewParam__pf__const);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
