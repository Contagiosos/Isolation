#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UPointLightComponent;
class UBoxComponent;
class UStaticMeshComponent;
class UTimelineComponent;
class UPrimitiveComponent;
class AActor;
class ATopDownCharacter_C__pf1773622777;
#include "Saw_R_BP__pf479927698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/GameplayMechanics/Saw_R_BP.Saw_R_BP_C", OverrideNativeName="Saw_R_BP_C"))
class ASaw_R_BP_C__pf479927698 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight"))
	UPointLightComponent* bpv__PointLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Body"))
	UStaticMeshComponent* bpv__Body__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Saw"))
	UStaticMeshComponent* bpv__Saw__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_NewTrack_0_EC2802994C3C222EC50ECC8F4C4CA055"))
	FVector bpv__Timeline_0_NewTrack_0_EC2802994C3C222EC50ECC8F4C4CA055__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_EC2802994C3C222EC50ECC8F4C4CA055"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_EC2802994C3C222EC50ECC8F4C4CA055__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Saw_R_BP", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Initial Location", Category="Default", MultiLine="true", OverrideNativeName="Initial_Location"))
	FVector bpv__Initial_Location__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Status", Category="Default", MultiLine="true", OverrideNativeName="Status"))
	bool bpv__Status__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	ASaw_R_BP_C__pf479927698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Saw_R_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Saw_R_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Saw_R_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Saw_R_BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Saw_R_BP__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Saw_Movement"))
	virtual void bpf__Saw_Movement__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
public:
};
