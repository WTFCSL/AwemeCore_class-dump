//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface AWERelationListDataController : AWEListDataController <AWERelationListDataProtocol> {
    BOOL _hasMore;
    BOOL _isMine;
    BOOL _hasMoreRecommendations;
    BOOL _disableRecommend;
    long long _type;
    long long _privacy;
    NSString *_uid;
    NSString *_hotsoonText;
    long long _vcdCount;
    long long _hotsoonHasMore;
    long long _vcdAuthFirstTime;
    long long _sortingSourceType;
    long long _groupFilterType;
    long long _fansSortType;
    NSString *_statusMsg;
    NSArray *_categoryTypes;
    NSString *_insertIds;
    long long _mixCount;
    NSDictionary *_logPassback;
    unsigned long long _maxTime;
    unsigned long long _minTime;
    unsigned long long _currentMaxTime;
    long long _offset;
    long long _requestCycle;
    NSMutableArray *_pendingUsers;
    NSString *_storePage;
}

@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long maxTime;
@property (nonatomic) unsigned long long minTime;
@property (nonatomic) unsigned long long currentMaxTime;
@property (nonatomic) BOOL isMine;
@property (nonatomic) long long offset;
@property (nonatomic) long long requestCycle;
@property (nonatomic) BOOL hasMoreRecommendations;
@property (retain, nonatomic) NSMutableArray *pendingUsers;
@property (nonatomic) BOOL disableRecommend;
@property (copy, nonatomic) NSString *storePage;
@property (nonatomic) long long groupFilterType;
@property (nonatomic) long long type;
@property (nonatomic) long long privacy;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (nonatomic) long long vcdAuthFirstTime;
@property (nonatomic) long long sortingSourceType;
@property (nonatomic) long long fansSortType;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *categoryTypes;
@property (copy, nonatomic) NSString *insertIds;
@property (nonatomic) long long mixCount;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (id)hotsoonText;
- (void)setHotsoonText:(id)arg0;
- (long long)hotsoonHasMore;
- (void)setHotsoonHasMore:(long long)arg0;
- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (void)setPrivacy:(long long)arg0;
- (id)insertIds;
- (void)setInsertIds:(id)arg0;
- (id)getExpectedSizeInfo;
- (id)initWithType:(long long)arg0 uid:(id)arg1 isMine:(BOOL)arg2 disableRecommend:(BOOL)arg3;
- (id)paramsForNetworkServiceWithLoadMore:(BOOL)arg0;
- (id)URLForNetworkService;
- (void)setFansSortType:(long long)arg0;
- (long long)mixCount;
- (void)setMixCount:(long long)arg0;
- (long long)sortingSourceType;
- (long long)groupFilterType;
- (void)setVcdAuthFirstTime:(long long)arg0;
- (void)updateGroupFilterType:(long long)arg0;
- (void)fetchGroupFilterDataCompletion:(id /* block */)arg0;
- (void)setSortingSourceType:(long long)arg0;
- (void)updateSortOrder:(long long)arg0 persistence:(BOOL)arg1;
- (void)setGroupFilterType:(long long)arg0;
- (long long)vcdCount;
- (void)setVcdCount:(long long)arg0;
- (id)sortTypeRememberFullKey;
- (void)setPendingUsers:(id)arg0;
- (void)setRequestCycle:(long long)arg0;
- (BOOL)hasMoreRecommendations;
- (void)setHasMoreRecommendations:(BOOL)arg0;
- (void)setCurrentMaxTime:(unsigned long long)arg0;
- (BOOL)enableRecycleRequestWhenLessData;
- (long long)requestCycle;
- (void)loadWithCompletion:(id /* block */)arg0 incremental:(BOOL)arg1 minimumPendingCount:(unsigned long long)arg2 maximumRequestCycle:(unsigned long long)arg3;
- (BOOL)disableRecommend;
- (BOOL)enableFollowingListSortTypeByEnv;
- (long long)fansSortType;
- (long long)vcdAuthFirstTime;
- (unsigned long long)currentMaxTime;
- (void)processPrivacy:(id)arg0 maxTime:(long long)arg1;
- (id)initWithType:(long long)arg0 uid:(id)arg1 isMine:(BOOL)arg2;
- (void)setDisableRecommend:(BOOL)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)init;
- (void)setMaxTime:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (long long)type;
- (long long)privacy;
- (long long)offset;
- (unsigned long long)minTime;
- (void)setType:(long long)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (unsigned long long)maxTime;
- (void)setMinTime:(unsigned long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (BOOL)isMine;
- (void)setIsMine:(BOOL)arg0;
- (id)categoryTypes;
- (void)setStorePage:(id)arg0;
- (id)storePage;
- (void)setCategoryTypes:(id)arg0;
- (id)pendingUsers;

@end
