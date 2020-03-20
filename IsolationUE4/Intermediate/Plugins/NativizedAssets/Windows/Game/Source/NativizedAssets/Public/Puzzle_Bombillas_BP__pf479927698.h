#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "IsolationUE4/Interactuable.h"
class ANivel_IMP1_C__pf626307183;
class UStaticMeshComponent;
class ATopDownCharacter_C__pf1773622777;
class UPlayMontageCallbackProxy;
#include "Puzzle_Bombillas_BP__pf479927698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/GameplayMechanics/Puzzle_Bombillas_BP.Puzzle_Bombillas_BP_C", OverrideNativeName="Puzzle_Bombillas_BP_C"))
class APuzzle_Bombillas_BP_C__pf479927698 : public AInteractuable
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMontagePlayDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OnMontagePlayDelegate__DelegateSignature__SC_0, FName , bpp__NotifyName__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Bombilla5"))
	UStaticMeshComponent* bpv__Bombilla5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Bombilla4"))
	UStaticMeshComponent* bpv__Bombilla4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Bombilla3"))
	UStaticMeshComponent* bpv__Bombilla3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Bombilla2"))
	UStaticMeshComponent* bpv__Bombilla2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Bombilla1"))
	UStaticMeshComponent* bpv__Bombilla1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Bombilla0"))
	UStaticMeshComponent* bpv__Bombilla0__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BaseBoton"))
	UStaticMeshComponent* bpv__BaseBoton__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Comenzado", Category="Default", MultiLine="true", OverrideNativeName="bHaComenzado"))
	bool bpv__bHaComenzado__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bombilla Activa", Category="Default", MultiLine="true", OverrideNativeName="BombillaActiva"))
	int32 bpv__BombillaActiva__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Debe Pulsar", Category="Default", MultiLine="true", OverrideNativeName="bDebePulsar"))
	bool bpv__bDebePulsar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tiempo De Reaccion", Category="Default", MultiLine="true", OverrideNativeName="TiempoDeReaccion"))
	float bpv__TiempoDeReaccion__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="En Animacion", Category="Default", MultiLine="true", OverrideNativeName="bEnAnimacion"))
	bool bpv__bEnAnimacion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Pulsado 1", Category="Default", MultiLine="true", OverrideNativeName="bHaPulsado1"))
	bool bpv__bHaPulsado1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Pulsado 2", Category="Default", MultiLine="true", OverrideNativeName="bHaPulsado2"))
	bool bpv__bHaPulsado2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Pulsado 3", Category="Default", MultiLine="true", OverrideNativeName="bHaPulsado3"))
	bool bpv__bHaPulsado3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Pulsado 4", Category="Default", MultiLine="true", OverrideNativeName="bHaPulsado4"))
	bool bpv__bHaPulsado4__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Pulsado 5", Category="Default", MultiLine="true", OverrideNativeName="bHaPulsado5"))
	bool bpv__bHaPulsado5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ANivel_IMP1_C__pf626307183*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_3"))
	FName b0l__K2Node_CustomEvent_NotifyName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_2"))
	FName b0l__K2Node_CustomEvent_NotifyName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_1"))
	FName b0l__K2Node_CustomEvent_NotifyName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName"))
	FName b0l__K2Node_CustomEvent_NotifyName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b0l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_4"))
	FName b0l__K2Node_CustomEvent_NotifyName_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ANivel_IMP1_C__pf626307183* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue"))
	UPlayMontageCallbackProxy* b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess_1"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess_1__pf;
	APuzzle_Bombillas_BP_C__pf479927698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Puzzle_Bombillas_BP_2"))
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Puzzle_Bombillas_BP_3"))
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Puzzle_Bombillas_BP_4"))
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Puzzle_Bombillas_BP__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Siguiente"))
	virtual void bpf__Siguiente__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PuzzleCompletado"))
	virtual void bpf__PuzzleCompletado__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Continuar"))
	virtual void bpf__Continuar__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SiguienteBombilla"))
	virtual void bpf__SiguienteBombilla__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Resetear"))
	virtual void bpf__Resetear__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PresionarBoton"))
	virtual void bpf__PresionarBoton__pf();
	UFUNCTION(meta=(CppFromBpEvent, OverrideNativeName="InteraccionBlueprint"))
	virtual void bpf__InteraccionBlueprint__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnCompleted_0FC9B177481C946695CF948DB21FE9D2"))
	virtual void bpf__OnCompleted_0FC9B177481C946695CF948DB21FE9D2__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnBlendOut_0FC9B177481C946695CF948DB21FE9D2"))
	virtual void bpf__OnBlendOut_0FC9B177481C946695CF948DB21FE9D2__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnInterrupted_0FC9B177481C946695CF948DB21FE9D2"))
	virtual void bpf__OnInterrupted_0FC9B177481C946695CF948DB21FE9D2__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyBegin_0FC9B177481C946695CF948DB21FE9D2"))
	virtual void bpf__OnNotifyBegin_0FC9B177481C946695CF948DB21FE9D2__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyEnd_0FC9B177481C946695CF948DB21FE9D2"))
	virtual void bpf__OnNotifyEnd_0FC9B177481C946695CF948DB21FE9D2__pf(FName bpp__NotifyName__pf);
public:
};
