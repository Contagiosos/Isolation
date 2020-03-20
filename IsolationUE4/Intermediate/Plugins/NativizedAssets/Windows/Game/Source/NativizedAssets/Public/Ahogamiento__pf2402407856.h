#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UProgressBar;
class ATopDownCharacter_C__pf1773622777;
#include "Ahogamiento__pf2402407856.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/HUD/Ahogamiento.Ahogamiento_C", OverrideNativeName="Ahogamiento_C"))
class UAhogamiento_C__pf2402407856 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BarraFiltro", Category="Ahogamiento", OverrideNativeName="BarraFiltro"))
	UProgressBar* bpv__BarraFiltro__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BarraOxigeno", Category="Ahogamiento", OverrideNativeName="BarraOxigeno"))
	UProgressBar* bpv__BarraOxigeno__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Nivel De Oxigeno", Category="Default", MultiLine="true", OverrideNativeName="NivelDeOxigeno"))
	float bpv__NivelDeOxigeno__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Nivel De Filtro", Category="Default", MultiLine="true", OverrideNativeName="NivelDeFiltro"))
	float bpv__NivelDeFiltro__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ahogandose", Category="Default", MultiLine="true", OverrideNativeName="bAhogandose"))
	bool bpv__bAhogandose__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Esta Vivo", Category="Default", MultiLine="true", OverrideNativeName="bEstaVivo"))
	bool bpv__bEstaVivo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Recuperacion Oxigeno", Category="Default", MultiLine="true", OverrideNativeName="RecuperacionOxigeno"))
	float bpv__RecuperacionOxigeno__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Devanecimiento De Filtro", Category="Default", MultiLine="true", OverrideNativeName="DevanecimientoDeFiltro"))
	float bpv__DevanecimientoDeFiltro__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Desvanecimiento De Oxigeno", Category="Default", MultiLine="true", OverrideNativeName="DesvanecimientoDeOxigeno"))
	float bpv__DesvanecimientoDeOxigeno__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UAhogamiento_C__pf2402407856(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Ahogamiento__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ahogamiento__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ahogamiento__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DejarDeAgotar"))
	virtual void bpf__DejarDeAgotar__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EmpezarAAgotar"))
	virtual void bpf__EmpezarAAgotar__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
