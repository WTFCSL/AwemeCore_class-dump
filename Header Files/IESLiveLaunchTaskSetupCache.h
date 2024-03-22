//
//     Generated by private class-dump
//

@protocol IESLiveCacheOperation, IESLiveKTVCacheService;

@interface IESLiveLaunchTaskSetupCache : IESLiveBaseLaunchTask {
    id<IESLiveCacheOperation> _cacheOperator;
    id<IESLiveKTVCacheService> _ktvService;
}

@property (retain, nonatomic) id<IESLiveCacheOperation> cacheOperator;
@property (retain, nonatomic) id<IESLiveKTVCacheService> ktvService;

- (void)excute;
- (id)ktvService;
- (id)cacheOperator;
- (void)setCacheOperator:(id)arg0;
- (void)setKtvService:(id)arg0;
- (void).cxx_destruct;

@end
