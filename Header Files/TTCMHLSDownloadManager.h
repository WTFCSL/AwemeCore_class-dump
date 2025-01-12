//
//     Generated by private class-dump
//

@class NSOperationQueue, NSMutableDictionary;
@protocol TTCMHLSDownloadManagerDelegate;

@interface TTCMHLSDownloadManager : NSObject {
    id<TTCMHLSDownloadManagerDelegate> _delegate;
    NSMutableDictionary *_downloadTasks;
    NSOperationQueue *_downloadQueue;
    long long _maxConcurrentDownloads;
}

@property (retain, nonatomic) NSMutableDictionary *downloadTasks;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (nonatomic) long long maxConcurrentDownloads;
@property (weak, nonatomic) id<TTCMHLSDownloadManagerDelegate> delegate;

+ (id)sharedInstance;

- (id)getTaskByKey:(id)arg0;
- (void)pauseTask:(id)arg0;
- (void)removeDownloadFileByKey:(id)arg0;
- (void)setMaxConcurrentDownloads:(long long)arg0;
- (void)downloadFail:(id)arg0 error:(id)arg1;
- (void)downloadDidSuspend:(id)arg0;
- (id)downloadSource:(id)arg0 cacheKey:(id)arg1 vid:(id)arg2;
- (void)resumeDownloadSource:(id)arg0;
- (long long)maxConcurrentDownloads;
- (void)cancelTask:(id)arg0;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (void)setDownloadQueue:(id)arg0;
- (id)delegate;
- (id)downloadQueue;
- (void)setDelegate:(id)arg0;
- (void)pause;
- (id)downloadTasks;
- (void)setDownloadTasks:(id)arg0;

@end
