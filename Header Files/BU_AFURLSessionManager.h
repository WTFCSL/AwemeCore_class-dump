//
//     Generated by private class-dump
//

@class NSLock, NSString, BU_AFSecurityPolicy, NSURLSession, NSArray, NSMutableDictionary, NSOperationQueue, NSObject, NSURLSessionConfiguration;
@protocol BU_AFURLResponseSerialization, OS_dispatch_group, NSURLSessionTaskDelegate, OS_dispatch_queue;

@interface BU_AFURLSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSSecureCoding, NSCopying> {
    BOOL _attemptsToRecreateUploadTasksForBackgroundSessions;
    NSURLSession *_session;
    NSOperationQueue *_operationQueue;
    id<BU_AFURLResponseSerialization> _responseSerializer;
    BU_AFSecurityPolicy *_securityPolicy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    id<NSURLSessionTaskDelegate> _delegate;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSMutableDictionary *_mutableTaskDelegatesKeyedByTaskIdentifier;
    NSLock *_lock;
    id /* block */ _sessionDidBecomeInvalid;
    id /* block */ _sessionDidReceiveAuthenticationChallenge;
    id /* block */ _didFinishEventsForBackgroundURLSession;
    id /* block */ _taskWillPerformHTTPRedirection;
    id /* block */ _taskDidReceiveAuthenticationChallenge;
    id /* block */ _taskNeedNewBodyStream;
    id /* block */ _taskDidSendBodyData;
    id /* block */ _taskDidComplete;
    id /* block */ _dataTaskDidReceiveResponse;
    id /* block */ _dataTaskDidBecomeDownloadTask;
    id /* block */ _dataTaskDidReceiveData;
    id /* block */ _dataTaskWillCacheResponse;
    id /* block */ _downloadTaskDidFinishDownloading;
    id /* block */ _downloadTaskDidWriteData;
    id /* block */ _downloadTaskDidResume;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableDictionary *mutableTaskDelegatesKeyedByTaskIdentifier;
@property (readonly, copy, nonatomic) NSString *taskDescriptionForSessionTasks;
@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) id /* block */ sessionDidBecomeInvalid;
@property (copy, nonatomic) id /* block */ sessionDidReceiveAuthenticationChallenge;
@property (copy, nonatomic) id /* block */ didFinishEventsForBackgroundURLSession;
@property (copy, nonatomic) id /* block */ taskWillPerformHTTPRedirection;
@property (copy, nonatomic) id /* block */ taskDidReceiveAuthenticationChallenge;
@property (copy, nonatomic) id /* block */ taskNeedNewBodyStream;
@property (copy, nonatomic) id /* block */ taskDidSendBodyData;
@property (copy, nonatomic) id /* block */ taskDidComplete;
@property (copy, nonatomic) id /* block */ dataTaskDidReceiveResponse;
@property (copy, nonatomic) id /* block */ dataTaskDidBecomeDownloadTask;
@property (copy, nonatomic) id /* block */ dataTaskDidReceiveData;
@property (copy, nonatomic) id /* block */ dataTaskWillCacheResponse;
@property (copy, nonatomic) id /* block */ downloadTaskDidFinishDownloading;
@property (copy, nonatomic) id /* block */ downloadTaskDidWriteData;
@property (copy, nonatomic) id /* block */ downloadTaskDidResume;
@property (retain, nonatomic) id<BU_AFURLResponseSerialization> responseSerializer;
@property (retain, nonatomic) BU_AFSecurityPolicy *securityPolicy;
@property (readonly, nonatomic) NSArray *tasks;
@property (readonly, nonatomic) NSArray *dataTasks;
@property (readonly, nonatomic) NSArray *uploadTasks;
@property (readonly, nonatomic) NSArray *downloadTasks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup;
@property (nonatomic) BOOL attemptsToRecreateUploadTasksForBackgroundSessions;
@property (weak, nonatomic) id<NSURLSessionTaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)setResponseSerializer:(id)arg0;
- (id)responseSerializer;
- (id /* block */)downloadTaskDidFinishDownloading;
- (void)setDownloadTaskDidFinishDownloading:(id /* block */)arg0;
- (void)setMutableTaskDelegatesKeyedByTaskIdentifier:(id)arg0;
- (void)addDelegateForUploadTask:(id)arg0 progress:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)addDelegateForDownloadTask:(id)arg0 progress:(id /* block */)arg1 destination:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)taskDidResume:(id)arg0;
- (void)taskDidSuspend:(id)arg0;
- (id)taskDescriptionForSessionTasks;
- (id)mutableTaskDelegatesKeyedByTaskIdentifier;
- (void)setDelegate:(id)arg0 forTask:(id)arg1;
- (id)dataTasks;
- (id)uploadTasks;
- (id)tasksForKeyPath:(id)arg0;
- (BOOL)attemptsToRecreateUploadTasksForBackgroundSessions;
- (id)delegateForTask:(id)arg0;
- (void)setSessionDidBecomeInvalid:(id /* block */)arg0;
- (void)setSessionDidReceiveAuthenticationChallenge:(id /* block */)arg0;
- (void)setDidFinishEventsForBackgroundURLSession:(id /* block */)arg0;
- (void)setTaskNeedNewBodyStream:(id /* block */)arg0;
- (void)setTaskWillPerformHTTPRedirection:(id /* block */)arg0;
- (void)setTaskDidReceiveAuthenticationChallenge:(id /* block */)arg0;
- (void)setTaskDidSendBodyData:(id /* block */)arg0;
- (void)setTaskDidComplete:(id /* block */)arg0;
- (void)setDataTaskDidReceiveResponse:(id /* block */)arg0;
- (void)setDataTaskDidBecomeDownloadTask:(id /* block */)arg0;
- (void)setDataTaskDidReceiveData:(id /* block */)arg0;
- (void)setDataTaskWillCacheResponse:(id /* block */)arg0;
- (void)setDownloadTaskDidWriteData:(id /* block */)arg0;
- (void)setDownloadTaskDidResume:(id /* block */)arg0;
- (id /* block */)taskWillPerformHTTPRedirection;
- (id /* block */)dataTaskDidReceiveResponse;
- (id /* block */)dataTaskWillCacheResponse;
- (id /* block */)didFinishEventsForBackgroundURLSession;
- (id /* block */)sessionDidBecomeInvalid;
- (id /* block */)sessionDidReceiveAuthenticationChallenge;
- (id /* block */)taskDidReceiveAuthenticationChallenge;
- (id /* block */)taskNeedNewBodyStream;
- (id /* block */)taskDidSendBodyData;
- (void)removeDelegateForTask:(id)arg0;
- (id /* block */)dataTaskDidBecomeDownloadTask;
- (id /* block */)dataTaskDidReceiveData;
- (id /* block */)downloadTaskDidWriteData;
- (id /* block */)downloadTaskDidResume;
- (void)invalidateSessionCancelingTasks:(BOOL)arg0;
- (id)uploadTaskWithStreamedRequest:(id)arg0 progress:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)setSessionDidBecomeInvalidBlock:(id /* block */)arg0;
- (void)setSessionDidReceiveAuthenticationChallengeBlock:(id /* block */)arg0;
- (void)setDidFinishEventsForBackgroundURLSessionBlock:(id /* block */)arg0;
- (void)setTaskNeedNewBodyStreamBlock:(id /* block */)arg0;
- (void)setTaskWillPerformHTTPRedirectionBlock:(id /* block */)arg0;
- (void)setTaskDidReceiveAuthenticationChallengeBlock:(id /* block */)arg0;
- (void)setTaskDidSendBodyDataBlock:(id /* block */)arg0;
- (void)setTaskDidCompleteBlock:(id /* block */)arg0;
- (void)setDataTaskDidReceiveResponseBlock:(id /* block */)arg0;
- (void)setDataTaskDidBecomeDownloadTaskBlock:(id /* block */)arg0;
- (void)setDataTaskDidReceiveDataBlock:(id /* block */)arg0;
- (void)setDataTaskWillCacheResponseBlock:(id /* block */)arg0;
- (void)setDownloadTaskDidFinishDownloadingBlock:(id /* block */)arg0;
- (void)setDownloadTaskDidWriteDataBlock:(id /* block */)arg0;
- (void)setDownloadTaskDidResumeBlock:(id /* block */)arg0;
- (void)setAttemptsToRecreateUploadTasksForBackgroundSessions:(BOOL)arg0;
- (void)addDelegateForDataTask:(id)arg0 uploadProgress:(id /* block */)arg1 downloadProgress:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)addNotificationObserverForTask:(id)arg0;
- (void)removeNotificationObserverForTask:(id)arg0;
- (id)dataTaskWithRequest:(id)arg0 uploadProgress:(id /* block */)arg1 downloadProgress:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)dataTaskWithRequest:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)setCompletionQueue:(id)arg0;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (id)init;
- (void)setOperationQueue:(id)arg0;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)setSession:(id)arg0;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (id)completionQueue;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)session;
- (void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)sessionConfiguration;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)setSessionConfiguration:(id)arg0;
- (id)securityPolicy;
- (void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1;
- (id)operationQueue;
- (id)delegate;
- (id)lock;
- (void)setSecurityPolicy:(id)arg0;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)initWithCoder:(id)arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)completionGroup;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)setLock:(id)arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id /* block */)arg2;
- (void)setCompletionGroup:(id)arg0;
- (id)tasks;
- (id /* block */)taskDidComplete;
- (id)downloadTasks;
- (id)initWithSessionConfiguration:(id)arg0;

@end