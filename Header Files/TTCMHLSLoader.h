//
//     Generated by private class-dump
//

@class NSString, TTCMPlaylistLoaderItem, AVMDLPreloadTaskSpec, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, TTCMHLSLoaderDelegate;

@interface TTCMHLSLoader : NSObject {
    BOOL _canceled;
    id<TTCMHLSLoaderDelegate> _delegate;
    NSString *_mProxyUrl;
    NSString *_playlistFileKey;
    NSString *_mCacheDir;
    unsigned long long _targetPreloadSize;
    NSObject<OS_dispatch_queue> *_taskQueue;
    TTCMPlaylistLoaderItem *_m3u8FileLoader;
    NSMutableArray *_mSubUrlInfos;
    NSString *_currentLoadRawKey;
    NSString *_currentFileKey;
    unsigned long long _preloadedSize;
    AVMDLPreloadTaskSpec *_mTaskSpec;
    unsigned long long _playlistType;
    TTCMHLSLoader *_subLoader;
    TTCMHLSLoader *_parentLoader;
}

@property (copy, nonatomic) NSString *playlistFileKey;
@property (copy, nonatomic) NSString *mCacheDir;
@property (nonatomic) unsigned long long targetPreloadSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) TTCMPlaylistLoaderItem *m3u8FileLoader;
@property (retain, nonatomic) NSMutableArray *mSubUrlInfos;
@property BOOL canceled;
@property (copy, nonatomic) NSString *currentLoadRawKey;
@property (copy, nonatomic) NSString *currentFileKey;
@property (nonatomic) unsigned long long preloadedSize;
@property (retain, nonatomic) AVMDLPreloadTaskSpec *mTaskSpec;
@property (nonatomic) unsigned long long playlistType;
@property (retain, nonatomic) TTCMHLSLoader *subLoader;
@property (weak, nonatomic) TTCMHLSLoader *parentLoader;
@property (weak, nonatomic) id<TTCMHLSLoaderDelegate> delegate;
@property (readonly, nonatomic) NSString *mProxyUrl;

+ (int)getErrorCode:(int)arg0;

- (id)initWithTask:(id)arg0 expireTimes:(id)arg1;
- (void)startPreloadM3u8File:(id)arg0;
- (void)preloadTs:(unsigned long long)arg0;
- (id)parentLoader;
- (id)getCacheDir;
- (void)setM3u8FileLoader:(id)arg0;
- (void)setMSubUrlInfos:(id)arg0;
- (void)doPreload;
- (id)initWithUrl:(id)arg0 preloadSize:(unsigned long long)arg1;
- (void)setSubLoader:(id)arg0;
- (id)subLoader;
- (void)setParentLoader:(id)arg0;
- (void)setCurrentLoadRawKey:(id)arg0;
- (void)setCurrentFileKey:(id)arg0;
- (void)processSubPreloadStatus:(unsigned long long)arg0 obj:(id)arg1;
- (unsigned long long)getKeyType:(id)arg0;
- (void)processSubPreloadStatus:(id)arg0 status:(unsigned long long)arg1 obj:(id)arg2;
- (void)p_processSubPreloadStatus:(id)arg0 status:(unsigned long long)arg1 obj:(id)arg2;
- (id)mProxyUrl;
- (id)mCacheDir;
- (void)setMCacheDir:(id)arg0;
- (unsigned long long)targetPreloadSize;
- (void)setTargetPreloadSize:(unsigned long long)arg0;
- (id)m3u8FileLoader;
- (id)mSubUrlInfos;
- (id)currentLoadRawKey;
- (id)currentFileKey;
- (unsigned long long)preloadedSize;
- (void)setPreloadedSize:(unsigned long long)arg0;
- (id)mTaskSpec;
- (void)setMTaskSpec:(id)arg0;
- (void)releaseSource;
- (id)playlistFileKey;
- (void)setPlaylistFileKey:(id)arg0;
- (id)initWithTask:(id)arg0;
- (unsigned long long)playlistType;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (int)preload;
- (id)taskQueue;
- (BOOL)canceled;
- (id)delegate;
- (void)cancel;
- (void)handleMessage:(id)arg0;
- (void)setCanceled:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)setPlaylistType:(unsigned long long)arg0;

@end
