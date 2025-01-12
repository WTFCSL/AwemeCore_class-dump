//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESVSVideoPlayerPreloadManager : NSObject {
    NSMutableDictionary *_preloadTasks;
}

@property (retain, nonatomic) NSMutableDictionary *preloadTasks;

+ (id)sharedInstance;

- (BOOL)enableLiveVsShowPreloadEpisode;
- (long long)liveVsShowPreloadEpisodeSize;
- (id)preloadTasks;
- (void)setPreloadTasks:(id)arg0;
- (void)preloadVideoModel:(id)arg0 resolution:(unsigned long long)arg1 preloadSize:(long long)arg2 preloadOffset:(long long)arg3;
- (id)videoEngineModelFrom:(id)arg0;
- (void)preloadVideoEngineModel:(id)arg0 resolution:(unsigned long long)arg1 preloadSize:(long long)arg2 preloadOffset:(long long)arg3;
- (void)checkCacheExistWithVideoEngineModel:(id)arg0 resolution:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)preloadEpisode:(id)arg0 resolution:(unsigned long long)arg1 preloadSize:(long long)arg2 preloadOffset:(long long)arg3;
- (void)checkCacheExistWithEpisode:(id)arg0 resolution:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)videoIDFrom:(id)arg0;
- (void).cxx_destruct;
- (void)cancelAllTasks;

@end
