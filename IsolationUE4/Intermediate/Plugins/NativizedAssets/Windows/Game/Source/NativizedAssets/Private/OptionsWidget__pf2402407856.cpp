#include "NativizedAssets.h"
#include "OptionsWidget__pf2402407856.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Slider.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UOptionsWidget_C__pf2402407856::UOptionsWidget_C__pf2402407856(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UOptionsWidget_C__pf2402407856::StaticClass() == GetClass()))
	{
		UOptionsWidget_C__pf2402407856::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__BotonPantallaCompletaEnVentana__pf = nullptr;
	bpv__BotonVentana__pf = nullptr;
	bpv__Slide1__pf = nullptr;
	bpv__Slider2__pf = nullptr;
	bpv__TextBlock__pf = nullptr;
	bpv__TextBlock_2__pf = nullptr;
	bpv__VolumenMusica__pf = 0.000000f;
	bpv__VolumenSonido__pf = 0.000000f;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UOptionsWidget_C__pf2402407856::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UOptionsWidget_C__pf2402407856::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(8);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 8);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("BotonVentana"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__BotonVentana_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("BotonPantallaCompletaEnVentana"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__BotonPantallaCompletaEnVentana_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Slider2"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Slider2_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Slide1"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Slide1_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Slide1"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnMouseCaptureEnd"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Slide1_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Slider2"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnMouseCaptureEnd"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Slider2_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Slide1"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnMouseCaptureBegin"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Slider_63_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("Slider2"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnMouseCaptureBegin"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature"));
	auto __Local__10 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_38"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(3);
	auto __Local__12 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__12->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_80"), (EObjectFlags)0x00280008);
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(3);
	auto __Local__15 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__15->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__15->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__15->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_139"), (EObjectFlags)0x00280008);
	__Local__16->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[7ADACBC2473586311B13D8A928EB9F9E]\", \"45F5285A4713D76D2C3C6FB828387268\", \"Musica\")")	);
	__Local__16->Font.Size = 90;
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__17 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__17->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__17->Parent = __Local__13;
	auto __Local__18 = NewObject<USlider>(__Local__1, USlider::StaticClass(), TEXT("Slider2"), (EObjectFlags)0x00280008);
	__Local__18->WidgetStyle.NormalThumbImage.ImageSize = FVector2D(20.000000, 35.000000);
	__Local__18->WidgetStyle.BarThickness = 10.000000f;
	__Local__18->SliderHandleColor = FLinearColor(0.265845, 0.281250, 0.233558, 1.000000);
	__Local__18->StepSize = 1.000000f;
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__14.Add(__Local__17);
	auto __Local__19 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__19->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__19->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__19->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__19->Parent = __Local__13;
	auto __Local__20 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__20->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[7ADACBC2473586311B13D8A928EB9F9E]\", \"DE5E347843B593C4AD5E1D94353D2732\", \"VolumenDeMusica\")")	);
	__Local__20->Font.Size = 70;
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__14.Add(__Local__19);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__21 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__21->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__21->Parent = __Local__10;
	auto __Local__22 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox"), (EObjectFlags)0x00280008);
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(3);
	auto __Local__24 = NewObject<UVerticalBoxSlot>(__Local__22, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__24->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__24->Parent = __Local__22;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__25->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[7ADACBC2473586311B13D8A928EB9F9E]\", \"3C2906EB4E803532FE7434A3F68E55D5\", \"Sonido\")")	);
	__Local__25->Font.Size = 90;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	auto __Local__26 = NewObject<UVerticalBoxSlot>(__Local__22, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__26->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__26->Parent = __Local__22;
	auto __Local__27 = NewObject<USlider>(__Local__1, USlider::StaticClass(), TEXT("Slide1"), (EObjectFlags)0x00280008);
	__Local__27->WidgetStyle.NormalThumbImage.ImageSize = FVector2D(20.000000, 35.000000);
	__Local__27->WidgetStyle.BarThickness = 10.000000f;
	__Local__27->SliderHandleColor = FLinearColor(0.438153, 0.463542, 0.384938, 1.000000);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__23.Add(__Local__26);
	auto __Local__28 = NewObject<UVerticalBoxSlot>(__Local__22, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__28->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__28->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__28->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__28->Parent = __Local__22;
	auto __Local__29 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__29->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[7ADACBC2473586311B13D8A928EB9F9E]\", \"E14EBE3B4DCEE4DF8F1C718257EC8458\", \"VolumenDeSonido\")")	);
	__Local__29->Font.Size = 70;
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__23.Add(__Local__28);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__11.Add(__Local__21);
	auto __Local__30 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__30->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__30->Parent = __Local__10;
	auto __Local__31 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__31), UPanelWidget::__PPO__Slots() )));
	__Local__32 = TArray<UPanelSlot*> ();
	__Local__32.Reserve(2);
	auto __Local__33 = NewObject<UVerticalBoxSlot>(__Local__31, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__33->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__33->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__33->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__33->Parent = __Local__31;
	auto __Local__34 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_3"), (EObjectFlags)0x00280008);
	__Local__34->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[7ADACBC2473586311B13D8A928EB9F9E]\", \"7C3E511A42843DF0F72D429F4DCA30F0\", \"Ventana\")")	);
	__Local__34->Font.Size = 90;
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__32.Add(__Local__33);
	auto __Local__35 = NewObject<UVerticalBoxSlot>(__Local__31, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__35->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__35->Parent = __Local__31;
	auto __Local__36 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_260"), (EObjectFlags)0x00280008);
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__36), UPanelWidget::__PPO__Slots() )));
	__Local__37 = TArray<UPanelSlot*> ();
	__Local__37.Reserve(2);
	auto __Local__38 = NewObject<UHorizontalBoxSlot>(__Local__36, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__38->Padding.Left = 30.000000f;
	__Local__38->Padding.Top = 30.000000f;
	__Local__38->Padding.Right = 30.000000f;
	__Local__38->Padding.Bottom = 30.000000f;
	__Local__38->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__38->Parent = __Local__36;
	auto __Local__39 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("BotonVentana"), (EObjectFlags)0x00280008);
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(1);
	auto __Local__41 = NewObject<UButtonSlot>(__Local__39, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__41->Parent = __Local__39;
	auto __Local__42 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_232"), (EObjectFlags)0x00280008);
	__Local__42->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[7ADACBC2473586311B13D8A928EB9F9E]\", \"C5E23A2449032E58287249AFA361D912\", \"Ventana\")")	);
	auto& __Local__43 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__42->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__43 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__37.Add(__Local__38);
	auto __Local__44 = NewObject<UHorizontalBoxSlot>(__Local__36, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__44->Padding.Left = 30.000000f;
	__Local__44->Padding.Top = 30.000000f;
	__Local__44->Padding.Right = 30.000000f;
	__Local__44->Padding.Bottom = 30.000000f;
	__Local__44->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__44->Parent = __Local__36;
	auto __Local__45 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("BotonPantallaCompletaEnVentana"), (EObjectFlags)0x00280008);
	auto& __Local__46 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__45), UPanelWidget::__PPO__Slots() )));
	__Local__46 = TArray<UPanelSlot*> ();
	__Local__46.Reserve(1);
	auto __Local__47 = NewObject<UButtonSlot>(__Local__45, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__47->Parent = __Local__45;
	auto __Local__48 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_477"), (EObjectFlags)0x00280008);
	__Local__48->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[7ADACBC2473586311B13D8A928EB9F9E]\", \"EC18A41B41C0910E58A3C7942FD9957C\", \"Pantalla completa (en ventana)\")")	);
	auto& __Local__49 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__48->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__49 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__46.Add(__Local__47);
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__37.Add(__Local__44);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__32.Add(__Local__35);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__11.Add(__Local__30);
	__Local__1->RootWidget = __Local__10;
}
PRAGMA_ENABLE_OPTIMIZATION
void UOptionsWidget_C__pf2402407856::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__50;
	SlotNames.Append(__Local__50);
}
void UOptionsWidget_C__pf2402407856::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__51;
	TArray<FDelegateRuntimeBinding>  __Local__52;
	__Local__52.AddUninitialized(2);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__52.GetData(), 2);
	auto& __Local__53 = __Local__52[0];
	__Local__53.ObjectName = FString(TEXT("TextBlock"));
	__Local__53.PropertyName = FName(TEXT("Text"));
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__53.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__54 = TArray<FPropertyPathSegment> ();
	__Local__54.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__54.GetData(), 1);
	auto& __Local__55 = __Local__54[0];
	__Local__55.Name = FName(TEXT("VolumenMusica"));
	__Local__53.Kind = EBindingKind::Property;
	auto& __Local__56 = __Local__52[1];
	__Local__56.ObjectName = FString(TEXT("TextBlock_2"));
	__Local__56.PropertyName = FName(TEXT("Text"));
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__56.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__57 = TArray<FPropertyPathSegment> ();
	__Local__57.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__57.GetData(), 1);
	auto& __Local__58 = __Local__57[0];
	__Local__58.Name = FName(TEXT("VolumenSonido"));
	__Local__56.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UOptionsWidget_C__pf2402407856::StaticClass())->MiscConvertedSubobjects[0]), __Local__51, __Local__52);
}
void UOptionsWidget_C__pf2402407856::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UOptionsWidget_C__pf2402407856::bpf__ExecuteUbergraph_OptionsWidget__pf_0(int32 bpp__EntryPoint__pf)
{
	UGameUserSettings* bpfv__CallFunc_GetGameUserSettings_ReturnValue_1__pf{};
	UGameUserSettings* bpfv__CallFunc_GetGameUserSettings_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				b0l__CallFunc_GetGameUserSettings_ReturnValue__pf = UGameUserSettings::GetGameUserSettings();
			}
		case 2:
			{
				if(::IsValid(b0l__CallFunc_GetGameUserSettings_ReturnValue__pf))
				{
					b0l__CallFunc_GetGameUserSettings_ReturnValue__pf->UGameUserSettings::ApplyResolutionSettings(false);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				__CurrentState = 12;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_GetGameUserSettings_ReturnValue_2__pf = UGameUserSettings::GetGameUserSettings();
			}
		case 13:
			{
				if(::IsValid(bpfv__CallFunc_GetGameUserSettings_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetGameUserSettings_ReturnValue_2__pf->UGameUserSettings::SetFullscreenMode(EWindowMode::WindowedFullscreen);
				}
				__CurrentState = 1;
				break;
			}
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_GetGameUserSettings_ReturnValue_1__pf = UGameUserSettings::GetGameUserSettings();
			}
		case 16:
			{
				if(::IsValid(bpfv__CallFunc_GetGameUserSettings_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetGameUserSettings_ReturnValue_1__pf->UGameUserSettings::SetFullscreenMode(EWindowMode::Windowed);
				}
			}
		case 17:
			{
				b0l__K2Node_MakeStruct_IntPoint__pf.X = 1280;
				b0l__K2Node_MakeStruct_IntPoint__pf.Y = 720;
				if(::IsValid(bpfv__CallFunc_GetGameUserSettings_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetGameUserSettings_ReturnValue_1__pf->UGameUserSettings::SetScreenResolution(b0l__K2Node_MakeStruct_IntPoint__pf);
				}
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptionsWidget_C__pf2402407856::bpf__ExecuteUbergraph_OptionsWidget__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
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
				if(::IsValid(bpv__Slider2__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Slider2__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue__pf, 100.000000);
				bpfv__CallFunc_FFloor_ReturnValue__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_FFloor_ReturnValue__pf);
				bpv__VolumenMusica__pf = bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				__CurrentState = 4;
				break;
			}
		case 10:
			{
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptionsWidget_C__pf2402407856::bpf__ExecuteUbergraph_OptionsWidget__pf_2(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetValue_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue_1__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__Slide1__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue_1__pf = bpv__Slide1__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue_1__pf, 100.000000);
				bpfv__CallFunc_FFloor_ReturnValue_1__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_FFloor_ReturnValue_1__pf);
				bpv__VolumenSonido__pf = bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				__CurrentState = 6;
				break;
			}
		case 9:
			{
				__CurrentState = 6;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptionsWidget_C__pf2402407856::bpf__BndEvt__BotonVentana_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsWidget__pf_0(14);
}
void UOptionsWidget_C__pf2402407856::bpf__BndEvt__BotonPantallaCompletaEnVentana_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsWidget__pf_0(11);
}
void UOptionsWidget_C__pf2402407856::bpf__BndEvt__Slider2_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_OptionsWidget__pf_1(10);
}
void UOptionsWidget_C__pf2402407856::bpf__BndEvt__Slide1_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_1__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_OptionsWidget__pf_2(9);
}
void UOptionsWidget_C__pf2402407856::bpf__BndEvt__Slide1_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsWidget__pf_2(8);
}
void UOptionsWidget_C__pf2402407856::bpf__BndEvt__Slider2_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsWidget__pf_1(7);
}
void UOptionsWidget_C__pf2402407856::bpf__BndEvt__Slider_63_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsWidget__pf_2(5);
}
void UOptionsWidget_C__pf2402407856::bpf__BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsWidget__pf_1(3);
}
PRAGMA_DISABLE_OPTIMIZATION
void UOptionsWidget_C__pf2402407856::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UOptionsWidget_C__pf2402407856::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameUserSettings 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{55, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{89, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{56, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UOptionsWidget_C__pf2402407856
{
	FRegisterHelper__UOptionsWidget_C__pf2402407856()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownCPP/HUD/OptionsWidget"), &UOptionsWidget_C__pf2402407856::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UOptionsWidget_C__pf2402407856 Instance;
};
FRegisterHelper__UOptionsWidget_C__pf2402407856 FRegisterHelper__UOptionsWidget_C__pf2402407856::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
