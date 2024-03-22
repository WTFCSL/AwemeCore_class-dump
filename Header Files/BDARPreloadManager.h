//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface BDARPreloadManager : NSObject <TTVideoEnginePreloadDelegate> {
    BOOL _isEnginePreloaderStarted;
    NSMutableArray *_preloadedVids;
    NSMutableArray *_preloadingVids;
}

@property (nonatomic) BOOL isEnginePreloaderStarted;
@property (retain, nonatomic) NSMutableArray *preloadedVids;
@property (retain, nonatomic) NSMutableArray *preloadingVids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enablePlayerPreloadOptimizeWithVideoId:(id)arg0 withSDKAB:(id)arg1;
+ (long long)playerResolutionWithVideoId:(id)arg0;
+ (BOOL)enablePlayerPreloadOptimizeAtBannerWithVideoId:(id)arg0 withSDKAB:(id)arg1;
+ (void)removeExpiredCache;
+ (void)playerPreloadStatusMonitorWithError:(id)arg0;
+ (BOOL)isPreloadWithVideoId:(id)arg0;
+ (void)startPreload:(id)arg0;
+ (void)startPreloadWithVideoID:(id)arg0;
+ (void)startPreloadWithAdModel:(id)arg0 finish:(id /* block */)arg1;
+ (id)sharedInstance;

- (void)playerConfig;
- (void)setPreloadedVids:(id)arg0;
- (void)setPreloadingVids:(id)arg0;
- (id)taskInfoWithDictionary:(id)arg0;
- (id)preloadedVids;
- (void)savePreloadVids;
- (id)preloadingVids;
- (void)savePreloadInfo:(id)arg0;
- (void)setIsEnginePreloaderStarted:(BOOL)arg0;
- (id)dicWithTaskInfo:(id)arg0;
- (BOOL)isEnginePreloaderStarted;
- (id)init;
- (void).cxx_destruct;

@end
