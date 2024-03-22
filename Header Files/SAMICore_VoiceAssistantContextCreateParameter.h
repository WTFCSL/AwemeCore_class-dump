//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol SAMICoreCallbackListener;

@interface SAMICore_VoiceAssistantContextCreateParameter : NSObject {
    BOOL _enableTransferRetry;
    int _connectTimeout;
    NSString *_url;
    NSString *_header;
    NSString *_protoVersion;
    NSString *_appKey;
    long long _tokenType;
    NSString *_token;
    NSArray *_retryTimeArray;
    NSString *_businessInfo;
    id<SAMICoreCallbackListener> _listener;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *protoVersion;
@property (retain, nonatomic) NSString *appKey;
@property (nonatomic) long long tokenType;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) int connectTimeout;
@property (nonatomic) BOOL enableTransferRetry;
@property (retain, nonatomic) NSArray *retryTimeArray;
@property (retain, nonatomic) NSString *businessInfo;
@property (retain, nonatomic) id<SAMICoreCallbackListener> listener;

- (id)businessInfo;
- (void)setEnableTransferRetry:(BOOL)arg0;
- (void)setRetryTimeArray:(id)arg0;
- (void)setAppKey:(id)arg0;
- (void)setBusinessInfo:(id)arg0;
- (id)appKey;
- (BOOL)enableTransferRetry;
- (id)retryTimeArray;
- (id)listener;
- (id)protoVersion;
- (void)setTokenType:(long long)arg0;
- (void)setUrl:(id)arg0;
- (void)setToken:(id)arg0;
- (id)header;
- (void)setListener:(id)arg0;
- (id)token;
- (void)setHeader:(id)arg0;
- (void)setProtoVersion:(id)arg0;
- (void)dealloc;
- (id)url;
- (long long)tokenType;
- (int)connectTimeout;
- (void)setConnectTimeout:(int)arg0;

@end
