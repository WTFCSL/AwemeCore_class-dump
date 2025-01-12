//
//     Generated by private class-dump
//

@class NSString, AWEMixVideoLocalDataBase, AWEMixVideoModel, NSObject, NSNumber;
@protocol OS_dispatch_queue, AWEUserProFileAdVideoDataController;

@interface AWEMixVideoDetailPlayListDataController : AWEListDataController <AWEMixVideoDetailPlayListDataControllerProtocol> {
    BOOL _enabledLocalDataBase;
    BOOL hasRecommendMix;
    BOOL _isNeedMarkMulti;
    id /* block */ _requestFinishBlock;
    AWEMixVideoModel *_mixVideoModel;
    NSString *_mixVideoID;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    NSString *_previousPage;
    id<AWEUserProFileAdVideoDataController> _adVideoDataController;
    NSObject<OS_dispatch_queue> *_mixDataQueue;
    AWEMixVideoLocalDataBase *_localDataBase;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mixDataQueue;
@property (retain, nonatomic) AWEMixVideoLocalDataBase *localDataBase;
@property (nonatomic) BOOL isNeedMarkMulti;
@property (retain, nonatomic) id<AWEUserProFileAdVideoDataController> adVideoDataController;
@property (copy, nonatomic) id /* block */ requestFinishBlock;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (copy, nonatomic) NSString *mixVideoID;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL hasRecommendMix;
@property (nonatomic) BOOL enabledLocalDataBase;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)loadPreviousWithCompletion:(id /* block */)arg0;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (BOOL)hasRecommendMix;
- (void)setHasRecommendMix:(BOOL)arg0;
- (void)fetchWithCount:(long long)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (id)adVideoDataController;
- (void)setAdVideoDataController:(id)arg0;
- (void)setMixVideoID:(id)arg0;
- (id)mixVideoID;
- (id)mixVideoModel;
- (void)setMixVideoModel:(id)arg0;
- (void)syncWith:(id)arg0;
- (id)sortArrayByExcuteDate:(id)arg0;
- (void)trackCompilationListMonitorWithModel:(id)arg0 error:(id)arg1;
- (void)resetDataForEpisode:(long long)arg0;
- (id /* block */)requestFinishBlock;
- (void)setRequestFinishBlock:(id /* block */)arg0;
- (BOOL)enabledLocalDataBase;
- (void)setEnabledLocalDataBase:(BOOL)arg0;
- (id)mixDataQueue;
- (void)setMixDataQueue:(id)arg0;
- (BOOL)isNeedMarkMulti;
- (void)setIsNeedMarkMulti:(BOOL)arg0;
- (void)setLocalDataBase:(id)arg0;
- (id)localDataBase;
- (void)loadMoreFromEpisode:(long long)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)resetData;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end
