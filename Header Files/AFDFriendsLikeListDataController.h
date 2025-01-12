//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEAwemeModel, AWEUserModel;

@interface AFDFriendsLikeListDataController : AWEListDataController {
    BOOL _isAuthor;
    BOOL _requestData;
    BOOL _fetchedData;
    BOOL _isFriends;
    BOOL _isFromFriendsWatching;
    BOOL _isFromFriendsRecommend;
    NSString *_awemeID;
    long long _count;
    long long _allFriendsWatchingDiggCount;
    AWEAwemeModel *_awemeModel;
    NSArray *_userList;
    AWEUserModel *_currentUser;
    long long _cursor;
    long long _expectCount;
}

@property (retain, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) AWEUserModel *currentUser;
@property (nonatomic) long long cursor;
@property (nonatomic) long long count;
@property (nonatomic) long long allFriendsWatchingDiggCount;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long expectCount;
@property (nonatomic) BOOL isAuthor;
@property (nonatomic) BOOL requestData;
@property (nonatomic) BOOL fetchedData;
@property (nonatomic) BOOL isFriends;
@property (nonatomic) BOOL isFromFriendsWatching;
@property (nonatomic) BOOL isFromFriendsRecommend;

- (id)awemeModel;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)setIsAuthor:(BOOL)arg0;
- (id)getParams;
- (void)setUserList:(id)arg0;
- (BOOL)isFriends;
- (void)setIsFriends:(BOOL)arg0;
- (void)setFetchedData:(BOOL)arg0;
- (BOOL)isFromFriendsRecommend;
- (id)getUsersFromUserList:(id)arg0;
- (void)operateUserList:(id)arg0 model:(id)arg1;
- (BOOL)isFromFriendsWatching;
- (void)setAllFriendsWatchingDiggCount:(long long)arg0;
- (BOOL)fetchedData;
- (id)initWtihAwemeModel:(id)arg0 expectCount:(long long)arg1 currentUser:(id)arg2;
- (long long)allFriendsWatchingDiggCount;
- (BOOL)isAuthor;
- (void)setIsFromFriendsWatching:(BOOL)arg0;
- (void)setIsFromFriendsRecommend:(BOOL)arg0;
- (long long)expectCount;
- (void)setExpectCount:(long long)arg0;
- (id)URLString;
- (void)setCount:(long long)arg0;
- (long long)cursor;
- (void).cxx_destruct;
- (void)setRequestData:(BOOL)arg0;
- (long long)count;
- (id)currentUser;
- (void)setCurrentUser:(id)arg0;
- (void)setCursor:(long long)arg0;
- (BOOL)requestData;
- (id)userList;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
