#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Direction__pf1773622777.h"
#include "Posicion__pf1773622777.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "IsolationUE4/Nivel.h"
class UPointLightComponent;
class UStaticMeshComponent;
class UDecalComponent;
class UBoxComponent;
class USceneComponent;
class UTexture2D;
class URectLightComponent;
class UChildActorComponent;
class AMainPlayerController_BP_C__pf1773622777;
class UMap_C__pf2402407856;
class UPrimitiveComponent;
class AActor;
class ATopDownCharacter_C__pf1773622777;
class AVolumetrics_BP_C__pf2692903288;
#include "Nivel_IMP0__pf626307183.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownCPP/Niveles/Nivel_IMP0.Nivel_IMP0_C", OverrideNativeName="Nivel_IMP0_C"))
class ANivel_IMP0_C__pf626307183 : public ANivel
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pared1_5"))
	UStaticMeshComponent* bpv__Pared1_5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo6"))
	UStaticMeshComponent* bpv__Suelo6__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo8"))
	UStaticMeshComponent* bpv__Suelo8__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo3"))
	UStaticMeshComponent* bpv__Suelo3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Suelo1"))
	UStaticMeshComponent* bpv__Suelo1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight01"))
	UPointLightComponent* bpv__PointLight01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight00"))
	UPointLightComponent* bpv__PointLight00__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Taquillas"))
	UChildActorComponent* bpv__Taquillas__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Laser08"))
	UChildActorComponent* bpv__Laser08__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Laser07"))
	UChildActorComponent* bpv__Laser07__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Laser06"))
	UChildActorComponent* bpv__Laser06__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Laser05"))
	UChildActorComponent* bpv__Laser05__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Laser04"))
	UChildActorComponent* bpv__Laser04__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Laser03"))
	UChildActorComponent* bpv__Laser03__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerdeRectangular5"))
	URectLightComponent* bpv__LuzVerdeRectangular5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerdeRectangular4"))
	URectLightComponent* bpv__LuzVerdeRectangular4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerdeRectangular3"))
	URectLightComponent* bpv__LuzVerdeRectangular3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerdeRectangular2"))
	URectLightComponent* bpv__LuzVerdeRectangular2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerdeRectangular1"))
	URectLightComponent* bpv__LuzVerdeRectangular1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerdeRectangular"))
	URectLightComponent* bpv__LuzVerdeRectangular__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxCollisionPlaca5"))
	UBoxComponent* bpv__BoxCollisionPlaca5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzRoja5"))
	UPointLightComponent* bpv__LuzRoja5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerde5"))
	UPointLightComponent* bpv__LuzVerde5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Placa5"))
	UStaticMeshComponent* bpv__Placa5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxCollisionPlaca4"))
	UBoxComponent* bpv__BoxCollisionPlaca4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzRoja4"))
	UPointLightComponent* bpv__LuzRoja4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerde4"))
	UPointLightComponent* bpv__LuzVerde4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Placa4"))
	UStaticMeshComponent* bpv__Placa4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxCollisionPlaca3"))
	UBoxComponent* bpv__BoxCollisionPlaca3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzRoja3"))
	UPointLightComponent* bpv__LuzRoja3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerde3"))
	UPointLightComponent* bpv__LuzVerde3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Placa3"))
	UStaticMeshComponent* bpv__Placa3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxCollisionPlaca2"))
	UBoxComponent* bpv__BoxCollisionPlaca2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzRoja2"))
	UPointLightComponent* bpv__LuzRoja2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerde2"))
	UPointLightComponent* bpv__LuzVerde2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Placa2"))
	UStaticMeshComponent* bpv__Placa2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxCollisionPlaca1"))
	UBoxComponent* bpv__BoxCollisionPlaca1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzRoja1"))
	UPointLightComponent* bpv__LuzRoja1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerde1"))
	UPointLightComponent* bpv__LuzVerde1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Placa1"))
	UStaticMeshComponent* bpv__Placa1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxCollisionPlaca0"))
	UBoxComponent* bpv__BoxCollisionPlaca0__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzRoja0"))
	UPointLightComponent* bpv__LuzRoja0__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LuzVerde0"))
	UPointLightComponent* bpv__LuzVerde0__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Placa0"))
	UStaticMeshComponent* bpv__Placa0__pf;
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Orden", Category="Default", MultiLine="true", OverrideNativeName="Orden"))
	TArray<int32> bpv__Orden__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Posicion De Placa Pisada", Category="Default", MultiLine="true", OverrideNativeName="PosicionDePlacaPisada"))
	int32 bpv__PosicionDePlacaPisada__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="En Animacion De Placas", Category="Default", MultiLine="true", OverrideNativeName="bEnAnimacionDePlacas"))
	bool bpv__bEnAnimacionDePlacas__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Numero AComprobar", Category="Default", MultiLine="true", OverrideNativeName="NumeroAComprobar"))
	int32 bpv__NumeroAComprobar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Placa Pisada 0", Category="Default", MultiLine="true", OverrideNativeName="PlacaPisada0"))
	bool bpv__PlacaPisada0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Placa Pisada 1", Category="Default", MultiLine="true", OverrideNativeName="PlacaPisada1"))
	bool bpv__PlacaPisada1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Placa Pisada 2", Category="Default", MultiLine="true", OverrideNativeName="PlacaPisada2"))
	bool bpv__PlacaPisada2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Placa Pisada 3", Category="Default", MultiLine="true", OverrideNativeName="PlacaPisada3"))
	bool bpv__PlacaPisada3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Placa Pisada 4", Category="Default", MultiLine="true", OverrideNativeName="PlacaPisada4"))
	bool bpv__PlacaPisada4__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Placa Pisada 5", Category="Default", MultiLine="true", OverrideNativeName="PlacaPisada5"))
	bool bpv__PlacaPisada5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	E__Direction__pf b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_1"))
	E__Direction__pf b0l__Temp_byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_2"))
	int32 b0l__Temp_int_Array_Index_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_2"))
	E__Direction__pf b0l__Temp_byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Player_Controller_BP"))
	AMainPlayerController_BP_C__pf1773622777* b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMap"))
	UMap_C__pf2402407856* b0l__K2Node_DynamicCast_AsMap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	E__Direction__pf b0l__CallFunc_Array_Get_Item__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_7"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_7"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_7"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_7"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_6"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_6"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_6"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_6"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_6"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_6"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	USceneComponent* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetChildrenComponents_Children_1"))
	TArray<USceneComponent*> b0l__CallFunc_GetChildrenComponents_Children_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	USceneComponent* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	bool b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_3"))
	E__Direction__pf b0l__Temp_byte_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_5"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_5"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_5"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_5"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_5"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_5"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_2"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	int32 b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_4"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_4"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_4"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_4"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_3"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess_1"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_3"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_3"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_3"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_3"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_4"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b0l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_2"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_2"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_5"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b0l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_1"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_1"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_6"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_10"))
	bool b0l__K2Node_DynamicCast_bSuccess_10__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character_7"))
	ATopDownCharacter_C__pf1773622777* b0l__K2Node_DynamicCast_AsTop_Down_Character_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_11"))
	bool b0l__K2Node_DynamicCast_bSuccess_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AVolumetrics_BP_C__pf2692903288*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AVolumetrics_BP_C__pf2692903288*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	AVolumetrics_BP_C__pf2692903288* b0l__CallFunc_Array_Get_Item_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_6"))
	AVolumetrics_BP_C__pf2692903288* b0l__CallFunc_Array_Get_Item_6__pf;
	ANivel_IMP0_C__pf626307183(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Nivel_IMP0_3"))
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Nivel_IMP0_11"))
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Nivel_IMP0__pf_18(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxCollisionPlaca5_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxCollisionPlaca5_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxCollisionPlaca4_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxCollisionPlaca4_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxCollisionPlaca3_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxCollisionPlaca3_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxCollisionPlaca2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxCollisionPlaca2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ComprobarPlaca"))
	virtual void bpf__ComprobarPlaca__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxCollisionPlaca1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxCollisionPlaca1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Resetear"))
	virtual void bpf__Resetear__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FinalizarPuzzle"))
	virtual void bpf__FinalizarPuzzle__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxCollisionPlaca0_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxCollisionPlaca0_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
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
