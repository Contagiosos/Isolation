#include "NativizedAssets.h"
#include "Nivel_SalaTarjeta02__pf626307183.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
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
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
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
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
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
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
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
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
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
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "DesktopSearch_BP__pf479927698.h"
#include "Volumetrics_BP__pf2692903288.h"
#include "MainPlayerController_BP__pf1773622777.h"
#include "Map__pf2402407856.h"
#include "TopDownCharacter__pf1773622777.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Ahogamiento__pf2402407856.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "IsolationUE4/MainPlayerController.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ANivel_SalaTarjeta02_C__pf626307183::ANivel_SalaTarjeta02_C__pf626307183(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ANivel_SalaTarjeta02_C__pf626307183::StaticClass() == GetClass()))
	{
		ANivel_SalaTarjeta02_C__pf626307183::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__BoxCollision__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	bpv__Pared2_1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared2_1"));
	bpv__Pared2_2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared2_2"));
	bpv__Pared1_1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_1"));
	bpv__Pared2_3__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared2_3"));
	bpv__Pared2_4__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared2_4"));
	bpv__Pared1_3__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_3"));
	bpv__Pared1_4__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_4"));
	bpv__ResplandorPuertaIzquierda__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("ResplandorPuertaIzquierda"));
	bpv__ResplandorPuertaAbajo__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("ResplandorPuertaAbajo"));
	bpv__Pared1_1SinPuerta__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_1SinPuerta"));
	bpv__Pared1_1SinPuerta2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_1SinPuerta2"));
	bpv__Pared1_2SinPuerta1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_2SinPuerta1"));
	bpv__Pared1_2SinPuerta2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_2SinPuerta2"));
	bpv__Pared2_3SinPuerta__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared2_3SinPuerta"));
	bpv__Pared1_4SinPuerta__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_4SinPuerta"));
	bpv__PointLight01__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight01"));
	bpv__PointLight00__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight00"));
	bpv__Suelo1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suelo1"));
	bpv__Suelo5__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suelo5"));
	bpv__Suelo8__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suelo8"));
	bpv__Suelo6__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suelo6"));
	bpv__Pared1_5__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_5"));
	bpv__Portatil__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Portatil"));
	bpv__Silla__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Silla"));
	bpv__Silla1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Silla1"));
	bpv__Armario__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Armario"));
	bpv__Armario1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Armario1"));
	bpv__Armario2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Armario2"));
	bpv__Table__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Table"));
	bpv__Table1__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Table1"));
	bpv__Portatil1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Portatil1"));
	bpv__Pilar__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pilar"));
	bpv__Caja__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Caja"));
	bpv__Table2__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Table2"));
	bpv__Portatil2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Portatil2"));
	bpv__Silla2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Silla2"));
	RootComponent = bpv__Scene__pf;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakObjectPtr<UProperty> __Local__1{};
	const UProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Scene__pf), false, 0));
	bpv__BoxCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BoxCollision__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__BoxCollision__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__BoxCollision__pf->RelativeLocation = FVector(82.768776, 37.585552, 29.653030);
	bpv__BoxCollision__pf->RelativeScale3D = FVector(17.189848, 17.227812, 1.000000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__BoxCollision__pf), true, 0));
	bpv__Pared2_1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared2_1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared2_1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Pared2_1__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Pared2_1__pf->RelativeLocation = FVector(-277.779388, -295.633362, 18.765511);
	bpv__Pared2_1__pf->RelativeRotation = FRotator(0.000000, -90.000130, 0.000000);
	bpv__Pared2_1__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	bpv__Pared2_1__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_1__pf), true, 0));
	bpv__Pared2_2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared2_2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared2_2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__3 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared2_2__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared2_2__pf->RelativeLocation = FVector(329.606262, -295.854004, 18.765358);
	bpv__Pared2_2__pf->RelativeRotation = FRotator(0.000000, 0.000233, 0.000000);
	bpv__Pared2_2__pf->RelativeScale3D = FVector(4.436866, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_2__pf), true, 0));
	bpv__Pared1_1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__4 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__4 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Pared1_1__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Pared1_1__pf->RelativeLocation = FVector(-251.210678, 388.518738, 18.765724);
	bpv__Pared1_1__pf->RelativeRotation = FRotator(0.000000, -180.000305, 0.000000);
	bpv__Pared1_1__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	bpv__Pared1_1__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_1__pf), true, 0));
	bpv__Pared2_3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared2_3__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared2_3__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__5 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Pared2_3__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Pared2_3__pf->RelativeLocation = FVector(-280.424896, 692.187927, 18.757057);
	bpv__Pared2_3__pf->RelativeRotation = FRotator(0.000000, -90.000130, 0.000000);
	bpv__Pared2_3__pf->RelativeScale3D = FVector(0.977137, 3.081391, 3.081391);
	bpv__Pared2_3__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_3__pf), true, 0));
	bpv__Pared2_4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared2_4__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared2_4__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__6 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared2_4__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared2_4__pf->RelativeLocation = FVector(301.998108, 547.798279, 18.757301);
	bpv__Pared2_4__pf->RelativeRotation = FRotator(0.000000, -180.000259, 0.000000);
	bpv__Pared2_4__pf->RelativeScale3D = FVector(4.536727, 0.870273, 3.081391);
	bpv__Pared2_4__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_4__pf), true, 0));
	bpv__Pared1_3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_3__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__7 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_3__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__7 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_3__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_3__pf->RelativeLocation = FVector(588.161865, -241.566162, 19.651897);
	bpv__Pared1_3__pf->RelativeRotation = FRotator(0.000000, -270.000580, 0.000000);
	bpv__Pared1_3__pf->RelativeScale3D = FVector(4.191712, 0.881232, 3.081391);
	bpv__Pared1_3__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_3__pf), true, 0));
	bpv__Pared1_4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_4__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_4__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__8 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Pared1_4__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Pared1_4__pf->RelativeLocation = FVector(704.064270, 385.001373, 18.770851);
	bpv__Pared1_4__pf->RelativeRotation = FRotator(0.000000, -180.000305, 0.000000);
	bpv__Pared1_4__pf->RelativeScale3D = FVector(0.597747, 3.225201, 3.081391);
	bpv__Pared1_4__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_4__pf), true, 0));
	bpv__ResplandorPuertaIzquierda__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ResplandorPuertaIzquierda__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__9 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__ResplandorPuertaIzquierda__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__9 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__ResplandorPuertaIzquierda__pf->RelativeLocation = FVector(-236.069000, 555.046204, -0.475220);
	bpv__ResplandorPuertaIzquierda__pf->RelativeRotation = FRotator(0.000000, -90.000183, 0.000000);
	bpv__ResplandorPuertaIzquierda__pf->RelativeScale3D = FVector(0.517991, 0.326268, 0.088755);
	bpv__ResplandorPuertaIzquierda__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ResplandorPuertaIzquierda__pf), false, 0));
	bpv__ResplandorPuertaAbajo__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ResplandorPuertaAbajo__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__10 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__ResplandorPuertaAbajo__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__10 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__ResplandorPuertaAbajo__pf->RelativeLocation = FVector(600.987305, 341.114655, -1.703728);
	bpv__ResplandorPuertaAbajo__pf->RelativeScale3D = FVector(0.517991, 0.326268, 0.088755);
	bpv__ResplandorPuertaAbajo__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ResplandorPuertaAbajo__pf), false, 0));
	bpv__Pared1_1SinPuerta__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_1SinPuerta__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_1SinPuerta__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__11 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_1SinPuerta__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_1SinPuerta__pf->RelativeLocation = FVector(-247.516571, 372.664673, 18.765480);
	bpv__Pared1_1SinPuerta__pf->RelativeRotation = FRotator(0.000000, -89.999947, 0.000000);
	bpv__Pared1_1SinPuerta__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_1SinPuerta__pf), true, 0));
	bpv__Pared1_1SinPuerta2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_1SinPuerta2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_1SinPuerta2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__12 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Pared1_1SinPuerta2__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_1SinPuerta2__pf->RelativeLocation = FVector(-247.517319, -116.661621, 18.765480);
	bpv__Pared1_1SinPuerta2__pf->RelativeRotation = FRotator(0.000000, -89.999947, 0.000000);
	bpv__Pared1_1SinPuerta2__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_1SinPuerta2__pf), true, 0));
	bpv__Pared1_2SinPuerta1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_2SinPuerta1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__13 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_2SinPuerta1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__13 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_2SinPuerta1__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_2SinPuerta1__pf->RelativeLocation = FVector(-266.165558, -293.034973, 18.765480);
	bpv__Pared1_2SinPuerta1__pf->RelativeRotation = FRotator(0.000000, 0.000340, 0.000000);
	bpv__Pared1_2SinPuerta1__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_2SinPuerta1__pf), true, 0));
	bpv__Pared1_2SinPuerta2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_2SinPuerta2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_2SinPuerta2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__14 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Pared1_2SinPuerta2__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_2SinPuerta2__pf->RelativeLocation = FVector(219.905197, -295.855591, 18.765602);
	bpv__Pared1_2SinPuerta2__pf->RelativeRotation = FRotator(0.000000, 0.000566, 0.000000);
	bpv__Pared1_2SinPuerta2__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_2SinPuerta2__pf), true, 0));
	bpv__Pared2_3SinPuerta__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared2_3SinPuerta__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__15 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared2_3SinPuerta__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__15 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared2_3SinPuerta__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared2_3SinPuerta__pf->RelativeLocation = FVector(-113.356880, 549.464905, 18.753334);
	bpv__Pared2_3SinPuerta__pf->RelativeRotation = FRotator(0.000000, -180.000305, 0.000000);
	bpv__Pared2_3SinPuerta__pf->RelativeScale3D = FVector(4.749237, 0.844680, 3.081391);
	bpv__Pared2_3SinPuerta__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_3SinPuerta__pf), true, 0));
	bpv__Pared1_4SinPuerta__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_4SinPuerta__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__16 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_4SinPuerta__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__16 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_4SinPuerta__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_4SinPuerta__pf->RelativeLocation = FVector(582.147156, 277.765686, 18.770912);
	bpv__Pared1_4SinPuerta__pf->RelativeRotation = FRotator(0.000000, -270.000671, 0.000000);
	bpv__Pared1_4SinPuerta__pf->RelativeScale3D = FVector(4.414577, 0.958531, 3.081391);
	bpv__Pared1_4SinPuerta__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_4SinPuerta__pf), true, 0));
	bpv__PointLight01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointLight01__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointLight01__pf->AttenuationRadius = 2000.000000f;
	bpv__PointLight01__pf->Intensity = 6000.000000f;
	bpv__PointLight01__pf->LightColor = FColor(134, 173, 160, 255);
	bpv__PointLight01__pf->RelativeLocation = FVector(214.395355, 170.545441, 546.885620);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__PointLight01__pf), false, 0));
	bpv__PointLight00__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointLight00__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointLight00__pf->AttenuationRadius = 2000.000000f;
	bpv__PointLight00__pf->Intensity = 2000.000000f;
	bpv__PointLight00__pf->LightColor = FColor(144, 196, 255, 255);
	bpv__PointLight00__pf->RelativeLocation = FVector(-150.805756, -161.111542, 520.568420);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__PointLight00__pf), false, 0));
	bpv__Suelo1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Suelo1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__17 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Suelo1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__17 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__Suelo1__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Suelo1__pf->OverrideMaterials.Reserve(1);
	bpv__Suelo1__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__Suelo1__pf->RelativeLocation = FVector(-170.403229, 328.541046, 20.480724);
	bpv__Suelo1__pf->RelativeScale3D = FVector(3.733099, 3.622435, 1.739689);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Suelo1__pf), true, 0));
	bpv__Suelo5__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Suelo5__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Suelo5__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__18 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__Suelo5__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Suelo5__pf->OverrideMaterials.Reserve(1);
	bpv__Suelo5__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__Suelo5__pf->RelativeLocation = FVector(-171.197052, -247.762726, 20.483654);
	bpv__Suelo5__pf->RelativeScale3D = FVector(3.733099, 3.666884, 1.739689);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Suelo5__pf), true, 0));
	bpv__Suelo8__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Suelo8__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__19 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Suelo8__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__19 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__Suelo8__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Suelo8__pf->OverrideMaterials.Reserve(1);
	bpv__Suelo8__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__Suelo8__pf->RelativeLocation = FVector(419.283997, 328.541046, 20.480663);
	bpv__Suelo8__pf->RelativeScale3D = FVector(3.733099, 3.622435, 1.739689);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Suelo8__pf), true, 0));
	bpv__Suelo6__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Suelo6__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__20 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Suelo6__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__20 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__Suelo6__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Suelo6__pf->OverrideMaterials.Reserve(1);
	bpv__Suelo6__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__Suelo6__pf->RelativeLocation = FVector(419.634521, -247.762726, 20.483654);
	bpv__Suelo6__pf->RelativeScale3D = FVector(3.733099, 3.666884, 1.739689);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Suelo6__pf), true, 0));
	bpv__Pared1_5__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_5__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__21 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_5__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__21 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_5__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_5__pf->RelativeLocation = FVector(-250.549057, -198.180252, 19.647747);
	bpv__Pared1_5__pf->RelativeRotation = FRotator(0.000000, -90.000015, 0.000000);
	bpv__Pared1_5__pf->RelativeScale3D = FVector(4.101492, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_5__pf), true, 0));
	bpv__Portatil__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Portatil__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__22 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Portatil__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__22 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Portatil__pf->RelativeLocation = FVector(185.266998, -467.918213, 28.371780);
	bpv__Portatil__pf->RelativeRotation = FRotator(0.000000, 60.000092, 0.000000);
	bpv__Portatil__pf->RelativeScale3D = FVector(2.439706, 2.439706, 2.439706);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Portatil__pf), true, 0));
	bpv__Silla__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Silla__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__23 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Silla__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__23 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__Silla__pf->RelativeLocation = FVector(65.940491, -396.831848, 27.073517);
	bpv__Silla__pf->RelativeRotation = FRotator(0.000000, 60.000092, 0.000000);
	bpv__Silla__pf->RelativeScale3D = FVector(3.000000, 3.000000, 3.000000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Silla__pf), true, 0));
	bpv__Silla1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Silla1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__24 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Silla1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__24 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__Silla1__pf->RelativeLocation = FVector(111.409485, 17.262634, 27.073517);
	bpv__Silla1__pf->RelativeRotation = FRotator(69.999664, 710.000488, 540.000000);
	bpv__Silla1__pf->RelativeScale3D = FVector(3.000000, 3.000000, 3.000000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Silla1__pf), true, 0));
	bpv__Armario__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Armario__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__25 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Armario__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__25 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__Armario__pf->RelativeLocation = FVector(-461.363831, -256.043030, -49.268280);
	bpv__Armario__pf->RelativeRotation = FRotator(-0.000793, 270.000031, 90.000061);
	bpv__Armario__pf->RelativeScale3D = FVector(2.518837, 2.518837, 2.518837);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Armario__pf), true, 0));
	bpv__Armario1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Armario1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__26 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Armario1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__26 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__Armario1__pf->RelativeLocation = FVector(-297.481812, -362.645050, 165.382263);
	bpv__Armario1__pf->RelativeRotation = FRotator(40.000111, 270.000824, 0.000167);
	bpv__Armario1__pf->RelativeScale3D = FVector(2.518837, 2.518837, 2.518837);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Armario1__pf), true, 0));
	bpv__Armario2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Armario2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__27 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Armario2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__27 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__Armario2__pf->RelativeLocation = FVector(80.059158, 318.225769, 17.096851);
	bpv__Armario2__pf->RelativeRotation = FRotator(0.000237, -129.999252, 359.999969);
	bpv__Armario2__pf->RelativeScale3D = FVector(2.518837, 2.518837, 2.518837);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Armario2__pf), true, 0));
	bpv__Table__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Table__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__28 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Table__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__28 = ADesktopSearch_BP_C__pf479927698::StaticClass();
	auto& __Local__29 = (*(AccessPrivateProperty<AActor* >((bpv__Table__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__29 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->MiscConvertedSubobjects[0]);
	bpv__Table__pf->RelativeLocation = FVector(204.489609, -328.979004, 21.409691);
	bpv__Table__pf->RelativeScale3D = FVector(1.200000, 1.200000, 1.200000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Table__pf), false, 0));
	bpv__Table1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Table1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__30 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Table1__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__30 = ADesktopSearch_BP_C__pf479927698::StaticClass();
	auto& __Local__31 = (*(AccessPrivateProperty<AActor* >((bpv__Table1__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__31 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->MiscConvertedSubobjects[1]);
	bpv__Table1__pf->RelativeLocation = FVector(522.801575, -232.071365, 21.409691);
	bpv__Table1__pf->RelativeRotation = FRotator(0.000000, 90.000229, 0.000000);
	bpv__Table1__pf->RelativeScale3D = FVector(1.200000, 1.200000, 1.200000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Table1__pf), false, 0));
	bpv__Portatil1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Portatil1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__32 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Portatil1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__32 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Portatil1__pf->RelativeLocation = FVector(563.155090, -169.726288, 27.123230);
	bpv__Portatil1__pf->RelativeRotation = FRotator(0.000000, 29.999847, 0.000000);
	bpv__Portatil1__pf->RelativeScale3D = FVector(2.439706, 2.439706, 2.439706);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Portatil1__pf), true, 0));
	bpv__Pilar__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pilar__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__33 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pilar__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__33 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__Pilar__pf->RelativeLocation = FVector(-209.526917, 695.787415, -234.405609);
	bpv__Pilar__pf->RelativeRotation = FRotator(-59.999630, -249.999390, -180.000061);
	bpv__Pilar__pf->RelativeScale3D = FVector(2.537385, 2.537385, 3.049057);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pilar__pf), true, 0));
	bpv__Caja__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Caja__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__34 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Caja__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__34 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpv__Caja__pf->RelativeLocation = FVector(5.777980, 373.194672, 183.741013);
	bpv__Caja__pf->RelativeScale3D = FVector(2.578126, 2.578126, 2.500000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Caja__pf), true, 0));
	bpv__Table2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Table2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__35 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Table2__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__35 = ADesktopSearch_BP_C__pf479927698::StaticClass();
	auto& __Local__36 = (*(AccessPrivateProperty<AActor* >((bpv__Table2__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__36 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->MiscConvertedSubobjects[2]);
	bpv__Table2__pf->RelativeLocation = FVector(458.874573, -328.979187, 21.409691);
	bpv__Table2__pf->RelativeScale3D = FVector(1.200000, 1.200000, 1.200000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Table2__pf), false, 0));
	bpv__Portatil2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Portatil2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__37 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Portatil2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__37 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Portatil2__pf->RelativeLocation = FVector(563.155029, -618.427856, 101.657318);
	bpv__Portatil2__pf->RelativeRotation = FRotator(-23.315567, -16.631378, 154.604950);
	bpv__Portatil2__pf->RelativeScale3D = FVector(2.439706, 2.439706, 2.439706);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Portatil2__pf), true, 0));
	bpv__Silla2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Silla2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__38 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Silla2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__38 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__Silla2__pf->RelativeLocation = FVector(546.616211, -431.273254, 19.170639);
	bpv__Silla2__pf->RelativeRotation = FRotator(0.000000, 50.000061, 0.000000);
	bpv__Silla2__pf->RelativeScale3D = FVector(3.000000, 3.000000, 3.000000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Silla2__pf), true, 0));
	bpv__DireccionesConPuertas__pf = TArray<E__Direction__pf> ();
	bpv__PosicionIndex__pf = 0;
	bpv__TexturaDelMiniMapa__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpv__bHaPuestoPared__pf = false;
	bpv__ParedSinPuerta__pf = 0;
	bpv__ParedSinPuerta2__pf = 0;
	bpv__Visibilidades__pf = TArray<bool> ();
}
PRAGMA_ENABLE_OPTIMIZATION
void ANivel_SalaTarjeta02_C__pf626307183::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BoxCollision__pf)
	{
		bpv__BoxCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared2_1__pf)
	{
		bpv__Pared2_1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared2_2__pf)
	{
		bpv__Pared2_2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_1__pf)
	{
		bpv__Pared1_1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared2_3__pf)
	{
		bpv__Pared2_3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared2_4__pf)
	{
		bpv__Pared2_4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_3__pf)
	{
		bpv__Pared1_3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_4__pf)
	{
		bpv__Pared1_4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ResplandorPuertaIzquierda__pf)
	{
		bpv__ResplandorPuertaIzquierda__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ResplandorPuertaAbajo__pf)
	{
		bpv__ResplandorPuertaAbajo__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_1SinPuerta__pf)
	{
		bpv__Pared1_1SinPuerta__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_1SinPuerta2__pf)
	{
		bpv__Pared1_1SinPuerta2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_2SinPuerta1__pf)
	{
		bpv__Pared1_2SinPuerta1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_2SinPuerta2__pf)
	{
		bpv__Pared1_2SinPuerta2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared2_3SinPuerta__pf)
	{
		bpv__Pared2_3SinPuerta__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_4SinPuerta__pf)
	{
		bpv__Pared1_4SinPuerta__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight01__pf)
	{
		bpv__PointLight01__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight00__pf)
	{
		bpv__PointLight00__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Suelo1__pf)
	{
		bpv__Suelo1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Suelo5__pf)
	{
		bpv__Suelo5__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Suelo8__pf)
	{
		bpv__Suelo8__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Suelo6__pf)
	{
		bpv__Suelo6__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_5__pf)
	{
		bpv__Pared1_5__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Portatil__pf)
	{
		bpv__Portatil__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Silla__pf)
	{
		bpv__Silla__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Silla1__pf)
	{
		bpv__Silla1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Armario__pf)
	{
		bpv__Armario__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Armario1__pf)
	{
		bpv__Armario1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Armario2__pf)
	{
		bpv__Armario2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Table__pf)
	{
		bpv__Table__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Table1__pf)
	{
		bpv__Table1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Portatil1__pf)
	{
		bpv__Portatil1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pilar__pf)
	{
		bpv__Pilar__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Caja__pf)
	{
		bpv__Caja__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Table2__pf)
	{
		bpv__Table2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Portatil2__pf)
	{
		bpv__Portatil2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Silla2__pf)
	{
		bpv__Silla2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ANivel_SalaTarjeta02_C__pf626307183::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/TopDownCPP/Blueprints/Direction.Direction")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ADesktopSearch_BP_C__pf479927698::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AVolumetrics_BP_C__pf2692903288::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMainPlayerController_BP_C__pf1773622777::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMap_C__pf2402407856::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ATopDownCharacter_C__pf1773622777::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FPosicion__pf1773622777();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPosicion__pf1773622777());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	ADesktopSearch_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__39 = NewObject<ADesktopSearch_BP_C__pf479927698>(InDynamicClass, ADesktopSearch_BP_C__pf479927698::StaticClass(), TEXT("Table_GEN_VARIABLE_DesktopSearch_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__39);
	auto __Local__40 = NewObject<UStaticMeshComponent>(__Local__39, UStaticMeshComponent::StaticClass(), TEXT("MeshPrincipal"), (EObjectFlags)0x00040029);
	auto& __Local__41 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__40), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__41 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	__Local__40->RelativeScale3D = FVector(2.200000, 2.200000, 2.200000);
	static TWeakObjectPtr<UProperty> __Local__43{};
	const UProperty* __Local__42 = __Local__43.Get();
	if (nullptr == __Local__42)
	{
		__Local__42 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__42);
		__Local__43 = __Local__42;
	}
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__40), true, 0));
	__Local__39->MeshPrincipal = __Local__40;
	auto __Local__44 = NewObject<UStaticMeshComponent>(__Local__39, UStaticMeshComponent::StaticClass(), TEXT("Mesh1"), (EObjectFlags)0x00040029);
	auto& __Local__45 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__44), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__45 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	auto& __Local__46 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__44), USceneComponent::__PPO__AttachParent() )));
	__Local__46 = __Local__40;
	__Local__44->RelativeLocation = FVector(48.444134, -7.191309, 1.633416);
	__Local__44->RelativeScale3D = FVector(0.727527, 0.727527, 0.727527);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__44), true, 0));
	__Local__39->Mesh1 = __Local__44;
	auto __Local__47 = NewObject<UStaticMeshComponent>(__Local__39, UStaticMeshComponent::StaticClass(), TEXT("Mesh2"), (EObjectFlags)0x00040029);
	auto& __Local__48 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__47), USceneComponent::__PPO__AttachParent() )));
	__Local__48 = __Local__40;
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__47), true, 0));
	__Local__39->Mesh2 = __Local__47;
	auto __Local__49 = NewObject<UStaticMeshComponent>(__Local__39, UStaticMeshComponent::StaticClass(), TEXT("Mesh3"), (EObjectFlags)0x00040029);
	auto& __Local__50 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__49), USceneComponent::__PPO__AttachParent() )));
	__Local__50 = __Local__40;
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__49), true, 0));
	__Local__39->Mesh3 = __Local__49;
	auto __Local__51 = NewObject<UStaticMeshComponent>(__Local__39, UStaticMeshComponent::StaticClass(), TEXT("Mesh4"), (EObjectFlags)0x00040029);
	auto& __Local__52 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__51), USceneComponent::__PPO__AttachParent() )));
	__Local__52 = __Local__40;
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__51), true, 0));
	__Local__39->Mesh4 = __Local__51;
	auto __Local__53 = NewObject<UBoxComponent>(__Local__39, UBoxComponent::StaticClass(), TEXT("BoxTrigger"), (EObjectFlags)0x00040029);
	__Local__53->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__54 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__53), USceneComponent::__PPO__AttachParent() )));
	__Local__54 = __Local__40;
	__Local__53->RelativeLocation = FVector(-8.321112, -14.459631, 26.588375);
	__Local__53->RelativeScale3D = FVector(0.383974, 0.466116, 0.320196);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__53), true, 0));
	__Local__39->BoxTrigger = __Local__53;
	auto __Local__55 = NewObject<USphereComponent>(__Local__39, USphereComponent::StaticClass(), TEXT("LocalizacionWidget"), (EObjectFlags)0x00040029);
	__Local__55->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__56 = (*(AccessPrivateProperty<FName >(&(__Local__55->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__56 = FName(TEXT("Custom"));
	auto& __Local__57 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__55->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__57), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__58 = TArray<FResponseChannel> ();
	__Local__58.AddUninitialized(31);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__58.GetData(), 31);
	auto& __Local__59 = __Local__58[0];
	__Local__59.Channel = FName(TEXT("WorldStatic"));
	__Local__59.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__60 = __Local__58[1];
	__Local__60.Channel = FName(TEXT("WorldDynamic"));
	__Local__60.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__61 = __Local__58[2];
	__Local__61.Channel = FName(TEXT("Pawn"));
	__Local__61.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__62 = __Local__58[3];
	__Local__62.Channel = FName(TEXT("Visibility"));
	__Local__62.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__63 = __Local__58[4];
	__Local__63.Channel = FName(TEXT("Camera"));
	__Local__63.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__64 = __Local__58[5];
	__Local__64.Channel = FName(TEXT("PhysicsBody"));
	__Local__64.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__65 = __Local__58[6];
	__Local__65.Channel = FName(TEXT("Vehicle"));
	__Local__65.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__66 = __Local__58[7];
	__Local__66.Channel = FName(TEXT("Destructible"));
	__Local__66.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__67 = __Local__58[8];
	__Local__67.Channel = FName(TEXT("EngineTraceChannel2"));
	__Local__67.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__68 = __Local__58[9];
	__Local__68.Channel = FName(TEXT("EngineTraceChannel3"));
	__Local__68.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__69 = __Local__58[10];
	__Local__69.Channel = FName(TEXT("EngineTraceChannel4"));
	__Local__69.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__70 = __Local__58[11];
	__Local__70.Channel = FName(TEXT("EngineTraceChannel5"));
	__Local__70.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__71 = __Local__58[12];
	__Local__71.Channel = FName(TEXT("EngineTraceChannel6"));
	__Local__71.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__72 = __Local__58[13];
	__Local__72.Channel = FName(TEXT("GameTraceChannel1"));
	__Local__72.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__73 = __Local__58[14];
	__Local__73.Channel = FName(TEXT("GameTraceChannel2"));
	__Local__73.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__74 = __Local__58[15];
	__Local__74.Channel = FName(TEXT("GameTraceChannel3"));
	__Local__74.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__75 = __Local__58[16];
	__Local__75.Channel = FName(TEXT("GameTraceChannel4"));
	__Local__75.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__76 = __Local__58[17];
	__Local__76.Channel = FName(TEXT("GameTraceChannel5"));
	__Local__76.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__77 = __Local__58[18];
	__Local__77.Channel = FName(TEXT("GameTraceChannel6"));
	__Local__77.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__78 = __Local__58[19];
	__Local__78.Channel = FName(TEXT("GameTraceChannel7"));
	__Local__78.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__79 = __Local__58[20];
	__Local__79.Channel = FName(TEXT("GameTraceChannel8"));
	__Local__79.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__80 = __Local__58[21];
	__Local__80.Channel = FName(TEXT("GameTraceChannel9"));
	__Local__80.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__81 = __Local__58[22];
	__Local__81.Channel = FName(TEXT("GameTraceChannel10"));
	__Local__81.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__82 = __Local__58[23];
	__Local__82.Channel = FName(TEXT("GameTraceChannel11"));
	__Local__82.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__83 = __Local__58[24];
	__Local__83.Channel = FName(TEXT("GameTraceChannel12"));
	__Local__83.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__84 = __Local__58[25];
	__Local__84.Channel = FName(TEXT("GameTraceChannel13"));
	__Local__84.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__85 = __Local__58[26];
	__Local__85.Channel = FName(TEXT("GameTraceChannel14"));
	__Local__85.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__86 = __Local__58[27];
	__Local__86.Channel = FName(TEXT("GameTraceChannel15"));
	__Local__86.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__87 = __Local__58[28];
	__Local__87.Channel = FName(TEXT("GameTraceChannel16"));
	__Local__87.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__88 = __Local__58[29];
	__Local__88.Channel = FName(TEXT("GameTraceChannel17"));
	__Local__88.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__89 = __Local__58[30];
	__Local__89.Channel = FName(TEXT("GameTraceChannel18"));
	__Local__89.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__90 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__55), USceneComponent::__PPO__AttachParent() )));
	__Local__90 = __Local__40;
	__Local__55->RelativeLocation = FVector(-8.759352, -26.198444, 44.921642);
	__Local__55->RelativeScale3D = FVector(0.244161, 0.244161, 0.244161);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__55), true, 0));
	__Local__39->LocalizacionWidget = __Local__55;
	auto& __Local__91 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__39), AActor::__PPO__RootComponent() )));
	__Local__91 = __Local__40;
	ADesktopSearch_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__92 = NewObject<ADesktopSearch_BP_C__pf479927698>(InDynamicClass, ADesktopSearch_BP_C__pf479927698::StaticClass(), TEXT("Table1_GEN_VARIABLE_DesktopSearch_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__92);
	auto __Local__93 = NewObject<UStaticMeshComponent>(__Local__92, UStaticMeshComponent::StaticClass(), TEXT("MeshPrincipal"), (EObjectFlags)0x00040029);
	auto& __Local__94 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__93), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__94 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	__Local__93->RelativeScale3D = FVector(2.200000, 2.200000, 2.200000);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__93), true, 0));
	__Local__92->MeshPrincipal = __Local__93;
	auto __Local__95 = NewObject<UStaticMeshComponent>(__Local__92, UStaticMeshComponent::StaticClass(), TEXT("Mesh1"), (EObjectFlags)0x00040029);
	auto& __Local__96 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__95), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__96 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	auto& __Local__97 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__95), USceneComponent::__PPO__AttachParent() )));
	__Local__97 = __Local__93;
	__Local__95->RelativeLocation = FVector(48.444134, -7.191309, 1.633416);
	__Local__95->RelativeScale3D = FVector(0.727527, 0.727527, 0.727527);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__95), true, 0));
	__Local__92->Mesh1 = __Local__95;
	auto __Local__98 = NewObject<UStaticMeshComponent>(__Local__92, UStaticMeshComponent::StaticClass(), TEXT("Mesh2"), (EObjectFlags)0x00040029);
	auto& __Local__99 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__98), USceneComponent::__PPO__AttachParent() )));
	__Local__99 = __Local__93;
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__98), true, 0));
	__Local__92->Mesh2 = __Local__98;
	auto __Local__100 = NewObject<UStaticMeshComponent>(__Local__92, UStaticMeshComponent::StaticClass(), TEXT("Mesh3"), (EObjectFlags)0x00040029);
	auto& __Local__101 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__100), USceneComponent::__PPO__AttachParent() )));
	__Local__101 = __Local__93;
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__100), true, 0));
	__Local__92->Mesh3 = __Local__100;
	auto __Local__102 = NewObject<UStaticMeshComponent>(__Local__92, UStaticMeshComponent::StaticClass(), TEXT("Mesh4"), (EObjectFlags)0x00040029);
	auto& __Local__103 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__102), USceneComponent::__PPO__AttachParent() )));
	__Local__103 = __Local__93;
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__102), true, 0));
	__Local__92->Mesh4 = __Local__102;
	auto __Local__104 = NewObject<UBoxComponent>(__Local__92, UBoxComponent::StaticClass(), TEXT("BoxTrigger"), (EObjectFlags)0x00040029);
	__Local__104->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__105 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__104), USceneComponent::__PPO__AttachParent() )));
	__Local__105 = __Local__93;
	__Local__104->RelativeLocation = FVector(-8.321112, -14.459631, 26.588375);
	__Local__104->RelativeScale3D = FVector(0.383974, 0.466116, 0.320196);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__104), true, 0));
	__Local__92->BoxTrigger = __Local__104;
	auto __Local__106 = NewObject<USphereComponent>(__Local__92, USphereComponent::StaticClass(), TEXT("LocalizacionWidget"), (EObjectFlags)0x00040029);
	__Local__106->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__107 = (*(AccessPrivateProperty<FName >(&(__Local__106->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__107 = FName(TEXT("Custom"));
	auto& __Local__108 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__106->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__109 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__108), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__109 = TArray<FResponseChannel> ();
	__Local__109.AddUninitialized(31);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__109.GetData(), 31);
	auto& __Local__110 = __Local__109[0];
	__Local__110.Channel = FName(TEXT("WorldStatic"));
	__Local__110.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__111 = __Local__109[1];
	__Local__111.Channel = FName(TEXT("WorldDynamic"));
	__Local__111.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__112 = __Local__109[2];
	__Local__112.Channel = FName(TEXT("Pawn"));
	__Local__112.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__113 = __Local__109[3];
	__Local__113.Channel = FName(TEXT("Visibility"));
	__Local__113.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__114 = __Local__109[4];
	__Local__114.Channel = FName(TEXT("Camera"));
	__Local__114.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__115 = __Local__109[5];
	__Local__115.Channel = FName(TEXT("PhysicsBody"));
	__Local__115.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__116 = __Local__109[6];
	__Local__116.Channel = FName(TEXT("Vehicle"));
	__Local__116.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__117 = __Local__109[7];
	__Local__117.Channel = FName(TEXT("Destructible"));
	__Local__117.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__118 = __Local__109[8];
	__Local__118.Channel = FName(TEXT("EngineTraceChannel2"));
	__Local__118.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__119 = __Local__109[9];
	__Local__119.Channel = FName(TEXT("EngineTraceChannel3"));
	__Local__119.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__120 = __Local__109[10];
	__Local__120.Channel = FName(TEXT("EngineTraceChannel4"));
	__Local__120.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__121 = __Local__109[11];
	__Local__121.Channel = FName(TEXT("EngineTraceChannel5"));
	__Local__121.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__122 = __Local__109[12];
	__Local__122.Channel = FName(TEXT("EngineTraceChannel6"));
	__Local__122.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__123 = __Local__109[13];
	__Local__123.Channel = FName(TEXT("GameTraceChannel1"));
	__Local__123.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__124 = __Local__109[14];
	__Local__124.Channel = FName(TEXT("GameTraceChannel2"));
	__Local__124.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__125 = __Local__109[15];
	__Local__125.Channel = FName(TEXT("GameTraceChannel3"));
	__Local__125.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__126 = __Local__109[16];
	__Local__126.Channel = FName(TEXT("GameTraceChannel4"));
	__Local__126.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__127 = __Local__109[17];
	__Local__127.Channel = FName(TEXT("GameTraceChannel5"));
	__Local__127.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__128 = __Local__109[18];
	__Local__128.Channel = FName(TEXT("GameTraceChannel6"));
	__Local__128.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__129 = __Local__109[19];
	__Local__129.Channel = FName(TEXT("GameTraceChannel7"));
	__Local__129.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__130 = __Local__109[20];
	__Local__130.Channel = FName(TEXT("GameTraceChannel8"));
	__Local__130.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__131 = __Local__109[21];
	__Local__131.Channel = FName(TEXT("GameTraceChannel9"));
	__Local__131.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__132 = __Local__109[22];
	__Local__132.Channel = FName(TEXT("GameTraceChannel10"));
	__Local__132.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__133 = __Local__109[23];
	__Local__133.Channel = FName(TEXT("GameTraceChannel11"));
	__Local__133.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__134 = __Local__109[24];
	__Local__134.Channel = FName(TEXT("GameTraceChannel12"));
	__Local__134.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__135 = __Local__109[25];
	__Local__135.Channel = FName(TEXT("GameTraceChannel13"));
	__Local__135.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__136 = __Local__109[26];
	__Local__136.Channel = FName(TEXT("GameTraceChannel14"));
	__Local__136.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__137 = __Local__109[27];
	__Local__137.Channel = FName(TEXT("GameTraceChannel15"));
	__Local__137.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__138 = __Local__109[28];
	__Local__138.Channel = FName(TEXT("GameTraceChannel16"));
	__Local__138.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__139 = __Local__109[29];
	__Local__139.Channel = FName(TEXT("GameTraceChannel17"));
	__Local__139.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__140 = __Local__109[30];
	__Local__140.Channel = FName(TEXT("GameTraceChannel18"));
	__Local__140.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__141 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__106), USceneComponent::__PPO__AttachParent() )));
	__Local__141 = __Local__93;
	__Local__106->RelativeLocation = FVector(-8.759352, -26.198444, 44.921642);
	__Local__106->RelativeScale3D = FVector(0.244161, 0.244161, 0.244161);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__106), true, 0));
	__Local__92->LocalizacionWidget = __Local__106;
	auto& __Local__142 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__92), AActor::__PPO__RootComponent() )));
	__Local__142 = __Local__93;
	ADesktopSearch_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__143 = NewObject<ADesktopSearch_BP_C__pf479927698>(InDynamicClass, ADesktopSearch_BP_C__pf479927698::StaticClass(), TEXT("Table2_GEN_VARIABLE_DesktopSearch_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__143);
	auto __Local__144 = NewObject<UStaticMeshComponent>(__Local__143, UStaticMeshComponent::StaticClass(), TEXT("MeshPrincipal"), (EObjectFlags)0x00040029);
	auto& __Local__145 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__144), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__145 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	__Local__144->RelativeScale3D = FVector(2.200000, 2.200000, 2.200000);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__144), true, 0));
	__Local__143->MeshPrincipal = __Local__144;
	auto __Local__146 = NewObject<UStaticMeshComponent>(__Local__143, UStaticMeshComponent::StaticClass(), TEXT("Mesh1"), (EObjectFlags)0x00040029);
	auto& __Local__147 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__146), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__147 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_SalaTarjeta02_C__pf626307183::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	auto& __Local__148 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__146), USceneComponent::__PPO__AttachParent() )));
	__Local__148 = __Local__144;
	__Local__146->RelativeLocation = FVector(48.444134, -7.191309, 1.633416);
	__Local__146->RelativeScale3D = FVector(0.727527, 0.727527, 0.727527);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__146), true, 0));
	__Local__143->Mesh1 = __Local__146;
	auto __Local__149 = NewObject<UStaticMeshComponent>(__Local__143, UStaticMeshComponent::StaticClass(), TEXT("Mesh2"), (EObjectFlags)0x00040029);
	auto& __Local__150 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__149), USceneComponent::__PPO__AttachParent() )));
	__Local__150 = __Local__144;
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__149), true, 0));
	__Local__143->Mesh2 = __Local__149;
	auto __Local__151 = NewObject<UStaticMeshComponent>(__Local__143, UStaticMeshComponent::StaticClass(), TEXT("Mesh3"), (EObjectFlags)0x00040029);
	auto& __Local__152 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__151), USceneComponent::__PPO__AttachParent() )));
	__Local__152 = __Local__144;
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__151), true, 0));
	__Local__143->Mesh3 = __Local__151;
	auto __Local__153 = NewObject<UStaticMeshComponent>(__Local__143, UStaticMeshComponent::StaticClass(), TEXT("Mesh4"), (EObjectFlags)0x00040029);
	auto& __Local__154 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__153), USceneComponent::__PPO__AttachParent() )));
	__Local__154 = __Local__144;
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__153), true, 0));
	__Local__143->Mesh4 = __Local__153;
	auto __Local__155 = NewObject<UBoxComponent>(__Local__143, UBoxComponent::StaticClass(), TEXT("BoxTrigger"), (EObjectFlags)0x00040029);
	__Local__155->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__156 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__155), USceneComponent::__PPO__AttachParent() )));
	__Local__156 = __Local__144;
	__Local__155->RelativeLocation = FVector(-8.321112, -14.459631, 26.588375);
	__Local__155->RelativeScale3D = FVector(0.383974, 0.466116, 0.320196);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__155), true, 0));
	__Local__143->BoxTrigger = __Local__155;
	auto __Local__157 = NewObject<USphereComponent>(__Local__143, USphereComponent::StaticClass(), TEXT("LocalizacionWidget"), (EObjectFlags)0x00040029);
	__Local__157->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__158 = (*(AccessPrivateProperty<FName >(&(__Local__157->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__158 = FName(TEXT("Custom"));
	auto& __Local__159 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__157->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__160 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__159), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__160 = TArray<FResponseChannel> ();
	__Local__160.AddUninitialized(31);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__160.GetData(), 31);
	auto& __Local__161 = __Local__160[0];
	__Local__161.Channel = FName(TEXT("WorldStatic"));
	__Local__161.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__162 = __Local__160[1];
	__Local__162.Channel = FName(TEXT("WorldDynamic"));
	__Local__162.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__163 = __Local__160[2];
	__Local__163.Channel = FName(TEXT("Pawn"));
	__Local__163.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__164 = __Local__160[3];
	__Local__164.Channel = FName(TEXT("Visibility"));
	__Local__164.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__165 = __Local__160[4];
	__Local__165.Channel = FName(TEXT("Camera"));
	__Local__165.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__166 = __Local__160[5];
	__Local__166.Channel = FName(TEXT("PhysicsBody"));
	__Local__166.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__167 = __Local__160[6];
	__Local__167.Channel = FName(TEXT("Vehicle"));
	__Local__167.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__168 = __Local__160[7];
	__Local__168.Channel = FName(TEXT("Destructible"));
	__Local__168.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__169 = __Local__160[8];
	__Local__169.Channel = FName(TEXT("EngineTraceChannel2"));
	__Local__169.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__170 = __Local__160[9];
	__Local__170.Channel = FName(TEXT("EngineTraceChannel3"));
	__Local__170.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__171 = __Local__160[10];
	__Local__171.Channel = FName(TEXT("EngineTraceChannel4"));
	__Local__171.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__172 = __Local__160[11];
	__Local__172.Channel = FName(TEXT("EngineTraceChannel5"));
	__Local__172.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__173 = __Local__160[12];
	__Local__173.Channel = FName(TEXT("EngineTraceChannel6"));
	__Local__173.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__174 = __Local__160[13];
	__Local__174.Channel = FName(TEXT("GameTraceChannel1"));
	__Local__174.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__175 = __Local__160[14];
	__Local__175.Channel = FName(TEXT("GameTraceChannel2"));
	__Local__175.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__176 = __Local__160[15];
	__Local__176.Channel = FName(TEXT("GameTraceChannel3"));
	__Local__176.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__177 = __Local__160[16];
	__Local__177.Channel = FName(TEXT("GameTraceChannel4"));
	__Local__177.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__178 = __Local__160[17];
	__Local__178.Channel = FName(TEXT("GameTraceChannel5"));
	__Local__178.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__179 = __Local__160[18];
	__Local__179.Channel = FName(TEXT("GameTraceChannel6"));
	__Local__179.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__180 = __Local__160[19];
	__Local__180.Channel = FName(TEXT("GameTraceChannel7"));
	__Local__180.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__181 = __Local__160[20];
	__Local__181.Channel = FName(TEXT("GameTraceChannel8"));
	__Local__181.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__182 = __Local__160[21];
	__Local__182.Channel = FName(TEXT("GameTraceChannel9"));
	__Local__182.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__183 = __Local__160[22];
	__Local__183.Channel = FName(TEXT("GameTraceChannel10"));
	__Local__183.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__184 = __Local__160[23];
	__Local__184.Channel = FName(TEXT("GameTraceChannel11"));
	__Local__184.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__185 = __Local__160[24];
	__Local__185.Channel = FName(TEXT("GameTraceChannel12"));
	__Local__185.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__186 = __Local__160[25];
	__Local__186.Channel = FName(TEXT("GameTraceChannel13"));
	__Local__186.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__187 = __Local__160[26];
	__Local__187.Channel = FName(TEXT("GameTraceChannel14"));
	__Local__187.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__188 = __Local__160[27];
	__Local__188.Channel = FName(TEXT("GameTraceChannel15"));
	__Local__188.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__189 = __Local__160[28];
	__Local__189.Channel = FName(TEXT("GameTraceChannel16"));
	__Local__189.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__190 = __Local__160[29];
	__Local__190.Channel = FName(TEXT("GameTraceChannel17"));
	__Local__190.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__191 = __Local__160[30];
	__Local__191.Channel = FName(TEXT("GameTraceChannel18"));
	__Local__191.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__192 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__157), USceneComponent::__PPO__AttachParent() )));
	__Local__192 = __Local__144;
	__Local__157->RelativeLocation = FVector(-8.759352, -26.198444, 44.921642);
	__Local__157->RelativeScale3D = FVector(0.244161, 0.244161, 0.244161);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__157), true, 0));
	__Local__143->LocalizacionWidget = __Local__157;
	auto& __Local__193 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__143), AActor::__PPO__RootComponent() )));
	__Local__193 = __Local__144;
	auto __Local__194 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__194);
	auto __Local__195 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__195);
	(((UBoolProperty*)__Local__42)->SetPropertyValue_InContainer((__Local__194), false, 0));
	__Local__195->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__195->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__195->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__196 = __Local__195->ComponentDelegateBindings[0];
	__Local__196.ComponentPropertyName = FName(TEXT("BoxCollision"));
	__Local__196.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__196.FunctionNameToBind = FName(TEXT("BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__197 = __Local__195->ComponentDelegateBindings[1];
	__Local__197.ComponentPropertyName = FName(TEXT("BoxCollision"));
	__Local__197.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__197.FunctionNameToBind = FName(TEXT("BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 63);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsTop_Down_Character__pf = Cast<ATopDownCharacter_C__pf1773622777>(b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf);
	b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf = Cast<AMainPlayerController_BP_C__pf1773622777>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpv__Posicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, 9);
	bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__Posicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf);
	bpv__PosicionIndex__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
	if(::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf))
	{
		b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf->PosicionActualIndex = bpv__PosicionIndex__pf;
	}
	UUserWidget*  __Local__198 = ((UUserWidget*)nullptr);
	b0l__K2Node_DynamicCast_AsMap__pf = Cast<UMap_C__pf2402407856>(((::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf)) ? (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf->MapWidget) : (__Local__198)));
	b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsMap__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpv__Posicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, 9);
	bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__Posicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf);
	if(::IsValid(b0l__K2Node_DynamicCast_AsMap__pf))
	{
		b0l__K2Node_DynamicCast_AsMap__pf->bpf__EnNuevaPosicion__pf(bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf, bpv__TexturaDelMiniMapa__pf);
	}
	bpf__HacerVisible__pf();
	(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Reset();
	UGameplayStatics::GetAllActorsOfClass(this, AVolumetrics_BP_C__pf2692903288::StaticClass(), /*out*/ TArrayCaster<AVolumetrics_BP_C__pf2692903288*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Get<AActor*>());
	if (!bPuedeVerElGas)
	{
		return; //KCST_EndOfThreadIfNot
	}
	FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
	if(::IsValid(b0l__CallFunc_Array_Get_Item_5__pf) && ::IsValid(b0l__CallFunc_Array_Get_Item_5__pf->bpv__DefaultSceneRoot__pf))
	{
		b0l__CallFunc_Array_Get_Item_5__pf->bpv__DefaultSceneRoot__pf->USceneComponent::SetVisibility(true, true);
	}
	return; //KCST_EndOfThread
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 92);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Scene__pf))
	{
		bpv__Scene__pf->USceneComponent::SetVisibility(false, true);
	}
	return; //KCST_EndOfThread
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 65);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf = Cast<ATopDownCharacter_C__pf1773622777>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
	b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf = Cast<AMainPlayerController_BP_C__pf1773622777>(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf);
	b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	UUserWidget*  __Local__199 = ((UUserWidget*)nullptr);
	b0l__K2Node_DynamicCast_AsMap_1__pf = Cast<UMap_C__pf2402407856>(((::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf)) ? (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf->MapWidget) : (__Local__199)));
	b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsMap_1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpv__Posicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, 9);
	bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__Posicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf);
	if(::IsValid(b0l__K2Node_DynamicCast_AsMap_1__pf))
	{
		b0l__K2Node_DynamicCast_AsMap_1__pf->bpf__SaliendoDePosicion__pf(bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf, bpv__TexturaDelMiniMapa__pf);
	}
	bpf__HacerInvisible__pf();
	// optimized KCST_UnconditionalGoto
	(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
	UGameplayStatics::GetAllActorsOfClass(this, AVolumetrics_BP_C__pf2692903288::StaticClass(), /*out*/ TArrayCaster<AVolumetrics_BP_C__pf2692903288*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
	FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
	if(::IsValid(b0l__CallFunc_Array_Get_Item__pf) && ::IsValid(b0l__CallFunc_Array_Get_Item__pf->bpv__DefaultSceneRoot__pf))
	{
		b0l__CallFunc_Array_Get_Item__pf->bpv__DefaultSceneRoot__pf->USceneComponent::SetVisibility(false, true);
	}
	return; //KCST_EndOfThread
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 51);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_MakeStruct_Posicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf = b0l__K2Node_Event_x__pf;
	b0l__K2Node_MakeStruct_Posicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf = b0l__K2Node_Event_y__pf;
	bpv__Posicion__pf = b0l__K2Node_MakeStruct_Posicion__pf;
	X = bpv__Posicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf;
	Y = bpv__Posicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf;
	return; //KCST_EndOfThread
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 35:
			{
				b0l__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 36:
			{
				b0l__Temp_int_Array_Index_Variable_2__pf = 0;
			}
		case 37:
			{
				if(::IsValid(bpv__Scene__pf))
				{
					(b0l__CallFunc_GetChildrenComponents_Children_1__pf).Reset();
					bpv__Scene__pf->USceneComponent::GetChildrenComponents(true, /*out*/ b0l__CallFunc_GetChildrenComponents_Children_1__pf);
				}
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetChildrenComponents_Children_1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 38:
			{
				b0l__Temp_int_Array_Index_Variable_2__pf = b0l__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 39:
			{
				__StateStack.Push(41);
			}
		case 40:
			{
				if(::IsValid(bpv__Scene__pf))
				{
					(b0l__CallFunc_GetChildrenComponents_Children_1__pf).Reset();
					bpv__Scene__pf->USceneComponent::GetChildrenComponents(true, /*out*/ b0l__CallFunc_GetChildrenComponents_Children_1__pf);
				}
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetChildrenComponents_Children_1__pf, b0l__Temp_int_Array_Index_Variable_2__pf, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				FCustomThunkTemplates::Array_Get(bpv__Visibilidades__pf, b0l__Temp_int_Array_Index_Variable_2__pf, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_3__pf))
				{
					b0l__CallFunc_Array_Get_Item_3__pf->USceneComponent::SetVisibility(b0l__CallFunc_Array_Get_Item_4__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 37;
				break;
			}
		case 94:
			{
				__CurrentState = 35;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 5:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 6:
			{
				if(::IsValid(bpv__Scene__pf))
				{
					(b0l__CallFunc_GetChildrenComponents_Children__pf).Reset();
					bpv__Scene__pf->USceneComponent::GetChildrenComponents(true, /*out*/ b0l__CallFunc_GetChildrenComponents_Children__pf);
				}
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetChildrenComponents_Children__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 8:
			{
				__StateStack.Push(11);
			}
		case 9:
			{
				if(::IsValid(bpv__Scene__pf))
				{
					(b0l__CallFunc_GetChildrenComponents_Children__pf).Reset();
					bpv__Scene__pf->USceneComponent::GetChildrenComponents(true, /*out*/ b0l__CallFunc_GetChildrenComponents_Children__pf);
				}
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetChildrenComponents_Children__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_2__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue_2__pf = b0l__CallFunc_Array_Get_Item_2__pf->IsVisible();
				}
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__Visibilidades__pf, bpfv__CallFunc_IsVisible_ReturnValue_2__pf);
			}
		case 10:
			{
				if(::IsValid(bpv__Scene__pf))
				{
					(b0l__CallFunc_GetChildrenComponents_Children__pf).Reset();
					bpv__Scene__pf->USceneComponent::GetChildrenComponents(true, /*out*/ b0l__CallFunc_GetChildrenComponents_Children__pf);
				}
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetChildrenComponents_Children__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_2__pf))
				{
					b0l__CallFunc_Array_Get_Item_2__pf->USceneComponent::SetVisibility(false, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 6;
				break;
			}
		case 95:
			{
				__CurrentState = 96;
				break;
			}
		case 96:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(3, 1969599273, TEXT("ExecuteUbergraph_Nivel_SalaTarjeta02_5"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 13:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__DireccionesConPuertas__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = b0l__Temp_int_Loop_Counter_Variable_2__pf;
			}
		case 15:
			{
				__StateStack.Push(18);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__DireccionesConPuertas__pf, b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b0l__CallFunc_Array_Get_Item_1__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 19;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b0l__CallFunc_Array_Get_Item_1__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 24;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b0l__CallFunc_Array_Get_Item_1__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 29;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b0l__CallFunc_Array_Get_Item_1__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 32;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpf__PonerParedesAleatorias__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 13;
				break;
			}
		case 19:
			{
				if(::IsValid(bpv__Pared1_1__pf))
				{
					bpv__Pared1_1__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 20:
			{
				if(::IsValid(bpv__Pared1_1__pf))
				{
					bpv__Pared1_1__pf->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__Pared1_1__pf))
				{
					bpv__Pared1_1__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 22:
			{
				if(::IsValid(bpv__Pared1_1SinPuerta2__pf))
				{
					bpv__Pared1_1SinPuerta2__pf->USceneComponent::SetVisibility(false, false);
				}
				if(::IsValid(bpv__Pared1_1SinPuerta__pf))
				{
					bpv__Pared1_1SinPuerta__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 23:
			{
				if(::IsValid(bpv__Pared1_1SinPuerta2__pf))
				{
					bpv__Pared1_1SinPuerta2__pf->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
				}
				if(::IsValid(bpv__Pared1_1SinPuerta__pf))
				{
					bpv__Pared1_1SinPuerta__pf->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				if(::IsValid(bpv__Pared2_1__pf))
				{
					bpv__Pared2_1__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 25:
			{
				if(::IsValid(bpv__Pared2_1__pf))
				{
					bpv__Pared2_1__pf->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
				}
			}
		case 26:
			{
				if(::IsValid(bpv__Pared2_1__pf))
				{
					bpv__Pared2_1__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 27:
			{
				if(::IsValid(bpv__Pared1_2SinPuerta2__pf))
				{
					bpv__Pared1_2SinPuerta2__pf->USceneComponent::SetVisibility(false, false);
				}
				if(::IsValid(bpv__Pared1_2SinPuerta1__pf))
				{
					bpv__Pared1_2SinPuerta1__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 28:
			{
				if(::IsValid(bpv__Pared1_2SinPuerta1__pf))
				{
					bpv__Pared1_2SinPuerta1__pf->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
				}
				if(::IsValid(bpv__Pared1_2SinPuerta2__pf))
				{
					bpv__Pared1_2SinPuerta2__pf->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				if(::IsValid(bpv__ResplandorPuertaAbajo__pf))
				{
					bpv__ResplandorPuertaAbajo__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 30:
			{
				if(::IsValid(bpv__Pared1_4__pf))
				{
					bpv__Pared1_4__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 31:
			{
				if(::IsValid(bpv__Pared1_4SinPuerta__pf))
				{
					bpv__Pared1_4SinPuerta__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				if(::IsValid(bpv__ResplandorPuertaIzquierda__pf))
				{
					bpv__ResplandorPuertaIzquierda__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 33:
			{
				if(::IsValid(bpv__Pared2_3__pf))
				{
					bpv__Pared2_3__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 34:
			{
				if(::IsValid(bpv__Pared2_3SinPuerta__pf))
				{
					bpv__Pared2_3SinPuerta__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 61:
			{
				__CurrentState = 62;
				break;
			}
		case 62:
			{
				b0l__Temp_int_Loop_Counter_Variable_2__pf = 0;
				__CurrentState = 12;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_7(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 83:
			{
				__CurrentState = 84;
				break;
			}
		case 84:
			{
				if(::IsValid(bpv__Pared1_1__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue_1__pf = bpv__Pared1_1__pf->IsVisible();
				}
				if (!bpfv__CallFunc_IsVisible_ReturnValue_1__pf)
				{
					__CurrentState = 85;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 85:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomIntegerInRange(0, 9);
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf, 6);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 89;
					break;
				}
			}
		case 86:
			{
				if(::IsValid(bpv__Pared1_2SinPuerta1__pf))
				{
					bpv__Pared1_2SinPuerta1__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 87:
			{
				if(::IsValid(bpv__Pared1_2SinPuerta1__pf))
				{
					bpv__Pared1_2SinPuerta1__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 88:
			{
				bpv__ParedSinPuerta2__pf = 1;
				__CurrentState = -1;
				break;
			}
		case 89:
			{
				if(::IsValid(bpv__Pared1_2SinPuerta2__pf))
				{
					bpv__Pared1_2SinPuerta2__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 90:
			{
				if(::IsValid(bpv__Pared1_2SinPuerta2__pf))
				{
					bpv__Pared1_2SinPuerta2__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 91:
			{
				bpv__ParedSinPuerta2__pf = 2;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_8(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 71:
			{
				__CurrentState = 72;
				break;
			}
		case 72:
			{
				if (!bpv__bHaPuestoPared__pf)
				{
					__CurrentState = 73;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 73:
			{
				bpv__bHaPuestoPared__pf = true;
			}
		case 74:
			{
				if(::IsValid(bpv__Pared1_1__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue__pf = bpv__Pared1_1__pf->IsVisible();
				}
				if (!bpfv__CallFunc_IsVisible_ReturnValue__pf)
				{
					__CurrentState = 75;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 75:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, 9);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 6);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 80;
					break;
				}
			}
		case 76:
			{
				if(::IsValid(bpv__Pared1_1SinPuerta__pf))
				{
					bpv__Pared1_1SinPuerta__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 77:
			{
				if(::IsValid(bpv__Pared1_1SinPuerta__pf))
				{
					bpv__Pared1_1SinPuerta__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 78:
			{
				bpv__ParedSinPuerta__pf = 1;
			}
		case 79:
			{
				bpf__PonerParedesAleatorias2__pf();
				__CurrentState = -1;
				break;
			}
		case 80:
			{
				if(::IsValid(bpv__Pared1_1SinPuerta2__pf))
				{
					bpv__Pared1_1SinPuerta2__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 81:
			{
				if(::IsValid(bpv__Pared1_1SinPuerta2__pf))
				{
					bpv__Pared1_1SinPuerta2__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 82:
			{
				bpv__ParedSinPuerta__pf = 2;
				__CurrentState = 79;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_9(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue_3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 55:
			{
				__CurrentState = 56;
				break;
			}
		case 56:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__K2Node_Event_Direction__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 60;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__K2Node_Event_Direction__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 59;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__K2Node_Event_Direction__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 58;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__K2Node_Event_Direction__pf, 3);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 57;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 57:
			{
				b0l__Temp_byte_Variable_3__pf = E__Direction__pf::NewEnumerator0;
				bpfv__CallFunc_Array_AddUnique_ReturnValue__pf = FCustomThunkTemplates::Array_AddUnique(bpv__DireccionesConPuertas__pf, b0l__Temp_byte_Variable_3__pf);
				__CurrentState = -1;
				break;
			}
		case 58:
			{
				b0l__Temp_byte_Variable_2__pf = E__Direction__pf::NewEnumerator2;
				bpfv__CallFunc_Array_AddUnique_ReturnValue_1__pf = FCustomThunkTemplates::Array_AddUnique(bpv__DireccionesConPuertas__pf, b0l__Temp_byte_Variable_2__pf);
				__CurrentState = -1;
				break;
			}
		case 59:
			{
				b0l__Temp_byte_Variable_1__pf = E__Direction__pf::NewEnumerator3;
				bpfv__CallFunc_Array_AddUnique_ReturnValue_2__pf = FCustomThunkTemplates::Array_AddUnique(bpv__DireccionesConPuertas__pf, b0l__Temp_byte_Variable_1__pf);
				__CurrentState = -1;
				break;
			}
		case 60:
			{
				b0l__Temp_byte_Variable__pf = E__Direction__pf::NewEnumerator1;
				bpfv__CallFunc_Array_AddUnique_ReturnValue_3__pf = FCustomThunkTemplates::Array_AddUnique(bpv__DireccionesConPuertas__pf, b0l__Temp_byte_Variable__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_5(95);
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__HacerVisible__pf()
{
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_4(94);
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__HacerInvisible__pf()
{
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_1(92);
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__PonerParedesAleatorias2__pf()
{
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_7(83);
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__PonerParedesAleatorias__pf()
{
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_8(71);
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_2(65);
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__201;
	T__Local__201& bpp__SweepResult__pf = *const_cast<T__Local__201 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_0(63);
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__UpdateDoors__pf()
{
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_6(61);
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__SetDirection__pf(int32 bpp__Direction__pf)
{
	b0l__K2Node_Event_Direction__pf = bpp__Direction__pf;
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_9(55);
}
void ANivel_SalaTarjeta02_C__pf626307183::bpf__SetPosition__pf(int32 bpp__x__pf, int32 bpp__y__pf)
{
	b0l__K2Node_Event_x__pf = bpp__x__pf;
	b0l__K2Node_Event_y__pf = bpp__y__pf;
	bpf__ExecuteUbergraph_Nivel_SalaTarjeta02__pf_3(51);
}
PRAGMA_DISABLE_OPTIMIZATION
void ANivel_SalaTarjeta02_C__pf626307183::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_PAredPuerta.Set_Room_1_PAredPuerta 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_ParedSimple001.Set_Room_1_ParedSimple001 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/EngineMaterials/DefaultDecalMaterial.DefaultDecalMaterial 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_ParedSimple003.Set_Room_1_ParedSimple003 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_SueloLow.Set_Room_1_SueloLow 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Scene/Texture/Alice/SueloParedes.SueloParedes 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Laptop.Set_Assets_1_Laptop 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Silla.Set_Assets_1_Silla 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Files.Set_Assets_1_Files 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_Box007.Set_Room_1_Box007 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Box.Set_Assets_1_Box 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/Gris.Gris 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Table.Set_Assets_1_Table 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Cajon.Set_Assets_1_Cajon 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ANivel_SalaTarjeta02_C__pf626307183::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{40, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DecalComponent 
		{47, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PointLightComponent 
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/IsolationUE4.MainPlayerController 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Texture2D 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/IsolationUE4.Nivel 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameUserSettings 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/IsolationUE4.IsolationUE4Character 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/IsolationUE4.Interactuable 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/TopDownCPP/Player/Animations/PlayerAnimMontage.PlayerAnimMontage 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/TopDownCPP/Player/Mesh/Alicia_Personaje.Alicia_Personaje 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Scene/Texture/Alice/AlicePersonaje.AlicePersonaje 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIController 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/TopDownCPP/Player/Mesh/Alicia_Personaje_Skeleton.Alicia_Personaje_Skeleton 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Pawn 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimInstance 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_SaveCachedPose 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_UseCachedPose 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace1D /Game/TopDownCPP/Player/Animations/RunWalkBlendSpace.RunWalkBlendSpace 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/EngineMeshes/Sphere.Sphere 
		{48, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SphereComponent 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/AmarilloSalida.AmarilloSalida 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/HUD/KeyTransparente.KeyTransparente 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/Azulito.Azulito 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/Rojo.Rojo 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/Verde.Verde 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/1.1 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/2.2 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/3.3 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/4.4 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/5.5 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/6.6 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/7.7 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/8.8 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/9.9 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/10.10 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/11.11 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/12.12 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/13.13 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/14.14 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/15.15 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/16.16 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Widget 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.GridPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.PanelWidget 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CheatManager 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SaveGame 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Slider 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Locker.Set_Assets_1_Locker 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/TopDownCPP/Effects/VolumetricGas/VolumetricGas_Inst.VolumetricGas_Inst 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInterface 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TimelineComponent 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ProgressBar 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownCPP/Textures/M_RojoEmisivo.M_RojoEmisivo 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_BlueOnly.VertexColorViewMode_BlueOnly 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownCPP/Textures/M_AzulEmisivo.M_AzulEmisivo 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Barrel.Set_Assets_1_Barrel 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/EngineMeshes/Cube.Cube 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Scene/Texture/Alice/DeadBody.DeadBody 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/Rojizo.Rojizo 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/saw.saw 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownCPP/Textures/M_Sierra.M_Sierra 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownCPP/Textures/M_Negro.M_Negro 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownCPP/Textures/M_VerdeEmisivo.M_VerdeEmisivo 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_YellowOnly.VertexColorViewMode_YellowOnly 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ActorComponent 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_RedOnly.VertexColorViewMode_RedOnly 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.RectLightComponent 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_GreenOnly.VertexColorViewMode_GreenOnly 
		{165, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/GameplayMechanics/DesktopSearch_BP.DesktopSearch_BP_C 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Effects/VolumetricGas/Volumetrics_BP.Volumetrics_BP_C 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Blueprints/MainPlayerController_BP.MainPlayerController_BP_C 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/Map.Map_C 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Blueprints/TopDownCharacter.TopDownCharacter_C 
		{156, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/TopDownCPP/Blueprints/Posicion.Posicion 
		{157, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/TopDownCPP/Blueprints/Direction.Direction 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ANivel_SalaTarjeta02_C__pf626307183
{
	FRegisterHelper__ANivel_SalaTarjeta02_C__pf626307183()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownCPP/Niveles/Nivel_SalaTarjeta02"), &ANivel_SalaTarjeta02_C__pf626307183::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ANivel_SalaTarjeta02_C__pf626307183 Instance;
};
FRegisterHelper__ANivel_SalaTarjeta02_C__pf626307183 FRegisterHelper__ANivel_SalaTarjeta02_C__pf626307183::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
