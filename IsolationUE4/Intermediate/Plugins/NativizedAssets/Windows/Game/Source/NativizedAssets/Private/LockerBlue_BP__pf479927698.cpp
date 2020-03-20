#include "NativizedAssets.h"
#include "LockerBlue_BP__pf479927698.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
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
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
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
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
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
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "MainPlayerController_BP__pf1773622777.h"
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
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Puzzle_Bombillas_BP__pf479927698.h"
#include "Nivel_SALIDA__pf626307183.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Volumetrics_BP__pf2692903288.h"
#include "Direction__pf1773622777.h"
#include "Map__pf2402407856.h"
#include "Posicion__pf1773622777.h"
#include "Ahogamiento__pf2402407856.h"
#include "IsolationUE4/Nivel.h"
#include "IsolationUE4/MainPlayerController.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "IsolationUE4/IsolationUE4Character.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ALockerBlue_BP_C__pf479927698::ALockerBlue_BP_C__pf479927698(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ALockerBlue_BP_C__pf479927698::StaticClass() == GetClass()))
	{
		ALockerBlue_BP_C__pf479927698::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UStaticMeshComponent>(this->GetDefaultSubobjectByName(TEXT("MeshPrincipal")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UBoxComponent>(this->GetDefaultSubobjectByName(TEXT("BoxTrigger")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USphereComponent>(this->GetDefaultSubobjectByName(TEXT("LocalizacionWidget")), ECastCheckedType::NullAllowed);
	auto __Local__3 = CastChecked<UStaticMeshComponent>(this->GetDefaultSubobjectByName(TEXT("Mesh1")), ECastCheckedType::NullAllowed);
	auto __Local__4 = CastChecked<UStaticMeshComponent>(this->GetDefaultSubobjectByName(TEXT("Mesh2")), ECastCheckedType::NullAllowed);
	auto __Local__5 = CastChecked<UStaticMeshComponent>(this->GetDefaultSubobjectByName(TEXT("Mesh3")), ECastCheckedType::NullAllowed);
	auto __Local__6 = CastChecked<UStaticMeshComponent>(this->GetDefaultSubobjectByName(TEXT("Mesh4")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'MeshPrincipal' //
		auto& __Local__7 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__0), UStaticMeshComponent::__PPO__StaticMesh() )));
		__Local__7 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ALockerBlue_BP_C__pf479927698::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__0->RelativeScale3D = FVector(3.000000, 3.000000, 3.000000);
		static TWeakObjectPtr<UProperty> __Local__9{};
		const UProperty* __Local__8 = __Local__9.Get();
		if (nullptr == __Local__8)
		{
			__Local__8 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__8);
			__Local__9 = __Local__8;
		}
		(((UBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__0), true, 0));
		// --- END default subobject 'MeshPrincipal' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'BoxTrigger' //
		auto& __Local__10 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__1), USceneComponent::__PPO__AttachParent() )));
		__Local__10 = __Local__0;
		__Local__1->RelativeLocation = FVector(-42.838425, -35.054058, 33.617386);
		__Local__1->RelativeScale3D = FVector(0.319467, 0.424543, 0.630237);
		static TWeakObjectPtr<UProperty> __Local__12{};
		const UProperty* __Local__11 = __Local__12.Get();
		if (nullptr == __Local__11)
		{
			__Local__11 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__11);
			__Local__12 = __Local__11;
		}
		(((UBoolProperty*)__Local__11)->SetPropertyValue_InContainer((__Local__1), true, 0));
		// --- END default subobject 'BoxTrigger' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'LocalizacionWidget' //
		auto& __Local__13 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__13 = __Local__0;
		__Local__2->RelativeLocation = FVector(-43.875977, -47.878197, 73.574829);
		__Local__2->RelativeScale3D = FVector(0.407992, 1.000000, 1.000000);
		static TWeakObjectPtr<UProperty> __Local__15{};
		const UProperty* __Local__14 = __Local__15.Get();
		if (nullptr == __Local__14)
		{
			__Local__14 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__14);
			__Local__15 = __Local__14;
		}
		(((UBoolProperty*)__Local__14)->SetPropertyValue_InContainer((__Local__2), true, 0));
		// --- END default subobject 'LocalizacionWidget' //
	}
	if(__Local__3)
	{
		// --- Default subobject 'Mesh1' //
		auto& __Local__16 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__3), USceneComponent::__PPO__AttachParent() )));
		__Local__16 = __Local__0;
		static TWeakObjectPtr<UProperty> __Local__18{};
		const UProperty* __Local__17 = __Local__18.Get();
		if (nullptr == __Local__17)
		{
			__Local__17 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__17);
			__Local__18 = __Local__17;
		}
		(((UBoolProperty*)__Local__17)->SetPropertyValue_InContainer((__Local__3), true, 0));
		// --- END default subobject 'Mesh1' //
	}
	if(__Local__4)
	{
		// --- Default subobject 'Mesh2' //
		auto& __Local__19 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__4), USceneComponent::__PPO__AttachParent() )));
		__Local__19 = __Local__0;
		static TWeakObjectPtr<UProperty> __Local__21{};
		const UProperty* __Local__20 = __Local__21.Get();
		if (nullptr == __Local__20)
		{
			__Local__20 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__20);
			__Local__21 = __Local__20;
		}
		(((UBoolProperty*)__Local__20)->SetPropertyValue_InContainer((__Local__4), true, 0));
		// --- END default subobject 'Mesh2' //
	}
	if(__Local__5)
	{
		// --- Default subobject 'Mesh3' //
		auto& __Local__22 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__5), USceneComponent::__PPO__AttachParent() )));
		__Local__22 = __Local__0;
		static TWeakObjectPtr<UProperty> __Local__24{};
		const UProperty* __Local__23 = __Local__24.Get();
		if (nullptr == __Local__23)
		{
			__Local__23 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__23);
			__Local__24 = __Local__23;
		}
		(((UBoolProperty*)__Local__23)->SetPropertyValue_InContainer((__Local__5), true, 0));
		// --- END default subobject 'Mesh3' //
	}
	if(__Local__6)
	{
		// --- Default subobject 'Mesh4' //
		auto& __Local__25 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__6), USceneComponent::__PPO__AttachParent() )));
		__Local__25 = __Local__0;
		static TWeakObjectPtr<UProperty> __Local__27{};
		const UProperty* __Local__26 = __Local__27.Get();
		if (nullptr == __Local__26)
		{
			__Local__26 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__26);
			__Local__27 = __Local__26;
		}
		(((UBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__6), true, 0));
		// --- END default subobject 'Mesh4' //
	}
	bpv__Sphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	bpv__Puerta__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Puerta"));
	bpv__Puerta1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Puerta1"));
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Sphere__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Sphere__pf->RelativeLocation = FVector(-51.306072, -38.070667, 49.358429);
	bpv__Sphere__pf->RelativeScale3D = FVector(0.734263, 0.734263, 0.101009);
	static TWeakObjectPtr<UProperty> __Local__29{};
	const UProperty* __Local__28 = __Local__29.Get();
	if (nullptr == __Local__28)
	{
		__Local__28 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__28);
		__Local__29 = __Local__28;
	}
	(((UBoolProperty*)__Local__28)->SetPropertyValue_InContainer((bpv__Sphere__pf), true, 0));
	bpv__Puerta__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Puerta__pf->AttachToComponent(bpv__Sphere__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__30 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Puerta__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__30 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ALockerBlue_BP_C__pf479927698::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Puerta__pf->RelativeLocation = FVector(11.217221, -1.499704, -146.384842);
	bpv__Puerta__pf->RelativeScale3D = FVector(0.252310, 0.044715, 4.855324);
	(((UBoolProperty*)__Local__28)->SetPropertyValue_InContainer((bpv__Puerta__pf), true, 0));
	bpv__Puerta1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Puerta1__pf->AttachToComponent(bpv__Puerta__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__31 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Puerta1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__31 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ALockerBlue_BP_C__pf479927698::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Puerta1__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Puerta1__pf->OverrideMaterials.Reserve(1);
	bpv__Puerta1__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ALockerBlue_BP_C__pf479927698::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__Puerta1__pf->RelativeLocation = FVector(35.761356, 49.046906, 19.593061);
	bpv__Puerta1__pf->RelativeScale3D = FVector(0.223226, 1.000000, 0.129883);
	(((UBoolProperty*)__Local__28)->SetPropertyValue_InContainer((bpv__Puerta1__pf), true, 0));
	bpv__Rotar_NewTrack_0_9EDF7CED40D639C6F2E40FAA59E5567B__pf = 0.000000f;
	bpv__Rotar__Direction_9EDF7CED40D639C6F2E40FAA59E5567B__pf = ETimelineDirection::Type::Forward;
	bpv__Rotar__pf = nullptr;
	bpv__bHaSidoAbierto__pf = false;
	bpv__bHaSidoUsado__pf = false;
	MeshPrincipal = __Local__0;
	Mesh1 = __Local__3;
	Mesh2 = __Local__4;
	Mesh3 = __Local__5;
	Mesh4 = __Local__6;
	BoxTrigger = __Local__1;
	LocalizacionWidget = __Local__2;
}
PRAGMA_ENABLE_OPTIMIZATION
void ALockerBlue_BP_C__pf479927698::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Puerta__pf)
	{
		bpv__Puerta__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Puerta1__pf)
	{
		bpv__Puerta1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ALockerBlue_BP_C__pf479927698::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ATopDownCharacter_C__pf1773622777::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__32 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__32);
	auto __Local__33 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Rotar_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__33);
	static TWeakObjectPtr<UProperty> __Local__35{};
	const UProperty* __Local__34 = __Local__35.Get();
	if (nullptr == __Local__34)
	{
		__Local__34 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__34);
		__Local__35 = __Local__34;
	}
	(((UBoolProperty*)__Local__34)->SetPropertyValue_InContainer((__Local__32), false, 0));
	__Local__33->TimelineLength = 1.250000f;
	__Local__33->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__33->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__33->FloatTracks.GetData(), 1);
	auto& __Local__36 = __Local__33->FloatTracks[0];
	auto __Local__37 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__37);
	__Local__37->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__37->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__37->FloatCurve.Keys.GetData(), 2);
	auto& __Local__38 = __Local__37->FloatCurve.Keys[0];
	auto& __Local__39 = __Local__37->FloatCurve.Keys[1];
	__Local__39.Time = 1.250000f;
	__Local__39.Value = 90.000000f;
	__Local__36.CurveFloat = __Local__37;
	auto& __Local__40 = (*(AccessPrivateProperty<FName >(&(__Local__36), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__40 = FName(TEXT("Rotar_NewTrack_0_9EDF7CED40D639C6F2E40FAA59E5567B"));
	auto& __Local__41 = (*(AccessPrivateProperty<FName >(&(__Local__36), FTTTrackBase::__PPO__TrackName() )));
	__Local__41 = FName(TEXT("NewTrack_0"));
	__Local__33->TimelineGuid = FGuid(0x9EDF7CED, 0x40D639C6, 0xF2E40FAA, 0x59E5567B);
	auto& __Local__42 = (*(AccessPrivateProperty<FName >((__Local__33), UTimelineTemplate::__PPO__VariableName() )));
	__Local__42 = FName(TEXT("Rotar"));
	auto& __Local__43 = (*(AccessPrivateProperty<FName >((__Local__33), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__43 = FName(TEXT("Rotar__Direction_9EDF7CED40D639C6F2E40FAA59E5567B"));
	auto& __Local__44 = (*(AccessPrivateProperty<FName >((__Local__33), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__44 = FName(TEXT("Rotar__UpdateFunc"));
	auto& __Local__45 = (*(AccessPrivateProperty<FName >((__Local__33), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__45 = FName(TEXT("Rotar__FinishedFunc"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ALockerBlue_BP_C__pf479927698::bpf__ExecuteUbergraph_LockerBlue_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue_2__pf{};
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
					b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf->bpf__AparecerMensaje__pf(FString(TEXT("¡No tienes llaves azules!")));
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				if(::IsValid(bpv__Rotar__pf))
				{
					bpv__Rotar__pf->UTimelineComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				b0l__K2Node_DynamicCast_AsTop_Down_Character__pf = Cast<ATopDownCharacter_C__pf1773622777>(bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 16:
			{
				int32  __Local__46 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf)) ? (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf->bpv__LlavesAzules__pf) : (__Local__46)), 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 17:
			{
				if (!bpv__bHaSidoAbierto__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 18:
			{
				if (!bpv__bHaSidoUsado__pf)
				{
					__CurrentState = 24;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				if (!bpv__bHaSidoAbierto__pf)
				{
					__CurrentState = 1;
					break;
				}
				__CurrentState = 18;
				break;
			}
		case 20:
			{
				bpv__bHaSidoAbierto__pf = true;
			}
		case 21:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue_1__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf = Cast<ATopDownCharacter_C__pf1773622777>(bpfv__CallFunc_GetPlayerPawn_ReturnValue_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 22:
			{
				int32  __Local__47 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf)) ? (b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf->bpv__LlavesAzules__pf) : (__Local__47)), 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 23:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf))
				{
					b0l__K2Node_DynamicCast_AsTop_Down_Character_1__pf->bpv__LlavesAzules__pf = b0l__Temp_int_Variable__pf;
				}
				__CurrentState = 13;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf = Cast<AMainPlayerController_BP_C__pf1773622777>(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 25:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf))
				{
					b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf->bpf__ObtenerFiltro__pf();
				}
			}
		case 26:
			{
				bpv__bHaSidoUsado__pf = true;
			}
		case 27:
			{
				if(::IsValid(BoxTrigger))
				{
					BoxTrigger->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 28:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue_2__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				b0l__K2Node_DynamicCast_AsTop_Down_Character_2__pf = Cast<ATopDownCharacter_C__pf1773622777>(bpfv__CallFunc_GetPlayerPawn_ReturnValue_2__pf);
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 29:
			{
				USkeletalMeshComponent*  __Local__48 = ((USkeletalMeshComponent*)nullptr);
				b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf = UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(((::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character_2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__K2Node_DynamicCast_AsTop_Down_Character_2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__48)), CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ALockerBlue_BP_C__pf479927698::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), 1.000000, 0.000000, FName(TEXT("Taking_Item")));
			}
		case 30:
			{
				b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 31:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_4__pf.BindUFunction(this,FName(TEXT("OnCompleted_850AD11F4E9E08E072B9C29CADC71DCA")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnCompleted.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_4__pf);
				}
			}
		case 32:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_3__pf.BindUFunction(this,FName(TEXT("OnBlendOut_850AD11F4E9E08E072B9C29CADC71DCA")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnBlendOut.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_3__pf);
				}
			}
		case 33:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("OnInterrupted_850AD11F4E9E08E072B9C29CADC71DCA")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnInterrupted.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_2__pf);
				}
			}
		case 34:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("OnNotifyBegin_850AD11F4E9E08E072B9C29CADC71DCA")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnNotifyBegin.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_1__pf);
				}
			}
		case 35:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnNotifyEnd_850AD11F4E9E08E072B9C29CADC71DCA")));
				if(::IsValid(b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnNotifyEnd.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ALockerBlue_BP_C__pf479927698::bpf__ExecuteUbergraph_LockerBlue_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 38);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_2__pf = Cast<AMainPlayerController_BP_C__pf1773622777>(bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf);
	b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_2__pf))
	{
		b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_2__pf->bpf__UpdateKeys__pf();
	}
	return; // KCST_GotoReturn
}
void ALockerBlue_BP_C__pf479927698::bpf__ExecuteUbergraph_LockerBlue_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 37);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__Rotar_NewTrack_0_9EDF7CED40D639C6F2E40FAA59E5567B__pf);
	if(::IsValid(bpv__Sphere__pf))
	{
		bpv__Sphere__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
	}
	return; // KCST_GotoReturn
}
void ALockerBlue_BP_C__pf479927698::bpf__ExecuteUbergraph_LockerBlue_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName__pf;
	return; // KCST_GotoReturn
}
void ALockerBlue_BP_C__pf479927698::bpf__ExecuteUbergraph_LockerBlue_BP__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName_1__pf;
	return; // KCST_GotoReturn
}
void ALockerBlue_BP_C__pf479927698::bpf__ExecuteUbergraph_LockerBlue_BP__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName_2__pf;
	return; // KCST_GotoReturn
}
void ALockerBlue_BP_C__pf479927698::bpf__ExecuteUbergraph_LockerBlue_BP__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName_3__pf;
	return; // KCST_GotoReturn
}
void ALockerBlue_BP_C__pf479927698::bpf__ExecuteUbergraph_LockerBlue_BP__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = b0l__K2Node_CustomEvent_NotifyName_4__pf;
	return; // KCST_GotoReturn
}
void ALockerBlue_BP_C__pf479927698::bpf__InteraccionBlueprint__pf()
{
	bpf__ExecuteUbergraph_LockerBlue_BP__pf_0(14);
}
void ALockerBlue_BP_C__pf479927698::bpf__OnCompleted_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_LockerBlue_BP__pf_3(11);
}
void ALockerBlue_BP_C__pf479927698::bpf__OnBlendOut_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName_1__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_LockerBlue_BP__pf_4(9);
}
void ALockerBlue_BP_C__pf479927698::bpf__OnInterrupted_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName_2__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_LockerBlue_BP__pf_5(7);
}
void ALockerBlue_BP_C__pf479927698::bpf__OnNotifyBegin_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName_3__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_LockerBlue_BP__pf_6(5);
}
void ALockerBlue_BP_C__pf479927698::bpf__OnNotifyEnd_850AD11F4E9E08E072B9C29CADC71DCA__pf(FName bpp__NotifyName__pf)
{
	b0l__K2Node_CustomEvent_NotifyName_4__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_LockerBlue_BP__pf_7(3);
}
void ALockerBlue_BP_C__pf479927698::bpf__Rotar__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_LockerBlue_BP__pf_2(37);
}
void ALockerBlue_BP_C__pf479927698::bpf__Rotar__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_LockerBlue_BP__pf_1(38);
}
PRAGMA_DISABLE_OPTIMIZATION
void ALockerBlue_BP_C__pf479927698::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Locker.Set_Assets_1_Locker 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_BlueOnly.VertexColorViewMode_BlueOnly 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/TopDownCPP/Player/Animations/PlayerAnimMontage.PlayerAnimMontage 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ALockerBlue_BP_C__pf479927698::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{48, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.Interactuable 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{95, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameUserSettings 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.IsolationUE4Character 
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
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/TopDownCPP/Player/Animations/RunWalkBlendSpace.RunWalkBlendSpace 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_PAredPuerta.Set_Room_1_PAredPuerta 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_ParedSimple001.Set_Room_1_ParedSimple001 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_ParedSimple003.Set_Room_1_ParedSimple003 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_SueloLow.Set_Room_1_SueloLow 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Scene/Texture/Alice/SueloParedes.SueloParedes 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineMeshes/Sphere.Sphere 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PointLightComponent 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.MainPlayerController 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.Nivel 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/AmarilloSalida.AmarilloSalida 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/HUD/KeyTransparente.KeyTransparente 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Azulito.Azulito 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Rojo.Rojo 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Verde.Verde 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
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
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/11.11 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/12.12 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/13.13 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/14.14 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/15.15 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/NumerosDePrueba/16.16 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.GridPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/TopDownCPP/Effects/VolumetricGas/VolumetricGas_Inst.VolumetricGas_Inst 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_RojoEmisivo.M_RojoEmisivo 
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
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_AzulEmisivo.M_AzulEmisivo 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Barrel.Set_Assets_1_Barrel 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineMeshes/Cube.Cube 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Scene/Texture/Alice/DeadBody.DeadBody 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Rojizo.Rojizo 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/saw.saw 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_Sierra.M_Sierra 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_Negro.M_Negro 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_VerdeEmisivo.M_VerdeEmisivo 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_YellowOnly.VertexColorViewMode_YellowOnly 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_RedOnly.VertexColorViewMode_RedOnly 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.RectLightComponent 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_GreenOnly.VertexColorViewMode_GreenOnly 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Blueprints/MainPlayerController_BP.MainPlayerController_BP_C 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Blueprints/TopDownCharacter.TopDownCharacter_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ALockerBlue_BP_C__pf479927698
{
	FRegisterHelper__ALockerBlue_BP_C__pf479927698()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownCPP/GameplayMechanics/LockerBlue_BP"), &ALockerBlue_BP_C__pf479927698::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ALockerBlue_BP_C__pf479927698 Instance;
};
FRegisterHelper__ALockerBlue_BP_C__pf479927698 FRegisterHelper__ALockerBlue_BP_C__pf479927698::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
