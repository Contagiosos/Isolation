#include "NativizedAssets.h"
#include "Nivel_Laser00__pf626307183.h"
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
#include "Laser_BP__pf479927698.h"
#include "LockerBlue_BP__pf479927698.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
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
ANivel_Laser00_C__pf626307183::ANivel_Laser00_C__pf626307183(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ANivel_Laser00_C__pf626307183::StaticClass() == GetClass()))
	{
		ANivel_Laser00_C__pf626307183::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
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
	bpv__Laser0__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser0"));
	bpv__Laser1__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser1"));
	bpv__Laser2__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser2"));
	bpv__Laser3__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser3"));
	bpv__Laser4__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser4"));
	bpv__Laser5__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser5"));
	bpv__Laser6__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser6"));
	bpv__Laser7__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser7"));
	bpv__Laser8__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser8"));
	bpv__Laser9__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser9"));
	bpv__Laser10__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser10"));
	bpv__Laser11__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser11"));
	bpv__Laser12__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser12"));
	bpv__Laser13__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser13"));
	bpv__Laser15__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser15"));
	bpv__Laser16__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser16"));
	bpv__Laser17__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser17"));
	bpv__Laser18__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser18"));
	bpv__Laser19__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser19"));
	bpv__TaquillaAzul__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("TaquillaAzul"));
	bpv__Laser14__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser14"));
	bpv__Laser20__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser20"));
	bpv__Laser21__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser21"));
	bpv__Laser22__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser22"));
	bpv__Laser23__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Laser23"));
	bpv__PointLight01__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight01"));
	bpv__PointLight00__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight00"));
	bpv__Suelo7__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suelo7"));
	bpv__Suelo4__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suelo4"));
	bpv__Suelo9__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suelo9"));
	bpv__Suelo5__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suelo5"));
	bpv__Pared1_5__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pared1_5"));
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
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Pared2_1__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Pared2_1__pf->RelativeLocation = FVector(-277.779388, -295.633362, 18.765511);
	bpv__Pared2_1__pf->RelativeRotation = FRotator(0.000000, -90.000130, 0.000000);
	bpv__Pared2_1__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	bpv__Pared2_1__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_1__pf), true, 0));
	bpv__Pared2_2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared2_2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared2_2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__3 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared2_2__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared2_2__pf->RelativeLocation = FVector(329.606262, -295.854004, 18.765358);
	bpv__Pared2_2__pf->RelativeRotation = FRotator(0.000000, 0.000233, 0.000000);
	bpv__Pared2_2__pf->RelativeScale3D = FVector(4.436866, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_2__pf), true, 0));
	bpv__Pared1_1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__4 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__4 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Pared1_1__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Pared1_1__pf->RelativeLocation = FVector(-251.210678, 388.518738, 18.765724);
	bpv__Pared1_1__pf->RelativeRotation = FRotator(0.000000, -180.000305, 0.000000);
	bpv__Pared1_1__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	bpv__Pared1_1__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_1__pf), true, 0));
	bpv__Pared2_3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared2_3__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared2_3__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__5 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Pared2_3__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Pared2_3__pf->RelativeLocation = FVector(-280.424896, 692.187927, 18.757057);
	bpv__Pared2_3__pf->RelativeRotation = FRotator(0.000000, -90.000130, 0.000000);
	bpv__Pared2_3__pf->RelativeScale3D = FVector(0.977137, 3.081391, 3.081391);
	bpv__Pared2_3__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_3__pf), true, 0));
	bpv__Pared2_4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared2_4__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared2_4__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__6 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared2_4__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared2_4__pf->RelativeLocation = FVector(301.998108, 547.798279, 18.757301);
	bpv__Pared2_4__pf->RelativeRotation = FRotator(0.000000, -180.000259, 0.000000);
	bpv__Pared2_4__pf->RelativeScale3D = FVector(4.536727, 0.870273, 3.081391);
	bpv__Pared2_4__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_4__pf), true, 0));
	bpv__Pared1_3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_3__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__7 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_3__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__7 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_3__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_3__pf->RelativeLocation = FVector(588.161865, -241.566162, 19.651897);
	bpv__Pared1_3__pf->RelativeRotation = FRotator(0.000000, -270.000580, 0.000000);
	bpv__Pared1_3__pf->RelativeScale3D = FVector(4.191712, 0.881232, 3.081391);
	bpv__Pared1_3__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_3__pf), true, 0));
	bpv__Pared1_4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_4__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_4__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__8 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Pared1_4__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Pared1_4__pf->RelativeLocation = FVector(704.064270, 385.001373, 18.770851);
	bpv__Pared1_4__pf->RelativeRotation = FRotator(0.000000, -180.000305, 0.000000);
	bpv__Pared1_4__pf->RelativeScale3D = FVector(0.597747, 3.225201, 3.081391);
	bpv__Pared1_4__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_4__pf), true, 0));
	bpv__ResplandorPuertaIzquierda__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ResplandorPuertaIzquierda__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ResplandorPuertaIzquierda__pf->RelativeLocation = FVector(-236.070541, 555.039185, 1.138821);
	bpv__ResplandorPuertaIzquierda__pf->RelativeRotation = FRotator(0.000000, -90.000183, 0.000000);
	bpv__ResplandorPuertaIzquierda__pf->RelativeScale3D = FVector(0.517991, 0.326268, 0.088755);
	bpv__ResplandorPuertaIzquierda__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ResplandorPuertaIzquierda__pf), false, 0));
	bpv__ResplandorPuertaAbajo__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ResplandorPuertaAbajo__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ResplandorPuertaAbajo__pf->RelativeLocation = FVector(600.987305, 341.111176, 1.136177);
	bpv__ResplandorPuertaAbajo__pf->RelativeScale3D = FVector(0.517991, 0.326268, 0.088755);
	bpv__ResplandorPuertaAbajo__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ResplandorPuertaAbajo__pf), false, 0));
	bpv__Pared1_1SinPuerta__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_1SinPuerta__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__9 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_1SinPuerta__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__9 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_1SinPuerta__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_1SinPuerta__pf->RelativeLocation = FVector(-247.516571, 372.664673, 18.765480);
	bpv__Pared1_1SinPuerta__pf->RelativeRotation = FRotator(0.000000, -89.999947, 0.000000);
	bpv__Pared1_1SinPuerta__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_1SinPuerta__pf), true, 0));
	bpv__Pared1_1SinPuerta2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_1SinPuerta2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__10 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_1SinPuerta2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__10 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Pared1_1SinPuerta2__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_1SinPuerta2__pf->RelativeLocation = FVector(-247.517319, -116.661621, 18.765480);
	bpv__Pared1_1SinPuerta2__pf->RelativeRotation = FRotator(0.000000, -89.999947, 0.000000);
	bpv__Pared1_1SinPuerta2__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_1SinPuerta2__pf), true, 0));
	bpv__Pared1_2SinPuerta1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_2SinPuerta1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_2SinPuerta1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__11 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_2SinPuerta1__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_2SinPuerta1__pf->RelativeLocation = FVector(-266.165558, -293.034973, 18.765480);
	bpv__Pared1_2SinPuerta1__pf->RelativeRotation = FRotator(0.000000, 0.000340, 0.000000);
	bpv__Pared1_2SinPuerta1__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_2SinPuerta1__pf), true, 0));
	bpv__Pared1_2SinPuerta2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_2SinPuerta2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_2SinPuerta2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__12 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Pared1_2SinPuerta2__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_2SinPuerta2__pf->RelativeLocation = FVector(219.905197, -295.855591, 18.765602);
	bpv__Pared1_2SinPuerta2__pf->RelativeRotation = FRotator(0.000000, 0.000566, 0.000000);
	bpv__Pared1_2SinPuerta2__pf->RelativeScale3D = FVector(3.081391, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_2SinPuerta2__pf), true, 0));
	bpv__Pared2_3SinPuerta__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared2_3SinPuerta__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__13 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared2_3SinPuerta__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__13 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared2_3SinPuerta__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared2_3SinPuerta__pf->RelativeLocation = FVector(-113.356880, 549.464905, 18.753334);
	bpv__Pared2_3SinPuerta__pf->RelativeRotation = FRotator(0.000000, -180.000305, 0.000000);
	bpv__Pared2_3SinPuerta__pf->RelativeScale3D = FVector(4.749237, 0.844680, 3.081391);
	bpv__Pared2_3SinPuerta__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared2_3SinPuerta__pf), true, 0));
	bpv__Pared1_4SinPuerta__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_4SinPuerta__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_4SinPuerta__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__14 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_4SinPuerta__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_4SinPuerta__pf->RelativeLocation = FVector(582.147156, 277.765686, 18.770912);
	bpv__Pared1_4SinPuerta__pf->RelativeRotation = FRotator(0.000000, -270.000671, 0.000000);
	bpv__Pared1_4SinPuerta__pf->RelativeScale3D = FVector(4.414577, 0.958531, 3.081391);
	bpv__Pared1_4SinPuerta__pf->bVisible = false;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_4SinPuerta__pf), true, 0));
	bpv__Laser0__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser0__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__15 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser0__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__15 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__16 = (*(AccessPrivateProperty<AActor* >((bpv__Laser0__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__16 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[0]);
	bpv__Laser0__pf->RelativeLocation = FVector(-453.009613, -86.054871, 230.496918);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser0__pf), false, 0));
	bpv__Laser1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__17 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser1__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__17 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__18 = (*(AccessPrivateProperty<AActor* >((bpv__Laser1__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__18 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[1]);
	bpv__Laser1__pf->RelativeLocation = FVector(-379.260498, -86.054871, 230.496918);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser1__pf), false, 0));
	bpv__Laser2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__19 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser2__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__19 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__20 = (*(AccessPrivateProperty<AActor* >((bpv__Laser2__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__20 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[2]);
	bpv__Laser2__pf->RelativeLocation = FVector(-305.213104, -86.054871, 230.496918);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser2__pf), false, 0));
	bpv__Laser3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser3__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__21 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser3__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__21 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__22 = (*(AccessPrivateProperty<AActor* >((bpv__Laser3__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__22 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[3]);
	bpv__Laser3__pf->RelativeLocation = FVector(-221.879303, -86.054871, 230.496918);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser3__pf), false, 0));
	bpv__Laser4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser4__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__23 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser4__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__23 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__24 = (*(AccessPrivateProperty<AActor* >((bpv__Laser4__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__24 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[4]);
	bpv__Laser4__pf->RelativeLocation = FVector(-146.290466, -86.054871, 230.496918);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser4__pf), false, 0));
	bpv__Laser5__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser5__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__25 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser5__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__25 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__26 = (*(AccessPrivateProperty<AActor* >((bpv__Laser5__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__26 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[5]);
	bpv__Laser5__pf->RelativeLocation = FVector(-73.391464, -86.054871, 230.496918);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser5__pf), false, 0));
	bpv__Laser6__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser6__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__27 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser6__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__27 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__28 = (*(AccessPrivateProperty<AActor* >((bpv__Laser6__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__28 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[6]);
	bpv__Laser6__pf->RelativeLocation = FVector(6.339523, -86.054871, 230.496307);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser6__pf), false, 0));
	bpv__Laser7__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser7__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__29 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser7__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__29 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__30 = (*(AccessPrivateProperty<AActor* >((bpv__Laser7__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__30 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[7]);
	bpv__Laser7__pf->RelativeLocation = FVector(88.945786, -86.054871, 230.495819);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser7__pf), false, 0));
	bpv__Laser8__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser8__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__31 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser8__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__31 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__32 = (*(AccessPrivateProperty<AActor* >((bpv__Laser8__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__32 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[8]);
	bpv__Laser8__pf->RelativeLocation = FVector(176.522629, -86.054871, 230.495087);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser8__pf), false, 0));
	bpv__Laser9__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser9__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__33 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser9__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__33 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__34 = (*(AccessPrivateProperty<AActor* >((bpv__Laser9__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__34 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[9]);
	bpv__Laser9__pf->RelativeLocation = FVector(276.310364, -86.054871, 230.492767);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser9__pf), false, 0));
	bpv__Laser10__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser10__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__35 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser10__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__35 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__36 = (*(AccessPrivateProperty<AActor* >((bpv__Laser10__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__36 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[10]);
	bpv__Laser10__pf->RelativeLocation = FVector(529.328491, -86.054871, 230.490814);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser10__pf), false, 0));
	bpv__Laser11__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser11__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__37 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser11__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__37 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__38 = (*(AccessPrivateProperty<AActor* >((bpv__Laser11__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__38 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[11]);
	bpv__Laser11__pf->RelativeLocation = FVector(642.183167, -86.054871, 230.490509);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser11__pf), false, 0));
	bpv__Laser12__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser12__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__39 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser12__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__39 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__40 = (*(AccessPrivateProperty<AActor* >((bpv__Laser12__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__40 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[12]);
	bpv__Laser12__pf->RelativeLocation = FVector(-73.391464, 6.362366, 230.496918);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser12__pf), false, 0));
	bpv__Laser13__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser13__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__41 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser13__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__41 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__42 = (*(AccessPrivateProperty<AActor* >((bpv__Laser13__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__42 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[13]);
	bpv__Laser13__pf->RelativeLocation = FVector(-73.391464, 96.373566, 230.496918);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser13__pf), false, 0));
	bpv__Laser15__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser15__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__43 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser15__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__43 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__44 = (*(AccessPrivateProperty<AActor* >((bpv__Laser15__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__44 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[14]);
	bpv__Laser15__pf->RelativeLocation = FVector(-73.391464, 596.599731, 230.497101);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser15__pf), false, 0));
	bpv__Laser16__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser16__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__45 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser16__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__45 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__46 = (*(AccessPrivateProperty<AActor* >((bpv__Laser16__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__46 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[15]);
	bpv__Laser16__pf->RelativeLocation = FVector(-73.391464, 534.856628, 230.497101);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser16__pf), false, 0));
	bpv__Laser17__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser17__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__47 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser17__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__47 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__48 = (*(AccessPrivateProperty<AActor* >((bpv__Laser17__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__48 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[16]);
	bpv__Laser17__pf->RelativeLocation = FVector(-73.391464, 474.307556, 230.497101);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser17__pf), false, 0));
	bpv__Laser18__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser18__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__49 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser18__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__49 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__50 = (*(AccessPrivateProperty<AActor* >((bpv__Laser18__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__50 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[17]);
	bpv__Laser18__pf->RelativeLocation = FVector(-73.391464, 409.671326, 230.497101);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser18__pf), false, 0));
	bpv__Laser19__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser19__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__51 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser19__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__51 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__52 = (*(AccessPrivateProperty<AActor* >((bpv__Laser19__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__52 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[18]);
	bpv__Laser19__pf->RelativeLocation = FVector(-73.391464, 337.778168, 230.497101);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser19__pf), false, 0));
	bpv__TaquillaAzul__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TaquillaAzul__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__53 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__TaquillaAzul__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__53 = ALockerBlue_BP_C__pf479927698::StaticClass();
	auto& __Local__54 = (*(AccessPrivateProperty<AActor* >((bpv__TaquillaAzul__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__54 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[19]);
	bpv__TaquillaAzul__pf->RelativeLocation = FVector(209.678513, -42.625793, 0.000000);
	bpv__TaquillaAzul__pf->RelativeRotation = FRotator(0.000000, -60.000122, 0.000000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TaquillaAzul__pf), false, 0));
	bpv__Laser14__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser14__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__55 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser14__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__55 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__56 = (*(AccessPrivateProperty<AActor* >((bpv__Laser14__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__56 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[20]);
	bpv__Laser14__pf->RelativeLocation = FVector(529.328491, 220.300323, 230.490814);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser14__pf), false, 0));
	bpv__Laser20__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser20__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__57 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser20__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__57 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__58 = (*(AccessPrivateProperty<AActor* >((bpv__Laser20__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__58 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[21]);
	bpv__Laser20__pf->RelativeLocation = FVector(642.183167, 209.808472, 230.490509);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser20__pf), false, 0));
	bpv__Laser21__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser21__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__59 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser21__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__59 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__60 = (*(AccessPrivateProperty<AActor* >((bpv__Laser21__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__60 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[22]);
	bpv__Laser21__pf->RelativeLocation = FVector(423.604675, 220.299225, 230.490814);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser21__pf), false, 0));
	bpv__Laser22__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser22__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__61 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser22__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__61 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__62 = (*(AccessPrivateProperty<AActor* >((bpv__Laser22__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__62 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[23]);
	bpv__Laser22__pf->RelativeLocation = FVector(323.338379, 220.299225, 230.490814);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser22__pf), false, 0));
	bpv__Laser23__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Laser23__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__63 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Laser23__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__63 = ALaser_BP_C__pf479927698::StaticClass();
	auto& __Local__64 = (*(AccessPrivateProperty<AActor* >((bpv__Laser23__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__64 = CastChecked<AActor>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->MiscConvertedSubobjects[24]);
	bpv__Laser23__pf->RelativeLocation = FVector(218.873871, 220.299225, 230.490814);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Laser23__pf), false, 0));
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
	bpv__Suelo7__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Suelo7__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__65 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Suelo7__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__65 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Suelo7__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Suelo7__pf->OverrideMaterials.Reserve(1);
	bpv__Suelo7__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__Suelo7__pf->RelativeLocation = FVector(-170.403229, 328.541046, 20.480724);
	bpv__Suelo7__pf->RelativeScale3D = FVector(3.733099, 3.622435, 1.739689);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Suelo7__pf), true, 0));
	bpv__Suelo4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Suelo4__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__66 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Suelo4__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__66 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Suelo4__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Suelo4__pf->OverrideMaterials.Reserve(1);
	bpv__Suelo4__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__Suelo4__pf->RelativeLocation = FVector(-171.197052, -247.762726, 20.483654);
	bpv__Suelo4__pf->RelativeScale3D = FVector(3.733099, 3.666884, 1.739689);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Suelo4__pf), true, 0));
	bpv__Suelo9__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Suelo9__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__67 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Suelo9__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__67 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Suelo9__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Suelo9__pf->OverrideMaterials.Reserve(1);
	bpv__Suelo9__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__Suelo9__pf->RelativeLocation = FVector(419.283997, 328.541046, 20.480663);
	bpv__Suelo9__pf->RelativeScale3D = FVector(3.733099, 3.622435, 1.739689);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Suelo9__pf), true, 0));
	bpv__Suelo5__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Suelo5__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__68 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Suelo5__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__68 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Suelo5__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Suelo5__pf->OverrideMaterials.Reserve(1);
	bpv__Suelo5__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__Suelo5__pf->RelativeLocation = FVector(419.634521, -247.762726, 20.483654);
	bpv__Suelo5__pf->RelativeScale3D = FVector(3.733099, 3.666884, 1.739689);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Suelo5__pf), true, 0));
	bpv__Pared1_5__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pared1_5__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__69 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pared1_5__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__69 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pared1_5__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pared1_5__pf->RelativeLocation = FVector(-250.549057, -198.180252, 19.647747);
	bpv__Pared1_5__pf->RelativeRotation = FRotator(0.000000, -90.000015, 0.000000);
	bpv__Pared1_5__pf->RelativeScale3D = FVector(4.101492, 3.081391, 3.081391);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pared1_5__pf), true, 0));
	bpv__DireccionesConPuertas__pf = TArray<E__Direction__pf> ();
	bpv__PosicionIndex__pf = 0;
	bpv__TexturaDelMiniMapa__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__bHaPuestoPared__pf = false;
	bpv__ParedSinPuerta__pf = 0;
	bpv__ParedSinPuerta2__pf = 0;
	bpv__Visibilidades__pf = TArray<bool> ();
}
PRAGMA_ENABLE_OPTIMIZATION
void ANivel_Laser00_C__pf626307183::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__Laser0__pf)
	{
		bpv__Laser0__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser1__pf)
	{
		bpv__Laser1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser2__pf)
	{
		bpv__Laser2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser3__pf)
	{
		bpv__Laser3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser4__pf)
	{
		bpv__Laser4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser5__pf)
	{
		bpv__Laser5__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser6__pf)
	{
		bpv__Laser6__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser7__pf)
	{
		bpv__Laser7__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser8__pf)
	{
		bpv__Laser8__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser9__pf)
	{
		bpv__Laser9__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser10__pf)
	{
		bpv__Laser10__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser11__pf)
	{
		bpv__Laser11__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser12__pf)
	{
		bpv__Laser12__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser13__pf)
	{
		bpv__Laser13__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser15__pf)
	{
		bpv__Laser15__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser16__pf)
	{
		bpv__Laser16__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser17__pf)
	{
		bpv__Laser17__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser18__pf)
	{
		bpv__Laser18__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser19__pf)
	{
		bpv__Laser19__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TaquillaAzul__pf)
	{
		bpv__TaquillaAzul__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser14__pf)
	{
		bpv__Laser14__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser20__pf)
	{
		bpv__Laser20__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser21__pf)
	{
		bpv__Laser21__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser22__pf)
	{
		bpv__Laser22__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Laser23__pf)
	{
		bpv__Laser23__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight01__pf)
	{
		bpv__PointLight01__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight00__pf)
	{
		bpv__PointLight00__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Suelo7__pf)
	{
		bpv__Suelo7__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Suelo4__pf)
	{
		bpv__Suelo4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Suelo9__pf)
	{
		bpv__Suelo9__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Suelo5__pf)
	{
		bpv__Suelo5__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pared1_5__pf)
	{
		bpv__Pared1_5__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ANivel_Laser00_C__pf626307183::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ALaser_BP_C__pf479927698::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ALockerBlue_BP_C__pf479927698::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AVolumetrics_BP_C__pf2692903288::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMainPlayerController_BP_C__pf1773622777::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMap_C__pf2402407856::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ATopDownCharacter_C__pf1773622777::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FPosicion__pf1773622777();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPosicion__pf1773622777());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__70 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser0_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__70);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__71 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser1_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__71);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__72 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser2_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__72);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__73 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser3_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__73);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__74 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser4_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__74);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__75 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser5_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__75);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__76 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser6_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__76);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__77 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser7_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__77);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__78 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser8_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__78);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__79 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser9_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__79);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__80 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser10_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__80);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__81 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser11_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__81);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__82 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser12_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__82);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__83 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser13_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__83);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__84 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser15_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__84);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__85 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser16_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__85);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__86 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser17_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__86);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__87 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser18_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__87);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__88 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser19_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__88);
	ALockerBlue_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__89 = NewObject<ALockerBlue_BP_C__pf479927698>(InDynamicClass, ALockerBlue_BP_C__pf479927698::StaticClass(), TEXT("TaquillaAzul_GEN_VARIABLE_LockerBlue_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__89);
	auto __Local__90 = NewObject<UStaticMeshComponent>(__Local__89, UStaticMeshComponent::StaticClass(), TEXT("MeshPrincipal"), (EObjectFlags)0x00040029);
	auto& __Local__91 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__90), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__91 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ANivel_Laser00_C__pf626307183::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__90->RelativeScale3D = FVector(3.000000, 3.000000, 3.000000);
	static TWeakObjectPtr<UProperty> __Local__93{};
	const UProperty* __Local__92 = __Local__93.Get();
	if (nullptr == __Local__92)
	{
		__Local__92 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__92);
		__Local__93 = __Local__92;
	}
	(((UBoolProperty*)__Local__92)->SetPropertyValue_InContainer((__Local__90), true, 0));
	__Local__89->MeshPrincipal = __Local__90;
	auto __Local__94 = NewObject<UStaticMeshComponent>(__Local__89, UStaticMeshComponent::StaticClass(), TEXT("Mesh1"), (EObjectFlags)0x00040029);
	auto& __Local__95 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__94), USceneComponent::__PPO__AttachParent() )));
	__Local__95 = __Local__90;
	(((UBoolProperty*)__Local__92)->SetPropertyValue_InContainer((__Local__94), true, 0));
	__Local__89->Mesh1 = __Local__94;
	auto __Local__96 = NewObject<UStaticMeshComponent>(__Local__89, UStaticMeshComponent::StaticClass(), TEXT("Mesh2"), (EObjectFlags)0x00040029);
	auto& __Local__97 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__96), USceneComponent::__PPO__AttachParent() )));
	__Local__97 = __Local__90;
	(((UBoolProperty*)__Local__92)->SetPropertyValue_InContainer((__Local__96), true, 0));
	__Local__89->Mesh2 = __Local__96;
	auto __Local__98 = NewObject<UStaticMeshComponent>(__Local__89, UStaticMeshComponent::StaticClass(), TEXT("Mesh3"), (EObjectFlags)0x00040029);
	auto& __Local__99 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__98), USceneComponent::__PPO__AttachParent() )));
	__Local__99 = __Local__90;
	(((UBoolProperty*)__Local__92)->SetPropertyValue_InContainer((__Local__98), true, 0));
	__Local__89->Mesh3 = __Local__98;
	auto __Local__100 = NewObject<UStaticMeshComponent>(__Local__89, UStaticMeshComponent::StaticClass(), TEXT("Mesh4"), (EObjectFlags)0x00040029);
	auto& __Local__101 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__100), USceneComponent::__PPO__AttachParent() )));
	__Local__101 = __Local__90;
	(((UBoolProperty*)__Local__92)->SetPropertyValue_InContainer((__Local__100), true, 0));
	__Local__89->Mesh4 = __Local__100;
	auto __Local__102 = NewObject<UBoxComponent>(__Local__89, UBoxComponent::StaticClass(), TEXT("BoxTrigger"), (EObjectFlags)0x00040029);
	__Local__102->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__103 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__102), USceneComponent::__PPO__AttachParent() )));
	__Local__103 = __Local__90;
	__Local__102->RelativeLocation = FVector(-42.838425, -35.054058, 33.617386);
	__Local__102->RelativeScale3D = FVector(0.319467, 0.424543, 0.630237);
	(((UBoolProperty*)__Local__92)->SetPropertyValue_InContainer((__Local__102), true, 0));
	__Local__89->BoxTrigger = __Local__102;
	auto __Local__104 = NewObject<USphereComponent>(__Local__89, USphereComponent::StaticClass(), TEXT("LocalizacionWidget"), (EObjectFlags)0x00040029);
	__Local__104->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__105 = (*(AccessPrivateProperty<FName >(&(__Local__104->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__105 = FName(TEXT("Custom"));
	auto& __Local__106 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__104->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__107 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__106), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__107 = TArray<FResponseChannel> ();
	__Local__107.AddUninitialized(31);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__107.GetData(), 31);
	auto& __Local__108 = __Local__107[0];
	__Local__108.Channel = FName(TEXT("WorldStatic"));
	__Local__108.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__109 = __Local__107[1];
	__Local__109.Channel = FName(TEXT("WorldDynamic"));
	__Local__109.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__110 = __Local__107[2];
	__Local__110.Channel = FName(TEXT("Pawn"));
	__Local__110.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__111 = __Local__107[3];
	__Local__111.Channel = FName(TEXT("Visibility"));
	__Local__111.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__112 = __Local__107[4];
	__Local__112.Channel = FName(TEXT("Camera"));
	__Local__112.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__113 = __Local__107[5];
	__Local__113.Channel = FName(TEXT("PhysicsBody"));
	__Local__113.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__114 = __Local__107[6];
	__Local__114.Channel = FName(TEXT("Vehicle"));
	__Local__114.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__115 = __Local__107[7];
	__Local__115.Channel = FName(TEXT("Destructible"));
	__Local__115.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__116 = __Local__107[8];
	__Local__116.Channel = FName(TEXT("EngineTraceChannel2"));
	__Local__116.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__117 = __Local__107[9];
	__Local__117.Channel = FName(TEXT("EngineTraceChannel3"));
	__Local__117.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__118 = __Local__107[10];
	__Local__118.Channel = FName(TEXT("EngineTraceChannel4"));
	__Local__118.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__119 = __Local__107[11];
	__Local__119.Channel = FName(TEXT("EngineTraceChannel5"));
	__Local__119.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__120 = __Local__107[12];
	__Local__120.Channel = FName(TEXT("EngineTraceChannel6"));
	__Local__120.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__121 = __Local__107[13];
	__Local__121.Channel = FName(TEXT("GameTraceChannel1"));
	__Local__121.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__122 = __Local__107[14];
	__Local__122.Channel = FName(TEXT("GameTraceChannel2"));
	__Local__122.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__123 = __Local__107[15];
	__Local__123.Channel = FName(TEXT("GameTraceChannel3"));
	__Local__123.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__124 = __Local__107[16];
	__Local__124.Channel = FName(TEXT("GameTraceChannel4"));
	__Local__124.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__125 = __Local__107[17];
	__Local__125.Channel = FName(TEXT("GameTraceChannel5"));
	__Local__125.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__126 = __Local__107[18];
	__Local__126.Channel = FName(TEXT("GameTraceChannel6"));
	__Local__126.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__127 = __Local__107[19];
	__Local__127.Channel = FName(TEXT("GameTraceChannel7"));
	__Local__127.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__128 = __Local__107[20];
	__Local__128.Channel = FName(TEXT("GameTraceChannel8"));
	__Local__128.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__129 = __Local__107[21];
	__Local__129.Channel = FName(TEXT("GameTraceChannel9"));
	__Local__129.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__130 = __Local__107[22];
	__Local__130.Channel = FName(TEXT("GameTraceChannel10"));
	__Local__130.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__131 = __Local__107[23];
	__Local__131.Channel = FName(TEXT("GameTraceChannel11"));
	__Local__131.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__132 = __Local__107[24];
	__Local__132.Channel = FName(TEXT("GameTraceChannel12"));
	__Local__132.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__133 = __Local__107[25];
	__Local__133.Channel = FName(TEXT("GameTraceChannel13"));
	__Local__133.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__134 = __Local__107[26];
	__Local__134.Channel = FName(TEXT("GameTraceChannel14"));
	__Local__134.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__135 = __Local__107[27];
	__Local__135.Channel = FName(TEXT("GameTraceChannel15"));
	__Local__135.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__136 = __Local__107[28];
	__Local__136.Channel = FName(TEXT("GameTraceChannel16"));
	__Local__136.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__137 = __Local__107[29];
	__Local__137.Channel = FName(TEXT("GameTraceChannel17"));
	__Local__137.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__138 = __Local__107[30];
	__Local__138.Channel = FName(TEXT("GameTraceChannel18"));
	__Local__138.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__139 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__104), USceneComponent::__PPO__AttachParent() )));
	__Local__139 = __Local__90;
	__Local__104->RelativeLocation = FVector(-43.875977, -47.878197, 73.574829);
	__Local__104->RelativeScale3D = FVector(0.407992, 1.000000, 1.000000);
	(((UBoolProperty*)__Local__92)->SetPropertyValue_InContainer((__Local__104), true, 0));
	__Local__89->LocalizacionWidget = __Local__104;
	auto& __Local__140 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__89), AActor::__PPO__RootComponent() )));
	__Local__140 = __Local__90;
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__141 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser14_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__141);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__142 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser20_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__142);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__143 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser21_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__143);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__144 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser22_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__144);
	ALaser_BP_C__pf479927698::StaticClass()->GetDefaultObject();
	auto __Local__145 = NewObject<ALaser_BP_C__pf479927698>(InDynamicClass, ALaser_BP_C__pf479927698::StaticClass(), TEXT("Laser23_GEN_VARIABLE_Laser_BP_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__145);
	auto __Local__146 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__146);
	auto __Local__147 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__147);
	(((UBoolProperty*)__Local__92)->SetPropertyValue_InContainer((__Local__146), false, 0));
	__Local__147->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__147->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__147->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__148 = __Local__147->ComponentDelegateBindings[0];
	__Local__148.ComponentPropertyName = FName(TEXT("BoxCollision"));
	__Local__148.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__148.FunctionNameToBind = FName(TEXT("BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__149 = __Local__147->ComponentDelegateBindings[1];
	__Local__149.ComponentPropertyName = FName(TEXT("BoxCollision"));
	__Local__149.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__149.FunctionNameToBind = FName(TEXT("BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_0(int32 bpp__EntryPoint__pf)
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
	UUserWidget*  __Local__150 = ((UUserWidget*)nullptr);
	b0l__K2Node_DynamicCast_AsMap__pf = Cast<UMap_C__pf2402407856>(((::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf)) ? (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP__pf->MapWidget) : (__Local__150)));
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
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 92);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Scene__pf))
	{
		bpv__Scene__pf->USceneComponent::SetVisibility(false, true);
	}
	return; //KCST_EndOfThread
}
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_2(int32 bpp__EntryPoint__pf)
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
	UUserWidget*  __Local__151 = ((UUserWidget*)nullptr);
	b0l__K2Node_DynamicCast_AsMap_1__pf = Cast<UMap_C__pf2402407856>(((::IsValid(b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf)) ? (b0l__K2Node_DynamicCast_AsMain_Player_Controller_BP_1__pf->MapWidget) : (__Local__151)));
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
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_3(int32 bpp__EntryPoint__pf)
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
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_4(int32 bpp__EntryPoint__pf)
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
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_5(int32 bpp__EntryPoint__pf)
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
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(3, 2147483647, TEXT("ExecuteUbergraph_Nivel_Laser00_5"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_6(int32 bpp__EntryPoint__pf)
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
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_7(int32 bpp__EntryPoint__pf)
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
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_8(int32 bpp__EntryPoint__pf)
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
void ANivel_Laser00_C__pf626307183::bpf__ExecuteUbergraph_Nivel_Laser00__pf_9(int32 bpp__EntryPoint__pf)
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
void ANivel_Laser00_C__pf626307183::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_5(95);
}
void ANivel_Laser00_C__pf626307183::bpf__HacerVisible__pf()
{
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_4(94);
}
void ANivel_Laser00_C__pf626307183::bpf__HacerInvisible__pf()
{
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_1(92);
}
void ANivel_Laser00_C__pf626307183::bpf__PonerParedesAleatorias2__pf()
{
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_7(83);
}
void ANivel_Laser00_C__pf626307183::bpf__PonerParedesAleatorias__pf()
{
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_8(71);
}
void ANivel_Laser00_C__pf626307183::bpf__BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_2(65);
}
void ANivel_Laser00_C__pf626307183::bpf__BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__153;
	T__Local__153& bpp__SweepResult__pf = *const_cast<T__Local__153 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_0(63);
}
void ANivel_Laser00_C__pf626307183::bpf__UpdateDoors__pf()
{
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_6(61);
}
void ANivel_Laser00_C__pf626307183::bpf__SetDirection__pf(int32 bpp__Direction__pf)
{
	b0l__K2Node_Event_Direction__pf = bpp__Direction__pf;
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_9(55);
}
void ANivel_Laser00_C__pf626307183::bpf__SetPosition__pf(int32 bpp__x__pf, int32 bpp__y__pf)
{
	b0l__K2Node_Event_x__pf = bpp__x__pf;
	b0l__K2Node_Event_y__pf = bpp__y__pf;
	bpf__ExecuteUbergraph_Nivel_Laser00__pf_3(51);
}
PRAGMA_DISABLE_OPTIMIZATION
void ANivel_Laser00_C__pf626307183::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_PAredPuerta.Set_Room_1_PAredPuerta 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_ParedSimple001.Set_Room_1_ParedSimple001 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_ParedSimple003.Set_Room_1_ParedSimple003 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_SueloLow.Set_Room_1_SueloLow 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Scene/Texture/Alice/SueloParedes.SueloParedes 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/Rojo.Rojo 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Locker.Set_Assets_1_Locker 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ANivel_Laser00_C__pf626307183::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{40, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DecalComponent 
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{47, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PointLightComponent 
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
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/EngineMaterials/DefaultDecalMaterial.DefaultDecalMaterial 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Laptop.Set_Assets_1_Laptop 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Silla.Set_Assets_1_Silla 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Files.Set_Assets_1_Files 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Table.Set_Assets_1_Table 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Cajon.Set_Assets_1_Cajon 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Room_1_Box007.Set_Room_1_Box007 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Box.Set_Assets_1_Box 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownCPP/Textures/Gris.Gris 
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
		{153, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/GameplayMechanics/Laser_BP.Laser_BP_C 
		{164, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/GameplayMechanics/LockerBlue_BP.LockerBlue_BP_C 
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
struct FRegisterHelper__ANivel_Laser00_C__pf626307183
{
	FRegisterHelper__ANivel_Laser00_C__pf626307183()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownCPP/Niveles/Nivel_Laser00"), &ANivel_Laser00_C__pf626307183::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ANivel_Laser00_C__pf626307183 Instance;
};
FRegisterHelper__ANivel_Laser00_C__pf626307183 FRegisterHelper__ANivel_Laser00_C__pf626307183::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
