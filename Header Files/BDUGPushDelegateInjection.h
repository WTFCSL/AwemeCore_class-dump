//
//     Generated by private class-dump
//

@interface BDUGPushDelegateInjection : NSObject

- (void)application:(id)arg0 didReceiveRemoteNotification:(id)arg1 fetchCompletionHandler:(id /* block */)arg2;
- (void)application:(id)arg0 handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)application:(id)arg0 handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)application:(id)arg0 didReceiveLocalNotification:(id)arg1;
- (void)application:(id)arg0 handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)application:(id)arg0 didRegisterUserNotificationSettings:(id)arg1;
- (void)application:(id)arg0 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)application:(id)arg0 didFailToRegisterForRemoteNotificationsWithError:(id)arg1;

@end
