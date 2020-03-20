#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "IsolationUE4/MainPlayerController.h"
class UAhogamiento_C__pf2402407856;
class UMap_C__pf2402407856;
class UMensajeWidget_C__pf2402407856;
class UInicioFinalWB_C__pf2402407856;
class ATopDownCharacter_C__pf1773622777;
class UPlayMontageCallbackProxy;
#include "MainPlayerController_BP__pf1773622777.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Blueprints/MainPlayerController_BP.MainPlayerController_BP_C", OverrideNativeName="MainPlayerController_BP_C"))
class AMainPlayerController_BP_C__pf1773622777 : public AMainPlayerController
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMontagePlayDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OnMontagePlayDelegate__DelegateSignature__SC_0, FName , bpp__NotifyName__pf);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Anterior Visivilidad", Category="Default", MultiLine="true", OverrideNativeName="AnteriorVisivilidad"))
	bool bpv__AnteriorVisivilidad__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Volumen Musica", Category="Default", MultiLine="true", OverrideNativeName="VolumenMusica"))
	float bpv__VolumenMusica__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Volumen Sonido", Category="Default", MultiLine="true", OverrideNativeName="VolumenSonido"))
	float bpv__VolumenSonido__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_4"))
	FName b0l__K2Node_CustomEvent_NotifyName_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_3"))
	FName b0l__K2Node_CustomEvent_NotifyName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_2"))
	FName b0l__K2Node_CustomEvent_NotifyName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_1"))
	FName b0l__K2Node_CustomEvent_NotifyName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName"))
	FName b0l__K2Node_CustomEvent_NotifyName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b0l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAhogamiento"))
	UAhogamiento_C__pf2402407856* b0l__K2Node_DynamicCast_AsAhogamiento__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Mensaje"))
	FString b0l__K2Node_CustomEvent_Mensaje__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMap"))
	UMap_C__pf2402407856* b0l__K2Node_DynamicCast_AsMap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_VolumenMusica"))
	float b0l__K2Node_CustomEvent_VolumenMusica__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_VolumenSonido"))
	float b0l__K2Node_CustomEvent_VolumenSonido__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMensaje_Widget"))
	UMensajeWidget_C__pf2402407856* b0l__K2Node_DynamicCast_AsMensaje_Widget__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsInicio_Final_WB"))
	UInicioFinalWB_C__pf2402407856* b0l__K2Node_DynamicCast_AsInicio_Final_WB__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsInicio_Final_WB_1"))
	UInicioFinalWB_C__pf2402407856* b0l__K2Node_DynamicCast_AsInicio_Final_WB_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_1"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue"))
	UPlayMontageCallbackProxy* b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	AMainPlayerController_BP_C__pf1773622777(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MainPlayerController_BP_0"))
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainPlayerController_BP__pf_13(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MenuPrincipal"))
	virtual void bpf__MenuPrincipal__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CambiarVolumen"))
	virtual void bpf__CambiarVolumen__pf(float bpp__VolumenMusica__pf, float bpp__VolumenSonido__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AparecerMensaje"))
	virtual void bpf__AparecerMensaje__pf(const FString& bpp__Mensaje__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateKeys"))
	virtual void bpf__UpdateKeys__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ObtenerFiltro"))
	virtual void bpf__ObtenerFiltro__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowAhogamiento"))
	virtual void bpf__ShowAhogamiento__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pausa"))
	virtual void bpf__Pausa__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnCompleted_00551C6C47AB92BCD4F7E089643C9D6B"))
	virtual void bpf__OnCompleted_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnBlendOut_00551C6C47AB92BCD4F7E089643C9D6B"))
	virtual void bpf__OnBlendOut_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnInterrupted_00551C6C47AB92BCD4F7E089643C9D6B"))
	virtual void bpf__OnInterrupted_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyBegin_00551C6C47AB92BCD4F7E089643C9D6B"))
	virtual void bpf__OnNotifyBegin_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyEnd_00551C6C47AB92BCD4F7E089643C9D6B"))
	virtual void bpf__OnNotifyEnd_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf);
public:
};
