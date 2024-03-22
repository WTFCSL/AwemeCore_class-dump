//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol TTVideoEngineNetClient;

@interface TTVideoEnginePreloaderVidItem : NSObject {
    BOOL _dashEnable;
    BOOL _httpsEnable;
    BOOL _boeEnable;
    BOOL _onlyFetchVideoModel;
    NSString *_videoId;
    unsigned long long _resolution;
    long long _preloadSize;
    long long _codecType;
    NSDictionary *_params;
    NSString *_tag;
    NSString *_subTag;
    long long _priorityLevel;
    NSDictionary *_resolutionMap;
    id<TTVideoEngineNetClient> _netClient;
    unsigned long long _apiVersion;
    id /* block */ _apiStringCall;
    id /* block */ _authCall;
    id /* block */ _fetchDataEnd;
    id /* block */ _usingUrlInfo;
    id /* block */ _cacheFilePath;
    id /* block */ _preloadEnd;
    id /* block */ _preloadCanceled;
    id /* block */ _preloadDidStart;
    id /* block */ _preloadProgress;
}

@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) unsigned long long resolution;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long codecType;
@property (nonatomic) BOOL byteVC1Enable;
@property (nonatomic) BOOL dashEnable;
@property (nonatomic) BOOL httpsEnable;
@property (nonatomic) BOOL boeEnable;
@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subTag;
@property (nonatomic) long long priorityLevel;
@property (nonatomic) BOOL onlyFetchVideoModel;
@property (retain, nonatomic) NSDictionary *resolutionMap;
@property (retain, nonatomic) id<TTVideoEngineNetClient> netClient;
@property (nonatomic) unsigned long long apiVersion;
@property (copy, nonatomic) id /* block */ apiStringCall;
@property (copy, nonatomic) id /* block */ authCall;
@property (copy, nonatomic) id /* block */ fetchDataEnd;
@property (copy, nonatomic) id /* block */ usingUrlInfo;
@property (copy, nonatomic) id /* block */ cacheFilePath;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;

+ (id)preloaderVidItem:(id)arg0 reslution:(unsigned long long)arg1 preloadSize:(long long)arg2 isByteVC1:(BOOL)arg3;
+ (id)preloaderVidItem:(id)arg0 reslution:(unsigned long long)arg1 preloadSize:(long long)arg2 codec:(long long)arg3;

- (long long)preloadSize;
- (void)setPreloadSize:(long long)arg0;
- (void)setNetClient:(id)arg0;
- (void)setPreloadEnd:(id /* block */)arg0;
- (void)setPreloadCanceled:(id /* block */)arg0;
- (void)setUsingUrlInfo:(id /* block */)arg0;
- (void)setDashEnable:(BOOL)arg0;
- (void)setApiStringCall:(id /* block */)arg0;
- (BOOL)boeEnable;
- (id)resolutionMap;
- (void)setResolutionMap:(id)arg0;
- (id)netClient;
- (id /* block */)usingUrlInfo;
- (id /* block */)preloadProgress;
- (id /* block */)preloadEnd;
- (id /* block */)preloadDidStart;
- (BOOL)dashEnable;
- (BOOL)httpsEnable;
- (id /* block */)apiStringCall;
- (id /* block */)authCall;
- (id /* block */)preloadCanceled;
- (id /* block */)fetchDataEnd;
- (BOOL)onlyFetchVideoModel;
- (id)subTag;
- (void)setHttpsEnable:(BOOL)arg0;
- (void)setBoeEnable:(BOOL)arg0;
- (void)setByteVC1Enable:(BOOL)arg0;
- (BOOL)byteVC1Enable;
- (void)setSubTag:(id)arg0;
- (void)setOnlyFetchVideoModel:(BOOL)arg0;
- (void)setAuthCall:(id /* block */)arg0;
- (void)setFetchDataEnd:(id /* block */)arg0;
- (void)setPreloadDidStart:(id /* block */)arg0;
- (void)setPreloadProgress:(id /* block */)arg0;
- (void)setResolution:(unsigned long long)arg0;
- (id /* block */)cacheFilePath;
- (void)setVideoId:(id)arg0;
- (unsigned long long)resolution;
- (void).cxx_destruct;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)videoId;
- (void)setApiVersion:(unsigned long long)arg0;
- (id)params;
- (unsigned long long)apiVersion;
- (void)setPriorityLevel:(long long)arg0;
- (long long)priorityLevel;
- (void)setParams:(id)arg0;
- (long long)codecType;
- (void)setCodecType:(long long)arg0;
- (void)setCacheFilePath:(id /* block */)arg0;

@end