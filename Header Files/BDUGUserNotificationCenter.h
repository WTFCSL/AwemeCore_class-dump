//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)requestDeviceToken;
- (void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)userNotificationCenter:(id)arg0 openSettingsForNotification:(id)arg1;
- (void)registerForRemoteNotifications;
- (void)requestAuthorization;

@end