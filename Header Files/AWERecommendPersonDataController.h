//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableSet, NSMutableDictionary, AWEUserStatusSynchronizer, NSMutableArray;

@interface AWERecommendPersonDataController : AWEListDataController <AWEUserMessage, AWERecommendUserDataControllerProtocol> {
    BOOL _useNewRecommendCountUsers;
    BOOL _enableContactModel;
    BOOL needUserExtra;
    BOOL _isFromHighValueUserSource;
    BOOL _idlMinimize;
    BOOL _hasContactCell;
    BOOL _hasMore;
    NSMutableArray *_recommendedNewUsers;
    long long _newRecommendCountSource;
    unsigned long long _txBanManagerInsertType;
    long long _contactIndex;
    id /* block */ _LIFilterBlock;
    NSString *filteredIDs;
    long long _refreshID;
    NSMutableDictionary *_recommendUserExtraInfo;
    NSArray *_banners;
    NSString *_enterFrom;
    NSString *_userNickname;
    NSString *_logId;
    NSString *_insertedTopUIDs;
    long long _cursor;
    AWEUserStatusSynchronizer *_userStatusSynchronizer;
    NSString *_requestId;
    NSString *_userID;
    long long _type;
    long long _impressionIndex;
    unsigned long long _firstPageCount;
    unsigned long long _pageCount;
    NSArray *_repeatUserIDs;
    NSMutableSet *_fetchedUsersIDs;
    NSMutableSet *_recommendedNewUsersIDs;
    double _requestTime;
}

@property (nonatomic) long long refreshID;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *userID;
@property (nonatomic) long long type;
@property (nonatomic) long long impressionIndex;
@property (nonatomic) unsigned long long firstPageCount;
@property (nonatomic) unsigned long long pageCount;
@property (retain, nonatomic) NSArray *repeatUserIDs;
@property (retain, nonatomic) NSMutableSet *fetchedUsersIDs;
@property (retain, nonatomic) NSMutableSet *recommendedNewUsersIDs;
@property (retain, nonatomic) AWEUserStatusSynchronizer *userStatusSynchronizer;
@property (nonatomic) double requestTime;
@property (nonatomic) BOOL hasContactCell;
@property (retain, nonatomic) NSMutableDictionary *recommendUserExtraInfo;
@property (copy, nonatomic) NSArray *banners;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *userNickname;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) BOOL isFromHighValueUserSource;
@property (copy, nonatomic) NSString *insertedTopUIDs;
@property (nonatomic) BOOL idlMinimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (copy, nonatomic) id /* block */ LIFilterBlock;
@property (nonatomic) long long newRecommendCountSource;
@property (nonatomic) BOOL useNewRecommendCountUsers;
@property (copy, nonatomic) NSString *filteredIDs;
@property (nonatomic) unsigned long long txBanManagerInsertType;
@property (retain, nonatomic) NSMutableArray *recommendedNewUsers;
@property (nonatomic) BOOL enableContactModel;
@property (nonatomic) long long contactIndex;
@property (nonatomic) BOOL needUserExtra;

+ (void)dislikeRecommendUserWithUid:(id)arg0 enterFrom:(id)arg1 extraParam:(id)arg2 completion:(id /* block */)arg3;
+ (void)dislikeRecommendUserWithUid:(id)arg0 completion:(id /* block */)arg1;
+ (void)dislikeRecommendUserWithUid:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;
+ (void)nextRecommendUserWithUid:(id)arg0 recommendType:(long long)arg1 completion:(id /* block */)arg2;

- (void)didFinishLogout;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)logId;
- (void)setLogId:(id)arg0;
- (id)URLForNetworkService;
- (void)setEnableContactModel:(BOOL)arg0;
- (void)setRefreshID:(long long)arg0;
- (long long)refreshID;
- (id)insertedTopUIDs;
- (void)setInsertedTopUIDs:(id)arg0;
- (void)setNewRecommendCountSource:(long long)arg0;
- (void)setUseNewRecommendCountUsers:(BOOL)arg0;
- (void)setContactIndex:(long long)arg0;
- (BOOL)shouldShowRecommend;
- (void)setUserNickname:(id)arg0;
- (BOOL)isFromHighValueUserSource;
- (void)setNeedUserExtra:(BOOL)arg0;
- (id)initWithUserID:(id)arg0 withType:(long long)arg1 pageCount:(unsigned long long)arg2;
- (void)setFilteredIDs:(id)arg0;
- (id)initWithUserID:(id)arg0 withType:(long long)arg1;
- (id)initWithUserID:(id)arg0 withType:(long long)arg1 pageCount:(unsigned long long)arg2 firstPageCount:(unsigned long long)arg3;
- (unsigned long long)firstPageCount;
- (void)setFirstPageCount:(unsigned long long)arg0;
- (id)repeatUserIDs;
- (void)setRepeatUserIDs:(id)arg0;
- (id)fetchedUsersIDs;
- (void)setFetchedUsersIDs:(id)arg0;
- (id)recommendedNewUsersIDs;
- (void)setRecommendedNewUsersIDs:(id)arg0;
- (BOOL)hasContactCell;
- (void)setHasContactCell:(BOOL)arg0;
- (id)recommendUserExtraInfo;
- (void)setRecommendUserExtraInfo:(id)arg0;
- (id)userNickname;
- (void)setIsFromHighValueUserSource:(BOOL)arg0;
- (id)filteredIDs;
- (BOOL)idlMinimize;
- (void)setIdlMinimize:(BOOL)arg0;
- (id)recommendedNewUsers;
- (void)setRecommendedNewUsers:(id)arg0;
- (long long)newRecommendCountSource;
- (BOOL)useNewRecommendCountUsers;
- (unsigned long long)txBanManagerInsertType;
- (void)setTxBanManagerInsertType:(unsigned long long)arg0;
- (BOOL)enableContactModel;
- (long long)contactIndex;
- (BOOL)needUserExtra;
- (void)refreshWithContext:(id)arg0 completion:(id /* block */)arg1;
- (id)paramsForNetworkService:(BOOL)arg0;
- (void)trackMonitorWithIsEmpty:(BOOL)arg0;
- (void)trackResponseWithSuccess:(BOOL)arg0 list:(id)arg1 isLoadMore:(BOOL)arg2;
- (void)insertUsers:(id)arg0;
- (id)userStatusSynchronizer;
- (id /* block */)LIFilterBlock;
- (void)checkAndUpdateContactModel;
- (id)enterFromWithType;
- (void)resetRecommendData;
- (void)updateRequestId:(id)arg0;
- (void)removeRepeatUsers:(id)arg0;
- (void)checkAndRemoveFollowedUser;
- (void)setLIFilterBlock:(id /* block */)arg0;
- (void)setUserStatusSynchronizer:(id)arg0;
- (id)userID;
- (long long)cursor;
- (void)setRequestTime:(double)arg0;
- (double)requestTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)type;
- (void)setUserID:(id)arg0;
- (id)initWithType:(long long)arg0;
- (void)setPageCount:(unsigned long long)arg0;
- (unsigned long long)pageCount;
- (void)setType:(long long)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)dealloc;
- (id)requestId;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)banners;
- (void)setBanners:(id)arg0;
- (void)setRequestId:(id)arg0;
- (long long)impressionIndex;
- (void)setImpressionIndex:(long long)arg0;

@end
