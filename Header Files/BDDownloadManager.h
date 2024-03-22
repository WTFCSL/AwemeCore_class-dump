//
//     Generated by private class-dump
//

@class NSString, NSMapTable, NSOperationQueue, NSArray, NSDictionary;
@protocol BDDownloadManagerTaskDelegate;

@interface BDDownloadManager : NSObject <BDDownloadTaskDelegate, BDWebImageDownloaderInfo, BDWebImageDownloaderDownloading, BDWebImageDownloaderManagement> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    BOOL enableLog;
    BOOL checkMimeType;
    BOOL checkDataLength;
    BOOL isCocurrentCallback;
    BOOL _downloadResumeEnabled;
    double timeoutInterval;
    double timeoutIntervalForResource;
    NSDictionary *defaultHeaders;
    long long _maxConcurrentTaskCount;
    id<BDDownloadManagerTaskDelegate> _delegate;
    unsigned long long _stackMode;
    NSString *_tempPath;
    NSOperationQueue *_operationQueue;
    Class _downloadTaskClass;
    NSMapTable *_weakTasks;
}

@property (retain, nonatomic) NSMapTable *weakTasks;
@property (weak, nonatomic) id<BDDownloadManagerTaskDelegate> delegate;
@property (nonatomic) unsigned long long stackMode;
@property (copy, nonatomic) NSString *tempPath;
@property (nonatomic) BOOL downloadResumeEnabled;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSArray *allTasks;
@property (retain, nonatomic) Class downloadTaskClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long maxConcurrentTaskCount;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double timeoutIntervalForResource;
@property (copy, nonatomic) NSDictionary *defaultHeaders;
@property (nonatomic) BOOL enableLog;
@property (nonatomic) BOOL checkMimeType;
@property (nonatomic) BOOL checkDataLength;
@property (nonatomic) BOOL isCocurrentCallback;

- (BOOL)enableLog;
- (void)setEnableLog:(BOOL)arg0;
- (void)downloadTask:(id)arg0 finishedWithData:(id)arg1 savePath:(id)arg2;
- (void)downloadTask:(id)arg0 failedWithError:(id)arg1;
- (id)defaultHeaders;
- (void)downloadTask:(id)arg0 didReceiveBlurHash:(id)arg1;
- (void)downloadTask:(id)arg0 didReceiveData:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isRepackNeeded:(id)arg0;
- (id)heicRepackData:(id)arg0;
- (BOOL)isCocurrentCallback;
- (void)setDefaultHeaders:(id)arg0;
- (long long)maxConcurrentTaskCount;
- (void)setMaxConcurrentTaskCount:(long long)arg0;
- (BOOL)checkMimeType;
- (void)setCheckMimeType:(BOOL)arg0;
- (BOOL)checkDataLength;
- (void)setCheckDataLength:(BOOL)arg0;
- (void)setIsCocurrentCallback:(BOOL)arg0;
- (id)downloadWithURL:(id)arg0 identifier:(id)arg1 config:(id)arg2;
- (id)downloadWithURL:(id)arg0 identifier:(id)arg1 priority:(long long)arg2 timeoutInterval:(double)arg3 startImmediately:(BOOL)arg4 progressDownload:(BOOL)arg5 heicProgressDownloadForThumbnail:(BOOL)arg6 verifyData:(BOOL)arg7;
- (id)_creatTaskWithURL:(id)arg0 identifier:(id)arg1 timeout:(double)arg2;
- (id)tempPath;
- (void)setTempPath:(id)arg0;
- (Class)downloadTaskClass;
- (BOOL)downloadResumeEnabled;
- (void)setDownloadResumeEnabled:(BOOL)arg0;
- (id)taskWithIdentifier:(id)arg0;
- (BOOL)isTaskInRunningTasks:(id)arg0;
- (void)downloadTaskDidCanceled:(id)arg0;
- (void)downloadTask:(id)arg0 receivedSize:(long long)arg1 expectedSize:(long long)arg2;
- (id)downloadWithURL:(id)arg0 identifier:(id)arg1 startImmediately:(BOOL)arg2;
- (id)downloadWithURL:(id)arg0 identifier:(id)arg1 priority:(long long)arg2 timeoutInterval:(double)arg3 startImmediately:(BOOL)arg4 progressDownload:(BOOL)arg5 verifyData:(BOOL)arg6;
- (id)downloadWithURL:(id)arg0 identifier:(id)arg1 timeoutInterval:(double)arg2 startImmediately:(BOOL)arg3;
- (unsigned long long)stackMode;
- (void)setStackMode:(unsigned long long)arg0;
- (void)setDownloadTaskClass:(Class)arg0;
- (id)weakTasks;
- (void)setWeakTasks:(id)arg0;
- (void)cancelTaskWithIdentifier:(id)arg0;
- (id)init;
- (void)setTimeoutInterval:(double)arg0;
- (void)setOperationQueue:(id)arg0;
- (void).cxx_destruct;
- (double)timeoutIntervalForResource;
- (double)timeoutInterval;
- (id)allTasks;
- (id)operationQueue;
- (id)delegate;
- (void)setTimeoutIntervalForResource:(double)arg0;
- (void)setDelegate:(id)arg0;

@end
