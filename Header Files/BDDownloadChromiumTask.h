//
//     Generated by private class-dump
//

@class NSString, NSProgress, NSDictionary, NSMutableData, TTHttpTask, NSNumber;

@interface BDDownloadChromiumTask : BDDownloadTask <BDWebImageDownloadTaskResponseInfo> {
    long long realSize;
    TTHttpTask *_task;
    NSProgress *_downloadProgress;
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
    NSNumber *_isCached;
    NSNumber *_isFromProxy;
    NSString *_remoteIP;
    NSNumber *_remotePort;
    NSString *_requestLog;
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

@property (retain, nonatomic) NSProgress *downloadProgress;
@property (nonatomic) long long expectedSize;
@property (nonatomic) long long realSize;
@property (retain, nonatomic) NSMutableData *imageData;
@property (retain, nonatomic) TTHttpTask *task;
@property (retain, nonatomic) NSNumber *DNSDuration;
@property (retain, nonatomic) NSNumber *connetDuration;
@property (retain, nonatomic) NSNumber *sslDuration;
@property (retain, nonatomic) NSNumber *sendDuration;
@property (retain, nonatomic) NSNumber *waitDuration;
@property (retain, nonatomic) NSNumber *receiveDuration;
@property (retain, nonatomic) NSNumber *totalDuration;
@property (nonatomic) long long cacheControlTime;
@property (retain, nonatomic) NSNumber *isSocketReused;
@property (retain, nonatomic) NSNumber *isCached;
@property (retain, nonatomic) NSNumber *isFromProxy;
@property (copy, nonatomic) NSString *remoteIP;
@property (retain, nonatomic) NSNumber *remotePort;
@property (copy, nonatomic) NSString *requestLog;
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

- (void)setRequestLog:(id)arg0;
- (id)requestLog;
- (void)callbackActionWithError:(id)arg0 Obj:(id)arg1 response:(id)arg2;
- (id)remoteIP;
- (void)setDNSDuration:(id)arg0;
- (void)setConnetDuration:(id)arg0;
- (void)setSslDuration:(id)arg0;
- (void)setWaitDuration:(id)arg0;
- (id)isSocketReused;
- (void)setIsSocketReused:(id)arg0;
- (id)isFromProxy;
- (void)setIsFromProxy:(id)arg0;
- (void)setRemoteIP:(id)arg0;
- (void)responseCache:(id)arg0;
- (void)setRealSize:(long long)arg0;
- (id)creat_complete_handle_queue;
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
- (long long)realSize;
- (long long)statusCode;
- (id)downloadProgress;
- (id)totalDuration;
- (void)setStatusCode:(long long)arg0;
- (id)DNSDuration;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setResponseHeaders:(id)arg0;
- (id)remotePort;
- (id)responseHeaders;
- (id)initWithURL:(id)arg0;
- (void)setImageData:(id)arg0;
- (void)setMimeType:(id)arg0;
- (void)_cancel;
- (void)setDownloadProgress:(id)arg0;
- (void)setTask:(id)arg0;
- (void)start;
- (void)dealloc;
- (id)task;
- (void)setRemotePort:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)sendDuration;
- (id)imageData;
- (void)setSendDuration:(id)arg0;
- (id)isCached;
- (void)setIsCached:(id)arg0;
- (void)startDownload;
- (void)setTotalDuration:(id)arg0;
- (void)setReceiveDuration:(id)arg0;
- (id)receiveDuration;

@end
