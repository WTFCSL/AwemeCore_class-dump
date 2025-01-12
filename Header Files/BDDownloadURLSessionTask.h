//
//     Generated by private class-dump
//

@class NSString, NSURLSessionTask, NSDictionary, NSData, NSMutableData, BDDownloadURLSessionManager, NSNumber;

@interface BDDownloadURLSessionTask : BDDownloadTask <NSURLSessionDownloadDelegate, NSURLSessionDataDelegate, BDWebImageDownloadTaskResponseInfo> {
    BOOL _hasContentLength;
    BDDownloadURLSessionManager *_sessionManager;
    NSURLSessionTask *_task;
    NSDictionary *_HTTPResponseHeaders;
    NSDictionary *_HTTPRequestHeaders;
    NSData *_resumeData;
    NSMutableData *_imageData;
    NSNumber *_DNSDuration;
    NSNumber *_connetDuration;
    NSNumber *_sslDuration;
    NSNumber *_sendDuration;
    NSNumber *_waitDuration;
    NSNumber *_receiveDuration;
    NSNumber *_totalDuration;
    long long _cacheControlTime;
    NSNumber *_isSocketReused;
    NSNumber *_isFromProxy;
    NSString *_mimeType;
    long long _statusCode;
    NSString *_nwSessionTrace;
    NSDictionary *_responseHeaders;
    NSNumber *_isHitCDNCache;
    NSString *_imageXDemotion;
    NSString *_imageXWantedFormat;
    NSString *_imageXRealGotFormat;
    NSNumber *_imageXConsistent;
}

@property (copy, nonatomic) NSDictionary *HTTPResponseHeaders;
@property (copy, nonatomic) NSDictionary *HTTPRequestHeaders;
@property (retain, nonatomic) NSData *resumeData;
@property (retain, nonatomic) NSMutableData *imageData;
@property (nonatomic) BOOL hasContentLength;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (weak, nonatomic) BDDownloadURLSessionManager *sessionManager;
@property (retain, nonatomic) NSNumber *DNSDuration;
@property (retain, nonatomic) NSNumber *connetDuration;
@property (retain, nonatomic) NSNumber *sslDuration;
@property (retain, nonatomic) NSNumber *sendDuration;
@property (retain, nonatomic) NSNumber *waitDuration;
@property (retain, nonatomic) NSNumber *receiveDuration;
@property (retain, nonatomic) NSNumber *totalDuration;
@property (nonatomic) long long cacheControlTime;
@property (retain, nonatomic) NSNumber *isSocketReused;
@property (retain, nonatomic) NSNumber *isFromProxy;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *nwSessionTrace;
@property (copy, nonatomic) NSDictionary *responseHeaders;
@property (retain, nonatomic) NSNumber *isHitCDNCache;
@property (copy, nonatomic) NSString *imageXDemotion;
@property (copy, nonatomic) NSString *imageXWantedFormat;
@property (copy, nonatomic) NSString *imageXRealGotFormat;
@property (retain, nonatomic) NSNumber *imageXConsistent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *isCached;
@property (readonly, copy, nonatomic) NSString *remoteIP;
@property (readonly, nonatomic) NSNumber *remotePort;
@property (readonly, copy, nonatomic) NSString *requestLog;

- (id)HTTPRequestHeaders;
- (void)setDNSDuration:(id)arg0;
- (void)setConnetDuration:(id)arg0;
- (void)setSslDuration:(id)arg0;
- (void)setWaitDuration:(id)arg0;
- (id)isSocketReused;
- (void)setIsSocketReused:(id)arg0;
- (id)isFromProxy;
- (void)setIsFromProxy:(id)arg0;
- (void)setNwSessionTrace:(id)arg0;
- (void)setCacheControlTime:(long long)arg0;
- (void)setIsHitCDNCache:(id)arg0;
- (void)setImageXDemotion:(id)arg0;
- (void)setImageXWantedFormat:(id)arg0;
- (void)setImageXRealGotFormat:(id)arg0;
- (id)imageXRealGotFormat;
- (void)setImageXConsistent:(id)arg0;
- (id)connetDuration;
- (id)sslDuration;
- (id)waitDuration;
- (long long)cacheControlTime;
- (id)nwSessionTrace;
- (id)isHitCDNCache;
- (id)imageXDemotion;
- (id)imageXWantedFormat;
- (id)imageXConsistent;
- (void)resetTask;
- (void)saveTempInfo;
- (void)cleanTempFile;
- (void)setHTTPResponseHeaders:(id)arg0;
- (void)setHTTPRequestHeaders:(id)arg0;
- (void)setHasContentLength:(BOOL)arg0;
- (BOOL)hasContentLength;
- (long long)statusCode;
- (id)totalDuration;
- (void)setStatusCode:(long long)arg0;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (id)DNSDuration;
- (void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (id)mimeType;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)setResponseHeaders:(id)arg0;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (id)responseHeaders;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)setImageData:(id)arg0;
- (void)setMimeType:(id)arg0;
- (void)_cancel;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)setTask:(id)arg0;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)HTTPResponseHeaders;
- (void)start;
- (void)dealloc;
- (id)task;
- (id)sendDuration;
- (id)imageData;
- (id)sessionManager;
- (void)setSendDuration:(id)arg0;
- (id)resumeData;
- (void)setResumeData:(id)arg0;
- (void)setTotalDuration:(id)arg0;
- (void)setSessionManager:(id)arg0;
- (void)setReceiveDuration:(id)arg0;
- (id)receiveDuration;

@end
