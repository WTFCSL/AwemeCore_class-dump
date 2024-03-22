//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEFavoriteListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_userList;
    long long _maxCursor;
    long long _minCursor;
    long long _totalCount;
    long long _insertCollectCanceled;
}

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long insertCollectCanceled;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:(long long)arg0;
- (void)setMinCursor:(long long)arg0;
- (void)setUserList:(id)arg0;
- (long long)insertCollectCanceled;
- (void)setInsertCollectCanceled:(long long)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)totalCount;
- (id)userList;
- (void)setTotalCount:(long long)arg0;

@end