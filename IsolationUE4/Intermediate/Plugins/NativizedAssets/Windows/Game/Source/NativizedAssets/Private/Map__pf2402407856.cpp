#include "NativizedAssets.h"
#include "Map__pf2402407856.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/GridPanel.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
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
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "TopDownCharacter__pf1773622777.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "MainPlayerController_BP__pf1773622777.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "Puzzle_Bombillas_BP__pf479927698.h"
#include "Nivel_SALIDA__pf626307183.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Volumetrics_BP__pf2692903288.h"
#include "Direction__pf1773622777.h"
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
#include "IsolationUE4/Interactuable.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "InteractWB__pf2402407856.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UMap_C__pf2402407856::UMap_C__pf2402407856(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UMap_C__pf2402407856::StaticClass() == GetClass()))
	{
		UMap_C__pf2402407856::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Amarilla__pf = nullptr;
	bpv__GridMapa__pf = nullptr;
	bpv__Image_472__pf = nullptr;
	bpv__Image00__pf = nullptr;
	bpv__Image01__pf = nullptr;
	bpv__Image02__pf = nullptr;
	bpv__Image03__pf = nullptr;
	bpv__Image04__pf = nullptr;
	bpv__Image05__pf = nullptr;
	bpv__Image06__pf = nullptr;
	bpv__Image07__pf = nullptr;
	bpv__Image08__pf = nullptr;
	bpv__Image09__pf = nullptr;
	bpv__Image10__pf = nullptr;
	bpv__Image11__pf = nullptr;
	bpv__Image12__pf = nullptr;
	bpv__Image13__pf = nullptr;
	bpv__Image14__pf = nullptr;
	bpv__Image15__pf = nullptr;
	bpv__Image16__pf = nullptr;
	bpv__Image17__pf = nullptr;
	bpv__Image18__pf = nullptr;
	bpv__Image19__pf = nullptr;
	bpv__Image20__pf = nullptr;
	bpv__Image21__pf = nullptr;
	bpv__Image22__pf = nullptr;
	bpv__Image23__pf = nullptr;
	bpv__Image24__pf = nullptr;
	bpv__Image25__pf = nullptr;
	bpv__Image26__pf = nullptr;
	bpv__Image27__pf = nullptr;
	bpv__Image28__pf = nullptr;
	bpv__Image29__pf = nullptr;
	bpv__Image30__pf = nullptr;
	bpv__Image31__pf = nullptr;
	bpv__Image32__pf = nullptr;
	bpv__Image33__pf = nullptr;
	bpv__Image34__pf = nullptr;
	bpv__Image35__pf = nullptr;
	bpv__Image36__pf = nullptr;
	bpv__Image37__pf = nullptr;
	bpv__Image38__pf = nullptr;
	bpv__Image39__pf = nullptr;
	bpv__Image40__pf = nullptr;
	bpv__Image41__pf = nullptr;
	bpv__Image42__pf = nullptr;
	bpv__Image43__pf = nullptr;
	bpv__Image44__pf = nullptr;
	bpv__Image45__pf = nullptr;
	bpv__Image46__pf = nullptr;
	bpv__Image47__pf = nullptr;
	bpv__Image48__pf = nullptr;
	bpv__Image49__pf = nullptr;
	bpv__Image50__pf = nullptr;
	bpv__Image51__pf = nullptr;
	bpv__Image52__pf = nullptr;
	bpv__Image53__pf = nullptr;
	bpv__Image54__pf = nullptr;
	bpv__Image55__pf = nullptr;
	bpv__Image56__pf = nullptr;
	bpv__Image57__pf = nullptr;
	bpv__Image58__pf = nullptr;
	bpv__Image59__pf = nullptr;
	bpv__Image60__pf = nullptr;
	bpv__Image61__pf = nullptr;
	bpv__Image62__pf = nullptr;
	bpv__Image63__pf = nullptr;
	bpv__Image64__pf = nullptr;
	bpv__Image65__pf = nullptr;
	bpv__Image66__pf = nullptr;
	bpv__Image67__pf = nullptr;
	bpv__Image68__pf = nullptr;
	bpv__Image69__pf = nullptr;
	bpv__Image70__pf = nullptr;
	bpv__Image71__pf = nullptr;
	bpv__Image72__pf = nullptr;
	bpv__Image73__pf = nullptr;
	bpv__Image74__pf = nullptr;
	bpv__Image75__pf = nullptr;
	bpv__Image76__pf = nullptr;
	bpv__Image77__pf = nullptr;
	bpv__Image78__pf = nullptr;
	bpv__Image79__pf = nullptr;
	bpv__Imagen04__pf = nullptr;
	bpv__Rojo__pf = nullptr;
	bpv__TextBlock_213__pf = nullptr;
	bpv__Verde__pf = nullptr;
	bpv__NewVar_0__pf = nullptr;
	bpv__NumeroDeLlaves__pf = 0;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMap_C__pf2402407856::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMap_C__pf2402407856::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ATopDownCharacter_C__pf1773622777::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UInteractWB_C__pf2402407856::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(2);
	auto __Local__3 = NewObject<UHorizontalBoxSlot>(__Local__1, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__3->Padding.Left = 50.000000f;
	__Local__3->Size.Value = 0.120000f;
	__Local__3->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("VerticalBox_41"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(3);
	auto __Local__6 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__6->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_53"), (EObjectFlags)0x00280008);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__8 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__8->Size.Value = 0.200000f;
	__Local__8->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__8->Parent = __Local__4;
	auto __Local__9 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(2);
	auto __Local__11 = NewObject<UHorizontalBoxSlot>(__Local__9, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__11->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image_472"), (EObjectFlags)0x00280008);
	__Local__12->Brush.ImageSize = FVector2D(1288.000000, 652.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<UObject* >(&(__Local__12->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__13 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	auto __Local__14 = NewObject<UHorizontalBoxSlot>(__Local__9, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__14->Size.Value = 0.500000f;
	__Local__14->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__14->Parent = __Local__9;
	auto __Local__15 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("VerticalBox_72"), (EObjectFlags)0x00280008);
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(3);
	auto __Local__17 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__17->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__17->Parent = __Local__15;
	auto __Local__18 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Rojo"), (EObjectFlags)0x00280008);
	__Local__18->Brush.ImageSize = FVector2D(1288.000000, 652.000000);
	auto& __Local__19 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__19 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__18->Slot = __Local__17;
	__Local__18->Visibility = ESlateVisibility::Hidden;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	auto __Local__20 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__20->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__20->Parent = __Local__15;
	auto __Local__21 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Verde"), (EObjectFlags)0x00280008);
	__Local__21->Brush.ImageSize = FVector2D(1288.000000, 652.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<UObject* >(&(__Local__21->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__21->Slot = __Local__20;
	__Local__21->Visibility = ESlateVisibility::Hidden;
	__Local__20->Content = __Local__21;
	__Local__16.Add(__Local__20);
	auto __Local__23 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__23->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__23->Parent = __Local__15;
	auto __Local__24 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Amarilla"), (EObjectFlags)0x00280008);
	__Local__24->Brush.ImageSize = FVector2D(1288.000000, 652.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__24->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__25 = FLinearColor(1.000000, 0.795438, 0.000000, 1.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<UObject* >(&(__Local__24->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__26 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__24->Slot = __Local__23;
	__Local__24->Visibility = ESlateVisibility::Hidden;
	__Local__23->Content = __Local__24;
	__Local__16.Add(__Local__23);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__10.Add(__Local__14);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__5.Add(__Local__8);
	auto __Local__27 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__27->Parent = __Local__4;
	auto __Local__28 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__29 = TArray<UPanelSlot*> ();
	__Local__29.Reserve(1);
	auto __Local__30 = NewObject<USizeBoxSlot>(__Local__28, USizeBoxSlot::StaticClass(), TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__30->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__30->Parent = __Local__28;
	auto __Local__31 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_213"), (EObjectFlags)0x00280008);
	__Local__31->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2F2EAD5C44B839DB2862E09699808FBB]\", \"4AEAC66D4F67728D5173CE9E99B2BB1F\", \"0\")")	);
	auto& __Local__32 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__31->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__32 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__31->Font.Size = 60;
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__29.Add(__Local__30);
	__Local__28->Slot = __Local__27;
	__Local__28->RenderTransform.Translation = FVector2D(-30.000000, -130.000000);
	__Local__27->Content = __Local__28;
	__Local__5.Add(__Local__27);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__33 = NewObject<UHorizontalBoxSlot>(__Local__1, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__33->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__33->Parent = __Local__1;
	auto __Local__34 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(1);
	auto __Local__36 = NewObject<USizeBoxSlot>(__Local__34, USizeBoxSlot::StaticClass(), TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__36->Parent = __Local__34;
	auto __Local__37 = NewObject<UGridPanel>(__Local__0, UGridPanel::StaticClass(), TEXT("GridMapa"), (EObjectFlags)0x00280008);
	__Local__37->ColumnFill = TArray<float> ();
	__Local__37->ColumnFill.Reserve(9);
	__Local__37->ColumnFill.Add(1.000000f);
	__Local__37->ColumnFill.Add(1.000000f);
	__Local__37->ColumnFill.Add(1.000000f);
	__Local__37->ColumnFill.Add(1.000000f);
	__Local__37->ColumnFill.Add(1.000000f);
	__Local__37->ColumnFill.Add(1.000000f);
	__Local__37->ColumnFill.Add(1.000000f);
	__Local__37->ColumnFill.Add(1.000000f);
	__Local__37->ColumnFill.Add(1.000000f);
	__Local__37->RowFill = TArray<float> ();
	__Local__37->RowFill.Reserve(9);
	__Local__37->RowFill.Add(1.000000f);
	__Local__37->RowFill.Add(1.000000f);
	__Local__37->RowFill.Add(1.000000f);
	__Local__37->RowFill.Add(1.000000f);
	__Local__37->RowFill.Add(1.000000f);
	__Local__37->RowFill.Add(1.000000f);
	__Local__37->RowFill.Add(1.000000f);
	__Local__37->RowFill.Add(1.000000f);
	__Local__37->RowFill.Add(1.000000f);
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__37), UPanelWidget::__PPO__Slots() )));
	__Local__38 = TArray<UPanelSlot*> ();
	__Local__38.Reserve(81);
	auto __Local__39 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_13"), (EObjectFlags)0x00280008);
	__Local__39->Padding.Left = 3.000000f;
	__Local__39->Padding.Top = 3.000000f;
	__Local__39->Padding.Right = 3.000000f;
	__Local__39->Padding.Bottom = 3.000000f;
	__Local__39->Parent = __Local__37;
	auto __Local__40 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image00"), (EObjectFlags)0x00280008);
	__Local__40->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__40->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__41 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__42 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__42 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__38.Add(__Local__39);
	auto __Local__43 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_16"), (EObjectFlags)0x00280008);
	__Local__43->Padding.Left = 3.000000f;
	__Local__43->Padding.Top = 3.000000f;
	__Local__43->Padding.Right = 3.000000f;
	__Local__43->Padding.Bottom = 3.000000f;
	__Local__43->Column = 1;
	__Local__43->Parent = __Local__37;
	auto __Local__44 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image01"), (EObjectFlags)0x00280008);
	__Local__44->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__45 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__45 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__46 = (*(AccessPrivateProperty<UObject* >(&(__Local__44->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__46 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__38.Add(__Local__43);
	auto __Local__47 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_17"), (EObjectFlags)0x00280008);
	__Local__47->Padding.Left = 3.000000f;
	__Local__47->Padding.Top = 3.000000f;
	__Local__47->Padding.Right = 3.000000f;
	__Local__47->Padding.Bottom = 3.000000f;
	__Local__47->Column = 2;
	__Local__47->Parent = __Local__37;
	auto __Local__48 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image02"), (EObjectFlags)0x00280008);
	__Local__48->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__49 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__48->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__49 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__50 = (*(AccessPrivateProperty<UObject* >(&(__Local__48->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__50 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__38.Add(__Local__47);
	auto __Local__51 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_18"), (EObjectFlags)0x00280008);
	__Local__51->Padding.Left = 3.000000f;
	__Local__51->Padding.Top = 3.000000f;
	__Local__51->Padding.Right = 3.000000f;
	__Local__51->Padding.Bottom = 3.000000f;
	__Local__51->Column = 3;
	__Local__51->Parent = __Local__37;
	auto __Local__52 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image03"), (EObjectFlags)0x00280008);
	__Local__52->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__53 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__52->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__53 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__54 = (*(AccessPrivateProperty<UObject* >(&(__Local__52->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__54 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__38.Add(__Local__51);
	auto __Local__55 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_19"), (EObjectFlags)0x00280008);
	__Local__55->Padding.Left = 3.000000f;
	__Local__55->Padding.Top = 3.000000f;
	__Local__55->Padding.Right = 3.000000f;
	__Local__55->Padding.Bottom = 3.000000f;
	__Local__55->Column = 4;
	__Local__55->Parent = __Local__37;
	auto __Local__56 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Imagen04"), (EObjectFlags)0x00280008);
	__Local__56->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__57 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__56->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__57 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__58 = (*(AccessPrivateProperty<UObject* >(&(__Local__56->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__58 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__38.Add(__Local__55);
	auto __Local__59 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_21"), (EObjectFlags)0x00280008);
	__Local__59->Padding.Left = 3.000000f;
	__Local__59->Padding.Top = 3.000000f;
	__Local__59->Padding.Right = 3.000000f;
	__Local__59->Padding.Bottom = 3.000000f;
	__Local__59->Column = 5;
	__Local__59->Parent = __Local__37;
	auto __Local__60 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image04"), (EObjectFlags)0x00280008);
	__Local__60->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__60->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__62 = (*(AccessPrivateProperty<UObject* >(&(__Local__60->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__62 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__38.Add(__Local__59);
	auto __Local__63 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_22"), (EObjectFlags)0x00280008);
	__Local__63->Padding.Left = 3.000000f;
	__Local__63->Padding.Top = 3.000000f;
	__Local__63->Padding.Right = 3.000000f;
	__Local__63->Padding.Bottom = 3.000000f;
	__Local__63->Column = 6;
	__Local__63->Parent = __Local__37;
	auto __Local__64 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image05"), (EObjectFlags)0x00280008);
	__Local__64->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__65 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__64->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__65 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__66 = (*(AccessPrivateProperty<UObject* >(&(__Local__64->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__66 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__38.Add(__Local__63);
	auto __Local__67 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_23"), (EObjectFlags)0x00280008);
	__Local__67->Padding.Left = 3.000000f;
	__Local__67->Padding.Top = 3.000000f;
	__Local__67->Padding.Right = 3.000000f;
	__Local__67->Padding.Bottom = 3.000000f;
	__Local__67->Column = 7;
	__Local__67->Parent = __Local__37;
	auto __Local__68 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image06"), (EObjectFlags)0x00280008);
	__Local__68->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__69 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__68->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__69 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__70 = (*(AccessPrivateProperty<UObject* >(&(__Local__68->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__70 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__38.Add(__Local__67);
	auto __Local__71 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_24"), (EObjectFlags)0x00280008);
	__Local__71->Padding.Left = 3.000000f;
	__Local__71->Padding.Top = 3.000000f;
	__Local__71->Padding.Right = 3.000000f;
	__Local__71->Padding.Bottom = 3.000000f;
	__Local__71->Column = 8;
	__Local__71->Parent = __Local__37;
	auto __Local__72 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image07"), (EObjectFlags)0x00280008);
	__Local__72->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__73 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__72->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__73 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__74 = (*(AccessPrivateProperty<UObject* >(&(__Local__72->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__74 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__38.Add(__Local__71);
	auto __Local__75 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_25"), (EObjectFlags)0x00280008);
	__Local__75->Padding.Left = 3.000000f;
	__Local__75->Padding.Top = 3.000000f;
	__Local__75->Padding.Right = 3.000000f;
	__Local__75->Padding.Bottom = 3.000000f;
	__Local__75->Row = 1;
	__Local__75->Parent = __Local__37;
	auto __Local__76 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image08"), (EObjectFlags)0x00280008);
	__Local__76->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__77 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__76->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__77 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__78 = (*(AccessPrivateProperty<UObject* >(&(__Local__76->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__78 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	__Local__76->Slot = __Local__75;
	__Local__75->Content = __Local__76;
	__Local__38.Add(__Local__75);
	auto __Local__79 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_26"), (EObjectFlags)0x00280008);
	__Local__79->Padding.Left = 3.000000f;
	__Local__79->Padding.Top = 3.000000f;
	__Local__79->Padding.Right = 3.000000f;
	__Local__79->Padding.Bottom = 3.000000f;
	__Local__79->Row = 1;
	__Local__79->Column = 1;
	__Local__79->Parent = __Local__37;
	auto __Local__80 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image09"), (EObjectFlags)0x00280008);
	__Local__80->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__81 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__80->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__81 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__82 = (*(AccessPrivateProperty<UObject* >(&(__Local__80->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__82 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	__Local__80->Slot = __Local__79;
	__Local__79->Content = __Local__80;
	__Local__38.Add(__Local__79);
	auto __Local__83 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_29"), (EObjectFlags)0x00280008);
	__Local__83->Padding.Left = 3.000000f;
	__Local__83->Padding.Top = 3.000000f;
	__Local__83->Padding.Right = 3.000000f;
	__Local__83->Padding.Bottom = 3.000000f;
	__Local__83->Row = 1;
	__Local__83->Column = 2;
	__Local__83->Parent = __Local__37;
	auto __Local__84 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image10"), (EObjectFlags)0x00280008);
	__Local__84->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__85 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__84->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__85 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__86 = (*(AccessPrivateProperty<UObject* >(&(__Local__84->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__86 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__38.Add(__Local__83);
	auto __Local__87 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_27"), (EObjectFlags)0x00280008);
	__Local__87->Padding.Left = 3.000000f;
	__Local__87->Padding.Top = 3.000000f;
	__Local__87->Padding.Right = 3.000000f;
	__Local__87->Padding.Bottom = 3.000000f;
	__Local__87->Row = 1;
	__Local__87->Column = 3;
	__Local__87->Parent = __Local__37;
	auto __Local__88 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image11"), (EObjectFlags)0x00280008);
	__Local__88->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__89 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__88->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__89 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__90 = (*(AccessPrivateProperty<UObject* >(&(__Local__88->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__90 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	__Local__88->Slot = __Local__87;
	__Local__87->Content = __Local__88;
	__Local__38.Add(__Local__87);
	auto __Local__91 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_30"), (EObjectFlags)0x00280008);
	__Local__91->Padding.Left = 3.000000f;
	__Local__91->Padding.Top = 3.000000f;
	__Local__91->Padding.Right = 3.000000f;
	__Local__91->Padding.Bottom = 3.000000f;
	__Local__91->Row = 1;
	__Local__91->Column = 4;
	__Local__91->Parent = __Local__37;
	auto __Local__92 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image12"), (EObjectFlags)0x00280008);
	__Local__92->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__93 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__92->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__93 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__94 = (*(AccessPrivateProperty<UObject* >(&(__Local__92->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__94 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
	__Local__92->Slot = __Local__91;
	__Local__91->Content = __Local__92;
	__Local__38.Add(__Local__91);
	auto __Local__95 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_31"), (EObjectFlags)0x00280008);
	__Local__95->Padding.Left = 3.000000f;
	__Local__95->Padding.Top = 3.000000f;
	__Local__95->Padding.Right = 3.000000f;
	__Local__95->Padding.Bottom = 3.000000f;
	__Local__95->Row = 1;
	__Local__95->Column = 5;
	__Local__95->Parent = __Local__37;
	auto __Local__96 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image13"), (EObjectFlags)0x00280008);
	__Local__96->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__97 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__96->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__97 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__98 = (*(AccessPrivateProperty<UObject* >(&(__Local__96->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__98 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed);
	__Local__96->Slot = __Local__95;
	__Local__95->Content = __Local__96;
	__Local__38.Add(__Local__95);
	auto __Local__99 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_32"), (EObjectFlags)0x00280008);
	__Local__99->Padding.Left = 3.000000f;
	__Local__99->Padding.Top = 3.000000f;
	__Local__99->Padding.Right = 3.000000f;
	__Local__99->Padding.Bottom = 3.000000f;
	__Local__99->Row = 1;
	__Local__99->Column = 6;
	__Local__99->Parent = __Local__37;
	auto __Local__100 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image14"), (EObjectFlags)0x00280008);
	__Local__100->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__101 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__100->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__101 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__102 = (*(AccessPrivateProperty<UObject* >(&(__Local__100->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__102 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__100->Slot = __Local__99;
	__Local__99->Content = __Local__100;
	__Local__38.Add(__Local__99);
	auto __Local__103 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_0"), (EObjectFlags)0x00280008);
	__Local__103->Padding.Left = 3.000000f;
	__Local__103->Padding.Top = 3.000000f;
	__Local__103->Padding.Right = 3.000000f;
	__Local__103->Padding.Bottom = 3.000000f;
	__Local__103->Row = 1;
	__Local__103->Column = 7;
	__Local__103->Parent = __Local__37;
	auto __Local__104 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image15"), (EObjectFlags)0x00280008);
	__Local__104->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__105 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__104->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__105 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__106 = (*(AccessPrivateProperty<UObject* >(&(__Local__104->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__106 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__38.Add(__Local__103);
	auto __Local__107 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_1"), (EObjectFlags)0x00280008);
	__Local__107->Padding.Left = 3.000000f;
	__Local__107->Padding.Top = 3.000000f;
	__Local__107->Padding.Right = 3.000000f;
	__Local__107->Padding.Bottom = 3.000000f;
	__Local__107->Row = 1;
	__Local__107->Column = 8;
	__Local__107->Parent = __Local__37;
	auto __Local__108 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image16"), (EObjectFlags)0x00280008);
	__Local__108->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__109 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__108->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__109 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__110 = (*(AccessPrivateProperty<UObject* >(&(__Local__108->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__110 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__108->Slot = __Local__107;
	__Local__107->Content = __Local__108;
	__Local__38.Add(__Local__107);
	auto __Local__111 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_2"), (EObjectFlags)0x00280008);
	__Local__111->Padding.Left = 3.000000f;
	__Local__111->Padding.Top = 3.000000f;
	__Local__111->Padding.Right = 3.000000f;
	__Local__111->Padding.Bottom = 3.000000f;
	__Local__111->Row = 2;
	__Local__111->Parent = __Local__37;
	auto __Local__112 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image17"), (EObjectFlags)0x00280008);
	__Local__112->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__113 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__112->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__113 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__114 = (*(AccessPrivateProperty<UObject* >(&(__Local__112->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__114 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__112->Slot = __Local__111;
	__Local__111->Content = __Local__112;
	__Local__38.Add(__Local__111);
	auto __Local__115 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_3"), (EObjectFlags)0x00280008);
	__Local__115->Padding.Left = 3.000000f;
	__Local__115->Padding.Top = 3.000000f;
	__Local__115->Padding.Right = 3.000000f;
	__Local__115->Padding.Bottom = 3.000000f;
	__Local__115->Row = 2;
	__Local__115->Column = 1;
	__Local__115->Parent = __Local__37;
	auto __Local__116 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image18"), (EObjectFlags)0x00280008);
	__Local__116->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__117 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__116->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__117 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__118 = (*(AccessPrivateProperty<UObject* >(&(__Local__116->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__118 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__116->Slot = __Local__115;
	__Local__115->Content = __Local__116;
	__Local__38.Add(__Local__115);
	auto __Local__119 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_4"), (EObjectFlags)0x00280008);
	__Local__119->Padding.Left = 3.000000f;
	__Local__119->Padding.Top = 3.000000f;
	__Local__119->Padding.Right = 3.000000f;
	__Local__119->Padding.Bottom = 3.000000f;
	__Local__119->Row = 2;
	__Local__119->Column = 2;
	__Local__119->Parent = __Local__37;
	auto __Local__120 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image19"), (EObjectFlags)0x00280008);
	__Local__120->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__121 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__120->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__121 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__122 = (*(AccessPrivateProperty<UObject* >(&(__Local__120->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__122 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__120->Slot = __Local__119;
	__Local__119->Content = __Local__120;
	__Local__38.Add(__Local__119);
	auto __Local__123 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_5"), (EObjectFlags)0x00280008);
	__Local__123->Padding.Left = 3.000000f;
	__Local__123->Padding.Top = 3.000000f;
	__Local__123->Padding.Right = 3.000000f;
	__Local__123->Padding.Bottom = 3.000000f;
	__Local__123->Row = 2;
	__Local__123->Column = 3;
	__Local__123->Parent = __Local__37;
	auto __Local__124 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image20"), (EObjectFlags)0x00280008);
	__Local__124->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__125 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__124->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__125 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__126 = (*(AccessPrivateProperty<UObject* >(&(__Local__124->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__126 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__124->Slot = __Local__123;
	__Local__123->Content = __Local__124;
	__Local__38.Add(__Local__123);
	auto __Local__127 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_6"), (EObjectFlags)0x00280008);
	__Local__127->Padding.Left = 3.000000f;
	__Local__127->Padding.Top = 3.000000f;
	__Local__127->Padding.Right = 3.000000f;
	__Local__127->Padding.Bottom = 3.000000f;
	__Local__127->Row = 2;
	__Local__127->Column = 4;
	__Local__127->Parent = __Local__37;
	auto __Local__128 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image21"), (EObjectFlags)0x00280008);
	__Local__128->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__129 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__128->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__129 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__130 = (*(AccessPrivateProperty<UObject* >(&(__Local__128->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__130 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__128->Slot = __Local__127;
	__Local__127->Content = __Local__128;
	__Local__38.Add(__Local__127);
	auto __Local__131 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_7"), (EObjectFlags)0x00280008);
	__Local__131->Padding.Left = 3.000000f;
	__Local__131->Padding.Top = 3.000000f;
	__Local__131->Padding.Right = 3.000000f;
	__Local__131->Padding.Bottom = 3.000000f;
	__Local__131->Row = 2;
	__Local__131->Column = 5;
	__Local__131->Parent = __Local__37;
	auto __Local__132 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image22"), (EObjectFlags)0x00280008);
	__Local__132->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__133 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__132->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__133 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__134 = (*(AccessPrivateProperty<UObject* >(&(__Local__132->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__134 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__132->Slot = __Local__131;
	__Local__131->Content = __Local__132;
	__Local__38.Add(__Local__131);
	auto __Local__135 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_8"), (EObjectFlags)0x00280008);
	__Local__135->Padding.Left = 3.000000f;
	__Local__135->Padding.Top = 3.000000f;
	__Local__135->Padding.Right = 3.000000f;
	__Local__135->Padding.Bottom = 3.000000f;
	__Local__135->Row = 2;
	__Local__135->Column = 6;
	__Local__135->Parent = __Local__37;
	auto __Local__136 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image23"), (EObjectFlags)0x00280008);
	__Local__136->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__137 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__136->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__137 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__138 = (*(AccessPrivateProperty<UObject* >(&(__Local__136->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__138 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__136->Slot = __Local__135;
	__Local__135->Content = __Local__136;
	__Local__38.Add(__Local__135);
	auto __Local__139 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_9"), (EObjectFlags)0x00280008);
	__Local__139->Padding.Left = 3.000000f;
	__Local__139->Padding.Top = 3.000000f;
	__Local__139->Padding.Right = 3.000000f;
	__Local__139->Padding.Bottom = 3.000000f;
	__Local__139->Row = 2;
	__Local__139->Column = 7;
	__Local__139->Parent = __Local__37;
	auto __Local__140 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image24"), (EObjectFlags)0x00280008);
	__Local__140->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__141 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__140->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__141 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__142 = (*(AccessPrivateProperty<UObject* >(&(__Local__140->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__142 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__140->Slot = __Local__139;
	__Local__139->Content = __Local__140;
	__Local__38.Add(__Local__139);
	auto __Local__143 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_10"), (EObjectFlags)0x00280008);
	__Local__143->Padding.Left = 3.000000f;
	__Local__143->Padding.Top = 3.000000f;
	__Local__143->Padding.Right = 3.000000f;
	__Local__143->Padding.Bottom = 3.000000f;
	__Local__143->Row = 2;
	__Local__143->Column = 8;
	__Local__143->Parent = __Local__37;
	auto __Local__144 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image25"), (EObjectFlags)0x00280008);
	__Local__144->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__145 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__144->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__145 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__146 = (*(AccessPrivateProperty<UObject* >(&(__Local__144->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__146 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__144->Slot = __Local__143;
	__Local__143->Content = __Local__144;
	__Local__38.Add(__Local__143);
	auto __Local__147 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_11"), (EObjectFlags)0x00280008);
	__Local__147->Padding.Left = 3.000000f;
	__Local__147->Padding.Top = 3.000000f;
	__Local__147->Padding.Right = 3.000000f;
	__Local__147->Padding.Bottom = 3.000000f;
	__Local__147->Row = 3;
	__Local__147->Parent = __Local__37;
	auto __Local__148 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image26"), (EObjectFlags)0x00280008);
	__Local__148->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__149 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__148->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__149 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__150 = (*(AccessPrivateProperty<UObject* >(&(__Local__148->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__150 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__148->Slot = __Local__147;
	__Local__147->Content = __Local__148;
	__Local__38.Add(__Local__147);
	auto __Local__151 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_12"), (EObjectFlags)0x00280008);
	__Local__151->Padding.Left = 3.000000f;
	__Local__151->Padding.Top = 3.000000f;
	__Local__151->Padding.Right = 3.000000f;
	__Local__151->Padding.Bottom = 3.000000f;
	__Local__151->Row = 3;
	__Local__151->Column = 1;
	__Local__151->Parent = __Local__37;
	auto __Local__152 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image27"), (EObjectFlags)0x00280008);
	__Local__152->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__153 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__152->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__153 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__154 = (*(AccessPrivateProperty<UObject* >(&(__Local__152->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__154 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__152->Slot = __Local__151;
	__Local__151->Content = __Local__152;
	__Local__38.Add(__Local__151);
	auto __Local__155 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_14"), (EObjectFlags)0x00280008);
	__Local__155->Padding.Left = 3.000000f;
	__Local__155->Padding.Top = 3.000000f;
	__Local__155->Padding.Right = 3.000000f;
	__Local__155->Padding.Bottom = 3.000000f;
	__Local__155->Row = 3;
	__Local__155->Column = 2;
	__Local__155->Parent = __Local__37;
	auto __Local__156 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image28"), (EObjectFlags)0x00280008);
	__Local__156->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__157 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__156->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__157 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__158 = (*(AccessPrivateProperty<UObject* >(&(__Local__156->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__158 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__156->Slot = __Local__155;
	__Local__155->Content = __Local__156;
	__Local__38.Add(__Local__155);
	auto __Local__159 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_15"), (EObjectFlags)0x00280008);
	__Local__159->Padding.Left = 3.000000f;
	__Local__159->Padding.Top = 3.000000f;
	__Local__159->Padding.Right = 3.000000f;
	__Local__159->Padding.Bottom = 3.000000f;
	__Local__159->Row = 3;
	__Local__159->Column = 3;
	__Local__159->Parent = __Local__37;
	auto __Local__160 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image29"), (EObjectFlags)0x00280008);
	__Local__160->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__161 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__160->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__161 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__162 = (*(AccessPrivateProperty<UObject* >(&(__Local__160->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__162 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__160->Slot = __Local__159;
	__Local__159->Content = __Local__160;
	__Local__38.Add(__Local__159);
	auto __Local__163 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_20"), (EObjectFlags)0x00280008);
	__Local__163->Padding.Left = 3.000000f;
	__Local__163->Padding.Top = 3.000000f;
	__Local__163->Padding.Right = 3.000000f;
	__Local__163->Padding.Bottom = 3.000000f;
	__Local__163->Row = 3;
	__Local__163->Column = 4;
	__Local__163->Parent = __Local__37;
	auto __Local__164 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image30"), (EObjectFlags)0x00280008);
	__Local__164->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__165 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__164->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__165 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__166 = (*(AccessPrivateProperty<UObject* >(&(__Local__164->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__166 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__164->Slot = __Local__163;
	__Local__163->Content = __Local__164;
	__Local__38.Add(__Local__163);
	auto __Local__167 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_28"), (EObjectFlags)0x00280008);
	__Local__167->Padding.Left = 3.000000f;
	__Local__167->Padding.Top = 3.000000f;
	__Local__167->Padding.Right = 3.000000f;
	__Local__167->Padding.Bottom = 3.000000f;
	__Local__167->Row = 3;
	__Local__167->Column = 5;
	__Local__167->Parent = __Local__37;
	auto __Local__168 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image31"), (EObjectFlags)0x00280008);
	__Local__168->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__169 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__168->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__169 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__170 = (*(AccessPrivateProperty<UObject* >(&(__Local__168->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__170 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__168->Slot = __Local__167;
	__Local__167->Content = __Local__168;
	__Local__38.Add(__Local__167);
	auto __Local__171 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_33"), (EObjectFlags)0x00280008);
	__Local__171->Padding.Left = 3.000000f;
	__Local__171->Padding.Top = 3.000000f;
	__Local__171->Padding.Right = 3.000000f;
	__Local__171->Padding.Bottom = 3.000000f;
	__Local__171->Row = 3;
	__Local__171->Column = 6;
	__Local__171->Parent = __Local__37;
	auto __Local__172 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image32"), (EObjectFlags)0x00280008);
	__Local__172->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__173 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__172->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__173 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__174 = (*(AccessPrivateProperty<UObject* >(&(__Local__172->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__174 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__172->Slot = __Local__171;
	__Local__171->Content = __Local__172;
	__Local__38.Add(__Local__171);
	auto __Local__175 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_34"), (EObjectFlags)0x00280008);
	__Local__175->Padding.Left = 3.000000f;
	__Local__175->Padding.Top = 3.000000f;
	__Local__175->Padding.Right = 3.000000f;
	__Local__175->Padding.Bottom = 3.000000f;
	__Local__175->Row = 3;
	__Local__175->Column = 7;
	__Local__175->Parent = __Local__37;
	auto __Local__176 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image33"), (EObjectFlags)0x00280008);
	__Local__176->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__177 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__176->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__177 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__178 = (*(AccessPrivateProperty<UObject* >(&(__Local__176->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__178 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__176->Slot = __Local__175;
	__Local__175->Content = __Local__176;
	__Local__38.Add(__Local__175);
	auto __Local__179 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_35"), (EObjectFlags)0x00280008);
	__Local__179->Padding.Left = 3.000000f;
	__Local__179->Padding.Top = 3.000000f;
	__Local__179->Padding.Right = 3.000000f;
	__Local__179->Padding.Bottom = 3.000000f;
	__Local__179->Row = 3;
	__Local__179->Column = 8;
	__Local__179->Parent = __Local__37;
	auto __Local__180 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image34"), (EObjectFlags)0x00280008);
	__Local__180->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__181 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__180->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__181 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__182 = (*(AccessPrivateProperty<UObject* >(&(__Local__180->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__182 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__180->Slot = __Local__179;
	__Local__179->Content = __Local__180;
	__Local__38.Add(__Local__179);
	auto __Local__183 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_36"), (EObjectFlags)0x00280008);
	__Local__183->Padding.Left = 3.000000f;
	__Local__183->Padding.Top = 3.000000f;
	__Local__183->Padding.Right = 3.000000f;
	__Local__183->Padding.Bottom = 3.000000f;
	__Local__183->Row = 4;
	__Local__183->Parent = __Local__37;
	auto __Local__184 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image35"), (EObjectFlags)0x00280008);
	__Local__184->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__185 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__184->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__185 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__186 = (*(AccessPrivateProperty<UObject* >(&(__Local__184->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__186 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__184->Slot = __Local__183;
	__Local__183->Content = __Local__184;
	__Local__38.Add(__Local__183);
	auto __Local__187 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_37"), (EObjectFlags)0x00280008);
	__Local__187->Padding.Left = 3.000000f;
	__Local__187->Padding.Top = 3.000000f;
	__Local__187->Padding.Right = 3.000000f;
	__Local__187->Padding.Bottom = 3.000000f;
	__Local__187->Row = 4;
	__Local__187->Column = 1;
	__Local__187->Parent = __Local__37;
	auto __Local__188 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image36"), (EObjectFlags)0x00280008);
	__Local__188->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__189 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__188->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__189 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__190 = (*(AccessPrivateProperty<UObject* >(&(__Local__188->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__190 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__188->Slot = __Local__187;
	__Local__187->Content = __Local__188;
	__Local__38.Add(__Local__187);
	auto __Local__191 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_38"), (EObjectFlags)0x00280008);
	__Local__191->Padding.Left = 3.000000f;
	__Local__191->Padding.Top = 3.000000f;
	__Local__191->Padding.Right = 3.000000f;
	__Local__191->Padding.Bottom = 3.000000f;
	__Local__191->Row = 4;
	__Local__191->Column = 2;
	__Local__191->Parent = __Local__37;
	auto __Local__192 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image37"), (EObjectFlags)0x00280008);
	__Local__192->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__193 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__192->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__193 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__194 = (*(AccessPrivateProperty<UObject* >(&(__Local__192->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__194 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__192->Slot = __Local__191;
	__Local__191->Content = __Local__192;
	__Local__38.Add(__Local__191);
	auto __Local__195 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_39"), (EObjectFlags)0x00280008);
	__Local__195->Padding.Left = 3.000000f;
	__Local__195->Padding.Top = 3.000000f;
	__Local__195->Padding.Right = 3.000000f;
	__Local__195->Padding.Bottom = 3.000000f;
	__Local__195->Row = 4;
	__Local__195->Column = 3;
	__Local__195->Parent = __Local__37;
	auto __Local__196 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image38"), (EObjectFlags)0x00280008);
	__Local__196->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__197 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__196->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__197 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__198 = (*(AccessPrivateProperty<UObject* >(&(__Local__196->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__198 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__196->Slot = __Local__195;
	__Local__195->Content = __Local__196;
	__Local__38.Add(__Local__195);
	auto __Local__199 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_40"), (EObjectFlags)0x00280008);
	__Local__199->Padding.Left = 3.000000f;
	__Local__199->Padding.Top = 3.000000f;
	__Local__199->Padding.Right = 3.000000f;
	__Local__199->Padding.Bottom = 3.000000f;
	__Local__199->Row = 4;
	__Local__199->Column = 4;
	__Local__199->Parent = __Local__37;
	auto __Local__200 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image39"), (EObjectFlags)0x00280008);
	__Local__200->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__201 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__200->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__201 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__202 = (*(AccessPrivateProperty<UObject* >(&(__Local__200->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__202 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__200->Slot = __Local__199;
	__Local__199->Content = __Local__200;
	__Local__38.Add(__Local__199);
	auto __Local__203 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_41"), (EObjectFlags)0x00280008);
	__Local__203->Padding.Left = 3.000000f;
	__Local__203->Padding.Top = 3.000000f;
	__Local__203->Padding.Right = 3.000000f;
	__Local__203->Padding.Bottom = 3.000000f;
	__Local__203->Row = 4;
	__Local__203->Column = 5;
	__Local__203->Parent = __Local__37;
	auto __Local__204 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image40"), (EObjectFlags)0x00280008);
	__Local__204->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__205 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__204->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__205 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__206 = (*(AccessPrivateProperty<UObject* >(&(__Local__204->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__206 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__204->Slot = __Local__203;
	__Local__203->Content = __Local__204;
	__Local__38.Add(__Local__203);
	auto __Local__207 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_42"), (EObjectFlags)0x00280008);
	__Local__207->Padding.Left = 3.000000f;
	__Local__207->Padding.Top = 3.000000f;
	__Local__207->Padding.Right = 3.000000f;
	__Local__207->Padding.Bottom = 3.000000f;
	__Local__207->Row = 4;
	__Local__207->Column = 6;
	__Local__207->Parent = __Local__37;
	auto __Local__208 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image41"), (EObjectFlags)0x00280008);
	__Local__208->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__209 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__208->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__209 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__210 = (*(AccessPrivateProperty<UObject* >(&(__Local__208->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__210 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__208->Slot = __Local__207;
	__Local__207->Content = __Local__208;
	__Local__38.Add(__Local__207);
	auto __Local__211 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_43"), (EObjectFlags)0x00280008);
	__Local__211->Padding.Left = 3.000000f;
	__Local__211->Padding.Top = 3.000000f;
	__Local__211->Padding.Right = 3.000000f;
	__Local__211->Padding.Bottom = 3.000000f;
	__Local__211->Row = 4;
	__Local__211->Column = 7;
	__Local__211->Parent = __Local__37;
	auto __Local__212 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image42"), (EObjectFlags)0x00280008);
	__Local__212->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__213 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__212->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__213 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__214 = (*(AccessPrivateProperty<UObject* >(&(__Local__212->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__214 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__212->Slot = __Local__211;
	__Local__211->Content = __Local__212;
	__Local__38.Add(__Local__211);
	auto __Local__215 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_44"), (EObjectFlags)0x00280008);
	__Local__215->Padding.Left = 3.000000f;
	__Local__215->Padding.Top = 3.000000f;
	__Local__215->Padding.Right = 3.000000f;
	__Local__215->Padding.Bottom = 3.000000f;
	__Local__215->Row = 4;
	__Local__215->Column = 8;
	__Local__215->Parent = __Local__37;
	auto __Local__216 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image43"), (EObjectFlags)0x00280008);
	__Local__216->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__217 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__216->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__217 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__218 = (*(AccessPrivateProperty<UObject* >(&(__Local__216->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__218 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__216->Slot = __Local__215;
	__Local__215->Content = __Local__216;
	__Local__38.Add(__Local__215);
	auto __Local__219 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_45"), (EObjectFlags)0x00280008);
	__Local__219->Padding.Left = 3.000000f;
	__Local__219->Padding.Top = 3.000000f;
	__Local__219->Padding.Right = 3.000000f;
	__Local__219->Padding.Bottom = 3.000000f;
	__Local__219->Row = 5;
	__Local__219->Parent = __Local__37;
	auto __Local__220 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image44"), (EObjectFlags)0x00280008);
	__Local__220->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__221 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__220->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__221 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__222 = (*(AccessPrivateProperty<UObject* >(&(__Local__220->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__222 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__220->Slot = __Local__219;
	__Local__219->Content = __Local__220;
	__Local__38.Add(__Local__219);
	auto __Local__223 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_46"), (EObjectFlags)0x00280008);
	__Local__223->Padding.Left = 3.000000f;
	__Local__223->Padding.Top = 3.000000f;
	__Local__223->Padding.Right = 3.000000f;
	__Local__223->Padding.Bottom = 3.000000f;
	__Local__223->Row = 5;
	__Local__223->Column = 1;
	__Local__223->Parent = __Local__37;
	auto __Local__224 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image45"), (EObjectFlags)0x00280008);
	__Local__224->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__225 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__224->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__225 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__226 = (*(AccessPrivateProperty<UObject* >(&(__Local__224->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__226 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__224->Slot = __Local__223;
	__Local__223->Content = __Local__224;
	__Local__38.Add(__Local__223);
	auto __Local__227 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_47"), (EObjectFlags)0x00280008);
	__Local__227->Padding.Left = 3.000000f;
	__Local__227->Padding.Top = 3.000000f;
	__Local__227->Padding.Right = 3.000000f;
	__Local__227->Padding.Bottom = 3.000000f;
	__Local__227->Row = 5;
	__Local__227->Column = 2;
	__Local__227->Parent = __Local__37;
	auto __Local__228 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image46"), (EObjectFlags)0x00280008);
	__Local__228->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__229 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__228->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__229 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__230 = (*(AccessPrivateProperty<UObject* >(&(__Local__228->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__230 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__228->Slot = __Local__227;
	__Local__227->Content = __Local__228;
	__Local__38.Add(__Local__227);
	auto __Local__231 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_48"), (EObjectFlags)0x00280008);
	__Local__231->Padding.Left = 3.000000f;
	__Local__231->Padding.Top = 3.000000f;
	__Local__231->Padding.Right = 3.000000f;
	__Local__231->Padding.Bottom = 3.000000f;
	__Local__231->Row = 5;
	__Local__231->Column = 3;
	__Local__231->Parent = __Local__37;
	auto __Local__232 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image47"), (EObjectFlags)0x00280008);
	__Local__232->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__233 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__232->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__233 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__234 = (*(AccessPrivateProperty<UObject* >(&(__Local__232->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__234 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__232->Slot = __Local__231;
	__Local__231->Content = __Local__232;
	__Local__38.Add(__Local__231);
	auto __Local__235 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_49"), (EObjectFlags)0x00280008);
	__Local__235->Padding.Left = 3.000000f;
	__Local__235->Padding.Top = 3.000000f;
	__Local__235->Padding.Right = 3.000000f;
	__Local__235->Padding.Bottom = 3.000000f;
	__Local__235->Row = 5;
	__Local__235->Column = 4;
	__Local__235->Parent = __Local__37;
	auto __Local__236 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image48"), (EObjectFlags)0x00280008);
	__Local__236->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__237 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__236->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__237 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__238 = (*(AccessPrivateProperty<UObject* >(&(__Local__236->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__238 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__236->Slot = __Local__235;
	__Local__235->Content = __Local__236;
	__Local__38.Add(__Local__235);
	auto __Local__239 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_50"), (EObjectFlags)0x00280008);
	__Local__239->Padding.Left = 3.000000f;
	__Local__239->Padding.Top = 3.000000f;
	__Local__239->Padding.Right = 3.000000f;
	__Local__239->Padding.Bottom = 3.000000f;
	__Local__239->Row = 5;
	__Local__239->Column = 5;
	__Local__239->Parent = __Local__37;
	auto __Local__240 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image49"), (EObjectFlags)0x00280008);
	__Local__240->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__241 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__240->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__241 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__242 = (*(AccessPrivateProperty<UObject* >(&(__Local__240->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__242 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__240->Slot = __Local__239;
	__Local__239->Content = __Local__240;
	__Local__38.Add(__Local__239);
	auto __Local__243 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_51"), (EObjectFlags)0x00280008);
	__Local__243->Padding.Left = 3.000000f;
	__Local__243->Padding.Top = 3.000000f;
	__Local__243->Padding.Right = 3.000000f;
	__Local__243->Padding.Bottom = 3.000000f;
	__Local__243->Row = 5;
	__Local__243->Column = 6;
	__Local__243->Parent = __Local__37;
	auto __Local__244 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image50"), (EObjectFlags)0x00280008);
	__Local__244->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__245 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__244->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__245 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__246 = (*(AccessPrivateProperty<UObject* >(&(__Local__244->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__246 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__244->Slot = __Local__243;
	__Local__243->Content = __Local__244;
	__Local__38.Add(__Local__243);
	auto __Local__247 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_52"), (EObjectFlags)0x00280008);
	__Local__247->Padding.Left = 3.000000f;
	__Local__247->Padding.Top = 3.000000f;
	__Local__247->Padding.Right = 3.000000f;
	__Local__247->Padding.Bottom = 3.000000f;
	__Local__247->Row = 5;
	__Local__247->Column = 7;
	__Local__247->Parent = __Local__37;
	auto __Local__248 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image51"), (EObjectFlags)0x00280008);
	__Local__248->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__249 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__248->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__249 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__250 = (*(AccessPrivateProperty<UObject* >(&(__Local__248->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__250 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__248->Slot = __Local__247;
	__Local__247->Content = __Local__248;
	__Local__38.Add(__Local__247);
	auto __Local__251 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_53"), (EObjectFlags)0x00280008);
	__Local__251->Padding.Left = 3.000000f;
	__Local__251->Padding.Top = 3.000000f;
	__Local__251->Padding.Right = 3.000000f;
	__Local__251->Padding.Bottom = 3.000000f;
	__Local__251->Row = 5;
	__Local__251->Column = 8;
	__Local__251->Parent = __Local__37;
	auto __Local__252 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image52"), (EObjectFlags)0x00280008);
	__Local__252->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__253 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__252->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__253 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__254 = (*(AccessPrivateProperty<UObject* >(&(__Local__252->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__254 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__252->Slot = __Local__251;
	__Local__251->Content = __Local__252;
	__Local__38.Add(__Local__251);
	auto __Local__255 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_54"), (EObjectFlags)0x00280008);
	__Local__255->Padding.Left = 3.000000f;
	__Local__255->Padding.Top = 3.000000f;
	__Local__255->Padding.Right = 3.000000f;
	__Local__255->Padding.Bottom = 3.000000f;
	__Local__255->Row = 6;
	__Local__255->Parent = __Local__37;
	auto __Local__256 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image53"), (EObjectFlags)0x00280008);
	__Local__256->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__257 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__256->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__257 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__258 = (*(AccessPrivateProperty<UObject* >(&(__Local__256->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__258 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__256->Slot = __Local__255;
	__Local__255->Content = __Local__256;
	__Local__38.Add(__Local__255);
	auto __Local__259 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_55"), (EObjectFlags)0x00280008);
	__Local__259->Padding.Left = 3.000000f;
	__Local__259->Padding.Top = 3.000000f;
	__Local__259->Padding.Right = 3.000000f;
	__Local__259->Padding.Bottom = 3.000000f;
	__Local__259->Row = 6;
	__Local__259->Column = 1;
	__Local__259->Parent = __Local__37;
	auto __Local__260 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image54"), (EObjectFlags)0x00280008);
	__Local__260->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__261 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__260->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__261 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__262 = (*(AccessPrivateProperty<UObject* >(&(__Local__260->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__262 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__260->Slot = __Local__259;
	__Local__259->Content = __Local__260;
	__Local__38.Add(__Local__259);
	auto __Local__263 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_56"), (EObjectFlags)0x00280008);
	__Local__263->Padding.Left = 3.000000f;
	__Local__263->Padding.Top = 3.000000f;
	__Local__263->Padding.Right = 3.000000f;
	__Local__263->Padding.Bottom = 3.000000f;
	__Local__263->Row = 6;
	__Local__263->Column = 2;
	__Local__263->Parent = __Local__37;
	auto __Local__264 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image55"), (EObjectFlags)0x00280008);
	__Local__264->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__265 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__264->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__265 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__266 = (*(AccessPrivateProperty<UObject* >(&(__Local__264->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__266 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__264->Slot = __Local__263;
	__Local__263->Content = __Local__264;
	__Local__38.Add(__Local__263);
	auto __Local__267 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_57"), (EObjectFlags)0x00280008);
	__Local__267->Padding.Left = 3.000000f;
	__Local__267->Padding.Top = 3.000000f;
	__Local__267->Padding.Right = 3.000000f;
	__Local__267->Padding.Bottom = 3.000000f;
	__Local__267->Row = 6;
	__Local__267->Column = 3;
	__Local__267->Parent = __Local__37;
	auto __Local__268 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image56"), (EObjectFlags)0x00280008);
	__Local__268->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__269 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__268->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__269 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__270 = (*(AccessPrivateProperty<UObject* >(&(__Local__268->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__270 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__268->Slot = __Local__267;
	__Local__267->Content = __Local__268;
	__Local__38.Add(__Local__267);
	auto __Local__271 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_58"), (EObjectFlags)0x00280008);
	__Local__271->Padding.Left = 3.000000f;
	__Local__271->Padding.Top = 3.000000f;
	__Local__271->Padding.Right = 3.000000f;
	__Local__271->Padding.Bottom = 3.000000f;
	__Local__271->Row = 6;
	__Local__271->Column = 4;
	__Local__271->Parent = __Local__37;
	auto __Local__272 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image57"), (EObjectFlags)0x00280008);
	__Local__272->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__273 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__272->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__273 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__274 = (*(AccessPrivateProperty<UObject* >(&(__Local__272->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__274 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__272->Slot = __Local__271;
	__Local__271->Content = __Local__272;
	__Local__38.Add(__Local__271);
	auto __Local__275 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_59"), (EObjectFlags)0x00280008);
	__Local__275->Padding.Left = 3.000000f;
	__Local__275->Padding.Top = 3.000000f;
	__Local__275->Padding.Right = 3.000000f;
	__Local__275->Padding.Bottom = 3.000000f;
	__Local__275->Row = 6;
	__Local__275->Column = 5;
	__Local__275->Parent = __Local__37;
	auto __Local__276 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image58"), (EObjectFlags)0x00280008);
	__Local__276->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__277 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__276->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__277 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__278 = (*(AccessPrivateProperty<UObject* >(&(__Local__276->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__278 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__276->Slot = __Local__275;
	__Local__275->Content = __Local__276;
	__Local__38.Add(__Local__275);
	auto __Local__279 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_60"), (EObjectFlags)0x00280008);
	__Local__279->Padding.Left = 3.000000f;
	__Local__279->Padding.Top = 3.000000f;
	__Local__279->Padding.Right = 3.000000f;
	__Local__279->Padding.Bottom = 3.000000f;
	__Local__279->Row = 6;
	__Local__279->Column = 6;
	__Local__279->Parent = __Local__37;
	auto __Local__280 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image59"), (EObjectFlags)0x00280008);
	__Local__280->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__281 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__280->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__281 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__282 = (*(AccessPrivateProperty<UObject* >(&(__Local__280->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__282 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__280->Slot = __Local__279;
	__Local__279->Content = __Local__280;
	__Local__38.Add(__Local__279);
	auto __Local__283 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_61"), (EObjectFlags)0x00280008);
	__Local__283->Padding.Left = 3.000000f;
	__Local__283->Padding.Top = 3.000000f;
	__Local__283->Padding.Right = 3.000000f;
	__Local__283->Padding.Bottom = 3.000000f;
	__Local__283->Row = 6;
	__Local__283->Column = 7;
	__Local__283->Parent = __Local__37;
	auto __Local__284 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image60"), (EObjectFlags)0x00280008);
	__Local__284->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__285 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__284->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__285 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__286 = (*(AccessPrivateProperty<UObject* >(&(__Local__284->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__286 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__284->Slot = __Local__283;
	__Local__283->Content = __Local__284;
	__Local__38.Add(__Local__283);
	auto __Local__287 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_62"), (EObjectFlags)0x00280008);
	__Local__287->Padding.Left = 3.000000f;
	__Local__287->Padding.Top = 3.000000f;
	__Local__287->Padding.Right = 3.000000f;
	__Local__287->Padding.Bottom = 3.000000f;
	__Local__287->Row = 6;
	__Local__287->Column = 8;
	__Local__287->Parent = __Local__37;
	auto __Local__288 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image61"), (EObjectFlags)0x00280008);
	__Local__288->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__289 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__288->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__289 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__290 = (*(AccessPrivateProperty<UObject* >(&(__Local__288->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__290 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__288->Slot = __Local__287;
	__Local__287->Content = __Local__288;
	__Local__38.Add(__Local__287);
	auto __Local__291 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_63"), (EObjectFlags)0x00280008);
	__Local__291->Padding.Left = 3.000000f;
	__Local__291->Padding.Top = 3.000000f;
	__Local__291->Padding.Right = 3.000000f;
	__Local__291->Padding.Bottom = 3.000000f;
	__Local__291->Row = 7;
	__Local__291->Parent = __Local__37;
	auto __Local__292 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image62"), (EObjectFlags)0x00280008);
	__Local__292->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__293 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__292->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__293 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__294 = (*(AccessPrivateProperty<UObject* >(&(__Local__292->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__294 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__292->Slot = __Local__291;
	__Local__291->Content = __Local__292;
	__Local__38.Add(__Local__291);
	auto __Local__295 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_64"), (EObjectFlags)0x00280008);
	__Local__295->Padding.Left = 3.000000f;
	__Local__295->Padding.Top = 3.000000f;
	__Local__295->Padding.Right = 3.000000f;
	__Local__295->Padding.Bottom = 3.000000f;
	__Local__295->Row = 7;
	__Local__295->Column = 1;
	__Local__295->Parent = __Local__37;
	auto __Local__296 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image63"), (EObjectFlags)0x00280008);
	__Local__296->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__297 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__296->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__297 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__298 = (*(AccessPrivateProperty<UObject* >(&(__Local__296->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__298 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__296->Slot = __Local__295;
	__Local__295->Content = __Local__296;
	__Local__38.Add(__Local__295);
	auto __Local__299 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_65"), (EObjectFlags)0x00280008);
	__Local__299->Padding.Left = 3.000000f;
	__Local__299->Padding.Top = 3.000000f;
	__Local__299->Padding.Right = 3.000000f;
	__Local__299->Padding.Bottom = 3.000000f;
	__Local__299->Row = 7;
	__Local__299->Column = 2;
	__Local__299->Parent = __Local__37;
	auto __Local__300 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image64"), (EObjectFlags)0x00280008);
	__Local__300->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__301 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__300->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__301 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__302 = (*(AccessPrivateProperty<UObject* >(&(__Local__300->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__302 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__300->Slot = __Local__299;
	__Local__299->Content = __Local__300;
	__Local__38.Add(__Local__299);
	auto __Local__303 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_66"), (EObjectFlags)0x00280008);
	__Local__303->Padding.Left = 3.000000f;
	__Local__303->Padding.Top = 3.000000f;
	__Local__303->Padding.Right = 3.000000f;
	__Local__303->Padding.Bottom = 3.000000f;
	__Local__303->Row = 7;
	__Local__303->Column = 3;
	__Local__303->Parent = __Local__37;
	auto __Local__304 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image65"), (EObjectFlags)0x00280008);
	__Local__304->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__305 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__304->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__305 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__306 = (*(AccessPrivateProperty<UObject* >(&(__Local__304->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__306 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__304->Slot = __Local__303;
	__Local__303->Content = __Local__304;
	__Local__38.Add(__Local__303);
	auto __Local__307 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_67"), (EObjectFlags)0x00280008);
	__Local__307->Padding.Left = 3.000000f;
	__Local__307->Padding.Top = 3.000000f;
	__Local__307->Padding.Right = 3.000000f;
	__Local__307->Padding.Bottom = 3.000000f;
	__Local__307->Row = 7;
	__Local__307->Column = 4;
	__Local__307->Parent = __Local__37;
	auto __Local__308 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image66"), (EObjectFlags)0x00280008);
	__Local__308->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__309 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__308->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__309 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__310 = (*(AccessPrivateProperty<UObject* >(&(__Local__308->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__310 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__308->Slot = __Local__307;
	__Local__307->Content = __Local__308;
	__Local__38.Add(__Local__307);
	auto __Local__311 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_68"), (EObjectFlags)0x00280008);
	__Local__311->Padding.Left = 3.000000f;
	__Local__311->Padding.Top = 3.000000f;
	__Local__311->Padding.Right = 3.000000f;
	__Local__311->Padding.Bottom = 3.000000f;
	__Local__311->Row = 7;
	__Local__311->Column = 5;
	__Local__311->Parent = __Local__37;
	auto __Local__312 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image67"), (EObjectFlags)0x00280008);
	__Local__312->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__313 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__312->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__313 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__314 = (*(AccessPrivateProperty<UObject* >(&(__Local__312->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__314 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__312->Slot = __Local__311;
	__Local__311->Content = __Local__312;
	__Local__38.Add(__Local__311);
	auto __Local__315 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_69"), (EObjectFlags)0x00280008);
	__Local__315->Padding.Left = 3.000000f;
	__Local__315->Padding.Top = 3.000000f;
	__Local__315->Padding.Right = 3.000000f;
	__Local__315->Padding.Bottom = 3.000000f;
	__Local__315->Row = 7;
	__Local__315->Column = 6;
	__Local__315->Parent = __Local__37;
	auto __Local__316 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image68"), (EObjectFlags)0x00280008);
	__Local__316->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__317 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__316->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__317 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__318 = (*(AccessPrivateProperty<UObject* >(&(__Local__316->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__318 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__316->Slot = __Local__315;
	__Local__315->Content = __Local__316;
	__Local__38.Add(__Local__315);
	auto __Local__319 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_70"), (EObjectFlags)0x00280008);
	__Local__319->Padding.Left = 3.000000f;
	__Local__319->Padding.Top = 3.000000f;
	__Local__319->Padding.Right = 3.000000f;
	__Local__319->Padding.Bottom = 3.000000f;
	__Local__319->Row = 7;
	__Local__319->Column = 7;
	__Local__319->Parent = __Local__37;
	auto __Local__320 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image69"), (EObjectFlags)0x00280008);
	__Local__320->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__321 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__320->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__321 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__322 = (*(AccessPrivateProperty<UObject* >(&(__Local__320->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__322 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__320->Slot = __Local__319;
	__Local__319->Content = __Local__320;
	__Local__38.Add(__Local__319);
	auto __Local__323 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_71"), (EObjectFlags)0x00280008);
	__Local__323->Padding.Left = 3.000000f;
	__Local__323->Padding.Top = 3.000000f;
	__Local__323->Padding.Right = 3.000000f;
	__Local__323->Padding.Bottom = 3.000000f;
	__Local__323->Row = 7;
	__Local__323->Column = 8;
	__Local__323->Parent = __Local__37;
	auto __Local__324 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image70"), (EObjectFlags)0x00280008);
	__Local__324->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__325 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__324->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__325 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__326 = (*(AccessPrivateProperty<UObject* >(&(__Local__324->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__326 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__324->Slot = __Local__323;
	__Local__323->Content = __Local__324;
	__Local__38.Add(__Local__323);
	auto __Local__327 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_72"), (EObjectFlags)0x00280008);
	__Local__327->Padding.Left = 3.000000f;
	__Local__327->Padding.Top = 3.000000f;
	__Local__327->Padding.Right = 3.000000f;
	__Local__327->Padding.Bottom = 3.000000f;
	__Local__327->Row = 8;
	__Local__327->Parent = __Local__37;
	auto __Local__328 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image71"), (EObjectFlags)0x00280008);
	__Local__328->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__329 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__328->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__329 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__330 = (*(AccessPrivateProperty<UObject* >(&(__Local__328->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__330 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__328->Slot = __Local__327;
	__Local__327->Content = __Local__328;
	__Local__38.Add(__Local__327);
	auto __Local__331 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_73"), (EObjectFlags)0x00280008);
	__Local__331->Padding.Left = 3.000000f;
	__Local__331->Padding.Top = 3.000000f;
	__Local__331->Padding.Right = 3.000000f;
	__Local__331->Padding.Bottom = 3.000000f;
	__Local__331->Row = 8;
	__Local__331->Column = 1;
	__Local__331->Parent = __Local__37;
	auto __Local__332 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image72"), (EObjectFlags)0x00280008);
	__Local__332->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__333 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__332->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__333 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__334 = (*(AccessPrivateProperty<UObject* >(&(__Local__332->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__334 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__332->Slot = __Local__331;
	__Local__331->Content = __Local__332;
	__Local__38.Add(__Local__331);
	auto __Local__335 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_74"), (EObjectFlags)0x00280008);
	__Local__335->Padding.Left = 3.000000f;
	__Local__335->Padding.Top = 3.000000f;
	__Local__335->Padding.Right = 3.000000f;
	__Local__335->Padding.Bottom = 3.000000f;
	__Local__335->Row = 8;
	__Local__335->Column = 2;
	__Local__335->Parent = __Local__37;
	auto __Local__336 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image73"), (EObjectFlags)0x00280008);
	__Local__336->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__337 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__336->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__337 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__338 = (*(AccessPrivateProperty<UObject* >(&(__Local__336->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__338 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__336->Slot = __Local__335;
	__Local__335->Content = __Local__336;
	__Local__38.Add(__Local__335);
	auto __Local__339 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_75"), (EObjectFlags)0x00280008);
	__Local__339->Padding.Left = 3.000000f;
	__Local__339->Padding.Top = 3.000000f;
	__Local__339->Padding.Right = 3.000000f;
	__Local__339->Padding.Bottom = 3.000000f;
	__Local__339->Row = 8;
	__Local__339->Column = 3;
	__Local__339->Parent = __Local__37;
	auto __Local__340 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image74"), (EObjectFlags)0x00280008);
	__Local__340->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__341 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__340->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__341 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__342 = (*(AccessPrivateProperty<UObject* >(&(__Local__340->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__342 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__340->Slot = __Local__339;
	__Local__339->Content = __Local__340;
	__Local__38.Add(__Local__339);
	auto __Local__343 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_76"), (EObjectFlags)0x00280008);
	__Local__343->Padding.Left = 3.000000f;
	__Local__343->Padding.Top = 3.000000f;
	__Local__343->Padding.Right = 3.000000f;
	__Local__343->Padding.Bottom = 3.000000f;
	__Local__343->Row = 8;
	__Local__343->Column = 4;
	__Local__343->Parent = __Local__37;
	auto __Local__344 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image75"), (EObjectFlags)0x00280008);
	__Local__344->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__345 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__344->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__345 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__346 = (*(AccessPrivateProperty<UObject* >(&(__Local__344->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__346 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__344->Slot = __Local__343;
	__Local__343->Content = __Local__344;
	__Local__38.Add(__Local__343);
	auto __Local__347 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_77"), (EObjectFlags)0x00280008);
	__Local__347->Padding.Left = 3.000000f;
	__Local__347->Padding.Top = 3.000000f;
	__Local__347->Padding.Right = 3.000000f;
	__Local__347->Padding.Bottom = 3.000000f;
	__Local__347->Row = 8;
	__Local__347->Column = 5;
	__Local__347->Parent = __Local__37;
	auto __Local__348 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image76"), (EObjectFlags)0x00280008);
	__Local__348->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__349 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__348->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__349 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__350 = (*(AccessPrivateProperty<UObject* >(&(__Local__348->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__350 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__348->Slot = __Local__347;
	__Local__347->Content = __Local__348;
	__Local__38.Add(__Local__347);
	auto __Local__351 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_78"), (EObjectFlags)0x00280008);
	__Local__351->Padding.Left = 3.000000f;
	__Local__351->Padding.Top = 3.000000f;
	__Local__351->Padding.Right = 3.000000f;
	__Local__351->Padding.Bottom = 3.000000f;
	__Local__351->Row = 8;
	__Local__351->Column = 6;
	__Local__351->Parent = __Local__37;
	auto __Local__352 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image77"), (EObjectFlags)0x00280008);
	__Local__352->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__353 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__352->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__353 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__354 = (*(AccessPrivateProperty<UObject* >(&(__Local__352->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__354 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__352->Slot = __Local__351;
	__Local__351->Content = __Local__352;
	__Local__38.Add(__Local__351);
	auto __Local__355 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_79"), (EObjectFlags)0x00280008);
	__Local__355->Padding.Left = 3.000000f;
	__Local__355->Padding.Top = 3.000000f;
	__Local__355->Padding.Right = 3.000000f;
	__Local__355->Padding.Bottom = 3.000000f;
	__Local__355->Row = 8;
	__Local__355->Column = 7;
	__Local__355->Parent = __Local__37;
	auto __Local__356 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image78"), (EObjectFlags)0x00280008);
	__Local__356->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__357 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__356->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__357 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__358 = (*(AccessPrivateProperty<UObject* >(&(__Local__356->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__358 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__356->Slot = __Local__355;
	__Local__355->Content = __Local__356;
	__Local__38.Add(__Local__355);
	auto __Local__359 = NewObject<UGridSlot>(__Local__37, UGridSlot::StaticClass(), TEXT("GridSlot_80"), (EObjectFlags)0x00280008);
	__Local__359->Padding.Left = 3.000000f;
	__Local__359->Padding.Top = 3.000000f;
	__Local__359->Padding.Right = 3.000000f;
	__Local__359->Padding.Bottom = 3.000000f;
	__Local__359->Row = 8;
	__Local__359->Column = 8;
	__Local__359->Parent = __Local__37;
	auto __Local__360 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image79"), (EObjectFlags)0x00280008);
	__Local__360->Brush.ImageSize = FVector2D(719.000000, 622.000000);
	auto& __Local__361 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__360->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__361 = FLinearColor(1.000000, 1.000000, 1.000000, 0.450000);
	auto& __Local__362 = (*(AccessPrivateProperty<UObject* >(&(__Local__360->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__362 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	__Local__360->Slot = __Local__359;
	__Local__359->Content = __Local__360;
	__Local__38.Add(__Local__359);
	__Local__37->Slot = __Local__36;
	__Local__37->RenderTransform.Scale = FVector2D(1.100000, 1.100000);
	__Local__37->bIsVariable = true;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	__Local__34->Slot = __Local__33;
	__Local__34->RenderTransform.Scale = FVector2D(0.300000, 0.500000);
	__Local__34->RenderTransform.Angle = -45.000000f;
	__Local__33->Content = __Local__34;
	__Local__2.Add(__Local__33);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMap_C__pf2402407856::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__363;
	SlotNames.Append(__Local__363);
}
void UMap_C__pf2402407856::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__364;
	TArray<FDelegateRuntimeBinding>  __Local__365;
	__Local__365.AddUninitialized(1);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__365.GetData(), 1);
	auto& __Local__366 = __Local__365[0];
	__Local__366.ObjectName = FString(TEXT("TextBlock_213"));
	__Local__366.PropertyName = FName(TEXT("Text"));
	auto& __Local__367 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__366.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__367 = TArray<FPropertyPathSegment> ();
	__Local__367.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__367.GetData(), 1);
	auto& __Local__368 = __Local__367[0];
	__Local__368.Name = FName(TEXT("NumeroDeLlaves"));
	__Local__366.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UMap_C__pf2402407856::StaticClass())->MiscConvertedSubobjects[0]), __Local__364, __Local__365);
}
void UMap_C__pf2402407856::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UMap_C__pf2402407856::bpf__ExecuteUbergraph_Map__pf_0(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__Amarilla__pf))
				{
					bpv__Amarilla__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				b0l__K2Node_DynamicCast_AsTop_Down_Character__pf = Cast<ATopDownCharacter_C__pf1773622777>(bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 18:
			{
				int32  __Local__369 = 0;
				bpv__NumeroDeLlaves__pf = ((::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf)) ? (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf->bpv__LlavesAzules__pf) : (__Local__369));
			}
		case 19:
			{
				int32  __Local__370 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf)) ? (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf->bpv__LlavesVerdes__pf) : (__Local__370)), 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 20:
			{
				if(::IsValid(bpv__Verde__pf))
				{
					bpv__Verde__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 21:
			{
				int32  __Local__371 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf)) ? (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf->bpv__LlavesRojas__pf) : (__Local__371)), 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 22:
			{
				if(::IsValid(bpv__Rojo__pf))
				{
					bpv__Rojo__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 23:
			{
				int32  __Local__372 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf)) ? (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf->bpv__LlavesAmarillas__pf) : (__Local__372)), 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 1;
				break;
			}
		case 24:
			{
				__CurrentState = 17;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMap_C__pf2402407856::bpf__ExecuteUbergraph_Map__pf_1(int32 bpp__EntryPoint__pf)
{
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__GridMapa__pf))
	{
		bpfv__CallFunc_GetChildAt_ReturnValue_1__pf = bpv__GridMapa__pf->UPanelWidget::GetChildAt(b0l__K2Node_CustomEvent_PosicionDeLaQueSale__pf);
	}
	b0l__K2Node_DynamicCast_AsImage_1__pf = Cast<UImage>(bpfv__CallFunc_GetChildAt_ReturnValue_1__pf);
	b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsImage_1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.450000);
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	b0l__K2Node_MakeStruct_SlateBrush_1__pf.ImageSize = FVector2D(32.000000,32.000000);
	const UScriptStruct* __Local__374 = FMargin::StaticStruct();
	uint8* __Local__375 = (uint8*)FMemory_Alloca(__Local__374->GetStructureSize());
	__Local__374->InitializeStruct(__Local__375);
	FMargin& __Local__373 = *reinterpret_cast<FMargin*>(__Local__375);
	b0l__K2Node_MakeStruct_SlateBrush_1__pf.Margin = __Local__373;
	b0l__K2Node_MakeStruct_SlateBrush_1__pf.TintColor = b0l__K2Node_MakeStruct_SlateColor_1__pf;
	(*(AccessPrivateProperty<UObject* >(&(b0l__K2Node_MakeStruct_SlateBrush_1__pf), FSlateBrush::__PPO__ResourceObject() ))) = b0l__K2Node_CustomEvent_SuTextura__pf;
	b0l__K2Node_MakeStruct_SlateBrush_1__pf.DrawAs = ESlateBrushDrawType::Image;
	b0l__K2Node_MakeStruct_SlateBrush_1__pf.Tiling = ESlateBrushTileType::NoTile;
	b0l__K2Node_MakeStruct_SlateBrush_1__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	if(::IsValid(b0l__K2Node_DynamicCast_AsImage_1__pf))
	{
		b0l__K2Node_DynamicCast_AsImage_1__pf->SetBrush(b0l__K2Node_MakeStruct_SlateBrush_1__pf);
	}
	return; //KCST_EndOfThread
}
void UMap_C__pf2402407856::bpf__ExecuteUbergraph_Map__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__StateStack.Push(4);
			}
		case 3:
			{
				if(::IsValid(bpv__GridMapa__pf))
				{
					b0l__CallFunc_GetAllChildren_ReturnValue__pf = bpv__GridMapa__pf->UPanelWidget::GetAllChildren();
				}
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllChildren_ReturnValue__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 5:
			{
				if(::IsValid(bpv__GridMapa__pf))
				{
					b0l__CallFunc_GetAllChildren_ReturnValue__pf = bpv__GridMapa__pf->UPanelWidget::GetAllChildren();
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllChildren_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 2;
				break;
			}
		case 7:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 5;
				break;
			}
		case 8:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 7;
				break;
			}
		case 9:
			{
				__CurrentState = 8;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMap_C__pf2402407856::bpf__ExecuteUbergraph_Map__pf_3(int32 bpp__EntryPoint__pf)
{
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__GridMapa__pf))
	{
		bpfv__CallFunc_GetChildAt_ReturnValue__pf = bpv__GridMapa__pf->UPanelWidget::GetChildAt(b0l__K2Node_CustomEvent_Posicion__pf);
	}
	if(::IsValid(bpfv__CallFunc_GetChildAt_ReturnValue__pf))
	{
		bpfv__CallFunc_GetChildAt_ReturnValue__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__GridMapa__pf))
	{
		bpfv__CallFunc_GetChildAt_ReturnValue__pf = bpv__GridMapa__pf->UPanelWidget::GetChildAt(b0l__K2Node_CustomEvent_Posicion__pf);
	}
	b0l__K2Node_DynamicCast_AsImage__pf = Cast<UImage>(bpfv__CallFunc_GetChildAt_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsImage__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,0.911483,0.505126,1.000000);
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	b0l__K2Node_MakeStruct_SlateBrush__pf.ImageSize = FVector2D(32.000000,32.000000);
	const UScriptStruct* __Local__377 = FMargin::StaticStruct();
	uint8* __Local__378 = (uint8*)FMemory_Alloca(__Local__377->GetStructureSize());
	__Local__377->InitializeStruct(__Local__378);
	FMargin& __Local__376 = *reinterpret_cast<FMargin*>(__Local__378);
	b0l__K2Node_MakeStruct_SlateBrush__pf.Margin = __Local__376;
	b0l__K2Node_MakeStruct_SlateBrush__pf.TintColor = b0l__K2Node_MakeStruct_SlateColor__pf;
	(*(AccessPrivateProperty<UObject* >(&(b0l__K2Node_MakeStruct_SlateBrush__pf), FSlateBrush::__PPO__ResourceObject() ))) = b0l__K2Node_CustomEvent_Imagen__pf;
	b0l__K2Node_MakeStruct_SlateBrush__pf.DrawAs = ESlateBrushDrawType::Image;
	b0l__K2Node_MakeStruct_SlateBrush__pf.Tiling = ESlateBrushTileType::NoTile;
	b0l__K2Node_MakeStruct_SlateBrush__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	if(::IsValid(b0l__K2Node_DynamicCast_AsImage__pf))
	{
		b0l__K2Node_DynamicCast_AsImage__pf->SetBrush(b0l__K2Node_MakeStruct_SlateBrush__pf);
	}
	return; //KCST_EndOfThread
}
void UMap_C__pf2402407856::bpf__ActualizarLlaves__pf()
{
	bpf__ExecuteUbergraph_Map__pf_0(24);
}
void UMap_C__pf2402407856::bpf__SaliendoDePosicion__pf(int32 bpp__PosicionDeLaQueSale__pf, UTexture2D* bpp__SuTextura__pf)
{
	b0l__K2Node_CustomEvent_PosicionDeLaQueSale__pf = bpp__PosicionDeLaQueSale__pf;
	b0l__K2Node_CustomEvent_SuTextura__pf = bpp__SuTextura__pf;
	bpf__ExecuteUbergraph_Map__pf_1(14);
}
void UMap_C__pf2402407856::bpf__EnNuevaPosicion__pf(int32 bpp__Posicion__pf, UTexture2D* bpp__Imagen__pf)
{
	b0l__K2Node_CustomEvent_Posicion__pf = bpp__Posicion__pf;
	b0l__K2Node_CustomEvent_Imagen__pf = bpp__Imagen__pf;
	bpf__ExecuteUbergraph_Map__pf_3(10);
}
void UMap_C__pf2402407856::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Map__pf_2(9);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMap_C__pf2402407856::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Azulito.Azulito 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Rojo.Rojo 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/Verde.Verde 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/Textures/AmarilloSalida.AmarilloSalida 
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
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UMap_C__pf2402407856::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{81, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{82, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.GridPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{55, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{56, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownCPP/HUD/KeyTransparente.KeyTransparente 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameUserSettings 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.IsolationUE4Character 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.Interactuable 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/TopDownCPP/Player/Animations/PlayerAnimMontage.PlayerAnimMontage 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
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
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
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
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.MainPlayerController 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/IsolationUE4.Nivel 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownCPP/Meshes/Set_Assets_1_Locker.Set_Assets_1_Locker 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/TopDownCPP/Effects/VolumetricGas/VolumetricGas_Inst.VolumetricGas_Inst 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownCPP/Textures/M_RojoEmisivo.M_RojoEmisivo 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
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
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownCPP/Blueprints/TopDownCharacter.TopDownCharacter_C 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownCPP/HUD/InteractWB.InteractWB_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UMap_C__pf2402407856
{
	FRegisterHelper__UMap_C__pf2402407856()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownCPP/HUD/Map"), &UMap_C__pf2402407856::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMap_C__pf2402407856 Instance;
};
FRegisterHelper__UMap_C__pf2402407856 FRegisterHelper__UMap_C__pf2402407856::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
