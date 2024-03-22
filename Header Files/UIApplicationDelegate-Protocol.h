//
//     Generated by private class-dump
//

@class UIWindow;

@protocol UIApplicationDelegate <NSObject>

@property (nonatomic, retain) UIWindow *window;

@optional

- (id)application:(id)arg0 configurationForConnectingSceneSession:(id)arg1 options:(id)arg2;
- (id)application:(id)arg0 configurationForConnectingSceneSession:(id)arg1 options:(id)arg2;
- (void)applicationWillResignActive:(id)arg0;
- (void)applicationWillTerminate:(id)arg0;
- (BOOL)application:(id)arg0 willFinishLaunchingWithOptions:(id)arg1;
- (BOOL)application:(id)arg0 openURL:(id)arg1 options:(id)arg2;
- (BOOL)application:(id)arg0 openURL:(id)arg1 options:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg0;
- (BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1;
- (void)application:(id)arg0 handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)applicationDidFinishLaunching:(id)arg0;
- (void)setWindow:(id)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)applicationDidBecomeActive:(id)arg0;
- (void)application:(id)arg0 performActionForShortcutItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)application:(id)arg0 performActionForShortcutItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)application:(id)arg0 handleOpenURL:(id)arg1;
- (BOOL)application:(id)arg0 handleOpenURL:(id)arg1;
- (id)window;
- (void)applicationDidReceiveMemoryWarning:(id)arg0;
- (BOOL)application:(id)arg0 shouldAllowExtensionPointIdentifier:(id)arg1;
- (BOOL)application:(id)arg0 openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (BOOL)application:(id)arg0 openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)applicationSignificantTimeChange:(id)arg0;
- (void)application:(id)arg0 willChangeStatusBarOrientation:(long long)arg1 duration:(double)arg2;
- (void)application:(id)arg0 didChangeStatusBarOrientation:(long long)arg1;
- (void)application:(id)arg0 willChangeStatusBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)application:(id)arg0 didChangeStatusBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)application:(id)arg0 handleWatchKitExtensionRequest:(id)arg1 reply:(id /* block */)arg2;
- (BOOL)application:(id)arg0 shouldSaveApplicationState:(id)arg1;
- (BOOL)application:(id)arg0 shouldRestoreApplicationState:(id)arg1;
- (BOOL)application:(id)arg0 shouldSaveSecureApplicationState:(id)arg1;
- (BOOL)application:(id)arg0 shouldRestoreSecureApplicationState:(id)arg1;
- (unsigned long long)application:(id)arg0 supportedInterfaceOrientationsForWindow:(id)arg1;
- (unsigned long long)application:(id)arg0 supportedInterfaceOrientationsForWindow:(id)arg1;
- (void)application:(id)arg0 didDiscardSceneSessions:(id)arg1;
- (BOOL)applicationShouldAutomaticallyLocalizeKeyCommands:(id)arg0;
- (void)application:(id)arg0 didReceiveRemoteNotification:(id)arg1 fetchCompletionHandler:(id /* block */)arg2;
- (void)application:(id)arg0 userDidAcceptCloudKitShareWithMetadata:(id)arg1;
- (void)application:(id)arg0 userDidAcceptCloudKitShareWithMetadata:(id)arg1;
- (void)application:(id)arg0 didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;
- (BOOL)application:(id)arg0 willContinueUserActivityWithType:(id)arg1;
- (BOOL)application:(id)arg0 continueUserActivity:(id)arg1 restorationHandler:(id /* block */)arg2;
- (BOOL)application:(id)arg0 continueUserActivity:(id)arg1 restorationHandler:(id /* block */)arg2;
- (void)application:(id)arg0 didUpdateUserActivity:(id)arg1;
- (void)application:(id)arg0 didUpdateUserActivity:(id)arg1;
- (void)application:(id)arg0 performFetchWithCompletionHandler:(id /* block */)arg1;
- (void)application:(id)arg0 handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)application:(id)arg0 handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)application:(id)arg0 didReceiveLocalNotification:(id)arg1;
- (void)application:(id)arg0 didReceiveLocalNotification:(id)arg1;
- (void)application:(id)arg0 didReceiveRemoteNotification:(id)arg1;
- (void)application:(id)arg0 handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)application:(id)arg0 handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)application:(id)arg0 handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)application:(id)arg0 handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)applicationShouldRequestHealthAuthorization:(id)arg0;
- (void)application:(id)arg0 didRegisterUserNotificationSettings:(id)arg1;
- (void)application:(id)arg0 didRegisterUserNotificationSettings:(id)arg1;
- (void)application:(id)arg0 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)application:(id)arg0 didFailToRegisterForRemoteNotificationsWithError:(id)arg1;
- (void)application:(id)arg0 willEncodeRestorableStateWithCoder:(id)arg1;
- (void)application:(id)arg0 willEncodeRestorableStateWithCoder:(id)arg1;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)arg0;
- (void)applicationProtectedDataDidBecomeAvailable:(id)arg0;
- (id)application:(id)arg0 viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void)application:(id)arg0 didDecodeRestorableStateWithCoder:(id)arg1;
- (void)application:(id)arg0 didDecodeRestorableStateWithCoder:(id)arg1;

@end
