//
//     Generated by private class-dump
//

@protocol RTVVoipTrackerHelperInterface, RxInjector, RTVPerformanceMonitorInterface;

@interface RTVEffectGameTracker : RTVInteractionTracker {
    id<RxInjector> _injector;
    id<RTVPerformanceMonitorInterface> _perfMonitor;
    id<RTVVoipTrackerHelperInterface> _trackerHelper;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> perfMonitor;
@property (readonly, nonatomic) id<RTVVoipTrackerHelperInterface> trackerHelper;

- (void)rxAwakeFromPropertyInjection;
- (id)trackerHelper;
- (void)tracker_showCastVideoPanelWithSession:(id)arg0 belongUserType:(id)arg1 videoFrom:(id)arg2 tabName:(id)arg3 mixID:(id)arg4 challengeID:(id)arg5 extraInfo:(id)arg6;
- (void)tracker_clickPlayRecommendVideoButtonWithSession:(id)arg0 extraInfo:(id)arg1;
- (void)tracker_clickShareButtonWithSession:(id)arg0 hasHotReminder:(BOOL)arg1 extraInfo:(id)arg2;
- (void)track_livesdkEnterCoplayMiniWithMemberCnt:(unsigned long long)arg0 eventType:(id)arg1 extraInfo:(id)arg2;
- (void)track_enterChatWithMethod:(id)arg0 chatType:(id)arg1 convID:(id)arg2 extraInfo:(id)arg3;
- (id)perfMonitor;
- (void)trackGameEnterWithVoIPRoomID:(id)arg0 gameName:(id)arg1;
- (void)trackGamePageOverWithVoIPRoomID:(id)arg0 isAnswer:(BOOL)arg1 enterFrom:(long long)arg2 duration:(double)arg3;
- (void)track_livesdReturnFullScreenWithExtraInfo:(id)arg0;
- (void)trackGameOverWithVoIPRoomID:(id)arg0 isAnswer:(BOOL)arg1 gameName:(id)arg2 enterFrom:(long long)arg3 duration:(double)arg4;
- (void)trackGameEnterOverWithVoIPRoomID:(id)arg0;
- (void)trackGameTakeWithVoIPRoomID:(id)arg0 gameName:(id)arg1 enterFrom:(long long)arg2;
- (void)trackGameTakePrepareWithVoIPRoomID:(id)arg0 enterFrom:(long long)arg1;
- (void)trackGameEnterPrepareWithVoIPRoomID:(id)arg0;
- (id)__enterFromStrWithEnterFrom:(long long)arg0;
- (id)__commonParamsWithSession:(id)arg0;
- (void).cxx_destruct;
- (id)injector;

@end