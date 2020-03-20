#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
#include "InicioFinalWB__pf2402407856.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/HUD/InicioFinalWB.InicioFinalWB_C", OverrideNativeName="InicioFinalWB_C"))
class UInicioFinalWB_C__pf2402407856 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PantallazoNegro", Category="InicioFinalWB", OverrideNativeName="PantallazoNegro"))
	UImage* bpv__PantallazoNegro__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Juego Iniciado", Category="Default", MultiLine="true", OverrideNativeName="JuegoIniciado"))
	bool bpv__JuegoIniciado__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Opacidad", Category="Default", MultiLine="true", OverrideNativeName="Opacidad"))
	float bpv__Opacidad__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Juego Acabado", Category="Default", MultiLine="true", OverrideNativeName="JuegoAcabado"))
	bool bpv__JuegoAcabado__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cantidad De Desvanecimiento", Category="Default", MultiLine="true", OverrideNativeName="CantidadDeDesvanecimiento"))
	float bpv__CantidadDeDesvanecimiento__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_DeltaSeconds"))
	float b0l__K2Node_CustomEvent_DeltaSeconds__pf;
	UInicioFinalWB_C__pf2402407856(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_InicioFinalWB__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InicioFinalWB__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InicioFinalWB__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InicioFinalWB__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="WidgetTick"))
	virtual void bpf__WidgetTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Final"))
	virtual void bpf__Final__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Inicio"))
	virtual void bpf__Inicio__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
