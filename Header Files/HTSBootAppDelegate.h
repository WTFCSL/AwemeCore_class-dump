//
//     Generated by private class-dump
//

@class NSString, UIWindow;

@interface HTSBootAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *_window;
}

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) unsigned long long supportOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)awe_setupRotateControlHooks;

- (BOOL)isBackgroundFetchLaunch;
- (unsigned long long)supportOrientation;
- (void)setSupportOrientation:(unsigned long long)arg0;
- (BOOL)enableAsyncBootTaskSpread;
- (BOOL)isTaskSpreadExecutor;
- (id)currentBootConfig;
- (id)bootConfigInterceptor;
- (BOOL)isSystemBackgroundLaunch;
- (BOOL)isTaskSpreadExecutorForQueue;
- (void)runTaskSpreadExecutorForKey:(const char *)arg0 withBlock:(id /* block */)arg1;
- (BOOL)downgradeBootTaskAsyncPriority;
- (BOOL)delayLaunchCompletionTaskUntilFeedReady;
- (BOOL)enableBootConfigInterceptorOpt;
- (BOOL)enableFilterEnterForeGroundWhenBGFetchLaunch;
- (id)appEventPlugin;
- (unsigned long long)awe_padUIAdaptionApplication:(id)arg0 supportedInterfaceOrientationsForWindow:(id)arg1;
- (void)onAppHandleNotificationWithContext:(id)arg0;
- (BOOL)useRunloopBlockAsLaunchEnd;
- (void)_observerRunloopFree:(id /* block */)arg0;
- (BOOL)autoMarkLuanchCompletion;
- (BOOL)runOneBootTaskPerRunloop;
- (BOOL)isUseFeedCache;
- (void)applicationWillResignActive:(id)arg0;
- (void)applicationWillTerminate:(id)arg0;
- (BOOL)application:(id)arg0 willFinishLaunchingWithOptions:(id)arg1;
- (id)init;
- (BOOL)application:(id)arg0 openURL:(id)arg1 options:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1;
- (void)application:(id)arg0 handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setWindow:(id)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)applicationDidBecomeActive:(id)arg0;
- (void)application:(id)arg0 performActionForShortcutItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)window;
- (void)applicationDidReceiveMemoryWarning:(id)arg0;
- (BOOL)application:(id)arg0 openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (unsigned long long)application:(id)arg0 supportedInterfaceOrientationsForWindow:(id)arg1;
- (void)application:(id)arg0 didReceiveRemoteNotification:(id)arg1 fetchCompletionHandler:(id /* block */)arg2;
- (BOOL)application:(id)arg0 continueUserActivity:(id)arg1 restorationHandler:(id /* block */)arg2;
- (void)application:(id)arg0 performFetchWithCompletionHandler:(id /* block */)arg1;
- (void)application:(id)arg0 didReceiveLocalNotification:(id)arg1;
- (void)application:(id)arg0 didRegisterUserNotificationSettings:(id)arg1;
- (void)application:(id)arg0 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)application:(id)arg0 didFailToRegisterForRemoteNotificationsWithError:(id)arg1;

@end