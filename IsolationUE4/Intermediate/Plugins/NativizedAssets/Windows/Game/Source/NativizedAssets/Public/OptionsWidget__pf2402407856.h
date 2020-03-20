#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class USlider;
class UButton;
class UGameUserSettings;
#include "OptionsWidget__pf2402407856.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/HUD/OptionsWidget.OptionsWidget_C", OverrideNativeName="OptionsWidget_C"))
class UOptionsWidget_C__pf2402407856 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonPantallaCompletaEnVentana", Category="OptionsWidget", OverrideNativeName="BotonPantallaCompletaEnVentana"))
	UButton* bpv__BotonPantallaCompletaEnVentana__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BotonVentana", Category="OptionsWidget", OverrideNativeName="BotonVentana"))
	UButton* bpv__BotonVentana__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slide1", Category="OptionsWidget", OverrideNativeName="Slide1"))
	USlider* bpv__Slide1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider2", Category="OptionsWidget", OverrideNativeName="Slider2"))
	USlider* bpv__Slider2__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock", OverrideNativeName="TextBlock"))
	UTextBlock* bpv__TextBlock__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_2", OverrideNativeName="TextBlock_2"))
	UTextBlock* bpv__TextBlock_2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Volumen Musica", Category="Default", MultiLine="true", OverrideNativeName="VolumenMusica"))
	float bpv__VolumenMusica__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Volumen Sonido", Category="Default", MultiLine="true", OverrideNativeName="VolumenSonido"))
	float bpv__VolumenSonido__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetGameUserSettings_ReturnValue"))
	UGameUserSettings* b0l__CallFunc_GetGameUserSettings_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_1"))
	float b0l__K2Node_ComponentBoundEvent_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value"))
	float b0l__K2Node_ComponentBoundEvent_Value__pf;
	UOptionsWidget_C__pf2402407856(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_OptionsWidget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OptionsWidget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OptionsWidget__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonVentana_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonVentana_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BotonPantallaCompletaEnVentana_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BotonPantallaCompletaEnVentana_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider2_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider2_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slide1_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slide1_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slide1_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slide1_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider2_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider2_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider_63_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider_63_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
