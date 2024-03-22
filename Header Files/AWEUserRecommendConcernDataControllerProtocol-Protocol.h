//
//     Generated by private class-dump
//

@class NSMutableArray;

@protocol AWEUserRecommendConcernDataControllerProtocol <NSObject>

@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *userList;
@property (readonly, nonatomic) NSMutableArray *alreadyRequestedUserIDList;
@property (copy, nonatomic) id /* block */ userListUpdateCompletion;

- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)setUserList:(id)arg0;
- (void)asyncRequestWithDisplayedUserIDs:(id)arg0 requestCount:(long long)arg1;
- (void)requestWithDisplayedUserIDs:(id)arg0 requestCount:(long long)arg1 completion:(id /* block */)arg2;
- (void)setUserListUpdateCompletion:(id /* block */)arg0;
- (id /* block */)userListUpdateCompletion;
- (void)requestWithDisplayedUserIDs:(id)arg0 requestCount:(long long)arg1 authorID:(id)arg2 completion:(id /* block */)arg3;
- (void)requestWithDisplayedUserIDs:(id)arg0 requestCount:(long long)arg1 authorID:(id)arg2 fromHotFeed:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)alreadyRequestedUserIDList;
- (void)requestWithCount:(long long)arg0 authorID:(id)arg1 completion:(id /* block */)arg2;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)userList;

@end
