//
//     Generated by private class-dump
//

@class TTVideoEngineInfoFetcher, NSString, NSDictionary, TTVideoEngineModel;
@protocol TTVideoEngineNetClient;

@interface TTVideoEngineDownloadVidTask : TTVideoEngineDownloadTask <TTVideoInfoFetcherDelegate> {
    BOOL _baseDashEnable;
    BOOL _httpsEnable;
    BOOL _boeEnable;
    unsigned long long _resolution;
    long long _codecType;
    NSDictionary *_params;
    NSDictionary *_resolutionMap;
    id<TTVideoEngineNetClient> _netClient;
    unsigned long long _apiVersion;
    id /* block */ _apiStringCall;
    id /* block */ _authCall;
    unsigned long long _currentResolution;
    TTVideoEngineModel *_videoModel;
    TTVideoEngineInfoFetcher *_fetcher;
    NSString *_apiString;
    NSString *_authString;
    NSString *_fallbackApi;
    NSString *_keyseed;
    long long _retryCount;
}

@property (nonatomic) unsigned long long resolution;
@property (nonatomic) long long codecType;
@property (nonatomic) BOOL baseDashEnable;
@property (nonatomic) BOOL httpsEnable;
@property (retain, nonatomic) TTVideoEngineInfoFetcher *fetcher;
@property (retain, nonatomic) TTVideoEngineModel *videoModel;
@property (nonatomic) unsigned long long currentResolution;
@property (copy, nonatomic) NSString *apiString;
@property (copy, nonatomic) NSString *authString;
@property (copy, nonatomic) NSString *fallbackApi;
@property (copy, nonatomic) NSString *keyseed;
@property (nonatomic) long long retryCount;
@property (readonly, copy, nonatomic) NSString *videoId;
@property (readonly, nonatomic) BOOL bytevc1Enable;
@property (nonatomic) BOOL boeEnable;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSDictionary *resolutionMap;
@property (retain, nonatomic) id<TTVideoEngineNetClient> netClient;
@property (nonatomic) unsigned long long apiVersion;
@property (copy, nonatomic) id /* block */ apiStringCall;
@property (copy, nonatomic) id /* block */ authCall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskItem;
+ (id)vidTaskWithVid:(id)arg0 resolution:(unsigned long long)arg1 codec:(long long)arg2 baseDash:(BOOL)arg3 https:(BOOL)arg4;
+ (id)vidTaskWithVideoModel:(id)arg0 resolution:(unsigned long long)arg1;

- (id)authString;
- (void)setAuthString:(id)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (void)setNetClient:(id)arg0;
- (void)setApiStringCall:(id /* block */)arg0;
- (BOOL)boeEnable;
- (id)resolutionMap;
- (id)keyseed;
- (void)setKeyseed:(id)arg0;
- (void)setResolutionMap:(id)arg0;
- (id)fallbackApi;
- (void)setApiString:(id)arg0;
- (id)netClient;
- (void)setFallbackApi:(id)arg0;
- (void)infoFetcherDidFinish:(long long)arg0;
- (void)infoFetcherDidFinish:(id)arg0 error:(id)arg1;
- (void)infoFetcherShouldRetry:(id)arg0;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:(id)arg0;
- (id)apiString;
- (BOOL)httpsEnable;
- (id /* block */)apiStringCall;
- (id /* block */)authCall;
- (void)setHttpsEnable:(BOOL)arg0;
- (void)setBoeEnable:(BOOL)arg0;
- (void)setAuthCall:(id /* block */)arg0;
- (void)setupBaseFiled;
- (BOOL)_shouldRetry:(id)arg0;
- (void)receiveError:(id)arg0;
- (id)availableLocalFilePath;
- (void)assignWithDict:(id)arg0;
- (void)setBaseDashEnable:(BOOL)arg0;
- (void)_downloadWithVideoModel:(id)arg0;
- (void)_fetchVideoModel;
- (BOOL)baseDashEnable;
- (BOOL)_downloadWithUrlInfo:(id)arg0;
- (BOOL)bytevc1Enable;
- (void)invalidateAndCancel;
- (void)setResolution:(unsigned long long)arg0;
- (void)resume;
- (unsigned long long)resolution;
- (void).cxx_destruct;
- (void)setRetryCount:(long long)arg0;
- (id)jsonDict;
- (long long)retryCount;
- (void)suspend;
- (void)setApiVersion:(unsigned long long)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)params;
- (unsigned long long)apiVersion;
- (id)fetcher;
- (void)setParams:(id)arg0;
- (void)setFetcher:(id)arg0;
- (long long)codecType;
- (void)setCodecType:(long long)arg0;
- (unsigned long long)currentResolution;
- (void)setCurrentResolution:(unsigned long long)arg0;

@end
