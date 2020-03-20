#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Slot.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_UseCachedPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SaveCachedPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class ATopDownCharacter_C__pf1773622777;
#include "PlayerAnimInstance__pf3600798235.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Player/Animations/PlayerAnimInstance.PlayerAnimInstance_C", OverrideNativeName="PlayerAnimInstance_C"))
class UPlayerAnimInstance_C__pf3600798235 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root_AC3A67BD437AE8789EA40784621FA1AF"))
	FAnimNode_Root bpv__AnimGraphNode_Root_AC3A67BD437AE8789EA40784621FA1AF__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_057CB7604231EF7C9F5A2EA1D4F213AE"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_057CB7604231EF7C9F5A2EA1D4F213AE__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_C8AEB2AE4BF95B486710F59A4212D48A"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_C8AEB2AE4BF95B486710F59A4212D48A__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine_22B131D74180C06217114298080ADA58"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine_22B131D74180C06217114298080ADA58__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_F815F0BD4CB4FCB227FEF1BBC951B47B"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_F815F0BD4CB4FCB227FEF1BBC951B47B__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_3B622ADF42F6178C18BB22887A7C7871"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_3B622ADF42F6178C18BB22887A7C7871__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot_0BD7D30B4C6958559C5BC3BCBDB24C30"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot_0BD7D30B4C6958559C5BC3BCBDB24C30__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Speed", Category="Default", MultiLine="true", OverrideNativeName="PlayerSpeed"))
	float bpv__PlayerSpeed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_1"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_2"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_3"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPlayerAnimInstance_C__pf3600798235(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root_AC3A67BD437AE8789EA40784621FA1AF();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer_057CB7604231EF7C9F5A2EA1D4F213AE();
	void __InitAnimNode__AnimGraphNode_StateResult_C8AEB2AE4BF95B486710F59A4212D48A();
	void __InitAnimNode__AnimGraphNode_StateMachine_22B131D74180C06217114298080ADA58();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_F815F0BD4CB4FCB227FEF1BBC951B47B();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_3B622ADF42F6178C18BB22887A7C7871();
	void __InitAnimNode__AnimGraphNode_Slot_0BD7D30B4C6958559C5BC3BCBDB24C30();
	void bpf__ExecuteUbergraph_PlayerAnimInstance__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimInstance__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimInstance__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimInstance__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimInstance__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_ButtonPressed"))
	virtual void bpf__AnimNotify_ButtonPressed__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_Button_PushStart"))
	virtual void bpf__AnimNotify_Button_PushStart__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_Button_PushEnd"))
	virtual void bpf__AnimNotify_Button_PushEnd__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_DyingStart"))
	virtual void bpf__AnimNotify_DyingStart__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_TakingItemStart"))
	virtual void bpf__AnimNotify_TakingItemStart__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_StandUpStart"))
	virtual void bpf__AnimNotify_StandUpStart__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_PushStart"))
	virtual void bpf__AnimNotify_PushStart__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_DyingEnd"))
	virtual void bpf__AnimNotify_DyingEnd__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_TakingItemEnd"))
	virtual void bpf__AnimNotify_TakingItemEnd__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_StandUpEnd"))
	virtual void bpf__AnimNotify_StandUpEnd__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_PushEnd"))
	virtual void bpf__AnimNotify_PushEnd__pf();
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
