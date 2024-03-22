//
//     Generated by private class-dump
//

@protocol IESIMConversationAuditManagerDelegate;

@protocol IESIMConversationAuditManagerProtocol <NSObject>

@property (weak, nonatomic) id<IESIMConversationAuditManagerDelegate> delegate;

- (void)fetchUnreadAuditWithBizExt:(id)arg0 statusCheckblock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchBatchApplyUnreadCountWith:(id)arg0 bizExt:(id)arg1 completion:(id /* block */)arg2;
- (void)markReadAllAuditWithCompletion:(id /* block */)arg0;
- (void)markReadAuditWithConShortId:(long long)arg0 completion:(id /* block */)arg1;
- (void)disappearAuditUnreadCount;
- (void)fetchAuditSwitchStatusWithShortID:(long long)arg0 type:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateAuditSwitchStatusWithShortID:(long long)arg0 type:(unsigned long long)arg1 switchStatus:(BOOL)arg2 ext:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchNewestAuditListWithLimit:(int)arg0 completion:(id /* block */)arg1;
- (void)fetchNewestAuditListWithConShortId:(long long)arg0 limit:(int)arg1 completion:(id /* block */)arg2;
- (void)loadMoreAuditListWithLimit:(int)arg0 completion:(id /* block */)arg1;
- (void)loadMoreAuditListWithConShortId:(long long)arg0 limit:(int)arg1 completion:(id /* block */)arg2;
- (void)ackConversationApplyWithApplyID:(long long)arg0 agree:(BOOL)arg1 bizExt:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchUnreadAuditWithCompletion:(id /* block */)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end