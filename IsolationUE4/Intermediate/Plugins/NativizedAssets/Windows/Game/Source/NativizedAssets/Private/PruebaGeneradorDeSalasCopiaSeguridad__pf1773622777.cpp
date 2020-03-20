#include "NativizedAssets.h"
#include "PruebaGeneradorDeSalasCopiaSeguridad__pf1773622777.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
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
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
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
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "TopDownCharacter__pf1773622777.h"
#include "InteractuablePrueba_BP__pf479927698.h"
#include "MainPlayerController_BP__pf1773622777.h"
#include "IsolationUE4/Nivel.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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
#include "IsolationUE4/Interactuable.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "IsolationUE4/MainPlayerController.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::StaticClass() == GetClass()))
	{
		APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__Sphere__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	bpv__TextRender__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
	RootComponent = bpv__StaticMesh__pf;
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__0 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__0 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->SetCollisionProfileName(FName(TEXT("OverlapAll")));
	static TWeakObjectPtr<UProperty> __Local__2{};
	const UProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	(((UBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__StaticMesh__pf), true, 0));
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(bpv__StaticMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Sphere__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__3 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Sphere__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Sphere__pf->OverrideMaterials.Reserve(1);
	bpv__Sphere__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__Sphere__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Sphere__pf->RelativeLocation = FVector(745.137451, 211.361694, -41.085823);
	bpv__Sphere__pf->RelativeScale3D = FVector(0.500000, 0.500000, 0.500000);
	(((UBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Sphere__pf), true, 0));
	bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TextRender__pf->AttachToComponent(bpv__StaticMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TextRender__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E8DAC5AF4DBAFDF719C6568BAB52E429]\", \"CEAA19DF46F9559C6F67D9A4E88A12C0\", \"GENERADOR DE NIVELES\")")	);
	bpv__TextRender__pf->TextRenderColor = FColor(0, 0, 0, 255);
	bpv__TextRender__pf->RelativeLocation = FVector(-9.163371, -107.328018, 109.902863);
	bpv__TextRender__pf->RelativeRotation = FRotator(0.000000, -180.000366, 0.000000);
	(((UBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__TextRender__pf), false, 0));
	bpv__Direccion__pf = E__Direction__pf::NewEnumerator1;
	bpv__Localizacion__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__OffSet__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__DireccionAnterior__pf = E__Direction__pf::NewEnumerator3;
	bpv__IndiceDeLocalizacion__pf = 0;
	bpv__Suma__pf = 0;
	bpv__Localizaciones__pf = TArray<int32> ();
	bpv__PuedeSpawnear__pf = true;
	bpv__VectorPosicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf = 5;
	bpv__VectorPosicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf = 5;
	bpv__Distancia__pf = 0.000000f;
	bpv__VectorPosicionArray__pf = TArray<FPosicion__pf1773622777> ();
	bpv__DistanciaDeSpawn__pf = 950.000000f;
	bpv__NivelesCreados__pf = TArray<ANivel*> ();
}
PRAGMA_ENABLE_OPTIMIZATION
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TextRender__pf)
	{
		bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ATopDownCharacter_C__pf1773622777::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AInteractuablePrueba_BP_C__pf479927698::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMainPlayerController_BP_C__pf1773622777::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FPosicion__pf1773622777();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPosicion__pf1773622777());
	extern UScriptStruct* Z_Construct_UScriptStruct_FDisenos__pf1773622777();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FDisenos__pf1773622777());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__4 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__5);
	static TWeakObjectPtr<UProperty> __Local__7{};
	const UProperty* __Local__6 = __Local__7.Get();
	if (nullptr == __Local__6)
	{
		__Local__6 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__6);
		__Local__7 = __Local__6;
	}
	(((UBoolProperty*)__Local__6)->SetPropertyValue_InContainer((__Local__4), false, 0));
	__Local__5->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__5->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__5->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__8 = __Local__5->ComponentDelegateBindings[0];
	__Local__8.ComponentPropertyName = FName(TEXT("StaticMesh"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_7__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_3__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_5__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_9__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_10__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_7__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_8__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_9__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_10__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_5__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 24:
			{
				__StateStack.Push(28);
			}
		case 25:
			{
				FCustomThunkTemplates::Array_Get(bpv__VectorPosicionArray__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__VectorPosicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, b0l__CallFunc_Array_Get_Item_1__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__VectorPosicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, b0l__CallFunc_Array_Get_Item_1__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				bpv__PuedeSpawnear__pf = false;
			}
		case 27:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 29:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__VectorPosicionArray__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 30:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable_1__pf;
				__CurrentState = 24;
				break;
			}
		case 31:
			{
				if (!bpv__PuedeSpawnear__pf)
				{
					__CurrentState = 38;
					break;
				}
			}
		case 32:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_1__pf = FCustomThunkTemplates::Array_Add(bpv__VectorPosicionArray__pf, bpv__VectorPosicion__pf);
			}
		case 33:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf = Cast<AMainPlayerController_BP_C__pf1773622777>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 34:
			{
				if(::IsValid(bpv__Sphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__Sphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__VectorPosicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, 0);
				bpfv__CallFunc_Add_IntInt_ReturnValue_7__pf = UKismetMathLibrary::Add_IntInt(bpv__VectorPosicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, 0);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__DistanciaDeSpawn__pf, -1.000000);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, bpv__DistanciaDeSpawn__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Add_IntInt_ReturnValue_7__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_X__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				TArray<TSubclassOf<ANivel> >  __Local__9 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_3__pf = FCustomThunkTemplates::Array_Length(((::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf)) ? (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf->LevelsToSpawn) : (__Local__9)));
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_3__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue_3__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				TArray<TSubclassOf<ANivel> >  __Local__10 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf)) ? (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf->LevelsToSpawn) : (__Local__10)), bpfv__CallFunc_RandomIntegerInRange_ReturnValue_3__pf, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, b0l__CallFunc_Array_Get_Item_3__pf, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 35:
			{
				if(::IsValid(bpv__Sphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__Sphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__VectorPosicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, 0);
				bpfv__CallFunc_Add_IntInt_ReturnValue_7__pf = UKismetMathLibrary::Add_IntInt(bpv__VectorPosicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, 0);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__DistanciaDeSpawn__pf, -1.000000);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, bpv__DistanciaDeSpawn__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Add_IntInt_ReturnValue_7__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_X__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<ANivel>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 36:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->SetPosition(bpv__VectorPosicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, bpv__VectorPosicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf);
				}
			}
		case 37:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_2__pf = FCustomThunkTemplates::Array_Add(bpv__NivelesCreados__pf, b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				bpf__VueltaAEmpezar__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 40:
			{
				b0l__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 41:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 29;
				break;
			}
		case 42:
			{
				__StateStack.Push(46);
			}
		case 43:
			{
				bpv__PuedeSpawnear__pf = true;
			}
		case 44:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomIntegerInRange(0, 6);
				b0l__K2Node_MakeStruct_Posicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf = bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf;
				b0l__K2Node_MakeStruct_Posicion__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf = 0;
				bpv__VectorPosicion__pf = b0l__K2Node_MakeStruct_Posicion__pf;
			}
		case 45:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf = UKismetMathLibrary::RandomIntegerInRange(0, 6);
				b0l__K2Node_MakeStruct_Posicion_1__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf = bpv__VectorPosicion__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf;
				b0l__K2Node_MakeStruct_Posicion_1__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf = bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf;
				bpv__VectorPosicion__pf = b0l__K2Node_MakeStruct_Posicion_1__pf;
				__CurrentState = 39;
				break;
			}
		case 46:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
			}
		case 47:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable__pf, 30);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 48;
					break;
				}
				__CurrentState = 42;
				break;
			}
		case 48:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf = Cast<AMainPlayerController_BP_C__pf1773622777>(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 49:
			{
				b0l__Temp_int_Loop_Counter_Variable_3__pf = 0;
			}
		case 50:
			{
				b0l__Temp_int_Array_Index_Variable_3__pf = 0;
			}
		case 51:
			{
				TArray<TSubclassOf<ANivel> >  __Local__11 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_4__pf = FCustomThunkTemplates::Array_Length(((::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf)) ? (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf->LevelsToSpawn) : (__Local__11)));
				bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_3__pf, bpfv__CallFunc_Array_Length_ReturnValue_4__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 52:
			{
				b0l__Temp_int_Array_Index_Variable_3__pf = b0l__Temp_int_Loop_Counter_Variable_3__pf;
			}
		case 53:
			{
				__StateStack.Push(76);
			}
		case 54:
			{
				TArray<TSubclassOf<ANivel> >  __Local__12 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf)) ? (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf->LevelsToSpawn) : (__Local__12)), b0l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, b0l__CallFunc_Array_Get_Item_4__pf, /*out*/ TArrayCaster<ANivel*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 55:
			{
				b0l__Temp_int_Loop_Counter_Variable_4__pf = 0;
			}
		case 56:
			{
				b0l__Temp_int_Array_Index_Variable_4__pf = 0;
			}
		case 57:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_5__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_4__pf, bpfv__CallFunc_Array_Length_ReturnValue_5__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 58:
			{
				b0l__Temp_int_Array_Index_Variable_4__pf = b0l__Temp_int_Loop_Counter_Variable_4__pf;
			}
		case 59:
			{
				__StateStack.Push(75);
			}
		case 60:
			{
				b0l__Temp_int_Loop_Counter_Variable_2__pf = 0;
			}
		case 61:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 62:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpv__VectorPosicionArray__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 63:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = b0l__Temp_int_Loop_Counter_Variable_2__pf;
			}
		case 64:
			{
				__StateStack.Push(74);
			}
		case 65:
			{
				FCustomThunkTemplates::Array_Get(bpv__VectorPosicionArray__pf, b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				int32  __Local__13 = 0;
				bpfv__CallFunc_Add_IntInt_ReturnValue_9__pf = UKismetMathLibrary::Add_IntInt(((::IsValid(b0l__CallFunc_Array_Get_Item_5__pf)) ? (b0l__CallFunc_Array_Get_Item_5__pf->X) : (__Local__13)), 1);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_7__pf = UKismetMathLibrary::EqualEqual_IntInt(b0l__CallFunc_Array_Get_Item_2__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, bpfv__CallFunc_Add_IntInt_ReturnValue_9__pf);
				int32  __Local__14 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_10__pf = UKismetMathLibrary::EqualEqual_IntInt(b0l__CallFunc_Array_Get_Item_2__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, ((::IsValid(b0l__CallFunc_Array_Get_Item_5__pf)) ? (b0l__CallFunc_Array_Get_Item_5__pf->Y) : (__Local__14)));
				bpfv__CallFunc_BooleanAND_ReturnValue_5__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_7__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_10__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_5__pf)
				{
					__CurrentState = 67;
					break;
				}
			}
		case 66:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_5__pf))
				{
					b0l__CallFunc_Array_Get_Item_5__pf->SetDirection(0);
				}
			}
		case 67:
			{
				FCustomThunkTemplates::Array_Get(bpv__VectorPosicionArray__pf, b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				int32  __Local__15 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__CallFunc_Array_Get_Item_5__pf)) ? (b0l__CallFunc_Array_Get_Item_5__pf->X) : (__Local__15)), 1);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_6__pf = UKismetMathLibrary::EqualEqual_IntInt(b0l__CallFunc_Array_Get_Item_2__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf);
				int32  __Local__16 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_9__pf = UKismetMathLibrary::EqualEqual_IntInt(b0l__CallFunc_Array_Get_Item_2__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, ((::IsValid(b0l__CallFunc_Array_Get_Item_5__pf)) ? (b0l__CallFunc_Array_Get_Item_5__pf->Y) : (__Local__16)));
				bpfv__CallFunc_BooleanAND_ReturnValue_4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_6__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_9__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_4__pf)
				{
					__CurrentState = 69;
					break;
				}
			}
		case 68:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_5__pf))
				{
					b0l__CallFunc_Array_Get_Item_5__pf->SetDirection(1);
				}
			}
		case 69:
			{
				FCustomThunkTemplates::Array_Get(bpv__VectorPosicionArray__pf, b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				int32  __Local__17 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_5__pf = UKismetMathLibrary::EqualEqual_IntInt(((::IsValid(b0l__CallFunc_Array_Get_Item_5__pf)) ? (b0l__CallFunc_Array_Get_Item_5__pf->X) : (__Local__17)), b0l__CallFunc_Array_Get_Item_2__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf);
				int32  __Local__18 = 0;
				bpfv__CallFunc_Add_IntInt_ReturnValue_10__pf = UKismetMathLibrary::Add_IntInt(((::IsValid(b0l__CallFunc_Array_Get_Item_5__pf)) ? (b0l__CallFunc_Array_Get_Item_5__pf->Y) : (__Local__18)), 1);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_8__pf = UKismetMathLibrary::EqualEqual_IntInt(b0l__CallFunc_Array_Get_Item_2__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, bpfv__CallFunc_Add_IntInt_ReturnValue_10__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_5__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_8__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_3__pf)
				{
					__CurrentState = 71;
					break;
				}
			}
		case 70:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_5__pf))
				{
					b0l__CallFunc_Array_Get_Item_5__pf->SetDirection(2);
				}
			}
		case 71:
			{
				FCustomThunkTemplates::Array_Get(bpv__VectorPosicionArray__pf, b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				int32  __Local__19 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__CallFunc_Array_Get_Item_5__pf)) ? (b0l__CallFunc_Array_Get_Item_5__pf->Y) : (__Local__19)), 1);
				int32  __Local__20 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf = UKismetMathLibrary::EqualEqual_IntInt(b0l__CallFunc_Array_Get_Item_2__pf.bpv__X_3_ED5DB43747FA6919F00C359E3381C62C__pf, ((::IsValid(b0l__CallFunc_Array_Get_Item_5__pf)) ? (b0l__CallFunc_Array_Get_Item_5__pf->X) : (__Local__20)));
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_4__pf = UKismetMathLibrary::EqualEqual_IntInt(b0l__CallFunc_Array_Get_Item_2__pf.bpv__Y_4_2326A0494C21248A7B7D06BCE6772EF5__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_4__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_2__pf)
				{
					__CurrentState = 73;
					break;
				}
			}
		case 72:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_5__pf))
				{
					b0l__CallFunc_Array_Get_Item_5__pf->SetDirection(3);
				}
			}
		case 73:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_5__pf))
				{
					b0l__CallFunc_Array_Get_Item_5__pf->UpdateDoors();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 74:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 62;
				break;
			}
		case 75:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_4__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_4__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf;
				__CurrentState = 57;
				break;
			}
		case 76:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_3__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf;
				__CurrentState = 51;
				break;
			}
		case 77:
			{
				b0l__Temp_int_Variable__pf = 0;
				__CurrentState = 47;
				break;
			}
		case 102:
			{
				__CurrentState = 77;
				break;
			}
		case 103:
			{
				__CurrentState = 43;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 78:
			{
				__CurrentState = 79;
				break;
			}
		case 79:
			{
				b0l__K2Node_DynamicCast_AsTop_Down_Character__pf = Cast<ATopDownCharacter_C__pf1773622777>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 80:
			{
				bpf__ProcesoDeCreacion2__pf();
				__CurrentState = -1;
				break;
			}
		case 104:
			{
				__CurrentState = 80;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_8__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Localizaciones__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				b0l__Temp_int_Array_Index_Variable_2__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 4:
			{
				__StateStack.Push(1);
			}
		case 5:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_6__pf = UKismetMathLibrary::Add_IntInt(bpv__IndiceDeLocalizacion__pf, bpv__Suma__pf);
				FCustomThunkTemplates::Array_Get(bpv__Localizaciones__pf, b0l__Temp_int_Array_Index_Variable_2__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Add_IntInt_ReturnValue_6__pf, b0l__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpv__PuedeSpawnear__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				if (!bpv__PuedeSpawnear__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_6__pf = UKismetMathLibrary::Add_IntInt(bpv__IndiceDeLocalizacion__pf, bpv__Suma__pf);
				bpv__IndiceDeLocalizacion__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_6__pf;
			}
		case 9:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Direccion__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Direccion__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 19;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Direccion__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Direccion__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 21;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpf__VolverAlSwitch__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpv__OffSet__pf = FVector(-120.000000,0.000000,0.000000);
			}
		case 12:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpv__Localizacion__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AInteractuablePrueba_BP_C__pf479927698::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 13:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpv__Localizacion__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				b0l__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AInteractuablePrueba_BP_C__pf479927698>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 14:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					b0l__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__Indice__pf = bpv__IndiceDeLocalizacion__pf;
				}
			}
		case 15:
			{
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__Localizacion__pf, bpv__OffSet__pf);
				bpv__Localizacion__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue__pf;
			}
		case 16:
			{
				bpv__DireccionAnterior__pf = bpv__Direccion__pf;
			}
		case 17:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__Localizaciones__pf, bpv__IndiceDeLocalizacion__pf);
			}
		case 18:
			{
				bpv__PuedeSpawnear__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpv__OffSet__pf = FVector(0.000000,-120.000000,0.000000);
				__CurrentState = 12;
				break;
			}
		case 20:
			{
				bpv__OffSet__pf = FVector(120.000000,0.000000,0.000000);
				__CurrentState = 12;
				break;
			}
		case 21:
			{
				bpv__OffSet__pf = FVector(0.000000,120.000000,0.000000);
				__CurrentState = 12;
				break;
			}
		case 22:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 23:
			{
				b0l__Temp_int_Array_Index_Variable_2__pf = 0;
				__CurrentState = 2;
				break;
			}
		case 81:
			{
				__CurrentState = 82;
				break;
			}
		case 82:
			{
				if(::IsValid(bpv__Sphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Sphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpv__Localizacion__pf = bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf;
			}
		case 83:
			{
				b0l__Temp_int_Variable_1__pf = 0;
			}
		case 84:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable_1__pf, 8);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 85:
			{
				__StateStack.Push(100);
			}
		case 86:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, 3);
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 97;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 94;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 91;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 3);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 87;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 87:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__DireccionAnterior__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf)
				{
					__CurrentState = 89;
					break;
				}
			}
		case 88:
			{
				bpf__VolverAlSwitch__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 89:
			{
				bpv__Direccion__pf = E__Direction__pf::NewEnumerator3;
			}
		case 90:
			{
				bpv__Suma__pf = -1;
				__CurrentState = 22;
				break;
			}
		case 91:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__DireccionAnterior__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator0));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf)
				{
					__CurrentState = 92;
					break;
				}
				__CurrentState = 88;
				break;
			}
		case 92:
			{
				bpv__Direccion__pf = E__Direction__pf::NewEnumerator2;
			}
		case 93:
			{
				bpv__Suma__pf = -3;
				__CurrentState = 22;
				break;
			}
		case 94:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__DireccionAnterior__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator3));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = 95;
					break;
				}
				__CurrentState = 88;
				break;
			}
		case 95:
			{
				bpv__Direccion__pf = E__Direction__pf::NewEnumerator1;
			}
		case 96:
			{
				bpv__Suma__pf = 1;
				__CurrentState = 22;
				break;
			}
		case 97:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__DireccionAnterior__pf), static_cast<uint8>(E__Direction__pf::NewEnumerator2));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 98;
					break;
				}
				__CurrentState = 88;
				break;
			}
		case 98:
			{
				bpv__Direccion__pf = E__Direction__pf::NewEnumerator0;
			}
		case 99:
			{
				bpv__Suma__pf = 3;
				__CurrentState = 22;
				break;
			}
		case 100:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_8__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable_1__pf, 1);
				b0l__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_8__pf;
				__CurrentState = 84;
				break;
			}
		case 101:
			{
				__CurrentState = 86;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_1(104);
}
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::bpf__VueltaAEmpezar__pf()
{
	bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_0(103);
}
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::bpf__ProcesoDeCreacion2__pf()
{
	bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_0(102);
}
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::bpf__VolverAlSwitch__pf()
{
	bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_2(101);
}
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::bpf__ProcesoDeCreacion__pf()
{
	bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_2(81);
}
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::bpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__21;
	T__Local__21& bpp__SweepResult__pf = *const_cast<T__Local__21 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_PruebaGeneradorDeSalasCopiaSeguridad__pf_1(78);
}
PRAGMA_DISABLE_OPTIMIZATION
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cone.Cone 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{185, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.Nivel 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.MainPlayerController 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/TopDownCPP/Player/Animations/PlayerAnimMontage.PlayerAnimMontage 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.IsolationUE4Character 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
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
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
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
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Blueprints/TopDownCharacter.TopDownCharacter_C 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/GameplayMechanics/InteractuablePrueba_BP.InteractuablePrueba_BP_C 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Blueprints/MainPlayerController_BP.MainPlayerController_BP_C 
		{156, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/TopDownCPP/Blueprints/Posicion.Posicion 
		{189, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/TopDownCPP/Blueprints/Disenos.Disenos 
		{157, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/TopDownCPP/Blueprints/Direction.Direction 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777
{
	FRegisterHelper__APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownCPP/Blueprints/PruebaGeneradorDeSalasCopiaSeguridad"), &APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::__StaticDependenciesAssets);
	}
	static FRegisterHelper__APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777 Instance;
};
FRegisterHelper__APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777 FRegisterHelper__APruebaGeneradorDeSalasCopiaSeguridad_C__pf1773622777::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
