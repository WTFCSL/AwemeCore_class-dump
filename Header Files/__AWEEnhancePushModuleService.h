//
//     Generated by private class-dump
//

@class UIWindow, NSMutableDictionary, RxScheduler, NSString, NSMutableArray;
@protocol AWEInnerNotificationCenter, RTVVoipWebServiceAdapterProtocol, RxInjector, RTVSettingsManager;

@interface __AWEEnhancePushModuleService : HTSService <RTVApplicationService, HTSService, AWEEnhancePushModuleService> {
    BOOL _doInterrupting;
    id<RxInjector> _injector;
    id<RTVVoipWebServiceAdapterProtocol> _webServiceAccess;
    id<RTVSettingsManager> _settingsManager;
    id<AWEInnerNotificationCenter> _notificationCenter;
    RxScheduler *_scheduler;
    NSMutableDictionary *_delegateMap;
    NSMutableArray *_interruptIDs;
    NSMutableArray *_registeredOpenURLIDs;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) id<AWEInnerNotificationCenter> notificationCenter;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) NSMutableDictionary *delegateMap;
@property (readonly, nonatomic) NSMutableArray *interruptIDs;
@property (readonly, nonatomic) NSMutableArray *registeredOpenURLIDs;
@property (nonatomic) BOOL doInterrupting;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)rxAwakeFromPropertyInjection;
- (id)webServiceAccess;
- (id)__deliveredNotifications;
- (id)__sceneWithOpenURL:(id)arg0;
- (id)__tupleWithID:(id)arg0 andScene:(id)arg1;
- (void)__addRegisteredOpenURLID:(id)arg0;
- (id)registeredOpenURLIDs;
- (id)interruptIDs;
- (void)__postNotificationWithData:(id)arg0;
- (id)__dictionaryWithJsonString:(id)arg0;
- (void)__postNotificationToObj:(id)arg0 withData:(id)arg1;
- (void)__removeInterruptID:(id)arg0;
- (BOOL)__needInterruptEnhancePush;
- (void)__trackInterruptWithReason:(id)arg0;
- (id)__getRequestWithName:(id)arg0 queryItems:(id)arg1;
- (void)__interruptWithRequest:(id)arg0 identifier:(id)arg1;
- (void)__addInterruptID:(id)arg0;
- (BOOL)doInterrupting;
- (void)setDoInterrupting:(BOOL)arg0;
- (id)__filterdNotificationTuples;
- (void)__interruptEnhancePushWithTuples:(id)arg0 coldLaunch:(BOOL)arg1;
- (void)__addDelegate:(id)arg0 withType:(long long)arg1;
- (void)__removeDelegate:(id)arg0 withType:(long long)arg1;
- (void)__addRegisteredOpenURL:(id)arg0 withIdentifier:(id)arg1;
- (void)__interruptEnhancePushIfNeeded:(id)arg0 coldLaunch:(BOOL)arg1;
- (void)application:(id)arg0 didCompleteLaunchWithOptions:(id)arg1;
- (void)onAppHandleNotificationWithUserInfo:(id)arg0 categoryIdentifier:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3 identifier:(id)arg4;
- (void)registerDelegate:(id)arg0 withType:(long long)arg1;
- (void)unregisterDelegate:(id)arg0 withType:(long long)arg1;
- (id)__postRequestWithName:(id)arg0 jsonBody:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (id)delegateMap;
- (id)scheduler;
- (id)injector;
- (id)notificationCenter;
- (id)settingsManager;

@end