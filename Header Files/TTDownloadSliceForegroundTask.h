//
//     Generated by private class-dump
//

@class NSString, TTRangeTracker;
@protocol TTDownloadTaskProtocol;

@interface TTDownloadSliceForegroundTask : TTDownloadSliceTask {
    BOOL _isRestartImmediately;
    BOOL _isRangeDownloadCompleted;
    NSString *_urlKey;
    NSString *_secondUrl;
    NSString *_sliceStorageDir;
    id /* block */ _startTaskDelayHandle;
    TTRangeTracker *_rangeTracker;
    id<TTDownloadTaskProtocol> _task;
}

@property (retain) id<TTDownloadTaskProtocol> task;
@property BOOL isRestartImmediately;
@property (copy) NSString *urlKey;
@property (copy) NSString *secondUrl;
@property (copy) NSString *sliceStorageDir;
@property BOOL isRangeDownloadCompleted;
@property (retain, nonatomic) TTRangeTracker *rangeTracker;
@property (copy) id /* block */ startTaskDelayHandle;

- (BOOL)setThrottleNetSpeed:(long long)arg0;
- (void)setSliceStorageDir:(id)arg0;
- (void)setIsRestartImmediately:(BOOL)arg0;
- (BOOL)updateSubSliceInfoByRealFileSize;
- (id)setRangeAndMergeUserHeader:(long long)arg0 endByte:(long long)arg1;
- (void)setIsRangeDownloadCompleted:(BOOL)arg0;
- (BOOL)isRangeDownloadCompleted;
- (BOOL)isRestartImmediately;
- (void)decreseRetryTimesAtomic;
- (id /* block */)startTaskDelayHandle;
- (id)sliceStorageDir;
- (id)secondUrl;
- (void)setSecondUrl:(id)arg0;
- (id)initWhithSliceConfig:(id)arg0 downloadTask:(id)arg1;
- (void)setRestartImmediately;
- (void)setStartTaskDelayHandle:(id /* block */)arg0;
- (void)clearReferenceCount;
- (void)setRangeTracker:(id)arg0;
- (id)rangeTracker;
- (id)getRangeTracker;
- (void)trySwitchCdn;
- (void).cxx_destruct;
- (void)setTask:(id)arg0;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)task;
- (id)urlKey;
- (void)setUrlKey:(id)arg0;

@end
