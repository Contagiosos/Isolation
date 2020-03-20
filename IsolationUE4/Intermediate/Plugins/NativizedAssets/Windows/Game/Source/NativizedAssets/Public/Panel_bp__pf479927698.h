#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class URectLightComponent;
class UBoxComponent;
class UStaticMeshComponent;
class UPrimitiveComponent;
class AActor;
class ATopDownCharacter_C__pf1773622777;
class ULightComponent;
#include "Panel_bp__pf479927698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/GameplayMechanics/Panel_bp.Panel_BP_C", OverrideNativeName="Panel_BP_C"))
class APanel_BP_C__pf479927698 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Panel_light_R"))
	URectLightComponent* bpv__Panel_light_R__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Panel_light_G"))
	URectLightComponent* bpv__Panel_light_G__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Panel_collision"))
	UBoxComponent* bpv__Panel_collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Panel_mesh"))
	UStaticMeshComponent* bpv__Panel_mesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ligth Status", Category="Default", MultiLine="true", OverrideNativeName="Ligth_status"))
	bool bpv__Ligth_status__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Correct", Category="Default", MultiLine="true", OverrideNativeName="Correct"))
	bool bpv__Correct__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Numero De Panel", Category="Default", MultiLine="true", OverrideNativeName="NumeroDePanel"))
	int32 bpv__NumeroDePanel__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Se Ha Anadido", Category="Default", MultiLine="true", OverrideNativeName="SeHaAnadido"))
	bool bpv__SeHaAnadido__pf;
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
	APanel_BP_C__pf479927698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Panel_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Panel_BP__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LightControllerEvent"))
	virtual void bpf__LightControllerEvent__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Ligth_controller"))
	virtual void bpf__Ligth_controller__pf(ULightComponent* bpp__ligth__pf);
public:
};
