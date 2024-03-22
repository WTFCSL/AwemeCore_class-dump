//
//     Generated by private class-dump
//

@class NSURLSessionDownloadTask, NSString, NSURLSession;

@interface BU_ZFImageDownloader : NSObject <NSURLSessionDownloadDelegate> {
    NSURLSession *_session;
    NSURLSessionDownloadTask *_task;
    unsigned long long _totalLength;
    unsigned long long _currentLength;
    id /* block */ _progressBlock;
    id /* block */ _callbackOnFinished;
}

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionDownloadTask *task;
@property (nonatomic) unsigned long long totalLength;
@property (nonatomic) unsigned long long currentLength;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ callbackOnFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentLength:(unsigned long long)arg0;
- (void)setCallbackOnFinished:(id /* block */)arg0;
- (id /* block */)callbackOnFinished;
- (void)startDownloadImageWithUrl:(id)arg0 progress:(id /* block */)arg1 finished:(id /* block */)arg2;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)setSession:(id)arg0;
- (id)session;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)setProgressBlock:(id /* block */)arg0;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)setTask:(id)arg0;
- (void)cancel;
- (id /* block */)progressBlock;
- (void)dealloc;
- (id)task;
- (unsigned long long)currentLength;
- (void)setTotalLength:(unsigned long long)arg0;
- (unsigned long long)totalLength;

@end
