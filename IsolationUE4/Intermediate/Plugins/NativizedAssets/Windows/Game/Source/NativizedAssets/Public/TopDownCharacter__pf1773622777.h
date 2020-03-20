#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "IsolationUE4/IsolationUE4Character.h"
class AMainPlayerController_BP_C__pf1773622777;
class UPlayMontageCallbackProxy;
class APuzzle_Bombillas_BP_C__pf479927698;
class ANivel_SALIDA_C__pf626307183;
#include "TopDownCharacter__pf1773622777.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Blueprints/TopDownCharacter.TopDownCharacter_C", OverrideNativeName="TopDownCharacter_C"))
class ATopDownCharacter_C__pf1773622777 : public AIsolationUE4Character
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMontagePlayDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OnMontagePlayDelegate__DelegateSignature__SC_0, FName , bpp__NotifyName__pf);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Estoy Delante Del Jarron", Category="Default", MultiLine="true", OverrideNativeName="bEstoyDelanteDelJarron"))
	bool bpv__bEstoyDelanteDelJarron__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Oxigeno", Category="Default", MultiLine="true", OverrideNativeName="Oxigeno"))
	float bpv__Oxigeno__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Filtro", Category="Default", MultiLine="true", OverrideNativeName="Filtro"))
	float bpv__Filtro__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Llaves Azules", Category="Default", MultiLine="true", OverrideNativeName="LlavesAzules"))
	int32 bpv__LlavesAzules__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Llaves Rojas", Category="Default", MultiLine="true", OverrideNativeName="LlavesRojas"))
	int32 bpv__LlavesRojas__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Llaves Verdes", Category="Default", MultiLine="true", OverrideNativeName="LlavesVerdes"))
	int32 bpv__LlavesVerdes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Llaves Amarillas", Category="Default", MultiLine="true", OverrideNativeName="LlavesAmarillas"))
	int32 bpv__LlavesAmarillas__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_4"))
	FName b0l__K2Node_CustomEvent_NotifyName_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_3"))
	FName b0l__K2Node_CustomEvent_NotifyName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_2"))
	FName b0l__K2Node_CustomEvent_NotifyName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_1"))
	FName b0l__K2Node_CustomEvent_NotifyName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName"))
	FName b0l__K2Node_CustomEvent_NotifyName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b0l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue"))
	UPlayMontageCallbackProxy* b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP_1"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b0l__CallFunc_IsValid_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPuzzle_Bombillas_BP"))
	APuzzle_Bombillas_BP_C__pf479927698* b0l__K2Node_DynamicCast_AsPuzzle_Bombillas_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ANivel_SALIDA_C__pf626307183*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ANivel_SALIDA_C__pf626307183* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	ATopDownCharacter_C__pf1773622777(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_TopDownCharacter_2"))
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownCharacter__pf_12(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HacerSpawn"))
	virtual void bpf__HacerSpawn__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="BotonPresionado"))
	virtual void bpf__BotonPresionado__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PantallaDeMuerte"))
	virtual void bpf__PantallaDeMuerte__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Morir"))
	virtual void bpf__Morir__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Pause_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Pause_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnCompleted_6217D18D423237FDA7B1D8AF3A047DBB"))
	virtual void bpf__OnCompleted_6217D18D423237FDA7B1D8AF3A047DBB__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnBlendOut_6217D18D423237FDA7B1D8AF3A047DBB"))
	virtual void bpf__OnBlendOut_6217D18D423237FDA7B1D8AF3A047DBB__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnInterrupted_6217D18D423237FDA7B1D8AF3A047DBB"))
	virtual void bpf__OnInterrupted_6217D18D423237FDA7B1D8AF3A047DBB__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyBegin_6217D18D423237FDA7B1D8AF3A047DBB"))
	virtual void bpf__OnNotifyBegin_6217D18D423237FDA7B1D8AF3A047DBB__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyEnd_6217D18D423237FDA7B1D8AF3A047DBB"))
	virtual void bpf__OnNotifyEnd_6217D18D423237FDA7B1D8AF3A047DBB__pf(FName bpp__NotifyName__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_P_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_P_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
public:
};
