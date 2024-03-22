//
//     Generated by private class-dump
//

@class AFDInviteFriendTogetherViewModel, NSArray, NSDictionary, AFDPlayTogetherFriend;
@protocol AWEIMSearchEngineProtocol;

@interface AFDPlayTogetherFriendsDataManager : NSObject {
    BOOL _hasMore;
    id /* block */ _reloadDataBlock;
    NSDictionary *_extraInfo;
    NSArray *_friendArray;
    NSArray *_recentFriendArray;
    NSArray *_recommendArray;
    NSArray *_searchResultArray;
    id /* block */ _searchCompletion;
    AFDPlayTogetherFriend *_intimateFriend;
    id<AWEIMSearchEngineProtocol> _searchEngine;
    NSArray *_contactDatasource;
    long long _cursor;
    AFDInviteFriendTogetherViewModel *_viewModel;
}

@property (retain, nonatomic) NSArray *friendArray;
@property (retain, nonatomic) NSArray *recentFriendArray;
@property (retain, nonatomic) NSArray *recommendArray;
@property (retain, nonatomic) NSArray *searchResultArray;
@property (retain, nonatomic) id<AWEIMSearchEngineProtocol> searchEngine;
@property (retain, nonatomic) NSArray *contactDatasource;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) AFDInviteFriendTogetherViewModel *viewModel;
@property (retain, nonatomic) AFDPlayTogetherFriend *intimateFriend;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) id /* block */ reloadDataBlock;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ searchCompletion;

- (void)setExtraInfo:(id)arg0;
- (void)p_setupSearchEngine;
- (void)setSearchEngine:(id)arg0;
- (void)loadMore;
- (void)fetchDataWithCompletion:(id /* block */)arg0;
- (void)fetchLastestAcqIntimateWithCompletion:(id /* block */)arg0;
- (void)fetchRecentFriendWithCompletion:(id /* block */)arg0;
- (id)friendArray;
- (id)intimateFriend;
- (void)fetchDataWithFilter:(id /* block */)arg0 invitedFriends:(id)arg1 completion:(id /* block */)arg2;
- (void)setReloadDataBlock:(id /* block */)arg0;
- (id)p_getNotSelfList:(id)arg0;
- (void)setContactDatasource:(id)arg0;
- (id)contactDatasource;
- (void)fetchDataWithFilter:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)setIntimateFriend:(id)arg0;
- (id /* block */)reloadDataBlock;
- (void)setFriendArray:(id)arg0;
- (void)p_loadExtraInfo;
- (void)setRecommendArray:(id)arg0;
- (BOOL)isSameUserID:(id)arg0 withOtherUserID:(id)arg1;
- (void)setRecentFriendArray:(id)arg0;
- (id)recentFriendArray;
- (id)recommendArray;
- (void)setSearchResultArray:(id)arg0;
- (void)searchFriend:(id)arg0;
- (void)clearSearchResult;
- (id)searchResultArray;
- (long long)cursor;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)viewModel;
- (void)setCursor:(long long)arg0;
- (long long)scene;
- (id /* block */)searchCompletion;
- (void)setSearchCompletion:(id /* block */)arg0;
- (id)extraInfo;
- (id)searchEngine;

@end