//
//     Generated by private class-dump
//

@protocol IESIMSDKConversationAuditDataSource <NSObject>

- (void)fetchNewestAuditListWithLimit:(int)arg0 completion:(id /* block */)arg1;
- (void)fetchNewestAuditListWithConShortId:(long long)arg0 limit:(int)arg1 completion:(id /* block */)arg2;
- (void)loadMoreAuditListWithLimit:(int)arg0 completion:(id /* block */)arg1;
- (void)loadMoreAuditListWithConShortId:(long long)arg0 limit:(int)arg1 completion:(id /* block */)arg2;

@end