#include "NativizedAssets.h"
#include "MainPlayerController_BP__pf1773622777.h"
#include "GeneratedCodeHelpers.h"
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
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "Ahogamiento__pf2402407856.h"
#include "Map__pf2402407856.h"
#include "MensajeWidget__pf2402407856.h"
#include "InicioFinalWB__pf2402407856.h"
#include "TopDownCharacter__pf1773622777.h"
#include "IsolationUE4/Nivel.h"
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
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "IsolationUE4/IsolationUE4Character.h"
#include "IsolationUE4/Interactuable.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "Nivel_IMP0__pf626307183.h"
#include "Nivel_IMP1__pf626307183.h"
#include "Nivel_Trampilla__pf626307183.h"
#include "Nivel_SALIDA__pf626307183.h"
#include "Nivel_BP00__pf626307183.h"
#include "Nivel_Sierras__pf626307183.h"
#include "Nivel_Laser00__pf626307183.h"
#include "Nivel_Laser01__pf626307183.h"
#include "Nivel_SalaAlmacenaje00__pf626307183.h"
#include "Nivel_SalaAlmacenaje01__pf626307183.h"
#include "Nivel_SalaAlmacenaje02__pf626307183.h"
#include "Nivel_SalaAlmacenaje03__pf626307183.h"
#include "Nivel_SalaTarjeta00__pf626307183.h"
#include "Nivel_SalaTarjeta01__pf626307183.h"
#include "Nivel_SalaTarjeta02__pf626307183.h"
#include "Nivel_Laser02__pf626307183.h"
#include "HUDOverlay__pf2402407856.h"
#include "InteractWB__pf2402407856.h"
#include "PauseMenu__pf2402407856.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AMainPlayerController_BP_C__pf1773622777::AMainPlayerController_BP_C__pf1773622777(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AMainPlayerController_BP_C__pf1773622777::StaticClass() == GetClass()))
	{
		AMainPlayerController_BP_C__pf1773622777::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<USceneComponent>(this->GetDefaultSubobjectByName(TEXT("TransformComponent0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'TransformComponent0' //
		static TWeakObjectPtr<UProperty> __Local__2{};
		const UProperty* __Local__1 = __Local__2.Get();
		if (nullptr == __Local__1)
		{
			__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__1);
			__Local__2 = __Local__1;
		}
		(((UBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'TransformComponent0' //
	}
	bpv__AnteriorVisivilidad__pf = false;
	bpv__VolumenMusica__pf = 0.000000f;
	bpv__VolumenSonido__pf = 0.000000f;
	LevelsToSpawn = TArray<TSubclassOf<ANivel> > ();
	LevelsToSpawn.Reserve(16);
	LevelsToSpawn.Add(ANivel_IMP0_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_IMP1_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_Trampilla_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_SALIDA_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_BP00_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_Sierras_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_Laser00_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_Laser01_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_SalaAlmacenaje00_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_SalaAlmacenaje01_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_SalaAlmacenaje02_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_SalaAlmacenaje03_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_SalaTarjeta00_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_SalaTarjeta01_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_SalaTarjeta02_C__pf626307183::StaticClass());
	LevelsToSpawn.Add(ANivel_Laser02_C__pf626307183::StaticClass());
	HUDOverlayAsset = UHUDOverlay_C__pf2402407856::StaticClass();
	WInteractWidget = UInteractWB_C__pf2402407856::StaticClass();
	WMapWidget = UMap_C__pf2402407856::StaticClass();
	WPauseMenu = UPauseMenu_C__pf2402407856::StaticClass();
	WAhogamiento = UAhogamiento_C__pf2402407856::StaticClass();
	Wmensaje = UMensajeWidget_C__pf2402407856::StaticClass();
	WInicioFinal = UInicioFinalWB_C__pf2402407856::StaticClass();
	InputYawScale = 2.500000f;
	InputPitchScale = -2.500000f;
	InputRollScale = 1.000000f;
	ForceFeedbackScale = 1.000000f;
	auto& __Local__3 = (*(AccessPrivateProperty<USceneComponent*>((this), AController::__PPO__TransformComponent() )));
	__Local__3 = __Local__0;
}
PRAGMA_ENABLE_OPTIMIZATION
void AMainPlayerController_BP_C__pf1773622777::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void AMainPlayerController_BP_C__pf1773622777::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UAhogamiento_C__pf2402407856::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMap_C__pf2402407856::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMensajeWidget_C__pf2402407856::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UInicioFinalWB_C__pf2402407856::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ATopDownCharacter_C__pf1773622777::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_IMP0_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_IMP1_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_Trampilla_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_SALIDA_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_BP00_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_Sierras_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_Laser00_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_Laser01_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_SalaAlmacenaje00_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_SalaAlmacenaje01_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_SalaAlmacenaje02_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_SalaAlmacenaje03_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_SalaTarjeta00_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_SalaTarjeta01_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_SalaTarjeta02_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ANivel_Laser02_C__pf626307183::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UHUDOverlay_C__pf2402407856::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UInteractWB_C__pf2402407856::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPauseMenu_C__pf2402407856::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__4 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	static TWeakObjectPtr<UProperty> __Local__6{};
	const UProperty* __Local__5 = __Local__6.Get();
	if (nullptr == __Local__5)
	{
		__Local__5 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__5);
		__Local__6 = __Local__5;
	}
	(((UBoolProperty*)__Local__5)->SetPropertyValue_InContainer((__Local__4), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				b0l__K2Node_DynamicCast_AsInicio_Final_WB_1__pf = Cast<UInicioFinalWB_C__pf2402407856>(InicioFinal);
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsInicio_Final_WB_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsInicio_Final_WB_1__pf))
				{
					b0l__K2Node_DynamicCast_AsInicio_Final_WB_1__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 4:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				b0l__K2Node_DynamicCast_AsTop_Down_Character__pf = Cast<ATopDownCharacter_C__pf1773622777>(bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				USkeletalMeshComponent*  __Local__7 = ((USkeletalMeshComponent*)nullptr);
				b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf = UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(((::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__K2Node_DynamicCast_AsTop_Down_Character__pf), ACharacter::__PPO__Mesh() )))) : (__Local__7)), CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AMainPlayerController_BP_C__pf1773622777::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), 1.000000, 0.000000, FName(TEXT("Stand_Up")));
			}
		case 6:
			{
				b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_4__pf.BindUFunction(this,FName(TEXT("OnCompleted_00551C6C47AB92BCD4F7E089643C9D6B")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnCompleted.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_4__pf);
				}
			}
		case 8:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_3__pf.BindUFunction(this,FName(TEXT("OnBlendOut_00551C6C47AB92BCD4F7E089643C9D6B")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnBlendOut.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_3__pf);
				}
			}
		case 9:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("OnInterrupted_00551C6C47AB92BCD4F7E089643C9D6B")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnInterrupted.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_2__pf);
				}
			}
		case 10:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("OnNotifyBegin_00551C6C47AB92BCD4F7E089643C9D6B")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnNotifyBegin.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_1__pf);
				}
			}
		case 11:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnNotifyEnd_00551C6C47AB92BCD4F7E089643C9D6B")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnNotifyEnd.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 61:
			{
				__CurrentState = 62;
				break;
			}
		case 62:
			{
				UKismetSystemLibrary::Delay(this, 0.001000, FLatentActionInfo(1, 406759780, TEXT("ExecuteUbergraph_MainPlayerController_BP_0"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_SetGamePaused_ReturnValue__pf{};
	bool bpfv__CallFunc_SetGamePaused_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				bpfv__CallFunc_SetGamePaused_ReturnValue__pf = UGameplayStatics::SetGamePaused(this, b0l__Temp_bool_Variable__pf);
			}
		case 13:
			{
				UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bShowMouseCursor = b0l__Temp_bool_Variable__pf;
				__CurrentState = 12;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_SetGamePaused_ReturnValue_1__pf = UGameplayStatics::SetGamePaused(this, b0l__Temp_bool_Variable__pf);
			}
		case 16:
			{
				if(::IsValid(MapWidget))
				{
					MapWidget->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 17:
			{
				UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(this, MapWidget, EMouseLockMode::DoNotLock);
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bShowMouseCursor = b0l__Temp_bool_Variable__pf;
				__CurrentState = 15;
				break;
			}
		case 19:
			{
				if (!b0l__Temp_bool_Variable__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 20:
			{
				if(::IsValid(Ahogamiento))
				{
					bpfv__CallFunc_IsVisible_ReturnValue__pf = Ahogamiento->UWidget::IsVisible();
				}
				bpv__AnteriorVisivilidad__pf = bpfv__CallFunc_IsVisible_ReturnValue__pf;
			}
		case 21:
			{
				if(::IsValid(Ahogamiento))
				{
					Ahogamiento->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(Mensaje))
				{
					Mensaje->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 22:
			{
				if(::IsValid(PauseMenu))
				{
					PauseMenu->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = 18;
				break;
			}
		case 23:
			{
				if (!bpv__AnteriorVisivilidad__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 24:
			{
				if(::IsValid(Ahogamiento))
				{
					Ahogamiento->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 25:
			{
				if(::IsValid(PauseMenu))
				{
					PauseMenu->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = 14;
				break;
			}
		case 26:
			{
				if(::IsValid(Ahogamiento))
				{
					Ahogamiento->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = 25;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_Variable__pf);
				b0l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
				__CurrentState = 19;
				break;
			}
		case 38:
			{
				__CurrentState = 39;
				break;
			}
		case 39:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue_1__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf = Cast<ATopDownCharacter_C__pf1773622777>(bpfv__CallFunc_GetPlayerPawn_ReturnValue_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_6__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 40:
			{
				bool  __Local__9 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf)) ? (b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf->bOnAnimation) : (__Local__9)))
				{
					__CurrentState = 27;
					break;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 58);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsInicio_Final_WB__pf = Cast<UInicioFinalWB_C__pf2402407856>(InicioFinal);
	b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsInicio_Final_WB__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsInicio_Final_WB__pf))
	{
		b0l__K2Node_DynamicCast_AsInicio_Final_WB__pf->bpf__WidgetTick__pf(b0l__K2Node_Event_DeltaSeconds__pf);
	}
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 56);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::OpenLevel(this, FName(TEXT("MenuPrincipal")), true, FString(TEXT("")));
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 53);
	// optimized KCST_UnconditionalGoto
	bpv__VolumenMusica__pf = b0l__K2Node_CustomEvent_VolumenMusica__pf;
	bpv__VolumenSonido__pf = b0l__K2Node_CustomEvent_VolumenSonido__pf;
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsMensaje_Widget__pf = Cast<UMensajeWidget_C__pf2402407856>(Mensaje);
	b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsMensaje_Widget__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsMensaje_Widget__pf))
	{
		b0l__K2Node_DynamicCast_AsMensaje_Widget__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsMensaje_Widget__pf))
	{
		b0l__K2Node_DynamicCast_AsMensaje_Widget__pf->bpf__AparecerMensaje__pf(b0l__K2Node_CustomEvent_Mensaje__pf);
	}
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsMap__pf = Cast<UMap_C__pf2402407856>(MapWidget);
	b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsMap__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsMap__pf))
	{
		b0l__K2Node_DynamicCast_AsMap__pf->bpf__ActualizarLlaves__pf();
	}
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 43);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsAhogamiento__pf = Cast<UAhogamiento_C__pf2402407856>(Ahogamiento);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsAhogamiento__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsAhogamiento__pf))
	{
		b0l__K2Node_DynamicCast_AsAhogamiento__pf->bpv__NivelDeFiltro__pf = 1.000000;
	}
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 41);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(Ahogamiento))
	{
		Ahogamiento->SetVisibility(ESlateVisibility::Visible);
	}
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 36);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName__pf;
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName_1__pf;
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 32);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName_2__pf;
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 30);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName_3__pf;
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ExecuteUbergraph_MainPlayerController_BP__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName_4__pf;
	return; //KCST_EndOfThread
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_0(61);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_2(58);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__MenuPrincipal__pf()
{
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_3(56);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__CambiarVolumen__pf(float bpp__VolumenMusica__pf, float bpp__VolumenSonido__pf)
{
	b0l__K2Node_CustomEvent_VolumenMusica__pf = bpp__VolumenMusica__pf;
	b0l__K2Node_CustomEvent_VolumenSonido__pf = bpp__VolumenSonido__pf;
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_4(53);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__AparecerMensaje__pf(const FString& bpp__Mensaje__pf__const)
{
	typedef FString  T__Local__10;
	T__Local__10& bpp__Mensaje__pf = *const_cast<T__Local__10 *>(&bpp__Mensaje__pf__const);
	b0l__K2Node_CustomEvent_Mensaje__pf = bpp__Mensaje__pf;
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_5(49);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__UpdateKeys__pf()
{
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_6(46);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ObtenerFiltro__pf()
{
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_7(43);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__ShowAhogamiento__pf()
{
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_8(41);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__Pausa__pf()
{
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_1(38);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__OnCompleted_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_9(36);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__OnBlendOut_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName_1__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_10(34);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__OnInterrupted_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName_2__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_11(32);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__OnNotifyBegin_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName_3__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_12(30);
}
void AMainPlayerController_BP_C__pf1773622777::bpf__OnNotifyEnd_00551C6C47AB92BCD4F7E089643C9D6B__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName_4__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_MainPlayerController_BP__pf_13(28);
}
PRAGMA_DISABLE_OPTIMIZATION
void AMainPlayerController_BP_C__pf1773622777::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/TopDownCPP/Player/Animations/PlayerAnimMontage.PlayerAnimMontage 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AMainPlayerController_BP_C__pf1773622777::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{50, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.MainPlayerController 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.IsolationUE4Character 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameUserSettings 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
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
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/Ahogamiento.Ahogamiento_C 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/Map.Map_C 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/MensajeWidget.MensajeWidget_C 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/InicioFinalWB.InicioFinalWB_C 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Blueprints/TopDownCharacter.TopDownCharacter_C 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_IMP0.Nivel_IMP0_C 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_IMP1.Nivel_IMP1_C 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_Trampilla.Nivel_Trampilla_C 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_SALIDA.Nivel_SALIDA_C 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_BP00.Nivel_BP00_C 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_Sierras.Nivel_Sierras_C 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_Laser00.Nivel_Laser00_C 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_Laser01.Nivel_Laser01_C 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_SalaAlmacenaje00.Nivel_SalaAlmacenaje00_C 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_SalaAlmacenaje01.Nivel_SalaAlmacenaje01_C 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_SalaAlmacenaje02.Nivel_SalaAlmacenaje02_C 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_SalaAlmacenaje03.Nivel_SalaAlmacenaje03_C 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_SalaTarjeta00.Nivel_SalaTarjeta00_C 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_SalaTarjeta01.Nivel_SalaTarjeta01_C 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_SalaTarjeta02.Nivel_SalaTarjeta02_C 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Niveles/Nivel_Laser02.Nivel_Laser02_C 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/HUDOverlay.HUDOverlay_C 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/InteractWB.InteractWB_C 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/PauseMenu.PauseMenu_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AMainPlayerController_BP_C__pf1773622777
{
	FRegisterHelper__AMainPlayerController_BP_C__pf1773622777()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownCPP/Blueprints/MainPlayerController_BP"), &AMainPlayerController_BP_C__pf1773622777::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AMainPlayerController_BP_C__pf1773622777 Instance;
};
FRegisterHelper__AMainPlayerController_BP_C__pf1773622777 FRegisterHelper__AMainPlayerController_BP_C__pf1773622777::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
