//
//     Generated by private class-dump
//

@class ACCCameraSubscription, AWEComposerBeautyEffectWrapper, ACCBeautyPanelViewModel, NSString, AWEComposerBeautyEffectViewModel;
@protocol ACCBeautyComponentConfigProtocol, ACCCameraService;

@interface ACCBeautyServiceImpl : ACCRecorderViewModel <ACCBeautyService> {
    BOOL _beautyOn;
    AWEComposerBeautyEffectWrapper *_currentBeauty;
    ACCBeautyPanelViewModel *_beautyPanelViewModel;
    AWEComposerBeautyEffectViewModel *_effectViewModel;
    id<ACCCameraService> _cameraService;
    id<ACCBeautyComponentConfigProtocol> _beautyComponentConfig;
    ACCCameraSubscription *_subscription;
}

@property (retain, nonatomic) ACCBeautyPanelViewModel *beautyPanelViewModel;
@property (retain, nonatomic) AWEComposerBeautyEffectViewModel *effectViewModel;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCBeautyComponentConfigProtocol> beautyComponentConfig;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL beautyOn;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *currentBeauty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (BOOL)isUsingBeauty;
- (void)updateAppliedFilter:(id)arg0;
- (void)cacheSelectedFilter:(id)arg0 withCameraPosition:(long long)arg1;
- (void)syncFrontAndRearFilterId:(id)arg0;
- (void)clearAllComposerBeautyEffects;
- (void)updateAvailabilityForEffectsInCategories:(id)arg0;
- (void)applyComposerBeautyEffects:(id)arg0;
- (void)clearComposerBeautyEffects:(id)arg0;
- (BOOL)isUsingLocalBeautyResource;
- (void)addAlgorithmCallbackForBeauty:(id)arg0;
- (void)replaceComposerBeautyWithNewEffects:(id)arg0 oldEffects:(id)arg1;
- (void)applyComposerBeautyNodes:(id)arg0;
- (void)replaceComposerBeautyNodes:(id)arg0 oldBeautyNodes:(id)arg1;
- (void)removeComposerBeautyNodes:(id)arg0;
- (void)updateComposerBeautyNode:(id)arg0 key:(id)arg1 value:(double)arg2;
- (BOOL)beautyOn;
- (void)setBeautyOn:(BOOL)arg0;
- (id)effectViewModel;
- (id)beautyPanelViewModel;
- (id)currentBeauty;
- (void)setCurrentBeauty:(id)arg0;
- (void)setEffectViewModel:(id)arg0;
- (void)addSkeletonAlgorithmCallback;
- (id)p_toAppendNodesWithEffects:(id)arg0;
- (id)p_toRemoveNodesWithEffects:(id)arg0;
- (BOOL)availabilityForEffectWrapper:(id)arg0 withCameraService:(id)arg1;
- (void)p_setupBeautyDefaultSwitchStateToCache:(id)arg0;
- (id)beautyComponentConfig;
- (void)setBeautyPanelViewModel:(id)arg0;
- (void)setBeautyComponentConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;

@end
