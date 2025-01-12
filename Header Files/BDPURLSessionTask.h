//
//     Generated by private class-dump
//

@class BDPUploadTaskOutputStream, NSData, NSURLSessionTask, NSURLSessionTaskMetrics, NSString, NSInputStream, NSProgress, BDPMultiRequestBody, NSIndexSet;

@interface BDPURLSessionTask : NSObject <BDPNetworkTaskProtocol, NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate> {
    BOOL _didFinishDownload;
    BOOL _isFirst;
    NSURLSessionTask *_sessionTask;
    BDPMultiRequestBody *_requestBody;
    id *_progress;
    id /* block */ _downloadCompletionHandler;
    id /* block */ _chunkedBinaryCompletionHandler;
    id /* block */ _downloadDataCallback;
    id /* block */ _downloadHeaderCallback;
    id /* block */ _uploadTaskCompletionHandler;
    NSURLSessionTaskMetrics *_metrics;
    NSProgress *_innerProgress;
    NSIndexSet *_acceptableStatusCodes;
    NSInputStream *_inputStream;
    BDPUploadTaskOutputStream *_outputStream;
    NSData *_data;
    struct multiPartFormDataIndexInfo { unsigned long long partIndex; unsigned long long partHadSentDataLength; BOOL isFinish; } _info;
}

@property (retain, nonatomic) NSProgress *innerProgress;
@property (nonatomic) BOOL didFinishDownload;
@property (copy, nonatomic) NSIndexSet *acceptableStatusCodes;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) BDPUploadTaskOutputStream *outputStream;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) NSURLSessionTask *sessionTask;
@property (retain, nonatomic) BDPMultiRequestBody *requestBody;
@property (nonatomic) struct multiPartFormDataIndexInfo { unsigned long long partIndex; unsigned long long partHadSentDataLength; BOOL isFinish; } info;
@property (nonatomic) id *progress;
@property (copy, nonatomic) id /* block */ downloadCompletionHandler;
@property (copy, nonatomic) id /* block */ chunkedBinaryCompletionHandler;
@property (copy, nonatomic) id /* block */ downloadDataCallback;
@property (copy, nonatomic) id /* block */ downloadHeaderCallback;
@property (copy, nonatomic) id /* block */ uploadTaskCompletionHandler;
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAcceptableStatusCodes:(id)arg0;
- (id)acceptableStatusCodes;
- (void)setDownloadHeaderCallback:(id /* block */)arg0;
- (void)setDownloadDataCallback:(id /* block */)arg0;
- (id /* block */)downloadHeaderCallback;
- (id /* block */)downloadDataCallback;
- (void)setChunkedBinaryCompletionHandler:(id /* block */)arg0;
- (BOOL)validateResponse:(id)arg0 error:(id *)arg1;
- (void)setDidFinishDownload:(BOOL)arg0;
- (BOOL)didFinishDownload;
- (id /* block */)chunkedBinaryCompletionHandler;
- (id)innerProgress;
- (void)setInnerProgress:(id)arg0;
- (void)setIsFirst:(BOOL)arg0;
- (id)initWithMultiRequestBody:(id)arg0;
- (void)setUploadTaskCompletionHandler:(id /* block */)arg0;
- (id /* block */)uploadTaskCompletionHandler;
- (id)requestBody;
- (id)init;
- (struct multiPartFormDataIndexInfo { unsigned long long x0; unsigned long long x1; BOOL x2; })info;
- (id)data;
- (void)resume;
- (id)metrics;
- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)setMetrics:(id)arg0;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)setInputStream:(id)arg0;
- (void)setData:(id)arg0;
- (void)suspend;
- (void)setInfo:(struct multiPartFormDataIndexInfo { unsigned long long x0; unsigned long long x1; BOOL x2; })arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)finishTask;
- (void)setOutputStream:(id)arg0;
- (id)outputStream;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)cancel;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (id *)progress;
- (id)inputStream;
- (void)setProgress:(id *)arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id /* block */)arg2;
- (BOOL)isFirst;
- (id)sessionTask;
- (void)setSessionTask:(id)arg0;
- (id /* block */)downloadCompletionHandler;
- (void)setDownloadCompletionHandler:(id /* block */)arg0;
- (void)setRequestBody:(id)arg0;

@end
