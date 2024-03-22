//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol AWEIMBatchFetchUserSessionDelegate;

@interface AWEIMBatchFetchUserSession : NSObject {
    id<AWEIMBatchFetchUserSessionDelegate> _delegate;
    NSMutableArray *_successUserModels;
    NSMutableArray *_failedUserIDs;
    NSString *_ownerID;
    NSMutableArray *_users;
}

@property (retain, nonatomic) NSMutableArray *users;
@property (copy, nonatomic) NSString *ownerID;
@property (weak, nonatomic) id<AWEIMBatchFetchUserSessionDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *successUserModels;
@property (retain, nonatomic) NSMutableArray *failedUserIDs;

- (id)successUserModels;
- (id)failedUserIDs;
- (void)p_fetchOnePageUser:(long long)arg0;
- (void)p_finishSession;
- (void)p_fetchUsers:(id)arg0 completion:(id /* block */)arg1;
- (void)setSuccessUserModels:(id)arg0;
- (void)setFailedUserIDs:(id)arg0;
- (id)users;
- (void).cxx_destruct;
- (void)startSession;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setUsers:(id)arg0;
- (id)ownerID;
- (id)initWithUsers:(id)arg0;
- (void)setOwnerID:(id)arg0;

@end