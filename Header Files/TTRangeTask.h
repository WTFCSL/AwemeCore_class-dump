//
//     Generated by private class-dump
//

@class TTRangeManager, NSMutableDictionary, NSString, NSURL, TTUrlStrategy, DownloadGlobalParameters, TTRangeTracker;
@protocol TTDownloadTaskProtocol;

@interface TTRangeTask : NSObject <TTDownloadTaskProtocol> {
    BOOL _isNeedCommonParams;
    BOOL _isFrist;
    char _remainRetryTimes;
    BOOL _isPcdnType;
    BOOL _isTrySwitchCdn;
    BOOL _isHttpCacheEnable;
    BOOL _isSkipSSLCertificateError;
    BOOL _isSlice;
    NSMutableDictionary *_headers;
    id /* block */ _realProgressCallback;
    id /* block */ _realCompletedCallback;
    NSURL *_fileSavePath;
    NSString *_fileSavePathStr;
    TTRangeManager *_rangeManager;
    TTUrlStrategy *_urlStrategy;
    id /* block */ _realHeaderCallback;
    id<TTDownloadTaskProtocol> _ttnetTask;
    long long _throttleSpeed;
    long long _downloadedLen;
    long long _sliceTotalLen;
    long long _currRangeTotalLen;
    TTRangeTracker *_rangeTracker;
    NSString *_currUrl;
    long long _lastLen;
    id /* block */ _onPcdnStart;
    id /* block */ _onPcdnEnd;
    id /* block */ _onCdnStart;
    id /* block */ _onCdnEnd;
    DownloadGlobalParameters *_param;
    double _protectTimeout;
    double _recvHeaderTimeout;
    double _readDataTimeout;
    double _timeoutInterval;
}

@property (retain) NSMutableDictionary *headers;
@property BOOL isNeedCommonParams;
@property (copy) id /* block */ realProgressCallback;
@property (copy) id /* block */ realCompletedCallback;
@property (retain) NSURL *fileSavePath;
@property (retain) NSString *fileSavePathStr;
@property (retain) TTRangeManager *rangeManager;
@property (retain) TTUrlStrategy *urlStrategy;
@property (copy) id /* block */ realHeaderCallback;
@property (retain) id<TTDownloadTaskProtocol> ttnetTask;
@property long long throttleSpeed;
@property long long downloadedLen;
@property long long sliceTotalLen;
@property long long currRangeTotalLen;
@property BOOL isFrist;
@property char remainRetryTimes;
@property (retain) TTRangeTracker *rangeTracker;
@property (copy) NSString *currUrl;
@property BOOL isPcdnType;
@property long long lastLen;
@property (copy) id /* block */ onPcdnStart;
@property (copy) id /* block */ onPcdnEnd;
@property (copy) id /* block */ onCdnStart;
@property (copy) id /* block */ onCdnEnd;
@property BOOL isTrySwitchCdn;
@property (nonatomic) DownloadGlobalParameters *param;
@property (nonatomic) double protectTimeout;
@property (nonatomic) double recvHeaderTimeout;
@property (nonatomic) double readDataTimeout;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL isHttpCacheEnable;
@property (nonatomic) BOOL isSkipSSLCertificateError;
@property (nonatomic) BOOL isSlice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThrottleNetSpeed:(long long)arg0;
- (void)setRecvHeaderTimeout:(double)arg0;
- (void)setReadDataTimeout:(double)arg0;
- (void)setProtectTimeout:(double)arg0;
- (void)setHeaderCallback:(id /* block */)arg0;
- (id)urlStrategy;
- (void)setUrlStrategy:(id)arg0;
- (void)setIsNeedCommonParams:(BOOL)arg0;
- (void)setRealProgressCallback:(id /* block */)arg0;
- (void)setRealCompletedCallback:(id /* block */)arg0;
- (void)setFileSavePath:(id)arg0;
- (void)setFileSavePathStr:(id)arg0;
- (void)setRangeManager:(id)arg0;
- (void)setSliceTotalLen:(long long)arg0;
- (void)setIsFrist:(BOOL)arg0;
- (void)setRemainRetryTimes:(char)arg0;
- (void)setRangeTracker:(id)arg0;
- (void)setOnPcdnStart:(id /* block */)arg0;
- (void)setOnPcdnEnd:(id /* block */)arg0;
- (void)setOnCdnStart:(id /* block */)arg0;
- (void)setOnCdnEnd:(id /* block */)arg0;
- (void)setIsSlice:(BOOL)arg0;
- (id)ttnetTask;
- (BOOL)isFrist;
- (id /* block */)realHeaderCallback;
- (id /* block */)realProgressCallback;
- (long long)downloadedLen;
- (long long)sliceTotalLen;
- (void)setLastLen:(long long)arg0;
- (BOOL)isPcdnType;
- (id /* block */)onPcdnEnd;
- (id /* block */)onCdnEnd;
- (id)fileSavePathStr;
- (id)rangeManager;
- (id)rangeTracker;
- (id)currUrl;
- (long long)currRangeTotalLen;
- (id /* block */)realCompletedCallback;
- (void)setTtnetTask:(id)arg0;
- (void)setDownloadedLen:(long long)arg0;
- (BOOL)updateNewRange;
- (void)start:(id /* block */)arg0 progressCallback:(id /* block */)arg1 completedCallback:(id /* block */)arg2;
- (BOOL)isTrySwitchCdn;
- (char)remainRetryTimes;
- (void)setIsTrySwitchCdn:(BOOL)arg0;
- (void)setCurrRangeTotalLen:(long long)arg0;
- (void)setCurrUrl:(id)arg0;
- (void)setIsPcdnType:(BOOL)arg0;
- (id /* block */)onPcdnStart;
- (id /* block */)onCdnStart;
- (BOOL)isNeedCommonParams;
- (void)setEnableHttpCache:(BOOL)arg0;
- (id)fileSavePath;
- (BOOL)isSlice;
- (long long)throttleSpeed;
- (double)protectTimeout;
- (double)recvHeaderTimeout;
- (double)readDataTimeout;
- (BOOL)isSkipSSLCertificateError;
- (void)setSkipSSLCertificateError:(BOOL)arg0;
- (void)setThrottleSpeed:(long long)arg0;
- (void)setRealHeaderCallback:(id /* block */)arg0;
- (void)setIsHttpCacheEnable:(BOOL)arg0;
- (void)setIsSkipSSLCertificateError:(BOOL)arg0;
- (id)initWithParam:(id)arg0 cdnUrlsArray:(id)arg1 firstSuccessUrl:(id)arg2 bizId:(id)arg3 urlStrategy:(long long)arg4 startRange:(long long)arg5 endRange:(long long)arg6 stepLen:(long long)arg7 headerField:(id)arg8 needCommonParams:(BOOL)arg9 sliceFullPath:(id)arg10 fileSavePath:(id)arg11 remainRetryTimes:(char)arg12 progressCallback:(id /* block */)arg13 completionHandler:(id /* block */)arg14 pcdnStartCallback:(id /* block */)arg15 pcdnEndCallback:(id /* block */)arg16 cdnStartCallback:(id /* block */)arg17 cdnEndCallback:(id /* block */)arg18 param:(id)arg19 isSlice:(BOOL)arg20;
- (id)getRangeTracker;
- (void)trySwitchCdn;
- (long long)lastLen;
- (BOOL)isHttpCacheEnable;
- (void)setParam:(id)arg0;
- (void)setTimeoutInterval:(double)arg0;
- (void)resume;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)headers;
- (id)param;
- (double)timeoutInterval;
- (void)cancel;
- (void)dealloc;

@end