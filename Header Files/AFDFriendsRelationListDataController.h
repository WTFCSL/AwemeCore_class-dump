//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSArray;

@interface AFDFriendsRelationListDataController : NSObject {
    BOOL _hasRequestData;
    NSString *_requestSource;
    NSMutableArray *_innerUseNotSeeUids;
    NSMutableArray *_innerUseNotShowUids;
    NSMutableArray *_innerFriendsListUids;
    NSMutableArray *_innerNonFriendsListUids;
}

@property (retain, nonatomic) NSMutableArray *innerUseNotSeeUids;
@property (retain, nonatomic) NSMutableArray *innerUseNotShowUids;
@property (retain, nonatomic) NSMutableArray *innerFriendsListUids;
@property (retain, nonatomic) NSMutableArray *innerNonFriendsListUids;
@property (copy, nonatomic) NSString *requestSource;
@property (readonly, nonatomic) NSArray *useNotSeeUids;
@property (readonly, nonatomic) NSArray *useNotShowUids;
@property (readonly, nonatomic) NSArray *friendsListUids;
@property (readonly, nonatomic) NSArray *nonFriendsListUids;
@property (nonatomic) BOOL hasRequestData;

- (void)fetchFriendsRelationListWithCompletion:(id /* block */)arg0;
- (long long)judgeHideHerPostStatusWithUid:(id)arg0;
- (long long)judgeHideMyPostStatusWithUid:(id)arg0;
- (long long)judgeIsFriendSwitchStatusWithUid:(id)arg0;
- (void)updateUseNotSeeUidsWithOperationType:(unsigned long long)arg0 userID:(id)arg1;
- (void)updateUseNotShowUidsWithOperationType:(unsigned long long)arg0 userID:(id)arg1;
- (void)updateNonFriendsListUidsWithOperationType:(unsigned long long)arg0 userID:(id)arg1;
- (void)updateFriendsListUidsWithOperationType:(unsigned long long)arg0 userID:(id)arg1;
- (void)setHasRequestData:(BOOL)arg0;
- (void)handleRelationArraysWithModel:(id)arg0;
- (void)fetchFriendsRelationListWithTypeArray:(id)arg0 completion:(id /* block */)arg1;
- (void)setInnerUseNotSeeUids:(id)arg0;
- (void)setInnerUseNotShowUids:(id)arg0;
- (void)setInnerFriendsListUids:(id)arg0;
- (void)setInnerNonFriendsListUids:(id)arg0;
- (id)innerUseNotSeeUids;
- (id)innerUseNotShowUids;
- (id)innerNonFriendsListUids;
- (id)innerFriendsListUids;
- (id)useNotSeeUids;
- (id)useNotShowUids;
- (id)friendsListUids;
- (id)nonFriendsListUids;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasRequestData;
- (void)setRequestSource:(id)arg0;
- (id)requestSource;

@end
