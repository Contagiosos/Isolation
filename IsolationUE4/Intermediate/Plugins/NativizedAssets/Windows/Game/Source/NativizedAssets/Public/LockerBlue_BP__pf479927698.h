#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "IsolationUE4/Interactuable.h"
class AMainPlayerController_BP_C__pf1773622777;
class UStaticMeshComponent;
class USphereComponent;
class UTimelineComponent;
class ATopDownCharacter_C__pf1773622777;
class UPlayMontageCallbackProxy;
#include "LockerBlue_BP__pf479927698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/GameplayMechanics/LockerBlue_BP.LockerBlue_BP_C", OverrideNativeName="LockerBlue_BP_C"))
class ALockerBlue_BP_C__pf479927698 : public AInteractuable
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMontagePlayDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OnMontagePlayDelegate__DelegateSignature__SC_0, FName , bpp__NotifyName__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Puerta"))
	UStaticMeshComponent* bpv__Puerta__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	USphereComponent* bpv__Sphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Puerta1"))
	UStaticMeshComponent* bpv__Puerta1__pf;
	UPROPERTY(meta=(OverrideNativeName="Rotar_NewTrack_0_9EDF7CED40D639C6F2E40FAA59E5567B"))
	float bpv__Rotar_NewTrack_0_9EDF7CED40D639C6F2E40FAA59E5567B__pf;
	UPROPERTY(meta=(OverrideNativeName="Rotar__Direction_9EDF7CED40D639C6F2E40FAA59E5567B"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Rotar__Direction_9EDF7CED40D639C6F2E40FAA59E5567B__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="LockerBlue_BP", OverrideNativeName="Rotar"))
	UTimelineComponent* bpv__Rotar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Sido Abierto", Category="Default", MultiLine="true", OverrideNativeName="bHaSidoAbierto"))
	bool bpv__bHaSidoAbierto__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Sido Usado", Category="Default", MultiLine="true", OverrideNativeName="bHaSidoUsado"))
	bool bpv__bHaSidoUsado__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP_1"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_1"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_2"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue"))
	UPlayMontageCallbackProxy* b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP_2"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	ALockerBlue_BP_C__pf479927698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_LockerBlue_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LockerBlue_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LockerBlue_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LockerBlue_BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LockerBlue_BP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LockerBlue_BP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LockerBlue_BP__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LockerBlue_BP__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(CppFromBpEvent, OverrideNativeName="InteraccionBlueprint"))
	virtual void bpf__InteraccionBlueprint__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnCompleted_850AD11F4E9E08E072B9C29CADC71DCA"))
	virtual void bpf__OnCompleted_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnBlendOut_850AD11F4E9E08E072B9C29CADC71DCA"))
	virtual void bpf__OnBlendOut_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnInterrupted_850AD11F4E9E08E072B9C29CADC71DCA"))
	virtual void bpf__OnInterrupted_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyBegin_850AD11F4E9E08E072B9C29CADC71DCA"))
	virtual void bpf__OnNotifyBegin_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="OnNotifyEnd_850AD11F4E9E08E072B9C29CADC71DCA"))
	virtual void bpf__OnNotifyEnd_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf);
	UFUNCTION(meta=(OverrideNativeName="Rotar__UpdateFunc"))
	virtual void bpf__Rotar__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Rotar__FinishedFunc"))
	virtual void bpf__Rotar__FinishedFunc__pf();
public:
};
