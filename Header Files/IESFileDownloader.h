//
//     Generated by private class-dump
//

@class NSArray, NSMapTable, NSOperationQueue, IESEffectDownloadFlowConflictMonitor;
@protocol EffectPlatformRequestDelegate;

@interface IESFileDownloader : NSObject {
    BOOL _enableDownloadOptimize;
    NSOperationQueue *_downloadQueue;
    id<EffectPlatformRequestDelegate> _requestDelegate;
    NSArray *_extraDownloadQueueList;
    NSArray *_downloadStrategys;
    NSMapTable *_taskOperationMap;
    IESEffectDownloadFlowConflictMonitor *_monitor;
}

@property (retain, nonatomic) NSArray *extraDownloadQueueList;
@property (retain, nonatomic) NSArray *downloadStrategys;
@property (retain, nonatomic) NSMapTable *taskOperationMap;
@property (retain, nonatomic) IESEffectDownloadFlowConflictMonitor *monitor;
@property (nonatomic) BOOL enableDownloadOptimize;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) id<EffectPlatformRequestDelegate> requestDelegate;

+ (long long)operationQueueOfPriority:(long long)arg0;
+ (id)sharedInstance;

- (void)setMaxConcurrentCount:(unsigned long long)arg0;
- (void)setRequestDelegate:(id)arg0;
- (void)configExtraDownloadQueue;
- (void)configDownloadStratgys;
- (void)setExtraDownloadQueueList:(id)arg0;
- (id)extraDownloadQueueList;
- (id)delegateDownloadFileWithURLs:(id)arg0 downloadPath:(id)arg1 downloadProgress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)delegateDownloadFileWithURLs:(id)arg0 downloadPath:(id)arg1 downloadQueuePriority:(long long)arg2 downloadQualityOfService:(long long)arg3 downloadProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)delegateDownloadFileWithURLs:(id)arg0 downloadPath:(id)arg1 downloadParameters:(id)arg2 downloadQueuePriority:(long long)arg3 downloadQualityOfService:(long long)arg4 downloadProgress:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)requestDelegate;
- (id)delegateV2DownloadFileWithURLs:(id)arg0 downloadPath:(id)arg1 taskKey:(id)arg2 insertFront:(BOOL)arg3 cancelExistDownloading:(BOOL)arg4 defaultDownloadQueue:(BOOL)arg5 downloadParameters:(id)arg6 downloadProgress:(id /* block */)arg7 completion:(id /* block */)arg8;
- (id)downloadStrategys;
- (id)taskOperationMap;
- (id)downloadFileWithURLs:(id)arg0 downloadPath:(id)arg1 downloadProgress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)delegateV2DownloadFileWithURLs:(id)arg0 downloadPath:(id)arg1 taskKey:(id)arg2 insertFront:(BOOL)arg3 cancelExistDownloading:(BOOL)arg4 defaultDownloadQueue:(BOOL)arg5 downloadProgress:(id /* block */)arg6 completion:(id /* block */)arg7;
- (BOOL)isDownloadTaskFinished:(id)arg0;
- (void)pauseTaskWithKeyIfNeed:(id)arg0;
- (void)cancelTaskWithKeyIfNeed:(id)arg0;
- (void)resumeTaskWithKeyIfNeed:(id)arg0 insertFront:(BOOL)arg1 cancelDownloading:(BOOL)arg2 defaultDownloadQueue:(BOOL)arg3 downloadProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)notifyTrackCurrentDownloadingFlowWithBusinessParameters:(id)arg0;
- (BOOL)shouldTaskBePausedWithTaskKey:(id)arg0 thresholdSize:(long long)arg1;
- (BOOL)enableDownloadOptimize;
- (void)setEnableDownloadOptimize:(BOOL)arg0;
- (void)setDownloadStrategys:(id)arg0;
- (void)setTaskOperationMap:(id)arg0;
- (id)acc_optimize_downloadFileWithURLs:(id)arg0 priority:(long long)arg1 downloadPath:(id)arg2 downloadProgress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (void)setDownloadQueue:(id)arg0;
- (id)downloadQueue;

@end
