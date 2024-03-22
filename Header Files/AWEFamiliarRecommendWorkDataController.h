//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableSet, NSNumber;

@interface AWEFamiliarRecommendWorkDataController : AWEListDataController {
    BOOL _isCurrentUser;
    NSString *_secUserID;
    long long _pageSize;
    NSNumber *_maxCursor;
    NSNumber *_minCursor;
    NSMutableSet *_addItems;
    NSMutableDictionary *_unRecommendItems;
}

@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) long long pageSize;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSMutableSet *addItems;
@property (retain, nonatomic) NSMutableDictionary *unRecommendItems;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (void)loadMore:(id /* block */)arg0;
- (id)initWithSecUserID:(id)arg0;
- (id)unRecommendItems;
- (void)changeDiggedStatus:(BOOL)arg0 withItemID:(id)arg1;
- (void)changeFavoritedStatus:(BOOL)arg0 withItemID:(id)arg1;
- (void)changeFamiliarRecommendStatusWithNotification:(id)arg0;
- (BOOL)refreshDataIfNeeded;
- (void)setUnRecommendItems:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)reloadDataIfNeeded;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)refresh:(id /* block */)arg0;
- (long long)pageSize;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (id)addItems;
- (void)setAddItems:(id)arg0;
- (void)setPageSize:(long long)arg0;

@end