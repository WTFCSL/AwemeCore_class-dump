//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableArray;

@interface AWEDitoVideoPlayerManager : NSObject {
    NSMutableDictionary *_pool;
    NSMutableArray *_unusePool;
}

@property (retain, nonatomic) NSMutableDictionary *pool;
@property (retain, nonatomic) NSMutableArray *unusePool;

- (void)appDidReceiveMemoryWarningNotification;
- (void)clearAllDirtyCache;
- (BOOL)isLegal:(id)arg0 withTag:(id)arg1;
- (id)playerViewInUnusePool:(id)arg0;
- (void)markActivateVideoPlayerView:(id)arg0 withTag:(id)arg1;
- (id)createPlayerWithTag:(id)arg0;
- (void)removeVideoPlayerCacheWithTag:(id)arg0;
- (void)clearDirtyCacheWithTag:(id)arg0;
- (id)fetchVideoPlayerWithTag:(id)arg0;
- (void)releaseVideoPlayer:(id)arg0 withTag:(id)arg1;
- (id)unusePool;
- (void)setUnusePool:(id)arg0;
- (id)pool;
- (id)init;
- (void).cxx_destruct;
- (void)setPool:(id)arg0;
- (void)dealloc;

@end
