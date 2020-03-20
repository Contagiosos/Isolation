#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UBoxComponent;
class UStaticMeshComponent;
class USphereComponent;
class USceneComponent;
class UTimelineComponent;
class UPrimitiveComponent;
class AActor;
class ATopDownCharacter_C__pf1773622777;
#include "Trampilla__BP__pf479927698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/GameplayMechanics/Trampilla__BP.Trampilla__BP_C", OverrideNativeName="Trampilla__BP_C"))
class ATrampilla__BP_C__pf479927698 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Collision"))
	UBoxComponent* bpv__Collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Door"))
	UStaticMeshComponent* bpv__Door__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	USphereComponent* bpv__Sphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1_NewTrack_0_37A9F8594D41CCC101605D9CBFDC6F7A"))
	float bpv__Timeline_1_NewTrack_0_37A9F8594D41CCC101605D9CBFDC6F7A__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1__Direction_37A9F8594D41CCC101605D9CBFDC6F7A"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_1__Direction_37A9F8594D41CCC101605D9CBFDC6F7A__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Trampilla__BP", OverrideNativeName="Timeline_1"))
	UTimelineComponent* bpv__Timeline_1__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_NewTrack_0_A509DADF4137AAE5B7E495813E65F115"))
	float bpv__Timeline_0_NewTrack_0_A509DADF4137AAE5B7E495813E65F115__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_A509DADF4137AAE5B7E495813E65F115"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_A509DADF4137AAE5B7E495813E65F115__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Trampilla__BP", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Abierto", Category="Default", MultiLine="true", OverrideNativeName="Abierto"))
	bool bpv__Abierto__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Off", Category="Default", MultiLine="true", OverrideNativeName="Off"))
	bool bpv__Off__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_1"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf;
	ATrampilla__BP_C__pf479927698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Trampilla__BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Trampilla__BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Trampilla__BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Trampilla__BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Trampilla__BP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Trampilla__BP__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__UpdateFunc"))
	virtual void bpf__Timeline_1__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__FinishedFunc"))
	virtual void bpf__Timeline_1__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
public:
};
