#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Direction__pf1773622777.h"
#include "Posicion__pf1773622777.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "IsolationUE4/Nivel.h"
class UStaticMeshComponent;
class UDecalComponent;
class UBoxComponent;
class USceneComponent;
class UTexture2D;
class UChildActorComponent;
class UPointLightComponent;
class AVolumetrics_BP_C__pf2692903288;
class AMainPlayerController_BP_C__pf1773622777;
class UMap_C__pf2402407856;
class UPrimitiveComponent;
class AActor;
class ATopDownCharacter_C__pf1773622777;
#include "Nivel_Trampilla__pf626307183.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Niveles/Nivel_Trampilla.Nivel_Trampilla_C", OverrideNativeName="Nivel_Trampilla_C"))
class ANivel_Trampilla_C__pf626307183 : public ANivel
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Taquilla"))
	UChildActorComponent* bpv__Taquilla__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_5"))
	UStaticMeshComponent* bpv__Pared1_5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight00"))
	UPointLightComponent* bpv__PointLight00__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight01"))
	UPointLightComponent* bpv__PointLight01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Teleport1"))
	UBoxComponent* bpv__Teleport1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo_8"))
	UStaticMeshComponent* bpv__Suelo_8__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa037"))
	UChildActorComponent* bpv__Trampa037__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GuardarPosicion"))
	UBoxComponent* bpv__GuardarPosicion__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa036"))
	UChildActorComponent* bpv__Trampa036__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa035"))
	UChildActorComponent* bpv__Trampa035__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa034"))
	UChildActorComponent* bpv__Trampa034__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa033"))
	UChildActorComponent* bpv__Trampa033__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo_7"))
	UStaticMeshComponent* bpv__Suelo_7__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa032"))
	UChildActorComponent* bpv__Trampa032__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa031"))
	UChildActorComponent* bpv__Trampa031__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa030"))
	UChildActorComponent* bpv__Trampa030__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa029"))
	UChildActorComponent* bpv__Trampa029__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa028"))
	UChildActorComponent* bpv__Trampa028__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa027"))
	UChildActorComponent* bpv__Trampa027__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo_6"))
	UStaticMeshComponent* bpv__Suelo_6__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa026"))
	UChildActorComponent* bpv__Trampa026__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa025"))
	UChildActorComponent* bpv__Trampa025__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa024"))
	UChildActorComponent* bpv__Trampa024__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa023"))
	UChildActorComponent* bpv__Trampa023__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo_5"))
	UStaticMeshComponent* bpv__Suelo_5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa022"))
	UChildActorComponent* bpv__Trampa022__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa021"))
	UChildActorComponent* bpv__Trampa021__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa020"))
	UChildActorComponent* bpv__Trampa020__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa019"))
	UChildActorComponent* bpv__Trampa019__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa018"))
	UChildActorComponent* bpv__Trampa018__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa017"))
	UChildActorComponent* bpv__Trampa017__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo_4"))
	UStaticMeshComponent* bpv__Suelo_4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa016"))
	UChildActorComponent* bpv__Trampa016__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa015"))
	UChildActorComponent* bpv__Trampa015__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa014"))
	UChildActorComponent* bpv__Trampa014__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa013"))
	UChildActorComponent* bpv__Trampa013__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa012"))
	UChildActorComponent* bpv__Trampa012__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa011"))
	UChildActorComponent* bpv__Trampa011__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa010"))
	UChildActorComponent* bpv__Trampa010__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa09"))
	UChildActorComponent* bpv__Trampa09__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa08"))
	UChildActorComponent* bpv__Trampa08__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa07"))
	UChildActorComponent* bpv__Trampa07__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa06"))
	UChildActorComponent* bpv__Trampa06__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa05"))
	UChildActorComponent* bpv__Trampa05__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa04"))
	UChildActorComponent* bpv__Trampa04__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa03"))
	UChildActorComponent* bpv__Trampa03__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa02"))
	UChildActorComponent* bpv__Trampa02__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa01"))
	UChildActorComponent* bpv__Trampa01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo_3"))
	UStaticMeshComponent* bpv__Suelo_3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo_2"))
	UStaticMeshComponent* bpv__Suelo_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo_1"))
	UStaticMeshComponent* bpv__Suelo_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trampa00"))
	UChildActorComponent* bpv__Trampa00__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_4SinPuerta"))
	UStaticMeshComponent* bpv__Pared1_4SinPuerta__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared2_3SinPuerta"))
	UStaticMeshComponent* bpv__Pared2_3SinPuerta__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_2SinPuerta2"))
	UStaticMeshComponent* bpv__Pared1_2SinPuerta2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_2SinPuerta1"))
	UStaticMeshComponent* bpv__Pared1_2SinPuerta1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_1SinPuerta2"))
	UStaticMeshComponent* bpv__Pared1_1SinPuerta2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_1SinPuerta"))
	UStaticMeshComponent* bpv__Pared1_1SinPuerta__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ResplandorPuertaAbajo"))
	UDecalComponent* bpv__ResplandorPuertaAbajo__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ResplandorPuertaIzquierda"))
	UDecalComponent* bpv__ResplandorPuertaIzquierda__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_4"))
	UStaticMeshComponent* bpv__Pared1_4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_3"))
	UStaticMeshComponent* bpv__Pared1_3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared2_4"))
	UStaticMeshComponent* bpv__Pared2_4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared2_3"))
	UStaticMeshComponent* bpv__Pared2_3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_1"))
	UStaticMeshComponent* bpv__Pared1_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared2_2"))
	UStaticMeshComponent* bpv__Pared2_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared2_1"))
	UStaticMeshComponent* bpv__Pared2_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxCollision"))
	UBoxComponent* bpv__BoxCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Direcciones Con Puertas", Category="Default", MultiLine="true", OverrideNativeName="DireccionesConPuertas"))
	TArray<E__Direction__pf> bpv__DireccionesConPuertas__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Posicion Index", Category="Default", MultiLine="true", OverrideNativeName="PosicionIndex"))
	int32 bpv__PosicionIndex__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Posicion", Category="Default", MultiLine="true", OverrideNativeName="Posicion"))
	FPosicion__pf1773622777 bpv__Posicion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Textura Del Mini Mapa", Category="Default", MultiLine="true", OverrideNativeName="TexturaDelMiniMapa"))
	UTexture2D* bpv__TexturaDelMiniMapa__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ha Puesto Pared", Category="Default", MultiLine="true", OverrideNativeName="bHaPuestoPared"))
	bool bpv__bHaPuestoPared__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pared Sin Puerta", Category="Default", MultiLine="true", OverrideNativeName="ParedSinPuerta"))
	int32 bpv__ParedSinPuerta__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pared Sin Puerta 2", Category="Default", MultiLine="true", OverrideNativeName="ParedSinPuerta2"))
	int32 bpv__ParedSinPuerta2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Visibilidades", Category="Default", MultiLine="true", OverrideNativeName="Visibilidades"))
	TArray<bool> bpv__Visibilidades__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Initial Position", Category="Default", MultiLine="true", OverrideNativeName="InitialPosition"))
	FVector bpv__InitialPosition__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AVolumetrics_BP_C__pf2692903288*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AVolumetrics_BP_C__pf2692903288* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	E__Direction__pf b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_1"))
	E__Direction__pf b0l__Temp_byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_2"))
	E__Direction__pf b0l__Temp_byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_3"))
	E__Direction__pf b0l__Temp_byte_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_2"))
	int32 b0l__Temp_int_Array_Index_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMap"))
	UMap_C__pf2402407856* b0l__K2Node_DynamicCast_AsMap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	E__Direction__pf b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_x"))
	int32 b0l__K2Node_Event_x__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_y"))
	int32 b0l__K2Node_Event_y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Direction"))
	int32 b0l__K2Node_Event_Direction__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_Posicion"))
	FPosicion__pf1773622777 b0l__K2Node_MakeStruct_Posicion__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_4"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_4"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_2"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_2"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_3"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_3"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_1"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP_1"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMap_1"))
	UMap_C__pf2402407856* b0l__K2Node_DynamicCast_AsMap_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_2"))
	int32 b0l__Temp_int_Loop_Counter_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetChildrenComponents_Children"))
	TArray<USceneComponent*> b0l__CallFunc_GetChildrenComponents_Children__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	USceneComponent* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetChildrenComponents_Children_1"))
	TArray<USceneComponent*> b0l__CallFunc_GetChildrenComponents_Children_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	USceneComponent* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	bool b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_1"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_1"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_2"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_3"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorRelativeLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AVolumetrics_BP_C__pf2692903288*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	AVolumetrics_BP_C__pf2692903288* b0l__CallFunc_Array_Get_Item_5__pf;
	ANivel_Trampilla_C__pf626307183(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Nivel_Trampilla_8"))
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_Trampilla__pf_12(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Teleport1_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Teleport1_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Teleport_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Teleport_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Teleport_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Teleport_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HacerVisible"))
	virtual void bpf__HacerVisible__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HacerInvisible"))
	virtual void bpf__HacerInvisible__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PonerParedesAleatorias2"))
	virtual void bpf__PonerParedesAleatorias2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PonerParedesAleatorias"))
	virtual void bpf__PonerParedesAleatorias__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateDoors"))
	virtual void bpf__UpdateDoors__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetDirection"))
	virtual void bpf__SetDirection__pf(int32 bpp__Direction__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetPosition"))
	virtual void bpf__SetPosition__pf(int32 bpp__x__pf, int32 bpp__y__pf);
public:
};
