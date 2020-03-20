#include "NativizedAssets.h"
#include "StartMenu__pf2402407856.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcher.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "OptionsWidget__pf2402407856.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Public/IAmbisonicsMixer.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "MainPlayerController_BP__pf1773622777.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "UserSettings__pf267192470.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/UMG/Public/Components/Slider.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UStartMenu_C__pf2402407856::UStartMenu_C__pf2402407856(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UStartMenu_C__pf2402407856::StaticClass() == GetClass()))
	{
		UStartMenu_C__pf2402407856::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__BotonEmpezarPartida__pf = nullptr;
	bpv__BotonSalir__pf = nullptr;
	bpv__BotonSettings__pf = nullptr;
	bpv__BotonVolver__pf = nullptr;
	bpv__OptionsWidget__pf = nullptr;
	bpv__WidgetSwitcher_0__pf = nullptr;
	bpv__UserSettings__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UStartMenu_C__pf2402407856::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UStartMenu_C__pf2402407856::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AMainPlayerController_BP_C__pf1773622777::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUserSettings_C__pf267192470::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UOptionsWidget_C__pf2402407856::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(4);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 4);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("BotonVolver"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__BotonVolver_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("BotonSettings"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__BotonSettings_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("BotonSalir"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__BotonSalir_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("BotonEmpezarPartida"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__BotonEmpezarPartida_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"));
	auto __Local__6 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__6), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(1);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__6, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__8->LayoutData.Offsets.Left = -960.000000f;
	__Local__8->LayoutData.Offsets.Top = -540.000000f;
	__Local__8->LayoutData.Offsets.Right = 1918.666748f;
	__Local__8->LayoutData.Offsets.Bottom = 1075.333374f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__8->Parent = __Local__6;
	auto __Local__9 = NewObject<UWidgetSwitcher>(__Local__1, UWidgetSwitcher::StaticClass(), TEXT("WidgetSwitcher_0"), (EObjectFlags)0x00280008);
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(2);
	auto __Local__11 = NewObject<UWidgetSwitcherSlot>(__Local__9, UWidgetSwitcherSlot::StaticClass(), TEXT("WidgetSwitcherSlot_0"), (EObjectFlags)0x00280008);
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_31"), (EObjectFlags)0x00280008);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(3);
	auto __Local__14 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__14->Padding.Top = 20.000000f;
	__Local__14->Padding.Bottom = 20.000000f;
	__Local__14->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_23"), (EObjectFlags)0x00280008);
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(3);
	auto __Local__17 = NewObject<UHorizontalBoxSlot>(__Local__15, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__17->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__17->Parent = __Local__15;
	auto __Local__18 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_124"), (EObjectFlags)0x00280008);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	auto __Local__19 = NewObject<UHorizontalBoxSlot>(__Local__15, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__19->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__19->Parent = __Local__15;
	auto __Local__20 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("BotonEmpezarPartida"), (EObjectFlags)0x00280008);
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__20), UPanelWidget::__PPO__Slots() )));
	__Local__21 = TArray<UPanelSlot*> ();
	__Local__21.Reserve(1);
	auto __Local__22 = NewObject<UButtonSlot>(__Local__20, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__22->Parent = __Local__20;
	auto __Local__23 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_130"), (EObjectFlags)0x00280008);
	__Local__23->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[3B1E45CD42266FD229AF0B8F24634E27]\", \"395A38F04122A33FF798F5AF37483A60\", \"Empezar partida\")")	);
	auto& __Local__24 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__23->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__24 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__23->Font.Size = 30;
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__21.Add(__Local__22);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__16.Add(__Local__19);
	auto __Local__25 = NewObject<UHorizontalBoxSlot>(__Local__15, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__25->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__25->Parent = __Local__15;
	auto __Local__26 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_203"), (EObjectFlags)0x00280008);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__16.Add(__Local__25);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__27 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__27->Padding.Top = 20.000000f;
	__Local__27->Padding.Bottom = 20.000000f;
	__Local__27->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__27->Parent = __Local__12;
	auto __Local__28 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__29 = TArray<UPanelSlot*> ();
	__Local__29.Reserve(3);
	auto __Local__30 = NewObject<UHorizontalBoxSlot>(__Local__28, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__30->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__30->Parent = __Local__28;
	auto __Local__31 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_2"), (EObjectFlags)0x00280008);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__29.Add(__Local__30);
	auto __Local__32 = NewObject<UHorizontalBoxSlot>(__Local__28, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__32->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__32->Parent = __Local__28;
	auto __Local__33 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("BotonSettings"), (EObjectFlags)0x00280008);
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__33), UPanelWidget::__PPO__Slots() )));
	__Local__34 = TArray<UPanelSlot*> ();
	__Local__34.Reserve(1);
	auto __Local__35 = NewObject<UButtonSlot>(__Local__33, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__35->Parent = __Local__33;
	auto __Local__36 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__36->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[3B1E45CD42266FD229AF0B8F24634E27]\", \"55249C224F94BA10291335A169DAD815\", \"Settings\")")	);
	auto& __Local__37 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__36->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__37 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__36->Font.Size = 30;
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__34.Add(__Local__35);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__29.Add(__Local__32);
	auto __Local__38 = NewObject<UHorizontalBoxSlot>(__Local__28, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__38->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__38->Parent = __Local__28;
	auto __Local__39 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_3"), (EObjectFlags)0x00280008);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__29.Add(__Local__38);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__13.Add(__Local__27);
	auto __Local__40 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__40->Padding.Top = 20.000000f;
	__Local__40->Padding.Bottom = 20.000000f;
	__Local__40->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__40->Parent = __Local__12;
	auto __Local__41 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox"), (EObjectFlags)0x00280008);
	auto& __Local__42 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__41), UPanelWidget::__PPO__Slots() )));
	__Local__42 = TArray<UPanelSlot*> ();
	__Local__42.Reserve(3);
	auto __Local__43 = NewObject<UHorizontalBoxSlot>(__Local__41, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__43->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__43->Parent = __Local__41;
	auto __Local__44 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer"), (EObjectFlags)0x00280008);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__42.Add(__Local__43);
	auto __Local__45 = NewObject<UHorizontalBoxSlot>(__Local__41, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__45->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__45->Parent = __Local__41;
	auto __Local__46 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("BotonSalir"), (EObjectFlags)0x00280008);
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__46), UPanelWidget::__PPO__Slots() )));
	__Local__47 = TArray<UPanelSlot*> ();
	__Local__47.Reserve(1);
	auto __Local__48 = NewObject<UButtonSlot>(__Local__46, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__48->Parent = __Local__46;
	auto __Local__49 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_273"), (EObjectFlags)0x00280008);
	__Local__49->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[3B1E45CD42266FD229AF0B8F24634E27]\", \"C456E6FD45B2ED61FAA6F993EBB58F1A\", \"Salir\")")	);
	auto& __Local__50 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__49->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__50 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__49->Font.Size = 30;
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__47.Add(__Local__48);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__42.Add(__Local__45);
	auto __Local__51 = NewObject<UHorizontalBoxSlot>(__Local__41, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__51->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__51->Parent = __Local__41;
	auto __Local__52 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_1"), (EObjectFlags)0x00280008);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__42.Add(__Local__51);
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__13.Add(__Local__40);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	auto __Local__53 = NewObject<UWidgetSwitcherSlot>(__Local__9, UWidgetSwitcherSlot::StaticClass(), TEXT("WidgetSwitcherSlot_1"), (EObjectFlags)0x00280008);
	__Local__53->Parent = __Local__9;
	auto __Local__54 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__54), UPanelWidget::__PPO__Slots() )));
	__Local__55 = TArray<UPanelSlot*> ();
	__Local__55.Reserve(2);
	auto __Local__56 = NewObject<UVerticalBoxSlot>(__Local__54, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__56->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__56->Parent = __Local__54;
	UOptionsWidget_C__pf2402407856::StaticClass()->GetDefaultObject();
	auto __Local__57 = NewObject<UOptionsWidget_C__pf2402407856>(__Local__1, UOptionsWidget_C__pf2402407856::StaticClass(), TEXT("OptionsWidget"), (EObjectFlags)0x00280008);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__55.Add(__Local__56);
	auto __Local__58 = NewObject<UVerticalBoxSlot>(__Local__54, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__58->Size.Value = 0.050000f;
	__Local__58->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__58->Parent = __Local__54;
	auto __Local__59 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_107"), (EObjectFlags)0x00280008);
	auto& __Local__60 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__59), UPanelWidget::__PPO__Slots() )));
	__Local__60 = TArray<UPanelSlot*> ();
	__Local__60.Reserve(2);
	auto __Local__61 = NewObject<UHorizontalBoxSlot>(__Local__59, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__61->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__61->Parent = __Local__59;
	auto __Local__62 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("BotonVolver"), (EObjectFlags)0x00280008);
	auto& __Local__63 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__62), UPanelWidget::__PPO__Slots() )));
	__Local__63 = TArray<UPanelSlot*> ();
	__Local__63.Reserve(1);
	auto __Local__64 = NewObject<UButtonSlot>(__Local__62, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__64->Parent = __Local__62;
	auto __Local__65 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_143"), (EObjectFlags)0x00280008);
	__Local__65->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[3B1E45CD42266FD229AF0B8F24634E27]\", \"56E630A84B93A6F09D7993BF67C417F2\", \"Volver\")")	);
	auto& __Local__66 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__65->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__66 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__65->Slot = __Local__64;
	__Local__64->Content = __Local__65;
	__Local__63.Add(__Local__64);
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__60.Add(__Local__61);
	auto __Local__67 = NewObject<UHorizontalBoxSlot>(__Local__59, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__67->Size.Value = 3.000000f;
	__Local__67->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__67->Parent = __Local__59;
	auto __Local__68 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_75"), (EObjectFlags)0x00280008);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__60.Add(__Local__67);
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__55.Add(__Local__58);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__10.Add(__Local__53);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	__Local__1->RootWidget = __Local__6;
}
PRAGMA_ENABLE_OPTIMIZATION
void UStartMenu_C__pf2402407856::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__69;
	SlotNames.Append(__Local__69);
}
void UStartMenu_C__pf2402407856::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__70;
	TArray<FDelegateRuntimeBinding>  __Local__71;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UStartMenu_C__pf2402407856::StaticClass())->MiscConvertedSubobjects[0]), __Local__70, __Local__71);
}
void UStartMenu_C__pf2402407856::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UStartMenu_C__pf2402407856::bpf__ExecuteUbergraph_StartMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	UUserSettings_C__pf267192470* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__WidgetSwitcher_0__pf))
	{
		bpv__WidgetSwitcher_0__pf->SetActiveWidgetIndex(0);
	}
	bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<UUserSettings_C__pf267192470>(UGameplayStatics::CreateSaveGameObject(UUserSettings_C__pf267192470::StaticClass()), ECastCheckedType::NullAllowed);
	bpv__UserSettings__pf = bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf;
	float  __Local__72 = 0.000000;
	if(::IsValid(bpv__UserSettings__pf))
	{
		bpv__UserSettings__pf->bpv__VolumenMusica__pf = ((::IsValid(bpv__OptionsWidget__pf)) ? (bpv__OptionsWidget__pf->bpv__VolumenMusica__pf) : (__Local__72));
	}
	float  __Local__73 = 0.000000;
	if(::IsValid(bpv__UserSettings__pf))
	{
		bpv__UserSettings__pf->bpv__VolumenSonido__pf = ((::IsValid(bpv__OptionsWidget__pf)) ? (bpv__OptionsWidget__pf->bpv__VolumenSonido__pf) : (__Local__73));
	}
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpv__UserSettings__pf, FString(TEXT("UserSettings")), 0);
	UKismetSystemLibrary::PrintString(this, FString(TEXT("UserSettings guardadas")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	return; // KCST_GotoReturn
}
void UStartMenu_C__pf2402407856::bpf__ExecuteUbergraph_StartMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf = Cast<AMainPlayerController_BP_C__pf1773622777>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf))
				{
					float  __Local__74 = 0.000000;
					float  __Local__75 = 0.000000;
					b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf->bpf__CambiarVolumen__pf(((::IsValid(bpv__OptionsWidget__pf)) ? (bpv__OptionsWidget__pf->bpv__VolumenMusica__pf) : (__Local__74)), ((::IsValid(bpv__OptionsWidget__pf)) ? (bpv__OptionsWidget__pf->bpv__VolumenSonido__pf) : (__Local__75)));
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				if(::IsValid(bpv__WidgetSwitcher_0__pf))
				{
					bpv__WidgetSwitcher_0__pf->SetActiveWidgetIndex(1);
				}
			}
		case 12:
			{
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("UserSettings")), 0);
			}
		case 13:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 14:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("UserSettings")), 0);
			}
		case 15:
			{
				b0l__K2Node_DynamicCast_AsUser_Settings__pf = Cast<UUserSettings_C__pf267192470>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsUser_Settings__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 16:
			{
				float  __Local__76 = 0.000000;
				if(::IsValid(bpv__OptionsWidget__pf))
				{
					bpv__OptionsWidget__pf->bpv__VolumenMusica__pf = ((::IsValid(b0l__K2Node_DynamicCast_AsUser_Settings__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Settings__pf->bpv__VolumenMusica__pf) : (__Local__76));
				}
			}
		case 17:
			{
				if(::IsValid(bpv__OptionsWidget__pf) && ::IsValid(bpv__OptionsWidget__pf->bpv__Slider2__pf))
				{
					float  __Local__77 = 0.000000;
					bpv__OptionsWidget__pf->bpv__Slider2__pf->USlider::SetValue(((::IsValid(b0l__K2Node_DynamicCast_AsUser_Settings__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Settings__pf->bpv__VolumenMusica__pf) : (__Local__77)));
				}
			}
		case 18:
			{
				float  __Local__78 = 0.000000;
				if(::IsValid(bpv__OptionsWidget__pf))
				{
					bpv__OptionsWidget__pf->bpv__VolumenSonido__pf = ((::IsValid(b0l__K2Node_DynamicCast_AsUser_Settings__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Settings__pf->bpv__VolumenSonido__pf) : (__Local__78));
				}
			}
		case 19:
			{
				if(::IsValid(bpv__OptionsWidget__pf) && ::IsValid(bpv__OptionsWidget__pf->bpv__Slide1__pf))
				{
					float  __Local__79 = 0.000000;
					bpv__OptionsWidget__pf->bpv__Slide1__pf->USlider::SetValue(((::IsValid(b0l__K2Node_DynamicCast_AsUser_Settings__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Settings__pf->bpv__VolumenSonido__pf) : (__Local__79)));
				}
				__CurrentState = 1;
				break;
			}
		case 20:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("No Hay  UserSettings")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UStartMenu_C__pf2402407856::bpf__ExecuteUbergraph_StartMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::OpenLevel(this, FName(TEXT("GameplayMap")), true, FString(TEXT("")));
	return; // KCST_GotoReturn
}
void UStartMenu_C__pf2402407856::bpf__ExecuteUbergraph_StartMenu__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::QuitGame(this, ((APlayerController*)nullptr), EQuitPreference::Quit, false);
	return; // KCST_GotoReturn
}
void UStartMenu_C__pf2402407856::bpf__BndEvt__BotonVolver_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartMenu__pf_0(21);
}
void UStartMenu_C__pf2402407856::bpf__BndEvt__BotonSettings_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartMenu__pf_1(10);
}
void UStartMenu_C__pf2402407856::bpf__BndEvt__BotonSalir_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartMenu__pf_3(9);
}
void UStartMenu_C__pf2402407856::bpf__BndEvt__BotonEmpezarPartida_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartMenu__pf_2(7);
}
PRAGMA_DISABLE_OPTIMIZATION
void UStartMenu_C__pf2402407856::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UStartMenu_C__pf2402407856::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{87, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Slider 
		{55, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{89, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameUserSettings 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{56, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.MainPlayerController 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/TopDownCPP/Player/Animations/PlayerAnimMontage.PlayerAnimMontage 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.IsolationUE4Character 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/HUD/KeyTransparente.KeyTransparente 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_PAredPuerta.Set_Room_1_PAredPuerta 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_ParedSimple001.Set_Room_1_ParedSimple001 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_ParedSimple003.Set_Room_1_ParedSimple003 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PointLightComponent 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_SueloLow.Set_Room_1_SueloLow 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Scene/Texture/Alice/SueloParedes.SueloParedes 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Locker.Set_Assets_1_Locker 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.Nivel 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Rojo.Rojo 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/TopDownCPP/Player/Animations/RunWalkBlendSpace.RunWalkBlendSpace 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.Interactuable 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/TopDownCPP/Player/Mesh/Alicia_Personaje.Alicia_Personaje 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Scene/Texture/Alice/AlicePersonaje.AlicePersonaje 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/TopDownCPP/Player/Mesh/Alicia_Personaje_Skeleton.Alicia_Personaje_Skeleton 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SaveCachedPose 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_UseCachedPose 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineMeshes/Sphere.Sphere 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/AmarilloSalida.AmarilloSalida 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/11.11 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/12.12 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/13.13 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/14.14 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/15.15 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/16.16 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.GridPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Azulito.Azulito 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Verde.Verde 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/1.1 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/2.2 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/3.3 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/4.4 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/5.5 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/6.6 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/7.7 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/8.8 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/9.9 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/10.10 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/TopDownCPP/Effects/VolumetricGas/VolumetricGas_Inst.VolumetricGas_Inst 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_VerdeEmisivo.M_VerdeEmisivo 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_RojoEmisivo.M_RojoEmisivo 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_YellowOnly.VertexColorViewMode_YellowOnly 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_Negro.M_Negro 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_AzulEmisivo.M_AzulEmisivo 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_RedOnly.VertexColorViewMode_RedOnly 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_Sierra.M_Sierra 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_BlueOnly.VertexColorViewMode_BlueOnly 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultDecalMaterial.DefaultDecalMaterial 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Laptop.Set_Assets_1_Laptop 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Silla.Set_Assets_1_Silla 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Files.Set_Assets_1_Files 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Table.Set_Assets_1_Table 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Cajon.Set_Assets_1_Cajon 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_Box007.Set_Room_1_Box007 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Box.Set_Assets_1_Box 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Gris.Gris 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Barrel.Set_Assets_1_Barrel 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineMeshes/Cube.Cube 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Scene/Texture/Alice/DeadBody.DeadBody 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Rojizo.Rojizo 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/saw.saw 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.RectLightComponent 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_GreenOnly.VertexColorViewMode_GreenOnly 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Blueprints/MainPlayerController_BP.MainPlayerController_BP_C 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/SavesInstances/UserSettings.UserSettings_C 
		{160, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/OptionsWidget.OptionsWidget_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UStartMenu_C__pf2402407856
{
	FRegisterHelper__UStartMenu_C__pf2402407856()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownCPP/HUD/StartMenu"), &UStartMenu_C__pf2402407856::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UStartMenu_C__pf2402407856 Instance;
};
FRegisterHelper__UStartMenu_C__pf2402407856 FRegisterHelper__UStartMenu_C__pf2402407856::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
