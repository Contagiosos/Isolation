#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UUserSettings_C__pf267192470;
class UWidgetSwitcher;
class UOptionsWidget_C__pf2402407856;
class UButton;
class AMainPlayerController_BP_C__pf1773622777;
#include "StartMenu__pf2402407856.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/HUD/StartMenu.StartMenu_C", OverrideNativeName="StartMenu_C"))
class UStartMenu_C__pf2402407856 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonEmpezarPartida", Category="StartMenu", OverrideNativeName="BotonEmpezarPartida"))
	UButton* bpv__BotonEmpezarPartida__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonSalir", Category="StartMenu", OverrideNativeName="BotonSalir"))
	UButton* bpv__BotonSalir__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonSettings", Category="StartMenu", OverrideNativeName="BotonSettings"))
	UButton* bpv__BotonSettings__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonVolver", Category="StartMenu", OverrideNativeName="BotonVolver"))
	UButton* bpv__BotonVolver__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="OptionsWidget", Category="StartMenu", OverrideNativeName="OptionsWidget"))
	UOptionsWidget_C__pf2402407856* bpv__OptionsWidget__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WidgetSwitcher_0", Category="StartMenu", OverrideNativeName="WidgetSwitcher_0"))
	UWidgetSwitcher* bpv__WidgetSwitcher_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="User Settings", Category="Default", MultiLine="true", OverrideNativeName="UserSettings"))
	UUserSettings_C__pf267192470* bpv__UserSettings__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUser_Settings"))
	UUserSettings_C__pf267192470* b0l__K2Node_DynamicCast_AsUser_Settings__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UStartMenu_C__pf2402407856(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_StartMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartMenu__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonVolver_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonVolver_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonSettings_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonSettings_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonSalir_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonSalir_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonEmpezarPartida_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonEmpezarPartida_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
