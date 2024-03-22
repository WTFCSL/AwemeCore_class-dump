//
//     Generated by private class-dump
//

@class NSString, PuzzleHybridContainer;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentPowerContainer : IESLiveRevenueInteractPlayComponent <IESHYHybridViewLifecycleProtocol> {
    BOOL _inSprintTime;
    id<IESLiveCompoundSubscription> _disposable;
    PuzzleHybridContainer *_pkPowerContainer;
    long long _remainTime;
}

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) PuzzleHybridContainer *pkPowerContainer;
@property (nonatomic) long long remainTime;
@property (nonatomic) BOOL inSprintTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupAction;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (long long)remainTime;
- (void)setRemainTime:(long long)arg0;
- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)invokeNotificationEventWithParams:(id)arg0;
- (void)componentDidClear:(BOOL)arg0;
- (void)componentInteracting;
- (void)setInSprintTime:(BOOL)arg0;
- (BOOL)inSprintTime;
- (id)pkPowerContainer;
- (void)loadPKPowerContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pkPowerContainerFrame;
- (void)onReceivedBattlePowerContainerMessage:(id)arg0;
- (void)setPkPowerContainer:(id)arg0;
- (id)trackPKBattlePowerContainer;
- (void).cxx_destruct;
- (void)clean;

@end