//
//     Generated by private class-dump
//

@protocol AWEInnerNotificationCenter <NSObject>

- (id)currentDisplayNotification;
- (id)removeAllNotificationWithTypes:(id)arg0;
- (id)removeNotificationWithRequestIdentifier:(id)arg0;
- (id)modifyPendingNotificationRequestsWithTypes:(id)arg0 modifyBlock:(id /* block */)arg1;
- (id)modifyPendingNotificationRequestsWithIdentifier:(id)arg0 modifyBlock:(id /* block */)arg1;
- (id)addNotificationRequest:(id)arg0;
- (id)pendingNotificationRequests;
- (id)notificationController;

@end