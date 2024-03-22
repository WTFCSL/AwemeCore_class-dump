//
//     Generated by private class-dump
//

@class NSString, NSURLSessionTask, NSURLSession;

@interface LVTemplateResourceDownloadOperation : NSOperation <NSURLSessionDataDelegate> {
    BOOL _executing;
    BOOL _finished;
    NSString *_resourceUrlString;
    NSString *_filePath;
    NSString *_md5;
    id /* block */ _completionHandler;
    id /* block */ _progressHandler;
    NSURLSession *_downloadSession;
    NSURLSessionTask *_downloadTask;
}

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSURLSession *downloadSession;
@property (retain, nonatomic) NSURLSessionTask *downloadTask;
@property (readonly, copy, nonatomic) NSString *resourceUrlString;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *md5;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)starDownloadRequest;
- (id)resourceUrlString;
- (id)initWithTemplateSourceURLString:(id)arg0 md5:(id)arg1 filePath:(id)arg2;
- (void)removeOldReourceAfterFinishDownload;
- (void)setProgressHandler:(id /* block */)arg0;
- (void)setFinished:(BOOL)arg0;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (id)operationID;
- (id)filePath;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (BOOL)isExecuting;
- (id /* block */)progressHandler;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)cancel;
- (id /* block */)completionHandler;
- (void)start;
- (void)setExecuting:(BOOL)arg0;
- (id)md5;
- (void)setMd5:(id)arg0;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg0;
- (id)downloadSession;
- (void)setDownloadSession:(id)arg0;
- (void)finishOperation;

@end