//
//     Generated by private class-dump
//

@class NSCache, NSMutableDictionary, NSMutableArray;

@interface ALMVideoPreloadInfoCache : NSObject {
    NSCache *_innerCache;
    NSMutableDictionary *_preloadedSizeCache;
    NSMutableArray *_alreadyCompleteTasks;
    NSCache *_modernPreloadedSizeCache;
}

@property (retain, nonatomic) NSCache *innerCache;
@property (retain, nonatomic) NSMutableDictionary *preloadedSizeCache;
@property (retain, nonatomic) NSMutableArray *alreadyCompleteTasks;
@property (retain, nonatomic) NSCache *modernPreloadedSizeCache;

+ (id)sharedInstance;

- (id)innerCache;
- (id)preloadedSizeCache;
- (id)alreadyCompleteTasks;
- (id)modernPreloadedSizeCache;
- (void)saveBitrate:(long long)arg0 urlString:(id)arg1 forVideoID:(id)arg2;
- (long long)bitrateForVideoID:(id)arg0;
- (id)urlStringForVideoID:(id)arg0;
- (void)saveAlreadyPreloadedSize:(double)arg0 forTaskID:(id)arg1;
- (double)alreadyPreloadedSizeForTaskID:(id)arg0;
- (id)preloadedSizeDic;
- (void)markAlreadyCompletionWithTaskID:(id)arg0;
- (BOOL)checkAreadyCompleteAndRemoveTaskID:(id)arg0;
- (void)savePreloadSize:(long long)arg0 mediaSize:(long long)arg1 urlString:(id)arg2 forVideoID:(id)arg3;
- (id)preloadedSizeForVideoID:(id)arg0;
- (id)mediaSizeForVideoID:(id)arg0;
- (void)setInnerCache:(id)arg0;
- (void)setPreloadedSizeCache:(id)arg0;
- (void)setAlreadyCompleteTasks:(id)arg0;
- (void)setModernPreloadedSizeCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
