//
//     Generated by private class-dump
//

@interface AWEAntiAddictRestMaskAction : AWEAntiAddictBaseAction

+ (id)moduleName;

- (id)updatedDataOnPrepare;
- (id)updatedDataOnRevoke;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (void)postInsertFeedNotificationInfo:(id)arg0;
- (void)postDeleteFeedNotification;
- (void)end;
- (void)begin;
- (void)prepare;
- (void)revoke;

@end