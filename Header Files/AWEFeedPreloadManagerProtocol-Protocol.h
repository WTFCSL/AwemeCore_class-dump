//
//     Generated by private class-dump
//

@protocol AWEFeedPreloadManagerDelegate;

@protocol AWEFeedPreloadManagerProtocol <IESVideoStrategyDataSourceProtocol>

+ (BOOL)allPreloadTasksCompletedForTrack;
+ (BOOL)awe_isEnableStrategyPreload:(id)arg0;

@property (nonatomic, weak) id<AWEFeedPreloadManagerDelegate> delegate;
@property (nonatomic) long long preloadSize;

- (long long)preloadSize;
- (void)setPreloadSize:(long long)arg0;
- (id)initWithBizScene:(id)arg0;
- (void)preloadVideoWithModels:(id)arg0 fromIndex:(long long)arg1 referString:(id)arg2;
- (void)preloadVideoWithModels:(id)arg0 fromIndex:(long long)arg1 referString:(id)arg2;
- (void)preloadVideoModel:(id)arg0;
- (void)cacheExistsWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)cacheExistsWithModel:(id)arg0 completion:(id /* block */)arg1;
- (id)getPreloadTasks;
- (void)checkOutPreloadStrategyScene:(id)arg0;
- (void)pausePreloadStrategyScene:(id)arg0;
- (void)resumePreloadStrategyScene:(id)arg0;
- (void)resumePreloadStrategySceneAsync:(id)arg0 async:(BOOL)arg1;
- (id)strategy:(void *)arg0 prefetchPreloadInfoOf:(id)arg1;
- (id)mediaListForStrategy:(id)arg0 offset:(long long)arg1 count:(long long)arg2 userData:(id)arg3;
- (id)mediaListForStrategy:(id)arg0 offset:(long long)arg1 count:(long long)arg2 userData:(id)arg3;
- (void)businessEventStrategyScene:(id)arg0;
- (id)generateDataSourceInstance:(id)arg0 referString:(id)arg1 fromIndex:(long long)arg2;
- (id)generateDataSourceInstance:(id)arg0 referString:(id)arg1 fromIndex:(long long)arg2;
- (BOOL)isContinuePreloadData:(long long)arg0;
- (id)delegate;
- (void)cancel;
- (void)setDelegate:(id)arg0;

@end
