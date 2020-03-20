#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Direction__pf1773622777.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Posicion__pf1773622777.h"
#include "Disenos__pf1773622777.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UTextRenderComponent;
class UStaticMeshComponent;
class ANivel;
class UPrimitiveComponent;
class AActor;
class ATopDownCharacter_C__pf1773622777;
class AInteractuablePrueba_BP_C__pf479927698;
class AMainPlayerController_BP_C__pf1773622777;
class UClass;
#include "PruebaGeneradorDeSalasCopiaSeguridad__pf1773622777.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Blueprints/PruebaGeneradorDeSalasCopiaSeguridad.PruebaGeneradorDeSalasCopiaSeguridad_C", OverrideNativeName="PruebaGeneradorDeSalasCopiaSeguridad_C"))
class APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TextRender"))
	UTextRenderComponent* bpv__TextRender__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	UStaticMeshComponent* bpv__Sphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Direccion", Category="Default", MultiLine="true", OverrideNativeName="Direccion"))
	E__Direction__pf bpv__Direccion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Localizacion", Category="Default", MultiLine="true", OverrideNativeName="Localizacion"))
	FVector bpv__Localizacion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Off Set", Category="Default", MultiLine="true", OverrideNativeName="OffSet"))
	FVector bpv__OffSet__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Direccion Anterior", Category="Default", MultiLine="true", OverrideNativeName="DireccionAnterior"))
	E__Direction__pf bpv__DireccionAnterior__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Indice De Localizacion", Category="Default", MultiLine="true", OverrideNativeName="IndiceDeLocalizacion"))
	int32 bpv__IndiceDeLocalizacion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Suma", Category="Default", MultiLine="true", OverrideNativeName="Suma"))
	int32 bpv__Suma__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Localizaciones", Category="Default", MultiLine="true", OverrideNativeName="Localizaciones"))
	TArray<int32> bpv__Localizaciones__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Puede Spawnear", Category="Default", MultiLine="true", OverrideNativeName="PuedeSpawnear"))
	bool bpv__PuedeSpawnear__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Vector Posicion", Category="Default", MultiLine="true", OverrideNativeName="VectorPosicion"))
	FPosicion__pf1773622777 bpv__VectorPosicion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distancia", Category="Default", MultiLine="true", OverrideNativeName="Distancia"))
	float bpv__Distancia__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Vector Posicion Array", Category="Default", MultiLine="true", OverrideNativeName="VectorPosicionArray"))
	TArray<FPosicion__pf1773622777> bpv__VectorPosicionArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distancia De Spawn", Category="Default", MultiLine="true", OverrideNativeName="DistanciaDeSpawn"))
	float bpv__DistanciaDeSpawn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Niveles Creados", Category="Default", MultiLine="true", OverrideNativeName="NivelesCreados"))
	TArray<ANivel*> bpv__NivelesCreados__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Diseno 1", Category="Disenos", MultiLine="true", OverrideNativeName="Diseno1"))
	FDisenos__pf1773622777 bpv__Diseno1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_2"))
	int32 b0l__Temp_int_Loop_Counter_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_2"))
	int32 b0l__Temp_int_Array_Index_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_3"))
	int32 b0l__Temp_int_Loop_Counter_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_3"))
	int32 b0l__Temp_int_Array_Index_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_4"))
	int32 b0l__Temp_int_Loop_Counter_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_4"))
	int32 b0l__Temp_int_Array_Index_Variable_4__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue"))
	AActor* b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue"))
	AInteractuablePrueba_BP_C__pf479927698* b0l__CallFunc_FinishSpawningActor_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	int32 b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_Posicion"))
	FPosicion__pf1773622777 b0l__K2Node_MakeStruct_Posicion__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_Posicion_1"))
	FPosicion__pf1773622777 b0l__K2Node_MakeStruct_Posicion_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FPosicion__pf1773622777 b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	FPosicion__pf1773622777 b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	UClass* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1"))
	AActor* b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue_1"))
	ANivel* b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP_1"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	UClass* b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ANivel*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	ANivel* b0l__CallFunc_Array_Get_Item_5__pf;
	APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="VueltaAEmpezar"))
	virtual void bpf__VueltaAEmpezar__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ProcesoDeCreacion2"))
	virtual void bpf__ProcesoDeCreacion2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="VolverAlSwitch"))
	virtual void bpf__VolverAlSwitch__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ProcesoDeCreacion"))
	virtual void bpf__ProcesoDeCreacion__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
public:
};
