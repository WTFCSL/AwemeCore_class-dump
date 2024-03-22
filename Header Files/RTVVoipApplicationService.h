//
//     Generated by private class-dump
//

@class RTVVoipNotifyController, NSString, RTVVoipTracker, NSDate, RTVVoipMonitor;
@protocol __RTVVoipAppOptionsInterface, RTVVoIPReceiver, RTVXRBusinessRoomContextManagerInterface, RTVVoipManagerInterface, RTVVoipTrackerHelperInterface, RTVVoipSettingManagerInterface, RTVAccountServiceInterface, AWEInnerNotificationController, RTVVoipResourceFetcherInterface, RTVVoipConfigureManagerInterface, RTVUserProfileManagerInterface, RTVVoipContextManagerInterface, RxInjector, RTVVoipService;

@interface RTVVoipApplicationService : RTVVoipBaseApplicationService <RTVVoipObserver, RTVBusinessRoomObserver, AWERTVIMCommandMessage> {
    id<RxInjector> _injector;
    id<RTVVoipService> _voipService;
    id<RTVVoIPReceiver> _voipReceiver;
    id<RTVVoipContextManagerInterface> _voipContextManager;
    id<RTVAccountServiceInterface> _accountService;
    id<RTVUserProfileManagerInterface> _profileManager;
    RTVVoipNotifyController *_notifyController;
    RTVVoipMonitor *_voipMonitor;
    RTVVoipTracker *_voipTracker;
    id<RTVVoipTrackerHelperInterface> _trackerHelper;
    id<AWEInnerNotificationController> _notificationController;
    id<__RTVVoipAppOptionsInterface> _appOptions;
    id<RTVVoipManagerInterface> _voipManager;
    id<RTVVoipSettingManagerInterface> _settingManager;
    id<RTVVoipConfigureManagerInterface> _voipConfigureManager;
    id<RTVXRBusinessRoomContextManagerInterface> _roomContextManager;
    id<RTVVoipResourceFetcherInterface> _resourceFetcher;
    NSDate *_didCompleteLaunchDate;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) id<RTVVoIPReceiver> voipReceiver;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) id<RTVAccountServiceInterface> accountService;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVVoipNotifyController *notifyController;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) id<RTVVoipTrackerHelperInterface> trackerHelper;
@property (readonly, nonatomic) id<AWEInnerNotificationController> notificationController;
@property (readonly, nonatomic) id<__RTVVoipAppOptionsInterface> appOptions;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) id<RTVXRBusinessRoomContextManagerInterface> roomContextManager;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, nonatomic) NSDate *didCompleteLaunchDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__handleRouteVoipDictionary:(id)arg0 injector:(id)arg1;
+ (id)__fetchSecurityCallAlert:(id)arg0;
+ (void)__handleRouteInvokeVoipWithParams:(id)arg0 injector:(id)arg1;
+ (void)__handleSecurityCallAlertRoute:(id)arg0 injector:(id)arg1;
+ (void)__handleSecurityCallRoute:(id)arg0 injector:(id)arg1;
+ (id)currentTimeString;

- (void)rxAwakeFromPropertyInjection;
- (id)resourceFetcher;
- (id)trackerHelper;
- (void)application:(id)arg0 didCompleteLaunchWithOptions:(id)arg1;
- (id)voipMonitor;
- (void)voipServiceWillBegin:(id)arg0 voip:(id)arg1;
- (void)voipServiceDidBegin:(id)arg0 voip:(id)arg1;
- (void)voipServiceWillFinish:(id)arg0 voip:(id)arg1;
- (void)voipServiceDidFinish:(id)arg0 voip:(id)arg1;
- (void)voipService:(id)arg0 voip:(id)arg1 switchNarrow:(BOOL)arg2;
- (void)voipServiceDidReceiveVoip:(id)arg0 voip:(id)arg1;
- (void)voipServiceChangeToOccupied:(id)arg0 voip:(id)arg1;
- (id)voipContextManager;
- (id)voipManager;
- (id)voipService;
- (BOOL)__enableIncallPush;
- (id)voipTracker;
- (void)didReceiveCommandMessage:(id)arg0;
- (void)__antiAddictFeedEnter:(id)arg0;
- (void)__antiAddictFeedLeave:(id)arg0;
- (void)__registerAPNSNotification;
- (void)__removeAPNSNotification;
- (id)voipReceiver;
- (void)__handleReceivePushForeground:(id)arg0;
- (id)voipConfigureManager;
- (id)notifyController;
- (id)__didReceiveVoip:(id)arg0;
- (void)__resetInnerPushForbid;
- (void)__forbidInnerPushBecauseVoip;
- (id)didCompleteLaunchDate;
- (void)roomServiceWillBegin:(id)arg0 room:(id)arg1;
- (void)roomServiceDidFinish:(id)arg0 room:(id)arg1;
- (void)__forbidInnerPushWithValidateBlock:(id /* block */)arg0 business:(long long)arg1;
- (id)roomContextManager;
- (void)applicationWillResignActive:(id)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (id)injector;
- (void)applicationDidEnterBackground:(id)arg0;
- (id)notificationController;
- (void)dealloc;
- (id)accountService;
- (id)appOptions;
- (id)settingManager;
- (id)profileManager;

@end
