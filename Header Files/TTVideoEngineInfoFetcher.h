//
//     Generated by private class-dump
//

@class NSString, NSDictionary, TTVideoEngineDNSParser, NSError, TTVideoEngineModel, NSMutableDictionary;
@protocol TTVideoEngineNetClient, TTVideoInfoFetcherDelegate;

@interface TTVideoEngineInfoFetcher : NSObject <TTVideoEngineDNSProtocol> {
    BOOL _cacheModelEnable;
    BOOL _useEphemeralSession;
    BOOL _shouldEncrypt;
    BOOL _getMethodEnable;
    BOOL _useFallbackApi;
    id<TTVideoInfoFetcherDelegate> _delegate;
    long long _retryCount;
    double _retryTimeInterval;
    NSString *_apiString;
    NSDictionary *_parameters;
    id<TTVideoEngineNetClient> _networkSession;
    TTVideoEngineModel *_videoModel;
    long long _apiversion;
    NSString *_projectTag;
    long long _retryIndex;
    NSError *_error;
    NSDictionary *_params;
    TTVideoEngineDNSParser *_dnsParser;
    NSString *_apiIPURL;
    NSString *_auth;
    NSString *_videoId;
    NSString *_ptokenString;
    NSString *_urlWithoutParams;
    NSMutableDictionary *_mEnvParams;
    NSMutableDictionary *_mUnEnvParams;
    NSMutableDictionary *_queryMap;
    NSString *_host;
    long long _canceledState;
    NSString *_keyseed;
}

@property (nonatomic) long long retryIndex;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) TTVideoEngineModel *videoModel;
@property (retain, nonatomic) TTVideoEngineDNSParser *dnsParser;
@property (copy, nonatomic) NSString *apiIPURL;
@property (copy, nonatomic) NSString *auth;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *ptokenString;
@property (copy, nonatomic) NSString *urlWithoutParams;
@property (retain, nonatomic) NSMutableDictionary *mEnvParams;
@property (retain, nonatomic) NSMutableDictionary *mUnEnvParams;
@property (nonatomic) BOOL shouldEncrypt;
@property (retain, nonatomic) NSMutableDictionary *queryMap;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) BOOL getMethodEnable;
@property (nonatomic) long long canceledState;
@property (copy, nonatomic) NSString *keyseed;
@property (nonatomic) BOOL useFallbackApi;
@property (weak, nonatomic) id<TTVideoInfoFetcherDelegate> delegate;
@property (nonatomic) long long retryCount;
@property (readonly, nonatomic) double retryTimeInterval;
@property (copy, nonatomic) NSString *apiString;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) id<TTVideoEngineNetClient> networkSession;
@property (nonatomic) BOOL cacheModelEnable;
@property (nonatomic) long long apiversion;
@property (copy, nonatomic) NSString *projectTag;
@property (nonatomic) BOOL useEphemeralSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (void)notifyError:(id)arg0;
- (id)networkSession;
- (void)setNetworkSession:(id)arg0;
- (id)queryMap;
- (void)setQueryMap:(id)arg0;
- (id)keyseed;
- (void)setKeyseed:(id)arg0;
- (id)dnsParser;
- (void)setDnsParser:(id)arg0;
- (BOOL)isDelegateValid;
- (void)parser:(id)arg0 didFailedWithError:(id)arg1;
- (void)parser:(id)arg0 didFinishWithAddress:(id)arg1 error:(id)arg2;
- (void)setUseFallbackApi:(BOOL)arg0;
- (BOOL)useFallbackApi;
- (void)setApiString:(id)arg0;
- (void)setApiversion:(long long)arg0;
- (void)setCacheModelEnable:(BOOL)arg0;
- (BOOL)useEphemeralSession;
- (void)setUseEphemeralSession:(BOOL)arg0;
- (void)fetchInfoWithAPI:(id)arg0 parameters:(id)arg1 auth:(id)arg2 vid:(id)arg3 key:(id)arg4;
- (id)apiString;
- (void)fetchInfoWithAPI:(id)arg0 parameters:(id)arg1 auth:(id)arg2;
- (void)fetchInfoWithAPI:(id)arg0 parameters:(id)arg1 auth:(id)arg2 vid:(id)arg3;
- (id)_getPtokenFromAPIString;
- (void)setPtokenString:(id)arg0;
- (BOOL)cacheModelEnable;
- (void)_didGetVaildVideoInfo:(id)arg0;
- (void)fetchURL;
- (id)ptokenString;
- (void)_cancelByUser:(BOOL)arg0;
- (void)setUrlWithoutParams:(id)arg0;
- (void)setMEnvParams:(id)arg0;
- (void)setMUnEnvParams:(id)arg0;
- (id)urlWithoutParams;
- (id)mEnvParams;
- (id)mUnEnvParams;
- (void)notifyDNSError:(id)arg0;
- (void)setApiIPURL:(id)arg0;
- (long long)apiversion;
- (id)parseAPIString:(id)arg0;
- (void)retryFetchIfNeeded;
- (void)beginToFetch:(id)arg0 postbody:(id)arg1;
- (void)getInfoSuccess:(id)arg0;
- (id)getSignatureGet;
- (id)getSignaturePost:(id)arg0;
- (long long)canceledState;
- (void)setCanceledState:(long long)arg0;
- (BOOL)_tryToNotifyIfCanceled;
- (long long)parseErrorCode:(id)arg0;
- (void)parseDNSWithAPIString:(id)arg0;
- (id)projectTag;
- (void)setProjectTag:(id)arg0;
- (id)apiIPURL;
- (BOOL)getMethodEnable;
- (void)setGetMethodEnable:(BOOL)arg0;
- (id)init;
- (void)setHost:(id)arg0;
- (void)setVideoId:(id)arg0;
- (void).cxx_destruct;
- (void)setRetryCount:(long long)arg0;
- (long long)retryCount;
- (id)host;
- (id)videoId;
- (id)delegate;
- (void)setParameters:(id)arg0;
- (void)cancel;
- (void)setError:(id)arg0;
- (id)params;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)error;
- (id)parameters;
- (BOOL)shouldEncrypt;
- (void)setParams:(id)arg0;
- (void)setShouldEncrypt:(BOOL)arg0;
- (double)retryTimeInterval;
- (id)auth;
- (void)setAuth:(id)arg0;
- (void)setRetryIndex:(long long)arg0;
- (long long)retryIndex;

@end
