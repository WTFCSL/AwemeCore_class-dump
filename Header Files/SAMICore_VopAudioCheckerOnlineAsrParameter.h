//
//     Generated by private class-dump
//

@class NSString;

@interface SAMICore_VopAudioCheckerOnlineAsrParameter : NSObject {
    BOOL _enableOnlineAsr;
    int _connectionTimeout;
    float _werThreshold;
    long long _language;
    NSString *_serverUrl;
    NSString *_appKey;
    NSString *_token;
    long long _tokenType;
}

@property (nonatomic) BOOL enableOnlineAsr;
@property (nonatomic) long long language;
@property (retain, nonatomic) NSString *serverUrl;
@property (retain, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) int connectionTimeout;
@property (nonatomic) long long tokenType;
@property (nonatomic) float werThreshold;

- (void)setEnableOnlineAsr:(BOOL)arg0;
- (void)setWerThreshold:(float)arg0;
- (void)setAppKey:(id)arg0;
- (id)appKey;
- (BOOL)enableOnlineAsr;
- (float)werThreshold;
- (long long)language;
- (void)setTokenType:(long long)arg0;
- (void)setToken:(id)arg0;
- (id)token;
- (int)connectionTimeout;
- (void)setConnectionTimeout:(int)arg0;
- (void)setLanguage:(long long)arg0;
- (void)dealloc;
- (long long)tokenType;
- (id)serverUrl;
- (void)setServerUrl:(id)arg0;

@end
