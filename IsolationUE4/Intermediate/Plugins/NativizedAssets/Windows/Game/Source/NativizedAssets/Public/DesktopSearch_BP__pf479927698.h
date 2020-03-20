#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "IsolationUE4/Interactuable.h"
class UStaticMeshComponent;
class UTimelineComponent;
class ATopDownCharacter_C__pf1773622777;
class UPlayMontageCallbackProxy;
class AMainPlayerController_BP_C__pf1773622777;
#include "DesktopSearch_BP__pf479927698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/GameplayMechanics/DesktopSearch_BP.DesktopSearch_BP_C", OverrideNativeName="DesktopSearch_BP_C"))
class ADesktopSearch_BP_C__pf479927698 : public AInteractuable
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMontagePlayDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OnMontagePlayDelegate__DelegateSignature__SC_0, FName , bpp__NotifyName__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube1"))
	UStaticMeshComponent* bpv__Cube1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube"))
	UStaticMeshComponent* bpv__Cube__pf;
	UPROPERTY(meta=(OverrideNativeName="AbrirCajon_NewTrack_0_C473026342AD573AE9DC8B8FF29D83C3"))
	float bpv__AbrirCajon_NewTrack_0_C473026342AD573AE9DC8B8FF29D83C3__pf;
	UPROPERTY(meta=(OverrideNativeName="AbrirCajon__Direction_C473026342AD573AE9DC8B8FF29D83C3"))
	TEnumAsByte<ETimelineDirection::Type> bpv__AbrirCajon__Direction_C473026342AD573AE9DC8B8FF29D83C3__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="DesktopSearch_BP", OverrideNativeName="AbrirCajon"))
	UTimelineComponent* bpv__AbrirCajon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Sido Usado", Category="Default", MultiLine="true", OverrideNativeName="bHaSidoUsado"))
	bool bpv__bHaSidoUsado__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Localizacion", Category="Default", MultiLine="true", OverrideNativeName="Localizacion"))
	FVector bpv__Localizacion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tiene Tarjeta", Category="Default", MultiLine="true", OverrideNativeName="bTieneTarjeta"))
	bool bpv__bTieneTarjeta__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_4"))
	FName b0l__K2Node_CustomEvent_NotifyName_4__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue"))
	UPlayMontageCallbackProxy* b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	ADesktopSearch_BP_C__pf479927698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_DesktopSearch_BP__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_DesktopSearch_BP_1"))
	void bpf__ExecuteUbergraph_DesktopSearch_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DesktopSearch_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DesktopSearch_BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DesktopSearch_BP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DesktopSearch_BP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DesktopSearch_BP__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DesktopSearch_BP__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DesktopSearch_BP__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(CppFromBpEvent, OverrideNativeName="InteraccionBlueprint"))
	virtual void bpf__InteraccionBlueprint__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnCompleted_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5"))
	virtual void bpf__OnCompleted_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnBlendOut_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5"))
	virtual void bpf__OnBlendOut_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnInterrupted_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5"))
	virtual void bpf__OnInterrupted_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyBegin_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5"))
	virtual void bpf__OnNotifyBegin_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyEnd_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5"))
	virtual void bpf__OnNotifyEnd_8B0FDEAD4392C9BD0ABA9B8E87BDAEC5__pf(FName bpp__NotifyName__pf);
	UFUNCTION(meta=(OverrideNativeName="AbrirCajon__UpdateFunc"))
	virtual void bpf__AbrirCajon__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="AbrirCajon__FinishedFunc"))
	virtual void bpf__AbrirCajon__FinishedFunc__pf();
public:
};
