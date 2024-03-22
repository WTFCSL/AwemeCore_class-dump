//
//     Generated by private class-dump
//

@protocol SAMICoreCallbackListener;

@interface SAMICore_VcContextCreateParameter : NSObject {
    BOOL _enableAudioCache;
    int _connectTimeout;
    int _maxBlockSize;
    int _audioCacheSize;
    const char *_url;
    const char *_header;
    const char *_appKey;
    long long _tokenType;
    const char *_token;
    long long _timestamp;
    const char *_saveFileDir;
    id<SAMICoreCallbackListener> _listener;
}

@property (nonatomic) const char *url;
@property (nonatomic) const char *header;
@property (nonatomic) const char *appKey;
@property (nonatomic) int connectTimeout;
@property (nonatomic) long long tokenType;
@property (nonatomic) const char *token;
@property (nonatomic) long long timestamp;
@property (nonatomic) int maxBlockSize;
@property (nonatomic) BOOL enableAudioCache;
@property (nonatomic) int audioCacheSize;
@property (nonatomic) const char *saveFileDir;
@property (retain, nonatomic) id<SAMICoreCallbackListener> listener;

- (void)setAppKey:(const char *)arg0;
- (void)setMaxBlockSize:(int)arg0;
- (const char *)appKey;
- (int)maxBlockSize;
- (const char *)saveFileDir;
- (void)setSaveFileDir:(const char *)arg0;
- (BOOL)enableAudioCache;
- (void)setEnableAudioCache:(BOOL)arg0;
- (int)audioCacheSize;
- (void)setAudioCacheSize:(int)arg0;
- (long long)timestamp;
- (id)listener;
- (void)setTokenType:(long long)arg0;
- (void)setUrl:(const char *)arg0;
- (void)setToken:(const char *)arg0;
- (const char *)header;
- (void)setListener:(id)arg0;
- (const char *)token;
- (void)setTimestamp:(long long)arg0;
- (void)setHeader:(const char *)arg0;
- (const char *)url;
- (long long)tokenType;
- (int)connectTimeout;
- (void)setConnectTimeout:(int)arg0;

@end
