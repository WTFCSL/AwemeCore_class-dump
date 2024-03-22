//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AFDNewAccountRecommendManager : NSObject <AFDNewAccountRecommendManagerProtocol> {
    NSArray *_dataSource;
}

@property (retain, nonatomic) NSArray *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)showEntryForPrivateAccount;
- (void)newAccountEnterFrom:(id)arg0 enterMethod:(id)arg1;
- (BOOL)canAddAccount;
- (void)simplifyNewAccountEnterFrom:(id)arg0 enterMethod:(id)arg1;
- (long long)countOfDataSource;
- (id)genetateNewAccountFollowPageWithFinishBlock:(id /* block */)arg0 enterMethod:(id)arg1 enterFrom:(id)arg2;
- (BOOL)showEntryforSwitchAccount;
- (void)followUserWithListModel:(id)arg0 completion:(id /* block */)arg1;
- (void)followPrivateUserWithListModel:(id)arg0;
- (void)unfollowUserWithListModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)fetchWithCompletion:(id /* block */)arg0;

@end