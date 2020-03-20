#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class AMainPlayerController_BP_C__pf1773622777;
class UStaticMeshComponent;
class USceneComponent;
class UTimelineComponent;
class UAhogamiento_C__pf2402407856;
class UPrimitiveComponent;
class AActor;
class ANivel;
class ATopDownCharacter_C__pf1773622777;
#include "Volumetrics_BP__pf2692903288.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Effects/VolumetricGas/Volumetrics_BP.Volumetrics_BP_C", OverrideNativeName="Volumetrics_BP_C"))
class AVolumetrics_BP_C__pf2692903288 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Plane"))
	UStaticMeshComponent* bpv__Plane__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="Expandir_Expansion_BC3A1DC44CAD4EC2B901C99009150564"))
	float bpv__Expandir_Expansion_BC3A1DC44CAD4EC2B901C99009150564__pf;
	UPROPERTY(meta=(OverrideNativeName="Expandir__Direction_BC3A1DC44CAD4EC2B901C99009150564"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Expandir__Direction_BC3A1DC44CAD4EC2B901C99009150564__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Volumetrics_BP", OverrideNativeName="Expandir"))
	UTimelineComponent* bpv__Expandir__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Volume Height", Category="Default", MultiLine="true", OverrideNativeName="VolumeHeight"))
	float bpv__VolumeHeight__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Volume Resolution", Category="Default", MultiLine="true", OverrideNativeName="VolumeResolution"))
	int32 bpv__VolumeResolution__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Previus Layer Height", Category="Default", MultiLine="true", OverrideNativeName="PreviusLayerHeight"))
	float bpv__PreviusLayerHeight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Seed Height", Category="Default", MultiLine="true", OverrideNativeName="SeedHeight"))
	float bpv__SeedHeight__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAhogamiento"))
	UAhogamiento_C__pf2402407856* b0l__K2Node_DynamicCast_AsAhogamiento__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsNivel"))
	ANivel* b0l__K2Node_DynamicCast_AsNivel__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP_1"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAhogamiento_1"))
	UAhogamiento_C__pf2402407856* b0l__K2Node_DynamicCast_AsAhogamiento_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_1"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	AVolumetrics_BP_C__pf2692903288(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Volumetrics_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volumetrics_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volumetrics_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volumetrics_BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volumetrics_BP__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Plane_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Plane_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Plane_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Plane_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="Expandir__UpdateFunc"))
	virtual void bpf__Expandir__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Expandir__FinishedFunc"))
	virtual void bpf__Expandir__FinishedFunc__pf();
public:
};
