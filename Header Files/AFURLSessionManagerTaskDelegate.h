//
//     Generated by private class-dump
//

@class NSString, NSProgress, AFURLSessionManager, NSMutableData, NSURL;

@interface AFURLSessionManagerTaskDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {
    AFURLSessionManager *_manager;
    NSMutableData *_mutableData;
    NSProgress *_progress;
    NSURL *_downloadFileURL;
    id /* block */ _downloadTaskDidFinishDownloading;
    id /* block */ _completionHandler;
}

@property (weak, nonatomic) AFURLSessionManager *manager;
@property (retain, nonatomic) NSMutableData *mutableData;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) NSURL *downloadFileURL;
@property (copy, nonatomic) id /* block */ downloadTaskDidFinishDownloading;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)downloadTaskDidFinishDownloading;
- (void)setDownloadTaskDidFinishDownloading:(id /* block */)arg0;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)setManager:(id)arg0;
- (id)progress;
- (id /* block */)completionHandler;
- (void)setProgress:(id)arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (id)manager;
- (void)setMutableData:(id)arg0;
- (id)mutableData;
- (id)downloadFileURL;
- (void)setDownloadFileURL:(id)arg0;

@end