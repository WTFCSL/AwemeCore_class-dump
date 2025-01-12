//
//     Generated by private class-dump
//

@class NSMutableArray, RACDisposable, NSString, NSNumber, IESLiveInteractiveVirtualAvatarStore;
@protocol IESLiveEffectProcessService, IESLiveInteractVideoCaptureRouter, IESLiveMultiKTVSingModeSwitch, IESLiveMultiKTVRouter, IESLivePerfSampler;

@interface IESLiveInteractiveVirtualAvatarFragment : IESLiveRoomComponent <IESLiveInteractiveVirtualAvatarRouter, IESLiveEffectMessageSubscriber, IESLiveInteractiveAvatarPreviewActions> {
    BOOL _avatarModelLoading;
    BOOL _canSkipMessage;
    IESLiveInteractiveVirtualAvatarStore *_store;
    id<IESLiveEffectProcessService> _effectProcessing;
    id<IESLiveInteractVideoCaptureRouter> _captureRouter;
    id<IESLiveMultiKTVRouter> _multiKTVRouter;
    id<IESLiveMultiKTVSingModeSwitch> _singModeSwitch;
    id<IESLivePerfSampler> _perfSampler;
    NSNumber *_avatarModeAppliedTime;
    NSMutableArray *_applyAvatarModelCompletionArr;
    RACDisposable *_disposable;
}

@property (retain, nonatomic) IESLiveInteractiveVirtualAvatarStore *store;
@property (weak, nonatomic) id<IESLiveEffectProcessService> effectProcessing;
@property (weak, nonatomic) id<IESLiveInteractVideoCaptureRouter> captureRouter;
@property (weak, nonatomic) id<IESLiveMultiKTVRouter> multiKTVRouter;
@property (weak, nonatomic) id<IESLiveMultiKTVSingModeSwitch> singModeSwitch;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) BOOL avatarModelLoading;
@property (nonatomic) BOOL canSkipMessage;
@property (retain, nonatomic) NSNumber *avatarModeAppliedTime;
@property (retain, nonatomic) NSMutableArray *applyAvatarModelCompletionArr;
@property (retain, nonatomic) RACDisposable *disposable;
@property (nonatomic) BOOL usedAvatarOnceLink;
@property (nonatomic) int currentUserLinkTypeWillChangeTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (int)currentUserLinkType;
- (void)didReceiveEffectMessage:(unsigned long long)arg0 arg1:(unsigned long long)arg1 arg2:(unsigned long long)arg2 data:(id)arg3;
- (void)commonCastScreenDidStart;
- (void)commonCastScreenDidEnd;
- (id)effectProcessing;
- (void)setEffectProcessing:(id)arg0;
- (void)didUpdateServerLinkTypeSucceed:(int)arg0 actively:(BOOL)arg1;
- (void)didUpdateServerLinkTypeFailed:(int)arg0 actively:(BOOL)arg1;
- (void)endLink;
- (BOOL)needApplyAvatarEffect;
- (void)applyAvatarEffectModel:(id /* block */)arg0;
- (void)removeAvatarEffectModel:(id /* block */)arg0;
- (void)changeAvatarBackgroundIfNeeded;
- (void)applyCustomAvatarAppearanceIfNeeded:(BOOL)arg0;
- (void)triggerAvatarAction:(id)arg0;
- (int)lastUsedLinkType;
- (void)markCurrentAvatarModelPathDeactivated;
- (void)updateUserLinkType:(int)arg0;
- (void)updateUserLinkTypeByForce:(int)arg0;
- (BOOL)usedAvatarOnceLink;
- (void)setUsedAvatarOnceLink:(BOOL)arg0;
- (int)currentUserLinkTypeWillChangeTo;
- (void)setCurrentUserLinkTypeWillChangeTo:(int)arg0;
- (BOOL)canSkipReload;
- (id)multiKTVRouter;
- (void)setMultiKTVRouter:(id)arg0;
- (BOOL)isInEqualBigParty;
- (void)didAvatarAuditStatusChanged:(long long)arg0;
- (BOOL)canSkipMessage;
- (void)p_applyCustomAvatarAppearanceIfNeeded:(BOOL)arg0;
- (void)changeAvatarCameraPositionIfNeeded;
- (id)applyAvatarModelCompletionArr;
- (void)applyCompletion:(id /* block */)arg0;
- (double)avatarBackgroundLoadEstimateTime;
- (BOOL)avatarModelLoading;
- (void)setAvatarModelLoading:(BOOL)arg0;
- (void)setCanSkipMessage:(BOOL)arg0;
- (void)applyAvatarCustomMode;
- (void)p_changeAvatarBackgroundIfNeeded;
- (void)setAvatarModeAppliedTime:(id)arg0;
- (id)avatarModeAppliedTime;
- (id)captureRouter;
- (id)equalBigPartyAvatarBgIdentifer;
- (id)bigPartyAnchorAvatarBgIdentifier;
- (id)avatarBgImageWithIdentifier:(id)arg0;
- (void)p_preloadBigPartyAvatarBackgroundImageWithID:(id)arg0 completion:(id /* block */)arg1;
- (id)singModeSwitch;
- (double)changeInputEstimateTime;
- (double)avatarModelLoadEstimateTime;
- (void)setCaptureRouter:(id)arg0;
- (void)setSingModeSwitch:(id)arg0;
- (void)setApplyAvatarModelCompletionArr:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (unsigned long long)currentScene;
- (void)setStore:(id)arg0;
- (void)applyCompletion;

@end
