//
//     Generated by private class-dump
//

@class AWEUITaskDelaySpreadExecutor, UIWindow, NSString;

@interface AppDelegate : HTSBootAppDelegate <UIApplicationDelegate> {
    AWEUITaskDelaySpreadExecutor *_spreadExecutor;
}

@property (retain, nonatomic) AWEUITaskDelaySpreadExecutor *spreadExecutor;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)MOCK_applicationDidBecomeActive:(id)arg0;
- (void)MOCK_applicationWillResignActive:(id)arg0;
- (void)MOCK_applicationDidEnterBackground:(id)arg0;
- (void)MOCK_applicationWillEnterForeground:(id)arg0;
- (void)MOCK_applicationWillTerminate:(id)arg0;
- (void)application:(void /* unknown type, empty encoding */)arg0 didFailToRegisterForRemoteNotificationsWithError:(void /* unknown type, empty encoding */)arg1;
- (void)application:(void /* unknown type, empty encoding */)arg0 didRegisterForRemoteNotificationsWithDeviceToken:(void /* unknown type, empty encoding */)arg1;
- (void)application:(void /* unknown type, empty encoding */)arg0 didRegisterUserNotificationSettings:(void /* unknown type, empty encoding */)arg1;
- (void)application:(void /* unknown type, empty encoding */)arg0 handleActionWithIdentifier:(void /* unknown type, empty encoding */)arg1 forLocalNotification:(void /* unknown type, empty encoding */)arg2 withResponseInfo:(void /* unknown type, empty encoding */)arg3 completionHandler:(void /* unknown type, empty encoding */)arg4;
- (void)application:(void /* unknown type, empty encoding */)arg0 didReceiveLocalNotification:(void /* unknown type, empty encoding */)arg1;
- (void)application:(void /* unknown type, empty encoding */)arg0 handleActionWithIdentifier:(void /* unknown type, empty encoding */)arg1 forRemoteNotification:(void /* unknown type, empty encoding */)arg2 completionHandler:(void /* unknown type, empty encoding */)arg3;
- (void)application:(void /* unknown type, empty encoding */)arg0 handleActionWithIdentifier:(void /* unknown type, empty encoding */)arg1 forRemoteNotification:(void /* unknown type, empty encoding */)arg2 withResponseInfo:(void /* unknown type, empty encoding */)arg3 completionHandler:(void /* unknown type, empty encoding */)arg4;
- (void)application:(void /* unknown type, empty encoding */)arg0 didReceiveRemoteNotification:(void /* unknown type, empty encoding */)arg1 fetchCompletionHandler:(void /* unknown type, empty encoding */)arg2;
- (BOOL)isBackgroundFetchLaunch;
- (id)currentBootConfigDowngrade;
- (void)addLaunchTypeFactorWithOptions:(id)arg0;
- (id)backgroundFetchConfig;
- (BOOL)enableAsyncBootTaskSpread;
- (BOOL)isTaskSpreadExecutor;
- (id)currentBootConfig;
- (id)bootConfigInterceptor;
- (void)callCompletionHandler:(id /* block */)arg0 result:(unsigned long long)arg1 delay:(double)arg2;
- (BOOL)isSystemBackgroundLaunch;
- (BOOL)isTaskSpreadExecutorForQueue;
- (void)runTaskSpreadExecutorForKey:(const char *)arg0 withBlock:(id /* block */)arg1;
- (BOOL)downgradeBootTaskAsyncPriority;
- (BOOL)delayLaunchCompletionTaskUntilFeedReady;
- (BOOL)enableBootConfigInterceptorOpt;
- (BOOL)enableFilterEnterForeGroundWhenBGFetchLaunch;
- (id)appEventPlugin;
- (id)spreadExecutor;
- (void)setSpreadExecutor:(id)arg0;
- (void)applicationWillResignActive:(id)arg0;
- (void)applicationWillTerminate:(id)arg0;
- (BOOL)application:(id)arg0 willFinishLaunchingWithOptions:(id)arg1;
- (id)init;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)applicationDidBecomeActive:(id)arg0;
- (void)applicationDidReceiveMemoryWarning:(id)arg0;
- (void)application:(id)arg0 performFetchWithCompletionHandler:(id /* block */)arg1;
- (double)backgroundFetchMinimumInterval;

@end
