//
//     Generated by private class-dump
//

@class NSNumber, NSMutableArray, AWEHotListDataController;

@interface AWEAwemeOfflineDataController : AWEListDataController {
    long long _type;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    unsigned long long _totalCount;
    AWEHotListDataController *_feedDataController;
    long long _feedCount;
    NSMutableArray *_videosArray;
    long long _replaceCount;
    long long _initFetchCount;
    long long _pullType;
    NSMutableArray *_modelsArray;
    long long _fetchCount;
}

@property (nonatomic) long long initFetchCount;
@property (nonatomic) long long pullType;
@property (retain, nonatomic) NSMutableArray *modelsArray;
@property (nonatomic) long long fetchCount;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) unsigned long long totalCount;
@property (retain, nonatomic) AWEHotListDataController *feedDataController;
@property (nonatomic) long long feedCount;
@property (retain, nonatomic) NSMutableArray *videosArray;
@property (nonatomic) long long replaceCount;

- (long long)pullType;
- (void)setPullType:(long long)arg0;
- (long long)feedCount;
- (id)modelsArray;
- (id)minCursor;
- (id)maxCursor;
- (void)setModelsArray:(id)arg0;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (void)setFeedCount:(long long)arg0;
- (void)setVideosArray:(id)arg0;
- (id)videosArray;
- (long long)initFetchCount;
- (void)setInitFetchCount:(long long)arg0;
- (id)generateValidAwemeCacheModels:(id)arg0;
- (id)feedDataController;
- (id)removeShouldNotShowVideosInTeenModeAwemeModelList:(id)arg0;
- (BOOL)needRemoveLongVideo:(id)arg0;
- (void)fetchCachedFeedWithCompletion:(id /* block */)arg0;
- (void)fillDataSourceWithModel:(id)arg0;
- (void)deleteWithModelItemID:(id)arg0;
- (void)setFeedDataController:(id)arg0;
- (long long)replaceCount;
- (void)setReplaceCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithType:(long long)arg0;
- (void)setType:(long long)arg0;
- (unsigned long long)totalCount;
- (void)fetchWithCompletion:(id /* block */)arg0;
- (void)setTotalCount:(unsigned long long)arg0;
- (void)setFetchCount:(long long)arg0;
- (long long)fetchCount;
- (BOOL)isValidRequest;

@end
