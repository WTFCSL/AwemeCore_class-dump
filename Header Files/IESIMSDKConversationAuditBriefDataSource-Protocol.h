//
//     Generated by private class-dump
//

@protocol IESIMSDKConversationAuditBriefDataSource <NSObject>

- (void)fetchUnreadAuditWithBizExt:(id)arg0 statusCheckblock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchBatchApplyUnreadCountWith:(id)arg0 bizExt:(id)arg1 completion:(id /* block */)arg2;
- (void)markReadAllAuditWithCompletion:(id /* block */)arg0;
- (void)markReadAuditWithConShortId:(long long)arg0 completion:(id /* block */)arg1;
- (void)disappearAuditUnreadCount;
- (void)fetchUnreadAuditWithCompletion:(id /* block */)arg0;

@end
