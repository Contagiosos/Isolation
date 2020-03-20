#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UUserSettings_C__pf267192470;
class UWidgetSwitcher;
class UOptionsWidget_C__pf2402407856;
class UButton;
class AMainPlayerController_BP_C__pf1773622777;
#include "PauseMenu__pf2402407856.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/HUD/PauseMenu.PauseMenu_C", OverrideNativeName="PauseMenu_C"))
class UPauseMenu_C__pf2402407856 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonContinuar", Category="PauseMenu", OverrideNativeName="BotonContinuar"))
	UButton* bpv__BotonContinuar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonOpciones", Category="PauseMenu", OverrideNativeName="BotonOpciones"))
	UButton* bpv__BotonOpciones__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonSalir_1", Category="PauseMenu", OverrideNativeName="BotonSalir_1"))
	UButton* bpv__BotonSalir_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonVolver", Category="PauseMenu", OverrideNativeName="BotonVolver"))
	UButton* bpv__BotonVolver__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="OptionsWidget", Category="PauseMenu", OverrideNativeName="OptionsWidget"))
	UOptionsWidget_C__pf2402407856* bpv__OptionsWidget__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WidgetSwitcher_0", Category="PauseMenu", OverrideNativeName="WidgetSwitcher_0"))
	UWidgetSwitcher* bpv__WidgetSwitcher_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="User Settings", Category="Default", MultiLine="true", OverrideNativeName="UserSettings"))
	UUserSettings_C__pf267192470* bpv__UserSettings__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP_1"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUser_Settings"))
	UUserSettings_C__pf267192470* b0l__K2Node_DynamicCast_AsUser_Settings__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPauseMenu_C__pf2402407856(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PauseMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseMenu__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonContinuar_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonContinuar_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonOpciones_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonOpciones_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonSalir_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonSalir_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonVolver_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonVolver_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
