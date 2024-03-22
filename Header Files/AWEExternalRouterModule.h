//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEExternalRouterModule : NSObject <HTSAppLifeCycle, BDFlowMonitorProtocol> {
    NSDictionary *_launchOptions;
}

@property (copy, nonatomic) NSDictionary *launchOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (Class)aAWEExternalRouterModuleServiceDOUYINLiteAdaperClass;
+ (unsigned long long)priority;

- (void)onAppDidBecomeActive;
- (id)flowMonitorTopViewController;
- (void)flowMonitorCustomReportOutWithSession:(id)arg0 time:(double)arg1;
- (void)flowMonitorCustomReportBack:(BOOL)arg0;
- (double)flowMonitorAppLaunchTs;
- (void)flowMonitorCustomReportWithError:(id)arg0 openURL:(id)arg1 isFromOutsideRoute:(BOOL)arg2 routeParams:(id)arg3;
- (id)flowMonitorSettingsDict;
- (void)onHandleAppShortcutAction;
- (BOOL)onHandleAppOpenUrl;
- (BOOL)onHandleAppContinueUserActivity;
- (void)stopLiveNotificationHandler;
- (void)update3DTouchMenu;
- (id)aAWEExternalRouterModuleServiceDOUYINLiteAdaper;
- (BOOL)insertVideosWhenColdLaunchWithLaunchURL;
- (void)dealWithNotification:(id)arg0 didFinishLaunchingWithOptions:(id)arg1;
- (void)trackAppLaunchWithOptions:(id)arg0;
- (id)loadHandlingPushData;
- (BOOL)_handleApplication:(id)arg0 continueUserActivity:(id)arg1 restorationHandler:(id /* block */)arg2;
- (void)logOpenEventWithString:(id)arg0 fromScene:(id)arg1 isColdLaunch:(BOOL)arg2;
- (BOOL)new_handleApplication:(id)arg0 session:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id /* block */)arg3;
- (void)trackAppLaunchWithScheme:(id)arg0 isInBackground:(BOOL)arg1;
- (BOOL)_application:(id)arg0 sourceApplication:(id)arg1 url:(id)arg2 annotation:(id)arg3;
- (void)_handleApplication:(id)arg0 performActionForShortcutItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)new_handleApplication:(id)arg0 performActionForShortcutItem:(id)arg1 blockManager:(id)arg2 linkSession:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)p_trackWidgetsAction:(id)arg0;
- (void)deeplinkSuccessCompletion:(id)arg0;
- (BOOL)canContentSyncManagerOpenURL:(id)arg0 application:(id)arg1;
- (BOOL)isOpenSDKURL:(id)arg0;
- (void)trackSearchWidget:(id)arg0 actionType:(id)arg1;
- (void)trackTrendingWords:(id)arg0 actionType:(id)arg1;
- (id)referStringFromScheme:(id)arg0;
- (void)_onAppDidFinishLaunch;
- (void)_onAppRootWindowVisiable;
- (void)_onAppRootViewDidAppear;
- (BOOL)shouldStopInAntiAddictMaskShowing:(id)arg0 context:(id)arg1 linkSession:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)launchOptions;
- (void)setLaunchOptions:(id)arg0;

@end