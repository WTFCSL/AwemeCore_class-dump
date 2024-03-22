//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface IESLCPushConfig : NSObject {
    BOOL _disableLongConnection;
    BOOL _enableAppStateReport;
    int _appId;
    int _fpid;
    long long _deviceId;
    long long _installId;
    NSString *_appKey;
    NSString *_sessionId;
    NSDictionary *_customParams;
    NSDictionary *_customHeaders;
    NSArray *_urls;
    NSString *_uid;
}

@property (nonatomic) int appId;
@property (nonatomic) int fpid;
@property (nonatomic) long long deviceId;
@property (nonatomic) long long installId;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSDictionary *customHeaders;
@property (readonly, copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL disableLongConnection;
@property (nonatomic) BOOL enableAppStateReport;

- (void)setAppKey:(id)arg0;
- (void)setInstallId:(long long)arg0;
- (id)appKey;
- (long long)installId;
- (void)setFpid:(int)arg0;
- (void)setCustomParams:(id)arg0;
- (id)customParams;
- (int)fpid;
- (BOOL)enableAppStateReport;
- (void)setEnableAppStateReport:(BOOL)arg0;
- (BOOL)disableLongConnection;
- (void)setDisableLongConnection:(BOOL)arg0;
- (id)urls;
- (void)setUid:(id)arg0;
- (id)uid;
- (void)setAppId:(int)arg0;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (long long)deviceId;
- (id)sessionId;
- (id)token;
- (void)setUrls:(id)arg0;
- (void)setDeviceId:(long long)arg0;
- (int)appId;
- (id)customHeaders;
- (void)setCustomHeaders:(id)arg0;

@end